#include "include/data_management.h"

namespace column_store {

void ingestData(const std::string& table_name, const Table& table) {
    // Implementation to handle data ingestion and storage
    // Example: Store data in a file or in-memory structure
    std::cout << "Ingesting data for table: " << table_name << std::endl;
    for (const auto& column : table.columns) {
        for (uint32_t value : column.data) {
            // Handle value
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }
}

} // namespace column_store