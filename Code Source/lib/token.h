#ifndef TOKEN_H
#define TOKEN_H

#include <string.h>

#define SIZE_TOKEN 187

typedef enum _code_token {
    //56 keyword reserver
      ADD_TOKEN,
      ALLOW_TOKEN,
      ALTER_TOKEN,
      AND_TOKEN,
      ANY_TOKEN,
      APPLY_TOKEN,
      ASC_TOKEN,
      AUTHORIZE_TOKEN,
      BATCH_TOKEN,
      BEGIN_TOKEN,
      BY_TOKEN,
      CAST_TOKEN,
      COLUMNFAMILY_TOKEN,
      CREATE_TOKEN,
      DEFAULT_TOKEN,
      DELETE_TOKEN,
      DESC_TOKEN,
      DESCRIBE_TOKEN,
      DROP_TOKEN,
      ENTRIES_TOKEN,
      EXECUTE_TOKEN,
      FROM_TOKEN,
      FULL_TOKEN,
      GRANT_TOKEN,
      GROUP_TOKEN,
      IF_TOKEN,
      IN_TOKEN,
      INDEX_TOKEN,
      INFINITY_TOKEN,
      INSERT_TOKEN,
      INTO_TOKEN,
      KEYSPACE_TOKEN,
      LIMIT_TOKEN,
      MODIFY_TOKEN,
      NAN_TOKEN,
      NORECURSIVE_TOKEN,
      NOT_TOKEN,
      NULL_TOKEN,
      OF_TOKEN,
      ON_TOKEN,
      OR_TOKEN,
      ORDER_TOKEN,
      PARTITION_TOKEN,
      PER_TOKEN,
      PRIMARY_TOKEN,
      RENAME_TOKEN,
      REPLACE_TOKEN,
      REVOKE_TOKEN,
      SCHEMA_TOKEN,
      SELECT_TOKEN,
      SET_TOKEN,
      TABLE_TOKEN,
      TO_TOKEN,
      TOKEN_TOKEN,
      TRUNCATE_TOKEN,
      UNLOGGED_TOKEN,
      UNSET_TOKEN,
      UPDATE_TOKEN,
      USE_TOKEN,
      USING_TOKEN,
      WHERE_TOKEN,
      WITH_TOKEN,
      //debut type
      ASCII_TOKEN,
      BIGINT_TOKEN,
      BLOB_TOKEN,
      BOOLEAN_TOKEN,
      COUNTER_TOKEN,
      DATE_TOKEN,
      DECIMAL_TOKEN,
      DOUBLE_TOKEN,
      FLOAT_TOKEN,
      INET_TOKEN,
      INT_TOKEN,
      SMALLINT_TOKEN,
      TEXT_TOKEN,
      TIME_TOKEN,
      TIMESTAMP_TOKEN,
      TIMEUUID_TOKEN,
      TINYINT_TOKEN,
      UUID_TOKEN,
      VARCHAR_TOKEN,
      VARINT_TOKEN,
      //debut valeur type
      ASCII_VALUE_TOKEN,
      BIGINT_VALUE_TOKEN,
      BLOB_VALUE_TOKEN,
      BOOLEAN_VALUE_TOKEN,
      COUNTER_VALUE_TOKEN,
      DATE_VALUE_TOKEN,
      DECIMAL_VALUE_TOKEN,
      DOUBLE_VALUE_TOKEN,
      FLOAT_VALUE_TOKEN,
      INET_VALUE_TOKEN,
      INT_VALUE_TOKEN,
      SMALLINT_VALUE_TOKEN,
      TEXT_VALUE_TOKEN,
      TIME_VALUE_TOKEN,
      TIMESTAMP_VALUE_TOKEN,
      TIMEUUID_VALUE_TOKEN,
      TINYINT_VALUE_TOKEN,
      UUID_VALUE_TOKEN,
      VARCHAR_VALUE_TOKEN,
      VARINT_VALUE_TOKEN,
      //debut agreggate
      AVG_TOKEN,
      MAX_TOKEN,
      MIN_TOKEN,
      SUM_TOKEN,
      COUNT_TOKEN,
      //others
      ALL_TOKEN,
      AGGREGATE_TOKEN,
      AS_TOKEN,
      CALLED_TOKEN,
      CLUSTERING_TOKEN,
      COMPACT_TOKEN,
      CONSISTENCY_TOKEN,
      CONTAINS_TOKEN,
      CUSTOM_TOKEN,
      DISTINCT_TOKEN,
      EXISTS_TOKEN,
      FILTERING_TOKEN,
      FINALFUNC_TOKEN,
      FROZEN_TOKEN,
      FUNCTION_TOKEN,
      FUNCTIONS_TOKEN,
      INITCOND_TOKEN,
      INPUT_TOKEN,
      JSON_TOKEN,
      KEY_TOKEN,
      KEYS_TOKEN,
      KEYSPACES_TOKEN,
      LANGUAGE_TOKEN,
      LEVEL_TOKEN,
      LIST_TOKEN,
      LOGIN_TOKEN,
      MAP_TOKEN,
      NOLOGIN_TOKEN,
      NOSUPERUSER_TOKEN,
      OPTIONS_TOKEN,
      PASSWORD_TOKEN,
      PERMISSION_TOKEN,
      PERMISSIONS_TOKEN,
      RETURNS_TOKEN,
      ROLE_TOKEN,
      ROLES_TOKEN,
      SFUNC_TOKEN,
      STATIC_TOKEN,
      STORAGE_TOKEN,
      SUPERUSER_TOKEN,
      TTL_TOKEN,
      TRIGGER_TOKEN,
      TUPLE_TOKEN,
      TYPE_TOKEN,
      USER_TOKEN,
      USERS_TOKEN,
      VALUES_TOKEN,
      WRITETIME_TOKEN,
      MATERIALIZED_TOKEN,
      VIEW_TOKEN,
      IS_TOKEN,
      //debut symboles
      PV_TOKEN,
      P_TOKEN,
      PLUS_TOKEN,
      MOINS_TOKEN,
      ETOILE_TOKEN,
      DIV_TOKEN,
      VIR_TOKEN,
      EG_TOKEN,
      INF_TOKEN,
      INFEG_TOKEN,
      SUP_TOKEN,
      SUPEG_TOKEN,
      DIFF_TOKEN,
      PO_TOKEN,
      PF_TOKEN,
      ACOLADO_TOKEN,
      ACOLADF_TOKEN,
      DEUXP_TOKEN,
      PI_TOKEN,
      CROCHO_TOKEN,
      CROCHF_TOKEN,
      //Debut automates
      STRING_TOKEN,
      IDENTIFIER_TOKEN,
      TABLE_FUNCTION_NAME_TOKEN,
      //pour le controle
      END_TOKEN,
      EMPTY_TOKEN,
      ERROR_TOKEN,
      MBEAN_TOKEN,
      MBEANS_TOKEN
} code_token_t ;

char* token_code[SIZE_TOKEN];
void print_token(code_token_t);
void print_type(code_token_t);
code_token_t is_Keyword(char*);



#endif
