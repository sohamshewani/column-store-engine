#ifndef COLUMN_STORE_API_H
#define COLUMN_STORE_API_H

#include <vector>
#include <string>

namespace column_store {

/// Represents a column in the column-store engine
struct Column {
    std::vector<uint32_t> data;
};

/// Represents a table in the column-store engine
struct Table {
    std::vector<Column> columns;
};

/// Data Management API
void ingestData(const std::string& table_name, const Table& table);

/// Compression API
void compressData(const std::string& table_name);

/// Query Execution API
std::vector<uint32_t> executeQuery(const std::string& query);

} // namespace column_store

#endif // COLUMN_STORE_API_H