#include <PPMTools.h>
#include <stdio.h>

void main(){

unsigned char *image;
unsigned char *image1;
int cols,rows,i,j;
char red,blue,green;

//image= ReadPPM("sample1.ppm",&cols,&rows);
/*image1= CreatePPM(cols,rows);

for(i=0;i<rows;i++)
{
  for(j=0;j<cols;j++){
     red=GetRPixel(image,cols,j,i);
     blue=GetBPixel(image,cols,j,i);
     green=GetGPixel(image,cols,j,i);
     PutRPixel(image1,cols,j,i,red);
     PutGPixel(image1,cols,j,i,green);
     PutBPixel(image1,cols,j,i,blue);

  }

}

WrtiePPM("out.ppm",image1,rows,cols);*/


}
