
#include <stdio.h>
#define MAX(R,G,B) MAX=(R>=G) ? ((R>=B) ? R:B) : ((G>=B) ? G:B)
#define MIN(R,G,B) MIN=(R<=G) ? ((R<=B) ? R:B) : ((G<=B) ? G:B)
#define HNAH(A,B,C,D) (60*(A-B)/(C-D))
#define PR(X) printf(""#X" цвет\n ")




int main()
{ 
  float R,G,B,MAX,MIN,H,S,V;
  printf("введите R,G,B:\n");
  scanf("%f %f %f",&R,&G,&B);
  R/=255;
  G/=255;
  B/=255;
  MAX(R,G,B);
  MIN(R,G,B);
  if (MAX<=MIN) H=0;
  if (MAX==B && G>=B) H=HNAH(G,B,MAX,MIN);
  if (MAX==B && G<B) H=HNAH(G,B,MAX,MIN)+360;
  if (MAX==G) H=HNAH(B,R,MAX,MIN)-120;
  if (MAX==B) H=HNAH(R,G,MAX,MIN)+240;
  if (MAX<=MIN) H=0;
  if (MAX==0) S=0;
  else S=(1-(MIN/MAX))*100;
  V=MAX*100;
  printf(" H=%.2f S=%.2f%% V=%.2f%%\n",H,S,V);
  if (0<=H && H<=360 && 0<=S && S<=100 && V<=10) PR(черный);
  if (0<=H && H<=360 && S<=15 && V>=65) PR(белый);
  if (0<=H && H<=360 && S<=15 && 10<=V && V<=65) PR(серый);
  if (H<=11 && H>=351 && S>=70 && V>=10) PR(красный); 
  if (H<=11 && H>=351 && S<=70 && V>=10)  PR(розовый);
  if (310<=H && H<=351 && S>=15 && V>=10) PR(розовый);
  if (11<=H && H<=45 && S>=15 && V>=75)  PR(оранжевый);
  if (11<=H && H<=45 && S>=15 && 10<=V && V<=75)PR(коричневый);
  if (45<=H && H<=64 && S>=15 && V>=10) PR(желтый);
  if (64<=H && H<=150 && S>=15 && V>=10) PR(зеленый);
  if (150<=H && H<=180 && S>=15 && V>=10) PR(сине-зеленый);
  if (180<=H && H<=255 && S>=15 && V>=10) PR(синий);
  if (255<=H && H<=310 && S>=50 && V>=10) PR(фиолетовый);
  if (255<=H && H<=310 && 15<=S && S<=50 && V>=10) PR(темно-розовый);
  return 0;
}