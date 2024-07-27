#include<iostream>
using namespace std;
// we achiee this using somthing  called a class

class student
{
    public:

     string name;
    int mids;
    float ends;
    bool pre_abs;

    void display_calculate_marks()
    {
        float total_marks;

        total_marks = mids*0.5 + ends* 0.75;

        cout<<"The marks of"<<name<<"is"<<total_marks;
    }

    void calculate_fail_probabilyty()
    {
        if(edns<=10) cout<<"yesh this student need to attend the same class for one more year" ;

    }
};

class vhicle
{

    public:

    string car_name;
    string tyre_name;
    int number_of_tyres;
    int number_of_seats;
    

};
int main()
{
    // there are a class of 30 students and each student has the following data associated with him :

   
    student a,b,c;
    // int d, e, f;

    // vhicle hyundai, suzuki, ferrari;
    //  a b c over here are objects of a perticular class

    a.name = "Rohit";
    a.mids = 50;
    a.ends = 99.5;
    a.pre_abs = 1;

    vhicle b;

    b.car_name = "verna";
    b.number_of_seats = 2;
    b.number_of_tyres = 4;
    b.tyre_name = "michellen"
}