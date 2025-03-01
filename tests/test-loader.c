#include <stdio.h>
#include "grid.h"
#include "loader.h"

int main() {
    // Charger la grille depuis un fichier
    Grid grid = load_grid_from_file("data/grid_test.txt");

    // Affichage de la grille chargée
    printf("Grille chargée depuis le fichier :\n");
    print_grid(&grid);

    // Libération de la mémoire
    free_grid(&grid);

    return 0;
}
