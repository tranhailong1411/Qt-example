#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <ctime> // must include this header file to use time function
#include <string>
#include <fstream>
using namespace std;

// function to wish user according to time
void wishme(){
    // current date  and time based on your system timezone
    time_t now = time(0);
    tm *time = localtime(&now);

    if (time-> tm_hour < 12){
        cout<< "Good Morning Boss"<<endl;
        string phrase = "Good Morning Boss";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour >= 12 && time->tm_hour <= 16){
        cout<< "Good Afternoon Boss"<<endl;
        string phrase = "Good Afternoon Boss";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour > 16 && time->tm_hour < 24){
        cout<< "Good Evening Boss"<<endl;
        string phrase = "Good Evening Boss";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
}

void datetime(){
    time_t now = time(0);
    char *dt = ctime(&now);
    cout<<"The date and time is "<<endl
        << dt <<endl;
}
struct date{
    int day;
    int month;
    int year;
};
class SinhVien
{
    private:
        int Mssv;
        date Date;
        string Name;
        string Gender;
        double Cpa;
        string Phone;
    public:
        SinhVien(string NAME, date DATE, int MSSV, string GENDER, double CPA, string PHONE);
        SinhVien();
        void print();
        void delete1();
        void show();
        void real_file(ifstream &filein);
};
SinhVien:: SinhVien(string NAME, date DATE, int MSSV, string GENDER, double CPA, string PHONE){
    Mssv = MSSV;
    Date.day= DATE.day;     Date.month=DATE.month;    Date.year=DATE.year;
    Name = NAME;
    Gender = GENDER;
    Cpa= CPA;
    Phone= PHONE;
}
SinhVien::SinhVien(){
    Mssv = 0;
    Date.day=0;     Date.month=0;    Date.year=0;
    Name = "None";
    Gender = "None";
    Cpa= 0.0;
    Phone= "None";
}
void SinhVien::print()
{
    std::cout<< Name<< "      " << Date.day<<"/"<< Date.month<<"/"<<Date.year<<"      "<< Mssv << "      "<< Gender<<"         " <<Cpa<<"        " <<Phone <<endl ;
}
// void SinhVien::real_file(ifstream &filein){
//     // getline(filein, Name,',');
//     // filein>> Date.day;
//     // filein>> Date.month;
//     // filein>> Date.year;
//     filein >> Mssv;
//     printf("%d",Mssv);
//     // getline(filein, Gender, ',');
//     // filein >>Cpa;
//     // getline(filein, Phone);

// }
int main()
{
    system("cls");

    cout<<"\t\t\t<============================================= W E L C O M E ==========================================>"<<endl;
    cout<<"\t\t\t<============================================= I'M HERE TO HELP YOU ==========================================>"<<endl<<endl;
    date a;
    a.day =14;
    a.month=11;
    a.year=2001;
    char password[20]; //to take password
    char ch[100]; // to take command from the user
    do
    {
        cout<<"======================="<<endl;
        cout<<"| ENTER YOUR PASSWORD |"<<endl;
        cout<<"======================="<<endl<<endl;
        string phrase = "enter your password";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);

        gets(password);

        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};

        if(strcmp(password, "longdz")==0){
            cout<<"\n<==================================================================================================>\n\n";
            wishme();
            do{
                cout<<"\n<==================================================================================================>\n\n";
                cout<<endl<<"How can i help you boss...."<<endl<<endl;

                string phrase = "How can i help you boss";
                string command = "espeak \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);

                cout<<"Your query ===> ";
                gets(ch);
                cout<<endl;
                cout<<"Here is the result for your query ===> ";

                if(strcmp(ch, "hi") == 0 || strcmp(ch, "hey") == 0 || strcmp(ch, "hello") == 0 ){
                    cout<<"Hello Boss....."<<endl;
                    string phrase = "Hello Boss";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                else if(strcmp(ch, "bye") == 0 || strcmp(ch, "stop") == 0 || strcmp(ch, "exit") == 0 ){
                    cout<<"Good Bye sir, have a nice day!!!!"<<endl;
                    string phrase = "Good Bye sir, have a nice day";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }
                else if(strcmp(ch, "who are you") == 0 || strcmp(ch, "tell me about yourself") == 0 || strcmp(ch, "about") == 0 ){
                    cout<<"I'm a virtual assistant created by Long !!!"<<endl;
                    string phrase = "I am a virtual assistant created by Long";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                else if(strcmp(ch, "how are you") == 0 || strcmp(ch, "whatsup") == 0 || strcmp(ch, "how is your day") == 0 ){
                    cout<<"I'm good sir, tell me how can i help you.."<<endl;
                    string phrase = "I'm good sir, tell me how can i help you";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                else if(strcmp(ch, "time") == 0 || strcmp(ch, "date") == 0){
                    // make function to show date and time
                    datetime();
                }
                else if(strcmp(ch, "open notepad") == 0){
                    cout<<"openining notepad....."<<endl;
                    string phrase = "opening notepad";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Windows\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if(strcmp(ch, "open google") == 0){
                    cout<<"openining google....."<<endl;
                    string phrase = "opening google";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.google.com");
                }

                else if(strcmp(ch, "open youtube") == 0){
                    cout<<"openining YouTube....."<<endl;
                    string phrase = "opening youtube";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.youtube.com");
                }

                else if(strcmp(ch, "open instagram") == 0){
                    cout<<"openining instagram....."<<endl;
                    string phrase = "opening instagram";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.instagram.com");
                }
                else if(strcmp(ch, "open facebook") == 0){
                    cout<<"openining facebook....."<<endl;
                    string phrase = "opening facebook";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.facebook.com/");
                }
                else if(strcmp(ch, "work") == 0){
                    cout<<"time to work...."<<endl;
                    cout<<"Options: "<< endl << "1.Show list" <<endl << "2. Add" << endl <<"3. Delete"<<endl << "4. Sort"<<endl;
                    string phrase = "time to work....Options...1.Show list... 2. Add...3.Delete...4.Sort";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    int option;
                    cout << "Your choice:  " << endl;
                    cin >> option;

                    switch (option)
                    { 
                        case 1:
                        {
                            std::ifstream fileInput("C:/Users/Admin/Desktop/long.txt");
                            // filein.open("long.txt",ios_base::in);
                            cout<<"Name         Date            Id            Gender       CPA         Phone "<<endl;        
                            SinhVien SV;
                            int n=0;
                            fileInput>> n;
                            printf("%d\n",n);
                            // SV.real_file(filein);
                            SV.print();
                            fileInput.close();
                            break;
                        }
                        case 2:
                        {
                            break;
                        }
                        case 3:
                        {  
                            break;
                        }
                        case 4:
                        {  
                            break;
                        }
                    }
                }
                else{
                    cout<<"Sorry could not understand your query please ty again !!!"<<endl;
                    string phrase = "Sorry could not understand your query please ty again";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }



            }while(1);
        }
        else
                {
                    system("cls");

                    cout << "\t\t\t<============================= W E L C O M E=============================>" << endl;
                    cout << "\t\t\t<============================= I'M VIRTUAL ASSISTANT =============================>" << endl;
                    cout << "\t\t\t<============================= MY NAME IS INERTIA =============================>" << endl;
                    cout << "\t\t\t<============================= I'M HERE TO HELP YOU AND MAKE YOUR LIFE EASY =============================>" << endl
                         << endl;

                    cout << "======================" << endl;
                    cout << "X Incorrect Password X" << endl;
                    cout << "======================" << endl
                         << endl;
                    string phrase = "Incorrect Password, Please enter correct password";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
    } while (1);
    return 0;
} 
