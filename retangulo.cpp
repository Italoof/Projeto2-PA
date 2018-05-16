#include "retangulo.h"

Retangulo::Retangulo(int x_, int y_, int lar_, int alt_, bool fill_)
{
    x=x_, y=y_;
    lar=lar_, alt=alt_;
    fill=fill_;
}

void Retangulo::draw(Screen &t)
{
    if(fill==1){

        for(int i=x;i<x+lar;i++){
            for(int j=y; j<y+alt; j++){
                t.setPixel(i,j);
            }
        }
    }
    else{
        for(int i=x;i<x+lar;i++){
            t.setPixel(i,y);
        }


        for(int j=y+1; j<y+alt; j++){
                t.setPixel(x,j);
            }


        for(int i=x+1;i<x+lar;i++){

                t.setPixel(i,y+alt-1);
        }


        for(int j=y+1; j<y+alt; j++){
                t.setPixel(x+lar-1,j);
            }
    }
}
