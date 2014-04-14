<?php

    // configuration
    require("../includes/functions.php");
    
        
    // get stock symbol
    if ($_SERVER["REQUEST_METHOD"] == "POST")
    {
        if ( empty($_POST["symbol"]) )
        {
            apologize("You must provide a symbol");          
        }
        
        $s = lookup($_POST["symbol"]);
        
        if ($s === false)
        {
            apologize("Invalid symbol, please try again."); 
        }
        else
        {
            // display stock quote
            render("quote.php", ["price" => $s["price"] ]);
            // print("Price: " . number_format($s["price"], 2, '.', '')); // need to format to 2 to 4 decimal places using number_format
        }
    }
    else
    {
        // display form
        render("quote_form.php", ["title" => "quote"]);
    }
    
?>
