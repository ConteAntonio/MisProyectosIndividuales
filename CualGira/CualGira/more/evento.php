<!DOCTYPE html>
<html>
<head>
<title>EVENTOS</title>
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
<br><br><br>
<article class="yuri" style="height:50%" >
    <h1  style="  text-align:center;">Eventos</h1>
<?php

include 'db_connection.php';
	$conn = OpenCon();
	$miinfo = mysqli_query($conn, "
		select bares.Nombre, horario, name from eventos
		left join bares
		on eventos.barC = bares.id;");
		if (!$miinfo) {
    			}

	while($record = mysqli_fetch_array($miinfo)){
			echo "<hr><div class='eventu'  style='  text-align:center;'>".$record['Nombre']." ".$record['horario']." ".$record['name']."</div>";
	};
?>
</article >
</body>
</html>
