/*
Nome: João Vitor do Prado Rosa Constantino
R.A.: 02706407
Turma: AS61B
Data: 04/02/2025

FIX09_EX06: Construa uma função que recebe 2 (duas) datas como parâmetro (struct) e retorne um inteiro representando a diferença (em dias) entre as duas datas. Faça um programa em Linguagem C que demostre o uso desta função.
*/

#include <stdio.h>
#include <stdbool.h>

struct Data
{
    int dia;
    int mes;
    int ano;
};

typedef struct Data Data;

