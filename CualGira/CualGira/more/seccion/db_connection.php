<?php

function OpenCon()
{
	$dbhost = "localhost";
	$dbuser = "id3700889_root";
	$dbpass = "asdasd";
	$db = "id3700889_bar";
	$conn = new mysqli($dbhost, $dbuser, $dbpass, $db) or die("Connect failedL %s\m". $conn -> error);
	return $conn;
}
function CloseCon($conn)
{
	$conn -> close();
}

?>