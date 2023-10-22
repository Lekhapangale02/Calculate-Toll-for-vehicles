#include<iostream>
using namespace std;
class Vehicle
{
	int basic_toll;
	int no_of_people;
	int extra_charges;
	public:
	
	Vehicle(int toll,int people, int charges)
	{
		this->basic_toll=toll;
		this->no_of_people=people;
		this->extra_charges=charges;
	}
	void setBasicToll(int toll)
	{
		this->basic_toll=toll;
	}
	void setNo_of_People(int people)
	{
		this->no_of_people=people;
	}
	void setExtraCharges(int charges)
	{
		this->extra_charges=charges;
	}
	int getBasicToll()
	{
		return this->basic_toll;
	}
	int getNo_of_people()
	{
		return this->no_of_people;
	}
	int getExtraCharges()
	{
		return this->extra_charges;
	}
	virtual int calToll()=0;
	
};
class TwoWheeler:public Vehicle
{
	public:
		TwoWheeler(int People):Vehicle(20,People,10)
		{
			cout<<"\nparameterized constructor for two wheeler";
		}
		int calToll()
		{
		if(this->getNo_of_people()>2)
			{
				cout<<"\nNo of people are more than 2, 10 Rs Extra charges Will be Taken..";
				return this->getBasicToll()+this->getExtraCharges()*(this->getNo_of_people()-2);
			}
		else
			{
				cout<<"\n------------------------------------------";
				cout<<"\nBasic Toll You have to pay..";
				return this->getBasicToll();
			}
		}
};
class ThreeWheeler:public Vehicle
{
	public:
		ThreeWheeler(int people):Vehicle(30,people,20)
		{
			cout<<"\nparameterized constructor for three wheeler";
		}
		int calToll()
		{
		if(this->getNo_of_people()>3)
			{
				cout<<"\nNo of people are more than 3, 20 Rs Extra charges Will be Taken..";
				return this->getBasicToll()+this->getExtraCharges()*(this->getNo_of_people()-3);
			}
		else
			{
				cout<<"\n------------------------------------------";
				cout<<"\nBasic Toll You have to pay..";
				return this->getBasicToll();
			}
		}
};
class FourWheeler:public Vehicle
{
	public:
		FourWheeler(int people):Vehicle(40,people,40)
		{
			cout<<"\nparameterized constructor for Four wheeler";
		}
		int calToll()
		{
		if(this->getNo_of_people()>4)
			{
				cout<<"\nNo of people are more than 4, 40 Rs Extra charges Will be Taken..";
				return this->getBasicToll()+this->getExtraCharges()*(this->getNo_of_people()-4);
			}
		else
			{
				cout<<"\n------------------------------------------";
				cout<<"\nBasic Toll You have to pay..";
				return this->getBasicToll();
			}
		}
};
class Heavy:public Vehicle
{
	public:
		Heavy(int people):Vehicle(60,people,100)
		{
			cout<<"\nparameterized constructor for Heavy vehicle";
		}
		int calToll()
		{
		if(this->getNo_of_people()>6)
			{
				cout<<"\nNo of people are more than 6, 100 Rs Extra charges Will be Taken..";
				return this->getBasicToll()+this->getExtraCharges()*(this->getNo_of_people()-6);
			}
		else
			{
				cout<<"\n------------------------------------------";
				cout<<"\nBasic Toll You have to pay..";
				return this->getBasicToll();
			}
		}
};
int main()
{
	cout<<"hello";
	Vehicle *v;
	int choice=0,npeople;
	do
	{
		cout<<"\n\n1.Two Wheeler";
		cout<<"\n2.Three Wheeler";
		cout<<"\n3.Four Wheeler";
		cout<<"\n4.Heavy Vehicle";
		cout<<"\nEnter Your Choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				{
					cout<<"Enter number of people:";
					cin>>npeople;
					TwoWheeler v2(npeople);
					v=&v2;
					cout<<"\nCalculated toll:"<<v->calToll()<<" Rs";
					cout<<"\n-----------------Thank you---------------------";
				}
			break;
			case 2:
				{
					cout<<"Enter number of people:";
					cin>>npeople;
					ThreeWheeler v3(npeople);
					v=&v3;
					cout<<"\nCalculated toll:"<<v->calToll()<<" Rs";
					cout<<"\n-----------------Thank you---------------------";
				
				}
			break;
			case 3:
				{
					cout<<"Enter number of people:";
					cin>>npeople;
					FourWheeler v4(npeople);
					v=&v4;
					cout<<"\nCalculated toll:"<<v->calToll()<<" Rs";
					cout<<"\n-----------------Thank you---------------------";
				}
			break;
			case 4:
				{
					cout<<"Enter number of people:";
					cin>>npeople;
					Heavy h1(npeople);
					v=&h1;
					cout<<"\nCalculated toll:"<<v->calToll()<<" Rs";
					cout<<"\n-----------------Thank you---------------------";
				}
			break;
			default:
				cout<<"\nInvalid Choice";
		}
	}while(choice!=4);
	
	return 0;
}
