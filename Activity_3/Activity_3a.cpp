using namespace std;
#include <iostream>
#include <string.h>

class student // Creation of class student
{             // Declaration of Data Members
private:
    char name[20];
    int roll;
    char dob[15];
    char address[20];
    char branch[10];
    char sem[10];
    int sub;
    // Member functions
public:
    student()
    {
        // default constructor
    }
    void input()
    { // Creation of input function
        cout << "\n\tEnter Details for Student" << endl;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll no: ";
        cin >> roll;
        cout << "Enter DOB(format->DD-MM-YYYY): ";
        cin >> dob;
        cout << "Enter Address: ";
        cin >> address;
        cout << "Enter Branch: ";
        cin >> branch;
        cout << "Enter sem: ";
        cin >> sem;
        cout << "Enter No. of Subjects: ";
        cin >> sub;
    }

public:
    ~student()
    { // Creation of Destructor
    }

public:
    void display()
    { // Creation of display function
        cout << "\n\tInformation for student\n";
        cout << "Name = " << name << endl;
        cout << "Roll no. = " << roll << endl;
        cout << "D.O.B = " << dob << endl;
        cout << "Address = " << address << endl;
        cout << "Branch = " << branch << endl;
        cout << "Semester = " << sem << endl;
        cout << "No. of Subjects = " << sub << endl;
    }
    int r_rollno()
    {
        return roll;
    }
    void update()
    {
        int choice;
        cout << "\n\t--------- Update Information --------\n";
        cout << "\n\t------> Choose the Index of Details You Want to Update <-------\n";
        cout << " 1. Student Name        ===>      " << name << "\n";
        cout << " 2. Roll No.            ===>      " << roll << "\n";
        cout << " 3. Date Of Birth       ===>      " << dob << "\n";
        cout << " 4. Address             ===>      " << address << "\n";
        cout << " 5. Branch              ===>      " << branch << "\n";
        cout << " 6. Semester            ===>      " << sem << "\n";
        cout << " 7. No. of subjects     ===>      " << sub << "\n";

        cout << " Enter Your Choice ====> ";
        cin >> choice;
        switch (choice) // switch case to select the choice
        {
        case 1:
            cout << "\n Enter Student Name :--->";
            cin >> name;
            cout << "\t---- Name Updated ----\n";
            break;

        case 2:
            cout << "\n\n Enter Roll No. :--->";
            cin >> roll;
            cout << "\t---- Roll No. Updated ----\n";
            break;

        case 3:
            cout << "\n\n Enter Date Of Birth  :--->";
            cin >> roll;
            cout << "\t---- Date Of Birth Updated ----\n";
            break;

        case 4:
            cout << "\n\n Enter Address :--->";
            cin >> address;
            cout << "\t---- Adress Updated ----\n";
            break;

        case 5:
            cout << "\n\n Enter Branch :--->";
            cin >> branch;
            cout << "\t---- Branch Updated ----\n";
            break;

        case 6:
            cout << "\n\n Enter Semester :--->";
            cin >> sem;
            cout << "\t---- Semested Updated ----\n";
            break;

        case 7:
            cout << "\n\n Enter No. of Subjects :--->";
            cin >> sub;
            cout << "\t---- No. of Subjects Updated ----\n";
            break;

        default:
            cout << "\n\n ------ Invalid Choice ------\n ******** Try again ********\n\n";
            break;
        }
    }
};

int main()
{
    int ch,count = -1,r_r, num,retr=0;
    cout << "Enter no. of students:";
    cin >> num;
    student s[10];
    do
    {
    cout << "\n\t<-------MENU------->\nEnter\n1 -> For New Entery\n2 -> For Updating\n3 -> For Display Data\n0 -> Exit\t:";
    cin >> ch;

        switch (ch)
        {
        case 1:
            if ( count+1 == num)
            {
                cout << "*****Record Full******";
                break;
            }
            count++;
            s[count].input();
            break;
        case 2:
            if (count == -1)
            {
                cout << "*****NO data in System******";
                break;
            }

            cout << "Enter Roll no. of student to update:";
            cin >> r_r;
            for (int i = 0; i <=count; i++)
            {

                if (r_r == s[i].r_rollno())
                {
                    s[i].update();
                    goto retr;
                }
            }
            cout<<"***No Record Found with provided Roll No.***\n";
            retr:
            break;

        case 3:
            if (count == -1)
            {
                cout << "*****NO data in System******";
                break;
            }
            cout << "Enter Roll no. of student :";
            cin >> r_r;
            for (int i = 0; i <=count; i++)
            {

                if (r_r == s[i].r_rollno())
                {
                    s[i].display();
                    goto retr;
                }
            }
             cout<<"***No Record Found with provided Roll No.***\n";
            break;
        case 0:
            cout << "\n---------> Exit Terminal <---------";
            break;

        default:
            cout << "\n------Invalid choice-------\n\t*******Exit*********\n";
            break;
        }

    } while (ch != 0);

    return 0;
}