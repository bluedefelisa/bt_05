#include<iostream>
#include<cstdlib>
#include<ctime>


using namespace std;

int do_min_xq(bool arr[100][100], int m, int n, int x, int y)
{
    int sum = 0;
    int vt_h_t = y-1, vt_c_t = x-1, vt_h_d = y+1, vt_c_p = x+1;
    if(vt_h_t < 0) vt_h_t = 0;
    if(vt_c_t < 0) vt_c_t = 0;
    if(vt_h_d >= m) vt_h_d = m-1;
    if(vt_c_p >= n) vt_c_p = n-1;
    for(int i = vt_h_t;i <= vt_h_d; i++)
    {
        for(int j = vt_c_t; j <= vt_c_p; j++)
        {
            if(arr[i][j] == true)
            {
                sum++;
            }
        }
    }
    return sum;
}
void EndMap(char a[100][100], bool arr[100][100], int m, int n)
{
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(arr[i][j] == true)
            {
                a[i][j] = 'M';
            }
        }
    }
}
void GetMap(char arr[100][100], bool check[100][100], int a, int b, bool end)
{
    if(end == true)
    {
        EndMap(arr, check, a, b);
    }
    for(int i = 1; i <= a; i++)
    {
        for(int j = 1 ; j <= b; j++)
        {
            cout << arr[i][j] << " ";
        }   cout << endl;
    }cout << "\n\n\n\n";
}



int main(){
    srand(time(NULL));
    int m, n, p;
    cout << "Nhap so hang: "; cin >> m;
    cout << "Nhap so cot: "; cin >> n;
    cout << "Nhap so min: "; cin >> p;
    char Map[100][100];
    bool mine[100][100], end = false;
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            Map[i][j] = '*';
            mine[i][j] = false;
        }
    }
    for(int i = 1; i <= p; i++)
    {
        int x = rand()%m, y = rand()%n;//x: hang, y: cot
        mine[x][y] = true;
    }
    GetMap(Map, mine, m, n, end);
    for(int i = 0; i < 6; i++)
    {
        int x, y;//x: cot, y: hang
        cout << "Nhap toa do x: "; cin >> x;
        cout << "Nhap toa do y: "; cin >> y;

        if(mine[y][x] == true)
        {
            end = true;
            cout << "YOU ARE DEAD!" << endl;
            GetMap(Map, mine, m, n, end);
            return 0;
        }else
        {
            cout << do_min_xq(mine, m, n, x, y) << endl;
            Map[y][x] = char(do_min_xq(mine, m, n, x, y)+48);
            GetMap(Map, mine, m, n, end);
        }
    }
    end = true;
    cout << "You win!" << endl;
    GetMap(Map, mine, m, n, end);

    return 0;
}

