#include<bits/stdc++.h>
#define push_back pub
#define pop_back pob
#define print(name) print_(#name, (name))

using namespace std;

template<typename T>
void print_(string s, T b){
    cout << s << " " << b << endl;
}

void print_mat(int mat[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
}

void print_arr(int arr[3]){
    for(int i = 0; i < 3; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void solve(){
    int mat[3][3] = {0};
    int gitti[3] = {0};
    int moves[3] = {0};
    for(int i = 0; i < 3; i++){
        //string s;
        //char c_arr[3];
        //cin >> s;
        //strcpy(c_arr, s.c_str());
        for(int j = 0; j < 3; j++){
            char temp;
            cin >> temp;
            if(temp == '_') {mat[i][j] = 0; moves[0]++;}
            if(temp == 'X') {mat[i][j] = 1; moves[1]++;}
            if(temp == 'O') {mat[i][j] = 2; moves[2]++;}
        }
    }
    for(int i = 0; i < 3; i++){
        if(mat[i][0] == mat[i][1] && mat[i][1] == mat[i][2]){
            gitti[mat[i][0]]++;
        }
        if(mat[0][i] == mat[1][i] && mat[1][i] == mat[2][i]){
            gitti[mat[0][i]]++;
        }
    }
    
    if(mat[0][0] == mat[1][1] && mat[1][1] == mat[2][2]) gitti[mat[0][0]]++;
    if(mat[0][2] == mat[1][1] && mat[1][1] == mat[2][0]) gitti[mat[1][1]]++;

    //conditions
    /*
    cout << "Gitti\n";
    print_arr(gitti);
    cout << "\n moves\n";
    print_arr(moves);
    cout << "\n";
    */
    if(moves[2] > moves[1]) cout << 3 << endl;
    else if(moves[1] - moves[2] > 1) cout << 3 << endl;
    else if(moves[1] > moves[2] && gitti[1] == 1 && gitti[2] == 0) cout << 1 << endl;   //x won normally
    else if(moves[1] == moves[2] && gitti[1] == 0 && gitti[2] == 1) cout << 1 << endl;  //O won normally
    else if(moves[0] == 0 && gitti[1] + gitti[2] == 0) cout << 1 << endl; //draw
    else if(moves[0] == 0 && gitti[1] == 2) cout << 1 << endl;
    else if(moves[0] > 0 && gitti[1] + gitti[2] == 0) cout << 2 << endl;
    else cout << 3 << endl;
    return;
}

int32_t main(){
/*
ios_base::sync_with_stdio(false);
cin.tie(NULL);
*/
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}