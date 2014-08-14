#include "fileExists.h"

//' Check if a file exists, if it does, do nothing, otherwise throw an exception
//'
//' @param string filepath
//' @export
//' @examples
//' fileExists(system.file("example/test.assoc.linear", package="txtutils")
// [[Rcpp::export]]
void fileExists (const std::string& name) {
    if ( access( name.c_str(), F_OK ) == -1 ) {
        throw std::string("File does not exist!");
    }
}

