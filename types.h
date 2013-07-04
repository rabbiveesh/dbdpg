/*
Do not edit this file directly - it is generated by types.c
*/

typedef struct sql_type_info {
	int     type_id;
	char*   type_name;
	bool    bind_ok;
	char    array_delimeter;
	char*   arrayout;
	char*   (*quote)();
	void    (*dequote)();
	union   {
			int pg;
			int sql;
	} type;
	int     svtype;
} sql_type_info_t;

sql_type_info_t* pg_type_data(int);
sql_type_info_t* sql_type_data(int);

#define            PG_ABSTIME  702
#define            PG_ACLITEM  1033
#define                PG_ANY  2276
#define         PG_ANYELEMENT  2283
#define            PG_ANYENUM  3500
#define           PG_ANYRANGE  3831
#define                PG_BIT  1560
#define               PG_BOOL  16
#define                PG_BOX  603
#define             PG_BPCHAR  1042
#define              PG_BYTEA  17
#define               PG_CHAR  18
#define                PG_CID  29
#define               PG_CIDR  650
#define             PG_CIRCLE  718
#define            PG_CSTRING  2275
#define               PG_DATE  1082
#define          PG_DATERANGE  3912
#define        PG_FDW_HANDLER  3115
#define             PG_FLOAT4  700
#define             PG_FLOAT8  701
#define          PG_GTSVECTOR  3642
#define               PG_INET  869
#define               PG_INT2  21
#define         PG_INT2VECTOR  22
#define               PG_INT4  23
#define          PG_INT4RANGE  3904
#define               PG_INT8  20
#define          PG_INT8RANGE  3926
#define           PG_INTERNAL  2281
#define           PG_INTERVAL  1186
#define               PG_JSON  114
#define   PG_LANGUAGE_HANDLER  2280
#define               PG_LINE  628
#define               PG_LSEG  601
#define            PG_MACADDR  829
#define              PG_MONEY  790
#define               PG_NAME  19
#define            PG_NUMERIC  1700
#define           PG_NUMRANGE  3906
#define                PG_OID  26
#define          PG_OIDVECTOR  30
#define             PG_OPAQUE  2282
#define               PG_PATH  602
#define       PG_PG_ATTRIBUTE  75
#define           PG_PG_CLASS  83
#define       PG_PG_NODE_TREE  194
#define            PG_PG_PROC  81
#define            PG_PG_TYPE  71
#define              PG_POINT  600
#define            PG_POLYGON  604
#define             PG_RECORD  2249
#define          PG_REFCURSOR  1790
#define           PG_REGCLASS  2205
#define          PG_REGCONFIG  3734
#define      PG_REGDICTIONARY  3769
#define            PG_REGOPER  2203
#define        PG_REGOPERATOR  2204
#define            PG_REGPROC  24
#define       PG_REGPROCEDURE  2202
#define            PG_REGTYPE  2206
#define            PG_RELTIME  703
#define               PG_SMGR  210
#define               PG_TEXT  25
#define                PG_TID  27
#define               PG_TIME  1083
#define          PG_TIMESTAMP  1114
#define        PG_TIMESTAMPTZ  1184
#define             PG_TIMETZ  1266
#define          PG_TINTERVAL  704
#define            PG_TRIGGER  2279
#define            PG_TSQUERY  3615
#define            PG_TSRANGE  3908
#define          PG_TSTZRANGE  3910
#define           PG_TSVECTOR  3614
#define      PG_TXID_SNAPSHOT  2970
#define            PG_UNKNOWN  705
#define               PG_UUID  2950
#define             PG_VARBIT  1562
#define            PG_VARCHAR  1043
#define               PG_VOID  2278
#define                PG_XID  28
#define                PG_XML  142
#define       PG_ABSTIMEARRAY  1023
#define       PG_ACLITEMARRAY  1034
#define           PG_ANYARRAY  2277
#define        PG_ANYNONARRAY  2776
#define           PG_BITARRAY  1561
#define          PG_BOOLARRAY  1000
#define           PG_BOXARRAY  1020
#define        PG_BPCHARARRAY  1014
#define         PG_BYTEAARRAY  1001
#define          PG_CHARARRAY  1002
#define           PG_CIDARRAY  1012
#define          PG_CIDRARRAY  651
#define        PG_CIRCLEARRAY  719
#define       PG_CSTRINGARRAY  1263
#define          PG_DATEARRAY  1182
#define     PG_DATERANGEARRAY  3913
#define        PG_FLOAT4ARRAY  1021
#define        PG_FLOAT8ARRAY  1022
#define     PG_GTSVECTORARRAY  3644
#define          PG_INETARRAY  1041
#define          PG_INT2ARRAY  1005
#define    PG_INT2VECTORARRAY  1006
#define          PG_INT4ARRAY  1007
#define     PG_INT4RANGEARRAY  3905
#define          PG_INT8ARRAY  1016
#define     PG_INT8RANGEARRAY  3927
#define      PG_INTERVALARRAY  1187
#define          PG_JSONARRAY  199
#define          PG_LINEARRAY  629
#define          PG_LSEGARRAY  1018
#define       PG_MACADDRARRAY  1040
#define         PG_MONEYARRAY  791
#define          PG_NAMEARRAY  1003
#define       PG_NUMERICARRAY  1231
#define      PG_NUMRANGEARRAY  3907
#define           PG_OIDARRAY  1028
#define     PG_OIDVECTORARRAY  1013
#define          PG_PATHARRAY  1019
#define         PG_POINTARRAY  1017
#define       PG_POLYGONARRAY  1027
#define        PG_RECORDARRAY  2287
#define     PG_REFCURSORARRAY  2201
#define      PG_REGCLASSARRAY  2210
#define     PG_REGCONFIGARRAY  3735
#define PG_REGDICTIONARYARRAY  3770
#define       PG_REGOPERARRAY  2208
#define   PG_REGOPERATORARRAY  2209
#define       PG_REGPROCARRAY  1008
#define  PG_REGPROCEDUREARRAY  2207
#define       PG_REGTYPEARRAY  2211
#define       PG_RELTIMEARRAY  1024
#define          PG_TEXTARRAY  1009
#define           PG_TIDARRAY  1010
#define          PG_TIMEARRAY  1183
#define     PG_TIMESTAMPARRAY  1115
#define   PG_TIMESTAMPTZARRAY  1185
#define        PG_TIMETZARRAY  1270
#define     PG_TINTERVALARRAY  1025
#define       PG_TSQUERYARRAY  3645
#define       PG_TSRANGEARRAY  3909
#define     PG_TSTZRANGEARRAY  3911
#define      PG_TSVECTORARRAY  3643
#define PG_TXID_SNAPSHOTARRAY  2949
#define          PG_UUIDARRAY  2951
#define        PG_VARBITARRAY  1563
#define       PG_VARCHARARRAY  1015
#define           PG_XIDARRAY  1011
#define           PG_XMLARRAY  143

