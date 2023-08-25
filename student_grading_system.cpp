#include<iostream>
using namespace std;
char grade(int marks){
 if(marks>=80) cout<<"grade = A"<<endl;
 else if(marks>=70 && marks<80) cout<<"grade = B"<<endl;
 else if(marks>=60 && marks<70) cout<<"grade = C"<<endl;
 else if(marks>=50 && marks<60) cout<<"grade = D"<<endl;
 else if(marks>=40 && marks<50) cout<<"grade = E"<<endl;
 else if(marks<40) cout<<"grade = F";
}
 void averageGrade(){

 }
int main(){
    int x;
    cout<<"enter number of students : ";
    cin>>x;
    string name;
    for(int student=1;student<=x;student++){
        int  marks=0,y;
    cout<<"student name : ";
    cin>>name;
    cout<<"enter marks in maths subject: ";
    cin>>y;
    marks+=y;
    cout<<"enter marks in english subject: ";
    cin>>y;
    marks+=y;
    cout<<"enter marks in physics subject: ";
    cin>>y;
    marks+=y;
    cout<<"enter marks in chemistry subject: ";
    cin>>y;
    marks+=y;
    marks/=4;
    cout<<grade(marks);  
    }
}    