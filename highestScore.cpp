
/*
given an array scores [][] = {“jerry”,”65”},{“bob”,”91”}, {“jerry”,”23”}, {“Eric”,”83”}} Find the student with highest average score.
*/

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {

	string scores[][2] ={{"jerry","65"},{"bob", "91"}, 
						 {"jerry", "23"}, {"Eric", "83"}};
	int maxScore = 0, score;
	string s = "";

	for(int i = 0; i < 4; i++) {
		score = atoi(scores[i][1].c_str());
		if(score > maxScore) {
			maxScore = score;
			s = scores[i][0];
		}
	}
}
