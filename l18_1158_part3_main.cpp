#include"Student.h"

void printArr(student *s,int size);
//void printDynArr(student **s,int size);
student* removeStudentsFromArr(student *s,int size,int size1);
void swap(student &a,student &b);
void sortArray(student s[],int size);

void main(){
	student StArr[3]={student(3,2),student(3,3),student(4,2.33)};
	StArr[0].addQuizScore(1);
	StArr[0].addQuizScore(4);
	StArr[0].addQuizScore(10);
	StArr[1].addQuizScore(10);
	StArr[1].addQuizScore(4);
	StArr[1].addQuizScore(9);
	StArr[2].addQuizScore(9);
	StArr[2].addQuizScore(8);
	StArr[2].addQuizScore(7);
	printArr(StArr,3);
	sortArray(StArr,3);
	printArr(StArr,3);
	
	system("pause");
}