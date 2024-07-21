#include<iostream>
#include<tuple> 
using namespace std;
int main()
{
	tuple <char,string,int> student_1;
    tuple <char,string,int> student_2;
    tuple <char,string,int> student_3;

	student_1 = make_tuple('a',"Umesha Jayakody",100);
    student_2 = make_tuple('b',"Piumi Jayakody",75);
    student_3 = make_tuple('c',"Shiranshi Priyadarshani",90);

	cout << get<0>(student_1) << " " << get<1>(student_1) << " " << get<2>(student_1)<< endl;;
    cout << get<0>(student_2) << " " << get<1>(student_2) << " " << get<2>(student_2)<< endl;;
    cout << get<0>(student_3) << " " << get<1>(student_3) << " " << get<2>(student_3)<< endl;;


	get<2>(student_1) = 50;
	get<2>(student_2) = 95;

	cout << get<0>(student_1) << " " << get<1>(student_1) << " " << get<2>(student_1)<< endl;;
    cout << get<0>(student_2) << " " << get<1>(student_2) << " " << get<2>(student_2)<< endl;;
    cout << get<0>(student_3) << " " << get<1>(student_3) << " " << get<2>(student_3)<< endl;;

	return 0;
}
