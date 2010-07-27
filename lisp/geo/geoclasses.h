static pointer (*ftab[2])();

#define QUOTE_STRINGS_SIZE 70
static char *quote_strings[QUOTE_STRINGS_SIZE]={
    "\"GEOMETRY\"",
    "\"GEOMETRY\"",
    "*package*",
    "\"no such package\"",
    "(coordinates cascaded-coords bounding-box surrounding-box line edge winged-edge plane polygon face hole faceset body sphere edge-image face-image viewing projection viewing2d parallel-viewing perspective-viewing stereo-viewing viewport viewer viewsurface)",
    "(constrained-point constraint-relation)",
    "(pvert nvert vertices edges faces holes box worldcoords pface nface angle normal distance model-normal model-distance model-vertices convexp evetedp csg mbody primitive-face id flags)",
    "(bounding-box-minpoint bounding-box-maxpoint line-plist line-pvert line-nvert edge-plist edge-pvert edge-nvert edge-pface edge-nface edge-angle plane-normal plane-distance plane-plist polygon-normal polygon-distance polygon-plist polygon-vertices polygon-edges face-plist face-normal face-distance face-edges face-vertices face-convexp faceset-plist faceset-box faceset-edges faceset-vertices faceset-faces body-plist body-box body-edges body-vertices body-faces body-csg body-model-vertices body-convexp viewing-viewcoords viewer-eye viewer-port viewer-surface)",
    "coordinates",
    ":global",
    ":super",
    "propertied-object",
    ":slots",
    "(rot pos)",
    ":metaclass",
    ":element-type",
    ":size",
    ":documentation",
    "make-class",
    "cascaded-coords",
    "(parent descendants worldcoords manager changed)",
    "bounding-box",
    "object",
    "(minpoint maxpoint)",
    "line",
    "(pvert nvert)",
    "edge",
    "(pface nface (angle :type float) (flags :type integer))",
    "winged-edge",
    "(pwing pcwing nwing ncwing)",
    "plane",
    "((normal :type float-vector) (distance :type float))",
    "polygon",
    "(convexp edges vertices (model-normal :type float-vector) (model-distance :type float))",
    "face",
    "(holes mbody primitive-face id)",
    "hole",
    "(myface)",
    "faceset",
    "(box faces edges vertices model-vertices)",
    "body",
    "(convexp evertedp csg)",
    "constrained-point",
    "(position hisposition hisface myneighborhood condition)",
    "constraint-relation",
    "(constraining-body constrained-body constraints)",
    "sphere",
    "(radius)",
    "edge-image",
    "((edge3 :type edge) (homo-pvert :type float-vector) (homo-nvert :type float-vector) (pvert2 :type float-vector) (nvert2 :type float-vector) segments (contourp))",
    "face-image",
    "((box :type bounding-box) edge-images (face3d :type face) distance)",
    "viewing",
    "(viewcoords)",
    "projection",
    "((screenx :type float) (screeny :type float) (hither :type float) (yon :type float) projection-matrix)",
    "viewing2d",
    "nil",
    "parallel-viewing",
    "perspective-viewing",
    "((viewdistance :type float))",
    "stereo-viewing",
    "(viewpoint offset target rightview leftview)",
    "viewport",
    "viewer",
    "(eye port surface alt-surface)",
    "viewsurface",
    ":geoclasses",
    "\"@(#)$Id: geoclasses.l,v 1.1.1.1 2003/11/20 07:46:28 eus Exp $\"",
    "provide",
  };