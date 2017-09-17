#include <iostream.h>

	class person
{
	char * name;
	int age;
	int tel;
	public:
		person()
			{
				cout<<"this is person class!\n";
			}
	~person()
			{
				cout<<"the destructor of class person!\n";
			}		
};
	class student:public person
	{
		char * department;
		int score;
	public:
		student()
		{
			cout<<"this is a student class!\n";
		}
		~student()
		{
			cout<<"the destructor of student class!\n";
		}
	};
	class teacher:public person
	{
		char * name;
		char * style;
		int * salary;
	public:
		teacher()
		{
			cout<<"this is a teacher class!\n";
		}
		~teacher()
		{
			cout<<"the destructor of teacher class!\n";
		}
	};
		void main()
		{
			student a3;
			teacher b2;
		}

