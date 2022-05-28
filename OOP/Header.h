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
	int binarySearch(int , int , int);
	void BinaryInsertionSort();
	int binarySearchDE(int, int, int);
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

	//8
	/*void CountingSort(int A[], int n);
	void CountingSort(int A[], int n, int div);
	//9
	int getMax(int A[], int n);//lấy giá trị lớn nhất trong mảng
	void RadixSort(int A[], int n);*/
	//10
	void heapify(int, int);
	void HeapSort();
	void heapifyDE(int, int);
	void HeapSortDE();
	void Heap_Sort();
	//11
	int partition(int low, int high);
	void QuickSort();
	//12
	void Merge(int left, int mid, int right);
	void MergeS(int left, int right);
	void MergeSort();



	void input_manual();//nhập trực tiếp từng số
	void input_random();//nhập ngẫu nhiên 
	void input_from_file();//nhập qua file
	void input();

	void chose();
	void menu();
	int getMax();//trả về giá trị max trong mảng
	void output();
	void outputFast();
	void outputNormal();
	void outputSlow();

	void request();

	void start();

};


