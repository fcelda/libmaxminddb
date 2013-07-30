#include "MMDB.h"
#include "tap.h"

#ifndef MMDB_TEST_HELPER_C
#define MMDB_TEST_HELPER_C (1)

#define MAX_DESCRIPTION_LENGTH 500

void for_all_modes( void (*tests)(int mode, const char* description) );

const char *test_database_path(const char *filename);

MMDB_s *open_ok(const char *db_file, int mode, const char *mode_desc);

MMDB_root_entry_s *lookup_ok(MMDB_s *mmdb, const char *ip, const char *file, const char *mode_desc);

#endif
