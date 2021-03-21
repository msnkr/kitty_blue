const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0b0c19", /* black   */
  [1] = "#666B85", /* red     */
  [2] = "#A3A0A2", /* green   */
  [3] = "#DCBAA6", /* yellow  */
  [4] = "#C5BFC8", /* blue    */
  [5] = "#CAC5CD", /* magenta */
  [6] = "#EBD9CA", /* cyan    */
  [7] = "#f6eee2", /* white   */

  /* 8 bright colors */
  [8]  = "#aca69e",  /* black   */
  [9]  = "#666B85",  /* red     */
  [10] = "#A3A0A2", /* green   */
  [11] = "#DCBAA6", /* yellow  */
  [12] = "#C5BFC8", /* blue    */
  [13] = "#CAC5CD", /* magenta */
  [14] = "#EBD9CA", /* cyan    */
  [15] = "#f6eee2", /* white   */

  /* special colors */
  [256] = "#0b0c19", /* background */
  [257] = "#f6eee2", /* foreground */
  [258] = "#f6eee2",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
