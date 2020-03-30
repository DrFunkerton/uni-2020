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

void makeZeros (int coords[MAX_DIM], int dim, int select) {
    for (int i = 0; i < dim; i++) {
        coords[i] = select;
    }
    
}

int checkMine(int coords[MAX_DIM], int num_mines, int ** mined_cells) {
    int checker = 1;

    for (int i = 0; i < num_mines; i++) {
        if (coords == mined_cells[i]) {
            checker = 0;
            return checker;
        }
    }

    return checker;
}

void makeRow(cell_t * start, int size, int dimension, int num_mines, int ** mined_cells) {
    dimension--;
    for (int i = 0; i < size; i++) {
        cell_t * next = makeCell();
        next->coords[dimension] = next -> coords[dimension]++;
        if (checkMine(next->coords, num_mines, mined_cells)) {
            next->mined = 1;
        }
    }
}

void init_game(struct cell * game, int dim, int * dim_sizes, int num_mines, int ** mined_cells) {
    cell_t * initialCell = makeCell();
    makeZeros(initialCell -> coords, dim, 0);
    for (int i = 0; i < dim; i++) {
        makeRow(initialCell, dim_sizes[i], i, num_mines, mined_cells);

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
    int **minedCell = {{1, 3}, {2, 2}};

    init_game(gameStart, 1, ptr, 1, minedCell);
    return 0;
}
