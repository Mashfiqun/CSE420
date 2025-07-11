/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "22141027.y"


#include"symbol_info.h"

#define YYSTYPE symbol_info*

int yyparse(void);
int yylex(void);

extern FILE *yyin;

void yyerror(char *){};
ofstream outlog;

int lines = 1;

// declare any other variables or functions needed here


#line 91 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IF = 258,                      /* IF  */
    WHILE = 259,                   /* WHILE  */
    FOR = 260,                     /* FOR  */
    ELSE = 261,                    /* ELSE  */
    BREAK = 262,                   /* BREAK  */
    DO = 263,                      /* DO  */
    INT = 264,                     /* INT  */
    FLOAT = 265,                   /* FLOAT  */
    VOID = 266,                    /* VOID  */
    SWITCH = 267,                  /* SWITCH  */
    DEFAULT = 268,                 /* DEFAULT  */
    GOTO = 269,                    /* GOTO  */
    CHAR = 270,                    /* CHAR  */
    DOUBLE = 271,                  /* DOUBLE  */
    RETURN = 272,                  /* RETURN  */
    CASE = 273,                    /* CASE  */
    CONTINUE = 274,                /* CONTINUE  */
    PRINTF = 275,                  /* PRINTF  */
    CONST_INT = 276,               /* CONST_INT  */
    CONST_FLOAT = 277,             /* CONST_FLOAT  */
    ID = 278,                      /* ID  */
    ADDOP = 279,                   /* ADDOP  */
    MULOP = 280,                   /* MULOP  */
    INCOP = 281,                   /* INCOP  */
    RELOP = 282,                   /* RELOP  */
    ASSIGNOP = 283,                /* ASSIGNOP  */
    LOGICOP = 284,                 /* LOGICOP  */
    NOT = 285,                     /* NOT  */
    LPAREN = 286,                  /* LPAREN  */
    RPAREN = 287,                  /* RPAREN  */
    LCURL = 288,                   /* LCURL  */
    RCURL = 289,                   /* RCURL  */
    LTHIRD = 290,                  /* LTHIRD  */
    RTHIRD = 291,                  /* RTHIRD  */
    SEMICOLON = 292,               /* SEMICOLON  */
    COLON = 293,                   /* COLON  */
    COMMA = 294                    /* COMMA  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IF 258
#define WHILE 259
#define FOR 260
#define ELSE 261
#define BREAK 262
#define DO 263
#define INT 264
#define FLOAT 265
#define VOID 266
#define SWITCH 267
#define DEFAULT 268
#define GOTO 269
#define CHAR 270
#define DOUBLE 271
#define RETURN 272
#define CASE 273
#define CONTINUE 274
#define PRINTF 275
#define CONST_INT 276
#define CONST_FLOAT 277
#define ID 278
#define ADDOP 279
#define MULOP 280
#define INCOP 281
#define RELOP 282
#define ASSIGNOP 283
#define LOGICOP 284
#define NOT 285
#define LPAREN 286
#define RPAREN 287
#define LCURL 288
#define RCURL 289
#define LTHIRD 290
#define RTHIRD 291
#define SEMICOLON 292
#define COLON 293
#define COMMA 294

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IF = 3,                         /* IF  */
  YYSYMBOL_WHILE = 4,                      /* WHILE  */
  YYSYMBOL_FOR = 5,                        /* FOR  */
  YYSYMBOL_ELSE = 6,                       /* ELSE  */
  YYSYMBOL_BREAK = 7,                      /* BREAK  */
  YYSYMBOL_DO = 8,                         /* DO  */
  YYSYMBOL_INT = 9,                        /* INT  */
  YYSYMBOL_FLOAT = 10,                     /* FLOAT  */
  YYSYMBOL_VOID = 11,                      /* VOID  */
  YYSYMBOL_SWITCH = 12,                    /* SWITCH  */
  YYSYMBOL_DEFAULT = 13,                   /* DEFAULT  */
  YYSYMBOL_GOTO = 14,                      /* GOTO  */
  YYSYMBOL_CHAR = 15,                      /* CHAR  */
  YYSYMBOL_DOUBLE = 16,                    /* DOUBLE  */
  YYSYMBOL_RETURN = 17,                    /* RETURN  */
  YYSYMBOL_CASE = 18,                      /* CASE  */
  YYSYMBOL_CONTINUE = 19,                  /* CONTINUE  */
  YYSYMBOL_PRINTF = 20,                    /* PRINTF  */
  YYSYMBOL_CONST_INT = 21,                 /* CONST_INT  */
  YYSYMBOL_CONST_FLOAT = 22,               /* CONST_FLOAT  */
  YYSYMBOL_ID = 23,                        /* ID  */
  YYSYMBOL_ADDOP = 24,                     /* ADDOP  */
  YYSYMBOL_MULOP = 25,                     /* MULOP  */
  YYSYMBOL_INCOP = 26,                     /* INCOP  */
  YYSYMBOL_RELOP = 27,                     /* RELOP  */
  YYSYMBOL_ASSIGNOP = 28,                  /* ASSIGNOP  */
  YYSYMBOL_LOGICOP = 29,                   /* LOGICOP  */
  YYSYMBOL_NOT = 30,                       /* NOT  */
  YYSYMBOL_LPAREN = 31,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 32,                    /* RPAREN  */
  YYSYMBOL_LCURL = 33,                     /* LCURL  */
  YYSYMBOL_RCURL = 34,                     /* RCURL  */
  YYSYMBOL_LTHIRD = 35,                    /* LTHIRD  */
  YYSYMBOL_RTHIRD = 36,                    /* RTHIRD  */
  YYSYMBOL_SEMICOLON = 37,                 /* SEMICOLON  */
  YYSYMBOL_COLON = 38,                     /* COLON  */
  YYSYMBOL_COMMA = 39,                     /* COMMA  */
  YYSYMBOL_YYACCEPT = 40,                  /* $accept  */
  YYSYMBOL_start = 41,                     /* start  */
  YYSYMBOL_program = 42,                   /* program  */
  YYSYMBOL_unit = 43,                      /* unit  */
  YYSYMBOL_func_definition = 44,           /* func_definition  */
  YYSYMBOL_parameter_list = 45,            /* parameter_list  */
  YYSYMBOL_compound_statement = 46,        /* compound_statement  */
  YYSYMBOL_var_declaration = 47,           /* var_declaration  */
  YYSYMBOL_type_specifier = 48,            /* type_specifier  */
  YYSYMBOL_declaration_list = 49,          /* declaration_list  */
  YYSYMBOL_statements = 50,                /* statements  */
  YYSYMBOL_statement = 51,                 /* statement  */
  YYSYMBOL_expression_statement = 52,      /* expression_statement  */
  YYSYMBOL_variable = 53,                  /* variable  */
  YYSYMBOL_expression = 54,                /* expression  */
  YYSYMBOL_logic_expression = 55,          /* logic_expression  */
  YYSYMBOL_rel_expression = 56,            /* rel_expression  */
  YYSYMBOL_simple_expression = 57,         /* simple_expression  */
  YYSYMBOL_term = 58,                      /* term  */
  YYSYMBOL_unary_expression = 59,          /* unary_expression  */
  YYSYMBOL_factor = 60,                    /* factor  */
  YYSYMBOL_argument_list = 61,             /* argument_list  */
  YYSYMBOL_arguments = 62                  /* arguments  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   159

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  59
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  114

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   294


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    27,    27,    32,    36,    42,    46,    52,    56,    62,
      67,    71,    75,    81,    85,    91,    97,   101,   105,   111,
     115,   119,   123,   129,   133,   139,   143,   147,   151,   155,
     159,   163,   167,   171,   177,   181,   187,   191,   197,   201,
     207,   211,   217,   221,   227,   231,   237,   241,   247,   251,
     255,   261,   265,   269,   273,   277,   281,   287,   293,   297
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IF", "WHILE", "FOR",
  "ELSE", "BREAK", "DO", "INT", "FLOAT", "VOID", "SWITCH", "DEFAULT",
  "GOTO", "CHAR", "DOUBLE", "RETURN", "CASE", "CONTINUE", "PRINTF",
  "CONST_INT", "CONST_FLOAT", "ID", "ADDOP", "MULOP", "INCOP", "RELOP",
  "ASSIGNOP", "LOGICOP", "NOT", "LPAREN", "RPAREN", "LCURL", "RCURL",
  "LTHIRD", "RTHIRD", "SEMICOLON", "COLON", "COMMA", "$accept", "start",
  "program", "unit", "func_definition", "parameter_list",
  "compound_statement", "var_declaration", "type_specifier",
  "declaration_list", "statements", "statement", "expression_statement",
  "variable", "expression", "logic_expression", "rel_expression",
  "simple_expression", "term", "unary_expression", "factor",
  "argument_list", "arguments", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-57)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      49,   -57,   -57,   -57,    26,    49,   -57,   -57,   -57,     8,
     -57,   -57,     1,   -18,     3,    17,   -57,    23,    19,   -17,
      41,    -2,    14,    52,   -57,    19,    49,   -57,   -57,    50,
      39,    46,    53,    92,    62,   -57,   -57,    16,    92,    92,
      92,   -57,   -57,   -57,   -57,    72,    87,   -57,   -57,    13,
      63,   -57,    70,   -22,    76,   -57,   -57,   -57,    79,    67,
      92,    92,    57,    68,    83,    92,    92,    86,   -57,   -57,
      96,    84,   -57,   -57,   -57,    92,   -57,    92,    92,    92,
      92,   -57,   -57,    97,    98,    57,   -57,   102,   -57,   103,
      99,   100,   -57,   -57,   -57,    76,   113,   -57,   122,   122,
      92,   104,   -57,    92,   -57,   134,   -57,   115,   -57,   -57,
     122,   122,   -57,   -57
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    16,    17,    18,     0,     2,     4,     6,     5,     0,
       1,     3,    21,     0,     0,     0,    15,     0,     0,     0,
      12,     0,    19,     0,     8,     0,     0,    11,    22,     0,
       0,     0,     0,     0,     0,    54,    55,    36,     0,     0,
       0,    14,    34,    27,    25,     0,     0,    23,    26,    51,
       0,    38,    40,    42,    44,    46,    50,     7,    10,     0,
       0,     0,     0,     0,     0,     0,     0,    51,    48,    49,
       0,    21,    13,    24,    56,     0,    35,     0,     0,     0,
       0,     9,    20,     0,     0,     0,    33,     0,    59,     0,
      57,     0,    53,    39,    41,    45,    43,    47,     0,     0,
       0,     0,    52,     0,    37,    29,    31,     0,    32,    58,
       0,     0,    30,    28
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -57,   -57,   -57,   143,   -57,   -57,    -1,    18,    11,   -57,
     -57,   -45,   -56,   -35,   -33,   -55,    73,    75,    71,   -30,
     -57,   -57,   -57
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     4,     5,     6,     7,    19,    43,    44,    45,    13,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    89,    90
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      63,    73,    78,    67,    67,    79,    85,    70,    68,    69,
      88,     9,     1,     2,     3,    25,     9,    24,     8,    16,
      93,    17,    26,     8,    57,    20,    10,    83,    84,   100,
      67,    12,    14,    91,    28,    18,    15,    58,    21,    74,
      67,    75,    67,    67,    67,    67,    22,    65,   109,    29,
      97,    66,    23,   105,   106,    30,    31,    32,     1,     2,
       3,     1,     2,     3,    27,   112,   113,   107,    67,    33,
      60,    59,    34,    35,    36,    37,    38,    61,    35,    36,
      37,    38,    39,    40,    62,    23,    41,    39,    40,    42,
      30,    31,    32,    64,    42,    71,     1,     2,     3,    77,
      76,    80,    81,    82,    33,    86,    87,    34,    35,    36,
      37,    38,    74,    35,    36,    37,    38,    39,    40,    15,
      23,    72,    39,    40,    42,    30,    31,    32,    92,    98,
      99,     1,     2,     3,   101,   102,   104,    78,   103,    33,
     110,   108,    34,    35,    36,    37,    38,   111,    11,    95,
      94,     0,    39,    40,    96,    23,     0,     0,     0,    42
};

static const yytype_int8 yycheck[] =
{
      33,    46,    24,    38,    39,    27,    62,    40,    38,    39,
      65,     0,     9,    10,    11,    32,     5,    18,     0,    37,
      75,    39,    39,     5,    25,    14,     0,    60,    61,    85,
      65,    23,    31,    66,    36,    32,    35,    26,    21,    26,
      75,    28,    77,    78,    79,    80,    23,    31,   103,    35,
      80,    35,    33,    98,    99,     3,     4,     5,     9,    10,
      11,     9,    10,    11,    23,   110,   111,   100,   103,    17,
      31,    21,    20,    21,    22,    23,    24,    31,    21,    22,
      23,    24,    30,    31,    31,    33,    34,    30,    31,    37,
       3,     4,     5,    31,    37,    23,     9,    10,    11,    29,
      37,    25,    23,    36,    17,    37,    23,    20,    21,    22,
      23,    24,    26,    21,    22,    23,    24,    30,    31,    35,
      33,    34,    30,    31,    37,     3,     4,     5,    32,    32,
      32,     9,    10,    11,    32,    32,    36,    24,    39,    17,
       6,    37,    20,    21,    22,    23,    24,    32,     5,    78,
      77,    -1,    30,    31,    79,    33,    -1,    -1,    -1,    37
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     9,    10,    11,    41,    42,    43,    44,    47,    48,
       0,    43,    23,    49,    31,    35,    37,    39,    32,    45,
      48,    21,    23,    33,    46,    32,    39,    23,    36,    35,
       3,     4,     5,    17,    20,    21,    22,    23,    24,    30,
      31,    34,    37,    46,    47,    48,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    46,    48,    21,
      31,    31,    31,    54,    31,    31,    35,    53,    59,    59,
      54,    23,    34,    51,    26,    28,    37,    29,    24,    27,
      25,    23,    36,    54,    54,    52,    37,    23,    55,    61,
      62,    54,    32,    55,    56,    58,    57,    59,    32,    32,
      52,    32,    32,    39,    36,    51,    51,    54,    37,    55,
       6,    32,    51,    51
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    40,    41,    42,    42,    43,    43,    44,    44,    45,
      45,    45,    45,    46,    46,    47,    48,    48,    48,    49,
      49,    49,    49,    50,    50,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    52,    52,    53,    53,    54,    54,
      55,    55,    56,    56,    57,    57,    58,    58,    59,    59,
      59,    60,    60,    60,    60,    60,    60,    61,    62,    62
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     6,     5,     4,
       3,     2,     1,     3,     2,     3,     1,     1,     1,     3,
       6,     1,     4,     1,     2,     1,     1,     1,     7,     5,
       7,     5,     5,     3,     1,     2,     1,     4,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     2,     2,
       1,     1,     4,     3,     1,     1,     2,     1,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* start: program  */
#line 27 "22141027.y"
               {
		outlog<<"At line no: "<<lines<<" start : program"<<endl<<endl;
		yyval = new symbol_info(yyvsp[0]->getname(), "start");
	}
#line 1343 "y.tab.c"
    break;

  case 3: /* program: program unit  */
#line 32 "22141027.y"
                      {
		outlog<<"At line no: "<<lines<<" program : program unit "<<endl<<endl;
		outlog<<yyvsp[-1]->getname()+"\n"+yyvsp[0]->getname()<<endl<<endl;
		yyval = new symbol_info(yyvsp[-1]->getname()+"\n"+yyvsp[0]->getname(),"program");
	}
#line 1353 "y.tab.c"
    break;

  case 4: /* program: unit  */
#line 36 "22141027.y"
                 {
		outlog<<"At line no: "<<lines<<" program : unit "<<endl<<endl;
		outlog<<yyvsp[0]->getname()<<endl<<endl;
		yyval = new symbol_info(yyvsp[0]->getname(),"program");
	}
#line 1363 "y.tab.c"
    break;

  case 5: /* unit: var_declaration  */
#line 42 "22141027.y"
                       {
		outlog<<"At line no: "<<lines<<" unit : var_declaration "<<endl<<endl;
	    outlog<<yyvsp[0]->getname()<<endl<<endl;
	    yyval = new symbol_info(yyvsp[0]->getname(),"unit");
	}
#line 1373 "y.tab.c"
    break;

  case 6: /* unit: func_definition  */
#line 46 "22141027.y"
                            {
		outlog<<"At line no: "<<lines<<" unit : func_definition "<<endl<<endl;
		outlog<<yyvsp[0]->getname()<<endl<<endl;
		yyval = new symbol_info(yyvsp[0]->getname(),"unit");
	}
#line 1383 "y.tab.c"
    break;

  case 7: /* func_definition: type_specifier ID LPAREN parameter_list RPAREN compound_statement  */
#line 52 "22141027.y"
                                                                                    {	
		outlog<<"At line no: "<<lines<<" func_definition : type_specifier ID LPAREN parameter_list RPAREN compound_statement "<<endl<<endl;
		outlog<<yyvsp[-5]->getname()<<" "<<yyvsp[-4]->getname()<<"("<<yyvsp[-2]->getname()<<")\n"<<yyvsp[0]->getname()<<endl<<endl;
		yyval = new symbol_info(yyvsp[-5]->getname()+" "+yyvsp[-4]->getname()+"("+yyvsp[-2]->getname()+")\n"+yyvsp[0]->getname(),"func_definition");
	}
#line 1393 "y.tab.c"
    break;

  case 8: /* func_definition: type_specifier ID LPAREN RPAREN compound_statement  */
#line 56 "22141027.y"
                                                               {
		outlog<<"At line no: "<<lines<<" func_definition : type_specifier ID LPAREN RPAREN compound_statement "<<endl<<endl;
		outlog<<yyvsp[-4]->getname()<<" "<<yyvsp[-3]->getname()<<"()\n"<<yyvsp[0]->getname()<<endl<<endl;
		yyval = new symbol_info(yyvsp[-4]->getname()+" "+yyvsp[-3]->getname()+"()\n"+yyvsp[0]->getname(),"func_definition");	
	}
#line 1403 "y.tab.c"
    break;

  case 9: /* parameter_list: parameter_list COMMA type_specifier ID  */
#line 63 "22141027.y"
        {
		outlog<<"At line no: "<<lines<<" parameter_list : parameter_list COMMA type_specifier ID "<<endl<<endl;
		outlog<<yyvsp[-3]->getname()<<","<<yyvsp[-1]->getname()<<" "<<yyvsp[0]->getname()<<endl<<endl;
		yyval = new symbol_info(yyvsp[-3]->getname()+","+yyvsp[-1]->getname()+" "+yyvsp[0]->getname(),"parameter_list");
	}
#line 1413 "y.tab.c"
    break;

  case 10: /* parameter_list: parameter_list COMMA type_specifier  */
#line 67 "22141027.y"
                                                {
		outlog<<"At line no: "<<lines<<" parameter_list : parameter_list COMMA type_specifier "<<endl<<endl;
		outlog<<yyvsp[-2]->getname()<<", "<<yyvsp[0]->getname()<<endl<<endl;
		yyval = new symbol_info(yyvsp[-2]->getname()+", "+yyvsp[0]->getname(),"parameter_list");
	}
#line 1423 "y.tab.c"
    break;

  case 11: /* parameter_list: type_specifier ID  */
#line 71 "22141027.y"
                              {
		outlog<<"At line no: "<<lines<<" parameter_list : type_specifier ID "<<endl<<endl;
		outlog<<yyvsp[-1]->getname()<<" "<<yyvsp[0]->getname()<<endl<<endl;
		yyval = new symbol_info(yyvsp[-1]->getname()+" "+yyvsp[0]->getname(),"parameter_list");
	}
#line 1433 "y.tab.c"
    break;

  case 12: /* parameter_list: type_specifier  */
#line 75 "22141027.y"
                           {
		outlog<<"At line no: "<<lines<<" parameter_list : type_specifier "<<endl<<endl;
		outlog<<yyvsp[0]->getname()<<endl<<endl;
		yyval = new symbol_info(yyvsp[0]->getname(),"parameter_list");
	}
#line 1443 "y.tab.c"
    break;

  case 13: /* compound_statement: LCURL statements RCURL  */
#line 81 "22141027.y"
                                            {
		outlog<<"At line no: "<<lines<<" compound_statement : LCURL statements RCURL "<<endl<<endl;
		outlog<<"{\n"<<yyvsp[-1]->getname()<<"\n}"<<endl<<endl;
		yyval = new symbol_info("{\n"+yyvsp[-1]->getname()+"\n}","compound_statement");
	}
#line 1453 "y.tab.c"
    break;

  case 14: /* compound_statement: LCURL RCURL  */
#line 85 "22141027.y"
                        {
		outlog<<"At line no: "<<lines<<" compound_statement : LCURL RCURL "<<endl<<endl;
		outlog<<"{\n}"<<endl<<endl;
		yyval = new symbol_info("{\n}","compound_statement");
	}
#line 1463 "y.tab.c"
    break;

  case 15: /* var_declaration: type_specifier declaration_list SEMICOLON  */
#line 91 "22141027.y"
                                                            {
		outlog<<"At line no: "<<lines<<" var_declaration : type_specifier declaration_list SEMICOLON "<<endl<<endl;
		outlog<<yyvsp[-2]->getname()<<" "<<yyvsp[-1]->getname()<<";"<<endl<<endl;
		yyval = new symbol_info(yyvsp[-2]->getname()+" "+yyvsp[-1]->getname()+";","var_declaration");
	}
#line 1473 "y.tab.c"
    break;

  case 16: /* type_specifier: INT  */
#line 97 "22141027.y"
                     {
		outlog<<"At line no: "<<lines<<" type_specifier : INT "<<endl<<endl;
		outlog<<"int"<<endl<<endl;
		yyval = new symbol_info("int","type_specifier");
	}
#line 1483 "y.tab.c"
    break;

  case 17: /* type_specifier: FLOAT  */
#line 101 "22141027.y"
                  {
		outlog<<"At line no: "<<lines<<" type_specifier : FLOAT "<<endl<<endl;
		outlog<<"float"<<endl<<endl;
		yyval = new symbol_info("float","type_specifier");
	}
#line 1493 "y.tab.c"
    break;

  case 18: /* type_specifier: VOID  */
#line 105 "22141027.y"
                 {
		outlog<<"At line no: "<<lines<<" type_specifier : VOID "<<endl<<endl;
		outlog<<"void"<<endl<<endl;
		yyval = new symbol_info("void","type_specifier");
	}
#line 1503 "y.tab.c"
    break;

  case 19: /* declaration_list: declaration_list COMMA ID  */
#line 111 "22141027.y"
                                             {
		outlog<<"At line no: "<<lines<<" declaration_list : declaration_list COMMA ID "<<endl<<endl;
		outlog<<yyvsp[-2]->getname()<<","<<yyvsp[0]->getname()<<endl<<endl;
		yyval = new symbol_info(yyvsp[-2]->getname()+","+yyvsp[0]->getname(),"declaration_list");
	}
#line 1513 "y.tab.c"
    break;

  case 20: /* declaration_list: declaration_list COMMA ID LTHIRD CONST_INT RTHIRD  */
#line 115 "22141027.y"
                                                              {
		outlog<<"At line no: "<<lines<<" declaration_list : declaration_list COMMA ID LTHIRD CONST_INT RTHIRD "<<endl<<endl;
		outlog<<yyvsp[-5]->getname()<<","<<yyvsp[-3]->getname()<<"["<<yyvsp[-1]->getname()<<"]"<<endl<<endl;
		yyval = new symbol_info(yyvsp[-5]->getname()+","+yyvsp[-3]->getname()+"["+yyvsp[-1]->getname()+"]","declaration_list");
	}
#line 1523 "y.tab.c"
    break;

  case 21: /* declaration_list: ID  */
#line 119 "22141027.y"
               {
		outlog<<"At line no: "<<lines<<" declaration_list : ID "<<endl<<endl;
		outlog<<yyvsp[0]->getname()<<endl<<endl;
		yyval = new symbol_info(yyvsp[0]->getname(),"declaration_list");
	}
#line 1533 "y.tab.c"
    break;

  case 22: /* declaration_list: ID LTHIRD CONST_INT RTHIRD  */
#line 123 "22141027.y"
                                       {
		outlog<<"At line no: "<<lines<<" declaration_list : ID LTHIRD CONST_INT RTHIRD "<<endl<<endl;
		outlog<<yyvsp[-3]->getname()<<"["<<yyvsp[-1]->getname()<<"]"<<endl<<endl;
		yyval = new symbol_info(yyvsp[-3]->getname()+"["+yyvsp[-1]->getname()+"]","declaration_list");
	}
#line 1543 "y.tab.c"
    break;

  case 23: /* statements: statement  */
#line 129 "22141027.y"
                       {
		outlog<<"At line no: "<<lines<<" statements : statement "<<endl<<endl;
		outlog<<yyvsp[0]->getname()<<endl<<endl;
		yyval = new symbol_info(yyvsp[0]->getname(),"statements");
	}
#line 1553 "y.tab.c"
    break;

  case 24: /* statements: statements statement  */
#line 133 "22141027.y"
                                 {
		outlog<<"At line no: "<<lines<<" statements : statements statement "<<endl<<endl;
		outlog<<yyvsp[-1]->getname()<<"\n"<<yyvsp[0]->getname()<<endl<<endl;
		yyval = new symbol_info(yyvsp[-1]->getname()+"\n"+yyvsp[0]->getname(),"statements");
	}
#line 1563 "y.tab.c"
    break;

  case 25: /* statement: var_declaration  */
#line 139 "22141027.y"
                            {
		outlog<<"At line no: "<<lines<<" statement : var_declaration "<<endl<<endl;
		outlog<<yyvsp[0]->getname()<<endl<<endl;
		yyval = new symbol_info(yyvsp[0]->getname(),"statement");
	}
#line 1573 "y.tab.c"
    break;

  case 26: /* statement: expression_statement  */
#line 143 "22141027.y"
                                 {
		outlog<<"At line no: "<<lines<<" statement : expression_statement "<<endl<<endl;
		outlog<<yyvsp[0]->getname()<<endl<<endl;
		yyval = new symbol_info(yyvsp[0]->getname(),"statement");
    }
#line 1583 "y.tab.c"
    break;

  case 27: /* statement: compound_statement  */
#line 147 "22141027.y"
                           {
		outlog<<"At line no: "<<lines<<" statement : compound_statement "<<endl<<endl;
		outlog<<yyvsp[0]->getname()<<endl<<endl;
		yyval = new symbol_info(yyvsp[0]->getname(),"statement");
	}
#line 1593 "y.tab.c"
    break;

  case 28: /* statement: FOR LPAREN expression_statement expression_statement expression RPAREN statement  */
#line 151 "22141027.y"
                                                                                             {
		outlog<<"At line no: "<<lines<<" statement : FOR LPAREN expression_statement expression_statement expression RPAREN statement "<<endl<<endl;
		outlog<<"for("<<yyvsp[-4]->getname()<<yyvsp[-3]->getname()<<yyvsp[-2]->getname()<<")\n"<<yyvsp[0]->getname()<<endl<<endl;
		yyval = new symbol_info("for("+yyvsp[-4]->getname()+yyvsp[-3]->getname()+yyvsp[-2]->getname()+")\n"+yyvsp[0]->getname(),"statement");
    }
#line 1603 "y.tab.c"
    break;

  case 29: /* statement: IF LPAREN expression RPAREN statement  */
#line 155 "22141027.y"
                                                                  {
		outlog<<"At line no: "<<lines<<" statement : IF LPAREN expression RPAREN statement "<<endl<<endl;
		outlog<<"if("<<yyvsp[-2]->getname()<<")\n"<<yyvsp[0]->getname()<<endl<<endl;	
		yyval = new symbol_info("if("+yyvsp[-2]->getname()+")\n"+yyvsp[0]->getname(),"statement");
    }
#line 1613 "y.tab.c"
    break;

  case 30: /* statement: IF LPAREN expression RPAREN statement ELSE statement  */
#line 159 "22141027.y"
                                                                                   {
		outlog<<"At line no: "<<lines<<" statement : IF LPAREN expression RPAREN statement ELSE statement "<<endl<<endl;
		outlog<<"if("<<yyvsp[-4]->getname()<<")\n"<<yyvsp[-2]->getname()<<"\n"<<"else\n"<<yyvsp[0]->getname()<<endl<<endl;
		yyval = new symbol_info("if("+yyvsp[-4]->getname()+")\n"+yyvsp[-2]->getname()+"\nelse\n"+yyvsp[0]->getname(),"statement");
    }
#line 1623 "y.tab.c"
    break;

  case 31: /* statement: WHILE LPAREN expression RPAREN statement  */
#line 163 "22141027.y"
                                                 {
		outlog<<"At line no: "<<lines<<" statement : WHILE LPAREN expression RPAREN statement "<<endl<<endl;
		outlog<<"while("<<yyvsp[-2]->getname()<<")\n"<<yyvsp[0]->getname()<<endl<<endl;
		yyval = new symbol_info("while("+yyvsp[-2]->getname()+")\n"+yyvsp[0]->getname(),"statement");
    }
#line 1633 "y.tab.c"
    break;

  case 32: /* statement: PRINTF LPAREN ID RPAREN SEMICOLON  */
#line 167 "22141027.y"
                                          {
		outlog<<"At line no: "<<lines<<" statement : PRINTF LPAREN ID RPAREN SEMICOLON "<<endl<<endl;
		outlog<<"printf("<<yyvsp[-2]->getname()<<");"<<endl<<endl;
		yyval = new symbol_info("printf("+yyvsp[-2]->getname()+");","statement");
    }
#line 1643 "y.tab.c"
    break;

  case 33: /* statement: RETURN expression SEMICOLON  */
#line 171 "22141027.y"
                                    {
		outlog<<"At line no: "<<lines<<" statement : RETURN expression SEMICOLON "<<endl<<endl;
		outlog<<"return "<<yyvsp[-1]->getname()<<";"<<endl<<endl;
		yyval = new symbol_info("return "+yyvsp[-1]->getname()+";","statement");
	}
#line 1653 "y.tab.c"
    break;

  case 34: /* expression_statement: SEMICOLON  */
#line 177 "22141027.y"
                                 {
		outlog<<"At line no: "<<lines<<" expression_statement : SEMICOLON "<<endl<<endl;
		outlog<<";"<<endl<<endl;
		yyval = new symbol_info(";","expression_statement");
    }
#line 1663 "y.tab.c"
    break;

  case 35: /* expression_statement: expression SEMICOLON  */
#line 181 "22141027.y"
                             {
		outlog<<"At line no: "<<lines<<" expression_statement : expression SEMICOLON "<<endl<<endl;
		outlog<<yyvsp[-1]->getname()<<";"<<endl<<endl;	
		yyval = new symbol_info(yyvsp[-1]->getname()+";","expression_statement");
	}
#line 1673 "y.tab.c"
    break;

  case 36: /* variable: ID  */
#line 187 "22141027.y"
              {
		outlog<<"At line no: "<<lines<<" variable : ID "<<endl<<endl;
		outlog<<yyvsp[0]->getname()<<endl<<endl;
		yyval = new symbol_info(yyvsp[0]->getname(),"variable");
    }
#line 1683 "y.tab.c"
    break;

  case 37: /* variable: ID LTHIRD expression RTHIRD  */
#line 191 "22141027.y"
                                    {
		outlog<<"At line no: "<<lines<<" variable : ID LTHIRD expression RTHIRD "<<endl<<endl;
		outlog<<yyvsp[-3]->getname()<<"["<<yyvsp[-1]->getname()<<"]"<<endl<<endl;	
		yyval = new symbol_info(yyvsp[-3]->getname()+"["+yyvsp[-1]->getname()+"]","variable");
	}
#line 1693 "y.tab.c"
    break;

  case 38: /* expression: logic_expression  */
#line 197 "22141027.y"
                              {
		outlog<<"At line no: "<<lines<<" expression : logic_expression "<<endl<<endl;
		outlog<<yyvsp[0]->getname()<<endl<<endl;
		yyval = new symbol_info(yyvsp[0]->getname(),"expression");
    }
#line 1703 "y.tab.c"
    break;

  case 39: /* expression: variable ASSIGNOP logic_expression  */
#line 201 "22141027.y"
                                           {
		outlog<<"At line no: "<<lines<<" expression : variable ASSIGNOP logic_expression "<<endl<<endl;
		outlog<<yyvsp[-2]->getname()<<"="<<yyvsp[0]->getname()<<endl<<endl;	
		yyval = new symbol_info(yyvsp[-2]->getname()+"="+yyvsp[0]->getname(),"expression");
	}
#line 1713 "y.tab.c"
    break;

  case 40: /* logic_expression: rel_expression  */
#line 207 "22141027.y"
                                  {
		outlog<<"At line no: "<<lines<<" logic_expression : rel_expression "<<endl<<endl;
		outlog<<yyvsp[0]->getname()<<endl<<endl;
		yyval = new symbol_info(yyvsp[0]->getname(),"logic_expression");
	}
#line 1723 "y.tab.c"
    break;

  case 41: /* logic_expression: rel_expression LOGICOP rel_expression  */
#line 211 "22141027.y"
                                                  {
		outlog<<"At line no: "<<lines<<" logic_expression : rel_expression LOGICOP rel_expression "<<endl<<endl;
		outlog<<yyvsp[-2]->getname()<<yyvsp[-1]->getname()<<yyvsp[0]->getname()<<endl<<endl;		
		yyval = new symbol_info(yyvsp[-2]->getname()+yyvsp[-1]->getname()+yyvsp[0]->getname(),"logic_expression");
	}
#line 1733 "y.tab.c"
    break;

  case 42: /* rel_expression: simple_expression  */
#line 217 "22141027.y"
                                   {
		outlog<<"At line no: "<<lines<<" rel_expression : simple_expression "<<endl<<endl;
		outlog<<yyvsp[0]->getname()<<endl<<endl;
		yyval = new symbol_info(yyvsp[0]->getname(),"rel_expression");
    }
#line 1743 "y.tab.c"
    break;

  case 43: /* rel_expression: simple_expression RELOP simple_expression  */
#line 221 "22141027.y"
                                                  {
		outlog<<"At line no: "<<lines<<" rel_expression : simple_expression RELOP simple_expression "<<endl<<endl;
		outlog<<yyvsp[-2]->getname()<<yyvsp[-1]->getname()<<yyvsp[0]->getname()<<endl<<endl;
		yyval = new symbol_info(yyvsp[-2]->getname()+yyvsp[-1]->getname()+yyvsp[0]->getname(),"rel_expression");
	}
#line 1753 "y.tab.c"
    break;

  case 44: /* simple_expression: term  */
#line 227 "22141027.y"
                         {
		outlog<<"At line no: "<<lines<<" simple_expression : term "<<endl<<endl;
		outlog<<yyvsp[0]->getname()<<endl<<endl;
		yyval = new symbol_info(yyvsp[0]->getname(),"simple_expression");
    }
#line 1763 "y.tab.c"
    break;

  case 45: /* simple_expression: simple_expression ADDOP term  */
#line 231 "22141027.y"
                                     {
		outlog<<"At line no: "<<lines<<" simple_expression : simple_expression ADDOP term "<<endl<<endl;
		outlog<<yyvsp[-2]->getname()<<yyvsp[-1]->getname()<<yyvsp[0]->getname()<<endl<<endl;	
		yyval = new symbol_info(yyvsp[-2]->getname()+yyvsp[-1]->getname()+yyvsp[0]->getname(),"simple_expression");
	}
#line 1773 "y.tab.c"
    break;

  case 46: /* term: unary_expression  */
#line 237 "22141027.y"
                        {
		outlog<<"At line no: "<<lines<<" term : unary_expression "<<endl<<endl;
		outlog<<yyvsp[0]->getname()<<endl<<endl;
		yyval = new symbol_info(yyvsp[0]->getname(),"term");
    }
#line 1783 "y.tab.c"
    break;

  case 47: /* term: term MULOP unary_expression  */
#line 241 "22141027.y"
                                    {
		outlog<<"At line no: "<<lines<<" term : term MULOP unary_expression "<<endl<<endl;
		outlog<<yyvsp[-2]->getname()<<yyvsp[-1]->getname()<<yyvsp[0]->getname()<<endl<<endl;
		yyval = new symbol_info(yyvsp[-2]->getname()+yyvsp[-1]->getname()+yyvsp[0]->getname(),"term");
	}
#line 1793 "y.tab.c"
    break;

  case 48: /* unary_expression: ADDOP unary_expression  */
#line 247 "22141027.y"
                                          {
		outlog<<"At line no: "<<lines<<" unary_expression : ADDOP unary_expression "<<endl<<endl;
		outlog<<yyvsp[-1]->getname()<<yyvsp[0]->getname()<<endl<<endl;
		yyval = new symbol_info(yyvsp[-1]->getname()+yyvsp[0]->getname(),"unary_expression");
    }
#line 1803 "y.tab.c"
    break;

  case 49: /* unary_expression: NOT unary_expression  */
#line 251 "22141027.y"
                             {
		outlog<<"At line no: "<<lines<<" unary_expression : NOT unary_expression "<<endl<<endl;
		outlog<<"!"<<yyvsp[0]->getname()<<endl<<endl;	
		yyval = new symbol_info("!"+yyvsp[0]->getname(),"unary_expression");
    }
#line 1813 "y.tab.c"
    break;

  case 50: /* unary_expression: factor  */
#line 255 "22141027.y"
               {
		outlog<<"At line no: "<<lines<<" unary_expression : factor "<<endl<<endl;
		outlog<<yyvsp[0]->getname()<<endl<<endl;
		yyval = new symbol_info(yyvsp[0]->getname(),"unary_expression");
	}
#line 1823 "y.tab.c"
    break;

  case 51: /* factor: variable  */
#line 261 "22141027.y"
                  {
		outlog<<"At line no: "<<lines<<" factor : variable "<<endl<<endl;
		outlog<<yyvsp[0]->getname()<<endl<<endl;
		yyval = new symbol_info(yyvsp[0]->getname(),"factor");
    }
#line 1833 "y.tab.c"
    break;

  case 52: /* factor: ID LPAREN argument_list RPAREN  */
#line 265 "22141027.y"
                                       {
		outlog<<"At line no: "<<lines<<" factor : ID LPAREN argument_list RPAREN "<<endl<<endl;
		outlog<<yyvsp[-3]->getname()<<"("<<yyvsp[-1]->getname()<<")"<<endl<<endl;
		yyval = new symbol_info(yyvsp[-3]->getname()+"("+yyvsp[-1]->getname()+")","factor");
    }
#line 1843 "y.tab.c"
    break;

  case 53: /* factor: LPAREN expression RPAREN  */
#line 269 "22141027.y"
                                 {
		outlog<<"At line no: "<<lines<<" factor : LPAREN expression RPAREN "<<endl<<endl;
		outlog<<"("<<yyvsp[-1]->getname()<<")"<<endl<<endl;
		yyval = new symbol_info("("+yyvsp[-1]->getname()+")","factor");
    }
#line 1853 "y.tab.c"
    break;

  case 54: /* factor: CONST_INT  */
#line 273 "22141027.y"
                  {
		outlog<<"At line no: "<<lines<<" factor : CONST_INT "<<endl<<endl;
		outlog<<yyvsp[0]->getname()<<endl<<endl;
		yyval = new symbol_info(yyvsp[0]->getname(),"factor");
    }
#line 1863 "y.tab.c"
    break;

  case 55: /* factor: CONST_FLOAT  */
#line 277 "22141027.y"
                    {
		outlog<<"At line no: "<<lines<<" factor : CONST_FLOAT "<<endl<<endl;
		outlog<<yyvsp[0]->getname()<<endl<<endl;
		yyval = new symbol_info(yyvsp[0]->getname(),"factor");
    }
#line 1873 "y.tab.c"
    break;

  case 56: /* factor: variable INCOP  */
#line 281 "22141027.y"
                       {
		outlog<<"At line no: "<<lines<<" factor : variable INCOP "<<endl<<endl;
		outlog<<yyvsp[-1]->getname()<<yyvsp[0]->getname()<<endl<<endl;	
		yyval = new symbol_info(yyvsp[-1]->getname()+yyvsp[0]->getname(),"factor");
    }
#line 1883 "y.tab.c"
    break;

  case 57: /* argument_list: arguments  */
#line 287 "22141027.y"
                          {
		outlog<<"At line no: "<<lines<<" argument_list : arguments "<<endl<<endl;
		outlog<<yyvsp[0]->getname()<<endl<<endl;
		yyval = new symbol_info(yyvsp[0]->getname(),"argument_list");
	}
#line 1893 "y.tab.c"
    break;

  case 58: /* arguments: arguments COMMA logic_expression  */
#line 293 "22141027.y"
                                             {
		outlog<<"At line no: "<<lines<<" arguments : arguments COMMA logic_expression "<<endl<<endl;
		outlog<<yyvsp[-2]->getname()<<","<<yyvsp[0]->getname()<<endl<<endl;
		yyval = new symbol_info(yyvsp[-2]->getname()+","+yyvsp[0]->getname(),"arguments");
    }
#line 1903 "y.tab.c"
    break;

  case 59: /* arguments: logic_expression  */
#line 297 "22141027.y"
                         {
		outlog<<"At line no: "<<lines<<" arguments : logic_expression "<<endl<<endl;
		outlog<<yyvsp[0]->getname()<<endl<<endl;
		yyval = new symbol_info(yyvsp[0]->getname(),"arguments");
	}
#line 1913 "y.tab.c"
    break;


#line 1917 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 302 "22141027.y"


int main(int argc, char *argv[])
{
	if(argc != 2) 
	{
        cout << "No filename given" << endl;
		return 1;
	}
	yyin = fopen(argv[1], "r");
	outlog.open("my_log.txt", ios::trunc);
	
	if(yyin == NULL)
	{
		cout<<"Couldn't open file"<<endl;
		return 0;
	}
    
	yyparse();
	
	outlog << "Total lines: " << lines << endl;
	
	outlog.close();
	
	fclose(yyin);
	
	return 0;
}
