//by Óscar Poblete Sáenz
/*Template:
					   { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
                       { 5, 2, 0, 0, 0, 0, 0, 0, 0 },
                       { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
                       { 0, 0, 3, 0, 1, 0, 0, 8, 0 },
                       { 9, 0, 0, 8, 6, 3, 0, 0, 5 },
                       { 0, 5, 0, 0, 9, 0, 6, 0, 0 },
                       { 1, 3, 0, 0, 0, 0, 2, 5, 0 },
                       { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
                       { 0, 0, 5, 2, 0, 6, 3, 0, 0 };*/
#include <stdio.h>
#define TRUE 1
#define FALSE 0
int sudoku[9][9];
void readSudoku(void);
void resSudoku(int, int);
int searchEmptyCell(int *, int *); //pointers
int Canput(int, int, int);
void printSudoku(void);
int main()
{
readSudoku();
resSudoku(0,0);
return 0;
}
void resSudoku(int x, int y)
{
int numbr, ThereisEmpty;
ThereisEmpty=searchEmptyCell(&x, &y);
if ( !ThereisEmpty) printSudoku();
else
{
for(numbr=1; numbr<=9; numbr++)
if ( Canput(x, y, numbr) )
{
sudoku[x][y]=numbr; // places in
resSudoku(x,y+1); // takes next
sudoku[x][y]=0; // takes out
}
}
}
int searchEmptyCell(int *x, int *y)
{
for( ; *x<9; (*x)++)
{
for( ; *y<9; (*y)++)
if( sudoku[*x][*y]==0 ) return TRUE;
*y=0;
}
return FALSE;
}
int Canput(int f, int c, int nro)
{
int i, j, iniRow, EndRow, iniCol, EndCol;
// Check row
for(j=0; j<9; j++)
if(sudoku[f][j]==nro)
return FALSE;
// Check column
for(i=0; i<9; i++)
if(sudoku[i][c]==nro)
return FALSE;
// comprobar subcuadrado
iniRow = (c/3) *3;
EndCol = iniCol+3;
iniRow = (f/3) *3;
EndRow = iniRow+3;
for(i=iniRow; i<EndRow; i++)
for(j=iniCol; j<EndRow; j++)
if(sudoku[i][j]==nro)
return FALSE;
return TRUE;
}
void printSudoku(void)
{
int i, j;
printf("SOLUTION:\n");
printf("========\n\n");
for(i=0; i<9; i++)
{
for(j=0; j<9; j++)
{
printf("%d",sudoku[i][j]);
if ( j==2 || j==5 ) printf(" | ");
}
printf("\n");
if ( i==2 || i==5 )
printf("--- | --- | ---\n");
}
printf("\n");
}
void readSudoku(void)
{
int i, j;
printf("Introduce SUDOKU\n");
printf(" (0 for empty cell):\n"); printf("\n");
for(i=0; i<9; i++)
{ printf("Row %d:\n------------ ",i+1);
for(j=0; j<9; j++) {
printf("\nvalue %d: ",j+1);scanf("%d",&sudoku[i][j]);
}
}
printf("\n");
printf("INTRODUCED SUDOKU:\n");
printf("========\n\n");
for(i=0; i<9; i++)
{
for(j=0; j<9; j++)
{
printf("%d",sudoku[i][j]);
if ( j==2 || j==5 ) printf(" | ");
}
printf("\n");
if ( i==2 || i==5 )
printf("--- | --- | ---\n");
}
printf("\n");
}