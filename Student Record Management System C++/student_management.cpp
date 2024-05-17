#include<iostream>

using namespace std;

string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];
int total=0;

void enter_record();
void display_record();
void search_record();
void update_record();
void delete_record();

int main()
{
	int value;

	while(true)
	{
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "             Student Record Management System            "; cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "            ~~~~~~~~~~ * WELCOME * ~~~~~~~~~~            "; cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                      1. Enter Data                      "; cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                    2. Display Record                    "; cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                      3. Search Data                     "; cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                      4. Update Data                     "; cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                      5. Delete Data                     "; cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                          6. Exit                        "; cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout << "                      Enter your choice : ";
        cin >> value;
        cout << "\t\t\t\t\t\t\t\t";cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
        cout << endl;
        cout << endl;

	    switch(value)
        {
            case 1:
                enter_record();
                break;

            case 2:
                display_record();
                break;
            case 3:
                search_record();
                break;
            case 4:
                update_record();
                break;
            case 5:
                delete_record();
                break;
            case 6:
                cout << "\t\t\t\t\t\t\t\t";cout << "                      Exiting...                       ";
                exit(0);
                break;
            default:
                cout << "\t\t\t\t\t\t\t\t";cout << "             Please enter valid choice (1-6)           ";
                break;
        }
    }

    return 0;
}

void enter_record()
{
	int ch=0;

    cout << "\t\t\t\t\t\t\t\t"; cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                  ***** Save Data *****                  "; cout.put(178) << endl;
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;    
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "           ~ Please enter the following details ~        "; cout.put(178) << endl;
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "  Enter the no. of student details you want to store : ";
    cin>>ch; 
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
    cout << "\t\t\t\t\t\t\t\t";cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
    cout << endl;
	if(total==0)
    {
        total=ch+total;
		for(int i=0;i<ch;i++)
		{
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                 Enter the data of student " << i+1 <<"  "; cout.put(178) << endl;
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
			cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl; 
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178) <<"                   Enter name ";
            cin >> arr1[i];
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
			cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                  Enter Roll no ";
			cin >> arr2[i];
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
			cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                  Enter course ";
			cin >> arr3[i];
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
			cout << "\t\t\t\t\t\t\t\t"; cout.put(178) <<"                   Enter class ";
			cin >> arr4[i];
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
			cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                  Enter contact ";
			cin >> arr5[i];
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
		}
	}
	else
	{
        for(int i=total;i<ch+total;i++)
        {
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                 Enter the data of student " << i+1 <<"  "; cout.put(178) << endl;
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
			cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl; 
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178) <<"                   Enter name ";
            cin >> arr1[i];
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
			cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                  Enter Roll no ";
			cin >> arr2[i];
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
			cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                  Enter course ";
			cin >> arr3[i];
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
			cout << "\t\t\t\t\t\t\t\t"; cout.put(178) <<"                   Enter class ";
			cin >> arr4[i];
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
			cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                  Enter contact ";
			cin >> arr5[i];
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
		}
		total=ch+total;
	}
}

void display_record()
{
	if(total==0)
	{
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
		cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                   No data is entered                    "; cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
	}
	else
    {
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                    Displaying Data                      "; cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
        
        for(int i=0;i<total;i++)
        {
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                    Data of Student "<<i+1 << "          "; cout.put(178) << endl;
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                      Name    : "<<arr1[i] << "       "; cout.put(178) << endl;
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                      Roll No : "<<arr2[i] << "       "; cout.put(178) << endl;
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                      Course  : "<<arr3[i] << "       "; cout.put(178) << endl;
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                      Class   : "<<arr4[i] << "       "; cout.put(178) << endl;
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                      Contact : "<<arr5[i] << "       "; cout.put(178) << endl;
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
            cout << endl;
        }
	}
}

void search_record()
{
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                        Records                          "; cout.put(178) << endl;
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
	cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
    if(total==0)
	{
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
		cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                   No data is entered                    "; cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
	}
	else
    {
	    string rollno;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
		cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "            Enter the roll no of student : ";
		cin>>rollno;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;

		for(int i=0;i<total;i++)
	    {
			if(rollno==arr2[i])
			{
                cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                      Name    : "<<arr1[i] << "       "; cout.put(178) << endl;
                cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
                cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                      Roll No : "<<arr2[i] << "       "; cout.put(178) << endl;
                cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
                cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                      Course  : "<<arr3[i] << "       "; cout.put(178) << endl;
                cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
                cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                      Class   : "<<arr4[i] << "       "; cout.put(178) << endl;
                cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
                cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                      Contact : "<<arr5[i] << "       "; cout.put(178) << endl;
                cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
                cout << "\t\t\t\t\t\t\t\t"; cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
                cout << endl;
			}
		}
	}
}

void update_record()
{
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                        Update Records                   "; cout.put(178) << endl;
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
	if(total==0)
	{
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                   No data is entered                    "; cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
    }
	else
    {
		string rollno;

        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
		cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "Enter the roll no of student which you want to update : ";
		cin>>rollno;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
		for(int i=0;i<total;i++)
		{
			if(rollno==arr2[i])
			{
				cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                      Previous data                      "; cout.put(178) << endl;
                cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
                cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
				cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                    Data of Student "<<i+1 << "          "; cout.put(178) << endl;
                cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;    
				cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                      Name    : "<<arr1[i] << "       "; cout.put(178) << endl;
                cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
                cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                      Roll No : "<<arr2[i] << "       "; cout.put(178) << endl;
                cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
                cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                      Course  : "<<arr3[i] << "       "; cout.put(178) << endl;
                cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
                cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                      Class   : "<<arr4[i] << "       "; cout.put(178) << endl;
                cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
                cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                      Contact : "<<arr5[i] << "       "; cout.put(178) << endl;
                cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
                cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
	    	    cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                        Enter new data                   "; cout.put(178) << endl;
                cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl; 
                cout << "\t\t\t\t\t\t\t\t"; cout.put(178) <<"                   Enter name ";
                cin >> arr1[i];
                cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
                cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                  Enter Roll no :";
                cin >> arr2[i];
                cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
                cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                  Enter course  :";
                cin >> arr3[i];
                cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
                cout << "\t\t\t\t\t\t\t\t"; cout.put(178) <<"                   Enter class   :";
                cin >> arr4[i];
                cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
                cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                  Enter contact :";
                cin >> arr5[i];
                cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
                cout << "\t\t\t\t\t\t\t\t"; cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
			}
		}
	}
}

void delete_record()
{
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                        Delete Records                   "; cout.put(178) << endl;
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
    cout << "\t\t\t\t\t\t\t\t"; cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
	if(total==0)
	{
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
		cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                     No data is entered                  "; cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
	}
	else
    {
		int a;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
	    cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                   1. Delete all record                  "; cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
		cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                 2. Delete specific record               "; cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                    Enter your choice : ";
		cin>>a;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
        cout << "\t\t\t\t\t\t\t\t"; cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
        
		if(a==1)
		{
			total=0;
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
			cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                 All record is deleted...                "; cout.put(178) << endl;
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
		}
		else if(a==2)        
        {
			string rollno;
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
			cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "Enter the roll no of student which you want to delete : ";
			cin>>rollno;
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;

			for(int i=0;i<total;i++)
			{
	    		if(rollno==arr2[i])
				{
                	for(int j=i;j<total;j++)
					{
						arr1[j]=arr1[j+1];

						arr2[j]=arr2[j+1];

					    arr3[j]=arr3[j+1];

						arr4[j]=arr4[j+1];

						arr5[j]=arr5[j+1];

				    }
					total--;
                    cout << "\t\t\t\t\t\t\t\t"; cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
                    cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
                    cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "           Data has been deleted successfully...         "; cout.put(178) << endl;
                    cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
                    cout << "\t\t\t\t\t\t\t\t"; cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
				}
			}
		}
		else 
		{
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
			cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                        Invalid input                    "; cout.put(178) << endl;
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178) << "                                                         "; cout.put(178) << endl;
            cout << "\t\t\t\t\t\t\t\t"; cout.put(178);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(22);cout.put(178) << endl;
		}
    }
}