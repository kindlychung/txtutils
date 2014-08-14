#include "readcol.h"
#include "ncols.h"


//' Read one column of a whitespace delimited text file
//'
//' @param string input filepath
//' @param integer the target column number
//' @param integer skip the first N lines
//' @param integer maximum number of lines to read
//' @return vector a vector of strings containing the target column
//' @examples
//' readcol(system.file("example/test.assoc.linear", package="txtutils"), 2, 1, 15)
// [[Rcpp::export]]
std::vector< std::string > readcol(std::string fileName, size_t colNum, size_t nSkip, size_t maxRowNum) {
    size_t nColOfFile = ncols(fileName);
    if(colNum < 1 or colNum > nColOfFile) throw "Column number out of range!";

    std::ifstream inFileStream(fileName.c_str());
    std::vector< std::string > res;
    std::string tmpLine;
    size_t rowCounter = 0;

    // skip lines at the begining
    for(size_t i = 0; i < nSkip; i++) {
        getline(inFileStream, tmpLine);
    }

    while(getline(inFileStream, tmpLine)) {
        rowCounter++;
        if(rowCounter > maxRowNum) break;

        std::istringstream lineStream(tmpLine);
        std::string tmpWord;
        for(size_t i=0; i<colNum; i++) {
            lineStream >> tmpWord;
        }
        res.push_back(tmpWord);
    }

    return res;
}
