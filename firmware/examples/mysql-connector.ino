#include "mysql.h"
#include "sha1.h"

IPAddress server_addr(127, 0, 0, 1); //change this to your mySQL server
/* Setup for the Connector */
Connector my_conn; // The Connector reference
char user[] = "root";
char password[] = "secret";


void setup() {
    
    char INSERT_SQL[] =  "INSERT INTO test.Data VALUES ('2015-12-04 22:49:50, 'BCEE7B73F5EB', '20.5', '48.6')";
    if (my_conn.mysql_connect(server_addr, 3306, user, password))
      {
        delay(500); // Allowing it time, to be sure it has opened the connection
         /* Run the SQL Query on the mySQL server */
         my_conn.cmd_query(INSERT_SQL);
      }
}

void loop() {

}
