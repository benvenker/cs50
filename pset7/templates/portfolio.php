<div name="portfolio">
    <h2>Portfolio</h2>
    
<table class="table table-striped">

    <thead>
        <tr>
            <th>Symbol</th>
            <th>Name</th>
            <th>Shares</th>
            <th>Price</th>
            <th>Total</th>
          <!--  <th>Cash: <?= $cash["cash"]; ?></th> -->
        </tr>
    </thead>
        
    
    <tbody>
        <?php foreach ($positions as $position): ?>
        <?php setlocale(LC_MONETARY, 'en_US'); ?>
            <tr>
                <td><?= $position["symbol"] ?></td>
                <td><?= $position["name"] ?></td>
                <td><?= $position["shares"] ?></td>
                <td><?= $position["price"] ?></td>
                <td><?=  money_format('%.2n', ($position["price"] * $position["shares"]) ); ?></td>
            </tr>
        <?php endforeach ?>    
        
    </tbody>
</table>
    
    
    <h2 name="cash-balance">Cash Balance:</h2>
    <p><?= money_format( '%.2n', ($cash["cash"] * 1) ) ; ?></p>
    
</div>
<div>
    <a href="logout.php">Log Out</a>
</div>
