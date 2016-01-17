#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<"\n";
}

int main(){
	
	vector <int> v;
	cout<<"Initial size = "<<v.size()<<endl;
	
	//putting values into the vector
	int x;
	cout<<"Enter Five Integer Values: ";
	for(int i=0;i<5;i++){
		cin>>x;
		v.push_back(x);
	}
	cout<<"Size aftr adding 5 values: ";
	cout<<v.size()<<endl;
	
	//Display the contents
	cout<<"Current Contents: \n";
	display(v);
	
	//Add one more value
	v.push_back(6.6);       //float value truncated to int 
	
	//Display size and contents
	cout<<"\nSize = "<<v.size()<<endl;
	cout<<"Contents now: \n";
	display(v);
	
	//Inserting elements 
	vector<int>::iterator itr=v.begin();   //iterator
	itr=itr+3;                            //itr points to 4th element
	v.insert(itr,9);
	//Display the contents
	cout<<"\nContents after inserting: \n";
	display(v);
	
	//Removing the 4th and 5th elements
	v.erase(v.begin()+3,v.begin()+5);     //Remove 4th and 5th elements
	
	//Display the contents
	cout<<"\nContents after deletation: \n";
	display(v);
	cout<<endl;
	
	return 0;
}
