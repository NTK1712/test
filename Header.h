#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <Windows.h>
//thư viện để thực hiện chức năng xuất đc tiếng việt
#include<io.h>
#include<fcntl.h>
using namespace std;
void resizeConsole(int x, int y);//điều chỉnh kích cỡ khung console
class Sort
{
private:
	int amount,speed;
	int* A;
public:
	Sort();
	Sort(int, int);
	~Sort();
	int getSpeed(); // lấy giá trị biến speed
	void setSpeed(int x); // cài đặt giá trị biến speed
	void gotoXY(int, int);
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
	void counting_output_table(int, int*);
	void counting_output(int, int*);
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

	void Speed();//sử lý chon tốc độ
	int getMax();//trả về giá trị max trong mảng

	void input_manual();//nhập trực tiếp từng số
	void input_random();//nhập ngẫu nhiên 
	void input_from_file();//nhập qua file
	void input();

	void output();

	void start();//bắt đầu, tiếp tục
	void request();//nhận diện người dùng nhấn Spacebar để tạm dừng chương trình

	void chose();
	void menu();

	void output(int);

};


