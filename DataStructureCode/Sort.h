#include<iostream>
using namespace std;

struct SqL
{
	int data[10];
	int length;
};

void Swap(SqL* L, int i, int j) {
	int temp = L->data[i];
	L->data[i] = L->data[j];
	L->data[j] = temp;
}

/*
�Ż����ð������
�ȶ��Ժ�
*/
void BubbleSort2(SqL* L) {
	int needSwap = 1;
	for (int i = 0; i < L->length-1 && needSwap; i++) {
		needSwap = 0;
		for (int j = 0; j < L->length - 1; j++) {
			if (L->data[j] > L->data[j + 1]) {
				Swap(L, j, j + 1);
				needSwap = 1;
			}
		}
	}
}

/*
ѡ������
�ȶ��Բ���
*/

void SelectSort(SqL* L) {
	for (int i = 0; i < L->length - 1; i++) {
		int minIndex = i;
		for (int j = i+1; j < L->length; j++) {
			if (L->data[minIndex] > L->data[j]) {
				minIndex = j;
			}
		}
		Swap(L, minIndex, i);
	}
}

/*
��������
*/

void InsertSort(SqL* L) {
	for (int i = 1; i < L->length; i++) {
		if (L->data[i] < L->data[i - 1]) {
			int temp = L->data[i];
			int j = i;
			while (j > 0 && temp < L->data[j-1])
			{
				L->data[j] = L->data[j - 1];
				j--;
			}
			L->data[j] = temp;
		}
	}
}