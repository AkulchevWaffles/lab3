#include <iostream>
#include <fstream> 
#include <iomanip>
#include <vector>
using namespace std;
int sum = 0;

int main()
{
	std::vector<int> CL;
	ifstream Cows("D:\\Cows.txt");
	if (Cows.good()) {

		int current_number = 0;
		while (Cows >> current_number) {
			CL.push_back(current_number);
		}


		Cows.close();


		for (int count = 0; count < CL.size(); count++) {


		}

		int numcow = CL[0];



		const int size = 10;
		int init_array[size] =
		{ CL[1], CL[2], CL[3], CL[4], CL[5] , CL[6], CL[7], CL[8], CL[9], CL[10] };
		vector<int> rank(size);
		int insert, moveItem;


		for (int i = 0; i < size; ++i)
		{
			rank.at(i) = init_array[i];
		}

		for (int next = 1; next < size; ++next)
		{
			insert = rank.at(next);
			moveItem = next;
			while ((moveItem > 0) &&
				(rank.at(moveItem - 1) > insert))
			{
				rank.at(moveItem) = rank.at(moveItem - 1);
				--moveItem;
			}
			rank.at(moveItem) = insert;





			cout << endl;

			sum = rank[4] + rank[5] + rank[6] + rank[7] + rank[8] + rank[9];




		}

		cout << sum;

		system("pause");
		return 0;
	}
}