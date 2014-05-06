#define LUAMONGO_NAME           "mongo"
#define LUAMONGO_NAME_STRING    "_NAME"
#define LUAMONGO_VERSION        "0.4"
#define LUAMONGO_VERSION_STRING "_VERSION"

#define LUAMONGO_ROOT            "mongo"
#define LUAMONGO_CONNECTION      "Connection"
#define LUAMONGO_REPLICASET      "ReplicaSet"
#define LUAMONGO_CURSOR          "Cursor"
#define LUAMONGO_QUERY           "Query"
#define LUAMONGO_GRIDFS          "GridFS"
#define LUAMONGO_GRIDFILE        "GridFile"
#define LUAMONGO_GRIDFSCHUNK     "GridFSChunk"
#define LUAMONGO_GRIDFILEBUILDER "GridFileBuilder"

// not an actual class, pseudo-base for error messages
#define LUAMONGO_DBCLIENT       "DBClient"

#define LUAMONGO_ERR_CONNECTION_FAILED  "Connection failed: %s"
#define LUAMONGO_ERR_REPLICASET_FAILED  "ReplicaSet.New failed: %s"
#define LUAMONGO_ERR_GRIDFS_FAILED      "GridFS failed: %s"
#define LUAMONGO_ERR_GRIDFSCHUNK_FAILED "GridFSChunk failed: %s"
#define LUAMONGO_ERR_QUERY_FAILED       "Query failed: %s"
#define LUAMONGO_ERR_FIND_ONE_FAILED    "Find One failed: %s"
#define LUAMONGO_ERR_INSERT_FAILED      "Insert failed: %s"
#define LUAMONGO_ERR_CONNECT_FAILED     "Connection to %s failed: %s"
#define LUAMONGO_ERR_COUNT_FAILED       "Count failed: %s"
#define LUAMONGO_ERR_REMOVE_FAILED      "Remove failed: %s"
#define LUAMONGO_ERR_UPDATE_FAILED      "Update failed: %s"
#define LUAMONGO_ERR_CONNECTION_LOST    "Connection lost"
#define LUAMONGO_UNSUPPORTED_BSON_TYPE  "Unsupported BSON type `%s'"
#define LUAMONGO_UNSUPPORTED_LUA_TYPE   "Unsupported Lua type `%s'"
#define LUAMONGO_REQUIRES_JSON_OR_TABLE "JSON string or Lua table required"
#define LUAMONGO_REQUIRES_QUERY         LUAMONGO_QUERY ", JSON string or Lua table required"
#define LUAMONGO_NOT_IMPLEMENTED        "Not implemented: %s.%s"
#define LUAMONGO_ERR_CALLING            "Error calling %s.%s: %s"


