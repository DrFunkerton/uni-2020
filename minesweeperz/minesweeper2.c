#include "minesweeper.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

cell_t *makeCell()
{
    cell_t *placeCell;
    placeCell = malloc(sizeof(cell_t));
    placeCell->mined = 0;
    placeCell->selected = 0;
    placeCell->num_adjacent = 0;
    placeCell->adjacent[MAX_ADJACENT];
    placeCell->coords[MAX_DIM];
    placeCell->hint = 0;
    return placeCell;
}

void * pushEnd() {

}

int * makeZeros(int coords[MAX_DIM], int dim) {
    for (int i = 0; i < dim; i++) {
        coords[i] = 0;
    }
    return coords;
}

void makeRow(cell_t * start, int size, int dimension) {
    for (int i = 0; i < size; i++) {
        cell_t * next = makeCell;
        next -> coords[size] = 
    }
}

void init_game(struct cell * game, int dim, int * dim_sizes, int num_mines, int ** mined_cells) {
    cell_t * initialCell = makeCell();
    initialCell -> coords[MAX_DIM] = makeZeros(initialCell -> coords, dim);
    for (int i = 0; i < dim; i++) {
        makeRow(initialCell, dim_sizes[i], i);

    }

    return;
}

int select_cell(struct cell * game, int dim, int * dim_sizes, int * coords) {
    return 0;
}

int main()
{
    cell_t *gameStart;
    int dim[2] = {0, 0};
    int *ptr = &dim[2];
    int minedCell[2] = {0, 1};


    init_game(gameStart, 1, ptr, 1, &minedCell);
    return 0;
}
