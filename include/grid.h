#ifndef GRID_H
#define GRID_H

#include <stdbool.h>

// Structure représentant une cellule de la grille
typedef struct {
    int row, col;   // Position dans la grille
    bool is_open;   // Indique si la cellule est ouverte ou bloquée
    bool visited;   // Indique si la cellule a été visitée (pour l'algorithme de percolation)
} Cell;

// Structure représentant la grille
typedef struct {
    int width, height;  // Dimensions de la grille
    Cell *cells;        // Tableau 1D représentant les cellules
} Grid;

// Fonctions pour manipuler la grille
Grid create_grid(int width, int height);
void free_grid(Grid *grid);
void print_grid(const Grid *grid);
void set_cell(Grid *grid, int row, int col, bool is_open);

#endif // GRID_H
