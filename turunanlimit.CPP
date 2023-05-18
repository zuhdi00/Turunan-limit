#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>

float fx(float x);
float df(float x);

void main(){
   float nxa,nxb,hx,nilaix;
   int i,nx;
   cout<<"Masukkan Nilai xa : ";cin>>nxa;
   cout<<"Masukkan Nilai xb : ";cin>>nxb;
   cout<<"Masukkan Nilai h : ";cin>>hx;
   nx=(nxb-nxa)/hx;
   cout<<"NO. \t NilaiX \t NIlaiY  \t  Nilai Turunan \n";
   for (i=0;i<nx;i++){
   	nilaix=nxa+(i*hx);
      cout<<(i)<<"\t"<<nilaix<<"\t\t"<<fx(nilaix)<<"\t\t\t"<<df(nilaix)<<"\n";
   }
   getch();
}

float fx(float x)
{
	return exp(-x)*sin(2*x)+1;
}

float df(float x)
{
	float h;
   h=0.05;
	return (fx(x+h)-fx(x))/h;
}




