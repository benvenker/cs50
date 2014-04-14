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
    render("portfolio.php", ["positions" => $positions, "cash" => $cash[0], "title" => "Portfolio"]);
?>
