#include <iostream>

using namespace std;

void drawboard(ostream &, char [][7], int, int);
int turn(int player, char board [][7], int rows, int columns);
int rulewin(char board[][7], int rows, int columns, int baris, int kolom);

int main () {
	
  char board[6][7] = {0};
  
  int player;
  int row;
  int col;
  int times;
  bool win; 	
  int baris;
  int kolom;
  
  
  drawboard(cout, board,6,7);
  
 while (player = 1){
  turn(player, board, 6, 7);
  rulewin(board, 6, 7, baris, kolom);
  
  
  player = 2;
  turn(player, board, 6, 7);
  rulewin(board, 6, 7, baris, kolom);
}

  return 0;
}

void drawboard(ostream & cout, char b[][7], int r, int c) {
  cout << endl;
  for (int x = r-1; x >= 0; x--) {
    cout << "  |";
    for (int y = 0; y < c-1; y++)
      cout << "----";
    cout << "---|" << endl << x << " |";
    for (int y = 0; y < c-1; y++)
      if (b[x][y] == 0)
	cout << "   |";
      else
	cout << " " << b[x][y] << " |";
    if (b[x][c-1] == 0)
      cout << "   |" << endl;
    else
      cout << " " << b[x][c-1] << " |" << endl;
  }
	
  cout << "  |";
  for (int y = 0; y < c-1; y++)
    cout << "----";
  cout << "---|" << endl; 
  
  cout << " ";
  for (int y = 0; y < c; y++)
    cout << "   " << y;
    
  cout << endl;
} 

int turn(int player, char board[][7], int rows, int columns){
 
  char symbol;

  if(player == 1)
    symbol = 'X';
  else
    symbol = 'O';

  int col;	
  cout << " Turn Player " << player << " : " ;
  cin >> col;	
	
  while ((col < 0) || (col >= columns)){
    cout << "Invalid, Pilih kolom lain: ";
    cin >> col;
  }	
 
  int row;
  for(row = 5; row >= 0; row--){ 
    if(board[row][col] != 0)
      break;
  }  

  board[row+1][col] = symbol;
  if (row == 'X' || row == 'O'){
		cout << "Kolom " << col << " Penuh, Pilih kolom lain: ";
		cin >> col;
	}else{
	drawboard(cout, board, 6, 7);
	}
 } 
  
int rulewin(char board[6][7], int rows, int columns, int baris, int kolom){
	
}
