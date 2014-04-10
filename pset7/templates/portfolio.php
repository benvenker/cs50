<div>
    <img alt="Under Construction" src="/img/construction.gif"/>
</div>
<div name="holdings">
    <h2>Holdings</h2>
    
    <?php foreach ($positions as $position): ?>
    
        <tr>
            <td><?= $position["symbol"] ?></td>
            <td><?= $position["shares"] ?></td>
            <td><?= $position["price"] ?></td>
        </tr>
        
    <?php endforeach ?>
    
    </br>
    
    <h2>Cash Balance:</h2>
    <?= print($cash["id"]); ?>
    
</div>
<div>
    <a href="logout.php">Log Out</a>
</div>
