static struct downloaderr _http_errlist[] = {
    { 100, DLERR_OK, "Continue" },
    { 101, DLERR_OK, "Switching Protocols" },
    { 200, DLERR_OK, "OK" },
    { 201, DLERR_OK, "Created" },
    { 202, DLERR_OK, "Accepted" },
    { 203, DLERR_INFO, "Non-Authoritative Information" },
    { 204, DLERR_OK, "No Content" },
    { 205, DLERR_OK, "Reset Content" },
    { 206, DLERR_OK, "Partial Content" },
    { 300, DLERR_MOVED, "Multiple Choices" },
    { 301, DLERR_MOVED, "Moved Permanently" },
    { 302, DLERR_MOVED, "Moved Temporarily" },
    { 303, DLERR_MOVED, "See Other" },
    { 304, DLERR_OK, "Not Modified" },
    { 305, DLERR_INFO, "Use Proxy" },
    { 307, DLERR_MOVED, "Temporary Redirect" },
    { 400, DLERR_PROTO, "Bad Request" },
    { 401, DLERR_AUTH, "Unauthorized" },
    { 402, DLERR_AUTH, "Payment Required" },
    { 403, DLERR_AUTH, "Forbidden" },
    { 404, DLERR_UNAVAIL, "Not Found" },
    { 405, DLERR_PROTO, "Method Not Allowed" },
    { 406, DLERR_PROTO, "Not Acceptable" },
    { 407, DLERR_AUTH, "Proxy Authentication Required" },
    { 408, DLERR_TIMEOUT, "Request Time-out" },
    { 409, DLERR_EXISTS, "Conflict" },
    { 410, DLERR_UNAVAIL, "Gone" },
    { 411, DLERR_PROTO, "Length Required" },
    { 412, DLERR_SERVER, "Precondition Failed" },
    { 413, DLERR_PROTO, "Request Entity Too Large" },
    { 414, DLERR_PROTO, "Request-URI Too Large" },
    { 415, DLERR_PROTO, "Unsupported Media Type" },
    { 416, DLERR_UNAVAIL, "Requested Range Not Satisfiable" },
    { 417, DLERR_SERVER, "Expectation Failed" },
    { 500, DLERR_SERVER, "Internal Server Error" },
    { 501, DLERR_PROTO, "Not Implemented" },
    { 502, DLERR_SERVER, "Bad Gateway" },
    { 503, DLERR_TEMP, "Service Unavailable" },
    { 504, DLERR_TIMEOUT, "Gateway Time-out" },
    { 505, DLERR_PROTO, "HTTP Version not supported" },
    { 999, DLERR_PROTO, "Protocol error" },
    { -1, DLERR_UNKNOWN, "Unknown HTTP error" }
};