#pragma once
#include <iostream>
using namespace std;

//ð������
void bubbleSort(int *arr,int n);
//ѡ������
void selectionSort(int* arr, int n);
//��������
void insertSort(int* arr, int n);
//ϣ������
void shellSort(int* arr, int n);
//��������
void quickSort(int* arr, int n);
//�鲢����
void mergeSort(int* arr, int n);
void merge(int* arr, int left, int mid, int right);

//���
void print(int* arr, int n);