#include<iostream>
using namespace std;
class student
{       
    public:
    int student_id;
    int student_class;
    string student_section;
   
    student()
    {
        cout<<"enter the students id,class and section"<<endl;
        cin>>student_id>>student_class>>student_section;

    }
        void output()
    {
        cout<<student_id<<student_class<<student_section<<endl;
    }
};
class teacher
{   public:
    int teacher_id;
    int teacher_class;
    string teacher_subject;
    
    teacher()
    {
        cout<<"enter the teachers id,class and subject"<<endl;
        cin>>teacher_id>>teacher_class>>teacher_subject;
    }
        void output()
    {
        cout<<teacher_id<<teacher_class<<teacher_subject<<endl;
    }
    

};
class school: public student,teacher
{
    public:
        void output()
    {
      
    }
};
int main()
{
    teacher t;
    school s;
    s.teacher::output();
}