/*
Lista 5 - Questão 9
9. Implemente o jogo da velha usando uma matriz como tabuleiro.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

bool checkWin(vector<vector<char>>& b, char p){
    for(int i=0;i<3;i++) if(b[i][0]==p && b[i][1]==p && b[i][2]==p) return true;
    for(int j=0;j<3;j++) if(b[0][j]==p && b[1][j]==p && b[2][j]==p) return true;
    if(b[0][0]==p && b[1][1]==p && b[2][2]==p) return true;
    if(b[0][2]==p && b[1][1]==p && b[2][0]==p) return true;
    return false;
}

int main(){
    vector<vector<char>> board(3, vector<char>(3,' '));
    char player = 'X';
    int moves = 0;
    while(true){
        cout<<"\nTabuleiro:\n";
        for(int i=0;i<3;i++){ for(int j=0;j<3;j++) cout<< (board[i][j]==' ' ? '.' : board[i][j]) <<" "; cout<<"\n"; }
        int r,c;
        cout<<"Jogador "<<player<<" - digite linha(1-3) e coluna(1-3): "; cin>>r>>c;
        if(r<1||r>3||c<1||c>3 || board[r-1][c-1]!=' '){ cout<<"Posicao invalida. Tente novamente.\n"; continue; }
        board[r-1][c-1]=player; moves++;
        if(checkWin(board, player)){ cout<<"Jogador "<<player<<" venceu!\n"; break; }
        if(moves==9){ cout<<"Empate!\n"; break; }
        player = (player=='X')? 'O':'X';
    }
    return 0;
}
