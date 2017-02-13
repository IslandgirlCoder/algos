#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>

using namespace std;

/**
\fn linearSearch
\brief Search data for the first occurrence of key
\param [in] key The value being searched for
\param [in] data The data set that will be searched
\returns location of key if found or -1 if not found
*/
int linearSearch(auto data, auto key)
{
	
	for (int i = 0; i< data.size(); i++)
	{
		if (data[i] == key)
		
			return i;
		
	}	
	
	return -1;
}

int main()
{
  vector<string> inputs;
  string search_key, input;
  int result;

   cout<<"Welcome to \"search it\". We first need some input data."<<endl;
   cout<<"We'll assume the inputs do not have any spaces."<<endl<<endl;
   cout<<"To end input type the #-character (followed by Enter)"<<endl<<endl;

   cin>>input;
 
    while(input != "#")//read an unknown number of inputs from keyboard
    {
       inputs.push_back(input);
       cin>>input;
    }

   cout<<endl<<"["<<inputs.size()<<" values read from input source]"<<endl<<endl;

  if(inputs.size() == 0)//no input
  {
      cout<<endl<<"No input received, quiting..."<<endl<<endl;
       exit(1);//nothing to do but quit program
  }
 
   cout<<endl<<"To end input type the #-character (followed by Enter)"<<endl<<endl;
  cout<<"Enter a value to search for: ";


   cin>>search_key;
 
    void bubbleSort(auto& Data) 
{


	for (int k = 1; k < Data.size(); k++)
	{

		for (int i = 0; i < Data.size() -1 -k; i++)
		{
			
			if (Data[i] > Data[i +1])
			{
		
			//pre-defined swap function
			swap(Data[i], Data[i + 1]); 

			} // end if function


}//end function


        cout<<endl<<endl<<"Enter a value to search for: ";
        cin>>search_key; 
    }

   cout<<endl<<"Program \"search it\" is now finished."<<endl<<endl;

    return 0;
}
