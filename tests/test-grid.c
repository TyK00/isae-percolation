#include <stdio.h>
#include "grid.h"

int main() {
    // Création d'une grille 10x8
    Grid grid = create_grid(10, 8);

    // Ouvrir quelques cellules
    set_cell(&grid, 0, 1, true);
    set_cell(&grid, 2, 3, true);
    set_cell(&grid, 5, 5, true);
    set_cell(&grid, 7, 9, true);

    // Affichage de la grille
    printf("Grille de test :\n");
    print_grid(&grid);

    // Libération de la mémoire
    free_grid(&grid);

    return 0;
}
