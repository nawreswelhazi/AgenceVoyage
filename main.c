#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<string.h>
#include <windows.h>
void Color(int couleurDuTexte,int couleurDeFond) // fonction d'affichage de couleurs
{
HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}





int rechercher(int tableau[],int taille1,int nombre){
	int i=0,x=0;
	while(i<=taille1){
		if(tableau[i]==nombre){
			x=1;

		}
i++;
	}
	return(x);
}
int main()
{
     int i,t, j, k, choix, taille=10,entrer=1, voy=0,trouve,existe,supp,perm, a, b, c, s, a1, b1, c1, a2, b2, c2,h,n, x,k1, y, retour=0, u, r, n1, u1, min, max;
     char t1[500][10];
     int test, alea, sclient;
     int shiver=0,sprintemps=0,sete=0,sautomne=0;
     int tabstat[500]={};
     int annee[50];
	int ages[50];

    char ch[50];
    int enfant=0,jeune=0,adulte=0,adulte1=0;

 int idvoyage[50]={1,2,3,4,5,6,7,8,9,10};
 char passeport[50][8]={"A2345678", "C4567893", "D4278953","F4689912","A5567891", "Q2456333","I4889516", "P5789955", "K5789522", "S6437887"};
char  nom[50][10]={"nour","maram","sonia","samy","mourad","nawres","cyrine","ayda","ines","sinda"};
char naissance[50][11]={"01/12/2010","31/02/1988","23/07/1964","25/06/1977","26/06/1999","09/04/1980","11/02/1995","08/07/1989","17/04/2005","03/11/1992"};
int depart[50][3]={{6,8,2010},{13,1,2011},{2,5,2011},{22,9,2015},{23,10,2015},{13,1,2016},{17,3,2016},{19,11,2016},{25,10,2017},{2,1,2018}};
int arrivee[50][3]={{10,9,2010},{6,12,2011},{19,6,2012},{18,4,2016},{23,11,2015},{5,2,2016},{11,4,2017},{30,11,2016},{1,1,2018},{3,4,2018}};
char ville[50][20]={"Rome","Blida","Milan","Picos","Franceville","Umutara","Beyrouth","Tripoli","Abu Dhabi","Dubai"};
char pays[50][20]={"Italie","Algerie","Italie","Cap-vert","Gabon","Rwanda","Liban","Liban","UAE","UAE"};
int group[50]={0,1,1,1,0,1,0,1,0,0};
int idgroupe[50]={0,1,2,3,0,4,0,5,0,0};
int idgroupe1[50];
int depart1[50][3];
int arrivee1[50][3];
char ville1[50][20];
char pays1[50][20];
char npass[7];
int ngroupe[50]={4,10,7,15,9};
int idgrou;
Color(15,0);
    printf("*******************************************************************\n");
    Color(15,0);
    printf("*        ~ Projet d'Atelier de Programmation Num%cro 1 ~           *\n",130) ;
    printf("\n*                        R%calis%c Par:                             *\n ",130,130);
     printf("\n*");
    Color(12,0);
    printf("                  - Welhazi Nawres (1LFIG2)                      ");
     Color(15,0);
      printf("*\n");
      printf("\n*");
    Color(12,0);
    printf("                  - Kobbi Nour (1LFIG2)                          ");
    Color(15,0);
     printf("*\n");
    printf("\n*                    ISG TUNIS 2018/2019                          *\n ");

    printf("\n*******************************************************************\n \n");
    printf("Voulez-vous entrer? \n1.oui\n2.non\nVotre choix:\t");
    scanf("%d", &u1);
    while (u1!=1 && u1!=2)
    {
        printf("choix invalide\nVoulez-vous entrer? \n1.oui\n2.non\nVotre choix:\t");
    scanf("%d", &u1);
    }
    if (u1==2)
        system("cls");
    else
    {system("cls");


Color(5,0);
do
   {printf("||");
    for (i=1; i<=164; i++)
        printf("-");
    printf("||\n||");
    for (i=1; i<=62; i++)
    printf(" ");
    printf("MENU PRINCIPAL DE NOTRE AGENCE DE VOYAGE");
     for (i=1; i<=62; i++)
    printf(" ");
    printf("||\n||");
    for (i=1; i<=164; i++)
        printf("-");
    printf("||\n\n\n\n");




    for (j=1; j<=14; j++)
    {
        printf("||");
        if (j==3)
            {
                for (k=1; k<=55; k++)
                  printf("-");
                  printf(" BIENVENUE AU MENU PRINCIPAL DE NOTRE AGENCE DE VOYAGE ");
                  for (k=1; k<=54; k++)
                    printf("-");
                  printf("||\n");
            }
            else if (j==6)
            {
            for (k=1; k<=58; k++)
            printf("-");
            printf(" Veuillez choisir l'objectif de votre operation ");
            for (k=1; k<=58; k++)
                printf("-");
                printf("||\n");
            }
            else if (j==9)
            {
              for (k=1; k<=71; k++)
            printf(" ");
            printf("1. GESTION DES VOYAGES");
            for (k=1; k<=71; k++)
                printf(" ");
                printf("||\n");
            }
            else if (j==10)
            {
               for (k=1; k<=67; k++)
            printf(" ");
            printf("2. STATISTIQUES POUR L'AGENCE ");
            for (k=1; k<=67; k++)
                printf(" ");
                printf("||\n");
            }
            else if (j==13)
            {
              for (k=1; k<=70; k++)
            printf(" ");
            printf("3. QUITTER L'APPLICATION");
            for (k=1; k<=70; k++)
                printf(" ");
                printf("||\n");
            }
            else
            {
        for (i=1; i<=164; i++)
         printf("-");
         printf("||\n");
            }
    }
    printf("votre choix? \t");
scanf("%d", &y);
system("cls");
printf("\n\n\n");
if (y==1)
{
do
    {for (j=1; j<=25; j++)
    {
        printf("||");
 if (j==3)
               {for (k=1; k<=52; k++)
                  printf("-");
                  printf(" BIENVENUE DANS LE MENU DE GESTION DES VOYAGES DE L'AGENCE ");
                  for (k=1; k<=53; k++)
                    printf("-");
                  printf("||\n");}
    if (j==5)
            {
            for (k=1; k<=67; k++)
            printf("-");
            printf(" Veuillez choisir une action: ");
            for (k=1; k<=67; k++)
                printf("-");
                printf("||\n");
            }
    if (j==8)
            {
              for (k=1; k<=68; k++)
            printf(" ");
            printf("1. afficher tous les voyages");
            for (k=1; k<=68; k++)
                printf(" ");
                printf("||\n");
            }
            else if (j==9)
            {
               for (k=1; k<=63; k++)
            printf(" ");
            printf("2. rechercher les voyages d'un client: ");
            for (k=1; k<=62; k++)
                printf(" ");
                printf("||\n");
            }
            else if (j==10)
            {
              for (k=1; k<=70; k++)
            printf(" ");
            printf("3. supprimer un voyage: ");
            for (k=1; k<=70; k++)
                printf(" ");
                printf("||\n");
            }
            else if (j==11)
            {
              for (k=1; k<=66; k++)
            printf(" ");
            printf("4. modifier la date d'un voyage: ");
            for (k=1; k<=65; k++)
                printf(" ");
                printf("||\n");}
                else if (j==12)
            {
              for (k=1; k<=62; k++)
            printf(" ");
            printf("5. afficher les voyage vers chaque pays: ");
            for (k=1; k<=61; k++)
                printf(" ");
                printf("||\n");}
                else if (j==14)
            {
              for (k=1; k<=66; k++)
            printf(" ");
            printf("****** ajouter un voyage ****** ");
            for (k=1; k<=66; k++)
                printf(" ");
                printf("||\n");}
                else if (j==16)
            {
              for (k=1; k<=69; k++)
            printf(" ");
            printf("6. ajout d'un voyage seul: ");
            for (k=1; k<=68; k++)
                printf(" ");
                printf("||\n");}
                else if (j==17)
            {
              for (k=1; k<=66; k++)
            printf(" ");
            printf("7. ajout d'un voyage en groupe: ");
            for (k=1; k<=66; k++)
                printf(" ");
                printf("||\n");}
                else if (j==20)
            {
              for (k=1; k<=68; k++)
            printf(" ");
            printf("8. tirage au sort au gagnant: ");
            for (k=1; k<=68; k++)
                printf(" ");
                printf("||\n");}
                else if (j==23)
            {
              for (k=1; k<=67; k++)
            printf(" ");
            printf("9. Retour au menu principal : ");
            for (k=1; k<=67; k++)
                printf(" ");
                printf("||\n");}
                else if (j==24)
            {
              for (k=1; k<=69; k++)
            printf(" ");
            printf("10. quitter l'application: ");
            for (k=1; k<=68; k++)
                printf(" ");
                printf("||\n");}
            else
            {
        for (i=1; i<=164; i++)
         printf("-");
         printf("||\n");
            }
    }
    scanf("%d", &x);
    system("cls");
switch (x)
{

/*affichage des voyages déjà faits:*/

case 1:
Color(3,0);
    printf("Id voyage:\tpasseport:\tvoyageur:\tsa naissance:\tdepart:\t\tarrivee:\tville:\t    pays:     group   en groupe:\n");
    for (i=0; i<taille; i++)
    {
        printf("%d\t\t", idvoyage[i]);
        for (j=0; j<8; j++)
            printf("%c", passeport[i][j]);
        printf("\t");
        printf("%s", nom[i]);
        printf("\t\t");
        for (j=0; j<=9; j++)
        printf("%c", naissance[i][j]);
        printf("\t");
        for (j=0; j<=1; j++){
                if (depart[i][j]<10){
                printf("0");
            printf("%i/", depart[i][j]);}
            else
                printf("%i/", depart[i][j]);
             }
             printf("%d", depart[i][2]);
        printf("      ");
             for (j=0; j<=1; j++){
                if (arrivee[i][j]<10){
                printf("0");
            printf("%i/", arrivee[i][j]);}
            else
                printf("%i/", arrivee[i][j]);
             }
             printf("%d", arrivee[i][2]);
        printf("\t");
        for (j=0; j<=9; j++)
            printf("%c", ville[i][j]);
        printf("  ");
        for (j=0; j<=9; j++)
            printf("%c", pays[i][j]);
        printf(" ");
        printf("%d\t", group[i]);
        printf("%d\n", idgroupe[i]);

    }
    printf("\n\n\n");
    Color(5,0);
     printf("||");
    for (i=0; i<=67; i++)
        printf("=");
        printf("   Que Voulez-Vous Faire?   ");
        for (i=0; i<=67; i++)
        printf("=");
        printf("||\n");
        do
        {printf("\n1. retourner au sous menu\n 2.retourner au menu principal\n 3.quitter\n");
        scanf("%d", &u);
        if (u==1)
         retour=2;
        else if (u==2)
            retour=1;
            else
                printf(" ");}
                while (u!=3 && u!=1 && u!=2);
                system("cls");
break;
    case 2:
        Color(3,0);
    /*recherche des voyages d'un voyageur*/
printf("donner le numero de passeport \t");
fflush(stdin);
    for (i=0; i<8; i++)
    scanf("%c", &npass[i]);

    s=0;
    for (i=1; i<8; i++)
    {
        if (isupper(npass[i]))
            s=s+1;
    }
    while ((isupper(npass[0])==0) || (s!=0 ))
           {
           printf("donner un numero de passeport valide: \t");
            for (i=0; i<8; i++)
    scanf("%c", &npass[i]);
    s=0;
    for (i=1; i<8; i++)
    {
        if (isupper(npass[i]))
            s=s+1;
    }
   }


    existe=0;
    trouve=0;
    for (i=0; i<taille; i++)
    {
        j=0;
        while (npass[j]==passeport[i][j] && j<=7)
            j++;
    if (j>7)
        {    existe++;
        if (existe!=0){
         printf("les voyages effectues par ce voyageur sont :");}
             trouve =1;
             printf("voyage num  ");

             printf("%d ",idvoyage[i] );

             printf("de ");
             for(j=0;j<9;j++){
                printf("%c",nom[i][j]);
             }
             printf(" de ");
            for (j=0; j<=1; j++){
                if (depart[i][j]<10){
                printf("0");
            printf("%i/", depart[i][j]);}
            else
                printf("%i/", depart[i][j]);
             }
             printf("%d", depart[i][2]);
             printf(" a ");
             for (j=0; j<=1; j++){
                if (arrivee[i][j]<10){
                printf("0");
            printf("%i/", arrivee[i][j]);}
            else
                printf("%i/", arrivee[i][j]);
             }
             printf("%d", arrivee[i][2]);
        printf("\t");
                printf(" a   ");
            for(j=0; j<=9; j++)
                {printf("%c", ville[i][j]);}
                printf("a ");
                for(j=0;j<9;j++){
                printf("%c",pays[i][j]);
             }
                printf("\n");
        }
    }
    if(trouve==0){
        printf("le voyageur n'existe pas dans notre agence ");
    }
   printf("\n\n\n");
   printf("\n\n\n");
   Color(5,0);
     printf("||");
    for (i=0; i<=67; i++)
        printf("=");
        printf("   Que Voulez-Vous Faire?   ");
        for (i=0; i<=67; i++)
        printf("=");
        printf("||\n");
        do
        {printf("\n1. retourner au sous menu\n 2.retourner au menu principal\n 3.quitter\n");
        scanf("%d", &u);
        if (u==1)
         retour=2;
        else if (u==2)
            retour=1;
            else
                printf(" ");}
                while (u!=3 && u!=1 && u!=2);
                system("cls");
   break;
case 3:


    //décalage (suppression )
    Color(15,0);
   printf("entrer le voyage a supprimer: ");
    scanf("%d",&supp);
    i=0;
    while((idvoyage[i]!=supp)&&(i<taille))
       i=i+1;
    if (i==taille)
        printf("ce voyage nexiste pas");
    else
    {
      for (j=i; j<=taille; j++)
      {
             for (k=0; k<=9; k++)
        passeport[j][k]=passeport[j+1][k];
      for (k=0; k<=9; k++)
        nom[j][k]=nom[j+1][k];
        for (k=0; k<=9; k++)
        naissance[j][k]=naissance[j+1][k];
        for (k=0; k<=2; k++)
        depart[j][k]=depart[j+1][k];
        for (k=0; k<=2; k++)
        arrivee[j][k]=arrivee[j+1][k];
        for (k=0; k<=9; k++)
        ville[j][k]=ville[j+1][k];
        for (k=0; k<=9; k++)
        pays[j][k]=pays[j+1][k];
        group[j]=group[j+1];
        idgroupe[j]=idgroupe[j+1];



        }
    taille--;
system("cls");
   printf("Id voyage:\tpasseport:\tvoyageur:\tsa naissance:\tdepart:\t\tarrivee:\tville:\t    pays:     group   en groupe:\n");
    for (i=0; i<taille; i++)
    {
        printf("%d\t\t", idvoyage[i]);
        for (j=0; j<8; j++)
            printf("%c", passeport[i][j]);
        printf("\t");
        printf("%s", nom[i]);
        printf("\t\t");
        for (j=0; j<=9; j++)
        printf("%c", naissance[i][j]);
        printf("\t");
        for (j=0; j<=1; j++){
                if (depart[i][j]<10){
                printf("0");
            printf("%i/", depart[i][j]);}
            else
                printf("%i/", depart[i][j]);
             }
             printf("%d", depart[i][2]);
        printf("      ");
        for (j=0; j<=1; j++){
                if (arrivee[i][j]<10){
                printf("0");
            printf("%i/", arrivee[i][j]);}
            else
                printf("%i/", arrivee[i][j]);
             }
             printf("%d", arrivee[i][2]);
        printf("    ");
        printf("\t");
        for (j=0; j<=9; j++)
            printf("%c", ville[i][j]);
        printf("  ");
        for (j=0; j<=9; j++)
            printf("%c", pays[i][j]);
        printf(" ");
        printf("%d\t", group[i]);
        printf("%d\n", idgroupe[i]);

    }}
    printf("\n\n\n");
    Color(5,0);
     printf("||");
    for (i=0; i<=67; i++)
        printf("=");
        printf("   Que Voulez-Vous Faire?   ");
        for (i=0; i<=67; i++)
        printf("=");
        printf("||\n");
        do
        {printf("\n1. retourner au sous menu\n 2.retourner au menu principal\n 3.quitter\n");
        scanf("%d", &u);
        if (u==1)
         retour=2;
        else if (u==2)
            retour=1;
            else
                printf(" ");}
                while (u!=3 && u!=1 && u!=2);
                system("cls");
    break;
case 4:


Color(3,0);

     /*retarder les voyages*/
printf("\n changement des dates des voyages organisés: \n");
i=0;
while (i<taille)
{if (group[i]==1)
{
    j=0;
    while (j<=i && idgroupe[j]!=idgroupe[i])
   {
        j++;
   }
   if (j<i)
    i++;

   printf("donner la nouvelle date du voyage %d\n", idvoyage[i]);
a=depart[i][0];
b=depart[i][1];
c=depart[i][2];
 do
    {
        printf("donner le jour:\t");
 scanf("%d", &depart[i][0]);
 printf("\ndonner le mois:\t");
 scanf("%d", &depart[i][1]);
 printf("\ndonner lannee:\t");
 scanf("%d", &depart[i][2]);
    } while ((depart[i][2]<c) || (depart[i][1]<b && depart[i][2]<=c) || (depart[i][2]<a && depart[i][1]<b && depart[i][2]<=c) || (depart[i][0]>31)|| (depart[i][0]<0)|| (depart[i][1]>12)|| (depart[i][1]<0));
   for (j=0; j<taille; j++)
    if (idgroupe[i]==idgroupe[k])
    {
        depart[k][0]=depart[i][0];
        depart[k][1]=depart[i][1];
        depart[k][2]=depart[i][2];
    }

    }
    i++;}







printf("\n");
system("cls");

/*affichage des tableaux apres retard*/
Color(1,7);
 printf("Id voyage:\tpasseport:\tvoyageur:\tsa naissance:\tdepart:\t\tarrivee:\tville:\t    pays:     group   en groupe:\n");
    for (i=0; i<taille; i++)
    {
        printf("%d\t\t", idvoyage[i]);
        for (j=0; j<8; j++)
            printf("%c", passeport[i][j]);
        printf("\t");
        printf("%s", nom[i]);
        printf("\t\t");
        for (j=0; j<=9; j++)
        printf("%c", naissance[i][j]);
        printf("\t");
        for (j=0; j<=1; j++){
                if (depart[i][j]<10){
                printf("0");
            printf("%i/", depart[i][j]);}
            else
                printf("%i/", depart[i][j]);
             }
             printf("%d", depart[i][2]);
        printf("      ");
        for (j=0; j<=1; j++){
                if (arrivee[i][j]<10){
                printf("0");
            printf("%i/", arrivee[i][j]);}
            else
                printf("%i/", arrivee[i][j]);
             }
             printf("%d", arrivee[i][2]);
        printf("\t");
        printf("\t");
        for (j=0; j<=9; j++)
            printf("%c", ville[i][j]);
        printf("  ");
        for (j=0; j<=9; j++)
            printf("%c", pays[i][j]);
        printf(" ");
        printf("%d\t", group[i]);
        printf("%d\n", idgroupe[i]);

    }
    printf("\n\n\n");
    printf("\n\n\n");
    Color(5,0);
     printf("||");
    for (i=0; i<=67; i++)
        printf("=");
        printf("   Que Voulez-Vous Faire?   ");
        for (i=0; i<=67; i++)
        printf("=");
        printf("||\n");
        do
        {printf("\n1. retourner au sous menu\n 2.retourner au menu principal\n 3.quitter\n");
        scanf("%d", &u);
        if (u==1)
         retour=2;
        else if (u==2)
            retour=1;
            else
                printf(" ");}
                while (u!=3 && u!=1 && u!=2);
                system("cls");
    break;
case 5:
    Color(11,0);
    /*liste*/
    fflush(stdin);
      printf("les voyages destines a %s sont: ", pays[0]);
        for (t=0; t<taille; t++)
        {
            test=1;
            j=0;
            if (strstr(pays[0], pays[t])==NULL)
                test=0;

            if (test==1)
                printf("\tvoyage %d à %s %s\t", idvoyage[t], ville[t], pays[t]);
        }
        printf("\n");


      i=1;
    while (i<taille)
    {
        j=0;
    while (j<=i && strstr(pays[i], pays[j])==NULL)
   {
        j++;
   }
   if (j<i)
    i++;
    else


        {printf("les voyages destines a %s sont: ", pays[i]);
        for (t=0; t<taille; t++)
        {
            test=1;
            j=0;
           if (strstr(pays[i], pays[t])==NULL)
                test=0;
            if (test==1)
                printf(" \tVoyage %d a %s %s\t ", idvoyage[t], ville[t], pays[t]);
        }
        printf("\n");
        i++;}


        }
        printf("\n\n\n");
        Color(5,0);
     printf("||");
    for (i=0; i<=67; i++)
        printf("=");
        printf("   Que Voulez-Vous Faire?   ");
        for (i=0; i<=67; i++)
        printf("=");
        printf("||\n");
        do
        {printf("\n1. retourner au sous menu\n 2.retourner au menu principal\n 3.quitter\n");
        scanf("%d", &u);
        if (u==1)
         retour=2;
        else if (u==2)
            retour=1;
            else
                printf(" ");}
                while (u!=3 && u!=1 && u!=2);
                system("cls");
        break;
        case 6:
/*ajouter un voyage en solo*/
idvoyage[taille]=idvoyage[taille-1]+1;
group[taille]=0;
idgroupe[taille]=0;

/*saisir le num de passeport*/
Color(14,0);
idvoyage[taille]=idvoyage[taille-1]+1;
    printf("donner le numero de passeport \t");
    fflush(stdin);
    Color(0,15);
    for (i=0; i<8; i++)
    passeport[taille][i]=getchar();

    s=0;
    for (i=1; i<8; i++)
    {
        if (isupper(passeport[taille][i]))
            s=s+1;
    }
    while ((isupper(passeport[taille][0])==0) || (s!=0 ))
           {Color(14,0);
           printf("donner un numero de passeport valide: \t");
           Color(0,15);
            for (i=0; i<8; i++)
    passeport[taille][i]=getchar();
    s=0;
    for (i=1; i<8; i++)
    {
        if (isupper(passeport[taille][i]))
            s=s+1;
    }
   }
   printf("\n");


   /*voir si le numero de passeport existe deja ou pas*/
   Color(14,0);
i=0;
trouve=0;
while ( trouve==0 && i<taille)
{
    if (strncmp(passeport[taille], passeport[i], 8)==0)
            {trouve=1;}
    else
                i++;
}
if (trouve==1)
{
    for (j=0; j<10; j++)
    nom[taille][j]=nom[i][j];
    for (j=0; j<10; j++)
    naissance[taille][j]=naissance[i][j];
}
else
{
    printf("donner votre nom SVP:\t");
    fflush(stdin);
    gets(nom[taille]);
    printf("donner votre date de naissance SVP:\t");
    fgets(naissance[taille], 11, stdin);
}


/*demander le reste des infos*/

do
{printf("entrer une date de depart valide\n ");
printf("donner le jour\n");
scanf("%d",&depart[taille][0]);
printf("donner le mois \n ");
scanf("%d",&depart[taille][1]);
printf("donner l'annee\n");
scanf("%d",&depart[taille][2]);} while ((depart[taille][2]<2018) || depart[taille][1]<0 || depart[taille][1]>12 || (depart[taille][0]>31)|| (depart[taille][0]<0) || (depart[taille][0]<6 && depart[taille][1]<=12 && depart[taille][2]<=2018) || (depart[taille][1]<12 && depart[taille][2]<=2018) );
printf("entre la date d'arrivee:\n");
a=depart[taille][0];
b=depart[taille][1];
c=depart[taille][2];
do{
printf("donner le jour \n");
scanf("%d", &arrivee[taille][0]);
printf("donner le mois \n ");
scanf("%d", &arrivee[taille][1]);
printf("donner l'annee\n");
scanf("%d", &arrivee[taille][2]);
}while ((arrivee[taille][2]<c) || (arrivee[taille][1]<b && arrivee[taille][2]<=c) || (arrivee[taille][2]<a && arrivee[taille][1]<b && arrivee[taille][2]<=c) || (arrivee[taille][0]>31) || (arrivee[taille][0]<0)|| (arrivee[taille][1]>12) || (arrivee[taille][1]<0));
 printf("donner la ville \n");
    fflush(stdin);
    gets(ville[taille]);
 printf("donner le pays \n");
 gets(pays[taille]);
 taille++;
 system("cls");


 /*nouveau affichage des voyages*/
 Color(9,0);

 printf("Id voyage:\tpasseport:\tvoyageur:\tsa naissance:\tdepart:\t\tarrivee:\tville:\t    pays:     group   en groupe:\n");
    for (i=0; i<taille; i++)
    {
        printf("%d\t\t", idvoyage[i]);
        for (j=0; j<8; j++)
            printf("%c", passeport[i][j]);
        printf("\t");
        printf("%s", nom[i]);
        printf("\t\t");
        for (j=0; j<=9; j++)
        printf("%c", naissance[i][j]);
        printf("\t");
        for (j=0; j<=1; j++){
                if (depart[i][j]<10){
                printf("0");
            printf("%i/", depart[i][j]);}
            else
                printf("%i/", depart[i][j]);
             }
             printf("%d", depart[i][2]);
        printf("      ");
             for (j=0; j<=1; j++){
                if (arrivee[i][j]<10){
                printf("0");
            printf("%i/", arrivee[i][j]);}
            else
                printf("%i/", arrivee[i][j]);
             }
             printf("%d", arrivee[i][2]);
        printf("\t");
        for (j=0; j<=9; j++)
            printf("%c", ville[i][j]);
        printf("  ");
        for (j=0; j<=9; j++)
            printf("%c", pays[i][j]);
        printf(" ");
        printf("%d\t", group[i]);
        printf("%d\n", idgroupe[i]);

    }
    printf("\n\n\n");
    printf("\n\n\n");
     printf("||");
    for (i=0; i<=67; i++)
        printf("=");
        printf("   Que Voulez-Vous Faire?   ");
        for (i=0; i<=67; i++)
        printf("=");
        printf("||\n");
        do
        {printf("\n1. retourner au sous menu\n 2.retourner au menu principal\n 3.quitter\n");
        scanf("%d", &u);
        if (u==1)
         retour=2;
        else if (u==2)
            retour=1;
            else
                printf(" ");}
                while (u!=3 && u!=1 && u!=2);
                system("cls");
    break;
        case 7:
            /*ajouter un voyage en groupe*/
idvoyage[taille]=idvoyage[taille-1]+1;
group[taille]=0;
idgroupe[taille]=0;

/*saisir le num de passeport*/
idvoyage[taille]=idvoyage[taille-1]+1;
group[taille]=1;
    printf("donner le numero de passeport \t");
    fflush(stdin);
    for (i=0; i<8; i++)
    passeport[taille][i]=getchar();

    s=0;
    for (i=1; i<8; i++)
    {
        if (isupper(passeport[taille][i]))
            s=s+1;
    }
    while ((isupper(passeport[taille][0])==0) || (s!=0 ))
           {
           printf("donner un numero de passeport valide: \t");
            for (i=0; i<8; i++)
    passeport[taille][i]=getchar();
    s=0;
    for (i=1; i<8; i++)
    {
        if (isupper(passeport[taille][i]))
            s=s+1;
    }
   }
   printf("\n");


   /*voir si le numero de passeport existe deja ou pas*/
i=0;
trouve=0;
while ( trouve==0 && i<taille)
{
    if (strncmp(passeport[taille], passeport[i], 8)==0)
            {trouve=1;}
    else
                i++;
}
if (trouve==1)
{
    for (j=0; j<10; j++)
    nom[taille][j]=nom[i][j];
    for (j=0; j<10; j++)
    naissance[taille][j]=naissance[i][j];
}
else
{
    printf("donner votre nom SVP:\t");
    fflush(stdin);
    gets(nom[taille]);
    printf("donner votre date de naissance SVP:\t");
    fgets(naissance[taille], 11, stdin);
}
/*demander si il veut creer un nouveau groupe ou rejoindre un groupe deja existant*/
    printf("id groupe\tdate de depart\tarrivee\t\tville\t pays\t nombre de voyageurs\n");
    n1=0;
    for (i=0; i<taille; i++)
    {if (idgroupe[i]!=0)
    {idgroupe1[n1]=idgroupe[i];
    printf("%d\t\t", idgroupe1[n1]);
    for (j=0; j<2; j++)
        {depart1[n1][j]=depart[i][j];
        if (depart1[n1][j]<10)
        printf("0%d/", depart1[n1][j]);
        else
            printf("%d/", depart1[n1][j]);
        }
        depart1[n1][2]=depart[i][2];
        printf("%d\t", depart1[n1][2]);
        for (j=0; j<2; j++)
        {arrivee1[n1][j]=arrivee[i][j];
        if (arrivee1[n1][j]<10)
        printf("0%d/", arrivee1[n1][j]);
        else
            printf("%d/", arrivee1[n1][j]);
        }
        arrivee1[n1][2]=arrivee[i][2];
        printf("%d\t", arrivee1[n1][2]);
        strcpy(ville1[n1], ville[i]);
        printf("%s\t ", ville1[n1]);
        strcpy(pays1[n1], pays[i]);
        printf("%s\t\t", pays1[n1]);
        printf("%d\n", ngroupe[n1]);
        n1++;

    }
    }
    Color(15,0);
    printf("voulez-vous:\n1. rejoindre un groupe existant\n2.creer un nouveau groupe\n");
scanf("%d", &r);
while (r!=1 && r!=2)
    {printf("choix invalide");
    printf("voulez-vous:\n 1. rejoindre un groupe existant\n2.creer un nouveau groupe\n");
scanf("%d", &r);}
if (r==1)
    {printf("\n\n\nQuel groupe voulez-vous rejoindre?\t");
    scanf("%d", &idgrou);
    trouve=0;
    i=0;
    while (i<=n1 && trouve==0)
        {if (idgrou==idgroupe1[i])
        trouve=1;
    else i++;}
    if (trouve==1)
        {if (ngroupe[i]<15)
        {printf("felicitation! vous avez rejoint le groupe");
        for (j=0; j<3; j++)
            {depart[taille][j]=depart1[i][j];
            arrivee[taille][j]=arrivee1[i][j];}
            strcpy(ville[taille], ville1[i]);
            strcpy(pays[taille], pays1[i]);
            idgroupe[taille]=idgroupe1[i];
            taille++;}
            else
                printf("desole! le groupe est complet");
                }
        else
            printf("le groupe nexiste pas");}
            else /*si il veut creer un nouveau groupe*/
            {
                idgroupe1[n1]=idgroupe1[n1-1]+1;
                idgroupe[taille]=idgroupe1[n1];
                do
                {printf("donner une date de depart valide:\nle jour\t");
                scanf("%d", &depart1[n1][0]);
                printf("le mois\t");
                scanf("%d", &depart1[n1][1]);
                printf("lannee\t");
                scanf("%d", &depart1[n1][2]);}
                while ((depart1[n1][2]<2018) || depart1[n1][1]<0 || depart1[n1][1]>12 || (depart1[n1][0]>31)|| (depart1[n1][0]<0) || (depart1[n1][0]<6 && depart1[n1][1]<=12 && depart1[n1][2]<=2018) || (depart1[n1][1]<12 && depart1[n1][2]<=2018) );
                for (i=0; i<3; i++)
                depart[taille][i]=depart1[n1][i];
                a=depart1[n1][0];
b=depart1[n1][1];
c=depart1[n1][2];
                do
                {printf("donner une date darrivee valide:\nle jour\t");
                scanf("%d", &arrivee1[n1][0]);
                printf("le mois\t");
                scanf("%d", &arrivee1[n1][1]);
                printf("lannee\t");
                scanf("%d", &arrivee1[n1][2]);}
                while ((arrivee1[n1][2]<c) || (arrivee1[n1][1]<b && arrivee1[n1][2]<=c) || (arrivee1[n1][2]<a && arrivee1[n1][1]<b && arrivee1[n1][2]<=c) || (arrivee1[n1][0]>31) || (arrivee1[n1][0]<0)|| (arrivee1[n1][1]>12) || (arrivee1[n1][1]<0));
                for (i=0; i<3; i++)
                arrivee[taille][i]=arrivee1[n1][i];
                fflush(stdin);
                printf("donner la ville de destination\t");
                gets(ville1[n1]);
                strcpy(ville[taille], ville1[n1]);
                printf("donner le pays de destination\t");
                gets(pays1[n1]);
                strcpy(pays[taille], pays1[n1]);
                printf("vous etes combien deja?");
                scanf("%d", &ngroupe[n1]);
                system("cls");
                while (ngroupe[n1]>15)
                    {printf("desole! le groupe contient trop de personne.\nsaisissez un autre nombre:\t");
                    scanf("%d", &ngroupe[n1]);
system("cls");}
                taille++;
                n++;

            /*nouveau affichage des groupe*/
            printf("votre groupe a ete ajoute avec succes\n");
            Color(15,1);
             printf("id groupe\tdate de depart\tarrivee\t\tville\t pays\t nombre de voyageurs\n");
    for (i=0; i<=n1; i++)
    {
    printf("%d\t\t", idgroupe1[i]);
    for (j=0; j<2; j++)
        {if (depart1[n1][j]<10)
        printf("0%d/", depart1[i][j]);
        else
            printf("%d/", depart1[i][j]);
        }
        printf("%d\t", depart1[i][2]);
        for (j=0; j<2; j++)
        {
        if (arrivee1[i][j]<10)
        printf("0%d/", arrivee1[i][j]);
        else
            printf("%d/", arrivee1[i][j]);
        }
        printf("%d\t", arrivee1[i][2]);
        printf("%s\t ", ville1[i]);
        printf("%s\t\t", pays1[i]);
        printf("%d\n", ngroupe[i]);

    }
    }


            /*nouveau affichage des voyages*/
            Color(13,0);

 printf("\nId voyage:\tpasseport:\tvoyageur:\tsa naissance:\tdepart:\t\tarrivee:\tville:\t    pays:     group   en groupe:\n");
    for (i=0; i<taille; i++)
    {
        printf("%d\t\t", idvoyage[i]);
        for (j=0; j<8; j++)
            printf("%c", passeport[i][j]);
        printf("\t");
        printf("%s", nom[i]);
        printf("\t\t");
        for (j=0; j<=9; j++)
        printf("%c", naissance[i][j]);
        printf("\t");
        for (j=0; j<=1; j++){
                if (depart[i][j]<10){
                printf("0");
            printf("%i/", depart[i][j]);}
            else
                printf("%i/", depart[i][j]);
             }
             printf("%d", depart[i][2]);
        printf("      ");
             for (j=0; j<=1; j++){
                if (arrivee[i][j]<10){
                printf("0");
            printf("%i/", arrivee[i][j]);}
            else
                printf("%i/", arrivee[i][j]);
             }
             printf("%d", arrivee[i][2]);
        printf("\t");
        for (j=0; j<=9; j++)
            printf("%c", ville[i][j]);
        printf("  ");
        for (j=0; j<=9; j++)
            printf("%c", pays[i][j]);
        printf(" ");
        printf("%d\t", group[i]);
        printf("%d\n", idgroupe[i]);

    }
    printf("\n\n\n");
    printf("\n\n\n");
    Color(5,0);
     printf("||");
    for (i=0; i<=67; i++)
        printf("=");
        printf("   Que Voulez-Vous Faire?   ");
        for (i=0; i<=67; i++)
        printf("=");
        printf("||\n");
        do
        {printf("\n1. retourner au sous menu\n 2.retourner au menu principal\n 3.quitter\n");
        scanf("%d", &u);
        if (u==1)
         retour=2;
        else if (u==2)
            retour=1;
            else
                printf(" ");}
                while (u!=3 && u!=1 && u!=2);


system("cls");



            break;
        case 8:
/*tirage au sort*/
idvoyage[taille]=idvoyage[taille-1]+1;
idgroupe[taille]=0;
group[taille]=0;
alea = rand()%(taille)+1;
i=alea-1;
for (j=0; j<10; j++)
passeport[taille][j]=passeport[i][j];
for (j=0; j<10; j++)
    nom[taille][j]=nom[i][j];
    for (j=0; j<10; j++)
    naissance[taille][j]=naissance[i][j];
    /*demander le reste des infos*/

do{
printf("entrer une date de depart valide\n ");

printf("donner le jour\n");
scanf("%d",&depart[taille][0]);
printf("donner le mois \n ");
scanf("%d",&depart[taille][1]);
printf("donner l'annee\n");
scanf("%d",&depart[taille][2]);} while ((depart[taille][2]<2018) || depart[taille][1]<0 || depart[taille][1]>12 || (depart[taille][0]>31)|| (depart[taille][0]<0) || (depart[taille][0]<6 && depart[taille][1]<=12 && depart[taille][2]<=2018) || (depart[taille][1]<12 && depart[taille][2]<=2018) );
a=depart[taille][0];
b=depart[taille][1];
c=depart[taille][2];
do{ printf("donner une date d'arrivee valide:\n");
printf("donner le jour \n");
scanf("%d", &arrivee[taille][0]);
printf("donner le mois \n ");
scanf("%d", &arrivee[taille][1]);
printf("donner l'annee\n");
scanf("%d", &arrivee[taille][2]);
}while ((arrivee[taille][2]<c) || (arrivee[taille][1]<b && arrivee[taille][2]<=c) || (arrivee[taille][2]<a && arrivee[taille][1]<b && arrivee[taille][2]<=c) || (arrivee[taille][0]>31) || (arrivee[taille][0]<0)|| (arrivee[taille][1]>12) || (arrivee[taille][1]<0));
 printf("Quelle ville voulelz vous visiter? \n");
    fflush(stdin);
    gets(ville[taille]);
 printf("Quel pays voulez vous visitez? \n");
 gets(pays[taille]);
 taille++;

 system("cls");
/*affichage*/
printf("Id voyage:\tpasseport:\tvoyageur:\tsa naissance:\tdepart:\t\tarrivee:\tville:\t    pays:     group   en groupe:\n");
    for (i=0; i<taille; i++)
    {
        printf("%d\t\t", idvoyage[i]);
        for (j=0; j<8; j++)
            printf("%c", passeport[i][j]);
        printf("\t");
        printf("%s", nom[i]);
        printf("\t\t");
        for (j=0; j<=9; j++)
        printf("%c", naissance[i][j]);
        printf("\t");
        for (j=0; j<=1; j++){
                if (depart[i][j]<10){
                printf("0");
            printf("%i/", depart[i][j]);}
            else
                printf("%i/", depart[i][j]);
             }
             printf("%d", depart[i][2]);
        printf("      ");
             for (j=0; j<=1; j++){
                if (arrivee[i][j]<10){
                printf("0");
            printf("%i/", arrivee[i][j]);}
            else
                printf("%i/", arrivee[i][j]);
             }
             printf("%d", arrivee[i][2]);
        printf("\t");
        for (j=0; j<=9; j++)
            printf("%c", ville[i][j]);
        printf("  ");
        for (j=0; j<=9; j++)
            printf("%c", pays[i][j]);
        printf(" ");
        printf("%d\t", group[i]);
        printf("%d\n", idgroupe[i]);

    }
    printf("\n\n\n");
    printf("\n\n\n");
     printf("||");
    for (i=0; i<=67; i++)
        printf("=");
        printf("   Que Voulez-Vous Faire?   ");
        for (i=0; i<=67; i++)
        printf("=");
        printf("||\n");
        do
        {printf("\n1. retourner au sous menu\n 2.retourner au menu principal\n 3.quitter\n");
        scanf("%d", &u);
        if (u==1)
         retour=2;
        else if (u==2)
            retour=1;
            else
                printf(" ");}
                while (u!=3 && u!=1 && u!=2);
                system("cls");
    break;
        case 9:
            system("cls");

}
}
while (retour==2);
}
else if (y==3)
    {system("cls");
    retour=0;}
else if (y==2)
{
do
   {for (j=0; j<=22; j++)
    {
        printf("||");
        if (j==1)
               {for (k=1; k<=66; k++)
                  printf(" ");
                  printf(" PARTIE STATISTIQUE DE L'AGENCE ");
                  for (k=1; k<=66; k++)
                    printf(" ");
                  printf("||\n");}
    if (j==3)
            {
            for (k=1; k<=67; k++)
            printf("-");
            printf(" Veuillez choisir une action: ");
            for (k=1; k<=67; k++)
                printf("-");
                printf("||\n");
            }
    if (j==5)
            {
              for (k=1; k<=69; k++)
            printf(" ");
            printf("1. nombre total de voyages");
            for (k=1; k<=69; k++)
                printf(" ");
                printf("||\n");
            }
            else if (j==6)
            {
               for (k=1; k<=64; k++)
            printf(" ");
            printf("2. nombre annuel moyen des voyages ");
            for (k=1; k<=65; k++)
                printf(" ");
                printf("||\n");
            }
            else if (j==7)
             {for (k=1; k<=66; k++)
            printf(" ");
            printf("3. nombre de voyages par saison: ");
            for (k=1; k<=65; k++)
                printf(" ");
                printf("||\n");
            }
                else if (j==9)
            {
              for (k=1; k<=57; k++)
            printf(" ");
            printf("4. periode ayant le plus et le moins de demandes ");
            for (k=1; k<=58; k++)
                printf(" ");
                printf("||\n");}
                else if (j==10)
            {
              for (k=1; k<=67; k++)
            printf(" ");
            printf("5. nombre de clients distincts");
            for (k=1; k<=67; k++)
                printf(" ");
                printf("||\n");}
                else if (j==11)
            {
              for (k=1; k<=63; k++)
            printf(" ");
            printf("6. tranche d'ages la plus frequentes");
            for (k=1; k<=65; k++)
                printf(" ");
                printf("||\n");}
                else if (j==15)
            {
              for (k=1; k<=68; k++)
            printf(" ");
            printf("7. RETOUR AU MENU PRINCIPAL ");
            for (k=1; k<=68; k++)
                printf(" ");
                printf("||\n");}
                else if (j==16)
            {
              for (k=1; k<=69; k++)
            printf(" ");
            printf("8. QUITTER L'APPLICATION ");
            for (k=1; k<=70; k++)
                printf(" ");
                printf("||\n");}
            else
            {
        for (i=1; i<=164; i++)
         printf("-");
         printf("||\n");
            }
    }
    printf("Votre choix?");
    scanf("%d", &x);
    system("cls");
    switch(x)
    {
    case 1:
        //nombre de voyage
 printf("\n le nombre de voyage est %d\n",taille);
 for (i=0; i<=67; i++)
        printf("=");
        printf("   Que Voulez-Vous Faire?   ");
        for (i=0; i<=67; i++)
        printf("=");
        printf("||\n");
        do
        {printf("\n1. retourner au sous menu\n 2.retourner au menu principal\n 3.quitter\n");
        scanf("%d", &u);
        if (u==1)
         retour=2;
        else if (u==2)
            retour=1;
            else
                printf(" ");}
                while (u!=3 && u!=1 && u!=2);
                system("cls");
 break;
    case 2:
 //le nombre moyen des voyages annuels.
 k=0;
 annee[k]=depart[k][2];

 i=1;
 existe=0;
 while((i<=taille)){

       existe= rechercher(annee,k,depart[i][2]);
    if (existe==0){
        k++;
        annee[k]=depart[i][2];
    }else{
    existe=0;
    }
    i++;
 }
 for(i=0;i<k;i++){
    printf("\n %d \n",annee[i]);
 }
 h=0;
for(i=0;i<k;i++){
s=0;
    for(j=0;j<taille;j++){

        if(depart[j][2]==annee[i]){
            s++;
        }
    }
h=h+s;
   printf("\n en %d   >> %d voyages",annee[i],s);

}
printf("\n");
printf("le nombre de voyage annuel est %d\n",h/k);
for (i=0; i<=67; i++)
        printf("=");
        printf("   Que Voulez-Vous Faire?   ");
        for (i=0; i<=67; i++)
        printf("=");
        printf("||\n");
        do
        {printf("\n1. retourner au sous menu\n 2.retourner au menu principal\n 3.quitter\n");
        scanf("%d", &u);
        if (u==1)
         retour=2;
        else if (u==2)
            retour=1;
            else
                printf(" ");}
                while (u!=3 && u!=1 && u!=2);
                system("cls");
break;
case 3:

//le nombre de voyages effectués pendant chaque periode

for(j=0;j<taille;j++){
if(((depart[j][1]==12)&&depart[j][0]>=21)||(depart[j][1]==1)||(depart[j][1]==2)||((depart[j][1]==3) &&  depart[j][0]<=19))      {
            shiver++;
        }
        else if(((depart[j][1]==12)&&depart[j][0]<=20)||(depart[j][1]==10)||(depart[j][1]==11)||((depart[j][1]==9) &&  depart[j][0]>=23)){
            sautomne++;
        }else if (((depart[j][1]==6)&&depart[j][0]<21)||(depart[j][1]==5)||(depart[j][1]==4)||((depart[j][1]==3) &&  depart[j][0]>19)){
            sprintemps++;
        }else
            sete++;
    }

   printf("\nle nombre des voyages effectues :\n pendant l'ete sont %d \n pendant l'automne sont %d \n pendant l'hiver sont %d \n pendant le printemps sont %d \n\n",sete,sautomne,shiver,sprintemps);
   for (i=0; i<=67; i++)
        printf("=");
        printf("   Que Voulez-Vous Faire?   ");
        for (i=0; i<=67; i++)
        printf("=");
        printf("||\n");
        do
        {printf("\n1. retourner au sous menu\n 2.retourner au menu principal\n 3.quitter\n");
        scanf("%d", &u);
        if (u==1)
         retour=2;
        else if (u==2)
            retour=1;
            else
                printf(" ");}
                while (u!=3 && u!=1 && u!=2);
                system("cls");
   break;
case 4:
//periode la plus demandée et la moins demandée
for(i=0;i<taille;i++){
     switch(depart[i][1]){
     case 1:
        tabstat[0]++;
        break;
     case 2:
        tabstat[1]++;
        break;
     case 3:
        tabstat[2]++;
        break;
     case 4:
        tabstat[3]++;
        break;
     case 5:
        tabstat[4]++;
        break;
     case 6:
        tabstat[5]++;
        break;
     case 7:
        tabstat[6]++;
        break;
     case 8:
        tabstat[7]++;
        break;
     case 9:
        tabstat[8]++;
        break;
     case 10:
        tabstat[9]++;
        break;
     case 11:
        tabstat[10]++;
        break;
     case 12:
        tabstat[11]++;
        break;
     }}
     min=50;
     max=0;
     for(i=0;i<12;i++)
     {
     printf("pendant le 30 jour du mois %d:",i+1);
             printf(" \t%d\n",tabstat[i]);
if(tabstat[i]<min){
    min =tabstat[i];
}
if(tabstat[i]>=max){
    max=tabstat[i];
}}
printf("la periode la plus demandee :");
for(i=0;i<12;i++){
    if(tabstat[i]==max){
        printf("  \n le mois %d\n",i+1);
    }
}
printf("la periode la moins demandee :");
for(i=0;i<12;i++){
    if(tabstat[i]==min){
        printf("  \n le mois %d",i+1);
    }
}
printf("\n");
     for (i=0; i<=67; i++)
        printf("=");
        printf("   Que Voulez-Vous Faire?   ");
        for (i=0; i<=67; i++)
        printf("=");
        printf("||\n");
        do
        {printf("\n1. retourner au sous menu\n 2.retourner au menu principal\n 3.quitter\n");
        scanf("%d", &u);
        if (u==1)
         retour=2;
        else if (u==2)
            retour=1;
            else
                printf(" ");}
                while (u!=3 && u!=1 && u!=2);
                system("cls");

    break;
     case 5:
        sclient=0;
         i=0;
while (i<taille)
{
    j=0;
    while (j<i)
   {k=0;
        while (k<8 && passeport[j][k]==passeport[i][k])
        {
           k++;
        }
        if (k<8)
            j++;

   }
   if (j<i)
    i++;
    else
        {sclient=sclient+1;
    i++;}
}
printf("le nombre de clients distincts est: %d", sclient);
 do
        {printf("\n1. retourner au sous menu\n 2.retourner au menu principal\n 3.quitter\n");
        scanf("%d", &u);
        if (u==1)
         retour=2;
        else if (u==2)
            retour=1;
            else
                printf(" ");}
                while (u!=3 && u!=1 && u!=2);
                system("cls");
break;
     case 6:
         for(i=0;i<10;i++){
    ch[k]="";
		for(j=6;j<11;j++){

			ch[k]=naissance[i][j];
			k++;

		}
		k=0;
x=atoi(ch);
ages[i]=2018-x;
if(ages[i]<=18){
	enfant++;
}else if(ages[i]>18 && ages[i]<36){
	jeune++;
}
else if(ages[i]<61 && ages[i]>35){
	adulte++;
}
else{
	adulte1++;
}
	}
	printf("moins de 18 ans    = %d \n",enfant);
	printf("entre 19 et 35 ans = %d \n",jeune);
	printf("entre 36 et 60 ans = %d \n",adulte);
	printf("plus de 60 ans     = %d \n",adulte1);
      printf("\n");
     for (i=0; i<=67; i++)
        printf("=");
        printf("   Que Voulez-Vous Faire?   ");
        for (i=0; i<=67; i++)
        printf("=");
        printf("||\n");
        do
        {printf("\n1. retourner au sous menu\n 2.retourner au menu principal\n 3.quitter\n");
        scanf("%d", &u);
        if (u==1)
         retour=2;
        else if (u==2)
            retour=1;
            else
                printf(" ");}
                while (u!=3 && u!=1 && u!=2);
                system("cls");

    break;
     case 7:
        retour=1;
        break;
     case 8:
         system("cls");
         break;

     default:
        printf("Choix invalide");
        break;
        for (i=0; i<=67; i++)
        printf("=");
        printf("   Que Voulez-Vous Faire?   ");
        for (i=0; i<=67; i++)
        printf("=");
        printf("||\n");
        do
        {printf("\n1. retourner au sous menu\n 2.retourner au menu principal\n 3.quitter\n");
        scanf("%d", &u);
        if (u==1)
         retour=2;
        else if (u==2)
            retour=1;
            else
                printf(" ");}
                while (u!=3 && u!=1 && u!=2);
                system("cls");
    }
    }
    while (retour==2);


   }
else
    {printf("choix invalide\n\n\n");
    retour=1;}
}
    while (retour==1);
    }






















  return 0;}
