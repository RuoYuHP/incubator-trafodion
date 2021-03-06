//******************************************************************************
// @@@ START COPYRIGHT @@@
//
// (C) Copyright 2011-2014 Hewlett-Packard Development Company, L.P.
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
//******************************************************************************
#ifndef ELEMDDLLIBCLIENTFILENAME_H
#define ELEMDDLLIBCLIENTFILENAME_H
/* -*-C++-*-
********************************************************************************
*
* File:         ElemDDLLibClientFilename.h
* Description:  class that contains the (parse node) elements in DDL statements
                for the local filename of the deployed library 
*               
*
*               
* Created:      10/14/2011
* Language:     C++
*
*
*
*
********************************************************************************
*/

#include "ComSmallDefs.h"
#include "ElemDDLNode.h"

class ElemDDLLibClientFilename : public ElemDDLNode
{

public:

   ElemDDLLibClientFilename(const NAString &theFilename);

   virtual ~ElemDDLLibClientFilename();

   virtual ElemDDLLibClientFilename * castToElemDDLLibClientFilename(void);

   inline const NAString &getFilename(void) const
   {
      return theFilename_;
   }

//
// methods for tracing
//
  
   virtual const NAString displayLabel1() const;
                 NAString getSyntax() const;
   virtual const NAString getText() const;

private:

const NAString & theFilename_;

}; // class ElemDDLLibClientFilename

#endif /* ELEMDDLLIBCLIENTFILENAME_H */
