<!DOCTYPE html>
<html>
<head>
	<title>aa</title>

	  <script type="text/javascript" src="../Js/jquery-3.3.1.min.js"></script>
</head>
<body>
<div id="Mensajes"></div>
<script id="source" language="javascript" type="text/javascript">
var array=[0];
  setInterval((function () 
  {
  
  
         $.ajax({
                type : 'POST',
                url : 'api.php',
                dataType : 'json',
                data: { },
                success: function( jsondata ){
                 


           for (var i = 0; i < jsondata.length; i++) {
                var a=jsondata[i].username;
                var b=jsondata[i].mensaje;
                 var c=jsondata[i].idmensaje;
               if(array[i]!=c){
                 $('#Mensajes').append("<br> "+a+"<br>"+"Says:"+b+"<hr>"); 
                 array[i]=c;
                }
                }
                }
            });

      
  
  }), 3000);; 

  </script>
  </body>
</html>
