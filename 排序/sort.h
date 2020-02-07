#pragma once
#include <iostream>
using namespace std;

//Ã°ÅİÅÅĞò
void bubbleSort(int *arr,int n);
//Ñ¡ÔñÅÅĞò
void selectionSort(int* arr, int n);
//²åÈëÅÅĞò
void insertSort(int* arr, int n);
//Ï£¶ûÅÅĞò
void shellSort(int* arr, int n);
//¿ìËÙÅÅĞò
void quickSort(int* arr, int n);
//¹é²¢ÅÅĞò
void mergeSort(int* arr, int n);
void merge(int* arr, int left, int mid, int right);

//Êä³ö
void print(int* arr, int n);