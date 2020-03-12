#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include <Mmsystem.h>
#pragma comment(lib, "winmm.lib")
void recursur()
{
	HANDLE hout;	
	COORD coord;	
	coord.X = 0;	
	coord.Y = 0;	
	hout = GetStdHandle(STD_OUTPUT_HANDLE);	
	SetConsoleCursorPosition(hout,coord);
}

int main()
{
    system("color 8F");
    void recursur();
    int i=1,j;
    clock_t stime=0,ftime=0;
    char ch[1943],num[]="MV\\MV (0000)",n[5];
    FILE *fp;
    stime=clock();
    PlaySound(TEXT("anime.wav"),NULL,SND_FILENAME | SND_ASYNC);
    while(i<=2870)
    {
        if(i % 30 == 0)
		{
			j = 43;
		}
		else
		{
			j = 33;
		}
        strcpy(num,"MV\\MV (");
        sprintf(n,"%d",i);
        strcat(num,n);
        strcat(num,").txt");
        ftime=clock();
        if((ftime - stime) >= j)
        {
            i++;
            fp=fopen(num,"r");
            fread(ch,sizeof(ch),1,fp);
            ch[1943] = '\0';
            fclose(fp);
            fprintf(stdout,"%s",ch);
            stime+=j;
            recursur();
        }
    }
    system("cls");
    getchar();
    return 0;
}
