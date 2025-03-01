#include <stdio.h>
#include <stdlib.h>
#include "loader.h"

// Fonction pour charger une grille depuis un fichier texte
Grid load_grid_from_file(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        fprintf(stderr, "Erreur : Impossible d'ouvrir le fichier %s\n", filename);
        exit(EXIT_FAILURE);
    }

    int width, height;
    fscanf(file, "%d %d", &width, &height);  // Lire les dimensions de la grille
    Grid grid = create_grid(width, height);

    // Lire la grille ligne par ligne
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            char cell;
            fscanf(file, " %c", &cell);  // Lire un caractère
            if (cell == '.') {
                set_cell(&grid, i, j, true);  // Cellule ouverte
            }
        }
    }

    fclose(file);
    return grid;
}
