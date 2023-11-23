#include<iostream>
#include<iomanip>
#include <string>
using namespace std;
int main()
//{// Question # 1
//	int num, n1;
//	cout << "Enter a number : ";
//	cin >> num;
//	cout << "Factors of number " << num<<" are :";
//	for (int j = 1; j <= 1; j++)
//	{
//		for (int i = 1; i <= num; i++)
//		{
//			if (num % i != 0)
//			{
//				continue;
//			}
//			if (num % i == 0)
//			{
//				cout<<setw(3) << i;
//			}
//		}
//	}
//	return 0;
//}
//{// Question # 3
//	int val,x=0,y=1;
//	cout << "Enter a value : ";
//	cin >> val;
//	if (val > 10 && val <= 20)
//	{
//		cout << ++x;
//	}
//	else
//	{
//		cout << --y;
//	}
//	return 0;
//}
//{ // Question # 4
//	int N, check;
//	cout << "Enter a number: ";
//	cin >> N;
//	while (N >= 2) 
//	{
//		check = 0;
//		for (int j = 1; j <= N; ++j) 
//		{
//			if (N % j == 0) 
//			{
//				check++;
//			}
//		}
//		if (check == 2) 
//		{
//			cout << "The largest prime number less than or equal to is : " << N << endl;
//			break;
//		}
//		else
//		{
//			--N;
//		}
//	}
//	return 0;
//}
//{ // Question # 5
//	string str1, str2, reverse;
//	reverse = "";
//	cout << "Enter 1st String: ";
//	cin >> str1;
//	cout << "Enter 2nd String: ";
//	cin >> str2;
//	if (str1 == str2) {
//		for (int i = 0; i < str1.length(); i++) {
//			reverse = str1[i] + reverse;
//		}
//		cout << "Strings are equal. Reversed string is: ";
//		cout << reverse;
//	}
//	else {
//		cout << "The Strings are not equal";
//	}
//	return 0;
//}
//{ // Questin # 6
//	int divd, div, r, q;
//	cout << "Enter dividend : ";
//	cin >> divd;
//	cout << "Enter divisor : ";
//	cin >> div;
//	if (div>divd) {
//		cout << "Enter a dividend greater than divisor.";
//		return 1;
//	}
//	r = divd;
//	for (int i = 1; i <= divd; i++) {
//		r -= div;
//		if (div>r) {
//			q = i;
//			break;
//		}
//	}
//	cout << divd << " / " << div << " = " << q;
//	return 0;
//}
////{ // Question # 7
////	string str1;
////	int length;
////	cout << "Enter the string: ";
////	getline(cin, str1);
////	length = str1.length();
////	for (int i = 0; i <= length; i++) {
////		for (int j = 0; j <= length; j++) {
////			if (tolower(str1[i]) == tolower(str1[j]) && i != j) {
////				str1.erase(j, 1);
////				j--;
////				length = str1.length();
////			}
////		}
////	}
////	cout << "The string without duplicate letters is: " << str1;
////	return 0;
////}
{ // Question # 8
	int n, a[5] = { 1,2,3,4,5 };
	cout << "Original array is : ";
	for (int i = 0; i < 5; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "Enter the no. of of elements you want to add : ";
	cin >> n;
	for (int i = 5; i < 5 + n; i++) {
		a[i] = i + 1;
	}
	cout << "Array with the no. of elements add: ";
	for (int i = 0; i < 5 + n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}
////{ // Question # 9
////	int a, b, c, X, sum, arr[10];
////	cout << "Enter 10 integers : ";
////	for (int i = 0; i < 10; i++) {
////		cin >> arr[i];
////	}
////	bool found = false;
////	cout << "Enter integer for triplets : ";
////	cin >> X;
////	cout << "Triplets are : ";
////	for (int i = 0; i < 10; i++) {
////		for (int j = 0; j < 10; j++) {
////			if (i == j)
////				continue;
////			for (int z = 0; z < 10; z++) {
////				if (z == i || z == j)
////					continue;
////				sum = arr[i] + arr[j] + arr[z];
////				if (sum == X) {
////					cout << " (" << arr[i] << ", " << arr[j] << ", " << arr[z] << ")";
////					found = true;
////				}
////			}
////		}
////	}
////	if (found == false) {
////		cout << "No Triplets Found";
////	}
////	return 0;
////}
//{ // Question # 10
//	int temp, x = 6, arr[6];
//	cout << "Enter six integers for array: ";
//	for (int i = 0; i < x; i++) {
//		cin >> arr[i];
//	}
//	for (int j = 0; j < (x - 1); j++) {
//		for (int i = 0; i < (x - 1); i++) {
//			if (arr[i] > arr[i + 1]) {
//				temp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = temp;
//			}
//		}
//	}
//	cout << "Final Array is: {";
//	for (int i = 0; i < x; i++) {
//		cout << arr[i];
//		if (i == x - 1)
//			continue;
//		cout << ",";
//	}
//	cout << "}";
//	return 0;
//}