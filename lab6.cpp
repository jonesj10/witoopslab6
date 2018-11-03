<<<<<<< HEAD
//Ameer and Jacob
=======
//Ameer and jacob
>>>>>>> ed2b30699bcd3d8a8de291dd4d3ab690cb09c739
//code here
//

#include <iostream>
#include <string>
#include <ctime>
#include <ctime>
#include <fstream>

using namespace std;



struct qb {
        str fname, lname;
        int numWins; //starts a 0
 	int years[4]; //Most won by a QB in that span is 4

} ;

/*printmenu function that takes the users choice so that the choice may initialize t$
function needed*/
void printmenu(){
	int choice =0;
	cout << "please enter a 1 to import the data to the list" << endl;
	cout << "Please enter a 2 to delete all of the entries on the list and exit" << endl;
	cout << "Please enter a 3 to search for a struct" << endl;
	cout << "please enter a 4 to delete a specific entry" << endl;
	cout << "Please  enter a 5 to exit"; << endl;
}
//delete all function that deletes all of the entries
void deleteall(){
temp = HEAD;
while(temp){
        student *deleted =temp; //save the current
        temp = temp->next; //moves to the next pointer
        delete deleted;//deletes the current
}//end of delete all





void Searchfname(){
	do{
		
	}while(temp != HEAD);
}


int main{
	
	int choice =0;
	while (choice != 5){
		printmenu();
		cin >> choice;
// if statements go here
	}//menu



}//main



