#include "reta.h"
#include <cmath>
#include <iostream>



Reta::Reta(int x1_, int y1_, int x2_, int y2_)
{
    x1=x1_;
    x2=x2_;
    y1=y1_;
    y2=y2_;
}

int Reta::Sinal(float n){
    if (n>0)
        return 1;
    else if (n==0)
        return 0;
    else
        return -1;
}

void Reta::draw(Screen &t){

     int x = x1;
     int y = y1;
     float Delta_x = abs(x2 - x1);
     float Delta_y = abs(y2 - y1);
     float s1=Sinal(x2 - x1);
     float s2=Sinal(y2 - y1);
     float Temp, new_e;
     bool Troca;

     if(Delta_y > Delta_x){
       Temp = Delta_x;
       Delta_x = Delta_y;
       Delta_y = Temp;
       Troca = 1;
     }
     else{
       Troca = 0;
     }
     new_e = 2*Delta_y - Delta_x;
     for(int i=1; i<= Delta_x; i++){
       t.setPixel(x,y);
       while (new_e >= 0){
         if(Troca == 1){
           //Muda para a proxima linha de rasterização
           x = x + s1;
         }
         else{
           y = y + s2;
         }
         new_e = new_e - 2*Delta_x;
       }

       //Permanece nesta linha de rasterização
       if(Troca == 1){
         y = y + s2;
       }
       else{
         x = x + s1;
       }
       new_e= new_e + 2*Delta_y;
     }
}
