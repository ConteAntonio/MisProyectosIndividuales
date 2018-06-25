
#include <stdio.h>
#include <allegro.h>
#include <alpng.h>
#include <algif.h>
void Yo(){
     BITMAP *buffer = create_bitmap(900,600); 
     	 BITMAP *N1 = load_bitmap("Nivel1.png", NULL);
     draw_sprite(buffer,N1,0,0);
    	blit(buffer, screen, 0,0,0,0,900,600);   
        clear_bitmap(buffer); 
     }
int main(){
   int Bx=0,BxF, ByF;
   int trime =0,tt=150, ticks = 0,De=0,F,S=1, PA=250, Z,hs=0,Q=100,Y,GOL=0,Px=100,Time=1, Potencia=0,Me,D2=0 ,BB=80,NN=420,ll=0,h1=1,posi,PP=0,Pv; 
bool Sele=false,Sel= true, R = false,K,h, Jugador2=false,	collision =true, D=false,InGol,Set=true,sleep=true,LALA=false,Derecha;
 int By=500;
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
switch (GOL){
           case 1:
                image2_x_position = 350;
                if(InGol == true){
                         
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

readkey();	

}END_OF_MAIN()
