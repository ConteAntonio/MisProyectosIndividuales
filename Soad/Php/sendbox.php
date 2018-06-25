<?php
    
    include 'config.php';
    session_start(); 

    if(isset($_POST['mensaje'])){
        $mensaje = $_POST['mensaje'];

        $a=$_SESSION['id'];
        $query = "INSERT INTO `WallM` (fkusuario, mensaje) VALUES ( '$a','$mensaje')";
        $result = mysqli_query($db, $query);
       
    }
    ?> 
<!DOCTYPE html>
<html>
<head>

<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css" integrity="sha384-BVYiiSIFeK1dGmJRAkycuHAHRg32OmUcww7on3RYdg4Va+PmSTsz/K68vbdEjh4u" crossorigin="anonymous">
<link rel="stylesheet" type="text/css" href="../Css/bootstrap.css">

<!-- Optional theme -->
<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap-theme.min.css" integrity="sha384-rHyoN1iRsVXV4nD0JutlnGaslCJuC7uwjduW9SVrLvRYooPp2bWYgmgJQIXwl/Sp" crossorigin="anonymous">

<!-- Latest compiled and minified JavaScript -->
<script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js" integrity="sha384-Tc5IQib027qvyjSMfHjOMaLkfuWVxZxUPnCJA7l2mCWNIpG9mGCD8wGNIcPD7Txa" crossorigin="anonymous"></script>
 
	<title></title>
</head>
<body>
	<label for="exampleTextarea">Tu mensaje:</label>
  <form  action="#"  method="post" id="me" >

    
    <textarea class="form-control" id="exampleTextarea" name="mensaje" rows="3"></textarea>
  
<input class="submit" type="submit" value="Send" onsubmit="return false" />
</form>
</body>
</html>