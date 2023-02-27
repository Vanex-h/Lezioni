#include<iostream>
#include<string>
#include<array>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
	char cont;
	srand(time(0));
	int chosennum,n;
	string blanks;
	const char* animals[]={"cow", "hyena" ,"donkey", "horse","mare","hen","zebra","ant","spider","dog", "fish"};
	const char* plants[]={"bean", "cabbages","tomato", "pea","eggplant","maize","nuts","apple"};
	const char* basketball_teams[]={"warriors", "rockets", "lakers","celtics", "nuggets","heat","nets","knicks"};
	const char* movies[]={"morbius","dahmer", "encanto", "salt","titanic","scream", "joker", "us","ma"};
	const char* artists[]={"popsmoke", "dadju","ronisia", "maluma","offset","quavo","eminem","beyonce","madonna"};
	const char* books[]={"hamlet","warlord","beast", "bible"};
	start:
	cout<<"----------------------------------------------------"<<endl;
	cout<<"Choose the one of the categories: \n1. Animals\n2. Plants\n3. Basketball Teams\n4. Popular movies\n5. Popular singers\n6. Books "<<endl<<"==> ";
	cin>>chosennum; 
		bool gameOver= false;
		int i=0;
		int marks;
	switch(chosennum){
		case 1:
			{
		int guesses=9;
		marks= (guesses*100)/guesses;
		int size= sizeof(animals)/sizeof(animals[0]);
		n=rand() %size  ;
		string word=animals[n];
		blanks= animals[n];
		for(char& c:blanks){
			c='-';
		}
			char lette[4];
		
		while(!gameOver){
			cout<<"The word is: "<<blanks<<endl;
			cout<<"Guesses remaining: "<<guesses<<endl;
			cout<<"Enter a letter to guess: ";
			cin>>lette;
			if(strcmp(lette,"exit")==0){
				cout<<"Thank you for playing our game";
				exit(1);
			}
				bool match=false; 
				int i=0;
				
			for(char d:word){
				if(lette[0]==d){
					blanks[i]=lette[0];
					match= true;
				}
			
				i++;
			}
				if(!match){
				cout<<"It doesn't contain "<<lette[0]<<endl;
				guesses--;
				
				}
				else if(match){
					guesses--;
				}
				
			if(blanks== word){
				gameOver =true; 
				cout<<"==============================================="<<endl;
				cout<<"YOU WON!"<<endl;
				cout<<"the word was: "<<word<<endl;
				cout<<"Your marks are "<<marks<<endl;
				
			}
			else if(guesses==0){
				gameOver = true;
				cout<<"You're out of guesses"<<endl;
				cout<<"==============================================="<<endl;
				cout<<"You lost"<<endl;
				cout<<"the word was: "<<word<<endl;
				cout<<"Your marks are "<<marks<<endl;
			}
			
		}
		
			break;
		}
			case 2:
				{
			int guesses=10;
			marks= (guesses*100)/guesses;
			int size= sizeof(plants)/sizeof(plants[0]);
			n=rand() %size  ;
			string word=plants[n];
			blanks= plants[n];
			for(char& c:blanks){
			c='-';
			}

			char letter[4];
			bool gameOver= false;
			while(!gameOver){
			cout<<"The word is: "<<blanks<<endl;
			cout<<"Guesses remaining: "<<guesses<<endl;
			cout<<"Enter a letter to guess: ";
			cin>>letter;
			if(strcmp(letter,"exit")==0){
				cout<<"Thank you for playing our game";
				exit(1);
			}
			int i=0;
				bool match=false; 
				
				
			for(char c:word){
				if(letter[0]==c){
					blanks[i]=letter[0];
					match= true;
				}

				i++;
			}
				if(!match){
				cout<<"It doesn't contain "<<letter[0]<<endl;
				guesses--;
				marks -=10;
				}
				else if(match){
					guesses--;
				}
			if(blanks== word){
				gameOver =true; 
				cout<<"==============================================="<<endl;
				cout<<"YOU WON!"<<endl;
				cout<<"the word was: "<<word<<endl;
				cout<<"Your marks are "<<marks<<endl;
			}
			else if(guesses==0){
				gameOver = true;
				cout<<"You're out of guesses"<<endl;
				cout<<"==============================================="<<endl;
				cout<<"You lost"<<endl;
				cout<<"the word was: "<<word<<endl;
				cout<<"Your marks are "<<marks<<endl;
				
			}
			
		}
			break;
			}
				case 3:
			{
		int guesses=9;
		marks= (guesses*100)/guesses;
		int size= sizeof(basketball_teams)/sizeof(basketball_teams[0]);
		n=rand() %size  ;
		string word=basketball_teams[n];
		blanks= basketball_teams[n];
		for(char& c:blanks){
			c='-';
		}
			char lette[4];
		
		while(!gameOver){
			cout<<"The word is: "<<blanks<<endl;
			cout<<"Guesses remaining: "<<guesses<<endl;
			cout<<"Enter a letter to guess: ";
			cin>>lette;
			if(strcmp(lette,"exit")==0){
				cout<<"Thank you for playing our game";
				exit(1);
			}
				bool match=false; 
				int i=0;
				
			for(char d:word){
				if(lette[0]==d){
					blanks[i]=lette[0];
					match= true;
				}
			
				i++;
			}
				if(!match){
				cout<<"It doesn't contain "<<lette[0]<<endl;
				guesses--;
				marks -=10;
				}
				else if(match){
					guesses--;
				}
			if(blanks== word){
				gameOver =true;
				cout<<"==============================================="<<endl; 
				cout<<"YOU WON!"<<endl;
				cout<<"the word was: "<<word<<endl;
				cout<<"Your marks are "<<marks<<endl;
			}
			else if(guesses==0){
				gameOver = true;
				cout<<"You're out of guesses"<<endl;
				cout<<"==============================================="<<endl;
				cout<<"You lost"<<endl;
				cout<<"the word was: "<<word<<endl;
				cout<<"Your marks are "<<marks<<endl;
			}
			
		}
		
			break;
		}
		case 4:
			{
		int guesses=10;
		marks= (guesses*100)/guesses;
		int size= sizeof(movies)/sizeof(movies[0]);
		n=rand() %size  ;
		string word=movies[n];
		blanks= movies[n];
		for(char& c:blanks){
			c='-';
		}
			char lette[4];
		
		while(!gameOver){
			cout<<"The word is: "<<blanks<<endl;
			cout<<"Guesses remaining: "<<guesses<<endl;
			cout<<"Enter a letter to guess: ";
			cin>>lette;
			if(strcmp(lette,"exit")==0){
				cout<<"Thank you for playing our game";
				exit(1);
			}
				bool match=false; 
				int i=0;
				
			for(char d:word){
				if(lette[0]==d){
					blanks[i]=lette[0];
					match= true;
				}
			
				i++;
			}
				if(!match){
				cout<<"It doesn't contain "<<lette[0]<<endl;
				guesses--;
				marks -=10;
				}
				else if(match){
					guesses--;
				}
			if(blanks== word){
				gameOver =true; 
				cout<<"==============================================="<<endl;
				cout<<"YOU WON!"<<endl;
				cout<<"the word was: "<<word<<endl;
				cout<<"Your marks are "<<marks<<endl;
			}
			else if(guesses==0){
				gameOver = true;
				cout<<"You're out of guesses"<<endl;
				cout<<"==============================================="<<endl;
				cout<<"You lost"<<endl;
				cout<<"the word was: "<<word<<endl;
				cout<<"Your marks are "<<marks<<endl;
				
			}
			
		}
			break;
		}
				case 5:
			{
		int guesses=10;
		marks= (guesses*100)/guesses;
		int size= sizeof(artists)/sizeof(artists[0]);
		n=rand() %size  ;
		string word=artists[n];
		blanks= artists[n];
		for(char& c:blanks){
			c='-';
		}
			char lette[4];
		
		while(!gameOver){
			cout<<"The word is: "<<blanks<<endl;
			cout<<"Guesses remaining: "<<guesses<<endl;
			cout<<"Enter a letter to guess: ";
			cin>>lette;
			if(strcmp(lette,"exit")==0){
				cout<<"Thank you for playing our game";
				exit(1);
			}
				bool match=false; 
				int i=0;
				
			for(char d:word){
				if(lette[0]==d){
					blanks[i]=lette[0];
					match= true;
				}
			
				i++;
			}
				if(!match){
				cout<<"It doesn't contain "<<lette[0]<<endl;
				guesses--;
				marks -=10;
				}
				else if(match){
					guesses--;
				}
			if(blanks== word){
				gameOver =true; 
				cout<<"==============================================="<<endl;
				cout<<"YOU WON!"<<endl;
				cout<<"the word was: "<<word<<endl;
				cout<<"Your marks are "<<marks<<endl;
			}
			else if(guesses==0){
				gameOver = true;
				cout<<"You're out of guesses"<<endl;
				cout<<"==============================================="<<endl;
				cout<<"You lost"<<endl;
				cout<<"the word was: "<<word<<endl;
				cout<<"Your marks are "<<marks<<endl;
				
			}
			
		}
			break;
		}
			
		case 6:
			{
		int guesses=10;
		marks= (guesses*100)/guesses;
		int size= sizeof(books)/sizeof(books[0]);
		n=rand() %size  ;
		string word=books[n];
		blanks= books[n];
		for(char& c:blanks){
			c='-';
		}
			char lette[4];
		
		while(!gameOver){
			cout<<"The word is: "<<blanks<<endl;
			cout<<"Guesses remaining: "<<guesses<<endl;
			cout<<"Enter a letter to guess: ";
			cin>>lette;
			if(strcmp(lette,"exit")==0){
				cout<<"Thank you for playing our game";
				exit(1);
			}
				bool match=false; 
				int i=0;
				
			for(char d:word){
				if(lette[0]==d){
					blanks[i]=lette[0];
					match= true;
				}
			
				i++;
			}
				if(!match){
				cout<<"It doesn't contain "<<lette[0]<<endl;
				guesses--;
				marks -=10;
				}
				else if(match){
					guesses--;
				}
			if(blanks== word){
				gameOver =true; 
				cout<<"==============================================="<<endl;
				cout<<"YOU WON!"<<endl;
				cout<<"the word was: "<<word<<endl;
				cout<<"Your marks are "<<marks<<endl;
			}
			else if(guesses==0){
				gameOver = true;
				cout<<"You're out of guesses"<<endl;
				cout<<"==============================================="<<endl;
				cout<<"You lost"<<endl;
				cout<<"the word was: "<<word<<endl;
				cout<<"Your marks are "<<marks<<endl;
				
			}
			
		}
			break;
		}
		
		
		
				
		
	}
			cout<<"Would you like to play this game again?(y/n): ";
			cin>>cont;
			if(cont=='y'){
				goto start;
			}
			else if(cont=='n'){
			
				cout<<"Thank you for using our game";
				exit(1);
			}
			return 0;
}