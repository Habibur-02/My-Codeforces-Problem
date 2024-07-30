#include<bits/stdc++.h>
using namespace std;
#define ll long long
int dx[]={0,-1,0,1,1,-1,-1,1};
int dy[]={1,0,-1,0,1,1,-1,-1};

#define nl '\n'
#define s_i stoi(string s)
#define i_s to_string(num)
const ll INF=numeric_limits<ll>::max()-1;
#define ll_inf (1LL << 62)
#define inf (1 << 30)
#define SetBit(x, k) (x = (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define yes cout << "YES\n"
#define no cout << "NO\n"







void forward(float x[4], float y[4][4], int n);
void BackWard(float x[4], float y[4][4], int n);

void curvefittinf()
{

int i;
int n;
 cout<<"How many data points? " << endl;
 cin >> n;
 int x[n],y[n];

 for(i=1;i<=n;i++)
 {
  cout << "x["<< i <<"] = ";
  cin >> x[i];
  cout << "y["<< i <<"] = ";
  cin >> y[i];
 }

int sumX,sumX2,sumY,sumXY;
 for(i=1;i<=n;i++)
 {
  sumX = sumX + x[i];
  sumX2 = sumX2 + x[i]*x[i];
  sumY = sumY + log(y[i]);
  sumXY = sumXY + x[i]*log(y[i]);
 }


int  B = (n*sumXY-sumX*sumY)/(n*sumX2-sumX*sumX);
 int A = (sumY - B*sumX)/n;


int  a = exp(A);
int  b = exp(B);


 cout << "Values are: a = " << a << " and b = " << b;






}

double func(double x)
{
    return x*x*x - x*x + 2;
}

// Derivative of the above function which is 3*x^x - 2*x
double derivFunc(double x)
{
    return 3*x*x - 2*x;
}

// Function to find the root
void newtonRaphson(double x)
{
    int EPSILON=4;
    double h = func(x) / derivFunc(x);
    while (abs(h) >= EPSILON)
    {
        h = func(x)/derivFunc(x);

        // x(i+1) = x(i) - f(x) / f'(x)
        x = x - h;
    }

    cout << "The value of the root is : " << x;
}



void forward(float x[4], float y[4][4], int n)
{
	int i, j;
	float a = 0.5; // interpolation point
	float h, u, sum, p;
	for (j = 1; j < n; j++) {
		for (i = 0; i < n - j; i++) {
			y[i][j] = y[i + 1][j - 1] - y[i][j - 1];
		}
	}
	printf("\n The forward difference table is:\n");
	for (i = 0; i < n; i++) {
		printf("\n");
		for (j = 0; j < n - i; j++) {
			printf("%f\t", y[i][j]);
		}
	}

	p = 1.0;
	sum = y[0][0];
	h = x[1] - x[0];
	u = (a - x[0]) / h;
	for (j = 1; j < n; j++) {
		p = p * (u - j + 1) / j;
		sum = sum + p * y[0][j];
	}
	printf("\nThe value of y at x=%0.1f is %0.3f", a, sum);
}
void BackWard(float x[4], float y[4][4], int n)
{
	int i, j;
	float a = 0.5; // interpolation point
	float h, u, sum, p;
	for (j = 1; j < n; j++) {
		for (i = j; i < n; i++) {
			y[i][j] = y[i][j - 1] - y[i - 1][j - 1];
		}
	}
	printf("\nThe backward difference table is:\n");
	for (i = 0; i < n; i++) {
		printf("\n");
		for (j = 0; j <= i; j++) {
			printf("%f\t", y[i][j]);
		}
	}

	p = 1.0;
	sum = y[n - 1][0];
	h = x[1] - x[0];
	u = (a - x[n - 1]) / h;
	for (j = 1; j < n; j++) {
		p = p * (u + j - 1) / j;
		sum = sum + p * y[n - 1][j];
	}

	printf("\nThe value of y at x=%0.1f is %0.3f", a, sum);
}
int main()
{
	int i, j;
	int n = 4;
	float x[4] = { 0, 1, 2, 3 };
	float y[4][4] = {
		{ 1, 0, 0, 0 },
		{ 0, 0, 0, 0 },
		{ 1, 0, 0, 0 },
		{ 10, 0, 0, 0 },
	};



	forward(x, y, n);
	BackWard(x, y, n);
	double x0 = -20; // Initial values assumed
    newtonRaphson(x0);
    curvefittinf();

	return 0;
}

