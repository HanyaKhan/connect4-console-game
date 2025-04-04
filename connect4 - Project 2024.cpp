												// Game-Connect 4-Project 2024
//*********************
//                   HEADER FILE USED IN PROJECT
//**********************

#include<iostream>
using namespace std;

//*********************
//                   FUNCTIONS USED IN PROJECT
//**********************

				//void mannual()                                     	
				//void manual2()											
				//void grid()												
				//void instruction()										
				//bool insertInColumn(int col, char player)					
				// to check== diagonal function 							
				//bool gameover(char player)								
				//bool draw()												
				//all comments												
			
//*********************
//                 GLOBAL VARIABLE'S INITILIZATION AND DECLARATION
//**********************


const int ROW = 6;
const int COL = 7;
char arr[ROW][COL];
int i, j, col;


//*********************
//                   DESIGN OF THE GAME
//**********************


								//the mannual will be shown

//*********************
//                   VOID MANUAL()
//**********************

void mannual()
{
    cout << "===================================================";
    cout << "===============================================" << endl;
    cout << " *********" << "  " << " *********" << "  " << "*" << "**" << "       *" << "   " << "*" << "**" << " " << "      *" << "  " << "********" << "    " << "***********" << " " << " ************ " << "  " << "" << endl;
    cout << "*" << "\t" << "     *" << "       *" << "  " << "*" << " **" << "      *" << "   " << "*" << " **" << " " << "     *" << "  " << "* " << "\t" << "     " << "  *" << "\t" << "   " << "       *" << "   " << "  *" << "       *" << endl;
    cout << "*" << "\t" << "     *""       *" << "  " << "*" << "  **" << "     *" << "   " << "*" << "  **" << " " << "    *" << "  " << "*" << "\t" << "     " << "  *" << "\t" << "   " << "       *" << "    " << " *" << "       *" << endl;
    cout << "*" << "\t" << "     *" << "       *" << "  " << "*" << "   **" << "    *" << "   " << "*" << "   **" << " " << "   *" << "  " << "*" << "\t" << "     " << "  *" << "\t" << "  " << "        *" << "    " << " *" << "       *" << endl;
    cout << "*" << "\t" << "     *" << "       *" << "  " << "*" << "    **" << "   *" << "   " << "*" << "    **" << " " << "  *" << "  " << "*********" << "   " << "*" << "\t" << "  " << "        *" << "    " << "  *" << "*******" << endl;
    cout << "*" << "\t" << "     *" << "       *" << "  " << "*" << "     **" << "  *" << "   " << "*" << "     **" << " " << " *" << "  " << "*" << "\t" << "     " << "  *" << "\t" << "  " << "        *" << "    " << "  " << "       *" << endl;
    cout << "*" << "\t" << "     *" << "       *" << "  " << "*" << "      **" << " *" << "   " << "*" << "      **" << " " << "*" << "  " << "*" << "\t" << "     " << "  *" << "\t" << "  " << "        *" << "    " << "  " << "       *" << endl;
    cout << "*" << "\t" << "     *" << "       *" << "  " << "*" << "       **" << "*" << "   " << "*" << "       **" << "" << "*" << "  " << "*" << "\t" << "     " << "  *" << "\t" << "  " << "        *" << "    " << "  " << "       *" << endl;
    cout << " *********" << "  " << " *********" << "                         " << "    **********" << " " << " **********" << endl;
    cout << "===================================================";
    cout << "===============================================" << endl;
    cout << endl;
    cout << "\t\t\t\t\t*****Welcome to Connect 4 and Aim for More!*****\t\t\t\t\t" << endl;
}

//*********************
//                   VOID MANUAL2()
//					"Game over" will be shown
//**********************

void manual2()
{
	cout<<"   _________                               ________"<<"          _________"<<"                _________"<<"     _________"<<endl;
	cout<<"  /         \\"<<"        /\\"<<"      |\\        /|"<<" |"<<"                "<<" /         \\"<<" \\          /"<<" |"<<"             |         |  |"<<endl;
	cout<<"  |           "<<"      /  \\" <<"     | \\      / |"<<" |"<<"                "<<" |         |"<<"  \\        /"<<"  |"<<"             |         |  |"<<endl;
	cout<<"  |            "<<"    /    \\" <<"    |  \\    /  |"<<" |"<<"         -----  "<<" |         |"<<"   \\      / "<<"  |"<<"             |_________|  |"                    <<endl;
	cout<<"  |        ___"<<"    /______\\"<<"   |   \\  /   |"<<" |________"<<"         "<<"|         |"<<"    \\    /  "<<"  |---------"<<"    | \\          |"        <<endl;
	cout<<"  |         | |"<<"  /        \\"<<"  |    \\/    |"<<" |        "<<"         "<<"|         |"<<"     \\  /   "<<"  |"      <<"             |  \\         |"<<endl;
	cout<<"  \\_________| |"<<" /          \\"<<" |          |"<<" |_________"<<"        "<<"\\_________/"<<"      \\/    "<<"  |_________"<<"    |   \\_____/  ."<<endl;
	cout<<endl<<endl<<endl;
	cout << "\t\t\t\t\t*****Connect 4: Align and Shine!*****\t\t\t\t\t" << endl;


}
//*********************
//                			void grid()
//				grid (which is interface of the game) will show.
//**********************

void grid() 
{	
	system("cls");
    cout << " 0 1 2 3 4 5 6" << endl;
    cout << " _ _ _ _ _ _ _" << endl;
    for (int i = 0; i < ROW; i++) 
	{
        for (int j = 0; j < COL; j++) 
		{
            cout << "|" << (arr[i][j] ? arr[i][j] : ' ');
        }
        cout << "|" << endl;
        cout << " _ _ _ _ _ _ _" << endl;
    }
}

//*********************
//                   VOID MANUAL2()
//			instructions for the new player to understand the game 
//**********************

void instruction() 
{
char choice1;
char choice2;
char choice3;
cout << "1.Press I to find Out the instructions :";
cin >> choice1;
if (choice1 == 'I' || choice1 == 'i')
{
    cout << "HOW TO PLAY:" << endl;
    cout << "Player take turns placing checkers into the grid until one player has a row of four of his/her checkers in a row. " << endl;
    cout << "The row can be up or down (vertical),across(horizontal)" << endl;
    cout << "The first player to make the row wins the game." << endl;
    cout << "--------------------------------------" << endl;
}
else
{
    cout << "INVALID CHARACTER" << endl;
    cout << "--------------------------------------" << endl;
}

cout << "2.Press R to find Out the Rules :";
cin >> choice2;
if (choice2 == 'r' || choice2 == 'R')
{
    cout << "GAME RULES:" << endl;
    cout << "Player1 will place X in the grid." << endl;
    cout << "Player2 will place O in the grid." << endl;
    cout << "Grid size is 6 * 7." << endl;
    cout << "--------------------------------------" << endl;
}
else
{
    cout << "INVALID CHARACTER" << endl;
    cout << "--------------------------------------" << endl;
}


cout << "3.Press P to Play : ";
cin >> choice3;

if (choice3 == 'P' || choice3 == 'p')
{
    grid();
    cout<<endl;
    cout << "--------------------------------------" << endl;
}
else
{
    cout << "INVALID CHARACTER" << endl;
    cout << "--------------------------------------" << endl;
}
return ;
    }
    
//*********************
//	                bool insertInColumn(int col, char player) 
//	         		to insert the 'x' and 'o' in columns	
//**********************
  
 
bool insertInColumn(int col, char player) 
{
    if (col < 0 || col >= COL) 
	{
        cout << "Invalid column. Please enter a value between 0 and 7  " << endl;
        return false;
    }

    for (i = ROW - 1; i >= 0; i--) 
	{
        if (arr[i][col] == '\0') 
		{
            arr[i][col] = player;
            return true;
        }
    }
    cout << "Column is full. Try another column." << endl;
    return false;
}

//*********************
//	  			       bool gameover(char player) 
//       to game over and to tell the user who is winnig the game 
//**********************


bool gameover(char player) 
{

	for (int i = 0; i < ROW; i++) 
	{
		for (int j = 0; j < COL - 3; j++) 
		{
			if (arr[i][j] == player && arr[i][j + 1] == player && arr[i][j + 2] == player && arr[i][j + 3] == player) 
			{
				return true;
			}
		}
	}

	for (int i = 0; i < ROW - 3; i++) 
	{
		for (int j = 0; j < COL; j++) 
		{
			if (arr[i][j] == player && arr[i + 1][j] == player && arr[i + 2][j] == player && arr[i + 3][j] == player) 
			{
				return true;
			}
		}
	}
	//check diagonals
for(int i=3;i<ROW;i++)
{
	//start from 3rd row for diagonal checks
	for(j=0;j<=COL-4;j++)
	{
		//adjusted for diagonal checks
		if(arr[i][j]==player&&arr[i-1][j+1]==player&&arr[i-2][j+2]==player&&arr[i-3][j+3]==player)
		{
			return true;
		}
	}
}
for(int i=0;i<=ROW-4;i++)
{
	//adjusted for bottom left to top right diagonal checks
	for(int j=0;j<=COL-4;j++)
	{
		if(arr[i][j]==player&&arr[i+1][j+1]==player&&arr[i+2][j+2]==player&&arr[i+3][j+3]==player)
		{
			return true;
		}
	}
}

	return false;
}

//*********************
//	  			       bool draw()
//       /to draw the game if both the user does not let any of them win
//**********************

bool draw() 
{
	for (int j = 0; j < COL; j++) 
	{
		if (arr[0][j] == '\0') 
		{
			return false;
		}
	}
	return true;
}
//main to hold every single thing any function
int main()
 {
	mannual();
    instruction();

	char player1 = 'x', player2 = 'o';
	int col;
	string name1, name2;

	for (int i = 0; i < ROW; i++) 
	{
		for (int j = 0; j < COL; j++) 
		{
			arr[i][j] = '\0';
		}
	}

	cout << "Enter the name of player 1: ";
	cin >> name1;
	cout << "Enter the name of player 2: ";
	cin >> name2;

	while (true) 
	{
		grid();


		cout << name1 << " will use " << player1 << " to play." << endl;
		cout << "Enter the column value: ";
		cin >> col;
		while (!insertInColumn(col, player1)) 
		{
			cout << "Enter the column value: ";
			cin >> col;
		}
		grid();

		if (gameover(player1)) 
		{

			cout << name1 << " wins!" << endl;
			break;
		}

		if (draw())
		{

			cout << "It's a draw!" << endl;
			break;
		}

		grid();
		cout << name2 << " will use " << player2 << " to play." << endl;
		cout << "Enter the column value: ";
		cin >> col;
		while (!insertInColumn(col, player2)) 
		{
			cout << "Enter the column value: ";
			cin >> col;
		}


		grid();
		if (gameover(player2))
		{

			cout << name2 << " wins!" << endl;

			break;

		}
		if (draw())
		{
			cout << "It's a draw!" << endl;
			break;
		}
	
	}
     manual2();


	return 0;
}







