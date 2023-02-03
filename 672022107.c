#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <ctype.h>


void arrowHere(int realPosition, int arrowPosition){
    if(realPosition == arrowPosition){
        printf("==> ");
    }else{
        printf("    ");
    }}

    void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int key;

int main(){
    system("COLOR 70");
    system("cls");
int key=0;
int p=1;
while(key!=13){
      system("cls");

    printf("    ===========================\n");
    printf("          Tugas Quiz ASD\n");
    printf("    ===========================\n");
    arrowHere(1,p); printf("       1.Level 1\n");
    arrowHere(2,p); printf("       2.Level 2\n");
    arrowHere(3,p); printf("       3.Level 3\n");
    arrowHere(4,p); printf("       4. Exit\n");
     printf("    ===========================\n");
 key=getch();
  if(key==80 && p !=4){
    p++;
  }
  else if(key==72 && p!=1){
    p--;
}
    else{
        p=p;
    }}

    if(key==13 && p==1){
    level1();
    }

else if(key==13 && p==2){
        level2();
 }
 else if(key==13 && p==3){
    level3();
 }
 else if(key==13 && p==4){
        system("cls");
        gotoxy(30,10);
        printf( "SAYONARA\n\n\n\n\n\n\n\n");
        exit(1);
 }
}

void level1(){
   int i, j, n;
    system("cls");
    printf("masukkan bilangan = ");
    scanf("%i", &n);
    for (i = 0; i <= n; i++){
        for (j = 0; j <= i; j++){
            int b = i + j;
            if (b < 10){
                printf("%d  ", b);
            }
            else{
                printf("%d ", b);
            }
        }
        printf("\n");
    }
  printf("\n\nPress any key to go back to menu");
    while(1){
        if (kbhit()){
            key=getch();
            system("cls");
            main();
        }
    }
}
void level2(){
     int i, j, n;
    int a = 0;
    system("cls");
    printf("masukkan bilangan = ");
    scanf("%i", &n);
    for (i = 1; i <= n; i++){
        for (j = 1; j <= i; j++){
            int b = i * j;
            if (b < 10){
                printf("%d  ", b);
            }
            else{
                printf("%d ", b);
            }
        }
        printf("\n");
    }
    printf("\n\nPress any key to go back to menu");
    while(1){
        if (kbhit()){
            key=getch();
            system("cls");
            main();
        }
    }
}



void level3()
{
     int n, a=1;
     system("cls");
   printf("Masukan Jumlah : ");
   scanf("%d",&n);
   for(int i=1; i<=n+1; i++)
   {
     for(int j=i; j<=n; j++)
     {
       printf(" ");
       }
     for(int k=1; k<=2*i-1; k++)
     {
        if(k<i) printf("%d",a++);
        else if(k==i) printf("%d",a);
        else printf("%d",--a);
      }
      printf("\n");
   }
   for(int i=n; i>=1; i--)
   {
     for(int j=n; j>=i; j--)
     {
       printf(" ");
     }
     for(int k=1; k<=2*i-1; k++)
     {
       if(k<i) printf("%d",a++);
       else if(k==i) printf("%d",a);
       else printf("%d",--a);
     }
     printf("\n");
   }
    printf("\n\nPress any key to go back to menu");
    while(1){
        if (kbhit()){
            key=getch();
            system("cls");
            main();
        }
    }
}
