/* Error: expected ":".
 *    ,
 * 14 |     $aliceblue
 *    |               ^
 *    '
 *   scss/_body.scss 14:15  @import
 *   scss/styles.scss 4:9   root stylesheet */

body::before {
  font-family: "Source Code Pro", "SF Mono", Monaco, Inconsolata, "Fira Mono",
      "Droid Sans Mono", monospace, monospace;
  white-space: pre;
  display: block;
  padding: 1em;
  margin-bottom: 1em;
  border-bottom: 2px solid black;
  content: 'Error: expected ":".\a    \2577 \a 14 \2502      $aliceblue\d\a    \2502                ^\a    \2575 \a   scss/_body.scss 14:15  @import\a   scss/styles.scss 4:9   root stylesheet';
}
