/* Copyright Abandoned 1996,1999 TCX DataKonsult AB & Monty Program KB
   & Detron HB, 1996, 1999-2004, 2007 MySQL AB.
   This file is public domain and comes with NO WARRANTY of any kind
*/

/* Version numbers for protocol & mysqld */

#ifndef _mysql_version_h
#define _mysql_version_h

#define PROTOCOL_VERSION            10
#define MYSQL_SERVER_VERSION       "8.0.32"
#define MYSQL_BASE_VERSION         "mysqld-8.0"
#define MYSQL_SERVER_SUFFIX_DEF    ""
#define MYSQL_VERSION_ID            80032
#define MYSQL_PORT                  3306
#define MYSQL_ADMIN_PORT            33062
#define MYSQL_PORT_DEFAULT          0
#define MYSQL_UNIX_ADDR            "/tmp/mysql.sock"
#define MYSQL_CONFIG_NAME          "my"
#define MYSQL_PERSIST_CONFIG_NAME  "mysqld-auto"
#define MYSQL_COMPILATION_COMMENT  "Source distribution"
#define MYSQL_COMPILATION_COMMENT_SERVER  "Source distribution"
#define LIBMYSQL_VERSION           "8.0.32"
#define LIBMYSQL_VERSION_ID         80032

#ifndef LICENSE
#define LICENSE                     GPL
#endif /* LICENSE */

#endif /* _mysql_version_h */

///* Copyright Abandoned 1996,1999 TCX DataKonsult AB & Monty Program KB
//   & Detron HB, 1996, 1999-2004, 2007 MySQL AB.
//   This file is public domain and comes with NO WARRANTY of any kind
//*/
//
///* Version numbers for protocol & mysqld */
//
//#ifndef _mysql_version_h
//#define _mysql_version_h
//
//#define PROTOCOL_VERSION            @PROTOCOL_VERSION@
//#define MYSQL_SERVER_VERSION       "@VERSION@"
//#define MYSQL_BASE_VERSION         "mysqld-@MYSQL_BASE_VERSION@"
//#define MYSQL_SERVER_SUFFIX_DEF    "@MYSQL_SERVER_SUFFIX@"
//#define MYSQL_VERSION_ID            @MYSQL_VERSION_ID@
//#define MYSQL_PORT                  @MYSQL_TCP_PORT@
//#define MYSQL_ADMIN_PORT            @MYSQL_ADMIN_TCP_PORT@
//#define MYSQL_PORT_DEFAULT          @MYSQL_TCP_PORT_DEFAULT@
//#define MYSQL_UNIX_ADDR            "@MYSQL_UNIX_ADDR@"
//#define MYSQL_CONFIG_NAME          "my"
//#define MYSQL_PERSIST_CONFIG_NAME  "mysqld-auto"
//#define MYSQL_COMPILATION_COMMENT  "@COMPILATION_COMMENT@"
//#define MYSQL_COMPILATION_COMMENT_SERVER  "@COMPILATION_COMMENT_SERVER@"
//#define LIBMYSQL_VERSION           "@VERSION@"
//#define LIBMYSQL_VERSION_ID         @MYSQL_VERSION_ID@
//
//#ifndef LICENSE
//#define LICENSE                     GPL
//#endif /* LICENSE */
//
//#endif /* _mysql_version_h */
