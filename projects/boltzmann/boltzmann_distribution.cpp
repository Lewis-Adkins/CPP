#include <iostream>
#include <cstdlib> 
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <fstream>



using namespace std;

int index_1, index_2, index_3, index_4;
int starting_temperature = 1;

const int n = 100;
const int m = 100;


int boltz_arr[n][m];
vector<int> flat_arr;

map<int, int> freq;

int main() {

    // FILLING 2D ARRAY WITH STARTING TEMPERATURE

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            boltz_arr[i][j] = starting_temperature;
        }
    }

    // DISTRIBUTION LOOP

    for (int step = 0; step < 10000; step++) {

        // GENERATING RANDOM INDEX

        index_1 = rand() % n;
        index_2 = rand() % m;

        index_3 = rand() % n;
        index_4 = rand() % m;

        // ADD TO RANDOM INDEX

        if (boltz_arr[index_1][index_2] > 0) {
            boltz_arr[index_1][index_2] -= 1;
            boltz_arr[index_3][index_4] += 1;
        }
        else {
            boltz_arr[index_1][index_2] -= 0;
            boltz_arr[index_3][index_4] += 0;
        }
    }

    // FLATTENING ARRAY

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
             flat_arr.push_back(boltz_arr[i][j]);
        }
    }

    for (int i = 0; i < flat_arr.size(); i ++) {
        int counter = flat_arr[i];

        if (freq.find(counter) == freq.end()){
            freq[counter] = 0;
        }
        freq[counter] ++;
    }

    ofstream outputFile("data.txt");

    for(const auto& pair:freq) {
        outputFile << pair.first << ' ' << pair.second << '\n';
    }
    outputFile.close();

    return 0;
}