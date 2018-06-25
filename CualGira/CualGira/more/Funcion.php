<?php
function bb()
{

	include 'db_connection.php';
	session_start();
	$conn = OpenCon();
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
		select bares.Nombre, usuarios.Usuario from favoritos
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
			echo $record['Nombre']. " " .$record['Usuario']. "\n";

	}
}

bb();

?>
