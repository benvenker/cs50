<form action="sell.php" method="get">
    <fieldset>
        <div class="form-group">
            <select class="form-control" name="symbol">
             <!-- TODO generate navbar -->
             <option value=0>Choose
            
             <?php foreach ($positions as $position): ?>

                <option value=\"-1\"><?= $position["symbol"] ?></option>
                
            <?php endforeach ?>
             </select>
             
         </div>
         <div class="form-group">
            <button type="submit" class="btn btn-default">Sell</button>
        </div>
    </fieldset>
</form>



