#include "read_csv.h"

MyStruct read_csv_file(const std::string& file_name) {
    MyStruct my_struct;

    // open the CSV file for reading "Provided by UI from the user"
    std::ifstream infile(file_name);
    if (!infile) {
        std::cerr << "Failed to open file: " << file_name << std::endl;
        return my_struct;
    }

    // read the CSV file, line by line
    std::string line;
    while (std::getline(infile, line)) {
        std::stringstream ss(line);
        std::string cell;
        int col_num = 0;
        while (std::getline(ss, cell, ',') && col_num < 9) {
            switch (col_num) {
                case 0:
                    my_struct.col1.push_back(cell);
                    break;
                case 1:
                    my_struct.col2.push_back(cell);
                    break;
                case 2:
                    my_struct.col3.push_back(cell);
                    break;
                case 3:
                    my_struct.col4.push_back(cell);
                    break;
                case 4:
                    my_struct.col5.push_back(cell);
                    break;
                case 5:
                    my_struct.col6.push_back(cell);
                    break;
                case 6:
                    my_struct.col7.push_back(cell);
                    break;
                case 7:
                    my_struct.col8.push_back(cell);
                    break;
                case 8:
                    my_struct.col9.push_back(cell);
                    break;
                default:
                    break;
            }
            col_num++;
        }
    }

    // close the CSV file
    infile.close();

    return my_struct;
}

int main() {
    std::string file_name = "out.csv";
    MyStruct my_struct = read_csv_file(file_name);

    // access the data in my_struct using the . operator
    for (size_t i = 0; i < my_struct.col1.size(); i++) {
        std::cout << my_struct.col1[i] << "," << my_struct.col2[i] << "," << my_struct.col3[i] << ","
                  << my_struct.col4[i] << "," << my_struct.col5[i] << "," << my_struct.col6[i] << ","
                  << my_struct.col7[i] << "," << my_struct.col8[i] << "," << my_struct.col9[i] << std::endl;
    }

    // write the data to a new CSV file "The desired output to the UI"
    std::ofstream outfile("out2.csv");
    if (outfile) {
        outfile << "HW_LATENCY,OS_TICK,name,periodicity,priority,requiredResponseTime,executionTime,type,category" << std::endl;
        for (size_t i = 0; i < my_struct.col1.size(); i++) {
            outfile << my_struct.col1[i] << "," << my_struct.col2[i] << "," << my_struct.col3[i] << ","
                    << my_struct.col4[i] << "," << my_struct.col5[i] << "," << my_struct.col6[i] << ","
                    << my_struct.col7[i] << "," << my_struct.col8[i] << "," << my_struct.col9[i] << std::endl;
        }
        std::cout << "Data written to out2.csv" << std::endl;
    } else {
        std::cerr << "Failed to open file: out2.csv" << std::endl;
    }

    return 0;
}

/*PLEASE NOTE THAT THE ORDER OF HEADERS IN LINE74 IS THE ACTUAL ORDER OF TASKS PROVIDED FROM THE INPUT FILE "out.csv" FROM THE UI*/
