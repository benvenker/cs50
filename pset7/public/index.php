<?php

    // configuration
    require("../includes/config.php"); 

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
    
    // render positions
    render("portfolio.php", ["positions" => $positions, "title" => "Portfolio"]);

    // render current cash holdings
    render("portfolio.php", ["cash" => 10000.00, "title" => "Portfolio"]);
 
?>
