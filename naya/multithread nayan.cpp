#include <iostream>
#include <process.h>
#include<windows.h>

using namespace std;

void myFunction( void* number){
     
     int myNumber = *(int*)number;
       
     cout << "This is prcosses number: " << myNumber << "\n";
      myNumber++;   
     _endthread();

}

int main(int argc, char *argv[])
{
    int tempNum[10];
    HANDLE handle;
	
    for( int i = 0; i <= 0; i++){
         tempNum[i] = i;
        handle = (HANDLE) _beginthread( myFunction, 0, (void*)&tempNum[i]);
       cout<< tempNum[i];
      WaitForSingleObject(handle,INFINITE);    
    }
    
    system("PAUSE");
    return 0;
}
