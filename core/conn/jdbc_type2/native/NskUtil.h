/*************************************************************************
// @@@ START COPYRIGHT @@@
//
// (C) Copyright 1998-2014 Hewlett-Packard Development Company, L.P.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//
// @@@ END COPYRIGHT @@@
**************************************************************************/
//
// MODULE: nskutil.h

#ifndef _NSKUTIL_DEFINED
#define _NSKUTIL_DEFINED
#include <windows.h>
#include "sqlcli.h"
#include "srvrFunctions.h"
#include "CSrvrStmt.h"

#define EXT_FILENAME_LEN 34
#define MAX_DBNAME_LEN 25 /* (1+7) + (1+7) + (1+8) */
						  /* \SYSTEM.$VOLUME.SUBVOLUME */

// capture MP system catalog name function prototype 
extern BOOL envGetSystemCatalogName (char *systemCatalogNm);

// capture MX system catalog name function prototype
extern BOOL envGetMXSystemCatalogName (char *systemCatalogNm);

extern BOOL envGetSQLType ( char *guardianNm, char *SQLType);

extern BOOL GetSystemNm (char *systemNm);

extern BOOL envGetCatalogsTable(char *catalogsTableNm);

extern BOOL envGetCatalogName (char *guardianNm, char *catalogNm);

extern void translateShortAnsitoNSKFormat (char *shortansiNm, char *catalogNm);

extern void translateNSKtoShortAnsiFormat (char *shortansiNm, char *catalogNm);

#endif