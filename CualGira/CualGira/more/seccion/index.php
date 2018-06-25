<?php

function OpenCon()
{
	$dbhost = "localhost";
	$dbuser = "root";
	$dbpass = "31CURCksX4ZgMo9u";
	$db = "bar";
	$conn = new mysqli($dbhost, $dbuser, $dbpass, $db) or die("Connect failedL %s\m". $conn -> error);
	return $conn;
}
function CloseCon($conn)
{
	$conn -> close();
}
?>