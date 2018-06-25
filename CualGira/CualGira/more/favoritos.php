<!DOCTYPE html>
<html>
<head>
<title>FAVORITOS</title>
		<link rel="stylesheet" type="text/css" href="../css/favo.css">
</head>


<body>
<div class="tab">
 <a href="Boliches2.php"><button class="tablinks" onclick="openCity(event, 'London')">BOLICHES</button></a>
 <a href="reservas.php"> <button class="tablinks" onclick="openCity(event, 'Paris')">BARES</button></a>
 
  <a href=" favoritos.php"><button class="tablinks"> FAVORITOS</button></a> 
  <a href="evento.php"><button class="tablinks">EVENTOS</button></a>
   <a href="busqueda.php"><button class="tablinks">BUSCAR</button></a>
   <a href="Nosotros.html"><button class="tablinks">NOSOTROS</button></a>
   <br>
</div>
<?php
	session_start();
	$nameErr = "";
	$name =  "";
	include 'db_connection.php';
	$conn = OpenCon();
    
	function test_input($data) {
		 $data = trim($data);
		 $data = stripslashes($data);
		 $data = htmlspecialchars($data);
		 return $data;
	}
    
    
    
	if ($_SERVER ["REQUEST_METHOD"] == "POST") {
		 if (empty($_POST["name"])) {
		   $nameErr = "Name is required";
	 } else {
   		$name = test_input($_POST ["name"]);
 	}
 
 	
}

?>
<div class="lista">
<section>
<article>
<p align="center">
	<form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
	<select name="name"  value= "<?php echo $name;  ?>">

<?php
	$miinfo = mysqli_query($conn, "select * from bares");
	while($record = mysqli_fetch_array($miinfo)){
		echo '<option value="' .$record['Nombre']. '">'. $record['Nombre']. '</option>';
	}
?>

	<span class="error">* <?php echo $nameErr;?></span>
</select>

<input class='juan' type="submit" name="submit" value="Agregar">
</form>
</p>
</article>
</section>
</div>
<content class='yuri'><h3 style="  text-align:center;">Mis Favoritos</h3>
<?php
	$lmao = $_SESSION['login_user'];
	$sql1 = "SELECT id FROM bares WHERE Nombre = '".$name."'";
	$sql2 = "SELECT id FROM usuarios WHERE Usuario ='".$lmao."'";
    
    $result1 = mysqli_query($conn,$sql1);
	$result2 = mysqli_query($conn, $sql2);
	if (!$result1) {
    		printf("Error: %s\n", mysqli_error($conn));
    		exit();
	}
	if (!$result2) {
    		printf("Error: %s\n", mysqli_error($conn));
    		exit();
	}
	$id= null;
	while($row = $result1->fetch_assoc()) {
        $id =$row["id"];
    }
    $id2 = null;
	while($row1 = $result2->fetch_assoc()) {
        	$id2 =$row1["id"];
    }
	$sql = "insert Into favoritos (Usuario, Bar) VALUES (".$id2.",".$id.")";
	
	if($conn ->query($sql)== TRUE){

	

	}	
	$s = $_SESSION['login_user'];
	$sql1 = "SELECT id FROM usuarios WHERE Usuario = '".$s."'";
    $result1 = mysqli_query($conn,$sql1);
	
	if (!$result1) {
    		printf("Error: %s\n", mysqli_error($conn));
    		exit();
	}
	
	$id= null;
	while($row = $result1->fetch_assoc()) {
        $id =$row["id"];
    }
	
	$miinfo = mysqli_query($conn, "
		select bares.Nombre, bares.Ubicacion from favoritos
		left join bares
		on bares.id = favoritos.Bar
		left join usuarios
		on usuarios.id = favoritos.Usuario
		where favoritos.Usuario =" .$id. ";");
		
		if (!$miinfo) {
    		printf("Error: %s\n", mysqli_error($conn));
    		exit();
	}
	
	
	while($record = mysqli_fetch_array($miinfo)){
			echo "<br></br> <hr><p class='me' style='text-align:center;'>".$record['Ubicacion']. " - " .$record['Nombre']. "</p>";

	}

	CloseCon($conn);

?>
</content>
</body>
</html>
