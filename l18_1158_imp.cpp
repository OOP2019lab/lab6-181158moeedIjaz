#include"Student.h"

int student::counter=0;

student::student(){
	counter++;
	ID=counter;
	quizCapacity=3;
	quizTaken=0;
	quizScore=new float[quizCapacity];
	GPA=-1;
}
student::student(int capacity,float gpa){
	counter++;
	ID=counter;
	quizCapacity=capacity;
	quizTaken=0;
	quizScore=new float[quizCapacity];
	GPA=gpa;

}
student::student(const student& s){
	ID=s.ID;
	quizCapacity=s.quizCapacity;
	quizTaken=s.quizTaken;
	GPA=s.GPA;
	quizScore=new float[quizCapacity];
	for(int i=0;i<quizTaken;i++){
		quizScore[i]=s.quizScore[i];
	}
}
student::~student(){
	delete[]quizScore;
}
void student::addQuizScore(float score){
	if(quizTaken<quizCapacity){
	quizScore[quizTaken]=score;
	quizTaken++;
	}
	else{
		cout<<"No space to add quiz score"<<endl;
	}
}
void student:: setGPA(float gpa){
	GPA=gpa;

}
float student::getGPA()const{
	return GPA;
}
void student::print()const{
	cout<<endl<<"Student ID : "<<ID<<endl;
	cout<<"GPA : "<<GPA<<endl;
	cout<<"Quizes Taken : "<<quizTaken<<endl;
	for(int i=0;i<quizTaken;i++){
		cout<<"Quiz "<<i+1<<" score : "<<quizScore[i]<<endl;
	}
}
bool student::compare(student dummy){
	if(GPA>dummy.GPA){
	return true;
	}
	else{
	return false;
	}

}
void student:: updateScore(int qnum,float score){
	if(qnum<quizTaken){
		quizScore[qnum-1]=score;
	}
	else{
		cout<<"Quiz "<<qnum<<" does not exist"<<endl;
	}

}
void printArr(student *s,int size){
	for(int i=0;i<size;i++){
		s[i].print();
	}
}
//void printArr(student **s,int size){
//	for(int i=0;i<size;i++){
//		s[i]->print();
//	}
//}
student* removeStudentsFromArr(student s[],int size,int &size1){
	int count=0;
	for(int i=0;i<size;i++){
		if(s[i].getGPA()>2.0){
			count++;
		}
	}
	student* temp=new student[count];
	for(int i=0,a=0;i<size;i++){
		if(s[i].getGPA()>2.0){
			temp[a]=s[i];
			a++;
		}
	}
	size1=count;
	return temp;
	
}
void swap(student &a,student &b){
	student temp;
	temp=a;
	a=b;
	b=temp;

}
void sortArray(student  s[],int size){
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-1;j++){
			if(s[j].getGPA()<s[j+1].getGPA()){
				swap(s[j],s[j+1]);
			}
		}
	}
}
