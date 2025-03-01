#include <stdio.h>
#include <stdlib.h>
#include "grid.h"

// Fonction pour créer une grille vide (initialement toutes les cellules sont bloquées)
Grid create_grid(int width, int height) {
    Grid grid;
    grid.width = width;
    grid.height = height;
    grid.cells = malloc(width * height * sizeof(Cell));

    if (!grid.cells) {
        fprintf(stderr, "Erreur d'allocation mémoire pour la grille !\n");
        exit(EXIT_FAILURE);
    }

    // Initialisation des cellules
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            int index = i * width + j;
            grid.cells[index].row = i;
            grid.cells[index].col = j;
            grid.cells[index].is_open = false;  // Par défaut, toutes les cellules sont bloquées
            grid.cells[index].visited = false;
        }
    }
    return grid;
}

// Libère la mémoire utilisée par la grille
void free_grid(Grid *grid) {
    free(grid->cells);
    grid->cells = NULL;
}

// Modifie l'état d'une cellule (ouverte ou bloquée)
void set_cell(Grid *grid, int row, int col, bool is_open) {
    if (row < 0 || row >= grid->height || col < 0 || col >= grid->width) {
        fprintf(stderr, "Erreur : Indice hors limites !\n");
        return;
    }
    grid->cells[row * grid->width + col].is_open = is_open;
}

// Affiche la grille dans la console
void print_grid(const Grid *grid) {
    for (int i = 0; i < grid->height; i++) {
        for (int j = 0; j < grid->width; j++) {
            int index = i * grid->width + j;
            printf("%c ", grid->cells[index].is_open ? '.' : '#');  // . pour ouvert, # pour bloqué
        }
        printf("\n");
    }
}
