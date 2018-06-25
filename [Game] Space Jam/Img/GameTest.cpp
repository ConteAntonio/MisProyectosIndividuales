// Get ready
//Because
//This is 
//...
// SPACE JAM 
//Mascherano Edition 

#include <stdio.h>
#include <allegro.h>
#include <alpng.h>
#include <algif.h>



int tt=150, ticks = 0,De=0,F,S=1, PA=250, Z,hs=0,Q=100,Y,GOL=0,Px=100,Time=1, Potencia=0,Me,D2=0 ,BB=80,NN=420,ll=0,h1=1,posi,PP=0,Pv,GG; 
 int Bx=370,trime,BxF, ByF;;
 int By=500;
bool A=true,Sele=false,Sel= true, R = false,K,h, Jugador2=false,	collision =true, D=false,InGol,Set=true,sleep=true,LALA=false;
void Musica(){ 
      SAMPLE *sonido1 = load_wav("chala.wav");
      play_sample(sonido1, 200, 150, 1000, 0);
     if(LALA==true){
    
    tt=0;
      
     }
     LALA=true;
    
     
     }
     void PatitoX(){
          PP=By;
        Pv=Bx;
PP-550;
Pv-550;
  
          }
void ticker(void)
{
    ticks++;
}END_OF_FUNCTION(ticker)
void MGif(){
BITMAP **frames;
    int *durations;
    
    char const *name = "trailer.gif";

    clear_to_color (screen, makecol (0, 0, 0));
    int n = algif_load_animation(name, &frames, &durations);
    install_int_ex(ticker, BPS_TO_TIMER(100));

    while (De <90 )
    {
        for (int i = 0; i < n; i++){
      De++;
            int e;
            clear_to_color (screen, makecol (0, 0, 0));
            draw_sprite(screen, frames[i], 0, 0);
            e = ticks + durations[i];
            while (ticks < e ){ rest(1);

            if (keypressed ())
                break;
        }
        
        
}        
}        }END_OF_FUNCTION(MGif)
void Intro(){
     BITMAP *buffer= create_bitmap(900,600);
     BITMAP *fondo=load_bitmap ("Conte.png",NULL);
while(F!=3){    
                 
     draw_sprite(buffer,fondo,0,0);
     rest(1500);
    
fondo=load_bitmap ("otto.png",NULL); 
blit(buffer, screen, 0,0,0,0,900,600);  
 clear_bitmap(buffer);
 F++;
     }
     }END_OF_FUNCTION(Intro)
     
  
           void mapa1(){
         BITMAP *buffer = create_bitmap(900,600); 


 BITMAP *image1 = load_bitmap("Balld.png",NULL);
   BITMAP *Fondo = load_bitmap("FBK.png",NULL);
    BITMAP *image2 = load_bitmap("Arquero.png",NULL);

 BITMAP *mapa = load_bitmap("fbk.png",NULL);
 BITMAP *ball = load_bitmap("Ball.png",NULL);
 BITMAP *Arq  = load_bitmap("Arquero.png", NULL);
 BITMAP *Ti10  = load_bitmap("Reloj.png", NULL);
 
 BITMAP *P1;
 BITMAP *P2; 
 BITMAP *P3;  
 BITMAP *P4;  
 BITMAP *P5;  
 BITMAP *P6; 
   int W=600;
        
     	 BITMAP *N1 = load_bitmap("Nivel1.png", NULL);
     draw_sprite(buffer,N1,0,0);
    	blit(buffer, screen, 0,0,0,0,900,600);   
        clear_bitmap(buffer); 
      set_mouse_sprite_focus(0, 20);



BITMAP *Gol = load_bitmap("gol1.png", NULL);

BITMAP *PGol = load_bitmap("Gol.png", NULL);

P1  = load_bitmap("-.png", NULL);
 P2  = load_bitmap("-.png", NULL);
                P3  = load_bitmap("-.png", NULL);
                P4  = load_bitmap("-.png", NULL);
                P5  = load_bitmap("-.png", NULL);
                P6  = load_bitmap("-.png", NULL);
int image1_x_position = 370; //Set the x position of image 1 to 0.
	int image1_y_position = 500 ; //Set the y position of image 1 to 0.
	int image2_x_position = 350; //Set the x position of image 2 to 100.
	int image2_y_position = 100; //Set the y position of image 2 to 100.

          
        rest(1000);						
 while (!key[KEY_ESC]      || A==true ){
       
       if(GG>2){
              A=false;
                }
           
                      
 blit(buffer, screen, 0,0,0,0,900,600);   

  
 

                          
	

	int image1_bb_left = image1_x_position;
									
	/* The same idea goes for the top "side" */
	int image1_bb_top = image1_y_position;

	 
	int image1_bb_right = (image1_bb_left + image1->w);
	
	/* Use the same idea for the bottom. */
	int image1_bb_bottom = (image1_bb_top + image1->h);
	
	/* Now, we will create the box for image 2 using the same principles. */
	int image2_bb_left = image2_x_position;
	int image2_bb_top = image2_y_position;
	int image2_bb_right = (image2_bb_left + image2->w);
	int image2_bb_bottom = (image2_bb_top + image2->h);
									

	int show_bbox = FALSE;
	

	int collision = FALSE;
	



			 
			if(key[KEY_SPACE]){
				show_bbox = TRUE;
          }
			else if(!key[KEY_SPACE]){
				show_bbox = FALSE;
}
		
			image1_bb_left = image1_x_position;
			image1_bb_top = image1_y_position;
			image1_bb_right = (image1_bb_left + image1->w);
			image1_bb_bottom = (image1_bb_top + image1->h);

			/* Update image 2's bounding box. */
			image2_bb_left = image2_x_position;
			image2_bb_top = image2_y_position;
			image2_bb_right = (image2_bb_left + image2->w);
			image2_bb_bottom = (image2_bb_top + image2->h);

			collision = TRUE; // Assume that there is no collision

			// NOTE: This could easily be concatenated into one big if statement across
			//	 four 'or' clauses -- but it's split up this way for easy reading
			if(image1_bb_bottom < image2_bb_top)
			{
				collision = FALSE;
			}
			else if(image1_bb_top > image2_bb_bottom)
			{
				collision = FALSE;
			}
			else if(image1_bb_right < image2_bb_left)
			{
				collision = FALSE;
			}
			else if(image1_bb_left > image2_bb_right)
			{
				collision = FALSE;
			}
			
	
		if(show_bbox == TRUE)
		{    
		
			
			/* Draw image1's bounding box. */
			line(buffer, image1_bb_left, image1_bb_top, image1_bb_right, image1_bb_top, makecol(255,0,0));
			line(buffer, image1_bb_left, image1_bb_bottom, image1_bb_right, image1_bb_bottom, makecol(255,0,0));
			line(buffer, image1_bb_left, image1_bb_top, image1_bb_left, image1_bb_bottom, makecol(255,0,0));
			line(buffer, image1_bb_right, image1_bb_top, image1_bb_right, image1_bb_bottom, makecol(255,0,0));

			/* Draw image2's bounding box. */
			line(buffer, image2_bb_left, image2_bb_top, image2_bb_right, image2_bb_top, makecol(255,0,0));
			line(buffer, image2_bb_left, image2_bb_bottom, image2_bb_right, image2_bb_bottom, makecol(255,0,0));
			line(buffer, image2_bb_left, image2_bb_top, image2_bb_left, image2_bb_bottom, makecol(255,0,0));
			line(buffer, image2_bb_right, image2_bb_top, image2_bb_right, image2_bb_bottom, makecol(255,0,0));
			
		/* Just the closing bracket... */
}
trime=0;
while (mouse_b==2){
      Potencia++;
      }
 if(mouse_b==1){

                 GOL++;
                
            image1_x_position = 370; //Set the x position of image 1 to 0.
image1_y_position = 500;
             BxF= mouse_x;
             ByF= mouse_y;             
           srand (time(NULL));
             Y = rand() % 12; 
 if(Y<=5){             
                           
 image2_x_position = 200;
}
else
{
     image2_x_position = 480; //Set the x position of image 2 to 100.
}	 

         do{

                     
                      
                       
                blit(buffer, screen, 0,0,0,0,900,600);   
  clear_bitmap(buffer); 
          draw_sprite(buffer,Fondo,0,0); 
          draw_sprite(buffer,image1,370,500);
                         
                           draw_sprite(buffer,image2,image2_x_position,image2_y_position);    
                            draw_sprite(buffer,image1,image1_x_position, image1_y_position);
                      draw_sprite(buffer,P1,50,48);
   draw_sprite(buffer,P2,100,48);
   draw_sprite(buffer,P3,150,48);
   draw_sprite(buffer,P4 ,700,48);
   draw_sprite(buffer,P5,750,48);
   draw_sprite(buffer,P6,800,48); 
                  
                
         if(image1_y_position >BxF){
                              image1_x_position = image1_x_position -28 +Potencia;
                              }     
                             if(image1_x_position <BxF)  {
                                   image1_x_position = image1_x_position +28+Potencia;
                                   }   
                         
                                                                                                                                    
 if(image1_y_position >ByF){
                              image1_y_position = image1_y_position -18;
                              }     
                             if(image1_x_position <ByF)  {
                                   image1_y_position = image1_y_position -18;
                                   }   
                         

trime++;
        }while( trime !=12);
       
                     

}
if(GOL > 3){
       GOL=0;
       
       P1  = load_bitmap("-.png", NULL);
 P2  = load_bitmap("-.png", NULL);
                P3  = load_bitmap("-.png", NULL);
                P4  = load_bitmap("-.png", NULL);
                P5  = load_bitmap("-.png", NULL);
                P6  = load_bitmap("-.png", NULL);
       }
switch (GOL){
           case 1:
       
                image2_x_position = 350;
                if(InGol == true){
                     GG++    ;
                P1  = load_bitmap("0.png", NULL);
                P4  = load_bitmap("X.png", NULL);
                 
                
                }
                else{
                P1  = load_bitmap("X.png", NULL);
                P4  = load_bitmap("0.png", NULL);
                }
               
                
                 break;
           case 2:
                image2_x_position = 350;
                if(InGol == true){
                      GG++;
                P2  = load_bitmap("0.png", NULL);
                P5  = load_bitmap("x.png", NULL); 
                                }
                
                else{
                P2  = load_bitmap("x.png", NULL);
                P5  = load_bitmap("0.png", NULL);
                
                }
              
                 break;
                 case 3:
                      image2_x_position = 350;
                        if(InGol == true){
                                 GG++;
                P3  = load_bitmap("0.png", NULL);
                P6  = load_bitmap("x.png", NULL); 
                              }
                else{
                P3  = load_bitmap("x.png", NULL);
                P6  = load_bitmap("0.png", NULL);
                
                }
           break;
                 }
         InGol = false;   
             if(collision == false)
		{
              InGol = true;   
	
        }
        if(image1_x_position < 100){
                               InGol = false;  
                              }
  if(image1_x_position > 650){
                        InGol = false; 
                       }

               
                    
   
                
                                            
                    rest(28);


                                            blit(buffer, screen, 0,0,0,0,900,600);   
  clear_bitmap(buffer);  
           draw_sprite(buffer,Fondo,0,0); 
 
  draw_sprite(buffer,image2,image2_x_position,image2_y_position); 
   draw_sprite(buffer,image1,image1_x_position,image1_y_position);
     draw_sprite(buffer,P1,50,48);
   draw_sprite(buffer,P2,100,48);
   draw_sprite(buffer,P3,150,48);
   draw_sprite(buffer,P4 ,700,48);
   draw_sprite(buffer,P5,750,48);
   draw_sprite(buffer,P6,800,48); 
 draw_sprite(buffer,image1,370,500);
Potencia=0;
}

     }//End of Function
END_OF_FUNCTION(mapa1);
 void mapa(){
         BITMAP *buffer = create_bitmap(900,600); 


 BITMAP *image1 = load_bitmap("Balld.png",NULL);
   BITMAP *Fondo = load_bitmap("FBK.png",NULL);
    BITMAP *image2 = load_bitmap("Arquero.png",NULL);

 BITMAP *mapa = load_bitmap("fbk.png",NULL);
 BITMAP *ball = load_bitmap("Ball.png",NULL);
 BITMAP *Arq  = load_bitmap("ArqueroA0.png", NULL);
 BITMAP *Ti10  = load_bitmap("Reloj.png", NULL);
 
 BITMAP *P1;
 BITMAP *P2; 
 BITMAP *P3;  
 BITMAP *P4;  
 BITMAP *P5;  
 BITMAP *P6; 
   int W=600;
      
      set_mouse_sprite_focus(0, 20);

   
     	 BITMAP *N1 = load_bitmap("Nivel2.png", NULL);
     draw_sprite(buffer,N1,0,0);
    	blit(buffer, screen, 0,0,0,0,900,600);   
        clear_bitmap(buffer); 

BITMAP *Gol = load_bitmap("gol1.png", NULL);
BITMAP *Thanks = load_bitmap("ss.png", NULL);
BITMAP *PGol = load_bitmap("Gol.png", NULL);

P1  = load_bitmap("-.png", NULL);
 P2  = load_bitmap("-.png", NULL);
                P3  = load_bitmap("-.png", NULL);
                P4  = load_bitmap("-.png", NULL);
                P5  = load_bitmap("-.png", NULL);
                P6  = load_bitmap("-.png", NULL);
int image1_x_position = 370; //Set the x position of image 1 to 0.
	int image1_y_position = 500 ; //Set the y position of image 1 to 0.
	int image2_x_position = 350; //Set the x position of image 2 to 100.
	int image2_y_position = 100; //Set the y position of image 2 to 100.

          
        rest(1000);						
 while (!key[KEY_ESC]  ){
       
       
           
                      
 blit(buffer, screen, 0,0,0,0,900,600);   

  
 

                          
	

	int image1_bb_left = image1_x_position;
									
	/* The same idea goes for the top "side" */
	int image1_bb_top = image1_y_position;

	 
	int image1_bb_right = (image1_bb_left + image1->w);
	
	/* Use the same idea for the bottom. */
	int image1_bb_bottom = (image1_bb_top + image1->h);
	
	/* Now, we will create the box for image 2 using the same principles. */
	int image2_bb_left = image2_x_position;
	int image2_bb_top = image2_y_position;
	int image2_bb_right = (image2_bb_left + image2->w);
	int image2_bb_bottom = (image2_bb_top + image2->h);
									

	int show_bbox = FALSE;
	

	int collision = FALSE;
	



			 
			if(key[KEY_SPACE]){
				show_bbox = TRUE;
          }
			else if(!key[KEY_SPACE]){
				show_bbox = FALSE;
}
		
			image1_bb_left = image1_x_position;
			image1_bb_top = image1_y_position;
			image1_bb_right = (image1_bb_left + image1->w);
			image1_bb_bottom = (image1_bb_top + image1->h);

			/* Update image 2's bounding box. */
			image2_bb_left = image2_x_position;
			image2_bb_top = image2_y_position;
			image2_bb_right = (image2_bb_left + image2->w);
			image2_bb_bottom = (image2_bb_top + image2->h);

			collision = TRUE; // Assume that there is no collision

			// NOTE: This could easily be concatenated into one big if statement across
			//	 four 'or' clauses -- but it's split up this way for easy reading
			if(image1_bb_bottom < image2_bb_top)
			{
				collision = FALSE;
			}
			else if(image1_bb_top > image2_bb_bottom)
			{
				collision = FALSE;
			}
			else if(image1_bb_right < image2_bb_left)
			{
				collision = FALSE;
			}
			else if(image1_bb_left > image2_bb_right)
			{
				collision = FALSE;
			}
			
	
		if(show_bbox == TRUE)
		{    
		
			
			/* Draw image1's bounding box. */
			line(buffer, image1_bb_left, image1_bb_top, image1_bb_right, image1_bb_top, makecol(255,0,0));
			line(buffer, image1_bb_left, image1_bb_bottom, image1_bb_right, image1_bb_bottom, makecol(255,0,0));
			line(buffer, image1_bb_left, image1_bb_top, image1_bb_left, image1_bb_bottom, makecol(255,0,0));
			line(buffer, image1_bb_right, image1_bb_top, image1_bb_right, image1_bb_bottom, makecol(255,0,0));

			/* Draw image2's bounding box. */
			line(buffer, image2_bb_left, image2_bb_top, image2_bb_right, image2_bb_top, makecol(255,0,0));
			line(buffer, image2_bb_left, image2_bb_bottom, image2_bb_right, image2_bb_bottom, makecol(255,0,0));
			line(buffer, image2_bb_left, image2_bb_top, image2_bb_left, image2_bb_bottom, makecol(255,0,0));
			line(buffer, image2_bb_right, image2_bb_top, image2_bb_right, image2_bb_bottom, makecol(255,0,0));
			
		/* Just the closing bracket... */
}
trime=0;
while (mouse_b==2){
      Potencia++;
      }
 if(mouse_b==1){

                 GOL++;
                
            image1_x_position = 370; //Set the x position of image 1 to 0.
image1_y_position = 500;
             BxF= mouse_x;
             ByF= mouse_y;             
           srand (time(NULL));
             Y = rand() % 12; 
 if(Y<=5){             
                           
 image2_x_position = 200;
}
else
{
     image2_x_position = 480; //Set the x position of image 2 to 100.
}	 

         do{

                     
                      
                       
                blit(buffer, screen, 0,0,0,0,900,600);   
  clear_bitmap(buffer); 
          draw_sprite(buffer,Fondo,0,0); 
          draw_sprite(buffer,image1,370,500);
                         
                           draw_sprite(buffer,image2,image2_x_position,image2_y_position);    
                            draw_sprite(buffer,image1,image1_x_position, image1_y_position);
                      draw_sprite(buffer,P1,50,48);
   draw_sprite(buffer,P2,100,48);
   draw_sprite(buffer,P3,150,48);
   draw_sprite(buffer,P4 ,700,48);
   draw_sprite(buffer,P5,750,48);
   draw_sprite(buffer,P6,800,48); 
                  
                
         if(image1_y_position >BxF){
                              image1_x_position = image1_x_position -28 +Potencia;
                              }     
                             if(image1_x_position <BxF)  {
                                   image1_x_position = image1_x_position +28+Potencia;
                                   }   
                         
                                                                                                                                    
 if(image1_y_position >ByF){
                              image1_y_position = image1_y_position -18;
                              }     
                             if(image1_x_position <ByF)  {
                                   image1_y_position = image1_y_position -18;
                                   }   
                         

trime++;
        }while( trime !=12);
       
                     

}
if(GOL > 3){
       GOL=0;
       P1  = load_bitmap("-.png", NULL);
 P2  = load_bitmap("-.png", NULL);
                P3  = load_bitmap("-.png", NULL);
                P4  = load_bitmap("-.png", NULL);
                P5  = load_bitmap("-.png", NULL);
                P6  = load_bitmap("-.png", NULL);
       }
       if(GG>2){
                       
                blit(buffer, screen, 0,0,0,0,900,600);   
  clear_bitmap(buffer); 
          draw_sprite(buffer,Thanks,0,0);
          rest(1200);
          exit(0);
                 }
switch (GOL){
           case 1:
                image2_x_position = 350;
                if(InGol == true){
                        GG++; 
                P1  = load_bitmap("0.png", NULL);
                P4  = load_bitmap("X.png", NULL);
                 
                
                }
                else{
                P1  = load_bitmap("X.png", NULL);
                P4  = load_bitmap("0.png", NULL);
                }
               
                
                 break;
           case 2:
                image2_x_position = 350;
                if(InGol == true){
                   GG++;   
                P2  = load_bitmap("0.png", NULL);
                P5  = load_bitmap("x.png", NULL); 
                                }
                
                else{
                P2  = load_bitmap("x.png", NULL);
                P5  = load_bitmap("0.png", NULL);
                
                }
              
                 break;
                 case 3:
                      GG++;
                      image2_x_position = 350;
                        if(InGol == true){
                P3  = load_bitmap("0.png", NULL);
                P6  = load_bitmap("x.png", NULL); 
                              }
                else{
                P3  = load_bitmap("x.png", NULL);
                P6  = load_bitmap("0.png", NULL);
                
                }
           break;
                 }
         InGol = false;   
             if(collision == false)
		{
              InGol = true;   
	
        }
        if(image1_x_position < 100){
                               InGol = false;  
                              }
  if(image1_x_position > 650){
                        InGol = false; 
                       }

               
                    
   
                
                                            
                    rest(28);


                                            blit(buffer, screen, 0,0,0,0,900,600);   
  clear_bitmap(buffer);  
           draw_sprite(buffer,Fondo,0,0); 
 
  draw_sprite(buffer,image2,image2_x_position,image2_y_position); 
   draw_sprite(buffer,image1,image1_x_position,image1_y_position);
     draw_sprite(buffer,P1,50,48);
   draw_sprite(buffer,P2,100,48);
   draw_sprite(buffer,P3,150,48);
   draw_sprite(buffer,P4 ,700,48);
   draw_sprite(buffer,P5,750,48);
   draw_sprite(buffer,P6,800,48); 
 draw_sprite(buffer,image1,370,500);
Potencia=0;
}

     }//End of Function
END_OF_FUNCTION(mapa);
void Menu (){
     BITMAP *fondo=load_bitmap("Fondo00.png", NULL);
  BITMAP *boton1=load_bitmap("blank.png", NULL);
 BITMAP *boton2=load_bitmap("blank.png", NULL);
     BITMAP *buffer=create_bitmap(900,600);
      while (Sele ==false){
           draw_sprite(buffer,fondo,0,0);
           if(mouse_b==1){
                          fondo=load_bitmap("Fondo.png",NULL);
                         while (Sel ==false){
                         
                          fondo=load_bitmap("Fondo.png",NULL);
                          boton1=load_bitmap("blank.png", NULL);
                          boton2=load_bitmap("blank.png", NULL);
                          if(150  < mouse_y  &&  mouse_y < 290 ){
                                  boton1=load_bitmap("BOTON1.png",NULL);
                              
                                 if(mouse_b==1){
                                Sel=true;
                                Sele=true;
                                 sleep=false; 
                                  }
                                  }
                          if(350  < mouse_y  &&  mouse_y < 440  ){
                                  boton2=load_bitmap("BOTON2.png",NULL);
                                 if(mouse_b==1){
                                  exit(0);
                                  }
                          
                          }
                          draw_sprite(buffer,fondo,0,0);
                           draw_sprite(buffer,boton1,201,165);
                            draw_sprite(buffer,boton2,201,280);
                          blit(buffer, screen, 0,0,0,0,900,600);  
 clear_bitmap(buffer);
}

                          }
                        if(sleep==true){
                          Sel=false;    
                          }
                               
          blit(buffer, screen, 0,0,0,0,900,600);  
 clear_bitmap(buffer);
           }
           
           }END_OF_FUNCTION(MENU)
int main(){
   
allegro_init();

alpng_init();
algif_init();
install_mouse();
install_keyboard();
install_timer();
set_color_depth(32);
set_gfx_mode(GFX_AUTODETECT, 900,580,0,0); // Change
install_sound(DIGI_AUTODETECT, MIDI_AUTODETECT, NULL);
show_mouse(screen);
	set_volume(tt, tt);
MGif();


        
mapa();
mapa1();

     }END_OF_MAIN()
