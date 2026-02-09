#include <mysql/mysql.h>
#include <iostream>

int main() {
    MYSQL* conn;
    MYSQL_RES* res;
    MYSQL_ROW row;

    // Initialize MySQL connection object
    conn = mysql_init(nullptr);
    if (!conn) {
        std::cerr << "mysql_init failed\n";
        return 1;
    }

    // Connect to database
    if (!mysql_real_connect(
            conn,
            "localhost",   // host
            "root",        // user
            "password",    // password
            "movies",      // database
            0,             // port (0 = default)
            nullptr,
            0)) {
        std::cerr << "Connection failed: "
                  << mysql_error(conn) << "\n";
        mysql_close(conn);
        return 1;
            }

    // Execute query
    if (mysql_query(conn, "SELECT id, title, year FROM film")) {
        std::cerr << "Query failed: "
                  << mysql_error(conn) << "\n";
        mysql_close(conn);
        return 1;
    }

    // Get result set
    res = mysql_store_result(conn);
    if (!res) {
        std::cerr << "Result error: "
                  << mysql_error(conn) << "\n";
        mysql_close(conn);
        return 1;
    }

    // Fetch and print rows
    while ((row = mysql_fetch_row(res))) {
        std::cout << "ID: " << row[0]
                  << ", Title: " << row[1]
                  << ", Year: " << row[2]
                  << std::endl;
    }

    // Cleanup
    mysql_free_result(res);
    mysql_close(conn);

    return 0;
}
