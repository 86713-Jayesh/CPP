#include<bits/stdc++.h>
using namespace std;

class volumeCalculation{
	private:
		double length;
		double width;
		double height;
	
	public:

		int menu()
		{
			cout<<"Enter Your Choice..."<<endl;
		
			cout<<"1. Calculate Volume with default values"<< endl;
			cout<<"2. Calculate Volume with length,breadth and height with same value"<< endl;
			cout<<"3. Calculate Volume with different length,breadth and height values." << endl;
			cout<<"4. Exit"<<endl<<endl;
		    int ch;
		    cout <<"Enter your choice: ";
			cin >> ch;
			return ch;	
		}
		
		volumeCalculation(double length, double width, double height)
		{
			this-> length = length;
			this-> width = width;
			this-> height = height;
		}
		
		volumeCalculation()
		{
			this->length = 1;
			this->width = 1;
			this->height = 1;
		}
		
		void defaultVolume()
		{
			cout <<"Default Values are:  Length = 1, Width = 1, Height = 1 and " << endl;
			double ans = this->length * this->width * this->height;
			cout << "Volume is: "<< ans;
		}
		
		void execution(double length, double width, double height)
		{
			
			this->length = length;
			this->width = width;
			this->height = height;
			double ans = this->length * this->width * this->height;
			
			cout << "Volume for: "<<"Length: "<< this->length <<", Width: "<< this->width << ", height: "<< this->height ;
			cout << " is " << ans ;	
		}
		
		void acceptFromUsers()
		{
			double x, y, z;
			cout<<"Enter Length: ";
			cin >> x;
			cout <<"Enter Width: ";
			cin >> y;
			cout << "Enter height: ";
			cin >> z;
			
			execution(x, y, z);
		}
		void sameValues()
		{
			cout << "Enter single value: ";
			double x;
			cin >> x;
			this->length = x;
			this->width = x;
			this->height = x;
			
			execution(x, x, x);
			
		}
		
		
		
};


int main()
{
	volumeCalculation vol;
	
	int ch;
    while( (ch=vol.menu())!= 4)
    {
    	if(ch == 1)
    	{
    	    vol.defaultVolume();
    		cout << endl << endl;
    		for(int i=0;i<20;i++)
    		cout<<"---";
    		cout<< endl << endl;
		}
		else if(ch == 2)
		{
		    vol.sameValues();
			cout << endl << endl;
			for(int i=0;i<20;i++)
    		cout<<"---";
    		cout<< endl << endl;
		}
		else if(ch == 3)
		{
		    vol.acceptFromUsers();
			cout << endl << endl;
			for(int i=0;i<20;i++)
    		cout<<"---";
    		cout<< endl << endl;
		}
        else if(ch<1 || ch>4)
        {
        	cout << "Invalid Choice Please Try Again "<< endl << endl; 
        	for(int i=0;i<20;i++)
    		cout<<"---";
    		cout<< endl << endl;
		}
		
	}  
	
}
