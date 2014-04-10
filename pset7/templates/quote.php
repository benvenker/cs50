<?php
    // retrieve stock quote
    // get stock symbol
    if ($_SERVER["REQUEST_METHOD"] == "POST")
    {
        if ( empty($_POST["symbol"]) )
        {
            apologize("You must provide a symbol");
            
        }
    }
    $s = lookup($_POST["symbol"]);
    
    if ($s === false)
    {
        apologize("Invalid symbol, please try again."); 
    }
    else
    {
        // display stock quote
        print("Price: " . $s["price"]); // need to format to 2 to 4 decimal places using number_format
    }
?>
