#include <stdio.h>
#include <stdlib.h>

    float introduction_au_systeme_exploitation(float note_cc, float note_examen) {
    return (note_cc * 0.4 + note_examen * 0.6 ) * 4;
}

float Bureautique_et_web(float note_cc, float note_examen) {
    return (note_cc * 0.4 + note_examen * 0.6) * 1;
}

float Algorithme_Et_Structure_De_Donnee_1(float note_cc, float note_examen) {
    return (note_cc * 0.4 + note_examen * 0.6) * 6;
}

float Architecture_Des_Ordinateurs_1(float note_cc, float note_examen) {
    return (note_cc * 0.4 + note_examen * 0.6) * 4;
}

float Algebre_1(float note_cc, float note_examen) {
    return (note_cc * 0.4 + note_examen * 0.6) * 4;
}

float Analyse_Mathematique_1(float note_cc, float note_examen) {
    return (note_cc * 0.4 + note_examen * 0.6) * 6;
}

int main()
{
    float cc_ISE,cc_BEW,cc_ASD1,cc_AO1,cc_algebre,cc_analyse1;
    float examen_ISE,examen_BEW,examen_ASD1,examen_AO1,examen_algebre,examen_analyse1;
    float moyenne_ISE, moyenne_BEW, moyenne_ASD1, moyenne_AO1, moyenne_algebre, moyenne_analyse1,moyenne_TEE;

    fflush(stdin); // Nettoyer le tampon afin d'éviter les bugs de débogage

    printf("Calculez votre note moyenne du premier semestre\n\n");

    // Entrée pour la note de controle continue dans la plage [0, 20]
    printf("Introduction Aux Systeme D'exploitation :\n");
    printf("Entrez la note de controle continue : ");
    while (scanf("%f", &cc_ISE) != 1 || cc_ISE < 0 || cc_ISE > 20) {
        printf("Entree invalide. Veuillez entrer un nombre entre 0 et 20.\n");
        printf("Entrez la note de controle continue (entre 0 et 20) : ");
        // Nettoyer le tampon d'entrée en cas d'entrée non numérique
        while (getchar() != '\n');
    }

    // Entrée pour la note de examen dans la plage [0, 20]
    printf("Entrez la note de examen : ");
    while (scanf("%f", &examen_ISE) != 1 || examen_ISE < 0 || examen_ISE > 20) {
        printf("Entree invalide. Veuillez entrer un nombre entre 0 et 20.\n");
        printf("Entrez la note de examen (entre 0 et 20) : ");

        while (getchar() != '\n'); // Nettoyer le tampon d'entrée en cas d'entrée non numérique
    }

    printf("\nBureautique et web\n");
    printf("Entrez la note de controle continue : ");
    while (scanf("%f", &cc_BEW) != 1 || cc_BEW < 0 || cc_BEW > 20) {
        printf("Entree invalide. Veuillez entrer un nombre entre 0 et 20.\n");
        printf("Entrez la note de controle continue (entre 0 et 20) : ");
        // Nettoyer le tampon d'entrée en cas d'entrée non numérique
        while (getchar() != '\n');
    }

    // Entrée pour la note de examen dans la plage [0, 20]
    printf("Entrez la note de examen : ");
    while (scanf("%f", &examen_BEW) != 1 || examen_BEW < 0 || examen_BEW > 20) {
        printf("Entree invalide. Veuillez entrer un nombre entre 0 et 20.\n");
        printf("Entrez la note de examen (entre 0 et 20) : ");

        while (getchar() != '\n'); // Nettoyer le tampon d'entrée en cas d'entrée non numérique
    }
    printf("\nAlgorithme et structure de donnees 1 :\n");
    printf("Entrez la note de controle continue : ");
    while (scanf("%f", &cc_ASD1) != 1 || cc_ASD1 < 0 || cc_ASD1 > 20) {
        printf("Entree invalide. Veuillez entrer un nombre entre 0 et 20.\n");
        printf("Entrez la note de controle continue (entre 0 et 20) : ");
        // Nettoyer le tampon d'entrée en cas d'entrée non numérique
        while (getchar() != '\n');
    }

    // Entrée pour la note de examen dans la plage [0, 20]
    printf("Entrez la note de examen : ");
    while (scanf("%f", &examen_ASD1) != 1 || examen_ASD1 < 0 || examen_ASD1 > 20) {
        printf("Entree invalide. Veuillez entrer un nombre entre 0 et 20.\n");
        printf("Entrez la note de examen (entre 0 et 20) : ");

        while (getchar() != '\n'); // Nettoyer le tampon d'entrée en cas d'entrée non numérique
    }

     printf("\nArchitecture des ordinateurs 1 :\n");
    printf("Entrez la note de controle continue : ");
    while (scanf("%f", &cc_AO1) != 1 || cc_AO1 < 0 || cc_AO1 > 20) {
        printf("Entree invalide. Veuillez entrer un nombre entre 0 et 20.\n");
        printf("Entrez la note de controle continue (entre 0 et 20) : ");
        // Nettoyer le tampon d'entrée en cas d'entrée non numérique
        while (getchar() != '\n');
    }

    // Entrée pour la note de examen dans la plage [0, 20]
    printf("Entrez la note de examen : ");
    while (scanf("%f", &examen_AO1) != 1 || examen_AO1 < 0 || examen_AO1 > 20) {
        printf("Entree invalide. Veuillez entrer un nombre entre 0 et 20.\n");
        printf("Entrez la note de examen (entre 0 et 20) : ");

        while (getchar() != '\n'); // Nettoyer le tampon d'entrée en cas d'entrée non numérique
    }

     printf("\nAlgebre 1 :\n");
    printf("Entrez la note de controle continue : ");
    while (scanf("%f", &cc_algebre) != 1 || cc_algebre < 0 || cc_algebre > 20) {
        printf("Entree invalide. Veuillez entrer un nombre entre 0 et 20.\n");
        printf("Entrez la note de controle continue (entre 0 et 20) : ");
        // Nettoyer le tampon d'entrée en cas d'entrée non numérique
        while (getchar() != '\n');
    }

    // Entrée pour la note de examen dans la plage [0, 20]
    printf("Entrez la note de examen : ");
    while (scanf("%f", &examen_algebre) != 1 || examen_algebre < 0 || examen_algebre > 20) {
        printf("Entree invalide. Veuillez entrer un nombre entre 0 et 20.\n");
        printf("Entrez la note de examen (entre 0 et 20) : ");

        while (getchar() != '\n'); // Nettoyer le tampon d'entrée en cas d'entrée non numérique
    }

     printf("\nAnalyse mathematique 1 :\n");
    printf("Entrez la note de controle continue : ");
    while (scanf("%f", &cc_analyse1) != 1 || cc_analyse1 < 0 || cc_analyse1 > 20) {
        printf("Entree invalide. Veuillez entrer un nombre entre 0 et 20.\n");
        printf("Entrez la note de controle continue (entre 0 et 20) : ");
        // Nettoyer le tampon d'entrée en cas d'entrée non numérique
        while (getchar() != '\n');
    }

    // Entrée pour la note de examen dans la plage [0, 20]
    printf("Entrez la note de examen : ");
    while (scanf("%f", &examen_analyse1) != 1 || examen_analyse1 < 0 || examen_analyse1 > 20) {
        printf("Entree invalide. Veuillez entrer un nombre entre 0 et 20.\n");
        printf("Entrez la note de examen (entre 0 et 20) : ");

        while (getchar() != '\n'); // Nettoyer le tampon d'entrée en cas d'entrée non numérique
    }

    printf("\nTechnique d`expression ecrite :\n");
    // Entrée pour la note de examen dans la plage [0, 20]
    printf("Entrez la note de examen : ");
    while (scanf("%f", &moyenne_TEE) != 1 || moyenne_TEE < 0 || moyenne_TEE > 20) {
        printf("Entree invalide. Veuillez entrer un nombre entre 0 et 20.\n");
        printf("Entrez la note de examen (entre 0 et 20) : ");

        while (getchar() != '\n'); // Nettoyer le tampon d'entrée en cas d'entrée non numérique
    }
    moyenne_ISE = introduction_au_systeme_exploitation(cc_ISE, examen_ISE);
    moyenne_algebre = Algebre_1(cc_algebre, examen_algebre);
    moyenne_analyse1 = Analyse_Mathematique_1(cc_analyse1, examen_analyse1);
    moyenne_AO1 = Architecture_Des_Ordinateurs_1(cc_AO1, examen_AO1);
    moyenne_ASD1 = Algorithme_Et_Structure_De_Donnee_1(cc_ASD1, examen_ASD1);
    moyenne_BEW = Bureautique_et_web(cc_BEW, examen_ASD1);

    float somme_des_moyennes = moyenne_ISE + moyenne_BEW + moyenne_ASD1 + moyenne_AO1 + moyenne_algebre + moyenne_analyse1 + moyenne_TEE;
    float Moyenne_de_premier_semestre = somme_des_moyennes / 26;
    printf("La note de premier semestre est : %.2f\n",Moyenne_de_premier_semestre);
    if (Moyenne_de_premier_semestre >= 10) {
        printf("Félicitations ! Vous avez réussi le premier semestre.\n");
    } else {
        printf("Conseil : Travaillez dur pour le deuxieme semestre. Vous pouvez le faire !\n");
    }
    return 0;
}
