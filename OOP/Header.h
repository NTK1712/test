#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <Windows.h>

using namespace std;

class Sort
{
private:
	int amount,speed;
	int* A;
public:
	Sort();
	Sort(int, int);
	~Sort();

	//1
	void SelectionSort();
	void SelectionSortDE();
	void Selection_Sort();
	//2
	void InterChangeSort();
	void InterChangeSortDE();
	void InterChange_Sort();
	//3
	void InsertionSort();
	void InsertionSortDE();
	void Insertion_Sort();
	//4
	void BinaryInsertionSort();
	void BinaryInsertionSortDE();
	void BinaryInsertion_Sort();
	//5
	void BubbleSort();
	void BubbleSortDE();
	void Bubble_Sort();
	//6
	void ShakerSort();
	void ShakerSortDE();
	void Shaker_Sort();
	//7
	void ShellSort();
	void ShellSortDE();
	void Shell_Sort();
	//8
	void CountingSort();
	void CountingSortDE();
	void Counting_Sort();

	//9
	void CountingSort(int);
	void CountingSortDE(int);
	void RadixSort();
	void RadixSortDE();
	void Radix_Sort();
	//10
	void heapify(int, int);
	void HeapSort();
	void heapifyDE(int, int);
	void HeapSortDE();
	void Heap_Sort();
	//11
	int partition(int , int);
	void QuickSort(int, int);
	int partitionDE(int , int);
	void QuickSortDE(int, int);
	void Quick_Sort();
	//12
	void MergeS(int, int, int);
	void MergeSort(int,int,int);
	void MergeSortDE(int, int, int);
	void Merge_Sort();


	int getMax();//trả về giá trị max trong mảng

	void input_manual();//nhập trực tiếp từng số
	void input_random();//nhập ngẫu nhiên 
	void input_from_file();//nhập qua file
	void input();

	void output();
	void outputFast();
	void outputNormal();
	void outputSlow();

	void start();
	void request();

	void chose();
	void menu();
};


