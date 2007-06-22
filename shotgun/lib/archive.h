OBJECT archive_list_files(STATE, char *path);
OBJECT archive_get_file(STATE, const char *path, const char *name);
OBJECT archive_get_object(STATE, const char *path, char* name, int version);
OBJECT archive_add_file(STATE, char *path, char *name, char *file);
OBJECT archive_add_object(STATE, char *path, char *name, OBJECT obj, int version);
OBJECT archive_delete_file(STATE, char *path, int idx);
