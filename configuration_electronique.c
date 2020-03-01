#include <stdio.h>

void atom();
void menu();


int main()
{
    printf(
        "    __________________________________________________________________________ \n"
        "   |   1   2   3   4   5   6   7   8   9   10  11  12  13  14  15  16  17  18 |\n"
        "   |                                                                          |\n"
        "   |1  H                                                                   He |\n"
        "   |                                                                          |\n"
        "   |2  Li  Be                                          B   C   N   O   F   Ne |\n"
        "   |                                                                          |\n"
        "   |3  Na  Mg                                          Al  Si  P   S   Cl  Ar |\n"
        "   |                                                                          |\n"
        "   |4  K   Ca  Sc  Ti  V   Cr  Mn  Fe  Co  Ni  Cu  Zn  Ga  Ge  As  Se  Br  Kr |\n"
        "   |                                                                          |\n"
        "   |5  Rb  Sr  Y   Zr  Nb  Mo  Tc  Ru  Rh  Pd  Ag  Cd  In  Sn  Sb  Te  I   Xe |\n"
        "   |                                                                          |\n"
        "   |6  Cs  Ba  *   Hf  Ta  W   Re  Os  Ir  Pt  Au  Hg  Tl  Pb  Bi  Po  At  Rn |\n"
        "   |                                                                          |\n"
        "   |7  Fr  Ra  **  Rf  Db  Sg  Bh  Hs  Mt  Ds  Rg  Cn  Nh  Fl  Mc  Lv  Ts  Og |\n"
        "   |__________________________________________________________________________|\n"

        );
    printf("\nEntrez le nom, le symbole chimique ou le numéro atomique de l'atome dont vous chercher la configuration electronique (ou appuyez sur q pour quitter). \n");
    printf(">");
    menu();

    return 0;

}



void menu()
{
    char atomChoise[15];
    scanf("%s", atomChoise);
    atom(atomChoise);
}


void atom(char *a)
{
    for(int i = 0; a[i]; i++){
      a[i] = tolower(a[i]);
    }

    if (strcmp(a,"bore") == 0 || strcmp(a,"b") == 0 || strcmp(a,"5") == 0 )  {
        printf("Voici la configuration éléctronique du Bore : 1s²2s²2p¹ \n", a);
    } else if (strcmp(a,"carbone") == 0 || strcmp(a,"c") == 0 || strcmp(a,"6") == 0 ) {
        printf("Voici la configuration éléctronique du Carbone : 1s²2s²2p² \n", a);
    } else if (strcmp(a,"azote") == 0 || strcmp(a,"n") == 0 || strcmp(a,"7") == 0 ) {
        printf("Voici la configuration éléctronique de l'Azote : 1s²2s²2p³ \n", a);
    } else if (strcmp(a,"aluminium") == 0 || strcmp(a,"al") == 0 || strcmp(a,"13") == 0 ) {
        printf("Voici la configuration éléctronique de l'Aluminium : 1s²2s²2p⁶3s²3p¹ \n", a);
    } else if (strcmp(a,"silicium") == 0 || strcmp(a,"si") == 0 || strcmp(a,"14") == 0 ) {
        printf("Voici la configuration éléctronique du Silicium : 1s²2s²2p⁶3s²3p² \n", a);
    } else if (strcmp(a,"phosphore") == 0 || strcmp(a,"p") == 0 || strcmp(a,"15") == 0 ) {
        printf("Voici la configuration éléctronique du Phosphore : 1s²2s²2p⁶3s²3p³ \n", a);
    } else if (strcmp(a,"gallium") == 0 || strcmp(a,"ga") == 0 || strcmp(a,"31") == 0 ) {
        printf("Voici la configuration éléctronique du Gallium : 1s²2s²2p⁶3s²3p⁶3d¹⁰4s²4p¹ \n", a);
    } else if (strcmp(a,"germanium") == 0 || strcmp(a,"ge") == 0 || strcmp(a,"32") == 0 ) {
        printf("Voici la configuration éléctronique du Germanium : 1s²2s²2p⁶3s²3p⁶3d¹⁰4s²4p² \n", a);
    } else if (strcmp(a,"arsenic") == 0 || strcmp(a,"as") == 0 || strcmp(a,"33") == 0 ) {
        printf("Voici la configuration éléctronique de l'Arsenic : 1s²2s²2p⁶3s²3p⁶3d¹⁰4s²4p³ \n", a);
    } else if (strcmp(a,"indium") == 0 || strcmp(a,"in") == 0 || strcmp(a,"49") == 0 ) {
        printf("Voici la configuration éléctronique de l'Indium : 1s²2s²2p⁶3s²3p⁶3d¹⁰4s²4p⁶4d¹⁰5s²5p¹  \n", a);
    } else if (strcmp(a,"etain") == 0 || strcmp(a,"étain") == 0 || strcmp(a,"sn") == 0 || strcmp(a,"50") == 0 ) {
        printf("Voici la configuration éléctronique de l'Etain : 1s²2s²2p⁶3s²3p⁶3d¹⁰4s²4p⁶4d¹⁰5s²5p²  \n", a);
    } else if (strcmp(a,"antimoine") == 0 || strcmp(a,"sb") == 0 || strcmp(a,"51") == 0 ) {
        printf("Voici la configuration éléctronique de l'Antimoine : 1s²2s²2p⁶3s²3p⁶3d¹⁰4s²4p⁶4d¹⁰5s²5p³   \n", a);
    } else if (strcmp(a,"thallium") == 0 || strcmp(a,"tl") == 0 || strcmp(a,"81") == 0 ) {
        printf("Voici la configuration éléctronique du Thallium :  1s²2s²2p⁶3s²3p⁶3d¹⁰4s²4p⁶4d¹⁰4f¹⁴5s²5p⁶5d¹⁰6s²6p¹   \n", a);
    } else if (strcmp(a,"plomb") == 0 || strcmp(a,"pb") == 0 || strcmp(a,"82") == 0 ) {
        printf("Voici la configuration éléctronique du Plomb : 1s²2s²2p⁶3s²3p⁶3d¹⁰4s²4p⁶4d¹⁰4f¹⁴5s²5p⁶5d¹⁰6s²6p²  \n", a);
    } else if (strcmp(a,"bismuth") == 0 || strcmp(a,"bi") == 0 || strcmp(a,"83") == 0 ) {
        printf("Voici la configuration éléctronique du Bismuth : 1s²2s²2p⁶3s²3p⁶3d¹⁰4s²4p⁶4d¹⁰4f¹⁴5s²5p⁶5d¹⁰6s²6p³  \n", a);
    } else if (strcmp(a,"nihonium") == 0 || strcmp(a, "nh") == 0 || strcmp(a,"113") == 0 ) {
        printf("Voici la configuration éléctronique du Nihonium : 1s²2s²2p⁶3s²3p⁶3d¹⁰4s²4p⁶4d¹⁰4f¹⁴5s²5p⁶5d¹⁰6s²6p³7s²5f¹⁴6d¹⁰7p¹  \n", a);
    } else if (strcmp(a,"flerovium") == 0 ||strcmp(a,"flérovium") == 0 || strcmp(a, "fl") == 0 || strcmp(a,"114") == 0 ) {
        printf("Voici la configuration éléctronique du Flérovium : 1s²2s²2p⁶3s²3p⁶3d¹⁰4s²4p⁶4d¹⁰4f¹⁴5s²5p⁶5d¹⁰6s²6p³7s²5f¹⁴6d¹⁰7p²  \n", a);
    } else if (strcmp(a,"moscovium") == 0 || strcmp(a, "mc") == 0 || strcmp(a,"115") == 0 ) {
        printf("Voici la configuration éléctronique du Moscovium : 1s²2s²2p⁶3s²3p⁶3d¹⁰4s²4p⁶4d¹⁰4f¹⁴5s²5p⁶5d¹⁰6s²6p³7s²5f¹⁴6d¹⁰7p³  \n", a);
    }  else if (strcmp(a,"oxygene") == 0 || strcmp(a,"oxygène") == 0 || strcmp(a,"o") == 0 || strcmp(a,"8") == 0 ) {
        printf("Voici la configuration éléctronique de l'Oxygène : 1s²2s²2p⁴ \n", a);
    }  else if (strcmp(a,"hydrogène") == 0 || strcmp(a,"hydrogene") == 0 || strcmp(a,"h") == 0 || strcmp(a,"1") == 0 ) {
        printf("Voici la configuration éléctronique de l'Hydrogène : 1s¹ \n", a);
    }  else if (strcmp(a,"q") == 0) {
        printf("Merci, à bientôt. \n");
        exit(0);
    } else {
        printf("Aucun atome séléctionné, recommencez \n");
        printf(">");
        menu();
    }
    printf(">");
    menu();
}
/* ¹²³⁴⁵⁶⁷⁸⁹⁰ */