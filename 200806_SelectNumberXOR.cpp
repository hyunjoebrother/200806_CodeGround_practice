//200806
//CodeGround �������� 1�� ���� ��󳻱�

#include <stdio.h>

#include <iostream>
using namespace std;

int Answer;
/*
int XOR(int t1, int t2) //XOR ���� �Լ�
{
	if (t1 == t2)
		return 0;
	else
		return 1;
}
*/

int main(int argc, char** argv)
{
	int T, test_case;

	//freopen("sample_input.txt", "r", stdin);

	cin >> T;
	for (test_case = 0; test_case < T; test_case++)
	{

		Answer = 0;

		int N; //���� ����
		cin >> N;

		for (int i = 0; i < N; i++)
		{
			int t;
			cin >> t; //���ڵ� �Է�
			//Answer = XOR(t, t);
			Answer ^= t; //XOR ������
		}
		/////////////////////////////////////////////////////////////////////////////////////////////

		// Print the answer to standard output(screen).
		cout << "Case #" << test_case + 1 << endl;
		cout << Answer << endl;
	}


	return 0;//Your program should return 0 on normal termination.
}