/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    sySkip = 258,
    syRoutine = 259,
    sySimpleRoutine = 260,
    sySubsystem = 261,
    syKernelUser = 262,
    syKernelServer = 263,
    syMsgOption = 264,
    syMsgSeqno = 265,
    syWaitTime = 266,
    sySendTime = 267,
    syNoWaitTime = 268,
    syNoSendTime = 269,
    syErrorProc = 270,
    syServerPrefix = 271,
    syUserPrefix = 272,
    syServerDemux = 273,
    syRCSId = 274,
    syImport = 275,
    syUImport = 276,
    sySImport = 277,
    syIImport = 278,
    syDImport = 279,
    syIn = 280,
    syOut = 281,
    syInOut = 282,
    syUserImpl = 283,
    syServerImpl = 284,
    syRequestPort = 285,
    syReplyPort = 286,
    sySReplyPort = 287,
    syUReplyPort = 288,
    syType = 289,
    syArray = 290,
    syStruct = 291,
    syOf = 292,
    syInTran = 293,
    syOutTran = 294,
    syDestructor = 295,
    syCType = 296,
    syCUserType = 297,
    syUserTypeLimit = 298,
    syOnStackLimit = 299,
    syCServerType = 300,
    syPointerTo = 301,
    syPointerToIfNot = 302,
    syValueOf = 303,
    syCString = 304,
    sySecToken = 305,
    syUserSecToken = 306,
    syServerSecToken = 307,
    syAuditToken = 308,
    syUserAuditToken = 309,
    syServerAuditToken = 310,
    syServerContextToken = 311,
    syColon = 312,
    sySemi = 313,
    syComma = 314,
    syPlus = 315,
    syMinus = 316,
    syStar = 317,
    syDiv = 318,
    syLParen = 319,
    syRParen = 320,
    syEqual = 321,
    syCaret = 322,
    syTilde = 323,
    syLAngle = 324,
    syRAngle = 325,
    syLBrack = 326,
    syRBrack = 327,
    syBar = 328,
    syError = 329,
    syNumber = 330,
    sySymbolicType = 331,
    syIdentifier = 332,
    syString = 333,
    syQString = 334,
    syFileName = 335,
    syIPCFlag = 336
  };
#endif
/* Tokens.  */
#define sySkip 258
#define syRoutine 259
#define sySimpleRoutine 260
#define sySubsystem 261
#define syKernelUser 262
#define syKernelServer 263
#define syMsgOption 264
#define syMsgSeqno 265
#define syWaitTime 266
#define sySendTime 267
#define syNoWaitTime 268
#define syNoSendTime 269
#define syErrorProc 270
#define syServerPrefix 271
#define syUserPrefix 272
#define syServerDemux 273
#define syRCSId 274
#define syImport 275
#define syUImport 276
#define sySImport 277
#define syIImport 278
#define syDImport 279
#define syIn 280
#define syOut 281
#define syInOut 282
#define syUserImpl 283
#define syServerImpl 284
#define syRequestPort 285
#define syReplyPort 286
#define sySReplyPort 287
#define syUReplyPort 288
#define syType 289
#define syArray 290
#define syStruct 291
#define syOf 292
#define syInTran 293
#define syOutTran 294
#define syDestructor 295
#define syCType 296
#define syCUserType 297
#define syUserTypeLimit 298
#define syOnStackLimit 299
#define syCServerType 300
#define syPointerTo 301
#define syPointerToIfNot 302
#define syValueOf 303
#define syCString 304
#define sySecToken 305
#define syUserSecToken 306
#define syServerSecToken 307
#define syAuditToken 308
#define syUserAuditToken 309
#define syServerAuditToken 310
#define syServerContextToken 311
#define syColon 312
#define sySemi 313
#define syComma 314
#define syPlus 315
#define syMinus 316
#define syStar 317
#define syDiv 318
#define syLParen 319
#define syRParen 320
#define syEqual 321
#define syCaret 322
#define syTilde 323
#define syLAngle 324
#define syRAngle 325
#define syLBrack 326
#define syRBrack 327
#define syBar 328
#define syError 329
#define syNumber 330
#define sySymbolicType 331
#define syIdentifier 332
#define syString 333
#define syQString 334
#define syFileName 335
#define syIPCFlag 336

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 174 "parser.y" /* yacc.c:1909  */

    u_int number;
    identifier_t identifier;
    string_t string;
    statement_kind_t statement_kind;
    ipc_type_t *type;
    struct
    {
      u_int innumber;		/* msgt_name value, when sending */
      string_t instr;
      u_int outnumber;	/* msgt_name value, when receiving */
      string_t outstr;
      u_int size;		/* 0 means there is no default size */
    } symtype;
    routine_t *routine;
    arg_kind_t direction;
    argument_t *argument;
    ipc_flags_t flag;

#line 236 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
