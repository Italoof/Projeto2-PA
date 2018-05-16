#include "circulo.h"

Circulo::Circulo(int x0_, int y0_, int r_, bool fill_)
{
    x0=x0_, y0=y0_;
    r=r_;
    fill=fill_;
}

void Circulo::draw(Screen& t){

    int x=0;
    int y=r;
    int d= 1 -r;

    while(y>x){

        t.setPixel(x0+x,y0+y);
        t.setPixel(x0+y,y0+x);
        t.setPixel(x0-y,y0+x);
        t.setPixel(x0-x,y0+y);
        t.setPixel(x0-x,y0-y);
        t.setPixel(x0-y,y0-x);
        t.setPixel(x0+y,y0-x);
        t.setPixel(x0+x,y0-y);

        if(d<0){
            d=d+2*x+3;
            x=x+1;
        }
        else{
            d=d+2*(x-y)+5;
            x=x+1;
            y=y-1;
        }
    }

    if(fill){
        for(int i =x0-r+1;i<x0+r;i++){
            for(int j=y0-r+1;j<y0+r;j++){
                if(pow(i-x0,2)+pow(j-y0,2)<=pow(r,2)){
                    t.setPixel(i,j);
                }
            }
        }
    }
}
