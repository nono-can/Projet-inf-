#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

/*int main (void){
    livre_t livres[MAX_LIVRES];
    adherent_t adherents[MAX_ADHR];
    int n_livres = 0;
    int n_adhr = 0;
    char choix;
    char fich_livres[30];
    char fich_adhr[30];
    do {
    printf("Entrez le nom du fichier de livres charger: -> ");
    ...
    printf("Entrez le nom du fichier d'adhrents charger: -> ");
    ...
    } 
    while (!ouvrir_fichiers(fich_livres, fich_adhr));
    n_adhr = charger_adherents(adherents);
    n_livres = charger_livres(livres);
    while (choix != '4') {
        choix = lire_menu();
        switch (choix) {
            case '1':
            gestion_adhr(adherents, &n_adhr, livres, &n_livres);
            break;
            case '2':
            gestion_livres(livres, &n_livres);
            break;
            case '3':
            gestion_emprunts(adherents, n_adhr, livres, n_livres);
            break;
            case '4':
            fin_prog(adherents, n_adhr, livres, n_livres);
            break;
            default:
            break;
        }
    }
    return 0;
}
*/