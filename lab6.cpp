
//Ameer and Jacob
//lab 6

#include <iostream>
#include <string>
#include <ctime>
#include <fstream>

using namespace std;



struct qb {
        string fname, lname;
        int numWins; //starts a 0
 	int years[4]; //Most won by a QB in that span is 4

} ;

/*printmenu function that takes the users choice so that the choice may initialize the
function needed*/
void printmenu(){
	int choice =0;
	cout << "please enter a 1 to import the data to the list" << endl;
	cout << "Please enter a 2 to delete all of the entries on the list and exit" << endl;
	cout << "Please enter a 3 to search for a struct" << endl;
	cout << "please enter a 4 to delete a specific entry" << endl;
	cout << "Please  enter a 5 to exit"; << endl;
	cin >> choice; 
	return choice;
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


int main(){

//activates the menu and returns the useres choice that is given to the computer
do{
printmenu(); 
}while(choice !=5);


// if statements go here
	}//menu



}//main



