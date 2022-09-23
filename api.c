#include "api.h"

void connect() {
    return;
}

void query_api(const char* endpoint, const char *json) {
    connect();

    printf("[DEBUG] Sending %s to %s", json, endpoint);
    // ...

    return;
}

//JSON ;)
void get_license_key(const char* user_email) {
    const char* JSON_body = sprintf("{\"email\":\"%s\"}", user_email);

    // ...

    query_api(API_URL_GETKEY, JSON_body);

    // ...

    return;
}
