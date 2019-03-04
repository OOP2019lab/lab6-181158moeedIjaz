#include<iostream>
using namespace std;

class student{
	static int counter;
	int ID;
	float*quizScore;
	int quizCapacity;
	int quizTaken;
	float GPA;
public:
	student();
	student(int capacity,float gpa);
	student(const student& s);
	~student();
	void addQuizScore(float score);
	void setGPA(float gpa);
	float getGPA()const;
	void print()const;
	bool compare(student dummy);
	void updateScore(int qnum,float score);
};



