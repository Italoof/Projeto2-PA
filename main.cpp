#include <list>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include "screen.h"
#include "figurageometrica.h"
#include "reta.h"
#include "retangulo.h"
#include "circulo.h"

using namespace std;

int main()
{    
    string s;
    Screen S;
    vector <FiguraGeometrica*> figuras;
    ifstream fin;
    ofstream fout;

    fin.open("/home/italo/ProgAvan/DesenhoGeometrico/Instrucoes.txt");
    fout.open("/home/italo/ProgAvan/DesenhoGeometrico/Desenho.txt");

    if(!fin.is_open()||!fout.is_open()){
        throw "Arquivo não pode ser criado ou lido.";
        exit(-1);
    }

    while(fin.good()){

        getline(fin, s);
        if(fin.good()){
            string cmd;
            stringstream sstream(s);
            sstream >> cmd;

            if(cmd.compare("Screen")==0){
                cout<<cmd<<endl;
                int nlin, ncol;
                sstream >> nlin >> ncol;
                S.newMatriz(nlin,ncol);
            }

            if(cmd.compare("brush")==0){
                char brush;
                sstream >> brush;
                S.setBrush(brush);
                cout<<cmd<<endl;
            }

            if(cmd.compare("Reta")==0){
                int x1,y1,x2,y2;
                sstream>> x1>> y1>>x2>>y2;
                figuras.push_back(new Reta(x1,y1,x2,y2));
                cout<<cmd<<endl;
            }

            if(cmd.compare("Retangulo")==0){
                int x,y,lar,alt;
                bool fill;
                sstream >> x >> y >> lar >>alt >> fill;
                figuras.push_back(new Retangulo(x,y,lar,alt,fill));
                cout<<cmd<<endl;
            }

            if(cmd.compare("Circulo")==0){
                int x0, y0, r;
                bool fill;
                sstream >>x0>> y0>>r>>fill;
                figuras.push_back(new Circulo(x0,y0,r,fill));
                cout<<cmd<<endl;
            }
        }
    }

    for(auto it:figuras){
            it->draw(S);
         }

        cout<<S;
        fout<<S;

        fin.close();
        fout.close();
        return 0;
 }
