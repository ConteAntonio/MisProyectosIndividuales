<?php 
include_once "Php/config.php"; 
             
session_start(); 

   
   if($_SERVER["REQUEST_METHOD"] == "POST") {
    
      
      $myusername = mysqli_real_escape_string($db,$_POST['usuario']);
      $mypassword = mysqli_real_escape_string($db,$_POST['password']); 
      
      $sql = "SELECT idusuario FROM usuarios WHERE username = '$myusername' and password = '$mypassword'";
      $result = mysqli_query($db,$sql);
      $row = mysqli_fetch_array($result,MYSQLI_ASSOC);
      if ( isset($_SESSION['username']) ){
        
      $active = $row['active'];
      }
      $count = mysqli_num_rows($result);
      
    
      
      if($count == 1) {
      
         $_SESSION['login_user'] = $myusername;
        
         
     
   $a = mysqli_query($db,"SELECT idusuario FROM usuarios where username ='$myusername'");
   $s = mysqli_fetch_assoc($a);
      $_SESSION['id']=  $s['idusuario'];;

   
         header("location: Php/welcome.php");
      }else {
      
      }
   }
?>

<html>
<head>
  <title>SOAD`S FAN WEBPAGE</title>
  <link rel="stylesheet" type="text/css" href="Css/style.css">

</head>
<body>


    <div class="container">
        <div class="card card-container">
           <img id="user" src="img/user.png" height="140" width="140">

            <p id="profile-name" class="profile-name-card"></p>
            <form action = "" method = "post"  class="form-signin">
                <span id="reauth-email" class="reauth-email"></span>
                <input name = "usuario" type="text" id="inputEmail" class="form-control" placeholder="username" required autofocus>
                <input type="password" name ="password"  id="inputPassword" class="form-control" placeholder="Password" required>
                <div id="remember" class="checkbox">
                    <label>
                        <input type="checkbox" value="remember-me"> Remember me
                    </label>
                </div>
                <button class="btn btn-lg btn-primary btn-block btn-signin" type="submit">Sign in</button>
            </form><!-- /form -->
              <br>
           
            <br>
            <br>
            <a href="Php/regis.php" class="forgot-password">
                Dont have an account?
            </a>
        </div>
    </div>
</body>
</html>

