<?php
function bb()
{

	include 'db_connection.php';
	session_start();
	$conn = OpenCon();
	$miinfo = mysqli_query($conn, "
		select bares.Nombre, horario, name from eventos
		left join bares
		on eventos.barC = bares.id;");
		if (!$miinfo) {
    		printf("Error: %s\n", mysqli_error($conn));
    		exit();
	}
	while($record = mysqli_fetch_array($miinfo)){
			echo $record['Nombre']." ".$record['horario']." ".$record['name']."\n";
	}
}
bb();
?>
