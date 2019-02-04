#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
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
    string nSoldier[10];
    int n=0;
    int counter=0;
    int counter1=0;
    int counter2=0;
    int counter3=0;
    int counter4=0;
    int soldier=0;
    int numberOfArgs = atoi(argv[1]);
    printf("%i",numberOfArgs);

    for (int a=0; a<numberOfArgs; a++ )
    {
        string name = get_string("enter your name:\n");
        string pakal = get_string("enter your pakal:\n");



    if (strcmp(pakal,"kalah")==0)
    {
     printf("in Kalah");
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
        printf("%s" ,kalah[0]);
    }

    }



//getting the siur soldirs


    // hetting kalah
     n = rand() % 9 + 1;
    while (strcmp (kalah[n], "buzy")==0)
    {
     n = rand() % 9 + 1;
    }
    siur [0]= kalah [n];
    kalah [n] = "buzy";

    // getting a negev
  n = rand() % 9 + 1;
  // (strcmp(pakal,"n")==0)
    while (strcmp (negev[n], "buzy")==0)
    {
     n = rand() % 9 + 1;
    }
    siur [1]= negev [n];
    negev [n] = "buzy";

    // getting mafeel for siur
       n = rand() % 9 + 1;
    while (strcmp(mafeel [n],"buzy")==0)
    {
      n = rand() % 9 + 1;
    }
    siur [2]= mafeel [n];
    mafeel [n] = "buzy";


    // getting the non norm soldiers.
    // getting the kaleem for tzkam
     n = rand() % 9 + 1;
    while (strcmp(kalah[n],"buzy")==0)
    {
      n = rand() % 9 + 1;
    }
    tzakam [0]= kalah [n];
    tzakam [n] = "buzy";
    // getting negevs for tzakam
   n = rand() % 9 + 1;
    while (strcmp(negev[n],"buzy")==0)
    {
     n = rand() % 9 + 1;
    }
    tzakam [1]= negev [n];
    negev [n] = "buzy";
    // getting matols for tzakam
    n = rand() % 9 + 1;
    while (strcmp (matol [n],"buzy")==0)
    {
      n = rand() % 9 + 1;
    }
    tzakam [2]= matol [n];
    matol [n] = "buzy";
     // getting mafeel for tzakam
      n = rand() % 9 + 1;
    while (strcmp (mafeel[n],"buzy")==0)
    {
     n = rand() % 9 + 1;
    }
    tzakam [3]= mafeel [n];
    mafeel [n] = "buzy";
     // getting a anahg achzarit for tzakam
     n = rand() % 9 + 1;
    while (strcmp (nahag[n],"buzy")==0)
    {
      n = rand() % 9 + 1;
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

  for (int i=0; i<10; i++)
   {
       //if (negev [i] != "buzy")
       if (strcmp (negev[i],"buzy")!=0)
      nSoldier[soldier]=negev[i];
      soldier++;
   }
   for (int i=0; i<10; i++)
   {
       if (strcmp (mafeel[i],"buzy")!=0)
      nSoldier[soldier]=mafeel[i];
      soldier++;
   }

   for (int i=0; i<10; i++)
   {
       if (strcmp (matol[i],"buzy")!=0)
      nSoldier[soldier]=matol[i];
      soldier++;
   }
   for (int i=0; i<10; i++)
   {
       if (strcmp (nahag[i], "buzy")!=0)
      nSoldier[soldier]=nahag[i];
      soldier++;

   }


   // getting normal soldiers for siur
   for (int r=3; r<6; r++)
   {
   n = rand() % 9 + 1;
    while (strcmp (nSoldier[n],"buzy")==0)
    {
      n = rand() % 9 + 1;
    }
    siur [r]= nSoldier [n];
    nSoldier [n] = "buzy";
   }
   // getting normal soldiers for tzakam
    for (int r=6; r<7; r++)
    {
       n = rand() % 9 + 1;
    while (strcmp (nSoldier[n],"buzy")==0)
    {
      n = rand() % 9 + 1;
    }
    tzakam [r]= nSoldier [n];
    nSoldier [n] = "buzy";
    }

    // getting soldiers for mitbach
    for (int r=0; r<3; r++)
    {
       n = rand() % 9 + 1;
    while (strcmp (nSoldier[n] ,"buzy")==0)
    {
      n = rand() % 9 + 1;
    }
    mitbach [r]= nSoldier [n];
    nSoldier [n] = "buzy";
    }

    // getting soldier for rasar
      n = rand() % 9 + 1;
    while (strcmp (nSoldier[n],"buzy")==0)
    {
      n = rand() % 9 + 1;
    }
    rasar [0]= nSoldier [n];
    nSoldier [n] = "buzy";

  // getting soldiers for avodot
  for (int r=0; r<5; r++)
    {
       n = rand() % 9 + 1;
    while (strcmp (nSoldier[n],"buzy")==0)
    {
      n = rand() % 9 + 1;
    }
    avodot [r]= nSoldier [n];
    nSoldier [n] = "buzy";
    }

    //getting soldiers for sg
    for (int r=0; r<3; r++)
    {
       n = rand() % 9 + 1;
    while (strcmp (nSoldier[n],"buzy")==0)
    {
      n = rand() % 9 + 1;
    }
    sg [r]= nSoldier [n];
    nSoldier [n] = "buzy";
    }

    // getting soldiers for maflag
    for (int r=0; r<3; r++)
    {
       n = rand() % 9 + 1;
    while (strcmp (nSoldier[n],"buzy")==0)
    {
      n = rand() % 9 + 1;
    }
    maflag [r]= nSoldier [n];
    nSoldier [n] = "buzy";
    }
    for (int y=0; y<100)

}