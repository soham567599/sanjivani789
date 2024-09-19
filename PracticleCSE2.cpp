#include<iostream>
using namespace std;
class students{
private:
int scores[5];
public:
void input(){
for(int i=0;i<5;++i){
cin>>scores[i];
}
}int calculateTotalscore() const{
int totalScore=0;
for(int i=0;i<5;++i){
totalScore += scores[i];
}
return totalScore;}
};
int main(){
students student;
cout<<"Enter 5 Exam score";
student.input();
cout<<"Total Score:"<<student.calculateTotalscore()<<endl;
return 0;
}
