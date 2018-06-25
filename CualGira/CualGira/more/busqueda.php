<!DOCTYPE html>
<html>
<head>
<title>BUSQUEDA</title>
			<link rel="stylesheet" type="text/css" href="../css/favo.css">

</head>


<div class="tab">
 <a href="Boliches2.php"><button class="tablinks" onclick="openCity(event, 'London')">BOLICHES</button></a>
 <a href="Bares2.php"> <button class="tablinks" onclick="openCity(event, 'Paris')">BARES</button></a>
  <a href=" favoritos.php"><button class="tablinks">FAVORITOS</button></a>

  <a href="evento.php"><button class="tablinks">EVENTOS</button></a>
   <a href="busqueda.php"><button class="tablinks">BUSCAR</button></a>
   <a href="Nosotros.html"><button class="tablinks">NOSOTROS</button></a>
   <br>
</div>
 <br> <br> <br> <br>

<?php

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

<section class= "yuri" style="height:70%" >
    <h1  style="  text-align:center;"> Buscar</h1>
<article>
<p align="center">
	<form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
	<select style="  text-align:center;"name="name"  value= "<?php echo $name;  ?>">
<?php
	$miinfo = mysqli_query($conn, "select * from bares");
	
	while($record = mysqli_fetch_array($miinfo)){
		echo '<option style="text-align:center;" value="' .$record['Nombre']. '">'. $record['Nombre']. '</option>';
	}

?>
	<span>* <?php echo $nameErr;?></span>
</select>
<input   style="  text-align:center;" type="submit" name="submit" value="Buscar">
</form>
</p>
</article>

<?php
	
	$sql1 = "SELECT * FROM bares WHERE Nombre = '".$name."'";

    
    $result1 = mysqli_query($conn,$sql1);

	if (!$result1) {
    		printf("Error: %s\n", mysqli_error($conn));
    		exit();
	}

		
	while($row = $result1->fetch_assoc()) {
        echo "<br></br>".$row["Nombre"]. " ". $row["Ubicacion"]."<br></br><img  style='  text-align:center;' src='https://maps.googleapis.com/maps/api/staticmap?
        &center=". $row["Ubicacion"]."&zoom=16
        &size=600x300&maptype=roadmap

        &style=feature:poi|visibility:simplified
        &markers=color:blue%7Csize=mid%7C".$row["Ubicacion"].",capital+federal,argentina
        &key=AIzaSyDjPwDFZCzlpTDJQQtkOOKVoswYpIAqYgU'>";

    }
    

	CloseCon($conn);

?>
</section>
</body>
</html>















