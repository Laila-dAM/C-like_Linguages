<?php session_start(); ?>
<!DOCTYPE html>
<html lang="en">
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Game Over</title>
        <link rel="stylesheet" href="style.css">
        </head>
<body>
    <h1>Game Over!</h1>
    <p>Your score: <?php echo $_SESSION['score']; ?></p>
    <button onclick="location.href='game.php'">Play Again</button>
    <button onclick="location.href='index.php'">Exit</button>
    </body>
    </html>