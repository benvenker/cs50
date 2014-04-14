<?php
    // configuration
    require("../includes/config.php");
    
    // generate list of the user's stocks
    
    $rows = query("SELECT symbol FROM portfolios WHERE id = ?", $_SESSION["id"]);
    
    // define positions
    $positions = [];
    foreach ($rows as $row)
    {
        $stock = lookup($row["symbol"]);
        if ($stock !== false)
        {
            $positions[] = [
                "symbol" => $row["symbol"]
            ];
        }
    }
    
    render("sell.php", [ "symbol" => "symbol" ]);
    

    
    // sell the stock
    if ($_SERVER["REQUEST_METHOD"] == "POST")
    {
        if ( empty($_POST["symbol"]) )
        {
            apologize("You must select a stock to sell.");          
        }
        
        $s = lookup($_POST["symbol"]);
        
        if ($s === false)
        {
            apologize("You don't own this stock, please try again."); 
        }
        else
        {
            // credit user account with proceeds of the sale
            query("UPDATE users SET cash = cash + (shares * price) WHERE id = ?", $_SESSION["id"]);
            
            // delete the stock from your portfolio
            query("DELETE FROM portfolios WHERE id =? AND symbol =?", $_SESSION["id"], $_POST["symbol"]);
            
        }
    }
    else
    {
        // else render form
        render("sell.php", ["title" => "sell"]);
    }
?>
