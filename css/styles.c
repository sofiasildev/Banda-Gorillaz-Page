/* Error: Undefined variable.
 *    ,
 * 13 |     $palette
 *    |     ^^^^^^^^
 *    '
 *   scss/variables.scss 13:5  @import
 *   scss/styles.scss 6:9      root stylesheet */

body::before {
  font-family: "Source Code Pro", "SF Mono", Monaco, Inconsolata, "Fira Mono",
      "Droid Sans Mono", monospace, monospace;
  white-space: pre;
  display: block;
  padding: 1em;
  margin-bottom: 1em;
  border-bottom: 2px solid black;
  content: "Error: Undefined variable.\a    \2577 \a 13 \2502      $palette\d\a    \2502      ^^^^^^^^\a    \2575 \a   scss/variables.scss 13:5  @import\a   scss/styles.scss 6:9      root stylesheet";
}
