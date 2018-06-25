<?php 

  
  $host = "localhost";
  $user = "id4424396_antonio";
  $pass = "super20";

  $databaseName = "id4424396_soaddb";
  $tableName = "WallM";

  include 'config.php';
  $con = mysqli_connect($host,$user,$pass,$databaseName);
  $dbs = mysqli_select_db( $con,$databaseName);

  


 
     $result = mysqli_query($con,"SELECT $tableName.idmensaje,$tableName.mensaje, usuarios.username FROM $tableName inner join usuarios on usuarios.idusuario=$tableName.fkusuario");
  
      
    $results = array();
    while($row = mysqli_fetch_assoc($result))
    {
       $results[] = array(
           'idmensaje' => $row['idmensaje'],
          'mensaje' => $row['mensaje'],
          'username' => $row['username'],
         
       );
    }
    echo json_encode($results);
  

?>