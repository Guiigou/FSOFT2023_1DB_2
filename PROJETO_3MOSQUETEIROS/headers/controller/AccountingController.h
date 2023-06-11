#ifndef PROJETO3MOSQUETEIROS_ACCOUNTINGCONTROLLER_H
#define PROJETO3MOSQUETEIROS_ACCOUNTINGCONTROLLER_H

#include "../model/AccountingRecord.h"
#include "../model/PurchaseRecord.h"
#include <list>


class AccountingController {
private:
    list<PurchaseRecord> purchaseRecords;

public:
    void addPurchaseRecord(const PurchaseRecord& purchaseRecord);
    void listPurchaseRecords() const;
};

#endif //PROJETO3MOSQUETEIROS_ACCOUNTINGCONTROLLER_H
