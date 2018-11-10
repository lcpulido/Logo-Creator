// LuisPulidoProject.cpp : Defines the entry point for the console application.
//
/*Author: Luis Pulido
Program: This program lets the user create a dynamic banner
Input:The user should be able to select the logo, the message, and the border from the list of options that the program provides
Output: Program prints a picked logo and entered message with a chosen border 
 */

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>
#include <stdio.h>
#include <Windows.h>
using namespace std; 







//multidimensional array stores my letters 
const string Message[31][5]
{
	//draw my letters 
		{ 
	" # ",
	"# #",
	"###",
	"# #",
	"# #",
		}
	,
	{
		"## ",
		"# #",
		"## ",
		"# #",
		"## ",
	}
		,

	{
		" ##",
		"#  ",
		"#  ",
		"#  ",
		" ##",

	}
			,
		
	{
	  "## ",
	  "# #",
	  "# #",
	  "# #",
	  "## ",

		}
				,

		{
"###", 
"#  ",   
"## ",  
"#  ",   
"###",
		}	
					,
		
		{
			"###",
			"#  ",
			"## ",
			"#  ",
			"#  ",
		}
			,
		
		
		
		{
			" ##",
            "#  ",   
            "# #", 
            "# #", 
            " ##",
		},
		{
			"# #",
			"# #",
			"###", 
			"# #", 
			"# #",
		},

		{
			"###",
            " # ",  
            " # ",  
            " # ",  
            "###",
		},

		{
			" ##",
            "  #", 
            "  #", 
            "# #", 
            " # ", 
		},

		{

"# #", 
"# #", 
"## ",  
"# #", 
"# #",
		},

		{
"#  ",   
"#  ",   
"#  ",   
"#  ",   
"###",

		},
		{
"# #", 
"###",
"###", 
"# #", 
"# #", 
		},

		{
"###", 
"# #", 
"# #", 
"# #", 
"# #",
		},

		{
" # ",  
"# #", 
"# #",
"# #", 
" # ",
		},
		{
"## ",  
"# #", 
"## ",  
"#  ",   
"#  ", 
		},
		{
" # " , 
"# #", 
"# #", 
"## ", 
" # ", 
		},
		{
"## ",  
"# #", 
"## ",  
"# #", 
"# #",
		},
		{
			" ##",
            "#  ",  
            " # ", 
            "  #",
            "## ",
		},
		{
			"###",
            " # ",  
            " # ",  
            " # ",  
            " # ",
		},
		{
			  
"# #", 
"# #", 
"# #", 
"# #", 
"###",
		},
		{
			"# #",
			"# #",
			"# #",
			"# #",
			" # ",
		},
		{
"# #", 
"# #", 
"###", 
"###",
"# #",
		},
		{
"# #", 
"# #", 
" # ",  
"# #", 
"# #",
		},
		{
"# #", 
"# #", 
" # ",  
" # ", 
" # ",
		},
		{
"###", 
"  #", 
" # ",  
"#  ",   
"###", 
		},
		{
			"   ",
			"   ",
			"   ",
			"   ",
			"   ",
		},
		{
			"#  ",
			"#  ",
			"#  ",
			"   ",
			"#  ",
		},
		{
		   "  #",
           "#  ", 
           " ##",
           "# #",
           "###",
		},
		{
			"   ",
			" # ",
			"###",
			" # ",
			"   ",
		},
		{
			"   ",
			"   ",
			"   ",
			"   ",
			" # ",

		},
};

//function that prints all the letters so user can see
void Printletters()
{
	//loops untill all letters are shown 
	for (int i = 0; i < 31; i++)
	{
		for (int j = 0; j < 5; j++)//makes sure program prints all 5 lines 
		{
			
			cout << "\n" << Message[i][j];
		}
		cout << "\n";
	}
		
	 
}
//multidemensional array that holds my logos
//5 by 10 lines 
//www.geocities.com/spunk1111/small.htm for cup, igloo, ladybug, and clover
//www.asciiworld.com/-Geometry-.html for triangle 
const string Logo[5][10]=
{
	{ 
		"  _                    ",
		" | |                   ",
		" |~|                   ",
		" \\_/                   ",
		"  |                    ",
		" _|_                   ",
		"                       ",
		"                       ",
		"                       ",
		"                       ",
	},

	{
		"       __              ",
		"      /_/\\             ",
		"     / /\\ \\            ",
		"    / / /\\ \\           ",
		"   / / /\\ \\ \\          ",
		"  / /_/__\\ \\ \\         ",
		" /_/______\\_\\/\\        ",
		" \\_\\_________\\/        ",
		"                       ",
		"                       ",
	},

	{
		"       _..-.._         ",
		"  * .'_/ _ \\_'.        ",
		"    /_ _| __|_ _\\___   ",
		"    | _ |_ _| _ |  /\\  ",
		"    |___|___J___|__\\/  ",
		"                       ",
		"                       ",
		"                       ",
		"                       ",
		"                       ",


	},
	{
		"    .-.                ",
		"   ( . )               ",
		" .-.':'.-.             ",
		"(  =,!,=  )            ",
		" '-' | '-'             ",
		"                       ",
		"                       ",
		"                       ",
		"                       ",
		"                       ",

	},

	{
		"   _V_                 ",
		"  /___\\                ",
		" |o | o|               ",
		" \\o | o/               ",
		"  '-.-'                ",
		"                       ",
		"                       ",
		"                       ",
		"                       ",
		"                       ",
	},
};
//function to print my cup 
void PrintCup()
{
	cout << "\n";
	int i; 
	for (i = 0; i < 10; i++)//loop stops when all lines are printed 
		cout << "\n" << Logo[0][i];//logo 0 is my first picture in my array 

}

//function that prints the triangle when called
void PrintTriangle()
{
	cout << "\n\n";
	int i;
	for (i = 0; i < 10; i++)
		cout << "\n" << Logo[1][i]; //1 is my second picture 
}
//function that prints an Igloo 
void PrintIgloo()
{
	cout << "\n\n";
	for (int i = 0; i < 10; i++)
		cout << "\n" << Logo[2][i];
}
//function prints my clover
void PrintClover()
{
	cout << "\n\n";
	for (int i = 0; i < 10; i++)
		cout << "\n" << Logo[3][i];
}
//prints my lady bug 
void PrintLadybug()
{
	cout << "\n\n";
	for (int i = 0; i < 10; i++)
		cout << "\n" << Logo[4][i];
}

//function that prints logo + message +and first border 
void PrintwithBorder1()
{
	//display logos to user  
	cout << "Enter 0 for: ";
	PrintCup();//call function to print cup 
	cout << "\nEnter 1 for: ";
	PrintTriangle();//call function to print trianlg
	cout << "\nEnter 2 for: ";
	PrintIgloo();//print igloo
	cout << "\nEnter 3 for: ";
	PrintClover();//print clover
	cout << "\nEnter 4 for: ";
	PrintLadybug();//print ladybug 

	//arrays store my border 
	char border1[] = { (char)(218), (char)(196), (char)(191) };//will help me print out the top of border 
	char border2[] = { (char)(179), };//will help me print lines going up I only need char179
	char borderBottom[] = { (char)(192), (char)(196), (char)(217) };//will print bottom border 


	
	//tell user to pick a logo 
	cout << "\nPick logo: ";
	int option;
	cout << "\n";
	cin >> option;
	//after picking logo display the letters 
	Printletters();

	cout << "\n";

	//tell user to enter a message 
	cout << "\nEnter a message: ";
	//string makes sure program prints out all letters 
	string letters;
	cin >> letters;
	//windows library to add colors would not work unless I made letters.length into an int to use in my loops 
	
	int test = 4 * letters.length();//entered letters times 4 lines of space 
	int test2 = letters.length();//these ints will makes sure when i do my loop the border will go all the way and connect. 
	cout << "\n";
	cout << border1[0];//use position 0 of my first border array 
	for (int i = 0; i < (23 + test); i++)
	{// loop 196 untill a point I wanted that would get logos and letters 
		cout << border1[1];
	}
	cout << border1[2];// print out the right corner 
	for (int k = 0; k < 5; k++)
	{//print out the first 5 lines of entered logo 
		cout << "\n" << border2[0]<< Logo[option][k];
		//print out all the letters user enters 
		for (int i = 0; i < test2; i++)
		{
			//letters[l]

			//print out the letters user enters 
			if (letters[i] == 'A')
				cout << Message[0][k] << " ";
			else if (letters[i] == 'B')
				cout << Message[1][k] << " ";
			else if (letters[i] == 'C')
				cout << Message[2][k] << " ";
			else if (letters[i] == 'D')
				cout << Message[3][k] << " ";
			else if (letters[i] == 'E')
				cout << Message[4][k] << " ";
			else if (letters[i] == 'F')
				cout << Message[5][k] << " ";
			else if (letters[i] == 'G')
				cout << Message[6][k] << " ";
			else if (letters[i] == 'H')
				cout << Message[7][k] << " ";
			else if (letters[i] == 'I')
				cout << Message[8][k] << " ";
			else if (letters[i] == 'J')
				cout << Message[9][k] << " ";
			else if (letters[i] == 'K')
				cout << Message[10][k] << " ";
			else if (letters[i] == 'L')
				cout << Message[11][k] << " ";
			else if (letters[i] == 'M')
				cout << Message[12][k] << " ";
			else if (letters[i] == 'N')
				cout << Message[13][k] << " ";
			else if (letters[i] == 'O')
				cout << Message[14][k] << " ";
			else if (letters[i] == 'P')
				cout << Message[15][k] << " ";
			else if (letters[i] == 'Q')
				cout << Message[16][k] << " ";
			else if (letters[i] == 'R')
				cout << Message[17][k] << " ";
			else if (letters[i] == 'S')
				cout << Message[18][k] << " ";
			else if (letters[i] == 'T')
				cout << Message[19][k] << " ";
			else if (letters[i] == 'U')
				cout << Message[20][k] << " ";
			else if (letters[i] == 'V')
				cout << Message[21][k] << " ";
			else if (letters[i] == 'W')
				cout << Message[22][k] << " ";
			else if (letters[i] == 'X')
				cout << Message[23][k] << " ";
			else if (letters[i] == 'Y')
				cout << Message[24][k] << " ";
			else if (letters[i] == 'Z')
				cout << Message[25][k] << " ";
			else if (letters[i] == ' ')
				cout << Message[26][k] << " ";
			else if (letters[i] == '!')
				cout << Message[27][k] << " ";
			else if (letters[i] == '&')
				cout << Message[28][k] << " ";
			else if (letters[i] == '+')
				cout << Message[29][k] << " ";
			else if (letters[i] == '.')
				cout << Message[30][k] << " ";
			//if user enters lower case letters print out same as upper case
			else if (letters[i] == 'a')
				cout << Message[0][k] << " ";
			else if (letters[i] == 'b')
				cout << Message[1][k] << " ";
			else if (letters[i] == 'c')
				cout << Message[2][k] << " ";
			else if (letters[i] == 'd')
				cout << Message[3][k] << " ";
			else if (letters[i] == 'e')
				cout << Message[4][k] << " ";
			else if (letters[i] == 'f')
				cout << Message[5][k] << " ";
			else if (letters[i] == 'g')
				cout << Message[6][k] << " ";
			else if (letters[i] == 'h')
				cout << Message[7][k] << " ";
			else if (letters[i] == 'i')
				cout << Message[8][k] << " ";
			else if (letters[i] == 'j')
				cout << Message[9][k] << " ";
			else if (letters[i] == 'k')
				cout << Message[10][k] << " ";
			else if (letters[i] == 'l')
				cout << Message[11][k] << " ";
			else if (letters[i] == 'm')
				cout << Message[12][k] << " ";
			else if (letters[i] == 'n')
				cout << Message[13][k] << " ";
			else if (letters[i] == 'o')
				cout << Message[14][k] << " ";
			else if (letters[i] == 'p')
				cout << Message[15][k] << " ";
			else if (letters[i] == 'q')
				cout << Message[16][k] << " ";
			else if (letters[i] == 'r')
				cout << Message[17][k] << " ";
			else if (letters[i] == 's')
				cout << Message[18][k] << " ";
			else if (letters[i] == 't')
				cout << Message[19][k] << " ";
			else if (letters[i] == 'u')
				cout << Message[20][k] << " ";
			else if (letters[i] == 'v')
				cout << Message[21][k] << " ";
			else if (letters[i] == 'w')
				cout << Message[22][k] << " ";
			else if (letters[i] == 'x')
				cout << Message[23][k] << " ";
			else if (letters[i] == 'y')
				cout << Message[24][k] << " ";
			else if (letters[i] == 'z')
				cout << Message[25][k] << " ";
		
		}
		//right hand border 
		cout << border2[0];
	}
	for (int j = 5; j < 10; j++)
		cout << "\n" << border2[0] << Logo[option][j] << " " << setw(test) << border2[0]; //loop the rest of logo lines
	cout << "\n";
	cout << borderBottom[0];//left corner border
	for (int i = 0; i < (23 + test); i++)//loop border line till a certain point
		cout << borderBottom[1];
	cout << borderBottom[2];//right corner border 





	
	


}
//print with my second border 
void PrintwithBorder2()
{
	//display logos to user  
	cout << "Enter 0 for: ";
	PrintCup();//call function to print cup 
	cout << "\nEnter 1 for: ";
	PrintTriangle();//call function to print trianlg
	cout << "\nEnter 2 for: ";
	PrintIgloo();//print igloo
	cout << "\nEnter 3 for: ";
	PrintClover();//print clover
	cout << "\nEnter 4 for: ";
	PrintLadybug();//print ladybug 

	//store my chars into 3 different arrays I can use 
	char border1[] = { (char)(201), (char)(205), (char)(187) };//right corner and left corner in position 0 and 2 
	char border2[] = { (char)(186) };
	char borderBottom[] = { (char)(200), (char)(205), (char)(188) };
	//function will do the same as above but with a different border
	cout << "\nPick logo: ";
	int option;
	cout << "\n";
	cin >> option;//user picks logo 

	Printletters();

	cout << "\n";


	cout << "\nEnter a message: ";

	string letters;
	cin >> letters;// then enters a message in a string 
	int test = 4 * letters.length();//windows library to add colors would not work unless I made letters.length into an int to use in my loops 
	int test2 = letters.length();
	cout << "\n";
	cout << border1[0];
	for (int i = 0; i < (23 + test); i++)
	{//use char positions in array to draw top border 
		cout << border1[1];
	}
	cout << border1[2]; 
	for (int k = 0; k < 5; k++)
	{
		cout << "\n" << border2[0] << Logo[option][k];//program uses number entered by user to draw the logo 

		for (int i = 0; i < test2; i++)//loop length of entered message 
		{
			//letters[l]
			//if statment to change entered letter into my drawn letter

			if (letters[i] == 'A')
				cout << Message[0][k] << " ";
			else if (letters[i] == 'B')
				cout << Message[1][k] << " ";
			else if (letters[i] == 'C')
				cout << Message[2][k] << " ";
			else if (letters[i] == 'D')
				cout << Message[3][k] << " ";
			else if (letters[i] == 'E')
				cout << Message[4][k] << " ";
			else if (letters[i] == 'F')
				cout << Message[5][k] << " ";
			else if (letters[i] == 'G')
				cout << Message[6][k] << " ";
			else if (letters[i] == 'H')
				cout << Message[7][k] << " ";
			else if (letters[i] == 'I')
				cout << Message[8][k] << " ";
			else if (letters[i] == 'J')
				cout << Message[9][k] << " ";
			else if (letters[i] == 'K')
				cout << Message[10][k] << " ";
			else if (letters[i] == 'L')
				cout << Message[11][k] << " ";
			else if (letters[i] == 'M')
				cout << Message[12][k] << " ";
			else if (letters[i] == 'N')
				cout << Message[13][k] << " ";
			else if (letters[i] == 'O')
				cout << Message[14][k] << " ";
			else if (letters[i] == 'P')
				cout << Message[15][k] << " ";
			else if (letters[i] == 'Q')
				cout << Message[16][k] << " ";
			else if (letters[i] == 'R')
				cout << Message[17][k] << " ";
			else if (letters[i] == 'S')
				cout << Message[18][k] << " ";
			else if (letters[i] == 'T')
				cout << Message[19][k] << " ";
			else if (letters[i] == 'U')
				cout << Message[20][k] << " ";
			else if (letters[i] == 'V')
				cout << Message[21][k] << " ";
			else if (letters[i] == 'W')
				cout << Message[22][k] << " ";
			else if (letters[i] == 'X')
				cout << Message[23][k] << " ";
			else if (letters[i] == 'Y')
				cout << Message[24][k] << " ";
			else if (letters[i] == 'Z')
				cout << Message[25][k] << " ";
			else if (letters[i] == ' ')
				cout << Message[26][k] << " ";
			else if (letters[i] == '!')
				cout << Message[27][k] << " ";
			else if (letters[i] == '&')
				cout << Message[28][k] << " ";
			else if (letters[i] == '+')
				cout << Message[29][k] << " ";
			else if (letters[i] == '.')
				cout << Message[30][k] << " ";
			//if user enters lower case letters print out same as upper case
			else if (letters[i] == 'a')
				cout << Message[0][k] << " ";
			else if (letters[i] == 'b')
				cout << Message[1][k] << " ";
			else if (letters[i] == 'c')
				cout << Message[2][k] << " ";
			else if (letters[i] == 'd')
				cout << Message[3][k] << " ";
			else if (letters[i] == 'e')
				cout << Message[4][k] << " ";
			else if (letters[i] == 'f')
				cout << Message[5][k] << " ";
			else if (letters[i] == 'g')
				cout << Message[6][k] << " ";
			else if (letters[i] == 'h')
				cout << Message[7][k] << " ";
			else if (letters[i] == 'i')
				cout << Message[8][k] << " ";
			else if (letters[i] == 'j')
				cout << Message[9][k] << " ";
			else if (letters[i] == 'k')
				cout << Message[10][k] << " ";
			else if (letters[i] == 'l')
				cout << Message[11][k] << " ";
			else if (letters[i] == 'm')
				cout << Message[12][k] << " ";
			else if (letters[i] == 'n')
				cout << Message[13][k] << " ";
			else if (letters[i] == 'o')
				cout << Message[14][k] << " ";
			else if (letters[i] == 'p')
				cout << Message[15][k] << " ";
			else if (letters[i] == 'q')
				cout << Message[16][k] << " ";
			else if (letters[i] == 'r')
				cout << Message[17][k] << " ";
			else if (letters[i] == 's')
				cout << Message[18][k] << " ";
			else if (letters[i] == 't')
				cout << Message[19][k] << " ";
			else if (letters[i] == 'u')
				cout << Message[20][k] << " ";
			else if (letters[i] == 'v')
				cout << Message[21][k] << " ";
			else if (letters[i] == 'w')
				cout << Message[22][k] << " ";
			else if (letters[i] == 'x')
				cout << Message[23][k] << " ";
			else if (letters[i] == 'y')
				cout << Message[24][k] << " ";
			else if (letters[i] == 'z')
				cout << Message[25][k] << " ";


		}

		cout << border2[0];
	}
	for (int j = 5; j < 10; j++)
		cout << "\n" << border2[0] << Logo[option][j] << " " << setw(test) << border2[0];//draws rest of my logo if any
	cout << "\n";
	cout << borderBottom[0];//draws my bottom border using chars postions in array 
	for (int i = 0; i <(23 + test); i++)
		cout << borderBottom[1];
	cout << borderBottom[2];

	

	

}
//print with my 3rd border 
void PrintwithBorder3()
{
	
	//display logos to user  
	cout << "Enter 0 for: ";
	PrintCup();//call function to print cup 
	cout << "\nEnter 1 for: ";
	PrintTriangle();//call function to print trianlg
	cout << "\nEnter 2 for: ";
	PrintIgloo();//print igloo
	cout << "\nEnter 3 for: ";
	PrintClover();//print clover
	cout << "\nEnter 4 for: ";
	PrintLadybug();//print ladybug 
	int option;
	cout << "\n"; 
	cin >> option;//user picks logo 


	Printletters();
	
	cout << "\n";
	

	cout << "\nEnter a message: ";
	//user enters message
	string letters;
	cin >> letters;
	char border1[] = { (char)(178) };//for this border I only need one char in one postion 
	int test = 4 * letters.length();//windows library to add colors would not work unless I made letters.length into an int to use in my loops 
	int test2 = letters.length(); 
	cout << "\n";
	cout << border1[0];
	for (int i = 0; i < (24 + test); i++)
	{//loop untill I want it 
		cout << border1[0];
	}

	for (int k = 0; k < 5; k++)
	{//loop 5 lines of entered logo 
		
		cout << "\n" << border1[0] << Logo[option][k];

		for (int i = 0; i < test2; i++)//loop until end of what user entered 
		{
			//letters[l]


			if (letters[i] == 'A')
				cout << Message[0][k] << " ";
			else if (letters[i] == 'B')
				cout << Message[1][k] << " ";
			else if (letters[i] == 'C')
				cout << Message[2][k] << " ";
			else if (letters[i] == 'D')
				cout << Message[3][k] << " ";
			else if (letters[i] == 'E')
				cout << Message[4][k] << " ";
			else if (letters[i] == 'F')
				cout << Message[5][k] << " ";
			else if (letters[i] == 'G')
				cout << Message[6][k] << " ";
			else if (letters[i] == 'H')
				cout << Message[7][k] << " ";
			else if (letters[i] == 'I')
				cout << Message[8][k] << " ";
			else if (letters[i] == 'J')
				cout << Message[9][k] << " ";
			else if (letters[i] == 'K')
				cout << Message[10][k] << " ";
			else if (letters[i] == 'L')
				cout << Message[11][k] << " ";
			else if (letters[i] == 'M')
				cout << Message[12][k] << " ";
			else if (letters[i] == 'N')
				cout << Message[13][k] << " ";
			else if (letters[i] == 'O')
				cout << Message[14][k] << " ";
			else if (letters[i] == 'P')
				cout << Message[15][k] << " ";
			else if (letters[i] == 'Q')
				cout << Message[16][k] << " ";
			else if (letters[i] == 'R')
				cout << Message[17][k] << " ";
			else if (letters[i] == 'S')
				cout << Message[18][k] << " ";
			else if (letters[i] == 'T')
				cout << Message[19][k] << " ";
			else if (letters[i] == 'U')
				cout << Message[20][k] << " ";
			else if (letters[i] == 'V')
				cout << Message[21][k] << " ";
			else if (letters[i] == 'W')
				cout << Message[22][k] << " ";
			else if (letters[i] == 'X')
				cout << Message[23][k] << " ";
			else if (letters[i] == 'Y')
				cout << Message[24][k] << " ";
			else if (letters[i] == 'Z')
				cout << Message[25][k] << " ";
			else if (letters[i] == ' ')
				cout << Message[26][k] << " ";
			else if (letters[i] == '!')
				cout << Message[27][k] << " ";
			else if (letters[i] == '&')
				cout << Message[28][k] << " ";
			else if (letters[i] == '+')
				cout << Message[29][k] << " ";
			else if (letters[i] == '.')
				cout << Message[30][k] << " ";
			//if user enters lower case letters print out same as upper case
			else if (letters[i] == 'a')
				cout << Message[0][k] << " ";
			else if (letters[i] == 'b')
				cout << Message[1][k] << " ";
			else if (letters[i] == 'c')
				cout << Message[2][k] << " ";
			else if (letters[i] == 'd')
				cout << Message[3][k] << " ";
			else if (letters[i] == 'e')
				cout << Message[4][k] << " ";
			else if (letters[i] == 'f')
				cout << Message[5][k] << " ";
			else if (letters[i] == 'g')
				cout << Message[6][k] << " ";
			else if (letters[i] == 'h')
				cout << Message[7][k] << " ";
			else if (letters[i] == 'i')
				cout << Message[8][k] << " ";
			else if (letters[i] == 'j')
				cout << Message[9][k] << " ";
			else if (letters[i] == 'k')
				cout << Message[10][k] << " ";
			else if (letters[i] == 'l')
				cout << Message[11][k] << " ";
			else if (letters[i] == 'm')
				cout << Message[12][k] << " ";
			else if (letters[i] == 'n')
				cout << Message[13][k] << " ";
			else if (letters[i] == 'o')
				cout << Message[14][k] << " ";
			else if (letters[i] == 'p')
				cout << Message[15][k] << " ";
			else if (letters[i] == 'q')
				cout << Message[16][k] << " ";
			else if (letters[i] == 'r')
				cout << Message[17][k] << " ";
			else if (letters[i] == 's')
				cout << Message[18][k] << " ";
			else if (letters[i] == 't')
				cout << Message[19][k] << " ";
			else if (letters[i] == 'u')
				cout << Message[20][k] << " ";
			else if (letters[i] == 'v')
				cout << Message[21][k] << " ";
			else if (letters[i] == 'w')
				cout << Message[22][k] << " ";
			else if (letters[i] == 'x')
				cout << Message[23][k] << " ";
			else if (letters[i] == 'y')
				cout << Message[24][k] << " ";
			else if (letters[i] == 'z')
				cout << Message[25][k] << " ";

		}
		
		cout << border1[0];
	}
	for (int j = 5; j < 10; j++)
		cout << "\n" << border1[0] << Logo[option][j] << " " << setw(test) << border1[0];//draw rest of logo lines 
	cout << "\n";
	for (int i = 0; i < (25 +test); i++)//finish bottom border 
	{//stops at 25 lines of logo + length of entered text
		cout << border1[0];
	}
	
}

HANDLE hConsole;


int _tmain(int argc, _TCHAR* argv[])
{
	
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 10);//makes the font een 
	
	//display borders to user 
	//font color

	cout << "\n\n Border 1:";
	cout << "\n";
	cout << "\n " << (char)(218) << (char)(196) << (char)(196) << (char)(196) << (char)(191);
	cout << "\n " << (char)(179) << "   " << (char)(179);
	cout << "\n " << (char)(179) << "   " << (char)(179);
	cout << "\n " << (char)(192) << (char)(196) << (char)(196) << (char)(196) << (char)(217);
	cout << "\n\nBorder 2:";
	cout << "\n";
	cout << "\n " << (char)(201) << (char)(205) << (char)(205) << (char)(205) << (char)(187);
	cout << "\n " << (char)(186) << "   " << (char)(186);
	cout << "\n " << (char)(186) << "   " << (char)(186);
	cout << "\n " << (char)(200) << (char)(205) << (char)(205) << (char)(205) << (char)(188);
	cout << "\n\nBorder 3:";
	cout << "\n";
	cout << "\n " << (char)(178) << (char)(178) << (char)(178) << (char)(178) << (char)(178);
	cout << "\n " << (char)(178) << "   " << (char)(178);
	cout << "\n " << (char)(178) << "   " << (char)(178);
	cout << "\n " << (char)(178) << (char)(178) << (char)(178) << (char)(178) << (char)(178);
	//border
	int border;
	//start program by letting user pick a border
	do{
		
		cout << "\nPick a border: ";
		cin >> border;

	} while (!(border <= 3) && (border >= 1));//make sure user enters a number between 1 and 3 
	if (border == 1)
		PrintwithBorder1();//if user picks first border go to function to pick logo and message
	else if (border == 2)
		PrintwithBorder2();//if user picks second border go to function to pick logo and message
	else if (border == 3)
		PrintwithBorder3();//if user picks third border go to function to pick logo and message
	cout << "\n";






	cout << "\n\n\nPress any key to continue..."; 
	_getch(); 
	return 0;
}

