<!DOCTYPE html>

<html>
  <head>
      <title>Be Better</title>
    </head>
    <body>
        <?php if (empty($_POST["Event"]) || empty($_POST["Frequency"])): ?>
          You must provide an event name and desired frequency.  Go <a href="better.php">back</a>.
        <?php else: ?>
          You're so better right now.
        <?php endif ?>
    </body>
</html>
