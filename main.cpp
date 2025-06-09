#include <iostream>
#include <chrono>
#include "nqueens.h"

int main() {
    // Point de départ de la mesure
    const auto start = std::chrono::high_resolution_clock::now();
    
    // Votre calcul à mesurer
    const auto result = nQueens(13);
    
    // Point de fin de la mesure
    const auto end = std::chrono::high_resolution_clock::now();
    
    // Calcul de la durée (en millisecondes)
    std::chrono::duration<double, std::milli> duration = end - start;
    
    // Affichage du résultat et du temps d'exécution
    std::cout << "Résultat : " << result << std::endl;
    std::cout << "Temps d'exécution : " << duration.count() << " ms" << std::endl;
    
    return 0;
}