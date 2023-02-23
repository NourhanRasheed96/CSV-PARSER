#ifndef READ_CSV_H
#define READ_CSV_H

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

struct MyStruct {
    std::vector<std::string> col1;
    std::vector<std::string> col2;
    std::vector<std::string> col3;
    std::vector<std::string> col4;
    std::vector<std::string> col5;
    std::vector<std::string> col6;
    std::vector<std::string> col7;
    std::vector<std::string> col8;
    std::vector<std::string> col9;
};

MyStruct read_csv_file(const std::string& file_name);

#endif
