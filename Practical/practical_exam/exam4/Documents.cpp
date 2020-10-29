#include "Documents.h"
#include <algorithm>
#include <vector>

bool compByID(Contract * a1, Contract * a2){
    return a1->get_docID() < a2->get_docID();
}

void Documents::sort(Contract **document, int n){
	vector<Contract *> tmp;

    tmp.reserve(n);

    for (int i = 0; i < n; ++i) {
        tmp.push_back(document[i]);
    }


    std::sort(tmp.begin(), tmp.end(),
              compByID);

    for (int i = 0; i < tmp.size(); ++i) {
        document[i] = tmp[i];
    }
};

