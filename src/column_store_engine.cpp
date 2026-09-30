#include "include/column_store_api.h"
#include "include/data_management.h"
#include "include/compression.h"
#include "include/query_execution.h"

namespace column_store {

void columnStoreEngine() {
    // Main engine logic
    Table table = {{1, 2, 3}, {4, 5, 6}};
    std::string table_name = "test_table";
    ingestData(table_name, table);
    compressData(table_name);
    std::vector<uint32_t> result = executeQuery("SELECT * FROM test_table");
    for (uint32_t value : result) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
}

} // namespace column_store