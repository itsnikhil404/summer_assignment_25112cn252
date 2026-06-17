#include<iostream>
using namespace std; 
bool winner(char a[3][3], char ch)
{
    for(int i=0;i<3;i++)
    {
        if(a[i][0]==ch && a[i][1]==ch && a[i][2]==ch)
            return true;

        if(a[0][i]==ch && a[1][i]==ch && a[2][i]==ch)
            return true;
    }

    if(a[0][0]==ch && a[1][1]==ch && a[2][2]==ch)
        return true;

    if(a[0][2]==ch && a[1][1]==ch && a[2][0]==ch)
        return true;

    return false;
}
void placemark(int board[][3],char result[][3],int n , char mark){
    
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0; j<3 ; j++){
            if(board[i][j]==n && result[i][j]== ' '){
                result[i][j]= mark ;
            }
        }
    }
}
int main(){
    int board[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    char result[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
    for(int i= 0 ; i<3 ; i++){
        for(int j = 0 ; j<3 ; j++){
            cout<<board[i][j]<< " ";
        }
        cout<<endl;
    }
    for(int k = 0 ; k<9 ; k++){
        char mark; 
        if(k%2==0){
            cout<<"X's turn"<<endl;
            mark = 'X';
        }
        else {
            cout << "O's turn"<<endl;
            mark = 'O';
        }

        int n ; 
    cout << "enter value of board where u want to print X or O as turn ";
    cin >> n ;
    placemark(board,result,n,mark);
     for(int i= 0 ; i<3 ; i++){
        for(int j = 0 ; j<3 ; j++){
            cout<<result[i][j]<< " ";
        }
        cout<<endl;
    }
if(k==8){
     if(winner(result,mark)){
        cout<< mark << " is winner";
        break;
    }
else {
    cout << "draw";
}
}
    }
}