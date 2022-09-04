//comments here
#include <iostream>
//to use the math functions include the cmath header
using namespace std;

int main()
{
    cout<< "Lorem ipsum undio condo fitrt gytihy \n";
    cout<< "this is a new line" << endl;
    cout<< "this is the last line"<< endl;
    //Data types
    int obi = 150;
    cout<< max(5,90)<<endl;
    double decimal = 1.23456;
    // double stores up to 15 decimal digit
    // float stores 7 decimal digit
    bool isActive = true;
    string check = "obi is active today and got a total of ";
    char counter = 'R';
    cout<< check << obi << endl;
    cout<< obi<<endl;
    cout<< decimal<<endl;
    cout<< counter<<endl;
    int x= 50, y=46, z=89;
    cout << z - y + x<<endl;
    x=y=z=30;
    cout<<x+y+z;
    //this is a corument
    /* this is also a corument*/
    //identifiers
    /*
    Names can contain letters, digits and underscores
    Names must begin with a letter or an underscore (_)
    Names are case sensitive (myVar and myvar are different variables)
    Names cannot contain whitespaces or special characters like !, #, %, etc.
    Reserved words (like C++ keywords, such as int) cannot be used as names
    */
    //constants
    const int r = 25;
    cout<< r <<endl;
    //taking inputs
    string xx;
    cout<< "Enter your name: ";
    cin>> xx;
    cout<< "Your name is " << xx <<endl;
    //Project 1: Simple Calculator
    //take two numbers from user
    int num1;
    int num2;
    cout<< "Enter first number: ";
    cin>>num1;
    cout<< "Enter second number: ";
    cin>> num2;
    cout<< xx << " your result is " << num1 + num2<<endl;
    //scientific calculations
    float xxx = 32e5;
    double yyy = 23E3;
    cout<< xxx + yyy<<endl;
    cout<< isActive<<endl;
    char a = 66, b=65,c=67;
    cout<< a<<b<<c<<endl;
    //Operators
    //Arithmetic operators
    cout<< x-y<<endl;
    cout<< x+y<<endl;
    cout<<x*y<<endl;
    cout<< 50%5<<endl;
    x+=70;
    y-=43;
    //*=, /=, %=
    cout<< ++x<<endl;
    cout<<--x<<endl;
    cout<<y/x<<endl;
    // Comparison operators
    cout<<(x==y)<<(x>=y)<<(x<=y)<<(x>y)<<(x<y)<<(x!=y)<<endl;
    //Logical operator
    cout<< (!(x==y))<<(x>y||x<y)<<(x&&y)<<endl;
    //Strings
    //concatnation
    string firstname;
    cout<< "Firstname: ";
    cin>> firstname;
    string lastname;
    cout<< "Lastname: ";
    cin>> lastname;
    string fullname = firstname + " " + lastname;
    cout<< "New Entry: "+fullname<<endl;
    cout<< firstname.length()<<endl;
    cout<< firstname.append(lastname)<<endl;
    // do not use the + operator to concate a number and a string
    //Accessing Strings
    firstname[1]='T';
    cout<< firstname<<endl;
    //when mixing input calls such as >> and getline always clear cin before using getline()for input
    cin.clear();
    cin.sync();
    string songs;
    cout<< "List your favorite songs sepsrated by comma: ";
    getline (cin, songs);
    cout<< songs<<endl;
    //math function
    //sqrt()
    //max()
    //min()
    //round()
    //log()
    //Conditionals
    //'if, else if, else
    if(x<y){cout<<"x is greater than y"<<endl;}
    else if(x>z){cout<<"Affirmative";}
    else{cout<<"Negative"<<endl;}
    //ternary operator
    int time = 22;
    string result = (time < 20) ? "Goodday" : (time > 20 && time < 22) ? "Good Evening" : "Good Night";
    cout<<result<<endl;
    time = 19;
    result = (time < 20) ? "Goodday" : (time > 20 && time < 22) ? "Good Evening" : "Good Night";
    cout<<result<<endl;
    time = 21;
    result = (time < 20) ? "Goodday" : (time > 20 && time < 22) ? "Good Evening" : "Good Night";
    cout<<result<<endl;
    //switch statement
    switch(time){
        case 21:
            result = (time < 20) ? "Goodday" : (time > 20 && time < 22) ? "Good Evening" : "Good Night";
            cout<< result<<endl;
            break;
        case 20:
            result = (time < 20) ? "Goodday" : (time > 20 && time < 22) ? "Good Evening" : "Good Night";
            cout<<result<<endl;
            break;
        case 19:
            result = (time < 20) ? "Goodday" : (time > 20 && time < 22) ? "Good Evening" : "Good Night";
            cout<<result<<endl;
            break;
        default:
            cout<<"Error"<<endl;
    }
    //loops
    //while loop
    int i = 0;
    while(i<20){
            if(i==12){
                break;
            }
        cout<< i<<endl;
        i++;
    }
    //do/while
    int p = 0;
    do{
        cout << p <<endl;
        p++;
    }
    while(p<=5);
    // for loop
    string ash;
    for(int t = 0; t<20; t++){
        ash += "*";
        cout<<ash<<endl;
        if(t==15){
            t++;
            continue;
        }
    }
    //break and continue
    return 0;
}
