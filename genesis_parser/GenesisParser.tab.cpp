/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "GenesisParser.ypp" /* yacc.c:339  */

// SLI parser
#include <iosfwd>
#include <string>
#include <vector>
#include <map>


// Upi Bhalla, 24 May 2004:
// I did a little checking up about portability of the setjmp construct
// in the parser code. It looks like it ought to work even in VC++,
// but I'll have to actually compile it to be sure. The consensus
// seems to be that this language construct should probably be
// avoided. Since I want to keep the changes to the SLI parser code
// to a minimum, I'll leave it in.
#include <setjmp.h>

// #include "../basecode/Shell.h"
#include "FlexLexer.h"
#include "header.h"
#include "script.h"
#include "GenesisParser.h"
#include "GenesisParser.tab.h"
#include "func_externs.h"

using namespace std;

/*
** Parser routines which return something other than int.
*/

extern char *TokenStr(int token);

#line 72 "GenesisParser.ypp" /* yacc.c:339  */

#include "GenesisParser.yy.cpp"

#line 104 "GenesisParser.tab.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "GenesisParser.tab.hpp".  */
#ifndef YY_YY_GENESISPARSER_TAB_HPP_INCLUDED
# define YY_YY_GENESISPARSER_TAB_HPP_INCLUDED
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
    OR = 258,
    AND = 259,
    LT = 260,
    LE = 261,
    GT = 262,
    GE = 263,
    EQ = 264,
    NE = 265,
    POW = 266,
    UMINUS = 267,
    WHILE = 268,
    IF = 269,
    ELSE = 270,
    ELIF = 271,
    FOR = 272,
    FOREACH = 273,
    END = 274,
    INCLUDE = 275,
    ENDSCRIPT = 276,
    BREAK = 277,
    QUIT = 278,
    INT = 279,
    FLOAT = 280,
    STR = 281,
    RETURN = 282,
    WHITESPACE = 283,
    FUNCTION = 284,
    INTCONST = 285,
    DOLLARARG = 286,
    FLOATCONST = 287,
    STRCONST = 288,
    LITERAL = 289,
    IDENT = 290,
    VARREF = 291,
    FUNCREF = 292,
    EXTERN = 293,
    SL = 294,
    COMMAND = 295,
    EXPRCALL = 296,
    ARGUMENT = 297,
    ARGLIST = 298,
    LOCREF = 299,
    ICAST = 300,
    FCAST = 301,
    SCAST = 302
  };
#endif

/* Value type.  */


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GENESISPARSER_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 198 "GenesisParser.tab.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   378

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  132
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  220

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      59,     2,     2,    60,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    11,     2,     2,     2,    20,    14,     2,
      62,    63,    18,    12,    67,    13,     2,    19,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    61,
       2,    64,     2,     2,    17,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    16,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    65,    15,    66,    21,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    80,    80,    84,    88,    87,   123,   124,   125,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   146,   166,   177,   176,   194,
     193,   216,   222,   215,   240,   239,   257,   260,   263,   262,
     279,   295,   294,   304,   347,   388,   391,   405,   404,   419,
     418,   450,   449,   493,   501,   500,   522,   525,   531,   535,
     541,   542,   545,   546,   549,   550,   553,   559,   567,   574,
     581,   589,   593,   588,   602,   606,   610,   619,   638,   644,
     675,   713,   717,   712,   733,   734,   738,   749,   762,   768,
     774,   782,   788,   790,   789,   803,   802,   814,   815,   819,
     831,   837,   846,   849,   851,   853,   855,   858,   861,   863,
     865,   867,   869,   871,   873,   876,   878,   880,   883,   885,
     887,   889,   891,   893,   896,   916,   923,   930,   938,   946,
     949,   952,   955
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "OR", "AND", "LT", "LE", "GT", "GE",
  "EQ", "NE", "'!'", "'+'", "'-'", "'&'", "'|'", "'^'", "'@'", "'*'",
  "'/'", "'%'", "'~'", "POW", "UMINUS", "WHILE", "IF", "ELSE", "ELIF",
  "FOR", "FOREACH", "END", "INCLUDE", "ENDSCRIPT", "BREAK", "QUIT", "INT",
  "FLOAT", "STR", "RETURN", "WHITESPACE", "FUNCTION", "INTCONST",
  "DOLLARARG", "FLOATCONST", "STRCONST", "LITERAL", "IDENT", "VARREF",
  "FUNCREF", "EXTERN", "SL", "COMMAND", "EXPRCALL", "ARGUMENT", "ARGLIST",
  "LOCREF", "ICAST", "FCAST", "SCAST", "'\\n'", "'\\r'", "';'", "'('",
  "')'", "'='", "'{'", "'}'", "','", "$accept", "script", "statement_list",
  "@1", "stmnt_terminator", "statement", "endscript_marker", "quit_stmnt",
  "while_stmnt", "@2", "for_stmnt", "@3", "foreach_stmnt", "$@4", "$@5",
  "if_stmnt", "@6", "else_clause", "@7", "assign_stmnt", "include_hdr",
  "$@8", "include_stmnt", "opt_node", "cmd_name", "$@9", "$@10",
  "cmd_stmnt", "$@11", "funcref", "func_call", "$@12", "opt_arg_list",
  "arg_list", "optwslist", "wslist", "ws", "arg_component_list",
  "arg_component", "$@13", "$@14", "ac_func_cmd_expr", "ext_func",
  "func_hdr", "func_def", "$@15", "$@16", "func_args", "func_arg_list",
  "decl_type", "decl_stmnt", "decl_list", "$@17", "decl_ident", "$@18",
  "init", "break_stmnt", "return_stmnt", "null_stmnt", "expr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,    33,    43,    45,    38,   124,    94,    64,    42,    47,
      37,   126,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,    10,
      13,    59,    40,    41,    61,   123,   125,    44
};
# endif

#define YYPACT_NINF -104

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-104)))

#define YYTABLE_NINF -66

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-66)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -104,    23,    28,  -104,   242,   -33,    16,    34,   -13,  -104,
    -104,  -104,  -104,  -104,  -104,  -104,    93,   -30,  -104,    21,
    -104,   -22,   -28,  -104,  -104,  -104,  -104,  -104,  -104,  -104,
      45,  -104,  -104,  -104,    42,  -104,  -104,  -104,  -104,    51,
    -104,  -104,  -104,  -104,    93,    93,    52,    40,    61,    93,
      93,    93,  -104,  -104,  -104,  -104,  -104,    93,    80,   309,
    -104,  -104,    42,    93,    42,  -104,  -104,  -104,  -104,  -104,
    -104,    69,  -104,  -104,  -104,  -104,  -104,  -104,    42,  -104,
      47,  -104,    44,  -104,   159,   179,    21,    55,  -104,  -104,
    -104,   356,  -104,    91,   199,    50,    54,    64,    32,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,  -104,   309,    42,
      42,  -104,    79,    80,  -104,  -104,    86,  -104,    74,  -104,
    -104,  -104,    93,    94,  -104,  -104,  -104,  -104,   327,   327,
     345,   345,   345,   345,   345,   345,   131,   131,   131,   131,
     131,   131,    91,    91,    91,  -104,    79,    42,   -39,    38,
    -104,  -104,  -104,  -104,   309,    79,  -104,   -59,  -104,    93,
    -104,    51,  -104,  -104,   241,  -104,    42,   100,    38,  -104,
    -104,    42,    75,  -104,  -104,    97,   114,   309,  -104,   116,
     -15,    52,    94,    42,  -104,  -104,  -104,  -104,  -104,    85,
     122,   107,  -104,    38,   124,    93,  -104,  -104,   117,   221,
    -104,  -104,  -104,   127,   129,  -104,  -104,  -104,   -15,  -104
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     4,     1,   102,     0,     0,     0,     0,    41,
      25,    99,    26,    88,    89,    90,   101,     0,    47,    49,
      53,     0,     0,    15,    16,     9,    10,    11,    12,    13,
       0,    14,    51,    17,    45,    18,    20,    81,    19,     0,
      21,    22,    23,    24,     0,     0,     0,     0,    64,     0,
       0,     0,   126,   128,   125,   127,   124,     0,     0,   100,
      79,    80,    45,     0,     0,    77,    78,     6,     7,     8,
       5,    64,    56,    70,    69,    68,    71,    54,    46,    66,
      84,    95,    91,    92,     0,     0,     0,     0,    31,    65,
      42,   117,   114,   106,     0,   124,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,    40,    50,
      65,    44,    64,     0,    56,    67,     0,    82,    97,    93,
      27,    34,     0,    60,   132,   130,   131,   129,   115,   116,
     118,   119,   120,   121,   122,   123,   108,   109,   104,   103,
     105,   107,   110,   111,   112,   113,    64,    58,    62,     0,
      52,    75,    74,    72,    76,    64,    86,     0,     3,     0,
      96,     0,     3,     3,     0,    62,     0,    61,     0,    43,
      63,    57,     0,    55,    85,     0,     4,    98,    94,     4,
       4,     0,    60,    59,    73,    87,    83,    28,     3,     0,
       0,     0,    32,    61,     4,     0,    35,    29,     0,     0,
       3,     3,    38,     4,     4,     3,    30,    33,     4,    39
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -104,  -104,    96,  -104,  -104,  -104,  -104,  -104,  -104,  -104,
    -104,  -104,  -104,  -104,  -104,  -104,  -104,   -58,  -104,   -43,
    -104,  -104,  -104,   128,  -104,  -104,  -104,   -49,  -104,  -104,
     -48,  -104,    76,    56,    18,  -103,   -46,   -47,   -76,  -104,
    -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,
    -104,  -104,  -104,    49,  -104,  -104,  -104,  -104,  -104,   -44
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    70,    22,    23,    24,    25,   172,
      26,   210,    27,   133,   208,    28,   173,   200,   215,    29,
      30,    48,    31,    77,    32,    62,    64,    33,    72,    34,
      35,   124,   122,   156,   176,   159,    90,    78,    79,   123,
     182,   163,    36,    37,    38,    80,   168,   127,   167,    39,
      40,    82,   171,    83,   128,   170,    41,    42,    43,    59
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      84,    85,   125,    87,   184,    91,    92,    93,   185,    96,
      97,   198,   199,    94,    98,   -36,    60,   119,    61,   118,
     -65,   -65,   -65,     3,    65,   121,    66,   -65,    -2,    44,
     177,    67,    68,    69,    47,    99,   100,   101,   102,   103,
     104,   105,   106,   125,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   178,   116,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   157,   161,   162,   160,   180,    45,   164,
      73,   125,    74,    75,    73,    63,    74,    75,   174,   203,
      71,    49,   -49,    50,   -49,   -49,    46,    81,   137,    86,
      89,    51,    88,    76,    49,   125,    50,    76,   120,   126,
     179,   129,   181,   116,    51,   -49,   132,   125,   158,   183,
     135,    52,    53,    54,    55,   187,    18,    95,    20,   157,
     136,   193,   166,   175,    52,    53,    54,    55,   169,   180,
      56,   194,    57,   195,   196,    58,   197,   205,   201,   113,
     114,   115,   206,   116,   -37,    57,   193,   216,    58,   217,
     219,   209,    99,   100,   101,   102,   103,   104,   105,   106,
     207,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     211,   116,    99,   100,   101,   102,   103,   104,   105,   106,
     117,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     165,   116,    99,   100,   101,   102,   103,   104,   105,   106,
     202,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     188,   116,   130,     0,    99,   100,   101,   102,   103,   104,
     105,   106,   192,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   131,   116,    99,   100,   101,   102,   103,   104,
     105,   106,     0,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   134,   116,   186,     0,     5,     6,   189,   190,
       7,     8,     0,     9,    10,    11,    12,    13,    14,    15,
      16,     0,    17,     0,   212,     0,     0,     0,    18,    19,
      20,    21,     0,     0,   204,     0,     0,     0,     0,     0,
       0,     0,   191,     0,     0,     0,   213,   214,     0,     0,
       0,   218,    99,   100,   101,   102,   103,   104,   105,   106,
       0,   107,   108,   109,   110,   111,   112,   113,   114,   115,
       0,   116,   101,   102,   103,   104,   105,   106,     0,   107,
     108,   109,   110,   111,   112,   113,   114,   115,     0,   116,
     -66,   -66,   -66,   -66,   -66,   -66,     0,   107,   108,   109,
     110,   111,   112,   113,   114,   115,     0,   116,   107,   108,
     109,   110,   111,   112,   113,   114,   115,     0,   116
};

static const yytype_int16 yycheck[] =
{
      44,    45,    78,    46,    63,    49,    50,    51,    67,    58,
      58,    26,    27,    57,    58,    30,    46,    64,    48,    63,
      59,    60,    61,     0,    46,    71,    48,    66,     0,    62,
     133,    59,    60,    61,    47,     3,     4,     5,     6,     7,
       8,     9,    10,   119,    12,    13,    14,    15,    16,    17,
      18,    19,    20,   156,    22,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   120,   123,   123,   122,    39,    62,   123,
      42,   157,    44,    45,    42,    64,    44,    45,   132,   192,
      45,    11,    42,    13,    44,    45,    62,    46,    66,    47,
      39,    21,    62,    65,    11,   181,    13,    65,    39,    62,
     156,    67,   159,    22,    21,    65,    61,   193,    39,   165,
      66,    41,    42,    43,    44,   169,    46,    47,    48,   176,
      66,   178,    46,    39,    41,    42,    43,    44,    64,    39,
      47,    66,    62,    46,    30,    65,    30,    62,   191,    18,
      19,    20,    30,    22,    30,    62,   203,    30,    65,    30,
     218,   205,     3,     4,     5,     6,     7,     8,     9,    10,
      63,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      63,    22,     3,     4,     5,     6,     7,     8,     9,    10,
      62,    12,    13,    14,    15,    16,    17,    18,    19,    20,
     124,    22,     3,     4,     5,     6,     7,     8,     9,    10,
     192,    12,    13,    14,    15,    16,    17,    18,    19,    20,
     171,    22,    63,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,   176,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    63,    22,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    63,    22,   168,    -1,    24,    25,   172,   173,
      28,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    -1,    40,    -1,    63,    -1,    -1,    -1,    46,    47,
      48,    49,    -1,    -1,   198,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    -1,    -1,    -1,   210,   211,    -1,    -1,
      -1,   215,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    22,     5,     6,     7,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    22,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    22,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    22
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    69,    70,     0,    71,    24,    25,    28,    29,    31,
      32,    33,    34,    35,    36,    37,    38,    40,    46,    47,
      48,    49,    73,    74,    75,    76,    78,    80,    83,    87,
      88,    90,    92,    95,    97,    98,   110,   111,   112,   117,
     118,   124,   125,   126,    62,    62,    62,    47,    89,    11,
      13,    21,    41,    42,    43,    44,    47,    62,    65,   127,
      46,    48,    93,    64,    94,    46,    48,    59,    60,    61,
      72,    45,    96,    42,    44,    45,    65,    91,   105,   106,
     113,    46,   119,   121,   127,   127,    47,    87,    62,    39,
     104,   127,   127,   127,   127,    47,    95,    98,   127,     3,
       4,     5,     6,     7,     8,     9,    10,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    22,    91,   127,   105,
      39,   104,   100,   107,    99,   106,    62,   115,   122,    67,
      63,    63,    61,    81,    63,    66,    66,    66,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   101,   105,    39,   103,
     104,    95,    98,   109,   127,   100,    46,   116,   114,    64,
     123,   120,    77,    84,   127,    39,   102,   103,   103,   104,
      39,   105,   108,   104,    63,    67,    70,   127,   121,    70,
      70,    61,   101,   105,    66,    46,    30,    30,    26,    27,
      85,    87,   102,   103,    70,    62,    30,    63,    82,   127,
      79,    63,    63,    70,    70,    86,    30,    30,    70,    85
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    68,    69,    70,    71,    70,    72,    72,    72,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    74,    75,    77,    76,    79,
      78,    81,    82,    80,    84,    83,    85,    85,    86,    85,
      87,    89,    88,    90,    90,    91,    91,    93,    92,    94,
      92,    96,    95,    97,    99,    98,   100,   100,   101,   101,
     102,   102,   103,   103,   104,   104,   105,   105,   106,   106,
     106,   107,   108,   106,   109,   109,   109,   110,   110,   111,
     111,   113,   114,   112,   115,   115,   116,   116,   117,   117,
     117,   118,   119,   120,   119,   122,   121,   123,   123,   124,
     125,   125,   126,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     0,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     7,     0,
      11,     0,     0,    11,     0,     8,     0,     2,     0,     7,
       3,     0,     3,     5,     3,     0,     1,     0,     3,     0,
       3,     0,     4,     1,     0,     5,     0,     3,     1,     3,
       0,     1,     1,     2,     0,     1,     1,     2,     1,     1,
       1,     0,     0,     5,     1,     1,     1,     2,     2,     2,
       2,     0,     0,     6,     0,     3,     1,     3,     1,     1,
       1,     2,     1,     0,     4,     0,     3,     0,     2,     1,
       2,     1,     0,     3,     3,     3,     2,     3,     3,     3,
       3,     3,     3,     3,     2,     3,     3,     2,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     3,
       3,     3,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
myFlexLexer::yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 84 "GenesisParser.ypp" /* yacc.c:1646  */
    { 
		    (yyval.pn) = NULL;
 		  }
#line 1479 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 88 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    (yyval.str) = (char *) MakeScriptInfo();
		    SetLine((ScriptInfo *) (yyval.str));
		  }
#line 1488 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 93 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    ResultValue	v;

		    if (InFunctionDefinition || Compiling)
			if ((yyvsp[-1].pn) != NULL)
			  {
			    v.r_str = (yyvsp[-2].str);
			    (yyval.pn) = PTNew(SL, v, (yyvsp[-3].pn), (yyvsp[-1].pn));
			  }
			else
			  {
			    FreeScriptInfo((ScriptInfo *)(yyvsp[-2].str));
			    (yyval.pn) = (yyvsp[-3].pn);
			  }
		    else
		      {
		        /* execute statement */
		        if (setjmp(BreakBuf) == 0) {
			    if (setjmp(ReturnBuf) == 0)
				PTCall((yyvsp[-1].pn));
			    else
				EndScript();
		        }
			FreeScriptInfo((ScriptInfo *)(yyvsp[-2].str));
			FreePTValues((yyvsp[-1].pn));
			PTFree((yyvsp[-1].pn));
		      }
		  }
#line 1521 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 147 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    /*
		    ** When the end of a script is encountered, the simulator
		    ** sgets routine returns NULL.  The nextchar routine in the
		    ** lexer returns a special character '\200' which is lexed
		    ** as ENDSCRIPT.  We need this when we include a script
		    ** in a function or control structure so that the script
		    ** local variable storage is allocated and deallocated.
		    */

		    if (Compiling || InFunctionDefinition)
		      {
			(yyval.pn) = PTNew(ENDSCRIPT, RV, NULL, NULL);
		      }
		    else
			(yyval.pn) = NULL;
		  }
#line 1543 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 167 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    ResultValue	v;
		    char * argv[] = {"quit"};
		    (yyval.pn) = PTNew(QUIT, v, NULL, NULL);
		    doQuit(true);
		    ExecuteCommand(1, argv);
		    YYACCEPT;	
	          }
#line 1556 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 177 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    Compiling++;
		    BreakAllowed++;
		    (yyval.str) = (char *) MakeScriptInfo();
		  }
#line 1566 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 183 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    ResultValue	v;

		    v.r_str = (yyvsp[-2].str);
		    (yyval.pn) = PTNew(WHILE, v, (yyvsp[-4].pn), (yyvsp[-1].pn));
		    Compiling--;
		    BreakAllowed--;
		  }
#line 1579 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 194 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		      Compiling++;
		      BreakAllowed++;
		      (yyval.str) = (char *) MakeScriptInfo();
		    }
#line 1589 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 201 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    ResultValue	v;
		    ParseNode	*forbody, *whilepart;

		    v.r_str = (char *) MakeScriptInfo();
		    forbody = PTNew(SL, v, (yyvsp[-1].pn), (yyvsp[-4].pn));
		    v.r_str = (yyvsp[-2].str);
		    whilepart = PTNew(FOR, v, (yyvsp[-6].pn), forbody);
		    (yyval.pn) = PTNew(SL, v, (yyvsp[-8].pn), whilepart);
		    Compiling--;
		    BreakAllowed--;
		  }
#line 1606 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 216 "GenesisParser.ypp" /* yacc.c:1646  */
    {
			BEGIN FUNCLIT;
			Compiling++;
			BreakAllowed++;
		    }
#line 1616 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 222 "GenesisParser.ypp" /* yacc.c:1646  */
    {
			BEGIN 0;
		    }
#line 1624 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 226 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    Result	*rp;
		    ResultValue	v;
		    // char        buf[100];

		    rp = (Result *) (yyvsp[-9].str);
		    v.r_str = (char *) rp;
		    (yyval.pn) = PTNew(FOREACH, v, (yyvsp[-5].pn), (yyvsp[-1].pn));
		    Compiling--;
		    BreakAllowed--;
		  }
#line 1640 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 240 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    Compiling++;
		    (yyval.str) = (char *) MakeScriptInfo();
		  }
#line 1649 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 245 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    ResultValue	v;
		    ParseNode	*stmntlists;

		    stmntlists = PTNew(0, v, (yyvsp[-2].pn), (yyvsp[-1].pn));
		    v.r_str = (yyvsp[-3].str);
		    (yyval.pn) = PTNew(IF, v, (yyvsp[-5].pn), stmntlists);
		    Compiling--;
		  }
#line 1663 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 257 "GenesisParser.ypp" /* yacc.c:1646  */
    {
 		    (yyval.pn) = NULL;
 		  }
#line 1671 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 261 "GenesisParser.ypp" /* yacc.c:1646  */
    { (yyval.pn) = (yyvsp[0].pn); }
#line 1677 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 263 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    Compiling++;
		    (yyval.str) = (char *) MakeScriptInfo();
		  }
#line 1686 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 268 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    ResultValue	v;
		    ParseNode	*stmntlists;

		    stmntlists = PTNew(0, v, (yyvsp[-1].pn), (yyvsp[0].pn));
		    v.r_str = (yyvsp[-2].str);
		    (yyval.pn) = PTNew(IF, v, (yyvsp[-4].pn), stmntlists);
		    Compiling--;
		  }
#line 1700 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 280 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    ResultValue	v;
		    Result	*rp;
		    // char        buf[100];

		    (yyval.pn) = NULL;
		    rp = (Result *) (yyvsp[-2].str);
			  {
			    v.r_str = (char *) rp;
		            (yyval.pn) = PTNew('=', v, (yyvsp[0].pn), NULL);
			  }
		  }
#line 1717 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 295 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    Pushyybgin(LIT);
		  }
#line 1725 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 299 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    (yyval.str) = NULL;
		  }
#line 1733 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 305 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    ResultValue	v;
		    // Result	*rp;
		    int		argc;
		    char	*argv[100];
		    char	argbuf[1000];
			bool	doneFree = 0;
		    // jmp_buf	save;
		    // Result	r;

		    Popyybgin();
		    sprintf(argbuf, "%s", (yyvsp[-3].str));
		    argc = 1;
		    argv[0] = argbuf;
		    do_cmd_args((yyvsp[-1].pn), &argc, argv);
		    argv[argc] = NULL;

		    if (!IncludeScript(argc, argv))
		      {
			sprintf(argbuf, "Script '%s' not found", (yyvsp[-3].str));
			FreePTValues((yyvsp[-1].pn));
			PTFree((yyvsp[-1].pn));
			free((yyvsp[-3].str));
			doneFree = 1;
			yyerror(argbuf);
		      }

		    if (Compiling || InFunctionDefinition)
		      {
			v.r_str = (yyvsp[-3].str);
			(yyval.pn) = PTNew(INCLUDE, v, (yyvsp[-1].pn), NULL);
		      }
		    else
		      {
			  if ( doneFree == 0 ) {
				FreePTValues((yyvsp[-1].pn));
				PTFree((yyvsp[-1].pn));
				free((yyvsp[-3].str));
				}
			(yyval.pn) = NULL;
		      }
		  }
#line 1780 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 348 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    ResultValue	v;
		    // Result	*rp;
		    int		argc;
		    char	*argv[100];
		    char	argbuf[1000];
			bool	doneFree = 0;
		    // jmp_buf	save;
		    // Result	r;

		    Popyybgin();
		    sprintf(argbuf, "%s", (yyvsp[-1].str));
		    argc = 1;
		    argv[0] = argbuf;
		    argv[argc] = NULL;

		    if (!IncludeScript(argc, argv))
		      {
			sprintf(argbuf, "Script '%s' not found", (yyvsp[-1].str));
			free((yyvsp[-1].str));
			doneFree = 1;
			yyerror(argbuf);
		      }

		    if (Compiling || InFunctionDefinition)
		      {
			v.r_str = (yyvsp[-1].str);
			(yyval.pn) = PTNew(INCLUDE, v, NULL, NULL);
		      }
		    else
		      {
			  if ( doneFree == 0 ) {
				free((yyvsp[-1].str));
			}
			(yyval.pn) = NULL;
		      }
		  }
#line 1822 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 388 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    (yyval.pn) = (ParseNode*) NULL;
		  }
#line 1830 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 392 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    (yyval.pn) = (yyvsp[0].pn);
		  }
#line 1838 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 405 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    Pushyybgin(LIT);
		  }
#line 1846 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 409 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    ResultValue	v;

		    v.r_str = (yyvsp[-2].str);
		    if ((yyvsp[0].pn) == NULL)
			(yyval.pn) = PTNew(COMMAND, v, NULL, NULL);
		    else
			(yyval.pn) = PTNew(FUNCTION, v, NULL, (yyvsp[0].pn));
		  }
#line 1860 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 419 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    Pushyybgin(LIT);
		  }
#line 1868 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 423 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    ResultValue	v;
		    char*	varname;

		    varname = NULL;
		    if (LocalSymbols != NULL)
			varname = SymtabKey(LocalSymbols, (Result *)(yyvsp[-2].str));
		    if (varname == NULL)
			varname = SymtabKey(&GlobalSymbols, (Result *)(yyvsp[-2].str));
		    v.r_str = (char*) strsave(varname);

		    (yyval.pn) = PTNew(FUNCTION, v, NULL, (yyvsp[0].pn));
		  }
#line 1886 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 450 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    BEGIN LIT;
		  }
#line 1894 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 454 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    // ResultValue	v;
		    // Result	*rp;
		    int		argc;
		    char	*argv[100];
		    char	argbuf[1000];
		    // jmp_buf	save;
		    // Result	r;

		    (yyval.pn) = (yyvsp[-3].pn);
		    (yyvsp[-3].pn)->pn_left = (yyvsp[-1].pn);
		    Popyybgin();
		    if ((yyvsp[-3].pn)->pn_val.r_type != EXPRCALL && (yyvsp[-3].pn)->pn_right == NULL &&
				!IsCommand((yyvsp[-3].pn)->pn_val.r.r_str))
		      {
			if (IsInclude((yyvsp[-3].pn)->pn_val.r.r_str))
			  {
			    sprintf(argbuf, "%s", (yyvsp[-3].pn)->pn_val.r.r_str);
			    argc = 1;
			    argv[0] = argbuf;
			    do_cmd_args((yyvsp[-1].pn), &argc, argv);
			    argv[argc] = NULL;
			    IncludeScript(argc, argv);

			    if (Compiling || InFunctionDefinition)
			      {
				(yyvsp[-3].pn)->pn_val.r_type = INCLUDE;
			      }
			    else
			      {
				FreePTValues((yyvsp[-3].pn));
				PTFree((yyvsp[-3].pn));
				(yyval.pn) = NULL;
			      }
			  }
		      }
		  }
#line 1936 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 494 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    Pushyybgin(LIT);
		    (yyval.str) = (yyvsp[0].str);
		  }
#line 1945 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 501 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    BEGIN LIT;
		  }
#line 1953 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 505 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    ResultValue	v;
		    Result	*rp;

		    Popyybgin();
		    rp = (Result *) (yyvsp[-4].str);
		    if ((yyvsp[-3].pn) == NULL)
			(yyval.pn) = PTNew(FUNCTION, rp->r, (yyvsp[-1].pn), NULL);
		    else
		      {
			v.r_str = (char*) strsave(SymtabKey(&GlobalSymbols, rp));
			(yyval.pn) = PTNew(FUNCTION, v, (yyvsp[-1].pn), (yyvsp[-3].pn));
		      }
		  }
#line 1972 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 522 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    (yyval.pn) = NULL;
		  }
#line 1980 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 526 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    (yyval.pn) = PTNew(ARGLIST, RV, (yyvsp[-2].pn), (yyvsp[0].pn));
		  }
#line 1988 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 532 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    (yyval.pn) = PTNew(ARGLIST, RV, NULL, (yyvsp[0].pn));
		  }
#line 1996 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 536 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    (yyval.pn) = PTNew(ARGLIST, RV, (yyvsp[-2].pn), (yyvsp[0].pn));
		  }
#line 2004 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 554 "GenesisParser.ypp" /* yacc.c:1646  */
    {
			    ResultValue	v;

			    (yyval.pn) = PTNew(ARGUMENT, v, NULL, (yyvsp[0].pn));
			  }
#line 2014 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 560 "GenesisParser.ypp" /* yacc.c:1646  */
    {
			    ResultValue	v;

			    (yyval.pn) = PTNew(ARGUMENT, v, (yyvsp[-1].pn), (yyvsp[0].pn));
			  }
#line 2024 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 568 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    ResultValue	v;

		    v.r_str = (yyvsp[0].str);
		    (yyval.pn) = PTNew(LITERAL, v, NULL, NULL);
		  }
#line 2035 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 575 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    ResultValue	v;

		    v.r_str = (yyvsp[0].str);
		    (yyval.pn) = PTNew(LITERAL, v, NULL, NULL);
		  }
#line 2046 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 582 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    ResultValue	v;

		    v.r_int = (yyvsp[0].iconst);
		    (yyval.pn) = PTNew(DOLLARARG, v, NULL, NULL);
		  }
#line 2057 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 589 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    Pushyybgin(0);
		  }
#line 2065 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 593 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    Popyybgin();
		  }
#line 2073 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 597 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    (yyval.pn) = (yyvsp[-2].pn);
		  }
#line 2081 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 603 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    (yyval.pn) = (yyvsp[0].pn);
		  }
#line 2089 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 607 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    (yyval.pn) = (yyvsp[0].pn);
		  }
#line 2097 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 611 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    if ((yyvsp[0].pn)->pn_val.r_type == STRCONST)
			(yyvsp[0].pn)->pn_val.r_type = LITERAL;

		    (yyval.pn) = (yyvsp[0].pn);
		  }
#line 2108 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 620 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    ParseNode	*funcpn;
		    ResultValue	v;
		    Result	*rp;

		    rp = SymtabNew(&GlobalSymbols, (yyvsp[0].str));
		    if (rp->r_type != 0 && rp->r_type != FUNCTION)
			fprintf(stderr, "WARNING: function name '%s' is redefining a variable!\n", (yyvsp[0].str));

		    rp->r_type = FUNCTION;

		    v.r_str = (char *) NULL;
		    funcpn = PTNew(SL, v, NULL, NULL);
		    rp->r.r_str = (char *) funcpn;

		    free((yyvsp[0].str));
		    (yyval.pn) = NULL;
		  }
#line 2131 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 639 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    (yyval.pn) = NULL;
		  }
#line 2139 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 645 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    ParseNode	*funcpn;
		    ResultValue	v;
		    Result	*rp;
		    // char	*script;

		    if (InFunctionDefinition)
		      {
			fprintf(stderr, "Function definition within another function or\n");
			fprintf(stderr, "within a control structure (FUNCTION %s).\n", (yyvsp[0].str));
			yyerror("");
			/* No Return */
		      }

		    InFunctionDefinition++;
		    NextLocal = 0;
		    rp = SymtabNew(&GlobalSymbols, (yyvsp[0].str));
		    if (rp->r_type != 0 && rp->r_type != FUNCTION)
			fprintf(stderr, "WARNING: function name '%s' is redefining a variable!\n", (yyvsp[0].str));

		    rp->r_type = FUNCTION;

		    LocalSymbols = SymtabCreate();
		    v.r_str = (char *) LocalSymbols;
		    funcpn = PTNew(SL, v, NULL, NULL);
		    rp->r.r_str = (char *) funcpn;

		    free((yyvsp[0].str));
		    (yyval.pn) = funcpn;
		  }
#line 2174 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 676 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    ParseNode	*funcpn;
		    // ResultValue	v;
		    Result	*rp;
		    // char	*script;

		    rp = (Result *) (yyvsp[0].str);
		    if (InFunctionDefinition)
		      {
			fprintf(stderr, "Function definition within another function or\n");
			fprintf(stderr, "within a control structure (FUNCTION %s).\n", (yyvsp[0].str));
			yyerror("");
			/* No Return */
		      }

		    /*
		    ** Free old function parse tree and symtab
		    */

		    funcpn = (ParseNode *) rp->r.r_str;
		    if (funcpn->pn_val.r.r_str != NULL)
			SymtabDestroy((Symtab *)(funcpn->pn_val.r.r_str));
		    FreePTValues(funcpn->pn_left);
		    PTFree(funcpn->pn_left);
		    FreePTValues(funcpn->pn_right);
		    PTFree(funcpn->pn_right);

		    InFunctionDefinition++;
		    NextLocal = 0;
		    LocalSymbols = SymtabCreate();
		    funcpn->pn_val.r.r_str = (char *) LocalSymbols;

		    (yyval.pn) = funcpn;
		  }
#line 2213 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 713 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    ReturnIdents = 1;
		  }
#line 2221 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 717 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    ReturnIdents = 0;
		  }
#line 2229 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 721 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    InFunctionDefinition--;

		    (yyvsp[-5].pn)->pn_left = (yyvsp[-3].pn);
		    (yyvsp[-5].pn)->pn_right = (yyvsp[-1].pn);

		    LocalSymbols = NULL;
		    (yyval.pn) = NULL;
		  }
#line 2243 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 733 "GenesisParser.ypp" /* yacc.c:1646  */
    { (yyval.pn) = NULL; }
#line 2249 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 735 "GenesisParser.ypp" /* yacc.c:1646  */
    { (yyval.pn) = (yyvsp[-1].pn); }
#line 2255 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 739 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    ResultValue	v;
		    ParseNode	*init;

		    ArgMatch = 1;
		    v.r_int = ArgMatch++;
		    init = PTNew(DOLLARARG, v, NULL, NULL);
		    (yyval.pn) = vardef((yyvsp[0].str), STR, SCAST, init);
		    free((yyvsp[0].str));
		  }
#line 2270 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 750 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    ResultValue	v;
		    ParseNode	*init;

		    v.r_int = ArgMatch++;
		    init = PTNew(DOLLARARG, v, NULL, NULL);
		    v.r_str = (char *) MakeScriptInfo();
		    (yyval.pn) = PTNew(SL, v, (yyvsp[-2].pn), vardef((yyvsp[0].str), STR, SCAST, init));
		    free((yyvsp[0].str));
		  }
#line 2285 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 763 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    ReturnIdents = 1;
		    DefType = INT;
		    DefCast = ICAST;
		  }
#line 2295 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 769 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    ReturnIdents = 1;
		    DefType = FLOAT;
		    DefCast = FCAST;
		  }
#line 2305 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 775 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    ReturnIdents = 1;
		    DefType = STR;
		    DefCast = SCAST;
		  }
#line 2315 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 783 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    (yyval.pn) = (yyvsp[0].pn);
		  }
#line 2323 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 790 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    ReturnIdents = 1;
		  }
#line 2331 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 794 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    ResultValue	v;

		    v.r_str = (char *) MakeScriptInfo();
		    (yyval.pn) = PTNew(SL, v, (yyvsp[-3].pn), (yyvsp[0].pn));
		  }
#line 2342 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 803 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    ReturnIdents = 0;
		  }
#line 2350 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 807 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    (yyval.pn) = vardef((yyvsp[-2].str), DefType, DefCast, (yyvsp[0].pn));
		    free((yyvsp[-2].str));
		  }
#line 2359 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 814 "GenesisParser.ypp" /* yacc.c:1646  */
    { (yyval.pn) = NULL; }
#line 2365 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 816 "GenesisParser.ypp" /* yacc.c:1646  */
    { (yyval.pn) = (yyvsp[0].pn); }
#line 2371 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 820 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    ResultValue	v;

		    if (BreakAllowed)
			(yyval.pn) = PTNew(BREAK, v, NULL, NULL);
		    else
			yyerror("BREAK found outside of a loop");
			/* No Return */
		  }
#line 2385 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 832 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    ResultValue	v;

		    (yyval.pn) = PTNew(RETURN, v, (yyvsp[0].pn), NULL);
		  }
#line 2395 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 838 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    ResultValue	v;

		    (yyval.pn) = PTNew(RETURN, v, NULL, NULL);
		  }
#line 2405 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 846 "GenesisParser.ypp" /* yacc.c:1646  */
    { (yyval.pn) = NULL; }
#line 2411 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 850 "GenesisParser.ypp" /* yacc.c:1646  */
    { (yyval.pn) = PTNew('|', RV, (yyvsp[-2].pn), (yyvsp[0].pn)); }
#line 2417 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 852 "GenesisParser.ypp" /* yacc.c:1646  */
    { (yyval.pn) = PTNew('&', RV, (yyvsp[-2].pn), (yyvsp[0].pn)); }
#line 2423 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 854 "GenesisParser.ypp" /* yacc.c:1646  */
    { (yyval.pn) = PTNew('^', RV, (yyvsp[-2].pn), (yyvsp[0].pn)); }
#line 2429 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 856 "GenesisParser.ypp" /* yacc.c:1646  */
    { (yyval.pn) = PTNew('~', RV, (yyvsp[0].pn), NULL); }
#line 2435 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 859 "GenesisParser.ypp" /* yacc.c:1646  */
    { (yyval.pn) = PTNew('@', RV, (yyvsp[-2].pn), (yyvsp[0].pn)); }
#line 2441 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 862 "GenesisParser.ypp" /* yacc.c:1646  */
    { (yyval.pn) = PTNew('+', RV, (yyvsp[-2].pn), (yyvsp[0].pn)); }
#line 2447 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 864 "GenesisParser.ypp" /* yacc.c:1646  */
    { (yyval.pn) = PTNew('-', RV, (yyvsp[-2].pn), (yyvsp[0].pn)); }
#line 2453 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 866 "GenesisParser.ypp" /* yacc.c:1646  */
    { (yyval.pn) = PTNew('*', RV, (yyvsp[-2].pn), (yyvsp[0].pn)); }
#line 2459 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 868 "GenesisParser.ypp" /* yacc.c:1646  */
    { (yyval.pn) = PTNew('/', RV, (yyvsp[-2].pn), (yyvsp[0].pn)); }
#line 2465 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 870 "GenesisParser.ypp" /* yacc.c:1646  */
    { (yyval.pn) = PTNew('%', RV, (yyvsp[-2].pn), (yyvsp[0].pn)); }
#line 2471 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 872 "GenesisParser.ypp" /* yacc.c:1646  */
    { (yyval.pn) = PTNew(POW, RV, (yyvsp[-2].pn), (yyvsp[0].pn)); }
#line 2477 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 874 "GenesisParser.ypp" /* yacc.c:1646  */
    { (yyval.pn) = PTNew(UMINUS, RV, (yyvsp[0].pn), NULL); }
#line 2483 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 877 "GenesisParser.ypp" /* yacc.c:1646  */
    { (yyval.pn) = PTNew(OR, RV, (yyvsp[-2].pn), (yyvsp[0].pn)); }
#line 2489 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 879 "GenesisParser.ypp" /* yacc.c:1646  */
    { (yyval.pn) = PTNew(AND, RV, (yyvsp[-2].pn), (yyvsp[0].pn)); }
#line 2495 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 881 "GenesisParser.ypp" /* yacc.c:1646  */
    { (yyval.pn) = PTNew('!', RV, (yyvsp[0].pn), NULL); }
#line 2501 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 884 "GenesisParser.ypp" /* yacc.c:1646  */
    { (yyval.pn) = PTNew(LT, RV, (yyvsp[-2].pn), (yyvsp[0].pn)); }
#line 2507 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 886 "GenesisParser.ypp" /* yacc.c:1646  */
    { (yyval.pn) = PTNew(LE, RV, (yyvsp[-2].pn), (yyvsp[0].pn)); }
#line 2513 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 888 "GenesisParser.ypp" /* yacc.c:1646  */
    { (yyval.pn) = PTNew(GT, RV, (yyvsp[-2].pn), (yyvsp[0].pn)); }
#line 2519 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 890 "GenesisParser.ypp" /* yacc.c:1646  */
    { (yyval.pn) = PTNew(GE, RV, (yyvsp[-2].pn), (yyvsp[0].pn)); }
#line 2525 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 892 "GenesisParser.ypp" /* yacc.c:1646  */
    { (yyval.pn) = PTNew(EQ, RV, (yyvsp[-2].pn), (yyvsp[0].pn)); }
#line 2531 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 894 "GenesisParser.ypp" /* yacc.c:1646  */
    { (yyval.pn) = PTNew(NE, RV, (yyvsp[-2].pn), (yyvsp[0].pn)); }
#line 2537 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 897 "GenesisParser.ypp" /* yacc.c:1646  */
    { 
		    Result	*rp;
		    ResultValue	v;

		    /*
		    ** Variable reference
		    */

		    rp = (Result *) (yyvsp[0].str);
		      {
			if (rp->r_type == FUNCTION || rp->r_type == LOCREF)
			    v = rp->r;
			else /* Global Variable */
			    v.r_str = (char *) rp;

		        (yyval.pn) = PTNew(rp->r_type, v, NULL, NULL);
		      }
 		  }
#line 2560 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 917 "GenesisParser.ypp" /* yacc.c:1646  */
    { 
		    ResultValue	v;

		    v.r_float = (yyvsp[0].fconst);
		    (yyval.pn) = PTNew(FLOATCONST, v, NULL, NULL);
 		  }
#line 2571 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 924 "GenesisParser.ypp" /* yacc.c:1646  */
    { 
		    ResultValue	v;

		    v.r_int = (yyvsp[0].iconst);
		    (yyval.pn) = PTNew(INTCONST, v, NULL, NULL);
 		  }
#line 2582 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 931 "GenesisParser.ypp" /* yacc.c:1646  */
    { 
		    ResultValue	v;

		    v.r_str = (yyvsp[0].str);
		    (yyval.pn) = PTNew(STRCONST, v, NULL, NULL);
 		  }
#line 2593 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 939 "GenesisParser.ypp" /* yacc.c:1646  */
    {
		    ResultValue	v;

		    v.r_int = (yyvsp[0].iconst);
		    (yyval.pn) = PTNew(DOLLARARG, v, NULL, NULL);
		  }
#line 2604 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 947 "GenesisParser.ypp" /* yacc.c:1646  */
    { (yyval.pn) = (yyvsp[-1].pn); }
#line 2610 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 950 "GenesisParser.ypp" /* yacc.c:1646  */
    { (yyval.pn) = (yyvsp[-1].pn); }
#line 2616 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 953 "GenesisParser.ypp" /* yacc.c:1646  */
    { (yyval.pn) = (yyvsp[-1].pn); }
#line 2622 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 956 "GenesisParser.ypp" /* yacc.c:1646  */
    { (yyval.pn) = (yyvsp[-1].pn); }
#line 2628 "GenesisParser.tab.cpp" /* yacc.c:1646  */
    break;


#line 2632 "GenesisParser.tab.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
        ;// Deleted YYSTACK_FREE( yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 960 "GenesisParser.ypp" /* yacc.c:1906  */



/*
** TokenStr
**
**	Return the token string for the given token.
*/

char *TokenStr(int token)
{	/* TokenStr --- Return token string for token */

	static char	buf[100];

	switch (token)
	  {

	  case LT: return("<");
	  case LE: return("<=");
	  case GT: return(">");
	  case GE: return(">=");
	  case EQ: return("==");
	  case NE: return("!=");

	  case OR: return("||");
	  case AND: return("&&");

#define	RET(tok)	case tok: return("tok")

	  RET(UMINUS);

	  RET(WHILE);
	  RET(IF);
	  RET(ELSE);
	  RET(FOR);
	  RET(FOREACH);
	  RET(END);
	  RET(INCLUDE);
	  RET(BREAK);
	  RET(INT);
	  RET(FLOAT);
	  RET(STR);
	  RET(RETURN);
	  RET(WHITESPACE);
	  RET(FUNCTION);
	  RET(INTCONST);
	  RET(DOLLARARG);
	  RET(FLOATCONST);
	  RET(STRCONST);
	  RET(LITERAL);
	  RET(IDENT);
	  RET(VARREF);
	  RET(FUNCREF);
	  RET(SL);
	  RET(COMMAND);
	  RET(ARGUMENT);
	  RET(ARGLIST);
	  RET(LOCREF);
	  RET(ICAST);
	  RET(FCAST);
	  RET(SCAST);

	  }

	if (token < 128)
	    if (token < ' ')
		sprintf(buf, "^%c", token+'@');
	    else
		sprintf(buf, "%c", token);
	else
	    sprintf(buf, "%d", token);

	return(buf);

}	/* TokenStr */


ParseNode * myFlexLexer::vardef(char* ident, int type, int castop, ParseNode* init)
{	/* vardef --- Define a variable */

	ParseNode	*pn;
	Result		*rp;
	// Result		*r;
	ResultValue	v, slv;

	if (InFunctionDefinition && LocalSymbols != NULL)
	  {
	    rp = SymtabNew(LocalSymbols, ident);
	    if (rp->r_type == 0)
	      {
	        rp->r_type = LOCREF;
		rp->r.r_loc.l_type = type;
		rp->r.r_loc.l_offs = NextLocal++;
	      }

	    v.r_str = (char *) rp;
	    pn = PTNew(castop, v, NULL, NULL);
	    if (init)
	      {
		slv.r_str = (char *) MakeScriptInfo();
		pn = PTNew(SL, slv, pn, PTNew('=', v, init, NULL));
	      }
	  }
	else
	  {
	    rp = SymtabNew(&GlobalSymbols, ident);
	    switch(type)
	      {

	      case INT:
	        if (rp->r_type == 0)
	            rp->r.r_int = 0;
	        else
		    CastToInt(rp);
	        break;

	      case FLOAT:
	        if (rp->r_type == 0)
	            rp->r.r_float = 0.0;
	        else
		    CastToFloat(rp);
	        break;

	      case STR:
	        if (rp->r_type == 0)
	            rp->r.r_str = (char *) strsave("");
	        else
		    CastToStr(rp);
	        break;

	      }

	    rp->r_type = type;
	    v.r_str = (char *) rp;
	    if (init)
	        pn = PTNew('=', v, init, NULL);
	    else
	        pn = NULL;
	  }

	return(pn);

}	/* vardef */


void myFlexLexer::ParseInit()

{    /* ParseInit --- Initialize parser variables */

        InFunctionDefinition = 0;
	Compiling = 0;
	BreakAllowed = 0;
	LocalSymbols = NULL;
	nextchar(1);	/* Flush lexer input */
	PTInit();	/* Reinit parse tree evaluation */

}    /* ParseInit */


int myFlexLexer::NestedLevel()

{    /* NestedLevel --- Return TRUE if in func_def or control structure */

        return(InFunctionDefinition || Compiling);

}    /* NestedLevel */

