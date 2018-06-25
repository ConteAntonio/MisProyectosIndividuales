<!DOCTYPE html>
<html>

<body>
<link rel="stylesheet" type="text/css" href="../../css/regi.css">
  <?php
    // define variables and set to empty values
  $telefonoErr = $direccionErr = $nameErr =  $emailErr =$PaswordErr = "";
  $telefono = $direccion = $name = $email = $Password = "";

  include 'db_connection.php';
  $conn = OpenCon();
  
  if ($_SERVER ["REQUEST_METHOD"] == "POST") {
  if (empty($_POST["name"])) {
    $nameErr = "Es necesario el nombre";
  } else {
    $name = test_input($_POST ["name"]);
  }
  if (empty($_POST["direccion"])) {
    $direccionErr = "Es necesaria la direccion";
  } else {
    $direccion = test_input($_POST ["direccion"]);
  }

  if (empty($_POST["telefono"])) {
    $telefonoErr = "Es necesaria el telefono";
  } else {
    $telefono = test_input($_POST ["telefono"]);
  }
  
  if (empty($_POST["email"])) {
    $emailErr = "Se necesita email";
  } else {
    $email = test_input($_POST ["email"]);
  }
  if (empty($_POST["Password"])) {
    $PaswordErr = "Se necesita contra";
  } else {
    $Password = test_input($_POST["Password"]);
    sleep(3);
    echo"<script type = 'text/javascript'>

    alert('El registro ha sido exitoso')
  window.location=' ../home.php';
    </script>";
    sleep(3);
    


  }
}

function test_input($data) {
  $data = trim($data);
  $data = stripslashes($data);
  $data = htmlspecialchars($data);
  return $data;
}
?>
  <body >

                
            

<content>
      <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">  
        <p class="text">REGISTRARSE</p>
          <p class="text">USUARIO</p>
           <br>
      
     <input  class="box" type="text" name="name"  value= "<?php echo $name;  ?>">
      <span> <?php echo $nameErr;?></span>
      <br>
       <br>
        <br>
          <p class="text">CONTRASEÑA</p>
           <br>
      <input class="box" type="password" name="Password" value="<?php echo $Password;  ?>">
      <br>
       <br>
        <br>
          <p class="text">TELEFONO</p>
           <br>
      <input class="box" type="text" name="telefono" value="<?php echo $telefono;  ?>">
      <br>
       <br>
        <br>
          <p class="text">DIRECCION</p>
           <br>
     <input  class="box" type="text" name="direccion" value="<?php echo $direccion;  ?>">
     <br>
       <br>
        <br>
          <p class="text">EMAIL</p>
           <br>
     <input  class="box" type="text" name="email" value="<?php echo $email;  ?>">
      
      
    <br>
      <br><br>
       <br>
      <input class="submit" type="submit" name="submit" value="Registrar">  
      </form>

 </content>


<script>
// Get the modal
var modal = document.getElementById('id01');

// When the user clicks anywhere outside of the modal, close it
window.onclick = function(event) {
    if (event.target == modal) {
        modal.style.display = "none";
    }
}
</script>
<?php
// echo "<h2>Your Input:</h2>";
// echo $name;
// echo "<br>";
// echo $Password;
// echo "<br>";

$sql = "insert Into usuarios (Usuario, Password, Telefono, Direccion, Email) VALUES ('".$name."','".$Password."','".$telefono."','".$direccion."', '".$email."')";
if($conn ->query($sql)== TRUE){
  // echo "se subio bien";

}else{
  // echo"Error: " .$sql. "<br>" .$conn->error;
}
CloseCon($conn);

?>

</body>
</html>
