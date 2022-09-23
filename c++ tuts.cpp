//comments here
#include <iostream>
#include <fstream>
//to use the math functions include the cmath header
using namespace std;

//Functions
    //Dont define function insyd the main function
    //functions can be called with default values using = sign
    void myFunction(string fname="Mire", int age=22){
    cout<<fname<<" is "<<age<<" years old"<<endl;
    }
    int summation(int a,int b,int c){
        return a+b+c;
        }
        //use references as parameters in functions when arguments will be changed
        void swapFunc(int &x, int &y){
            int z = x;
            x=y;
            y=z;
        }
        //passing arrays as function
        void arrayTime(int numbs[5])
        {
            for(int i=0; i<(sizeof(numbs)-sizeof(int)); i++)
            {
                if(numbs[i]%2 == 0)
                {
                    cout<<numbs[i]<<endl;
                }
            }
        }
        //Function Overloading
        //INstead of defining two functions that do the same thing just overload one so long as they have different datatypes.
        int plusFunc(int x, int y)
        {
            return x+y;
        }
        double plusFunc(double x, double y)
        {
            return x+y;
        }
        //recursion
        int sum(int c)
        {
            if(c>0)
            {
               return c+sum(c-1);
            }else{
                return 0;
            }
        }

        //classes are also declared outside the main function
        class myClass
        {
        public:
            int thatNum;
            string namea;
            //class method
            //methods are class functions
            //theres inside class and outside class definition
            //inside class definition
            void myMethod()
            {
                printf("Inside class function definition!\n");
            };
            //outside function
            string newMethod(string name);
            //access class functions just like attributes
        };

        string myClass::newMethod(string name)
        {
            cout<< "Outside Class function definition" <<endl;
            return name;
        }

        class laptop
        {
        public:
                string brand;
                string price;
                string model;
                //Constructors (Special class functions same name as class automatically called when objects are defined and is always public)
                //constructors can also be defined inside and outside classes
                laptop(string x, string y, string z)
                {
                    brand =x;
                    price="$"+z;
                    model = y;
                }
        };
        //then accessed within the main function like the struct.
        //Access specifiers
        //there are three specifiers, public(can be accessed and viewd from outside the class), private(cannot be accesed or viewd from outsyd the class) and Protected(cannot be accessed or viewd but can be accessed from an inherited class.)
        class access
        {
        public:
            int x;
            int y;
        private:
            int d;
            int f;
            //Encapsulaiton(making sure users dont see sensitive data, uses get and set public method to set and get the private attributes)
        public:
            int setd(int s)
            {
                d=s;
            }
            int getd()
            {
                return d;
            }
        };
        //Inheritance(a child class(derived) can inherit attributes of the parent class(Base))
        // this is where the protected access specifier is used as it can be accesed by only drived classes
        //Base class
        class electric
        {
        public:
            bool isElectric = false;
        };
        class inherit
        {
        public:
            void honk()
            {
                cout<< "TUUT TUUUUT"<<endl;
            }
            string brand = "BMW";
        };
        //Derived class
        class child: public inherit
        {
        public:
            string model = "X6";
        protected:
            string price;
        };
        //Mulitilevel inheritance && multiple inheritance(comma separated list)
        class grandchild: public child, public electric
        {
        public:
            int year = 2013;
            void setPrice(string s)
            {
                price="$"+s;
            }
            string getPrice()
            {
                return price;
            }
        };
        //Polymorphism(Having  many used mostly with inheritance)
        class Animal
        {
        public:
            void animalSound()
            {
                cout<< "Animals make sound"<<endl;
            }
        };
        class Dog: public Animal
        {
        public:
            void animalSound()
            {
                cout<< "the dog barks"<<endl;
            }
        };
        class Pig: public Animal
        {
        public:
            void animalSound()
            {
                cout<< "the pig oinks"<<endl;
            }
        };
        class Cat: public Animal
        {
        public:
            void animalSound()
            {
                cout<< "the cat meows"<<endl;
            }
        };
    //functions are declared outside/before the main function and can be defined after the main() function
int main()
{
    Animal animal;
    animal.animalSound();
    Dog myDog;
    myDog.animalSound();
    Cat myCat;
    myCat.animalSound();
    grandchild newCar;
    newCar.honk();
    newCar.setPrice("25000");
    cout<< newCar.brand<< " "<< newCar.model<< " "<< newCar.year <<" "<< newCar.isElectric<<" "<< newCar.getPrice()<<endl;
    access test;
    test.setd(5);
    cout<<test.getd()<<endl;
    test.x=6;
    myClass declaree;
    declaree.myMethod();
    laptop lappy1("Dell","Alienware", "900");
    cout<<lappy1.brand<< " " <<lappy1.model<< " "<<lappy1.price<<endl;
    cout<<declaree.newMethod("ifeanyi");
    printf("0x424\n");
    printf("the new method \n");
    printf("is this a new line \n");
    printf("\t Let's tab this \n");
    cout<<sum(10)<<endl;
    int numb[5]={12,3,34,45,56};
    arrayTime(numb);
    int first = 12;
    int second = 89;
    cout<< first <<" "<<second<<endl;
    swapFunc(first, second);
    //swaping the memory address changes the position of the values
    cout<< first <<" "<< second<<endl;
    cout<<plusFunc(2,4)<<endl;
    cout<<plusFunc(2.222, 5.34)<<endl;
    cout<< summation(3,2,7)<<endl;
    myFunction();
    myFunction("Miracle",20);
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
    //Array and Structure
    string alpha[2][4] = {
    {"A","B","C","D"},
    {"F","G","H","I"}
    };
    for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 4; j++) {
      cout << alpha[i][j] << "\n";
    }
  }
    int myNums[6]= {1,2,4,5,7,8};
    string cars[5]={"Toyota", "Tesla", "Acura", "Audi", "Honda"};
    char lets[4]={'r','e','y','i'};
    cout<< myNums[5]<<endl;
    for(int i=0; i<sizeof(cars)/sizeof(string); i++){
    cout<< i+1 << ":"<<cars[i]<<endl;
    };
    cout<< cars[4]<<endl;
    cout<< lets[3]<<endl;
    //array size can be omitted but problem arise when u need to add more than initially expected without overwriting existing values
    int numth[5] ={1,2,4,5};//will always be sized 4
    numth[4]=7;
    for(int i=0; i<sizeof(numth)/sizeof(int); i++){
    cout<< i+1 << ":"<<numth[i]<<endl;
    };
    cout<< numth[4]<<endl;
    //STructures
    struct car{
        string model;
        int year;
        string brand;
        string price;
    };
    car Car1;
    Car1.brand = "Acura";
    Car1.model = "MDX";
    Car1.year = 2022;
    Car1.price = "$50000";
    car Car2;
    Car2.brand = "Tesla";
    Car2.model = "Model S";
    Car2.year = 2022;
    Car2.price = "$104490";
    car Car3;
    Car3.brand = "BMW";
    Car3.model = "X6-M50i";
    Car3.year = 2022;
    Car3.price = "$87000";
    car Car4;
    Car4.brand = "Acura";
    Car4.model = "ZDX";
    Car4.year = 2013;
    Car4.price = "$26000";
    car Car5;
    Car5.brand = "Honda";
    Car5.model = "Crosstour";
    Car5.year = 2015;
    Car5.price = "$29000";
    cout<<Car1.brand <<" "<< Car1.model<<" "<< Car1.year<< " "<< Car1.price<<endl;
    cout<<Car2.brand <<" "<< Car2.model<<" "<< Car2.year<< " "<< Car2.price<<endl;
    cout<<Car3.brand <<" "<< Car3.model<<" "<< Car3.year<< " "<< Car3.price<<endl;
    cout<<Car4.brand <<" "<< Car4.model<<" "<< Car4.year<< " "<< Car4.price<<endl;
    cout<<Car5.brand <<" "<< Car5.model<<" "<< Car5.year<< " "<< Car5.price<<endl;
    //References
    //creating reference makes code use less memory by sharing memory among referenced variables
    //create reference
    string food = "pizza";
    string &meal = food;
    //access memory address with referencing
    cout<< &meal<<endl;
    cout<<&food<<endl;
    //POinters
    //pointers store the memory address of a variable as its value
    int randint = 5;
    int* rtr = &randint;
    cout << &randint<<endl;
    cout<< rtr<<endl;
    //* is used to dereference
    cout<< *rtr<<endl;
    //changing the value of a dereferenced variable also changes the original variable
    *rtr = 109;
    cout<< randint<<endl;
    //Exceptions
    try{
        int age;
         age = 12;
        if(age>=18)
        {
            cout<< "Access Granted - you are old enough";
        }else{
            throw(age);
        }
    }
    catch(int myNum)
    {
        cout << "Access Denied - you must be at least 18 years old"<< endl;
        cout << "Age is "<<myNum;
    }
    //Working with files first include filestream
    //ofstream writes and creates file
    ofstream newFile("trial.txt");
    newFile<< "Just trying to create a text file from console with C++.";
    newFile.close();
    string myText;
    //ifstream reads file.
    ifstream readFile("trial.txt");
    while(getline(readFile, myText))
    {
        cout<< myText;
    }
    readFile.close();
    return 0;
}
