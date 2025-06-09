#ifndef NQUEENS_H
#define NQUEENS_H

#include <set>
#include <vector>

int nQueens(int nombreReines);
bool isValable(const std::vector<int>& board, int column);
int processeNqueens(std::vector<int>& board, int column, int nbReines, std::set<int> & dejaJoue);

#endif //NQUEENS_H