#include <random>
#include <string>
#include <vector>
#include <json.hpp>
#include <iostream>
#include <fstream>
#include <chrono>  // Timer library

using json = nlohmann::json;
using namespace std;
using namespace chrono;  // For timing

// Reuse a single random number generator
random_device rd;
mt19937 gen(rd());

vector<string> load_names_from_file(const string& filename) {
    vector<string> names;
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error opening file: " << filename << endl;
        exit(EXIT_FAILURE);
    }
    
    string name;
    while (getline(file, name)) {
        if (!name.empty()) {
            names.push_back(name);
        }
    }
    
    file.close();
    return names;
}

inline void ltrim(std::string &s) {
    s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](unsigned char ch) {
        return !std::isspace(ch);
    }));
}


// trim from end (in place)
inline void rtrim(std::string &s) {
    s.erase(std::find_if(s.rbegin(), s.rend(), [](unsigned char ch) {
        return !std::isspace(ch);
    }).base(), s.end());
}

inline void trim(std::string &s) {
    rtrim(s);
    ltrim(s);
}

// Generate a random int from [min, max)
inline int random_int(int min, int max) {
    uniform_int_distribution<> dis(min, max);
    return dis(gen);
}

// Generate a random float from [min, max)
inline double random_double(double min, double max) {
    uniform_real_distribution<double> dis(min, max);
    return dis(gen);
}

// Generate a random name
inline string random_name(const vector<string>& first_names, const vector<string>& last_names, int fsize, int lsize) {
    std::string first_name = first_names[random_int(0, fsize - 1)];
    first_name.pop_back();
    return first_name + " " + last_names[random_int(0, lsize - 1)];
}

// Function to generate a single biometric record
inline json generate_biometric_record(const vector<string>& first_names, const vector<string>& last_names, int fsize, int lsize) {
    return {
        {"name", random_name(first_names, last_names, fsize, lsize)},
        {"age", random_int(18, 70)},
        {"biometrics", {
            {"heart_rate", random_int(50, 120)},
            {"steps", random_int(1000, 15000)},
            {"weight_kg", random_double(50.0, 100.0)},
            {"height_m", random_double(1.5, 2.0)}
        }}
    };
}

// Generates sample JSON data, writes to file in chunks, and returns an array with timing
json generate_and_save_json(int n, const string& filename, bool write) {
    // cout << "Generating " << n << " records to file" << filename << endl;

    // Start the timer
    auto start_time = high_resolution_clock::now();

    vector<string> first_names = load_names_from_file("data/first_names.txt");
    vector<string> last_names = load_names_from_file("data/last_names.txt");

    int fsize = first_names.size(), lsize = last_names.size();
    if (fsize == 0 || lsize == 0) {
        cerr << "Error: Name lists are empty!" << endl;
        return json::array();
    }

    json records = json::array();


    if (write) {
        ofstream file(filename);
        if (!file.is_open()) {
            cerr << "Error opening file for writing!" << endl;
            return json::array();
        }
        // file << "[";  // Start JSON array
        for (int i = 0; i < n; i++) {
            json record = generate_biometric_record(first_names, last_names, fsize, lsize);
            // if (i % 1000000 == 0) CkPrintf("On record %d\n", i);
            file << record.dump();
            // if (i < n - 1) file << ",";  // Avoid trailing comma
            file << ",";  // Avoid trailing comma
        }
    
        // file << "]";  // End JSON array
        file.close();
    } else {
        for (int i = 0; i < n; i++) {
            json record = generate_biometric_record(first_names, last_names, fsize, lsize);
        }
    }

    

    // Stop the timer
    // auto end_time = high_resolution_clock::now();
    // auto duration = duration_cast<seconds>(end_time - start_time);

    // cout << "Generated " << n << " biometric records in " << duration.count() << " seconds and saved to " << filename << endl;
    // cout << "Generated " << n << " biometric records" << endl;
    return records;
}
