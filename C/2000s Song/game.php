<?php
session_start();
include('music_data.php');

if(!isset($_SESSION['score'])){
    $_SESSION['score'] = 0;
}
$randomIndex = array rand($musics);
$selectedMusic = $musics[$randomIndex];
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=devide-width, initial-scale=1.0">
    <title>Guess the Song</title>
    <link rel="stylesheet" href="style.css">
</head>
    <body>
        <h2>Guess the Song!</h2>
        <div class="emoji">
            <?php acho $selectedMusic['emojis'];?>
        </div>
    <div class="options">
        <?php foreach ($selectedMusic['options'] as $option) : ?>
    <button onclick="checkAnswer('<?php echo $option; ?>', '<?php echo $selectedMusic['answer'];?>')">
        <?php echo $option; ?>
        </button>
    <?php endforeach; ?>
</div>

<div id="feedback"></div>
    <script>
        function checkAnswer(selected, correctAnswer) {
            if (selected === correctAnswer){
    document.getElementByld('feedback').innerText = 'Correct! Click "Next Song" to continue. ';
            } else {
                document.getElementById('feedback').innerText = 'Try again! The correct answer is ' + correctAnswer;
            }
        }
</script>
        </body>
            </html>