<?php

    // configuration
    require("../includes/config.php"); 

    // render portfolio
    render("portfolio.php", ["cash" => 10000.00, "title" => "Portfolio"]);

?>
