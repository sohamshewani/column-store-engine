#include "include/column_store_api.h"
#include <gtest/gtest.h>

namespace column_store {

TEST(ColumnStoreTest, IngestData) {
    Table table = {{1, 2, 3}, {4, 5, 6}};
    std::string table_name = "test_table";
    ingestData(table_name, table);
    // Add more checks if needed
}

TEST(ColumnStoreTest, CompressData) {
    std::string table_name = "test_table";
    compressData(table_name);
    // Add more checks if needed
}

TEST(ColumnStoreTest, ExecuteQuery) {
    std::vector<uint32_t> result = executeQuery("SELECT * FROM test_table");
    EXPECT_EQ(result.size(), 6);
    // Add more checks if needed
}

} // namespace column_store