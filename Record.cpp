/*#include<iostream>
#include<tuple>
using namespace std;

int main(){
    tuple<int,string> marks(78,"Umesha");
    cout<<get<1>(marks)<<"->"<<get<0>(marks)<<endl;
    get<0>(marks)=98;
    cout<<get<1>(marks)<<"->"<<get<0>(marks)<<endl;
    tuple<int,string> mark;
    mark =make_tuple(23,"chamod");
    cout<<get<1>(mark)<<"->"<<get<0>(mark)<<endl;
    int x;
    string c;
    tie(x,c)=marks;
    cout<<c<<"->"<<x<<endl;
    tuple <int,string,int,string>t =tuple_cat(mark,marks);
    auto t2=tuple_cat(mark,marks);
    cout<<get<1>(t2)<<"->"<<get<2>(t2)<<endl;
    return 0;
}*/

#include<iostream>
using namespace std;
struct Record
{
    string Username;
    string get_Password(){
        return Password;
    }
    void set_Password( string Password){
        this ->Password =Password;
    }
    private:
        string Password;
    
};

int main(){
    Record Umesha;
    Umesha.Username="@UmeshaJayakody";
    Umesha.set_Password("1234");
    cout<<Umesha.Username<<"-->"<<Umesha.get_Password()<<endl;

    return 0;
}