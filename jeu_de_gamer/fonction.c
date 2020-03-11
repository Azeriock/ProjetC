#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <dos.h>
#include "fonction.h"
int avantjeu() //Accueil
{
        int choix;
        int compteur;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("                                                                                            |1| Lancer le jeu\n");
        printf("                                                                                            |2| Credit");
        printf("\n                                                                                            |?| Choix: ");
        scanf("%d",&choix);
        switch (choix)
        {
        case 1:
            system("cls");
            difficulte();
            for (compteur = 0; compteur < 10; compteur++)
            {
                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                printf("                                                                                        Loading       [ | ] ");

                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                printf("                                                                                        Loading       [ / ] ");

                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                printf("                                                                                        Loading       [ - ] ");

                system("cls");
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                printf("                                                                                        Loading       [ \\ ] ");
                system("cls");
            }
            affichageMenu();
            break;
        case 2:
            system("cls");
            Sleep(1000);
            printf("\n\n\n\n\n\n");
            printf("                                                                                        Game design, progamming and graphics:\n\n\n");
            Sleep(3000);
            printf("                                                                                                    Tamer Yanis\n\n");
            Sleep(1000);
            printf("                                                                                                    Sritharan Sharuchan\n\n");
            Sleep(1000);
            printf("                                                                                                    Soliman Cyril\n\n\n\n\n");
            Sleep(3000);
            printf("                                                                                        Head programming:\n\n\n");
            Sleep(1000);
            printf("                                                                                                    Pierret Loic \n \n \n");
            Sleep(5000);
            system("cls");
            avantjeu();
            break;
        }
}
int difficulte()  // Choix difficulté
{
    int diff;
    int ptdiff = &diff;
    int choix;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("                                                                                                    |1| facile\n\n\n");
        printf("                                                                                                    |2| moyen \n\n\n");
        printf("                                                                                                    |3| difficile \n\n\n");
        printf("                                                                                                    |?| Choix: ");
    scanf("%d",&choix);
    switch (choix)
    {
    case 1:
        diff = 1;
    case 2:
        diff = 2;
    case 3:
        diff = 3;
    }

}
int affichageMenu()    //Affichage du menu principal
{
    int iphone = 0;
    int ptiphone = &iphone;
    int potion = 0;
    int ptpotion = &potion;
    int or = 0;
    int ptor = &or;
    int pv = 50;
    int attaque = 5;
    int defense = 1;
    int batterie = 0;
    int clef = 0;
    int ptclef = &clef;
    int exp = 0;
    int lvl = 1;
    int ptbatterie = &batterie;
    int ptxp = &exp; //pointeur de l'xp du joueur
    int ptlvl = &lvl; //pointeur du niveau du joueur
    int ptatt = &attaque; //pointeur de l'attaque du joueur
    int ptdef = &defense; //pointeur de la defense du joueur
    int ptpv = &pv; // pointeur des pv du joueur
    int x = 0; // position en ordonné du joueur
    int y = 0; // position en abscisse du joueur
    int *pointeurx = &x; // pointeur de l'abscisse
    int *pointeury = &y; // pointeur de l'ordonné
    int addlvl = 50;
    int ajoutlvl = &addlvl;
    int choixMenu;
    printf("\n                                        kkkkkkkk                                                                         tttt               tttt                            \n                                        k::::::k                                                                      ttt:::t            ttt:::t                            \n                                        k::::::k                                                                      t:::::t            t:::::t                            \n                                        k::::::k                                                                      t:::::t            t:::::t                            \n                                         k:::::k    kkkkkkkuuuuuu    uuuuuu rrrrr   rrrrrrrrr   uuuuuu    uuuuuuttttttt:::::tttttttttttttt:::::ttttttt      aaaaaaaaaaaaa   \n                                         k:::::k   k:::::k u::::u    u::::u r::::rrr:::::::::r  u::::u    u::::ut:::::::::::::::::tt:::::::::::::::::t      a::::::::::::a  \n                                         k:::::k  k:::::k  u::::u    u::::u r:::::::::::::::::r u::::u    u::::ut:::::::::::::::::tt:::::::::::::::::t      aaaaaaaaa:::::a \n                                         k:::::k k:::::k   u::::u    u::::u rr::::::rrrrr::::::ru::::u    u::::utttttt:::::::tttttttttttt:::::::tttttt               a::::a \n                                         k::::::k:::::k    u::::u    u::::u  r:::::r     r:::::ru::::u    u::::u      t:::::t            t:::::t              aaaaaaa:::::a \n                                         k:::::::::::k     u::::u    u::::u  r:::::r     rrrrrrru::::u    u::::u      t:::::t            t:::::t            aa::::::::::::a \n                                         k:::::::::::k     u::::u    u::::u  r:::::r            u::::u    u::::u      t:::::t            t:::::t           a::::aaaa::::::a \n                                         k::::::k:::::k    u:::::uuuu:::::u  r:::::r            u:::::uuuu:::::u      t:::::t    tttttt  t:::::t    tttttta::::a    a:::::a \n                                        k::::::k k:::::k   u:::::::::::::::uur:::::r            u:::::::::::::::uu    t::::::tttt:::::t  t::::::tttt:::::ta::::a    a:::::a \n                                        k::::::k  k:::::k   u:::::::::::::::ur:::::r             u:::::::::::::::u    tt::::::::::::::t  tt::::::::::::::ta:::::aaaa::::::a \n                                        k::::::k   k:::::k   uu::::::::uu:::ur:::::r              uu::::::::uu:::u      tt:::::::::::tt    tt:::::::::::tt a::::::::::aa:::a\n                                        kkkkkkkk    kkkkkkk    uuuuuuuu  uuuurrrrrrr                uuuuuuuu  uuuu        ttttttttttt        ttttttttttt    aaaaaaaaaa  aaaa\n\n\n\n\n");
    printf("                                                                                                   Menu principal :\n\n");
    printf("                                                                                                   |1| Creer une nouvelle partie\n");
    printf("                                                                                                   |2| Charger une partie\n");
    printf("                                                                                                   |3| A propos\n");
    printf("                                                                                                   |4| Quitter\n");
    printf("\n                                                                                                                                                          \n                                                               bbbbbbbb                                                                                   \n                                                               b::::::b                             kkkkkkkk                                              \n                                                               b::::::b                             k::::::k                                              \n                                                               b::::::b                             k::::::k                                              \n                                                                b:::::b                             k::::::k                                              \n                                                                b:::::bbbbbbbbb       ooooooooooo    k:::::k    kkkkkkk eeeeeeeeeeee    nnnn  nnnnnnnn    \n                                                                b::::::::::::::bb   oo:::::::::::oo  k:::::k   k:::::kee::::::::::::ee  n:::nn::::::::nn  \n                                                                b::::::::::::::::b o:::::::::::::::o k:::::k  k:::::ke::::::eeeee:::::een::::::::::::::nn \n                                                                b:::::bbbbb:::::::bo:::::ooooo:::::o k:::::k k:::::ke::::::e     e:::::enn:::::::::::::::n\n                                                                b:::::b    b::::::bo::::o     o::::o k::::::k:::::k e:::::::eeeee::::::e  n:::::nnnn:::::n\n                                                                b:::::b     b:::::bo::::o     o::::o k:::::::::::k  e:::::::::::::::::e   n::::n    n::::n\n                                                                b:::::b     b:::::bo::::o     o::::o k:::::::::::k  e::::::eeeeeeeeeee    n::::n    n::::n\n                                                                b:::::b     b:::::bo::::o     o::::o k::::::k:::::k e:::::::e             n::::n    n::::n\n                                                                b:::::bbbbbb::::::bo:::::ooooo:::::ok::::::k k:::::ke::::::::e            n::::n    n::::n\n                                                                b::::::::::::::::b o:::::::::::::::ok::::::k  k:::::ke::::::::eeeeeeee    n::::n    n::::n\n                                                                b:::::::::::::::b   oo:::::::::::oo k::::::k   k:::::kee:::::::::::::e    n::::n    n::::n\n                                                                bbbbbbbbbbbbbbbb      ooooooooooo   kkkkkkkk    kkkkkkk eeeeeeeeeeeeee    nnnnnn    nnnnnn \n\n\n");
    printf("                                                                                                   |?| Choix: ");
    scanf("%d", &choixMenu);
    char Name[100];
    int *pointeurname = &Name;
    switch (choixMenu)
    {
    case 1:
        system("cls");
        printf("\nEntrez votre prenom ?:\n\n");
        scanf("%s",&Name);
        system("cls");
        printf("\nBonjour %s\n\n",Name);
        carte(pointeurx,pointeury,ptlvl,ptatt,ptdef,ptbatterie,ptpv,pointeurname,ptxp,ptor,ptpotion,ptiphone,ptclef,ajoutlvl);
        break;
    case 2:
        system("cls");
        printf("desole cette fonctionnalite n'est pas disponible\n");
        affichageMenu();
        break;
    case 3:
        system("cls");
        printf("C'est le meilleur jeu de ta vie\n\n");
        affichageMenu();
        break;
    case 4:
        printf("Au Revoir\n");
        exit(0);
        break;
    }
    return 0;
}
int combat(int *x, int *y,int *lvl, int *attaque,int *defense,int *batterie,int *pv, int *name, int *xp, int *or, int *potion, int *iphone, int *clef,int *ajoutlvl)
{
    int pvmonstre = 10;
    int atkmonstre = 3;
    int defmonstre = 1;
    int damageJ = pvmonstre - (*attaque - defmonstre);
    int damageM = atkmonstre - *defense;
    int choixCombatUser;
    while (pvmonstre > 0 | *pv > 0)
    {
    printf("Hp : %d\n",*pv);
    printf("Hp monstre : %d\n\n",pvmonstre);
    printf("Que voulez vous faire ?\n\n");
    printf("1. attaquer avec le couteau \n");
    printf("2. attaquer avec le nokia 3310\n");
    printf("3. utiliser une potion\n");
    printf("4. courir \n");
    printf("5. dormir\n");
    printf("|?| Choix: ");
    scanf("%d",&choixCombatUser);
    switch (choixCombatUser)
    {
    case 1:
        system("cls");
        printf("vous poignardez l'ennemi avec son couteau\n");
        pvmonstre = pvmonstre - damageJ;
        printf("l'ennemi perds %d point de vie\n",damageJ);
        if (pvmonstre<=0)
        {
            printf("victoire !!\n");
            niveau(x,y,lvl,attaque,defense,batterie,pv,name,xp,or,potion,iphone,clef,ajoutlvl);
        }
        printf("l'ennemi vous attaque\n");
        *pv = *pv - damageM;
        printf("vous perdez %d point de vie\n",damageM);
        if(*pv < 1)
        {
            printf("tu as perdu, honte a toi\n");
            affichageMenu();
        }
        break;
    case 2:
        if(*batterie < 1)
            printf("tu n'as plus de batterie\n");
        else
        {
            printf("vous envoiez des ondes negatives sur l'ennemi\n");
            batterie = batterie - 1;
            pvmonstre = pvmonstre - (*attaque + 1);
            if (pvmonstre<=0)
            {
                printf("victoire !!\n");
                niveau(x,y,lvl,attaque,defense,batterie,pv,name,xp,or,potion,iphone,clef,ajoutlvl);
            }
            printf("l'ennemi vous attaque\n");
            *pv = *pv - damageM;
            printf("vous perdez %d point de vie\n",damageM);
        }
        if(*pv < 1)
        {
            printf("tu as perdu, honte a toi\n");
            affichageMenu();
        }
        break;
    case 3:
        if(*potion < 1)
        {
            printf("tu n'as plus de potion\n");
        }
        else
        {
            *potion = *potion - 1;
            *pv = *pv + 10;
            printf("vous gagnez 10 points de vie\n");
            printf("l'ennemi vous attaque\n");
            *pv = *pv - damageM;
            printf("vous perdez %d point de vie\n",damageM);
            if(*pv < 1)
            {
                printf("tu as perdu, honte a toi\n");
                affichageMenu();
            }
        }
        break;
    case 4:
        printf("vous vous enfuyez\n");
        deplacement(x,y,lvl,attaque,defense,batterie,pv,name,xp,or,potion,iphone,clef,ajoutlvl);
        break;
    case 5:
        printf("vous faites la sieste en plein combat\n");
        printf("l'ennemi vous attaque\n");
        *pv = *pv - atkmonstre;
        if(*pv < 1)
        {
            printf("Tu as perdu, honte a toi\n");
            affichageMenu();
        }
        break;
    }
    }
}
int Boss(int *x, int *y,int *lvl, int *attaque,int *defense,int *batterie,int *pv, int *name, int *xp, int *or, int *potion, int *iphone, int *clef,int *ajoutlvl) //Combat boss
{
    int paralysie = 0;
    int pvmonstre = 20;
    int atkmonstre = 6;
    int defmonstre = 3;
    int ulti = 0;
    int damageJ = *attaque - defmonstre;
    int damageM = atkmonstre - *defense;
    int choixCombatUser;
    while (pvmonstre > 0 | *pv > 0)
    {
        printf("Hp : %d\n",*pv);
        printf("Hp Boss : %d\n\n",pvmonstre);
        if(paralysie == 1)
        {
            printf("vous etes paralyse, vous ne pouvez pas bouger\n");
            printf("le boss vous attaque\n");
            *pv = *pv - damageM;
            printf("vous perdez %d point de vie\n",damageM);
            ulti = ulti + 1;
            if(*pv < 1)
            {
                printf("tu as perdu, honte a toi\n");
                affichageMenu();
            }
            paralysie = 0;
            printf("vous n'etes plus paralyse\n");
        }
        else
        {
            printf("Que voulez vous faire ?\n\n");
            printf("1. attaquer avec le couteau \n");
            printf("2. attaquer avec le nokia 3310\n");
            printf("3. utiliser une potion\n");
            printf("4. courir \n");
            printf("5. dormir\n");
            printf("\n|?|Choix: ");
            scanf("%d",&choixCombatUser);
            switch (choixCombatUser)
            {
            case 1:
                printf("vous poignardez l'ennemi avec son couteau\n");
                pvmonstre = pvmonstre - damageJ;
                printf("l'ennemi perds %d point de vie\n",damageJ);
                if (pvmonstre<=0)
                {
                    printf("victoire !!\n");
                    fin();
                }
                    printf("il reste %d points de vie a l'ennemi\n",pvmonstre);
                if(ulti > 3)
                {
                    printf("le boss attaque avec son taser\n");
                    *pv = *pv - atkmonstre;
                    printf("vous perdez %d point de vie\n",damageM);
                    printf("vous etes paralyse pendant 1 tour\n",damageM);
                    ulti = 0;
                }
                else
                {
                    printf("le boss vous attaque\n");
                    *pv = *pv - damageM;
                    printf("vous perdez %d point de vie\n",damageM);
                }
                if(*pv < 1)
                {
                    printf("tu as perdu, honte a toi\n");
                    affichageMenu();
                }
                ulti = ulti + 1;
                break;
            case 2:
                if(*batterie < 1)
                    printf("tu n'as plus de batterie\n");
                else
                {
                    printf("vous envoiez des ondes negatives sur l'ennemi\n");
                    batterie = batterie - 1;
                    pvmonstre = pvmonstre - (*attaque + 1);
                    if (pvmonstre<=0)
                    {
                        printf("victoire !!\n");
                        fin();
                    }
                    if(ulti > 3)
                    {
                        printf("le boss attaque avec son taser\n");
                        *pv = *pv - atkmonstre;
                        printf("vous perdez %d point de vie\n",damageM);
                        printf("vous etes paralyse pendant 1 tour\n",damageM);
                        paralysie = 1;
                        ulti = 0;
                    }
                    else
                    {
                        printf("le boss vous attaque\n");
                        *pv = *pv - damageM;
                        printf("vous perdez %d point de vie\n",damageM);
                    }
                        ulti = ulti + 1;
                    if(*pv < 1)
                    {
                        printf("tu as perdu, honte a toi\n");
                        affichageMenu();
                    }
                }
            break;
            case 3:
                *potion = *potion - 1;
                *pv = *pv + 10;
                printf("vous gagnez 10 points de vie\n");
                if(ulti > 3)
                {
                    printf("le boss attaque avec son taser\n");
                    *pv = *pv - atkmonstre;
                    printf("vous perdez %d point de vie\n",damageM);
                    printf("vous etes paralyse pendant 1 tour\n",damageM);
                    ulti = 0;
                }
                else
                {
                    printf("le boss vous attaque\n");
                    *pv = *pv - damageM;
                    printf("vous perdez %d point de vie\n",damageM);
                }
            break;
            case 4:
                printf("Le boss vous empeche de fuir\n");
                Boss(x,y,lvl,attaque,defense,batterie,pv,name,xp,or,potion,iphone,clef,ajoutlvl);
            break;
            case 5:
                printf("vous faites la sieste en plein combat\n");
                printf("l'ennemi vous attaque\n");
                *pv = *pv - atkmonstre;
                ulti = ulti + 1;
            if(*pv < 1)
            {
                printf("tu as perdu, honte a toi\n");
                affichageMenu();
            }
            break;
            }
        }
    }
}

int niveau(int *x, int *y,int *lvl, int *attaque,int *defense,int *batterie,int *pv, int *name, int *xp, int *or, int *potion, int *iphone, int *clef,int *ajoutlvl) // on l'appelle apres un combat
{                                                                                                               // la fonction permet de gagner les recompenses de fin de combat et passer de niveau
    *xp = *xp + 35;
    *or = *or + 10;
    int bientot = *ajoutlvl - *xp;
    printf("vous obtenez 35 d'xp ainsi que 10 pieces d'or\n");
    if(*xp < *ajoutlvl)
        printf("il vous manque %d d'xp pour passer au niveau suivant\n",bientot);
    while (*xp > *ajoutlvl)
    {
            *lvl = *lvl + 1;
            *ajoutlvl = *ajoutlvl * 2 + 30;
            *attaque = *attaque + 1;
            *defense = *defense + 1;
            printf("tu passe niveau %d\n", *lvl);
    }
    deplacement(x,y,lvl,attaque,defense,batterie,pv,name,xp,or,potion,iphone,clef,ajoutlvl);
}

int Googlemap(int *x, int *y,int *lvl, int *attaque,int *defense,int *batterie,int *pv, int *name, int *xp, int *or, int *potion, int *iphone, int *clef,int *ajoutlvl) // le joueur peut l'appeller en dehors d'un combat
{                                                                                                   //Cette fonction permet de voir la map et de connaitre l'emplacement du boss
    if (*iphone == 0)
    {
        printf("choix indisponible\n");
    }
    else
    {
        printf("un kilometre represente 1 map (1 deplacement)\n");
        if (*x == 0 && *y == 1)
        {
            system("cls");
            printf("\n\n\n");
            printf(" 00000000000000000000000\n");
            printf(" 0  _________________  0\n");
            printf(" 0 |                 | 0\n");
            printf(" 0 |                 | 0\n");
            printf(" 0 |       O--O--B   | 0\n");
            printf(" 0 |       |         | 0\n");
            printf(" 0 |       |         | 0\n");
            printf(" 0 | O--O--O         | 0\n");
            printf(" 0 |       |         | 0\n");
            printf(" 0 |       |         | 0\n");
            printf(" 0 |       X--O      | 0\n");
            printf(" 0 |---------------- | 0\n");
            printf(" 0 |X Votre position | 0\n");
            printf(" 0 |O Autre zone     | 0\n");
            printf(" 0 |_________________| 0\n");
            printf(" 0                     0\n");
            printf(" 00000000000000000000000\n");
            printf(" 0                     0\n");
            printf(" 0          O          0\n");
            printf(" 0                     0\n");
            printf(" 00000000000000000000000\n");
            printf("\nle boss se trouve a 4 kilometres d'ici\n");
        }
        if (*x == 0 && *y == 2)
        {
            system("cls");
            printf("\n\n\n");
            printf(" 00000000000000000000000\n");
            printf(" 0  _________________  0\n");
            printf(" 0 |                 | 0\n");
            printf(" 0 |                 | 0\n");
            printf(" 0 |       O--O--B   | 0\n");
            printf(" 0 |       |         | 0\n");
            printf(" 0 |       |         | 0\n");
            printf(" 0 | O--O--X         | 0\n");
            printf(" 0 |       |         | 0\n");
            printf(" 0 |       |         | 0\n");
            printf(" 0 |       O--O      | 0\n");
            printf(" 0 |---------------- | 0\n");
            printf(" 0 |X Votre position | 0\n");
            printf(" 0 |O Autre zone     | 0\n");
            printf(" 0 |_________________| 0\n");
            printf(" 0                     0\n");
            printf(" 00000000000000000000000\n");
            printf(" 0                     0\n");
            printf(" 0          O          0\n");
            printf(" 0                     0\n");
            printf(" 00000000000000000000000\n");
            printf("\nle boss se trouve a 3 kilometres d'ici\n");
        }
        if (*x == 0 && *y == 3)
        {
            system("cls");
            printf("\n\n\n");
            printf(" 00000000000000000000000\n");
            printf(" 0  _________________  0\n");
            printf(" 0 |                 | 0\n");
            printf(" 0 |                 | 0\n");
            printf(" 0 |       X--O--B   | 0\n");
            printf(" 0 |       |         | 0\n");
            printf(" 0 |       |         | 0\n");
            printf(" 0 | O--O--O         | 0\n");
            printf(" 0 |       |         | 0\n");
            printf(" 0 |       |         | 0\n");
            printf(" 0 |       O--O      | 0\n");
            printf(" 0 |---------------- | 0\n");
            printf(" 0 |X Votre position | 0\n");
            printf(" 0 |O Autre zone     | 0\n");
            printf(" 0 |_________________| 0\n");
            printf(" 0                     0\n");
            printf(" 00000000000000000000000\n");
            printf(" 0                     0\n");
            printf(" 0          O          0\n");
            printf(" 0                     0\n");
            printf(" 00000000000000000000000\n");
            printf("\nle boss se trouve a 2 kilometres d'ici\n");
        }
        if (*x == 1 && *y == 3)
        {
            system("cls");
            printf("\n\n\n");
            printf(" 00000000000000000000000\n");
            printf(" 0  _________________  0\n");
            printf(" 0 |                 | 0\n");
            printf(" 0 |                 | 0\n");
            printf(" 0 |       O--X--B   | 0\n");
            printf(" 0 |       |         | 0\n");
            printf(" 0 |       |         | 0\n");
            printf(" 0 | O--O--O         | 0\n");
            printf(" 0 |       |         | 0\n");
            printf(" 0 |       |         | 0\n");
            printf(" 0 |       O--O      | 0\n");
            printf(" 0 |---------------- | 0\n");
            printf(" 0 |X Votre position | 0\n");
            printf(" 0 |O Autre zone     | 0\n");
            printf(" 0 |_________________| 0\n");
            printf(" 0                     0\n");
            printf(" 00000000000000000000000\n");
            printf(" 0                     0\n");
            printf(" 0          O          0\n");
            printf(" 0                     0\n");
            printf(" 00000000000000000000000\n");
            printf("\nle boss se trouve a 1 kilometre d'ici\n");
        }
        if (*x == -1 && *y == 2)
        {
            system("cls");
            printf("\n\n\n");
            printf(" 00000000000000000000000\n");
            printf(" 0  _________________  0\n");
            printf(" 0 |                 | 0\n");
            printf(" 0 |                 | 0\n");
            printf(" 0 |       O--O--B   | 0\n");
            printf(" 0 |       |         | 0\n");
            printf(" 0 |       |         | 0\n");
            printf(" 0 | O--X--O         | 0\n");
            printf(" 0 |       |         | 0\n");
            printf(" 0 |       |         | 0\n");
            printf(" 0 |       O--O      | 0\n");
            printf(" 0 |---------------- | 0\n");
            printf(" 0 |X Votre position | 0\n");
            printf(" 0 |O Autre zone     | 0\n");
            printf(" 0 |_________________| 0\n");
            printf(" 0                     0\n");
            printf(" 00000000000000000000000\n");
            printf(" 0                     0\n");
            printf(" 0          O          0\n");
            printf(" 0                     0\n");
            printf(" 00000000000000000000000\n");
            printf("\nle boss se trouve a 4 kilometres d'ici\n");
        }
        if (*x == -2 && *y == 2)
        {
            system("cls");
            printf("\n\n\n");
            printf(" 00000000000000000000000\n");
            printf(" 0  _________________  0\n");
            printf(" 0 |                 | 0\n");
            printf(" 0 |                 | 0\n");
            printf(" 0 |       O--O--B   | 0\n");
            printf(" 0 |       |         | 0\n");
            printf(" 0 |       |         | 0\n");
            printf(" 0 | X--O--O         | 0\n");
            printf(" 0 |       |         | 0\n");
            printf(" 0 |       |         | 0\n");
            printf(" 0 |       O--O      | 0\n");
            printf(" 0 |---------------- | 0\n");
            printf(" 0 |X Votre position | 0\n");
            printf(" 0 |O Autre zone     | 0\n");
            printf(" 0 |_________________| 0\n");
            printf(" 0                     0\n");
            printf(" 00000000000000000000000\n");
            printf(" 0                     0\n");
            printf(" 0          O          0\n");
            printf(" 0                     0\n");
            printf(" 00000000000000000000000\n");
            printf("\nle boss se trouve a 5 kilometres d'ici\n");
        }
        if (*x == 1 && *y == 1)
        {
            system("cls");
            printf(" 00000000000000000000000\n");
            printf(" 0  _________________  0\n");
            printf(" 0 |                 | 0\n");
            printf(" 0 |                 | 0\n");
            printf(" 0 |       O--O--B   | 0\n");
            printf(" 0 |       |         | 0\n");
            printf(" 0 |       |         | 0\n");
            printf(" 0 | O--O--O         | 0\n");
            printf(" 0 |       |         | 0\n");
            printf(" 0 |       |         | 0\n");
            printf(" 0 |       O--X      | 0\n");
            printf(" 0 |---------------- | 0\n");
            printf(" 0 |X Votre position | 0\n");
            printf(" 0 |O Autre zone     | 0\n");
            printf(" 0 |_________________| 0\n");
            printf(" 0                     0\n");
            printf(" 00000000000000000000000\n");
            printf(" 0                     0\n");
            printf(" 0          O          0\n");
            printf(" 0                     0\n");
            printf(" 00000000000000000000000\n");
            printf("\nle boss se trouve a 5 kilometres d'ici\n");
        }
    }
    deplacement(x,y,lvl,attaque,defense,batterie,pv,name,xp,or,potion,iphone,clef,ajoutlvl);
}
int deplacement(int *x, int *y,int *lvl, int *attaque,int *defense,int *batterie,int *pv, int *name, int *xp, int *or, int *potion, int *iphone, int *clef,int *ajoutlvl) // on se deplace avec cette fonction
{
    int direction;
    int choix;
    if (*x == 1 && *y == 1)
    {
        printf("1. sortir du campus\n");
        if (*iphone == 1)
        {
            printf("2. utiliser googlemap\n");
        }
        scanf("%d",&choix);
        switch (choix)
        {
        case 1:
            *x = *x - 1;
            carte(x,y,lvl,attaque,defense,batterie,pv,name,xp,or,potion,iphone,clef,ajoutlvl);
            break;
        case 2:
            Googlemap(x,y,lvl,attaque,defense,batterie,pv,name,xp,or,potion,iphone,clef,ajoutlvl);
            break;
        }
    }
    printf("\n\n");
    printf("que veux tu faire ?\n\n");
    printf("1. aller  vers le nord\n");
    printf("2. aller vers l'ouest\n");
    printf("3. aller vers l'est\n");
    printf("4. aller vers le sud\n");

    if(*iphone > 0)
    {
        printf("5. utiliser googlemap\n");
    }
    printf("6. consulter l'inventaire");
    printf("\n");
    printf("\nChoix: ");
    scanf("%d",&direction);
    switch (direction)
    {
    case 1:
        *y = *y + 1;
        break;
    case 2:
        *x = *x - 1;
        break;
    case 3:
        *x = *x + 1;
        break;
    case 4:
        *y = *y - 1;
        break;
    case 5:
        Googlemap(x,y,lvl,attaque,defense,batterie,pv,name,xp,or,potion,iphone,clef,ajoutlvl);
        break;
    case 6:
        inventaire(x,y,lvl,attaque,defense,batterie,pv,name,xp,or,potion,iphone,clef,ajoutlvl);
        break;
    }
    carte(x,y,lvl,attaque,defense,batterie,pv,name,xp,or,potion,iphone,clef,ajoutlvl);
}

int carte(int *x, int *y,int *lvl, int *attaque,int *defense,int *batterie,int *pv, int *name, int *xp, int *or, int *potion, int *iphone, int *clef,int *ajoutlvl) // on l'appelle apres un deplacement
{
    int intru = 1;
    int choix = 0;
    int choixb;
    if (*x == 0 && *y == 0)
    {
        printf("Tu es dans la ville\n");
        printf("pieces d'or : %d \n",*or);
        printf("que veux tu faire ? \n\n");
        printf("1. acheter des potions a 10 pieces d'or\n");
        printf("2. consultez son inventaire\n");
        printf("3. s'en aller\n");
        printf("\n|?| Choix: ");
        scanf("%d",&choix);
        switch(choix)
        {
        case 1:
            if(*or<10)
            {
                system("cls");
                printf("vous n'avez pas assez de pieces d'or\n");
                carte(x,y,lvl,attaque,defense,batterie,pv,name,xp,or,potion,iphone,clef,ajoutlvl);
            }
            else
            {
                system("cls");
                printf("vous obtenez une potion\n");
                *potion = *potion + 1;
                *or = *or - 10;
                carte(x,y,lvl,attaque,defense,batterie,pv,name,xp,or,potion,iphone,clef,ajoutlvl);
            }
            break;
        case 2:
            while(intru = 1)
            {
                inventaire(x,y,lvl,attaque,defense,batterie,pv,name,xp,or,potion,iphone,clef,ajoutlvl);
            }
        case 3:
            *y = 1;
            carte(x,y,lvl,attaque,defense,batterie,pv,name,xp,or,potion,iphone,clef,ajoutlvl);
        break;
        }
    }
    if (*x == 0 && *y == 1)
    {
        system("cls");
        printf("vous entrez dans la jungle...\n");
    }
    if (*x == 0 && *y == 2)
    {
        system("cls");
        printf("vous vous enfoncez dans la jungle il fait plus sombre qu'auparavant\n");
        printf("un monstre vous attaque !\n");
        combat(x,y,lvl,attaque,defense,batterie,pv,name,xp,or,potion,iphone,clef,ajoutlvl);
    }
    if (*x == 0 && *y == 3)
    {
        printf("vous etes en plein milieu de la jungle \n");
        printf("vous ne voyez quasiment rien\n");
        if (*iphone < 1)
        {
            printf("vous avez trouve un iphone !!!\n");
            *iphone = *iphone + 1;
            printf("%s met iphone dans son inventaire\n",name);
            printf(" iphone permet d'utiliser la competence google map\n");
        }
        else
            deplacement(x,y,lvl,attaque,defense,batterie,pv,name,xp,or,potion,iphone,clef,ajoutlvl);
    }
    if (*x == 1 && *y == 3)
    {
        system("cls");
        printf("vous entrez dans une grotte\n");
        printf("un monstre vous attaque !\n");
        combat(x,y,lvl,attaque,defense,batterie,pv,name,xp,or,potion,iphone,clef,ajoutlvl);
    }
    if (*x == 2 && *y == 3)
    {
        if (*clef < 1)
        {
            printf("une clef est necessaire pour passer\n");
            *x = 1;
            deplacement(x,y,lvl,attaque,defense,batterie,pv,name,xp,or,potion,iphone,clef,ajoutlvl);
        }
        printf("vous voila dans l'antre du boss\n");
        Boss(x,y,lvl,attaque,defense,batterie,pv,name,xp,or,potion,iphone,clef,ajoutlvl);
    }
    if (*x == -1 && *y == 2)
    {
        printf("vous entrez dans une zone rocheuse\n");
    }
    if (*x == -2 && *y == 2)
    {
        printf("vous etes dans une prairie paisible\n");
        if(*batterie < 1)
        {
            printf("vous avez trouve une batterie !!\n");
            printf("(elle vous servira pour utiliser un telephone en combat)\n");
            *batterie = *batterie + 1;
            printf("%s met la batterie dans son inventaire\n",name);
        }
        else
            deplacement(x,y,lvl,attaque,defense,batterie,pv,name,xp,or,potion,iphone,clef,ajoutlvl);
    }
    if (*x == 0 && *y == -1)
    {
        printf("tu ne peux pas aller par la\n");
        *x = 0;
        *y = 0;
    }
    if (*x == -1 && *y == 0)
    {
        printf("tu ne peux pas aller par la\n");
        *x = 0;
        *y = 0;
    }
    if (*x == 1 && *y == 1)
    {
        printf("vous entrez dans ynov campus\n");
        if(*clef < 1)
        {
            printf("vous avez trouve une clef !!\n");
            *clef = *clef + 1;
        }
    }
    if (*x == -1 && *y == 1)
    {
        printf("tu ne peux pas aller par la\n");
        *x = 0;
        *y = 1;
    }
    if (*x == 1 && *y == 2)
    {
        printf("tu ne peux pas aller par la\n");
        *x = 0;
        *y = 2;
    }
    if (*x == -2 && *y == 1)
    {
        printf("tu ne peux pas aller par la\n");
        *x = -2;
        *y = 2;
    }
    if (*x == -3 && *y == 2)
    {
        printf("tu ne peux pas aller par la\n");
        *x = -2;
        *y = 2;
    }
    if (*x == -2 && *y == 3)
    {
        printf("tu ne peux pas aller par la\n");
        *x = -2;
        *y = 2;
    }
    if (*x == -1 && *y == 3)
    {
        printf("tu ne peux pas aller par la\n");
        *x = -1;
        *y = 2;
    }
    if (*x == 0 && *y == 4)
    {
        printf("tu ne peux pas aller par la\n");
        *x = 0;
        *y = 3;
    }
    if (*x == 1 && *y == 4)
    {
        printf("tu ne peux pas aller par la\n");
        *x = 1;
        *y = 3;
    }
    deplacement(x,y,lvl,attaque,defense,batterie,pv,name,xp,or,potion,iphone,clef,ajoutlvl);
}
int inventaire(int *x, int *y,int *lvl, int *attaque,int *defense,int *batterie,int *pv, int *name, int *xp, int *or, int *potion, int *iphone, int *clef,int *ajoutlvl)
{
    int choixc;
    printf("%d pieces d'or\n",*or);
    printf("couteau x1\n");
    printf("potion x%d\n",*potion);
    printf("iphone x%d\n",*iphone);
    printf("nokia 3310 x1\n");
    printf("clef x%d\n\n",*clef);
    printf("hp %d\n",*pv);
    printf("1. utiliser une potion\n");
    printf("2. quitter l'inventaire\n");
    scanf("%d",&choixc);
    if(choixc == 2)
        carte(x,y,lvl,attaque,defense,batterie,pv,name,xp,or,potion,iphone,clef,ajoutlvl);
    if(choixc == 1)
    {
        if(*potion < 1)
        {
            system("cls");
            printf("tu n'as plus de potion\n");
            inventaire(x,y,lvl,attaque,defense,batterie,pv,name,xp,or,potion,iphone,clef,ajoutlvl);
        }
        else
        {
            if (*pv == 50)
            {
                system("cls");
                printf("tu as deja tout tes hp\n");
                inventaire(x,y,lvl,attaque,defense,batterie,pv,name,xp,or,potion,iphone,clef,ajoutlvl);
            }
            *potion = *potion - 1;
            *pv = *pv + 10;
            if (*pv > 50)
            {
                *pv = 50;
            }
            system("cls");
            printf("vous gagnez 10 points de vie\n");
            printf("vous avez %d points de vie\n",*pv);
            inventaire(x,y,lvl,attaque,defense,batterie,pv,name,xp,or,potion,iphone,clef,ajoutlvl);
        }
    }
}
fin()
{
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n");
    printf("\n                                                                         \n                                                                                                                                     \n                                                                                                                             dddddddd\n                                                                         EEEEEEEEEEEEEEEEEEEEEE                              d::::::d\n                                                                         E::::::::::::::::::::E                              d::::::d\n                                                                         E::::::::::::::::::::E                              d::::::d\n                                                                         EE::::::EEEEEEEEE::::E                              d:::::d \n                                                                           E:::::E       EEEEEEnnnn  nnnnnnnn        ddddddddd:::::d \n                                                                           E:::::E             n:::nn::::::::nn    dd::::::::::::::d \n                                                                           E::::::EEEEEEEEEE   n::::::::::::::nn  d::::::::::::::::d \n                                                                           E:::::::::::::::E   nn:::::::::::::::nd:::::::ddddd:::::d \n                                                                           E:::::::::::::::E     n:::::nnnn:::::nd::::::d    d:::::d \n                                                                           E::::::EEEEEEEEEE     n::::n    n::::nd:::::d     d:::::d \n                                                                           E:::::E               n::::n    n::::nd:::::d     d:::::d \n                                                                           E:::::E       EEEEEE  n::::n    n::::nd:::::d     d:::::d \n                                                                         EE::::::EEEEEEEE:::::E  n::::n    n::::nd::::::ddddd::::::dd\n                                                                         E::::::::::::::::::::E  n::::n    n::::n d:::::::::::::::::d\n                                                                         E::::::::::::::::::::E  n::::n    n::::n  d:::::::::ddd::::d\n                                                                         EEEEEEEEEEEEEEEEEEEEEE  nnnnnn    nnnnnn   ddddddddd   ddddd\n                                                                                                                                     ");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    exit(0);
}

