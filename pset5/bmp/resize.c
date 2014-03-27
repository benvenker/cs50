/**
 * resize.c
 *
 * Computer Science 50
 * Problem Set 5
 *
 * Resizes a BMP.
 */
       
#include <stdio.h>
#include <stdlib.h>

#include "bmp.h"

int main(int argc, char* argv[])
{
    // ensure proper usage
    if (argc != 4)
    {
        printf("Usage: ./copy infile outfile\n");
        return 1;
    }

    // resize factor
    int n = atoi(argv[1]);
    
    // remember filenames
    char* infile = argv[2];
    char* outfile = argv[3];

    // open input file 
    FILE* inptr = fopen(infile, "r");
    if (inptr == NULL)
    {
        printf("Could not open %s.\n", infile);
        return 2;
    }

    // open output file
    FILE* outptr = fopen(outfile, "w");
    if (outptr == NULL)
    {
        fclose(inptr);
        fprintf(stderr, "Could not create %s.\n", outfile);
        return 3;
    }

    // read infile's BITMAPFILEHEADER
    BITMAPFILEHEADER bf;
    fread(&bf, sizeof(BITMAPFILEHEADER), 1, inptr);

    // read infile's BITMAPINFOHEADER
    BITMAPINFOHEADER bi;
    fread(&bi, sizeof(BITMAPINFOHEADER), 1, inptr);  

    // ensure infile is (likely) a 24-bit uncompressed BMP 4.0
    if (bf.bfType != 0x4d42 || bf.bfOffBits != 54 || bi.biSize != 40 || 
        bi.biBitCount != 24 || bi.biCompression != 0)
    {
        fclose(outptr);
        fclose(inptr);
        fprintf(stderr, "Unsupported file format.\n");
        return 4;
    }
    
    // store orginal images size
    int orgHeight = bi.biHeight;
    int orgWidth = bi.biWidth;
   // int orgSize = bi.biSize;
    
    // determine padding for scanlines
    int padding =  (4 - (bi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;
    
   
    // determine padding for scanlines
    int padding2 =  padding;


    if (n > 1)
    {   
        // set new height, width and size
        bi.biHeight = n * orgHeight;
        bi.biWidth = abs(n * orgWidth);
        
        padding2 =  (4 - (bi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;
        
        bi.biSizeImage = (bi.biWidth * abs(bi.biHeight)*3) + (padding2 * abs(bi.biHeight));
        bf.bfSize = bi.biSizeImage + bf.bfOffBits;  
     }
     
    // write outfile's BITMAPFILEHEADER
    fwrite(&bf, sizeof(BITMAPFILEHEADER), 1, outptr);

    // write outfile's BITMAPINFOHEADER
    fwrite(&bi, sizeof(BITMAPINFOHEADER), 1, outptr);
    
    // iterate over infile's scanlines
    for (int i = 0; i < abs(orgHeight); i++)
    {         
        // temporary storage
        RGBTRIPLE triple;
        
        // create pos object to store position
        fpos_t *position = malloc(sizeof(fpos_t));
        
        // get current position of input file
        fgetpos(inptr, position);
        
        for (int m = 0; m < n; m++)
        {
            fsetpos(inptr, position);
              
            // iterate over column pixels in scanline
            for (int j = 0; j < orgWidth; j++)
            {                                             
                // read RGB triple from infile
                fread(&triple, sizeof(RGBTRIPLE), 1, inptr);  

                // write RGB triple to outfile n times
                for (int k = 0; k < n; k++)
                {          
                    fwrite(&triple, sizeof(RGBTRIPLE), 1, outptr);                                            
                }                                                                    
             }  
                  
            // then add it back (to demonstrate how)
            if (n % 4 != 0)
            {
                for (int l = 0; l < padding2; l++)
                {
                    fputc(0x00, outptr);
                }
            } 
        }
        // skip over padding, if any
        fseek(inptr, padding, SEEK_CUR);             
    }
    
    // close infile
    fclose(inptr);

    // close outfile
    fclose(outptr);

    // that's all folks
    return 0;
}
