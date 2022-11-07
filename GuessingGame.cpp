#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main () {
	
	string animals[10] = {"elephant","lion","tiger","buffalo","cobra","hare","warthog","zebra","hyena","parrot"};
    string foods[10] = {"chips","burger","broccoli","steak","sambusa","sausage","hotdog","rice","pizza","meat" };
    string brands[10] = {"dell","apple","hp","gucci","hyundai","ferrari","nike","intel","mustang","rolex"};
    string companies[10] = {"mcdonalds","subway","nike","apple","ibm","tesla","rwandair","amazon","google","meta"};
    string peopleNames[10] = {"john","francine","maxwell","donald","joe","ivan","edward","anabelle","elon","billie"};
    
    cout << "**************************************************GUESSING GAME******************************************************"<<endl;
    cout << "RULES:"<<endl;
    cout << "1. You choose among the categories from one to five which will generate a secret word for you to guess"<<endl;
    cout << "2. Guess the word until you get it correct but with every wrong guess your number of guesses reduces by one"<<endl<<endl<<endl<<endl;
    
    
    cout << "Categories:"<<endl;
    cout << "1. Animals"<<endl;
    cout << "2. Foods"<<endl;
    cout << "3. Brands"<<endl;
    cout<< "4. Companies" << endl;
    cout << "5. Celebrities"<<endl;
    
    
	
	char letter;
	string exit;
	int choice;
	bool keepPlaying = true;
	string blanks = "";
	int guesses;
	while(keepPlaying){
		
	cout << "Please select a category(1-5): ";
	bool valid = false;
	
	while(!valid){
		choice = 0;
		cin >> choice;
//		if
		if(choice >= 1 && choice <=5){
			valid = true;
		}else{
			cout << "Please enter a number in the range 1-5: ";
		}
		
		if(exit == "exit"){
			goto end;
		}
		
	}


	
	string word;
	bool atWord = false;
	int wordNum = 0;
	int random = rand()%10+1;
	
	if(choice == 1){
		word = animals[random];
	}else if (choice == 2){
		word = foods[random];
	}
	else if (choice == 3){
		word = brands[random];
	}
	else if (choice == 4){
		word = companies[random];
	}
	else if (choice == 5){
		word = peopleNames[random];
	}
	
	
	while(!atWord){
		word;
		if(wordNum == choice){
			atWord = true;
		}
		wordNum++;
	}
	blanks = "";
	
	for(char& c : word){
		blanks +="_";
	}
	int length = word.length();
	
	guesses = length;
	
	bool gameOver = false;
	while(!gameOver){
		cout <<"The word is "<<blanks << endl;
		cout << "You have " << guesses << " guesses remaining!" << endl;
		cout << "Please enter a letter to guess: ";
		cin >> letter;
		
		int i = 0;
		bool match = false;
		for(char c : word){
			
			if (letter == c){
				blanks[i] = letter;
				match = true;
			}
			i++;
		}
		
		if(!match){
			cout << "Sorry, but the word doesn't contain "<< letter << endl;
			guesses--;
		}
			
		if(blanks == word){
			gameOver = true;
			cout << "********************************Congratulations! You have guessed the word.*********************************"<<endl << "****************************************The word was: " << blanks<<"*******************************************************"<<endl;
		}
		if(guesses == 0) {
			gameOver = true;
			cout << "******************************You are out of guesses. You will do better next time. ********************************"<<endl;
			cout << "*******************************The word was: " << word<<"*****************************************"<<endl;
		}
	}
	
	cout <<"Would you like to play this awesome game again? (y/n) ? ";
	char playagain;
	cin >> playagain;
	if(playagain == 'n'){
		end:
		keepPlaying = false;
		cout << "Farewell, Player!";
	}
	
		}
	
}
