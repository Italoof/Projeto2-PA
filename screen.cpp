#include "screen.h"
#include <vector>


using namespace std;



Screen::Screen()
{
    brush='#';
}

Screen::Screen(int nlin_, int ncol_)
{
    nlin=nlin_;
    ncol=ncol_;
    mat= vector< vector<char> > (nlin, vector<char>(ncol,' '));
    brush='#';
}

void Screen::newMatriz(int nlin_, int ncol_)
{
    nlin=nlin_;
    ncol=ncol_;
    mat= vector< vector<char> > (nlin, vector<char>(ncol,' '));
}

void Screen::setPixel(int x, int y)
{
    mat[x][y]=brush;
}

void Screen::clear()
{
    mat= vector< vector<char> > (nlin, vector<char>(ncol,' '));
}

void Screen::setBrush(char brush_)
{
    brush=brush_;
}

ostream &operator<<(ostream &os, Screen &t)
{
    for(int i=0;i<t.nlin;i++){
        for(int j=0; j<t.ncol; j++){
            os<< t.mat[j][i] <<" ";
        }
        os<<endl;
    }

    return os;
}
