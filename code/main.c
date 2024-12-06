#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include <sys/stat.h>

void print_tree(const char *path, int depth) {
    struct dirent *entry;
    DIR *dp = opendir(path);

    if (!dp) {
        perror("opendir");
        return;
    }

    while ((entry = readdir(dp)) != NULL) {
        if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0) {
            continue;
        }

        for (int i = 0; i < depth; i++) {
            printf("  ");
        }
        printf("├── %s\n", entry->d_name);

        char full_path[1024];
        snprintf(full_path, sizeof(full_path), "%s/%s", path, entry->d_name);
        struct stat info;
        if (stat(full_path, &info) == 0 && S_ISDIR(info.st_mode)) {
            print_tree(full_path, depth + 1);
        }
    }
    closedir(dp);
}

int main(int argc, char *argv[]) {
    const char *path = argc > 1 ? argv[1] : "."; 
    printf("%s\n", path);
    print_tree(path, 0);
    return 0;
}