#include <iostream>
#include "searchSortAlgorithms.h"

using namespace std;

int main() {
    int intList[] = {2, 16, 34, 45, 53,
                     56, 69, 70, 75, 96};

    int intList2[] = {2, 16, 34, 45, 53,
                      56, 69, 70, 75, 96, 99, 101,2};

    int pos;

    pos = seqOrdSearch(intList, 10, 45);

    pos = seqOrdSearch(intList, 10, 99);

    pos = seqOrdSearch(intList2, 13, 2);

    pos = seqOrdSearch(intList2, 13, 56);

    return 0;
}


