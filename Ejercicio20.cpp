#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void intervalo(double *u, double min, double delta_x, int xn);
void muestra(double *u, double min, double delta_x, int xn);


void intervalo(double *u, double min, double delta_x, int xn){
  double x;
  int i; 
  for (i =0; i<xn; i++){
    x= min + i * delta_x;
    if (x>0.75 && x<=1.25){
      u[i]=1.0;
    } else{
      u[i]=0.0;
    }
  }

}



void muestra(double *u, double min, double delta_x, int xn){
  int i;
  double x;
  for (i=0; i <xn ; i++){
    x = min +i * delta_x;
    cout << x << u[i]<< endl;
    
  }
}
int main(){

double c=1.0;
double t=1.0;
double delta_x=0.1;
double delta_t=0.01;
double min = 0.0, max=2.0;
double *u;


 int xn = (max-min)/delta_x + 1;
 u= new double[xn];
 
 intervalo(u,min,delta_x,xn);
 muestra(u,min,delta_x,xn);

   
 return 0; 
}
