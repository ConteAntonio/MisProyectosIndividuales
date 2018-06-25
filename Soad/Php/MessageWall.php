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

<html>
<head>
  <title></title>
 <!-- Latest compiled and minified CSS -->
<link rel="stylesheet" type="text/css" href="Css/style.css">

 <script type="text/javascript" src="../Js/jquery-3.3.1.min.js"></script>
<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css" integrity="sha384-BVYiiSIFeK1dGmJRAkycuHAHRg32OmUcww7on3RYdg4Va+PmSTsz/K68vbdEjh4u" crossorigin="anonymous">
<link rel="stylesheet" type="text/css" href="bootstrap.css">

<!-- Optional theme -->
<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap-theme.min.css" integrity="sha384-rHyoN1iRsVXV4nD0JutlnGaslCJuC7uwjduW9SVrLvRYooPp2bWYgmgJQIXwl/Sp" crossorigin="anonymous">

<!-- Latest compiled and minified JavaScript -->
<script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js" integrity="sha384-Tc5IQib027qvyjSMfHjOMaLkfuWVxZxUPnCJA7l2mCWNIpG9mGCD8wGNIcPD7Txa" crossorigin="anonymous"></script>
 <script type="text/javascript" src="meme.js"></script>
</head>
<body>
      
<nav  class="navbar navbar-inverse"  >
  <div class="container-fluid"  >
    <!-- Brand and toggle get grouped for better mobile display -->
    <div class="navbar-header"  >
        <div id="color">
      <button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#bs-example-navbar-collapse-1" aria-expanded="false">
        <span class="sr-only">Toggle navigation</span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
        <span class="icon-bar"></span>
      </button>
      <a class="navbar-brand" href="#">SOAD FANS UNITE</a>
       <a class="navbar-brand" href="welcome.php">Home</a>
       
        <a class="navbar-brand" href="Song.php">Todays Song</a>
         <a class="navbar-brand" href="#">Messagge Wall</a>

         <a class="navbar-brand" href="About.php">This</a>
    </div>
    </div>

    <!-- Collect the nav links, forms, and other content for toggling -->

    <div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">
      
      <ul class="nav navbar-nav navbar-right">

        <li><a href="#">Link</a></li>
        <li class="dropdown">
          <a href="#" class="dropdown-toggle" data-toggle="dropdown" role="button" aria-haspopup="true" aria-expanded="false">Dropdown <span class="caret"></span></a>
          <ul class="dropdown-menu">
            <li><a href="#">Action</a></li>
            <li><a href="#">Configuracion</a></li>
            <li><a href="#">Something else here</a></li>
            <li role="separator" class="divider"></li>
            <li><a href="#">Salir</a></li>
          </ul>
        </li>
      </ul>

    </div><!-- /.navbar-collapse -->
  </div><!-- /.container-fluid -->

</nav>
<div class="container">
  <div class="jumbotron">
<h2>Deja aqui lo que quieras decirle a la banda(?)</h2>
  
  </div>
</div>
<div class="container">
  <div class="jumbotron">
  <div class="form-group">
   <div class="embed-responsive embed-responsive-4by3">
  <iframe class="embed-responsive-item" src="mensaje.php"></iframe>
 </div>
 <br>
 <br>
 <br>
 
  <iframe class="embed-responsive-item" src="sendbox.php" style="width:100%"></iframe>



</div>
</div></div>
</body>
</html>