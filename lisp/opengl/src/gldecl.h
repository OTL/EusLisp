static pointer (*ftab[4])();

#define QUOTE_STRINGS_SIZE 35
static char *quote_strings[QUOTE_STRINGS_SIZE]={
    "\"GL\"",
    "\"GL\"",
    "make-package",
    "\"GL\"",
    "\"GL\"",
    "*package*",
    "\"no such package\"",
    "(glviewsurface)",
    "glviewsurface",
    ":global",
    ":super",
    "x:xwindow",
    ":slots",
    "(x y visualinfo glcon)",
    ":metaclass",
    ":element-type",
    ":size",
    ":documentation",
    "make-class",
    "colormaterial",
    "propertied-object",
    "(name ambient diffuse specular emission shininess transparency)",
    "lightsource",
    "(id ambient diffuse specular position spot-direction spot-exponent spot-cutoff attenuation0 attenuation1 attenuation2)",
    "linecolor",
    "(color)",
    "*tess-obj*",
    ":vtype",
    "*temp-matrix*",
    "make-matrix",
    "*save-matrix*",
    "(*tess-obj* draw-face draw-body)",
    ":gldecl",
    "\"@(#)$Id: gldecl.l,v 1.1.1.1 2003/11/20 07:46:32 eus Exp $\"",
    "provide",
  };