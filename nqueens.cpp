//
// Created by xavier on 08/06/25.
//

#include "nqueens.h"

#include <algorithm>
#include <format>
#include <set>
#include <vector>

int nQueens(const int nombreReines) {
    if (nombreReines <= 0)
        return 0;

    std::vector board(nombreReines, -1);
    return processeNqueens(board, 0, nombreReines);
}

bool isValable(const std::vector<int> &board, const int column) {

    for (int i = column - 1 ; i >= 0 ; i--) {
        if (board.at(i) == board.at(column)) {
            return false;
        }
    }

    int decal = 1;
    while (column - decal >= 0) {
        if (board.at(column - decal) == board.at(column) + decal || board.at(column - decal) == board.at(column) -
            decal) {
            return false;
        }
        decal++;
    }

    return true;
}

int processeNqueens(std::vector<int> &board, const int column, const int nbReines) {
    if (column == nbReines) {
        return 1;
    }
    int somme = 0;

    for (int i = 0 ; i < nbReines ; i++) {

            board.at(column) = i;
            if (isValable(board, column)) {
                somme += processeNqueens(board, column + 1, nbReines);
            }


    }
    return somme;
}
