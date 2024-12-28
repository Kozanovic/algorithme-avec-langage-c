/*  CL classe de voyageur.
	CT catégorie de voyageur.
	TN tarif normal.
	FA frait ajoutée.
	RM remise.
	Pbf prix de billet final.
	Taf tarif avec les frais ajoutées.
*/
#include <stdio.h>
int main() {
    int CL, CT;
    float TN, FA, RM,Pbf,Taf;
    printf("Entrez la classe de voyageur : ");
    scanf("%d", &CL);
    printf("Entrez la categorie : ");
    scanf("%d", &CT);
    printf("Entrez le tarif normal (TN) : ");
    scanf("%f", &TN);
    switch (CL) {
        case 1:
            FA = 0.25 * TN;
            break;
        case 2:
            FA = 0;
            break;
        case 3:
            FA = 0.3 * TN;
            break;
        default:
            printf("Classe du voyageur invalide.\n");
    }
    switch (CT) {
        case 1:
            RM = 0.5 * (TN + FA);
            break;
        case 2:
            RM = 0.25 * (TN + FA);
            break;
        case 3:
            RM = 0;
            break;
        case 4:
            RM = 0.15 * TN;
            break;
        default:
            printf("Catégorie du voyageur invalide.\n");
    }
    Taf = TN + FA;
    Pbf = Taf - RM;
    printf("Le prix du billet de train est : %.2f\n", Pbf);
}
