cmake_minimum_required(VERSION 3.23)
project(FSOFT_Projeto)

set(CMAKE_CXX_STANDARD 14)

add_executable(FSOFT_Projeto main.cpp headers/Produto.h sources/Produto.cpp headers/Fornecedor.h sources/Fornecedor.cpp headers/Armazem.h sources/Armazem.cpp headers/Contabilidade.h sources/Contabilidade.cpp headers/Funcionario.h sources/Funcionario.cpp headers/Teclado.h sources/Teclado.cpp headers/Monitor.h sources/Monitor.cpp headers/Rato.h sources/Rato.cpp headers/PlacaMae.h sources/PlacaMae.cpp headers/PlacaGrafica.h sources/PlacaGrafica.cpp)
