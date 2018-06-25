
  //DOM
                                            //Juego
var juego = {         

    filas:[[],[],[]],    //Tablero


EspacioVacio:{        //Espacio Vacio, posicionadolo en el medio 


fila:1,
columna:1

},







  crearPieza(numero,fila,columna){
    var nuevoElemento = $('<div>');    
        nuevoElemento.addClass('pieza');    //Modificar el Css  (.Addclass)="Agregar clase"
 


          nuevoElemento.css({               //Modificar el Css 
          backgroundImage:'url(img/'+numero+'.jpg)',
          top:fila*200,
          left: columna*200
        });

 return {
  el:nuevoElemento, 
  numero:numero,
  filaInicial:fila,
  columnaInicial:columna,
 };
},


  instalarPieza(juegoEl){
    var counter = 1;
    // con ayuda del for vamos a crear las 8 piezas del 1 al 8
    for (var fila = 0; fila < 3; fila++) {
      for (var columna = 0; columna < 3; columna++) {

        if(fila == this.EspacioVacio.fila && columna == this.EspacioVacio.columna) {

          this.filas[fila][columna] = null;

        }else{
        var pieza;
         pieza = this.crearPieza(counter++,fila,columna);
          juegoEl.append(pieza.el);
          this.filas[fila][columna] = pieza;

        }
      }
    }

    return juegoEl;
  },





//Aignar los eventos a las piezas.
 moverHaciaAbajo(){

		 var filaOrigen = this.EspacioVacio.fila-1;
    var columnaOrigen = this.EspacioVacio.columna;

    this.intercambiarPosicionConEspacioVacio(filaOrigen, columnaOrigen);


},
 moverHaciaArriba(){
	
		 var filaOrigen = this.EspacioVacio.fila+1;
    var columnaOrigen = this.EspacioVacio.columna;

    this.intercambiarPosicionConEspacioVacio(filaOrigen, columnaOrigen);

		
},
 moverHaciaLaDerecha(){
	
		 var filaOrigen = this.EspacioVacio.fila;
    var columnaOrigen = this.EspacioVacio.columna+1;

    this.intercambiarPosicionConEspacioVacio(filaOrigen, columnaOrigen);

},

 moverHaciaLaIzquierda(){

		 var filaOrigen = this.EspacioVacio.fila;
    var columnaOrigen = this.EspacioVacio.columna-1;

    this.intercambiarPosicionConEspacioVacio(filaOrigen, columnaOrigen);

	
},





 intercambiarPosicionConEspacioVacio(fila,columna){
  var ficha = this.filas[fila] && this.filas[fila][columna];
    if(ficha){
      this.filas[this.EspacioVacio.fila][this.EspacioVacio.columna] = ficha;
      this.moverFichaFilaColumna(ficha,this.EspacioVacio.fila,this.EspacioVacio.columna);
      this.guardarEspacioVacio(fila,columna);

}
 },

 guardarEspacioVacio(fila,columna){
  this.EspacioVacio.fila=fila;
  this.EspacioVacio.columna=columna;

  this.filas[fila][columna]=null;
  },

chequearSiGano(){

},


 mezclarFichas (){
 //Coming soon

 },


capturarTeclas(){
	var	fix= this;
 $(document).keydown(function(evento) {
 	
        switch(evento.which) {

            case 37:
              
   fix.moverHaciaLaDerecha();
            break;

            case 38:
              fix.moverHaciaArriba();
              
            break;

            case 39:
             
             fix.moverHaciaLaIzquierda();
              
            break;

            case 40:
             fix.moverHaciaAbajo();
            break;
            default:
            return;
           
	
};

});


},
moverFichaFilaColumna(ficha,fila,columna){
ficha.el.css({
  top:fila*200,
          left: columna*200
})
 },
  iniciar:function(el){
    this.instalarPieza(el);
    this.mezclarFichas(200);
    this.capturarTeclas();
   
  }

};


$(function(){
  juego.iniciar;
  /* la funcion iniciar necesita recibir el elemento sobre el cual
  queremos montar nuestro juego*/
 var elemento = $('#juego');
  juego.iniciar(elemento);
})