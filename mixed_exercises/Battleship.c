//By Óscar Poblete Sáenz
/*Template:
					   { 1, 2, 0, 0, 0, 1, 7, 0},
                       { 0, 2, 4, 0, 0, 0, 0, 0},
                       { 0, 0, 0, 0, 0, 0, 0, 0},
                       { 0, 4, 4, 0, 0, 0, 0, 0},
                       { 0, 0, 0, 5, 6, 0, 0, 0},
                       { 0, 0, 0, 0, 0, 6, 7, 0},
                       { 7, 2, 0, 0, 0, 0, 0, 0},
                       { 0, 0, 8, 4, 0, 0, 0, 0};*/
#include <stdio.h>
int boardb[8][8];
int coord[8][8];
main(){
int i,j,h,x1,y1,x2,y2,fail;
int op=1;
printf("======BATTLESHIP=======\n\n");
printf("INTRODUCE YOUR BOARD: \n");
for(j=0;j<8;j++){
for(i=0;i<8;i++){
boardb[i][j]=printf("* ");
coord[i][j]=0;
}
printf("\n");
}

printf("\n|===========================================|\n");

printf("INTRODUCE THE COORDINATES OF YOUR 8 SHIPS \n");
for(j=0;j<8;j++){
for(i=0;i<2;i++){
if(i==0){
printf("GIVE ME ROW (X) = ");
scanf("%d",&x1);
} else{
printf("GIVE ME COLUMN (Y) = ");
scanf("%d",&y1);
}
}
if(coord[x1][y1]==0 && coord[x1][y1+1]==0){
boardb[x1][y1]=1;
coord[x1][y1]=1;
coord[x1][y1+1]=1;
}else{
printf("A SHIP ALREADY EXISTS ON THIS, CHOOSE OTHER PLACE \n");
j=j-1;
}
}
printf("|===========================================|\n");
//DISPAROS DEL JUGADOR
do{
printf("\nATTEMPT %d \n", op);
printf("COORDINATE X:");
scanf("%d",&x2);
printf("COORDINATE Y:");
scanf("%d",&y2);
if(coord[x2][y2]==1){
printf("\nGOT IT\n");
coord[x2][y2]=0;
coord[x2][y2+1]=0;
h=h+1;
printf("SUNK: %d\n\n",h);
}else{
fail=fail+1;
printf("YOU FAILED, TRY AGAIN \n");
}
op=op+1;
}while(op<9);
printf("\n|===================RESULTADOS========================|\n");
printf("BARCOS HUNDIDOS = %d\n",h);
printf("TIROS FALLIDOS = %d\n",fail);
if(h==8){
	printf("\nCONGRATULATIONS YOU SUNK THE %d SHIPS!\n",h);
}
if(h<8){
printf("|=====================================================|\n");
printf("\nRESULTS: \n");
//IMPRIMIENDO TABLERO DEL JUGADOR
for(j=0;j<8;j++){
for(i=0;i<8;i++){
if(coord[i][j]==1){
coord[i][j]=printf("1 ");
coord[i][j+1]=printf("1 ");
}else{
coord[i][j]=printf("* ");
}
}
printf("\n");
}
}
}
