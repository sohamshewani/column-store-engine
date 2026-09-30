#ifndef DATA_MANAGEMENT_H
#define DATA_MANAGEMENT_H

#include "column_store_api.h"

namespace column_store {

/// Data Management implementation
void ingestData(const std::string& table_name, const Table& table);

} // namespace column_store

#endif // DATA_MANAGEMENT_H