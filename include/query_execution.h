#ifndef QUERY_EXECUTION_H
#define QUERY_EXECUTION_H

#include "column_store_api.h"

namespace column_store {

/// Query Execution implementation
std::vector<uint32_t> executeQuery(const std::string& query);

} // namespace column_store

#endif // QUERY_EXECUTION_H