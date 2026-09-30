#ifndef COMPRESSION_H
#define COMPRESSION_H

#include "column_store_api.h"

namespace column_store {

/// Compression implementation
void compressData(const std::string& table_name);

} // namespace column_store

#endif // COMPRESSION_H