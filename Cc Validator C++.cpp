#include<iostream>
//#include<fstream>
using namespace std;
class Module{
	private:
		string Single;     //For single card Input
	    string Multiple[2];  //For multiple card Input
	    string Times;        //For how many times you have to check single or multiple
	    string Type;        // For type Like visa or mastercard
	    int Sum = 0;
	public:
		void Display()
		{
			cout<<"Select how many time you want to check Your Card: Single Or Multiple "<<endl;
	        cin>>Times;
	    if(Times == "Single" || Times == "single")
	        {
	            cout << "Please enter the type of card: Visa or MasterCard? "<<endl;
	            cin >> Type;
            if(Type == "Visa" || Type == "visa")
            {
            	cout << "Please enter the 16 digit card number? ";
            	cin>>Single;
            	for(int i=0; i < Single.size(); i++)
            	{
            	   Sum += (Single[i] - 48);
				}
				Sum %= 10;
				if(Sum == 0 && Single.size() == 16)
				{
					cout<<"Visa Card Is Valid!"<<endl;
				}
				else{
					cout<<"Visa Card Is Invalid!"<<endl;
				}
			}
			else if(Type == "MasterCard" || Type == "mastercard")
			{
			    cout << "Please enter the 16 digit card number? ";
            	cin>>Single;
            	for(int i=0; i < Single.size(); i++)
            	{
            	   Sum += (Single[i] - 48);	
				}
				Sum %= 10;
				if(Sum == 0 && Single.size() == 16)
				{
					cout<<"MasterCard Is Valid!"<<endl;
				}
				else{
					cout<<"MasterCard Is Invalid!"<<endl;
				}	
			}
	        }
	    else if(Times == "Multiple" || Times == "multiple")
	       { 	
	       cout << "Please enter the type of card: Visa or MasterCard? "<<endl;
           cin >> Type;
           cin >> Type;
        if(Type == "Visa" || Type == "visa")
	       {	
               cout << "Please enter the 16 digit card numbers: "<<endl; 
               loop();
	       }
	    else if(Type == "Mastercard" || Type == "mastercard")
	       {	
               cout << "Please enter the 16 digit card numbers: "<<endl; 
			   loop(); 
	       }
	    else if(Type == "visa" || Type == "mastercard")
	       {
		       cout << "Please enter the 16 digit card numbers: "<<endl; 
		       loop();
	       }
	    else{
		       cout << "Not a Mastercard or Vi$a"<<endl;
	        }
           } 
		}
	void loop()
		{
			for(int i=0; i<2; i++)
            	{
            		cin>>Multiple[i];
            		for(int x=0; x<Multiple[i].size(); x++)
            		{
            			Sum += (Multiple[i][x] - 48);
					}
					Sum %= 10;
					if(Sum == 0 && Multiple[i].size() == 16)
                    {
//               	    cout<<Multiple[i]<<endl;
					cout<<"Visa Card is Valid!"<<endl;
			        }
			        else{
//			   	    cout<<Multiple[i]<<endl;
					cout<<"Visa is Invalid! "<<endl;
			        }
				}
		}
};
int main()
{
//	ifstream Myfile;
//	Myfile.open("Cc Validator c++.txt");
//	while(Myfile)
//	{
//    ofstream myFile;
//    myFile.open("Cc Validator C++.txt");
	Module m[5];
	string Country[5] = {"Pakistan","India","US","Australia","NewZealand"};
	for(int i=0; i<5; i++)
	{
		cout<<Country[i]<<" ";
//		myFile<<i+1<<". "<<Country[i]<<endl;
	}
	string CountrySelct;
	cout<<"\nSelect Your Country: "<<endl;
//	myFile<<"Enter Your Country: "<<endl;
	cin>>CountrySelct;
	if(CountrySelct == Country[0] || CountrySelct == "pakistan")
	{
		m[1].Display();
	}
	else if(CountrySelct == Country[1] || CountrySelct == "india")
	{
		m[2].Display();
	}
	else if(CountrySelct == Country[2] || CountrySelct == "us")
	{
		m[3].Display();
	}
	else if(CountrySelct == Country[3] || CountrySelct == "australia")
	{
		m[4].Display();
	}
	else if(CountrySelct == Country[4] || CountrySelct == "newzealand")
	{
		m[5].Display();
	}
//	}
//	Module m[5];
//	string Country[5] = {"Pakistan","India","Us","Australia","NewZealand"};
//	for(int i=0; i<5;i++)
//	{
//		cout<<i+1<<". "<<Country[i]<<endl;
//	}
//	string CountrySelct;
//	cout<<"Enter Your Country: "<<endl;
//	cin>>CountrySelct;
//	if(CountrySelct == Country[0] || CountrySelct == "pakistan")
//	{
//		m[1].Display();
//	}
//	else if(CountrySelct == Country[1] || CountrySelct == "india")
//	{
//		m[2].Display();
//	}
//	else if(CountrySelct == Country[2] || CountrySelct == "us")
//	{
//		m[3].Display();
//	}
//	else if(CountrySelct == Country[3] || CountrySelct == "australia")
//	{
//		m[4].Display();
//	}
//	else if(CountrySelct == Country[4] || CountrySelct == "newzealand")
//	{
//		m[5].Display();
//	}
//	Myfile.close();
//	
//	ofstream fout;
//	fout.open("Cc Validator c++.txt");
//	fout.close();
	
}
