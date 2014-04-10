<?php

    // configuration
    require("../includes/config.php"); 

    // define rows
    $rows = query("SELECT symbol, shares FROM portfolios WHERE id = ?", $_SESSION["id"]);
    
    // define positions
    $positions = [];
    foreach ($rows as $row)
    {
        $stock = lookup($row["symbol"]);
        if ($stock !== false)
        {
            $positions[] = [
                "name" => $stock["name"],
                "price"=> $stock["price"],
                "shares" => $row["shares"],
                "symbol" => $row["symbol"]
            ];
        }
    }
    
    // define cash
    $cash = query("SELECT cash FROM users WHERE id = ?", $_SESSION["id"]);
    
    // render positions
    render("portfolio.php", ["positions" => $positions, "title" => "Portfolio"],
                            ["cash" => $cash]);
          // ("portfolio.php", ["cash" => 10000.00, "title" => "Portfolio"]) );

    // render current cash holdings
    // render("portfolio.php", ["cash" => 10000.00, "title" => "Portfolio"]);
 
?>
