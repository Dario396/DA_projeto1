#include <iostream>
#include "parser/CSVParser.h"

#include <iostream>
#include "parser/CSVParser.h"
using namespace std;

void showMenu() {
    cout << "\n=== Conference Review Tool ===\n";
    cout << "1. Load input file\n";
    cout << "2. Display list of submissions\n";
    cout << "3. Display list of reviewers\n";
    cout << "4. Display current paramenters\n";
    cout << "5. Generate review assignment\n";
    cout << "6. Run risk analysis\n";
    cout << "0. Exit\n";
    cout << "Option: ";
}
int main(int argc, char* argv[]) {

    /* Batch mode
     * ./myProg -b input.csv output.csv
     * skips the menu
     * read from input.csv
     * writes to output.csv (ssignments + risk management)
     * send error messages to stderr (std:cerr)
     */
    if (argc == 4 && strcmp(argv[1], "b")) {
        // runBatchMode(argv[2], argv[3]);
        return 0;
    }
    int option;
    do {
        showMenu();
        cin >> option;

        switch (option) {
            case 0: cout << "Bye\n"; break;
            default: cout << "Invalid Option.\n";
        }
    } while (option != 0);
    return 0;
}