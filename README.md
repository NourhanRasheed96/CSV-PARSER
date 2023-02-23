# CSV-PARSER
This is a simple program that reads a CSV file and stores its contents in a struct. It can then print the contents of the struct to the console.
## Usage
- Compile the program by running '**make**' in the terminal.
- Run the program by typing '**./csv_file_reader <csv_file_name>**' in the terminal, replacing '**<csv_file_name>**' with the name of the CSV file you want to read.
- The program will read the CSV file and print its contents to the console.

## Code structure
The code is split into two files:

- '**csv_file_reader.h**' : This file contains the declarations of the functions and struct used in the program.
- '**csv_file_reader.cpp**' : This file contains the implementations of the functions declared in csv_file_reader.h.

## Dependencies
This program requires the following libraries:

- '**fstream**': For reading and writing files.
- '**iostream**': For console input and output.
- '**sstream**': For parsing strings.
- '**string**': For string manipulation.
- '**vector**': For dynamic arrays.
