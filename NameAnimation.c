#include <stdio.h>
#include <windows.h>

void gotoXY(int x, int y)
{
    printf("\033[%d;%dH", y+1, x+1);
    fflush(stdout);
}

int main(){
    system("cls");
    int i, j, t;
    //Z
    Sleep(2000);
    int x1=17, y1=8;

    for(i=7, t=50; i>=0; i--, t+=25)
    {
        gotoXY(x1,y1-i);
        printf("__________"); fflush(stdout);
        Sleep(t);
        gotoXY(x1,y1-i);
        printf("          "); fflush(stdout);

        gotoXY(x1-1-i,y1+1);
        printf("/"); fflush(stdout);
        gotoXY(x1-2-i,y1+1);
        printf(" "); fflush(stdout);
    }
    gotoXY(x1,y1);
    printf("__________"); fflush(stdout);
    gotoXY(x1-1,y1+1);
    printf("/"); fflush(stdout);

    for(i=8, t=50; i>=0; i--, t+=25)
    {
        gotoXY(x1+11,y1+1-i);
        printf("\\");
        Sleep(t);
        gotoXY(x1+11,y1+1-i);
        printf(" ");
    }

    gotoXY(x1,y1);
    printf("__________"); fflush(stdout);
    gotoXY(x1-1,y1+1);
    printf("/          \\"); fflush(stdout);

    for(i=30, t=10; i>=0; i--, t+=2)
    {
        gotoXY(x1-1,y1+2+i);
        printf("\\______"); fflush(stdout);
        Sleep(t);
        gotoXY(x1-1,y1+2+i);
        printf("            "); fflush(stdout);
    }

    gotoXY(x1,y1);
    printf("__________"); fflush(stdout);
    gotoXY(x1-1,y1+1);
    printf("/          \\"); fflush(stdout);
    gotoXY(x1-1,y1+2);
    printf("\\______"); fflush(stdout);
    Sleep(200);

    for(i=1; i<=4; i++)
    {
        gotoXY((x1+11)-i,(y1+1)+i);
        printf("/"); fflush(stdout);
        Sleep(200);
        gotoXY((x1+6)-i,(y1+2)+i);
        printf("/"); fflush(stdout);
    }
    int x2=20, y2=13;

    for(i=20; i>=0; i--)
    {
        gotoXY(x2+4,y2+i);
        printf("/_____"); fflush(stdout);
        gotoXY(x2-1,y2+1+i);
        printf("/          \\"); fflush(stdout);
        gotoXY(x2-1,y2+2+i);
        printf("\\__________/"); fflush(stdout);
        Sleep(50);
        gotoXY(x2-1,y2+3+i);
        printf("             "); fflush(stdout);
    }
    gotoXY(x2+4,y2);
    printf("/_____"); fflush(stdout);
    gotoXY(x2-1,y2+1);
    printf("/          \\"); fflush(stdout);
    gotoXY(x2-1,y2+2);
    printf("\\__________/"); fflush(stdout);

    Sleep(400);
    ///A
    int x3=32, y3=15;

    //A Left
    for(i=0; i<7; i++)
    {
        gotoXY(x3+i,y3-i);
        printf("/"); fflush(stdout);
        Sleep(100);
    }

    //A top
    int x4=41, y4=9;
    for(i=0; i<3; i++)
    {
        gotoXY(x4-2+i,y4-1);
        printf("_"); fflush(stdout);
        Sleep(100);
    }

    //A Right
    for(i=0; i<7; i++)
    {
        gotoXY((x4+1)+i,y4+i);
        printf("\\"); fflush(stdout);
        Sleep(100);
    }
    //A Left
    gotoXY(x3+1,y3);
    printf("__"); fflush(stdout);
    for(i=0; i<3; i++)
    {
        gotoXY((x3+3)+i,y3-i);
        printf("/"); fflush(stdout);
        Sleep(100);
    }

    //A middle
    for(i=0; i<5; i++)
    {
        gotoXY(x3+6+i,y3-3);
        printf("_"); fflush(stdout);
        Sleep(100);
    }

    //A Right
        for(i=0; i<3; i++)
    {
        gotoXY((x4+2)+i,(y4+4)+i);
        printf("\\"); fflush(stdout);
        Sleep(100);
    }

    gotoXY(x4+5, y4+6);
    printf("__"); fflush(stdout);

    //A middle
    gotoXY(x4-2, y4+2);
    printf("/");
    Sleep(100);
    gotoXY(x4-1, y4+1);
    printf("_");
    Sleep(100);
    gotoXY(x4, y4+2);
    printf("\\");
    Sleep(100);
    gotoXY(x4-1, y4+2);
    printf("_");


    for(i=0; i<7; i++)
    {
        gotoXY(x3+i,y3-i);
        printf("/"); fflush(stdout);
    }
    for(i=0; i<3; i++)
    {
        gotoXY((x3+3)+i,y3-i);
        printf("/"); fflush(stdout);
    }
    //A middle
    gotoXY(x3+6,y3-3);
    printf("_____"); fflush(stdout);

    //int x4=31, y4=9;

    for(i=0; i<7; i++)
    {
        gotoXY((x4+1)+i,y4+i);
        printf("\\"); fflush(stdout);
    }
    for(i=0; i<3; i++)
    {
        gotoXY((x4+2)+i,(y4+4)+i);
        printf("\\"); fflush(stdout);
    }

    //A top
    gotoXY(x4-2,y4-1);
    printf("___"); fflush(stdout);

    gotoXY(x4-1, y4+1);
    printf("_");
    gotoXY(x4-2, y4+2);
    printf("/_\\");
    Sleep(400);

    ///B
    int x5=50, y5=15;

    for(i=0;i<7;i++)
    {
        gotoXY(x5,y5-i);
        printf("|");
        Sleep(100);
    }
    for(i=0;i<7;i++)
    {
        gotoXY(x5+1+i,y5-7);
        printf("_");
        Sleep(100);
    }
    gotoXY(x5+8,9);
    printf("\\");
    Sleep(100);
    gotoXY(x5+9,10);
    printf("|");
    Sleep(100);
    gotoXY(x5+8,11);
    printf("/");
    Sleep(100);
    gotoXY(x5+7,12);
    printf("|");
    Sleep(100);
    gotoXY(x5+8,13);
    printf("\\");
    Sleep(100);
    gotoXY(x5+9,14);
    printf("|");
    Sleep(100);
    gotoXY(x5+8,15);
    printf("/");
    Sleep(100);
    for(i=0;i<7;i++)
    {
        gotoXY(x5+7-i,y5);
        printf("_");
        Sleep(100);
    }
    for(i=1;i<=3;i++)
    {
        gotoXY(x5+4,9);
        printf("_");
        gotoXY(x5+3,10);
        printf("|");
        gotoXY(x5+3,11);
        printf("|");
        gotoXY(x5+4,11);
        printf("_");
        gotoXY(x5+5,10);
        printf("\\");
        gotoXY(x5+5,11);
        printf("/");
        Sleep(250);
        gotoXY(x5+4,9);
        printf(" ");
        gotoXY(x5+3,10);
        printf(" ");
        gotoXY(x5+3,11);
        printf(" ");
        gotoXY(x5+4,11);
        printf(" ");
        gotoXY(x5+5,10);
        printf(" ");
        gotoXY(x5+5,11);
        printf(" ");
        Sleep(250);
        gotoXY(x5+4,12);
        printf("_");
        gotoXY(x5+3,13);
        printf("|");
        gotoXY(x5+3,14);
        printf("|");
        gotoXY(x5+4,14);
        printf("_");
        gotoXY(x5+5,13);
        printf("\\");
        gotoXY(x5+5,14);
        printf("/");
        Sleep(250);
        gotoXY(x5+4,12);
        printf(" ");
        gotoXY(x5+3,13);
        printf(" ");
        gotoXY(x5+3,14);
        printf(" ");
        gotoXY(x5+4,14);
        printf(" ");
        gotoXY(x5+5,13);
        printf(" ");
        gotoXY(x5+5,14);
        printf(" ");
        Sleep(250);
    }

    gotoXY(x5+4,9);
    printf("_");
    gotoXY(x5+3,10);
    printf("|");
    gotoXY(x5+3,11);
    printf("|");
    gotoXY(x5+4,11);
    printf("_");
    gotoXY(x5+5,10);
    printf("\\");
    gotoXY(x5+5,11);
    printf("/");

    gotoXY(x5+4,12);
    printf("_");
    gotoXY(x5+3,13);
    printf("|");
    gotoXY(x5+3,14);
    printf("|");
    gotoXY(x5+4,14);
    printf("_");
    gotoXY(x5+5,13);
    printf("\\");
    gotoXY(x5+5,14);
    printf("/");
    Sleep(400);

    ///I
    for(j=35, t=1000; j>=0; j--, t+=800)
    {
        int x6=61+j, y6=15;
        gotoXY(x6,y6);
        printf("|____________|");
        gotoXY(x6+1,y6-1);
        printf("____|  |____");
        for(i=0;i<4;i++)
        {
            gotoXY(x6+5,y6-2-i);
            printf("|  |");
        }
        gotoXY(x6+1,y6-7);
        printf("____________");
        gotoXY(x6,y6-6);
        printf("|____    ____|");
        usleep(t);

        gotoXY(x6+14,y6);
        printf(" "); fflush(stdout);
        gotoXY(x6+13,y6-1);
        printf(" "); fflush(stdout);
        for(i=0;i<4;i++)
        {
            gotoXY(x6+9,y6-2-i);
            printf("   "); fflush(stdout);
        }
        gotoXY(x6+13,y6-7);
        printf(" "); fflush(stdout);
        gotoXY(x6+14,y6-6);
        printf(" "); fflush(stdout);
        usleep(t);
    }
    Sleep(400);

    ///R
    for(j=15, t=75; j>=0; j--)
    {
        int x7=76, y7=15+j;
        for(i=0; i<7; i++)
        {
            gotoXY(x7,y7-i);
            printf("|"); fflush(stdout);
        }
        gotoXY(x7+1,y7);
        printf("__"); fflush(stdout);
        for(i=0; i<4; i++)
        {
            gotoXY(x7+3,y7-i);
            printf("|"); fflush(stdout);
        }
        for(i=0; i<7; i++)
        {
            gotoXY(x7+1+i, y7-7);
            printf("_"); fflush(stdout);
        }
        gotoXY(x7+8, y7-6);
        printf("\\"); fflush(stdout);
        gotoXY(x7+9, y7-5);
        printf("|"); fflush(stdout);
        gotoXY(x7+8, y7-4);
        printf("/"); fflush(stdout);
        gotoXY(x7+6, y7-4);
        printf("__"); fflush(stdout);
        for(i=0; i<4; i++)
        {
            gotoXY(x7+4+i,y7-3+i);
            printf("\\"); fflush(stdout);
        }
        gotoXY(x7+8, y7);
        printf("__"); fflush(stdout);
        for(i=0; i<4; i++)
        {
            gotoXY(x7+7+i,y7-3+i);
            printf("\\"); fflush(stdout);
        }
        //R middle
        gotoXY(x7+3, y7-5);
        printf("|"); fflush(stdout);
        gotoXY(x7+4, y7-6);
        printf("_"); fflush(stdout);
        gotoXY(x7+4, y7-5);
        printf("_"); fflush(stdout);
        gotoXY(x7+5, y7-5);
        printf("\\"); fflush(stdout);

        Sleep(t);

        y7=15+j;
        for(i=0; i<7; i++)
        {
            gotoXY(x7,y7-i);
            printf(" "); fflush(stdout);
        }
        gotoXY(x7+1,y7);
        printf("  "); fflush(stdout);
        for(i=0; i<4; i++)
        {
            gotoXY(x7+3,y7-i);
            printf(" "); fflush(stdout);
        }
        for(i=0; i<7; i++)
        {
            gotoXY(x7+1+i, y7-7);
            printf(" "); fflush(stdout);
        }
        gotoXY(x7+8, y7-6);
        printf(" "); fflush(stdout);
        gotoXY(x7+9, y7-5);
        printf(" "); fflush(stdout);
        gotoXY(x7+8, y7-4);
        printf(" "); fflush(stdout);
        gotoXY(x7+6, y7-4);
        printf("  "); fflush(stdout);
        for(i=0; i<4; i++)
        {
            gotoXY(x7+4+i,y7-3+i);
            printf(" "); fflush(stdout);
        }
        gotoXY(x7+8, y7);
        printf("  "); fflush(stdout);
        for(i=0; i<4; i++)
        {
            gotoXY(x7+7+i,y7-3+i);
            printf(" "); fflush(stdout);
        }
        //R middle
        gotoXY(x7+3, y7-5);
        printf(" "); fflush(stdout);
        gotoXY(x7+4, y7-6);
        printf(" "); fflush(stdout);
        gotoXY(x7+4, y7-5);
        printf(" "); fflush(stdout);
        gotoXY(x7+5, y7-5);
        printf(" "); fflush(stdout);
        Sleep(t);
    }

    int x7=76, y7=15;
    for(i=0; i<7; i++)
    {
        gotoXY(x7,y7-i);
        printf("|"); fflush(stdout);
    }
    gotoXY(x7+1,y7);
    printf("__"); fflush(stdout);
    for(i=0; i<4; i++)
    {
        gotoXY(x7+3,y7-i);
        printf("|"); fflush(stdout);
    }
    for(i=0; i<7; i++)
    {
        gotoXY(x7+1+i, y7-7);
        printf("_"); fflush(stdout);
    }
    gotoXY(x7+8, y7-6);
    printf("\\"); fflush(stdout);
    gotoXY(x7+9, y7-5);
    printf("|"); fflush(stdout);
    gotoXY(x7+8, y7-4);
    printf("/"); fflush(stdout);
    gotoXY(x7+6, y7-4);
    printf("__"); fflush(stdout);
    for(i=0; i<4; i++)
    {
        gotoXY(x7+4+i,y7-3+i);
        printf("\\"); fflush(stdout);
    }
    gotoXY(x7+8, y7);
    printf("__"); fflush(stdout);
    for(i=0; i<4; i++)
    {
        gotoXY(x7+7+i,y7-3+i);
        printf("\\"); fflush(stdout);
    }
    //R middle
    gotoXY(x7+3, y7-5);
    printf("|"); fflush(stdout);
    gotoXY(x7+4, y7-6);
    printf("_"); fflush(stdout);
    gotoXY(x7+4, y7-5);
    printf("_"); fflush(stdout);
    gotoXY(x7+5, y7-5);
    printf("\\"); fflush(stdout);

    ///box
    int x8=14, y8=16;

    gotoXY(x8-1, y8);
    printf("_|"); fflush(stdout);
    gotoXY(x8+73, y8);
    printf("|_"); fflush(stdout);
    gotoXY(x8, y8-9);
    printf("|"); fflush(stdout);
    gotoXY(x8-1, y8-8);
    printf("_"); fflush(stdout);
    gotoXY(x8+73, y8-9);
    printf("|"); fflush(stdout);
    gotoXY(x8+74, y8-8);
    printf("_"); fflush(stdout);
    Sleep(600);

    gotoXY(x8-1, y8);
    printf("\\/"); fflush(stdout);
    gotoXY(x8+73, y8);
    printf("\\/"); fflush(stdout);
    gotoXY(x8, y8-9);
    printf("\\"); fflush(stdout);
    gotoXY(x8-1, y8-8);
    printf("/"); fflush(stdout);
    gotoXY(x8+73, y8-9);
    printf("/"); fflush(stdout);
    gotoXY(x8+74, y8-8);
    printf("\\"); fflush(stdout);
    Sleep(600);

    gotoXY(x8-1, y8);
    printf("|_"); fflush(stdout);
    gotoXY(x8+73, y8);
    printf("_|"); fflush(stdout);
    gotoXY(x8, y8-9);
    printf("_"); fflush(stdout);
    gotoXY(x8-1, y8-8);
    printf("|"); fflush(stdout);
    gotoXY(x8+73, y8-9);
    printf("_"); fflush(stdout);
    gotoXY(x8+74, y8-8);
    printf("|"); fflush(stdout);
    Sleep(600);


    for(i=1; i<=6; i++)
    {
        if(i%2==0)
        {
            gotoXY(x8+2,y8);
            printf("+"); fflush(stdout);
            gotoXY(x8+10,y8-9);
            printf("+"); fflush(stdout);
            gotoXY(x8+20,y8);
            printf("+"); fflush(stdout);
            gotoXY(x8+30,y8-9);
            printf("+"); fflush(stdout);
            gotoXY(x8+40,y8);
            printf("+"); fflush(stdout);
            gotoXY(x8+50,y8-9);
            printf("+"); fflush(stdout);
            gotoXY(x8+60,y8);
            printf("+"); fflush(stdout);
            gotoXY(x8+70,y8-9);
            printf("+"); fflush(stdout);
            Sleep(400);

            gotoXY(x8+2,y8);
            printf(" "); fflush(stdout);
            gotoXY(x8+10,y8-9);
            printf(" "); fflush(stdout);
            gotoXY(x8+20,y8);
            printf(" "); fflush(stdout);
            gotoXY(x8+30,y8-9);
            printf(" "); fflush(stdout);
            gotoXY(x8+40,y8);
            printf(" "); fflush(stdout);
            gotoXY(x8+50,y8-9);
            printf(" "); fflush(stdout);
            gotoXY(x8+60,y8);
            printf(" "); fflush(stdout);
            gotoXY(x8+70,y8-9);
            printf(" "); fflush(stdout);
            Sleep(200);
        }
        if(i%2!=0)
        {
            gotoXY(x8+2,y8-9);
            printf("+"); fflush(stdout);
            gotoXY(x8+20,y8);
            printf("+"); fflush(stdout);
            gotoXY(x8+30,y8-9);
            printf("+"); fflush(stdout);
            gotoXY(x8+40,y8);
            printf("+"); fflush(stdout);
            gotoXY(x8+50,y8-9);
            printf("+"); fflush(stdout);
            gotoXY(x8+60,y8);
            printf("+"); fflush(stdout);
            gotoXY(x8+70,y8-9);
            printf("+"); fflush(stdout);
            Sleep(400);

            gotoXY(x8+2,y8-9);
            printf(" "); fflush(stdout);
            gotoXY(x8+20,y8);
            printf(" "); fflush(stdout);
            gotoXY(x8+30,y8-9);
            printf(" "); fflush(stdout);
            gotoXY(x8+40,y8);
            printf(" "); fflush(stdout);
            gotoXY(x8+50,y8-9);
            printf(" "); fflush(stdout);
            gotoXY(x8+60,y8);
            printf(" "); fflush(stdout);
            gotoXY(x8+70,y8-9);
            printf(" "); fflush(stdout);
            Sleep(200);
        }
    }
    Sleep(800);

    ///Sir ke potano XD

    int x9=1, y9=4;
    //SIR-S
    gotoXY(x9+65, y9);
    printf("******"); fflush(stdout);
    gotoXY(x9+69, y9-1);
    printf("**"); fflush(stdout);
    gotoXY(x9+65, y9-2);
    printf("******"); fflush(stdout);
    gotoXY(x9+65, y9-3);
    printf("**"); fflush(stdout);
    gotoXY(x9+65, y9-5);
    printf("******"); fflush(stdout);

    //SIR-I
    for(i=0;i<5;i++)
    {
        gotoXY(x9+78,y9-i);
        printf("**"); fflush(stdout);
    }
    gotoXY(x9+75, y9-4);
    printf("********"); fflush(stdout);
    gotoXY(x9+75, y9);
    printf("********"); fflush(stdout);

    //SIR-R
    for(i=0; i<5; i++)
    {
        gotoXY(x9+87,y9-i);
        printf("**"); fflush(stdout);
    }
    gotoXY(x9+89, y9-4);
    printf("****"); fflush(stdout);
    gotoXY(x9+91, y9-3);
    printf("**"); fflush(stdout);
    gotoXY(x9+89, y9-2);
    printf("**"); fflush(stdout);
    for(i=0; i<3; i++)
    {
        gotoXY(x9+91+i, y9-2+i);
        printf("**"); fflush(stdout);
    }



    //AMAR-A
    for(i=0; i<5; i++)
    {
        gotoXY(x9+10+i, y9-i);
        printf("*"); fflush(stdout);
        gotoXY(x9+10+1+i, y9-i);
        printf("*"); fflush(stdout);
        gotoXY(x9+10+4+i, i);
        printf("*"); fflush(stdout);
        gotoXY(x9+10+5+i, i);
        printf("*"); fflush(stdout);
    }
    gotoXY(x9+10+4,2);
    printf("**"); fflush(stdout);
    gotoXY(x9+10+4,1);
    printf("  "); fflush(stdout);

    //AMAR-M
    for(i=0; i<5; i++)
    {
        gotoXY(x9+10+12, y9-i);
        printf("**"); fflush(stdout);
        gotoXY(x9+10+21, y9-i);
        printf("**"); fflush(stdout);
    }
    gotoXY(x9+10+14,y9-4);
    printf("*"); fflush(stdout);

    for(i=0; i<3; i++)
    {

        gotoXY(x9+10+14+i, y9-3+i);
        printf("**"); fflush(stdout);
    }
    for(i=0; i<4; i++)
    {
        gotoXY(x9+10+17+i, y9-1-i);
        printf("**"); fflush(stdout);
    }

    //AMAR-A
    for(i=0; i<5; i++)
    {
        gotoXY(x9+35+i, y9-i);
        printf("*"); fflush(stdout);
        gotoXY(x9+35+1+i, y9-i);
        printf("*"); fflush(stdout);
        gotoXY(x9+35+4+i, i);
        printf("*"); fflush(stdout);
        gotoXY(x9+35+5+i, i);
        printf("*"); fflush(stdout);
    }
    gotoXY(x9+35+4,2);
    printf("**"); fflush(stdout);
    gotoXY(x9+35+4,1);
    printf("  "); fflush(stdout);

    //AMAR-R
    for(i=0; i<5; i++)
    {
        gotoXY(x9+47,y9-i);
        printf("**"); fflush(stdout);
    }
    gotoXY(x9+49, y9-4);
    printf("****"); fflush(stdout);
    gotoXY(x9+51, y9-3);
    printf("**"); fflush(stdout);
    gotoXY(x9+49, y9-2);
    printf("**"); fflush(stdout);
    for(i=0; i<3; i++)
    {
        gotoXY(x9+51+i, y9-2+i);
        printf("**"); fflush(stdout);
    }

    Sleep(1000);

    //AMAR-space
    for(i=0; i<5; i++)
    {
        gotoXY(x9+10+i, y9-i);
        printf(" "); fflush(stdout);
        gotoXY(x9+10+1+i, y9-i);
        printf(" "); fflush(stdout);
        gotoXY(x9+10+4+i, i);
        printf(" "); fflush(stdout);
        gotoXY(x9+10+5+i, i);
        printf(" "); fflush(stdout);
    }
    gotoXY(x9+10+4,2);
    printf("  "); fflush(stdout);
    gotoXY(x9+10+4,1);
    printf("  "); fflush(stdout);

    //TOMAR-T

    for(i=0;i<5;i++)
    {
        gotoXY(x9+5,y9-i);
        printf("**"); fflush(stdout);
    }
    gotoXY(x9+2, y9-4);
    printf("********"); fflush(stdout);

    //TOMAR-O

    for(i=0;i<5;i++)
    {
        gotoXY(x9+12, y9-i);
        printf("**"); fflush(stdout);
    }
    gotoXY(x9+14, y9-4);
    printf("****"); fflush(stdout);
    gotoXY(x9+14, y9-3);
    printf("****"); fflush(stdout);
    for(i=0;i<5;i++)
    {
        gotoXY(x9+18, y9-i);
        printf("**"); fflush(stdout);
    }
    gotoXY(x9+14, y9-1);
    printf("****"); fflush(stdout);
    gotoXY(x9+14, y9);
    printf("****"); fflush(stdout);

    Sleep(1000);

    //TOMAR-Space
    for(i=0;i<5;i++)
    {
        gotoXY(x9+5,y9-i);
        printf("  "); fflush(stdout);
    }
    gotoXY(x9+2, y9-4);
    printf("        "); fflush(stdout);

    //TOMAR-Space
    for(i=0;i<5;i++)
    {
        gotoXY(x9+12, y9-i);
        printf("  "); fflush(stdout);
    }
    gotoXY(x9+14, y9-4);
    printf("    "); fflush(stdout);
    gotoXY(x9+14, y9-3);
    printf("    "); fflush(stdout);
    for(i=0;i<5;i++)
    {
        gotoXY(x9+18, y9-i);
        printf("  "); fflush(stdout);
    }
    gotoXY(x9+14, y9-1);
    printf("    "); fflush(stdout);
    gotoXY(x9+14, y9);
    printf("    "); fflush(stdout);

    //AMAR-A-Space
    for(i=0; i<5; i++)
    {
        gotoXY(x9+35+i, y9-i);
        printf(" "); fflush(stdout);
        gotoXY(x9+35+1+i, y9-i);
        printf(" "); fflush(stdout);
        gotoXY(x9+35+4+i, i);
        printf(" "); fflush(stdout);
        gotoXY(x9+35+5+i, i);
        printf(" "); fflush(stdout);
    }
    gotoXY(x9+35+4,2);
    printf("  "); fflush(stdout);
    gotoXY(x9+35+4,1);
    printf("  "); fflush(stdout);

    //AMAR-R-Space
    for(i=0; i<5; i++)
    {
        gotoXY(x9+47,y9-i);
        printf("  "); fflush(stdout);
    }
    gotoXY(x9+49, y9-4);
    printf("    "); fflush(stdout);
    gotoXY(x9+51, y9-3);
    printf("  "); fflush(stdout);
    gotoXY(x9+49, y9-2);
    printf("  "); fflush(stdout);
    for(i=0; i<3; i++)
    {
        gotoXY(x9+51+i, y9-2+i);
        printf("  "); fflush(stdout);
    }

    for(i=0; i<2; i++)
    {
        //JAMIL-J
        gotoXY(x9+2,y9-4);
        printf("******"); fflush(stdout);
        gotoXY(x9+2,y9-3);
        printf("******"); fflush(stdout);
        for(i=0; i<5; i++)
        {
            gotoXY(x9+2+4,y9-i);
            printf("**"); fflush(stdout);
        }
        gotoXY(x9+2,y9-1);
        printf("**"); fflush(stdout);
        gotoXY(x9+2+1,y9);
        printf("***"); fflush(stdout);
        //JAMIL-A
        for(i=0; i<5; i++)
        {
            gotoXY(x9+10+i, y9-i);
            printf("*"); fflush(stdout);
            gotoXY(x9+10+1+i, y9-i);
            printf("*"); fflush(stdout);
            gotoXY(x9+10+4+i, i);
            printf("*"); fflush(stdout);
            gotoXY(x9+10+5+i, i);
            printf("*"); fflush(stdout);
        }
        gotoXY(x9+10+4,2);
        printf("**"); fflush(stdout);
        gotoXY(x9+10+4,1);
        printf("  "); fflush(stdout);

        //JAMIL-I
        for(i=0;i<5;i++)
        {
            gotoXY(x9+38,y9-i);
            printf("**"); fflush(stdout);
        }
        gotoXY(x9+35, y9-4);
        printf("********"); fflush(stdout);
        gotoXY(x9+35, y9);
        printf("********"); fflush(stdout);

        //JAMIL-L
        gotoXY(x9+45, y9);
        printf("******"); fflush(stdout);
        for(i=0;i<5;i++)
        {
            gotoXY(x9+45,y9-i);
            printf("**"); fflush(stdout);
        }
        Sleep(500);


        //JAMIL-space

        //JAMIL-J
        gotoXY(x9+2,y9-4);
        printf("      "); fflush(stdout);
        gotoXY(x9+2,y9-3);
        printf("      "); fflush(stdout);
        for(i=0; i<5; i++)
        {
            gotoXY(x9+2+4,y9-i);
            printf("  "); fflush(stdout);
        }
        gotoXY(x9+2,y9-1);
        printf("  "); fflush(stdout);
        gotoXY(x9+2+1,y9);
        printf("   "); fflush(stdout);

        //JAMIL-A
        for(i=0; i<5; i++)
        {
            gotoXY(x9+10+i, y9-i);
            printf(" "); fflush(stdout);
            gotoXY(x9+10+1+i, y9-i);
            printf(" "); fflush(stdout);
            gotoXY(x9+10+4+i, i);
            printf(" "); fflush(stdout);
            gotoXY(x9+10+5+i, i);
            printf(" "); fflush(stdout);
        }
        gotoXY(x9+10+4,2);
        printf("  "); fflush(stdout);
        gotoXY(x9+10+4,1);
        printf("  "); fflush(stdout);

        //AMAR-M
        for(i=0; i<5; i++)
        {
            gotoXY(x9+10+12, y9-i);
            printf("  "); fflush(stdout);
            gotoXY(x9+10+21, y9-i);
            printf("  "); fflush(stdout);
        }
        gotoXY(x9+10+14,y9-4);
        printf(" "); fflush(stdout);

        for(i=0; i<3; i++)
        {

            gotoXY(x9+10+14+i, y9-3+i);
            printf("  "); fflush(stdout);
        }
        for(i=0; i<4; i++)
        {
            gotoXY(x9+10+17+i, y9-1-i);
            printf("  "); fflush(stdout);
        }


        //JAMIL-I
        for(i=0;i<5;i++)
        {
            gotoXY(x9+38,y9-i);
            printf("  "); fflush(stdout);
        }
        gotoXY(x9+35, y9-4);
        printf("        "); fflush(stdout);
        gotoXY(x9+35, y9);
        printf("        "); fflush(stdout);

        //JAMIL-L
        gotoXY(x9+45, y9);
        printf("      "); fflush(stdout);
        for(i=0;i<5;i++)
        {
            gotoXY(x9+45,y9-i);
            printf("  "); fflush(stdout);
        }
        Sleep(500);

    }
    //JAMIL-J
    gotoXY(x9+2,y9-4);
    printf("******"); fflush(stdout);
    gotoXY(x9+2,y9-3);
    printf("******"); fflush(stdout);
    for(i=0; i<5; i++)
    {
        gotoXY(x9+2+4,y9-i);
        printf("**"); fflush(stdout);
    }
    gotoXY(x9+2,y9-1);
    printf("**"); fflush(stdout);
    gotoXY(x9+2+1,y9);
    printf("***"); fflush(stdout);

    //JAMIL-A
    for(i=0; i<5; i++)
    {
        gotoXY(x9+10+i, y9-i);
        printf("*"); fflush(stdout);
        gotoXY(x9+10+1+i, y9-i);
        printf("*"); fflush(stdout);
        gotoXY(x9+10+4+i, i);
        printf("*"); fflush(stdout);
        gotoXY(x9+10+5+i, i);
        printf("*"); fflush(stdout);
    }
    gotoXY(x9+10+4,2);
    printf("**"); fflush(stdout);
    gotoXY(x9+10+4,1);
    printf("  "); fflush(stdout);

    //JAMIL-I
    for(i=0;i<5;i++)
    {
        gotoXY(x9+38,y9-i);
        printf("**"); fflush(stdout);
    }
    gotoXY(x9+35, y9-4);
    printf("********"); fflush(stdout);
    gotoXY(x9+35, y9);
    printf("********"); fflush(stdout);

    //JAMIL-L
    gotoXY(x9+45, y9);
    printf("******"); fflush(stdout);
    for(i=0;i<5;i++)
    {
        gotoXY(x9+45,y9-i);
        printf("**"); fflush(stdout);
    }

    //AMAR-M
    for(i=0; i<5; i++)
    {
        gotoXY(x9+10+12, y9-i);
        printf("**"); fflush(stdout);
        gotoXY(x9+10+21, y9-i);
        printf("**"); fflush(stdout);
    }
    gotoXY(x9+10+14,y9-4);
    printf("*"); fflush(stdout);

    for(i=0; i<3; i++)
    {

        gotoXY(x9+10+14+i, y9-3+i);
        printf("**"); fflush(stdout);
    }
    for(i=0; i<4; i++)
    {
        gotoXY(x9+10+17+i, y9-1-i);
        printf("**"); fflush(stdout);
    }
    Sleep(400);

    ///Text
    int x10=1, y10=20;
    for(i=0, t=0; i<40; i++, t+=5)
    {
        gotoXY(x10+i, y10);
        printf("JAMIL SIR ER AGOMON"); fflush(stdout);
        gotoXY(x10+90-i, y10+1);
        printf("CODE ER SHATHE SHAGOTOM");
        Sleep(t);
        gotoXY(x10+i, y10);
        printf("                   "); fflush(stdout);
        gotoXY(x10+90-i, y10+1);
        printf("                       ");
    }
    gotoXY(x10+40, y10);
    printf("JAMIL SIR ER AGOMON"); fflush(stdout);
    gotoXY(x10+50, y10+1);
    printf("CODE ER SHATHE SHAGOTOM");
  
    getchar();
  
    return 0;
}
