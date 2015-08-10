//
// Created by ê»Ìì on 2015/8/10.
//

#ifndef LCTHW_DB_H
#define LCTHW_DB_H

#define DB_FILE "/usr/local/.devpkg/db"
#define DB_DIR "/usr/local/.devpkg"

int DB_init();
int DB_list();
int DB_update(const char *url);
int DB_find(const char *url);

#endif //LCTHW_DB_H
