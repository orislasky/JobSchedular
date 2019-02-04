#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <time.h>
int main(int argc, string argv[])
{
    string siur[6];
    string tzakam[7];
    string mitbach[3];
    string rasar[1];
    string avodot[5];
    string sg[3];
    string maflag[2];
    string kalah[10];
    string negev[10];
    string mafeel[10];
    string matol[10];
    string nahag[10];
    string nSoldier[30];
    int n=0;
    int counter=0;
    int counter1=0;
    int counter2=0;
    int counter3=0;
    int counter4=0;
    int soldier=0;
    int numberOfArgs = atoi(argv[1]);
    printf("%i",numberOfArgs);
    string names[]={"ronnen","matan","nitzan","ori","itai","daniella","ronnen1","matan1","nitzan1","ori1","itai1","daniella1","ronnen2","matan2","nitzan2","ori2","itai2","daniella2","ronnen3","matan3","nitzan3","ori3","itai3","daniella3","ronnen4","matan4","nitzan4","ori4","itai4","daniella4"};
    string pakals[]={"kalah","negev","mafeel","matol","nahag","kalah","kalah","negev","mafeel","matol","nahag","kalah","kalah","negev","mafeel","matol","nahag","kalah","kalah","negev","mafeel","matol","nahag","kalah","kalah","negev","mafeel","matol","nahag","kalah"};
    string name;
    string pakal;
    for (int a=0; a<numberOfArgs; a++ )
    {
//        string name = get_string("enter your name:\n");
 //       string pakal = get_string("enter your pakal:\n");
    name=names[a];
    pakal=pakals[a];
    printf("name %s\n",name);
    printf("pakal %s\n",pakal);
    if (strcmp(pakal,"kalah")==0)
    {
     printf("in Kalah\n");
      kalah[counter]=name;
      counter++;
    //  printf("COUNTER - %i",counter);
    }
    else if (strcmp(pakal,"negev")==0)
    {
      negev[counter1]=name;
      counter1++;
    }
    else if (strcmp(pakal,"mafeel")==0)
    {
      mafeel[counter2]=name;
      counter2++;
    }
    else if (strcmp(pakal,"matol")==0)
    {
      matol[counter3]=name;
      counter3++;;
    }
    else if (strcmp(pakal,"nahag")==0)
    {
      nahag[counter4]=name;
      counter4++;
    }
    else if (strcmp(pakal,"n")==0)
    {
        nSoldier[soldier]=name;
        soldier++;
    }
    else {
        printf ("hit the end of the if \n");

    }
    if(counter>0)
    {
        printf("counter - %i\n" ,counter);
        printf("Kalah - %s\n" ,kalah[counter-1]);
        //printf("Nahag - %s\n" ,nahag[counter]);
    }

    }



//getting the siur soldirs
  srand(time( NULL ));

 printf("----------before while-----\n");
    // hetting kalah
     n = rand() % 6;
    printf("n1 - %i\n" ,n);
    printf("----------before while 2-----\n");

    while (strcmp (kalah[n], "buzy")==0)
    {
    printf("----------in while2-----\n");

     n = rand() % 6 + 1;
    }
    siur[0]= kalah[n];
    kalah[n] = "buzy";
    printf("siur - %s\n" ,siur[0]);
    printf("kalah - %s\n" ,kalah[n]);

    // getting a negev
  n = rand() % 4 + 1;
  // (strcmp(pakal,"n")==0)
    while (strcmp (negev[n], "buzy")==0)
    {
     n = rand() % 6 + 1;
    }
    siur [1]= negev [n];
    negev [n] = "buzy";

    // getting mafeel for siur
       n = rand() % 6 + 1;
    while (strcmp(mafeel [n],"buzy")==0)
    {
      n = rand() % 6 + 1;
    }
    siur [2]= mafeel [n];
    mafeel [n] = "buzy";


    // getting the non norm soldiers.
    // getting the kaleem for tzkam
     n = rand() % 6 + 1;
    while (strcmp(kalah[n],"buzy")==0)
    {
      n = rand() % 6 + 1;
    }
    tzakam [0]= kalah [n];
    tzakam [n] = "buzy";
    // getting negevs for tzakam
   n = rand() % 4 + 1;
    while (strcmp(negev[n],"buzy")==0)
    {
     n = rand() % 6 + 1;
    }
    tzakam [1]= negev [n];
    negev [n] = "buzy";
    // getting matols for tzakam
    n = rand() % 6 + 1;
    while (strcmp (matol [n],"buzy")==0)
    {
      n = rand() % 6 + 1;
    }
    tzakam [2]= matol [n];
    matol [n] = "buzy";
     // getting mafeel for tzakam
      n = rand() % 6 + 1;
    while (strcmp (mafeel[n],"buzy")==0)
    {
     n = rand() % 6 + 1;
    }
    tzakam [3]= mafeel [n];
    mafeel [n] = "buzy";
     // getting a anahg achzarit for tzakam
     n = rand() % 6 + 1;
    while (strcmp (nahag[n],"buzy")==0)
    {
      n = rand() % 6 + 1;
    }
    tzakam [4]= nahag [n];
    nahag [n] = "buzy";


   for (int i=0; i<10; i++)
   {
       //if (kalah [i] != buzy)
       if (strcmp (kalah[i],"buzy")!=0)
      nSoldier[soldier]=kalah[i];
      soldier++;
   }

  for (int i=0; i<6; i++)
   {
      printf("Negev Loop %i\n",i);
      if (strcmp (negev[i],"buzy")!=0)
      nSoldier[soldier]=negev[i];
      soldier++;
   }
   for (int i=0; i<2; i++)
   {
       if (strcmp (mafeel[i],"buzy")!=0)
      nSoldier[soldier]=mafeel[i];
      soldier++;
   }

   for (int i=0; i<5; i++)
   {
       if (strcmp (matol[i],"buzy")!=0)
      nSoldier[soldier]=matol[i];
      soldier++;
   }
   for (int i=0; i<5; i++)
   {
       if (strcmp (nahag[i], "buzy")!=0)
      nSoldier[soldier]=nahag[i];
      soldier++;

   }


   // getting normal soldiers for siur
   for (int r=3; r<6; r++)
   {
   printf("Siur Loop %i\n",r);
   printf("Siur Loop Index %i\n",n);
   printf("soldier  %s\n",nSoldier[n]);

   n = rand() % 4 + 1;
    while (strcmp (nSoldier[n],"buzy")==0)
    {
      n = rand() % 4 + 1;
    }
    siur [r]= nSoldier [n];
    nSoldier [n] = "buzy";
   }
   // getting normal soldiers for tzakam
    for (int r=6; r<7; r++)
    {
       n = rand() % 4 + 1;
    while (strcmp (nSoldier[n],"buzy")==0)
    {
      n = rand() % 4 + 1;
    }
    tzakam [r]= nSoldier [n];
    nSoldier [n] = "buzy";
    }

    // getting soldiers for mitbach
    for (int r=0; r<3; r++)
    {
       n = rand() % 4 + 1;
    while (strcmp (nSoldier[n] ,"buzy")==0)
    {
      n = rand() % 4 + 1;
    }
    mitbach [r]= nSoldier [n];
    nSoldier [n] = "buzy";
    }

    // getting soldier for rasar
      n = rand() % 4 + 1;
    while (strcmp (nSoldier[n],"buzy")==0)
    {
      n = rand() % 4 + 1;
    }
    rasar [0]= nSoldier [n];
    nSoldier [n] = "buzy";

  // getting soldiers for avodot
  for (int r=0; r<5; r++)
    {
       n = rand() % 4 + 1;
    while (strcmp (nSoldier[n],"buzy")==0)
    {
      n = rand() % 4 + 1;
    }
    avodot [r]= nSoldier [n];
    nSoldier [n] = "buzy";
    }

    //getting soldiers for sg
    for (int r=0; r<3; r++)
    {
       n = rand() % 6 + 1;
    while (strcmp (nSoldier[n],"buzy")==0)
    {
      n = rand() % 6 + 1;
    }
    sg [r]= nSoldier [n];
    nSoldier [n] = "buzy";
    }

    // getting soldiers for maflag
    for (int r=0; r<3; r++)
    {
       n = rand() % 6 + 1;
    while (strcmp (nSoldier[n],"buzy")==0)
    {
      n = rand() % 6 + 1;
    }
    maflag [r]= nSoldier [n];
    nSoldier [n] = "buzy";
    }
    printf("siur\n");
    for (int y=0; y<6; y++)
    {

        printf("%s\n",siur[y]);
    }
    printf("mitbach:\n");

    for (int a=0; a<3;a++)
    {

        printf("%s\n", mitbach[a]);
    }

    printf("rasar- %s",rasar[0]);
    printf("tzakam:\n");
    for (int b=0; b<7; b++)
    {

        printf("%s",tzakam[b]);
    }
    printf("avodot:\n");
    for (int r=0; r<5; r++)
    {

        printf("%s", avodot[r]);
    }
    printf("sg:\n");
     for (int d=0; d<3; d++)
     {

         printf("%s",sg[d]);
     }
     printf("מפלג:\n");
     for (int e=0; e<2; e++)
     {

         printf("%s", maflag[e]);
     }
}
