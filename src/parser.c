#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 44
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LF = 1,
  anon_sym_LBRACE = 2,
  anon_sym_COMMA = 3,
  anon_sym_RBRACE = 4,
  anon_sym_COLON = 5,
  anon_sym_LBRACK = 6,
  anon_sym_RBRACK = 7,
  anon_sym_DQUOTE = 8,
  aux_sym_string_content_token1 = 9,
  sym_escape_sequence = 10,
  sym_number = 11,
  sym_true = 12,
  sym_false = 13,
  sym_null = 14,
  sym_document = 15,
  sym__value = 16,
  sym_object = 17,
  sym_pair = 18,
  sym_array = 19,
  sym_string = 20,
  sym_string_content = 21,
  sym_line = 22,
  aux_sym_document_repeat1 = 23,
  aux_sym_document_repeat2 = 24,
  aux_sym_object_repeat1 = 25,
  aux_sym_array_repeat1 = 26,
  aux_sym_string_content_repeat1 = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_content_token1] = "string_content_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_document] = "document",
  [sym__value] = "_value",
  [sym_object] = "object",
  [sym_pair] = "pair",
  [sym_array] = "array",
  [sym_string] = "string",
  [sym_string_content] = "string_content",
  [sym_line] = "line",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_document_repeat2] = "document_repeat2",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_string_content_repeat1] = "string_content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_content_token1] = aux_sym_string_content_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [sym_document] = sym_document,
  [sym__value] = sym__value,
  [sym_object] = sym_object,
  [sym_pair] = sym_pair,
  [sym_array] = sym_array,
  [sym_string] = sym_string,
  [sym_string_content] = sym_string_content,
  [sym_line] = sym_line,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_document_repeat2] = aux_sym_document_repeat2,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_string_content_repeat1] = aux_sym_string_content_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_key = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(1);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '0') ADVANCE(33);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == ']') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(11);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(25);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 1:
      if (lookahead == '0') ADVANCE(34);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 's') ADVANCE(4);
      END_STATE();
    case 10:
      if (lookahead == 'u') ADVANCE(3);
      END_STATE();
    case 11:
      if (lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 12:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 14:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(37);
      END_STATE();
    case 15:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(38);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(1);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '0') ADVANCE(33);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == ']') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(11);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(25);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(14);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(16);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(19);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 12},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(43),
    [sym__value] = STATE(40),
    [sym_object] = STATE(13),
    [sym_array] = STATE(13),
    [sym_string] = STATE(13),
    [sym_line] = STATE(25),
    [aux_sym_document_repeat1] = STATE(6),
    [anon_sym_LF] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [sym_true] = ACTIONS(11),
    [sym_false] = ACTIONS(11),
    [sym_null] = ACTIONS(11),
  },
  [2] = {
    [sym__value] = STATE(40),
    [sym_object] = STATE(13),
    [sym_array] = STATE(13),
    [sym_string] = STATE(13),
    [sym_line] = STATE(36),
    [aux_sym_document_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [sym_true] = ACTIONS(11),
    [sym_false] = ACTIONS(11),
    [sym_null] = ACTIONS(11),
  },
  [3] = {
    [sym__value] = STATE(40),
    [sym_object] = STATE(13),
    [sym_array] = STATE(13),
    [sym_string] = STATE(13),
    [sym_line] = STATE(36),
    [aux_sym_document_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_LF] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [sym_true] = ACTIONS(11),
    [sym_false] = ACTIONS(11),
    [sym_null] = ACTIONS(11),
  },
  [4] = {
    [sym__value] = STATE(40),
    [sym_object] = STATE(13),
    [sym_array] = STATE(13),
    [sym_string] = STATE(13),
    [sym_line] = STATE(36),
    [aux_sym_document_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_LF] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [sym_true] = ACTIONS(11),
    [sym_false] = ACTIONS(11),
    [sym_null] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LF,
    STATE(10), 1,
      aux_sym_document_repeat1,
    STATE(36), 1,
      sym_line,
    STATE(40), 1,
      sym__value,
    STATE(13), 3,
      sym_object,
      sym_array,
      sym_string,
    ACTIONS(11), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [33] = 9,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LF,
    STATE(10), 1,
      aux_sym_document_repeat1,
    STATE(28), 1,
      sym_line,
    STATE(40), 1,
      sym__value,
    STATE(13), 3,
      sym_object,
      sym_array,
      sym_string,
    ACTIONS(11), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [66] = 7,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      sym__value,
    STATE(13), 3,
      sym_object,
      sym_array,
      sym_string,
    ACTIONS(11), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [93] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      sym__value,
    STATE(13), 3,
      sym_object,
      sym_array,
      sym_string,
    ACTIONS(11), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [117] = 6,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    STATE(37), 1,
      sym__value,
    STATE(13), 3,
      sym_object,
      sym_array,
      sym_string,
    ACTIONS(11), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [141] = 3,
    ACTIONS(25), 1,
      anon_sym_LF,
    STATE(10), 1,
      aux_sym_document_repeat1,
    ACTIONS(23), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [158] = 1,
    ACTIONS(28), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [167] = 1,
    ACTIONS(30), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [176] = 1,
    ACTIONS(32), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [184] = 1,
    ACTIONS(34), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [192] = 5,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(36), 1,
      anon_sym_RBRACE,
    ACTIONS(38), 1,
      sym_number,
    STATE(33), 1,
      sym_pair,
    STATE(42), 1,
      sym_string,
  [208] = 1,
    ACTIONS(40), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [216] = 1,
    ACTIONS(42), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [224] = 1,
    ACTIONS(44), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [232] = 1,
    ACTIONS(46), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [240] = 1,
    ACTIONS(48), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [248] = 4,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      aux_sym_string_content_repeat1,
    STATE(41), 1,
      sym_string_content,
    ACTIONS(52), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [262] = 4,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      anon_sym_LF,
    STATE(5), 1,
      aux_sym_document_repeat1,
    STATE(22), 1,
      aux_sym_document_repeat2,
  [275] = 3,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(61), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [286] = 4,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(38), 1,
      sym_number,
    STATE(38), 1,
      sym_pair,
    STATE(42), 1,
      sym_string,
  [299] = 4,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
      anon_sym_LF,
    STATE(4), 1,
      aux_sym_document_repeat1,
    STATE(27), 1,
      aux_sym_document_repeat2,
  [312] = 4,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 1,
      anon_sym_LF,
    STATE(3), 1,
      aux_sym_document_repeat1,
    STATE(22), 1,
      aux_sym_document_repeat2,
  [325] = 4,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 1,
      anon_sym_LF,
    STATE(2), 1,
      aux_sym_document_repeat1,
    STATE(22), 1,
      aux_sym_document_repeat2,
  [338] = 4,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 1,
      anon_sym_LF,
    STATE(2), 1,
      aux_sym_document_repeat1,
    STATE(26), 1,
      aux_sym_document_repeat2,
  [351] = 3,
    ACTIONS(72), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(74), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [362] = 3,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    ACTIONS(78), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      aux_sym_array_repeat1,
  [372] = 3,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    ACTIONS(80), 1,
      anon_sym_RBRACK,
    STATE(35), 1,
      aux_sym_array_repeat1,
  [382] = 3,
    ACTIONS(82), 1,
      anon_sym_COMMA,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      aux_sym_object_repeat1,
  [392] = 3,
    ACTIONS(82), 1,
      anon_sym_COMMA,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      aux_sym_object_repeat1,
  [402] = 3,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      aux_sym_object_repeat1,
  [412] = 3,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    ACTIONS(96), 1,
      anon_sym_RBRACK,
    STATE(35), 1,
      aux_sym_array_repeat1,
  [422] = 1,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [427] = 1,
    ACTIONS(98), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [432] = 1,
    ACTIONS(91), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [437] = 1,
    ACTIONS(96), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [442] = 1,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [447] = 1,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
  [451] = 1,
    ACTIONS(104), 1,
      anon_sym_COLON,
  [455] = 1,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 33,
  [SMALL_STATE(7)] = 66,
  [SMALL_STATE(8)] = 93,
  [SMALL_STATE(9)] = 117,
  [SMALL_STATE(10)] = 141,
  [SMALL_STATE(11)] = 158,
  [SMALL_STATE(12)] = 167,
  [SMALL_STATE(13)] = 176,
  [SMALL_STATE(14)] = 184,
  [SMALL_STATE(15)] = 192,
  [SMALL_STATE(16)] = 208,
  [SMALL_STATE(17)] = 216,
  [SMALL_STATE(18)] = 224,
  [SMALL_STATE(19)] = 232,
  [SMALL_STATE(20)] = 240,
  [SMALL_STATE(21)] = 248,
  [SMALL_STATE(22)] = 262,
  [SMALL_STATE(23)] = 275,
  [SMALL_STATE(24)] = 286,
  [SMALL_STATE(25)] = 299,
  [SMALL_STATE(26)] = 312,
  [SMALL_STATE(27)] = 325,
  [SMALL_STATE(28)] = 338,
  [SMALL_STATE(29)] = 351,
  [SMALL_STATE(30)] = 362,
  [SMALL_STATE(31)] = 372,
  [SMALL_STATE(32)] = 382,
  [SMALL_STATE(33)] = 392,
  [SMALL_STATE(34)] = 402,
  [SMALL_STATE(35)] = 412,
  [SMALL_STATE(36)] = 422,
  [SMALL_STATE(37)] = 427,
  [SMALL_STATE(38)] = 432,
  [SMALL_STATE(39)] = 437,
  [SMALL_STATE(40)] = 442,
  [SMALL_STATE(41)] = 447,
  [SMALL_STATE(42)] = 451,
  [SMALL_STATE(43)] = 455,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(10),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(5),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2), SHIFT_REPEAT(23),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_content, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(24),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(8),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [106] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_jsonl(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
