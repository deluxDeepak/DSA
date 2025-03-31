#include <iostream>
#include<mysql/mysql.h>
using namespace std;
int main()
{
    MYSQL* conn;
    // MySQL connection parameters
    const char* server = "127.0.0.1";
    const char* user = "root";
    const char* password = "5522";
    const char* database = "new_database";

    // Initialize MySQL connection
    conn = mysql_init(NULL);
    
    if (conn == NULL) {
        cout << "MySQL initialization failed" << endl;
        return 1;
    }
    // Connect to MySQL server
    if (!mysql_real_connect(conn, server, user, password, NULL, 0, NULL, 0)) {
        cout << "Connection failed: " << mysql_error(conn) << endl;
        return 1;
    }
    cout << "Connected to MySQL server successfully!" << endl;
    // Create database query
    string create_db_query = "CREATE DATABASE IF NOT EXISTS " + string(database);

    // Execute the create database query
    if (mysql_query(conn, create_db_query.c_str())) {
        cout << "Database creation failed: " << mysql_error(conn) << endl;
        mysql_close(conn);
        return 1;
    }
    cout << "Database created successfully!" << endl;

    // Select the created database
    if (mysql_select_db(conn, database)) {
        cout << "Database selection failed: " << mysql_error(conn) << endl;
        mysql_close(conn);
        return 1;
    }
    
    cout << "Database selected successfully!" << endl;
    // Close MySQL connection
    mysql_close(conn);
    cout << "MySQL connection closed successfully!" << endl;
    return 0;
}