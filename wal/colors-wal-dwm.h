static const char norm_fg[] = "#f6eee2";
static const char norm_bg[] = "#0b0c19";
static const char norm_border[] = "#aca69e";

static const char sel_fg[] = "#f6eee2";
static const char sel_bg[] = "#A3A0A2";
static const char sel_border[] = "#f6eee2";

static const char urg_fg[] = "#f6eee2";
static const char urg_bg[] = "#666B85";
static const char urg_border[] = "#666B85";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
