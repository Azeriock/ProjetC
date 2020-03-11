int avantjeu(); //Accueil
int affichageMenu();//Choix jouer charger etc
int deplacement(int *x, int *y,int *lvl, int *attaque,int *defense,int *batterie,int *pv, int *name, int *xp, int *or, int *potion, int *iphone, int *clef,int *ajoutlvl); // permet se deplacer sur la carte
int carte(int *x, int *y,int *lvl, int *attaque,int *defense,int *batterie,int *pv, int *name, int *xp, int *or, int *potion, int *iphone, int *clef,int *ajoutlvl); // donne la position du joueur
int Googlemap(int *x, int *y,int *lvl, int *attaque,int *defense,int *batterie,int *pv, int *name, int *xp, int *or, int *potion, int *iphone, int *clef,int *ajoutlvl); // permet de connaitre la distance entre le joueur et le boss
int niveau(int *x, int *y,int *lvl, int *attaque,int *defense,int *batterie,int *pv, int *name, int *xp, int *or, int *potion, int *iphone, int *clef,int *ajoutlvl); // fonction qui fais passer de niveau apres les combats
int combat(int *x, int *y,int*lvl, int *attaque,int *defense,int *batterie,int *pv, int *name, int *xp, int *or, int *potion, int *iphone, int *clef,int *ajoutlvl);
int Boss(int *x, int *y,int *lvl, int *attaque,int *defense,int *batterie,int *pv, int *name, int *xp, int *or, int *potion, int *iphone, int *clef,int *ajoutlvl);
int inventaire(int *x, int *y,int *lvl, int *attaque,int *defense,int *batterie,int *pv, int *name, int *xp, int *or, int *potion, int *iphone, int *clef,int *ajoutlvl);
int difficulte();
int fin();
