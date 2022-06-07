#include"Query.h"
#include<fstream>


bool get_words(string& s1, string& s2) {

    // iterate with the user: prompt for a word to find and print results
    std::cout << "enter two words to search for, or q to quit: ";
    std::cin >> s1;

    // stop if hit eof on input or a "q" is entered
    if (!std::cin || s1 == "q") return false;
    std::cin >> s2;
    return true;
}






int main(int argc, char** argv)
{
    // gets file to read and builds map to support queries
    std::ifstream in("15.39.txt");
    textQuery file(in);

    // iterate with the user: prompt for a word to find and print results
    while (true) {
        string sought1, sought2, sought3;
        if (!get_words(sought1, sought2)) break;
        std::cout << "\nenter third word: ";
        std::cin >> sought3;
        // find all the occurrences of the requested string
        Query q = Query(sought1) & Query(sought2)
            | Query(sought3);
        std::cout << "\nExecuting Query for: " << q << std::endl;
        const Queryresult results = q.eval(file);
        // report matches
     
        
       
    }
    return 0;
}
