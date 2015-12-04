#include "mysql.h"
#include "sha1.h"

IPAddress server_addr(192, 168, 0, 20);
/* Setup for the Connector */
Connector my_conn; // The Connector reference
char user[] = "root";
char password[] = "raspberry";


void setup() {
    
    char INSERT_SQL[] =  "INSERT INTO PiStat.Data VALUES ('2015-12-04 22:49:50, 'BCEE7B73F5EB', '20.5', '48.6')";
    if (my_conn.mysql_connect(server_addr, 3306, user, password))
      {
        delay(500); // Allowing it time, to be sure it has opened the connection
         /* Run the SQL Query on the mySQL server */
         my_conn.cmd_query(INSERT_SQL);
      }
}

void loop() {

}
