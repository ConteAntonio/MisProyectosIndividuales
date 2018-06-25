<!DOCTYPE html>
<html>
<head>
<script src="https://code.jquery.com/jquery-3.1.0.min.js"></script>

<link rel="stylesheet" type="text/css" href="../css/principal.css">
<title>CUALGIRA</title>
</head>
<body id="body">


<div class="tab">
 <a href="Boliches2.php"><button class="tablinks" onclick="openCity(event, 'London')">BOLICHES</button></a>
 <a href="reservas.php"> <button class="tablinks" onclick="openCity(event, 'Paris')">BARES</button></a>
 
  <a href=" favoritos.php"><button class="tablinks"> FAVORITOS</button></a> 
  <a href="evento.php"><button class="tablinks">EVENTOS</button></a>
   <a href="busqueda.php"><button class="tablinks">BUSCAR</button></a>
   <a href="Nosotros.html"><button class="tablinks">NOSOTROS</button></a>
</div>

	
  			
		

	

		 <h3>Tab2</h3>
		 		<h3 style="opacity:0">map</h3>
  				<h3 style="opacity:0">map</h3>
  				<h3 style="opacity:0">map</h3>
  				<h3 style="opacity:0">map</h3>
		 <div class="mapa"> <iframe src="bares.html" width="680" height="510"></iframe></div>
	
			<div id="Favo" class="tabcontent">
			<h3>MAPA</h3>
			<h3 style="opacity:0">map</h3>
  				<h3 style="opacity:0">map</h3>
  				<h3 style="opacity:0">map</h3>
  				<h3 style="opacity:0">map</h3>
  				<h3 style="opacity:0">map</h3>
  				<h3 style="opacity:0">map</h3>	
				<button onclick ="myAjax()">Ver favoritos</button>
				<script src="https://ajax.googleapis.com/ajax/libs/jquery/2.1.3/jquery.min.js"></script>
    			<script type = "text/javascript">
				function myAjax () {
					$.ajax( { type : 'POST',
          			data : { },
          			url  : 'Funcion.php',              // <=== CALL THE PHP FUNCTION HERE.
          			success: function ( data ) {
            			alert( data );               // <=== VALUE RETURNED FROM FUNCTION.
          			},
          			error: function ( xhr ) {
            		alert( "error" );
          		}
        }	);
}
</script>
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
<input type="submit" name="submit" value="Submit">
</form>>
</p>
</article>
</section>>
</script>
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


	CloseCon($conn);

?>

</div>
	<div id="Reser" class="tabcontent">	<H3>SDFSD</H3>
          <h3 style="opacity:0">map</h3>
  				<h3 style=" opacity:0">map</h3>
  				<h3 style="opacity:0">map</h3>
  				<h3 style="opacity:0">map</h3>
  				<h3 style="opacity:0">map</h3>
  				<h3 style="opacity:0">map</h3>
  <a href="reservas.php"><button  >VER RESERVAS</button></a></div>

	<div id="Evento" class="tabcontent">
		      <h3 style="opacity:0">map</h3>
  				<h3 style="opacity:0">map</h3>
  				<h3 style="opacity:0">map</h3>
  				<h3 style="opacity:0">map</h3>
  				<h3 style="opacity:0">map</h3>
  				<h3 style="opacity:0">map</h3>

  <a href="evento.php"><button>Ver eventos</button></a>  
				

	</div>
</body>
</html>