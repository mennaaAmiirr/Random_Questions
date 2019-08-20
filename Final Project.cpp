#include<fstream>
#include"std_lib_facilities.h"

int main ()
{
	int v;
fstream questions,answers;
ofstream a,b,c,d,e; //quiz
ofstream a1,b1,c1,d1,e1; //quiz answers

questions.open("questions.txt");
answers.open("answers.txt");

a.open("quiz1.txt");
a1.open("answer1.txt");

b.open("quiz2.txt");
b1.open("answer2.txt");

c.open("quiz3.txt");
c1.open("answer3.txt");

d.open("quiz4.txt");
d1.open("answer4.txt");

e.open("quiz5.txt");
e1.open("answer5.txt");

string q[20]; //array for questions
string ans[20]; //array for answers

for (int i=0 ; i<20 ; ++i)
{
	if(questions.is_open())
		getline(questions,q[i]);
}

for (int i=0 ; i<20 ; ++i)
{
	if(answers.is_open())
		getline(answers,ans[i]);
}

for(int i=0 ; i<5 ; ++i) //1st random quiz with answers
{
	if(questions.is_open(),answers.is_open(),a.is_open(),a1.is_open())

		v = rand () % 20 + 1 ;

	a<<q[v]<<'\n';
	a1<<ans[v]<<'\n';
}
for (int i=0 ; i<5 ; ++i )  //2st random quiz with answers
{
	if(questions.is_open(),answers.is_open(),b.is_open(),b1.is_open())

		v = rand () % 20 + 1 ;
	b<<q[v]<<'\n';
	b1<<ans[v]<<'\n';
}

for (int i=0 ; i<5 ; ++i ) //3st random quiz with answers
{
	if(questions.is_open(),answers.is_open(),c.is_open(),c1.is_open())
		v = rand () % 20 + 1 ;
	c<<q[v]<<'\n';
	c1<<ans[v]<<'\n';

}

for (int i=0 ; i<5 ; ++ i) //4st random quiz with answers
{
	if(questions.is_open(),answers.is_open(),d.is_open(),d1.is_open())
		v = rand () % 20 + 1 ;
	d<<q[v]<<'\n';
	d1<<ans[v]<<'\n';
}

for (int i=0 ; i<5 ; ++i)  //5st random quiz with answers
{
	if(questions.is_open(),answers.is_open(),e.is_open(),e1.is_open())
		v = rand () % 20 + 1 ;
	e<<q[v]<<'\n';
	e1<<ans[v]<<'\n';

}

questions.close();
answers.close();
a.close();
a1.close();
b.close();
b1.close();
c.close();
c1.close();
d.close();
d1.close();
e.close();
e1.close();
}