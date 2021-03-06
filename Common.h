//
// Created by Neil3d2y on 3/12/2017.
//

#ifndef TINYSQL_COMMON_H
#define TINYSQL_COMMON_H

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <numeric>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>


#include "StorageManager/Block.h"
#include "StorageManager/Config.h"
#include "StorageManager/Disk.h"
#include "StorageManager/Field.h"
#include "StorageManager/MainMemory.h"
#include "StorageManager/Relation.h"
#include "StorageManager/Schema.h"
#include "StorageManager/SchemaManager.h"
#include "StorageManager/Tuple.h"

using namespace std;

#define TOTAL_MEM_BLKS 10
#define PRINT_COL_WIDTH 16

// Statement Types
enum PTN_TYPE {
    CREATE_TABLE_STATEMENT,
    CREATE_TABLE,
    DROP_TABLE_STATEMENT,
    DROP_TABLE,
    TABLE_NAME,
    ATTRIBUTE_TYPE_LIST,
    ATTRIBUTE_NAME,
    DATA_TYPE,
    INSERT_STATEMENT,
    ATTRIBUTE_LIST,
    INSERT_INTO,
    VALUES,
    INSERT_TUPLES,
    VALUE_LIST,
    VALUE,
    SELECT_STATEMENT,
    SELECT,
    DISTINCT,
    SELECT_LIST,
    SELECT_SUBLIST,
    COLUMN_NAME,
    FROM,
    STAR,
    TABLE_LIST,
    WHERE,
    CONDITION_LIST,
    CONDITION_LIST_ELEMENT,
    ORDER_BY,
    DELETE_STATEMENT,
    DELETE_FROM
};

// Math type
enum CT_TYPE
{
    MULT,
    DIV,
    ADD,
    SUB,
    EQUAL,
    GREATER,
    SMALLER,
    NOT,
    AND,
    OR,
    OPRAND_STR,
    OPRAND_INT,
    LEFT_BRACKET,
    RIGHT_BRACKET
};

enum JOIN_TYPE
{
    TO_TABLE,
    TO_PRINT
};

enum SCAN_TYPE
{
    TABLE,
    PRINT
};

#endif //TINYSQL_COMMON_H
