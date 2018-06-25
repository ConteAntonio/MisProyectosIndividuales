<?php
   include("db_connection.php");
   session_start();
   $conn = OpenCon();
   
   if($_SERVER["REQUEST_METHOD"] == "POST") {
      // username and password sent from form 
      
      $myusername = mysqli_real_escape_string($conn,$_POST['username']);
      $mypassword = mysqli_real_escape_string($conn,$_POST['password']); 
      
      $sql = "SELECT id FROM usuarios WHERE Usuario = '$myusername' and Password = '$mypassword'";
      $result = mysqli_query($conn,$sql);
      $row = mysqli_fetch_array($result,MYSQLI_NUM);
      $active = empty($row['active']);
      if (!$result) {
         printf("Error: %s\n", mysqli_error($conn));
         exit();
      }
      $count = mysqli_num_rows($result);
      
      // If result matched $myusername and $mypassword, table row must be 1 row
        
      if($count == 1) {
         $_SESSION['login_user'] = $myusername;
          echo"<script type = 'text/javascript'>

    alert('El ingreso ha sido exitoso')
  window.location='../Boliches2.php';
    </script>";
    sleep(3);
    
      }else {
         $error = "Your Login Name or Password is invalid";

      }
   }
?>
<html>
   
   <head>
    <link rel="stylesheet" type="text/css" href="../../css/login.css">
      <title>Login Page</title>
      
     
   </head>
   
   <body >
     <content>
               <form action = "" method = "post">
               <p class="text">LOGIN</p>

               <p class="text">USUARIO</p>
                <br>
                 <br>
                  <br>
                 <br>
                <input type = "text" name = "username" class = "box"/>
                <br>
                 <br>
                 <br>
                 <p class="text">CONTRASEÑA</p>

                  <br>
                 <br>
                 <input type = "password" name = "password" class = "box" />
                 <br>
                 <br>

                 <br> 
                  <input class="submit" type = "submit" value = " Ingresar "/>
                <a href="regi.php">  <button class="submit2"> Crear Usuario </button></a>
                   </form>
                    <a href="regi.php">  <button class="submit2"> REGISTRARSE </button></a>
               </content>
             
           

   </body>
</html>