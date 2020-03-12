cmake_minimum_required(VERSION 3.15)
project(Projeto C)

set(CMAKE_C_STANDARD 99)

add_executable(Projeto main.c Dados.c Dados.h Interface.c Interface.h logica.c logica.h)