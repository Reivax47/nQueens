cmake_minimum_required(VERSION 3.31)
project(nQueens)

set(CMAKE_CXX_STANDARD 20)

# Activer les tests
enable_testing()

# Ajouter Google Test
include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
FetchContent_MakeAvailable(googletest)

# Créer la bibliothèque principale
add_library(nQueensLib nqueens.cpp nqueens.h)

# Créer l'exécutable principal
add_executable(nQueens main.cpp)
target_link_libraries(nQueens PRIVATE nQueensLib)

# Créer l'exécutable de test
add_executable(nQueens_test test_nqueens.cpp)
target_link_libraries(nQueens_test PRIVATE nQueensLib GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(nQueens_test)