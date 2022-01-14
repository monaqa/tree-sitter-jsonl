module.exports = grammar(require('tree-sitter-json/grammar'), {
    name: 'jsonl',

    extras: $ => [
        " ", "\t", "\r",
    ],

    rules: {
        document: $ => seq(repeat("\n"), sep($.line, repeat1("\n")), repeat("\n")),

        line: $ => $._value,
    }
})

function sep(rule, delimiter) {
  return seq(rule, repeat(seq(delimiter, rule)));
}
