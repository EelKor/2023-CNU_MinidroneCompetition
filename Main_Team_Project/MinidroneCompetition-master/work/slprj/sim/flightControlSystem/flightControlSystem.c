#include "flightControlSystem.h"
#include "rtwtypes.h"
#include "flightControlSystem_types.h"
#include "flightControlSystem_private.h"
#include "mwmathutil.h"
#include <xmmintrin.h>
#include <emmintrin.h>
#include <string.h>
#include "minimum_VUlvYBuM.h"
#include "maximum_gwCiuXP4.h"
#include "minimum_vkZKsMs2.h"
#include "maximum_YhTLPI0W.h"
#include "flightControlSystem_capi.h"
#include "zero_crossing_types.h"
#include "rt_nonfinite.h"
int_T nmtwkzsqud [ 3 ] ; static RegMdlInfo rtMdlInfo_flightControlSystem [
206 ] = { { "pjles00mjh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "flightControlSystem" } , { "hpijc0phcq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "e3kwjfmtyq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "gnaa0kdq4f" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "clwgr5jdek" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "hb5mq1jp4d" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ibbiqytpnr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "kgkmz2ehxp" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "lq5gtrqmfy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "i0nykibtoa" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "fpqg1jdlo0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "gabr0rnvjj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "dyc32xehtl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "gvrocgqiar" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "chqb5yk4na" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ohupmhckxo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "indibvooxj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "lwnnlvnhdo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "hxh5tgi533" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "fj00x4sgwu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "nqkihlj0vf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ckpmcwhwmu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "l5zi4xqiqo" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "je33m1dqwd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "imbf3wrgri" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "orji2pbk05" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "abzv3zworu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "d2thaieuby" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "nybory5x2z" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "oby15q5y4g" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "dhaumv5oxy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "nlzlprwh35" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "ps2hd2ktn0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "jm1sywurry" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "grsgxiu05c" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "gux1we1f0x" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "cfn0s3jrfx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "f3ujivsrsw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "hw3h0zldnq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ezsua5bijx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "omkirkweac" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "lrsxga1mux" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "edl35owv4q" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "jig1nknlld" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "npn1dfesfs" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "iffergcei1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "bsr3dujuk0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "crxyn1tssm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "lwj4qypsny" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "bpvdgm2xq5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "hrtts4l5bc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "mqmoncitu3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "k5baggiqtb" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "ei3m5g1hta" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "hn4i3fu15a" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "lbu5phzg3y" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "mtaqz0ggi1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "mfdtth4fkl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "cn2vepzj0w" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "dfqhc4tws4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ph1mky0ofs" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "femqyyfyjs" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "nu4qaxumex" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "dmp1xsadgu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "eo4bbte2ey" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "lhjbdsj2rjg" , MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * )
"flightControlSystem" } , { "lhjbdsj2rj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "h5liyesltnn" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "k0lgy5kzmig" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "d2rcqsbpxyc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "flightControlSystem" } , { "kekotmnbk54" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "no25hyfktuo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ht3wudfgy2u" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "flightControlSystem" } , { "iesycof4wox" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "eev4eat4b5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "cspyln32yuv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "flightControlSystem" } , { "dhuzh5wmni3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "b1hr2q0zjhm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "nllkaxiwhzw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "flightControlSystem" } , { "ircitwx3zdm" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "h5liyesltn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "k0lgy5kzmi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "d2rcqsbpxy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "kekotmnbk5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "no25hyfktu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "ht3wudfgy2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "iesycof4wo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "cspyln32yu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "dhuzh5wmni" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "b1hr2q0zjh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "nllkaxiwhz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "ircitwx3zd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "b42rzqdx01" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "o2f5l50guo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "m0l5se3ogg" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "bog0frvixl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "o5hyd2bjrc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "pyvd4pdf3i" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "gwlyno50ln" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ha1ipjbq54" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "f4qzdbbxmw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "k3yxem35zg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "dw0zngvhyq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "o0d2t1xos2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "oplbkbi520" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "eyt3piuhqz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "kegjp2lgms" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "nwvibpjmp0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "lsjhvu4egy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "bxsrqc204k" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "ic5jb3movn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "n4xf3lkvmk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "cyp5v4ller" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "mr51bswvyz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "otjykwnhb3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , 0 , ( void * ) "Control System" } , { "o3myonyzve" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "cbxjbqi34b" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "kwdvu5ctzj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "ng2z3yysbc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "e0j2slboh1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "geavflab1i" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "lc0erw2cz2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "flqbd5kc2h" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ifzbhw4mrw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , 0 , ( void * ) "Enabled Subsystem" } , { "o1pgdacg0u" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "cxgwlvxv4s" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ofaogkyrt4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "alfdzl2fz1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "gcledvfwzt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "flsbajpzfi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "aummrq21x4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "dq3x4qvypw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "phrpuocqmv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , 0 , ( void * ) "MeasurementUpdate" } , { "lfexhnspuh" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "nbew0lql35" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "o10422rka0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "ns1oanlnmc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "i5cf5wjr13" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "pmrewofspm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "gabbhpxdh0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "cj0oeh3eko" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "jfkq2sjtgw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , 0 , ( void * ) "SqrtUsedFcn" } , { "itmfjpgv1o" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "dychmi5jvf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "okzguhbnst" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "gjrgypdhn2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "nsvs5ni5i5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "b5nnaqep53" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "ghadbep3bb" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * ) "Geofencing error" } ,
{ "flightControlSystem" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL )
} , { "d0ohl2eoh0m" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "nmtwkzsqud" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "f51itwtzkqf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "dqykr4eggmg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ksm0js2nhsy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "flightControlSystem" } , { "diqjpw4041" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "ipf5ube4r0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "parrot_ImageProcess1" , MDL_INFO_ID_DATA_TYPE ,
0 , - 1 , ( NULL ) } , { "struct_OSJpyIZcrpXqReVWwh9iuG" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_p3FXZIgqtjF2uqDpmYjb6C" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "struct_OMRgDnJcZuQneKEj9vdTyD" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "struct_q6UUpnZ4gTjFvULFx6Rxa" , MDL_INFO_ID_DATA_TYPE , 0 , - 1
, ( NULL ) } , { "struct_IZWOW0zYvpphl7qLgSfN7E" , MDL_INFO_ID_DATA_TYPE , 0
, - 1 , ( NULL ) } , { "struct_hxsmtt0xTZOLDNa2Rz7GAF" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_XRMsui9C07VjBvdq1msujB" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "struct_eAf0NJvzCY9HYTXF7bLNgB" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "SensorsBus" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_acquisition_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_vbat_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_ultrasound_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_list_echo_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_echo_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_pressure_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_magn_mG_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_fifo_gyro_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_gyro_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_acc_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"extraSensorData_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"CommandBus" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_iVffV1TBXj5FV1arW9HEXD" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "struct_upN04LJx4fKLPytCMWCPsB" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "struct_8SSZ93PxvPkADZcA4gG8MD" , MDL_INFO_ID_DATA_TYPE , 0 , -
1 , ( NULL ) } , { "struct_eFnp8sKFNJLN84XLbLzaFF" , MDL_INFO_ID_DATA_TYPE ,
0 , - 1 , ( NULL ) } , { "struct_FIfaVnupBjYAxo1EdNiDlF" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_eF5OUT33sX0T9pzS8027m" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) }
, { "struct_LZS2kzYWg8ZnmAKAaEUHJD" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "struct_hE1099BMemg5OfzqcWAA6G" , MDL_INFO_ID_DATA_TYPE , 0 , -
1 , ( NULL ) } , { "cuint64" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , ( void
* ) "uint64" } , { "uint64" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } ,
{ "cint64" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , ( void * ) "int64" } , {
"int64" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"mr_flightControlSystem_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , (
void * ) "flightControlSystem" } , { "mr_flightControlSystem_GetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"bjqsgn0csy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "flightControlSystem.h" , MDL_INFO_MODEL_FILENAME
, 0 , - 1 , ( NULL ) } , { "flightControlSystem.c" , MDL_INFO_MODEL_FILENAME
, 0 , - 1 , ( void * ) "flightControlSystem" } } ; ileg2v2ld1r b1hr2q0zjh = {
50.0 , 2.0 , 0.0 , 0.0 , { 50.0 , - 1.0 , 0.8 , 0.4 , 0.1 , 0.0 , { 0.00012F
, 9.72E-5F } , { 0.006F , 0.00486F } , 0.1F , 0.0F , 0.0F , 0.0F , 0.0F , -
0.5F , - 0.34906584F , - 0.02F , { 70.0F , 70.0F } , 0.7F , 0.2F , 4.0F , {
0.003F , 0.00243F } , 0.5F , 0.34906584F , 0.02F , 10.0F , 10.0F , 6.0F ,
6.0F , 0.01F , 0.01F , 6.867F , 12.753F , - 0.4F , 0.0F , 0.0F , 80.0F ,
80.0F , 0.6F , 0.5F , 0.6F , 0.5F , 7.0F , 7.0F , 5.0F , 5.0F , - 0.4F ,
4294967295U , 4294967295U , 4294967295U , 1U , 800U , 65535U , 100U , 0.0 ,
0.0 , 0.0 , 0.0 , { 3.7568380197512489E-6 , 1.1270514059253748E-5 ,
1.1270514059253748E-5 , 3.7568380197512489E-6 } , { 1.0 , -
2.9371707284498907 , 2.8762997234793319 , - 0.939098940325283 } , 0.0 , 0.0 ,
0.0 , 0.0005 , 0.0 , 0.0 , 1.0 , 0.0 , 0.5 , 600.0 , - 1.1 , { 1.0 , 0.0 ,
0.005 , 1.0 } , { 0.0 , 0.005 } , { 1.0 , 0.0 } , { 0.0026241420641872266 ,
0.0069776736071494585 , 0.0069776736071494594 , 0.037607692935053325 } , {
0.026590304322229696 , 0.069776736071494483 } , { 0.026241420641872265 ,
0.0697767360714946 } , 0.0 , { 0.002694858992582106 , 0.0071657120718247548 ,
0.0071657120718247548 , 0.038107692935053367 } , { 0.0 , 1.0 } , 0.0 , 0.0 ,
0.0005 , 0.1 , { - 0.046 , 0.0 } , { 0.0 , 0.0 , 9.81 } , {
1097.3834951572255 , - 30.388465402591859 , - 30.388465402591855 ,
7.2223686232128914 } , { 0.0011870943291829544 , - 3.2868164179443428E-5 } ,
{ 0.0011869299883620552 , - 3.2868164179443354E-5 } , { 1097.3834951572255 ,
- 30.388465402591859 , - 30.388465402591855 , 7.2223686232128914 } , {
0.0011870943291829544 , - 3.2868164179443428E-5 } , { 0.0011869299883620552 ,
- 3.2868164179443354E-5 } , 0.0 , { 0.0 , 0.0 , - 9.81 } , {
1.3281632400274306 , 0.0 , - 0.43210920795542979 , 0.0 , 0.0 ,
1.3281632400274306 , 0.0 , - 0.43210920795542979 , - 0.43210920795542984 ,
0.0 , 6.14734986237778 , 0.0 , 0.0 , - 0.43210920795542984 , 0.0 ,
6.14734986237778 } , { 0.066516189303360354 , 5.23402355848703E-19 , -
0.021605460397771867 , - 4.8628553107267881E-19 , 4.3622439914025307E-18 ,
0.066516189303360354 , - 4.5659075919712689E-17 , - 0.021605460397771864 } ,
{ 0.066408162001371535 , 0.0 , - 0.021605460397771489 , 0.0 , 0.0 ,
0.066408162001371535 , 0.0 , - 0.021605460397771489 } , 0.45F , 0.8F , 0.5F ,
{ - 1.0F , 1.0F } , 0.00228F , 0.0F , 0.0F , 0.0F , - 1.0F , 1.15F , 0.005F ,
0.0F , - 1.0F , 0.0832137167F , { 3.75683794E-6F , 1.12705138E-5F ,
1.12705138E-5F , 3.75683794E-6F } , { 1.0F , - 2.93717074F , 2.87629962F , -
0.939098954F } , 0.0F , 0.005F , 0.0F , { 0.0F , 0.0F , 9.81F , 0.0F , 0.0F ,
0.0F } , { 0.994075298F , 0.996184587F , 1.00549F , 1.00139189F ,
0.993601203F , 1.00003F } , 0.0F , { 0.0264077242F , 0.140531361F ,
0.33306092F , 0.33306092F , 0.140531361F , 0.0264077242F } , 0.101936802F , {
1.0F , 1.0F } , { 2.5915494F , - 0.591549456F } , 0.0F , { 1.0F , 1.0F } , {
2.5915494F , - 0.591549456F } , 0.0F , { 0.282124132F , 1.27253926F ,
2.42084408F , 2.42084408F , 1.27253926F , 0.282124132F } , { 1.0F ,
2.22871494F , 2.52446198F , 1.57725322F , 0.54102242F , 0.0795623958F } ,
0.0F , - 1.0F , { 0.282124132F , 1.27253926F , 2.42084408F , 2.42084408F ,
1.27253926F , 0.282124132F } , { 1.0F , 2.22871494F , 2.52446198F ,
1.57725322F , 0.54102242F , 0.0795623958F } , 0.0F , 200.0F , 0.0F , 0.0F ,
0.005F , 0.0F , 2.0F , - 2.0F , 0.0005F , 0.0005F , 0.24F , - 0.61803F ,
1.20204329F , - 1.20204329F , 0.005F , { 1.0F , 1.0F } , { 8.95774746F , -
6.95774698F } , 0.0F , 0.005F , 0.005F , 0.52359879F , - 0.52359879F , 0.004F
, 0.005F , 0.0F , 0.0012F , 0.002F , - 1530.72681F , 500.0F , 10.0F , { 1.0F
, - 1.0F , 1.0F , - 1.0F } , 1.0F , 1.0F , 0.0F , 0.0F , { 0.25F , 0.25F ,
0.25F , 0.25F , 103.573624F , - 103.573624F , 103.573624F , - 103.573624F , -
5.66592F , - 5.66592F , 5.66592F , 5.66592F , - 5.66592F , 5.66592F ,
5.66592F , - 5.66592F } , 0.0F , 0.0F , 0.0F , { 1.0F , 0.0F , - 0.005F ,
1.0F } , { 0.005F , 0.0F } , { 1.0F , 0.0F } , 0.0F , { 1098.6875F , -
30.4245777F , - 30.4245777F , 7.22336864F } , { 1.0F , 0.0F , 0.0F , 1.0F } ,
{ 0.0F , 0.0F } , { 0.0F , 0.0F } , { 1.0F , 0.0F , 0.0F , 0.001F } ,
924556.188F , { 0.0F , 0.0F } , { 1.0F , 0.0F , - 0.005F , 1.0F } , { 0.005F
, 0.0F } , { 1.0F , 0.0F } , 0.0F , { 1098.6875F , - 30.4245777F , -
30.4245777F , 7.22336864F } , { 1.0F , 0.0F , 0.0F , 1.0F } , { 0.0F , 0.0F }
, { 0.0F , 0.0F } , { 1.0F , 0.0F , 0.0F , 0.001F } , 924556.188F , { 0.0F ,
0.0F } , 0.0F , 2.0F , { 1.0F , 0.0F , 0.0F , 0.0F , 0.0F , 1.0F , 0.0F ,
0.0F , - 0.005F , 0.0F , 1.0F , 0.0F , 0.0F , - 0.005F , 0.0F , 1.0F } , {
0.005F , 0.0F , 0.0F , 0.0F , 0.0F , 0.005F , 0.0F , 0.0F } , { 1.0F , 0.0F ,
0.0F , 1.0F , 0.0F , 0.0F , 0.0F , 0.0F } , { 0.0F , 0.0F , 0.0F , 0.0F } , {
1.42263806F , 0.0F , - 0.462845951F , 0.0F , 0.0F , 1.42263806F , 0.0F , -
0.462845951F , - 0.462845951F , 0.0F , 6.15735F , 0.0F , 0.0F , -
0.462845951F , 0.0F , 6.15735F } , { 1.0F , 0.0F , 0.0F , 0.0F , 0.0F , 1.0F
, 0.0F , 0.0F , 0.0F , 0.0F , 1.0F , 0.0F , 0.0F , 0.0F , 0.0F , 1.0F } , {
0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F } , { 0.0F , 0.0F ,
0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F } , { 0.09F , 0.0F , 0.0F , 0.0F ,
0.0F , 0.09F , 0.0F , 0.0F , 0.0F , 0.0F , 0.01F , 0.0F , 0.0F , 0.0F , 0.0F
, 0.01F } , { 20.0F , 0.0F , 0.0F , 20.0F } , { 0.0F , 0.0F , 0.0F , 0.0F } ,
0U , 0U , 0U , 1U , 0U , 1U , 0U , 1U , 0U , 0U , 1U , 0U , false , false ,
false , false , true , 1 , - 1 , 1 , - 1 , 1 , - 1 , 1 , - 1 , 1U , 0U , {
0.0F } , { 0.0F } , { 0.0F } , { 0.0F } , { 0U } , { 0U } , { 0U } , { 99U }
, { 1U } } } ; lhjbdsj2rjg lhjbdsj2rj ; ircitwx3zdm ksm0js2nhsy ; nllkaxiwhzw
dqykr4eggmg ; cspyln32yuv f51itwtzkqf ; static void gqzro24tmt ( const
boolean_T varargin_1 [ 19200 ] , boolean_T varargout_1 [ 19200 ] ) ; static
void gqzro24tmtz ( const boolean_T varargin_1 [ 961 ] , boolean_T varargout_1
[ 961 ] ) ; static void hjmbtqheef ( boolean_T bwin [ 961 ] ) ; void
ghadbep3bb ( uint8_T * hfpztkhwej , bpvdgm2xq5 * localP ) { * hfpztkhwej =
localP -> P_0 ; } void jfkq2sjtgw ( const real32_T duqg5o24fi [ 4 ] ,
boolean_T pfxu5bb25d ) { real32_T iuxdsatvzo [ 4 ] ; int32_T i ; real32_T
iuxdsatvzo_tmp ; if ( pfxu5bb25d ) { for ( i = 0 ; i < 2 ; i ++ ) {
iuxdsatvzo_tmp = duqg5o24fi [ i + 2 ] ; iuxdsatvzo [ i ] = iuxdsatvzo_tmp *
duqg5o24fi [ 2 ] + duqg5o24fi [ i ] * duqg5o24fi [ 0 ] ; iuxdsatvzo [ i + 2 ]
= iuxdsatvzo_tmp * duqg5o24fi [ 3 ] + duqg5o24fi [ i ] * duqg5o24fi [ 1 ] ; }
} else { for ( i = 0 ; i < 2 ; i ++ ) { iuxdsatvzo [ i ] = duqg5o24fi [ i ] ;
iuxdsatvzo [ i + 2 ] = duqg5o24fi [ i + 2 ] ; } } } void gcledvfwzt (
orji2pbk05 * localB , je33m1dqwd * localP ) { localB -> bomzmgvf4n [ 0 ] =
localP -> P_0 ; localB -> bomzmgvf4n [ 1 ] = localP -> P_0 ; } void
alfdzl2fz1 ( orji2pbk05 * localB , imbf3wrgri * localDW , je33m1dqwd * localP
) { localB -> bomzmgvf4n [ 0 ] = localP -> P_0 ; localB -> bomzmgvf4n [ 1 ] =
localP -> P_0 ; localDW -> jhr0womnye = false ; } void phrpuocqmv (
ipf5ube4r0 * const accn4cnket , boolean_T hjrswm4ob0 , const real32_T
ndqlqfbq0n [ 2 ] , real32_T pp4ryk1bnn , const real32_T crftt4mdlv [ 2 ] ,
const real32_T pc1pu0u41d [ 2 ] , real32_T kemszrfmdj , real32_T k3tun14l4o ,
orji2pbk05 * localB , imbf3wrgri * localDW , je33m1dqwd * localP ) { real32_T
aohxlltyk5 ; if ( hjrswm4ob0 ) { if ( ! localDW -> jhr0womnye ) { if (
rtmGetTaskTime ( accn4cnket , 0 ) != rtmGetTStart ( accn4cnket ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ; }
localDW -> jhr0womnye = true ; } aohxlltyk5 = pp4ryk1bnn - ( ( crftt4mdlv [ 0
] * pc1pu0u41d [ 0 ] + crftt4mdlv [ 1 ] * pc1pu0u41d [ 1 ] ) + kemszrfmdj *
k3tun14l4o ) ; localB -> bomzmgvf4n [ 0 ] = ndqlqfbq0n [ 0 ] * aohxlltyk5 ;
localB -> bomzmgvf4n [ 1 ] = ndqlqfbq0n [ 1 ] * aohxlltyk5 ; srUpdateBC (
localDW -> mkkaskumzr ) ; } else if ( localDW -> jhr0womnye ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ;
alfdzl2fz1 ( localB , localDW , localP ) ; } } void e0j2slboh1 ( dyc32xehtl *
localB , fpqg1jdlo0 * localP ) { localB -> jc2u5ap2bv [ 0 ] = localP -> P_0 ;
localB -> jc2u5ap2bv [ 1 ] = localP -> P_0 ; } void ng2z3yysbc ( dyc32xehtl *
localB , gabr0rnvjj * localDW , fpqg1jdlo0 * localP ) { localB -> jc2u5ap2bv
[ 0 ] = localP -> P_0 ; localB -> jc2u5ap2bv [ 1 ] = localP -> P_0 ; localDW
-> njk4w5jozv = false ; } void ifzbhw4mrw ( ipf5ube4r0 * const accn4cnket ,
boolean_T ny1m4yhfkt , const real32_T izmwj1ddpc [ 2 ] , const real32_T
fppyei0jac [ 2 ] , real32_T fjag4trd4p , const real32_T fn1cyjs1o0 [ 2 ] ,
dyc32xehtl * localB , gabr0rnvjj * localDW , fpqg1jdlo0 * localP ) { real32_T
mjzsyo5ls5 ; if ( ny1m4yhfkt ) { if ( ! localDW -> njk4w5jozv ) { if (
rtmGetTaskTime ( accn4cnket , 0 ) != rtmGetTStart ( accn4cnket ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ; }
localDW -> njk4w5jozv = true ; } mjzsyo5ls5 = fjag4trd4p - ( fppyei0jac [ 0 ]
* fn1cyjs1o0 [ 0 ] + fppyei0jac [ 1 ] * fn1cyjs1o0 [ 1 ] ) ; localB ->
jc2u5ap2bv [ 0 ] = izmwj1ddpc [ 0 ] * mjzsyo5ls5 ; localB -> jc2u5ap2bv [ 1 ]
= izmwj1ddpc [ 1 ] * mjzsyo5ls5 ; srUpdateBC ( localDW -> ley0an2uip ) ; }
else if ( localDW -> njk4w5jozv ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ;
ng2z3yysbc ( localB , localDW , localP ) ; } } void mr51bswvyz ( ipf5ube4r0 *
const accn4cnket , dmp1xsadgu * localDW ) { if ( ( ssGetSimMode ( accn4cnket
-> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( accn4cnket -> _mdlRefSfcnS
) -> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if
( slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( accn4cnket ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( accn4cnket
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"State Estimator:1" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "State Estimator:1" ) ; sdiLabelU
blockPath = sdiGetLabelFromChars (
"flightControlSystem/Control System/To Workspace" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiDims forEachMdlRefDims ; int_T forEachMdlRefDimsArray
[ 32 ] ; sdiLabelU sigName = sdiGetLabelFromChars ( "State Estimator:1" ) ;
sdiAsyncQueueHandle hForEachParent = ( NULL ) ; sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_SINGLE ) ; {
sdiComplexity sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [ 1 ] = { 12 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( accn4cnket
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , accn4cnket ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; { sdiLabelU varName = sdiGetLabelFromChars (
"estimatedStates" ) ; sdiRegisterWksVariable ( hForEachParent , varName ,
"structwithtime" ) ; sdiFreeLabel ( varName ) ; }
sdiAsyncRepoSetBlockPathDomain ( hForEachParent ) ;
isStreamoutAlreadyRegistered = true ; } localDW -> puq03cpvbg . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , accn4cnket -> DataMapInfo .
mmi . InstanceMap . fullPath , "35fd7a6d-31a7-4cbe-a294-6e17b918263b" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> puq03cpvbg . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> puq03cpvbg . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> puq03cpvbg . AQHandles , "0.005" ,
0.005 , rtmGetTFinal ( accn4cnket ) ) ; sdiSetSignalRefRate ( localDW ->
puq03cpvbg . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW -> puq03cpvbg .
AQHandles , rtmGetTaskTime ( accn4cnket , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> puq03cpvbg . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> puq03cpvbg . AQHandles ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetBlockPathDomain (
localDW -> puq03cpvbg . AQHandles ) ; if ( forEachMdlRefDims . nDims > 0 ) {
sdiAttachForEachIterationToParent ( hForEachParent , localDW -> puq03cpvbg .
AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) { sdiFreeName
( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ; sdiFreeLabel (
loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel ( propName ) ;
sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ; sdiFreeLabel (
subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { { sdiLabelU varName =
sdiGetLabelFromChars ( "estimatedStates" ) ; sdiRegisterWksVariable ( localDW
-> puq03cpvbg . AQHandles , varName , "structwithtime" ) ; sdiFreeLabel (
varName ) ; } } } } } } void ic5jb3movn ( eo4bbte2ey * localB , dmp1xsadgu *
localDW , nu4qaxumex * localP ) { int32_T i ; localDW -> b3fmbw5stg [ 0 ] =
localP -> P_107 ; localDW -> b3fmbw5stg [ 1 ] = localP -> P_107 ; localDW ->
dq5lalhp1e = 2 ; localDW -> mi4mocbazh = localP -> P_55 ; localDW ->
de4yc1bkky = true ; localDW -> aq2aymvaio [ 0 ] = localP -> P_112 ; localDW
-> ddv3ztj2wp [ 0 ] = localP -> P_59 ; localDW -> aq2aymvaio [ 1 ] = localP
-> P_112 ; localDW -> ddv3ztj2wp [ 1 ] = localP -> P_59 ; localDW ->
aq2aymvaio [ 2 ] = localP -> P_112 ; localDW -> ddv3ztj2wp [ 2 ] = localP ->
P_59 ; localDW -> dzwopklw3c = localP -> P_114 ; localDW -> bbkjtf4kuy = 0 ;
for ( i = 0 ; i < 15 ; i ++ ) { localDW -> d4fp3a2mpz [ i ] = localP -> P_117
; } localDW -> jd3dqtmo2p = true ; localDW -> f1jy25gy04 = true ; localDW ->
l3lcputuyl = localP -> P_206 ; localDW -> ncgo1wegzg = localP -> P_122 ;
localDW -> mirtkskmtr = localP -> P_125 ; for ( i = 0 ; i < 5 ; i ++ ) {
localDW -> jduomia1pb [ i ] = localP -> P_128 ; } localDW -> pjgu33zeph =
localP -> P_207 ; localDW -> gdn4qfzvsk = true ; for ( i = 0 ; i < 10 ; i ++
) { localDW -> dqfv1m130o [ i ] = localP -> P_132 ; } localDW -> meognsjf1t [
0 ] = localP -> P_9 ; localDW -> gcgpru4rcb [ 0 ] = localP -> P_134 ; localDW
-> peklmaellz [ 0 ] = localP -> P_135 ; localDW -> meognsjf1t [ 1 ] = localP
-> P_9 ; localDW -> gcgpru4rcb [ 1 ] = localP -> P_134 ; localDW ->
peklmaellz [ 1 ] = localP -> P_135 ; localDW -> gaxgdudnvc = localP -> P_215
; localDW -> bsetqjfri4 = localP -> P_137 ; localDW -> fpr1qi0oiw = 2 ;
localDW -> immlnclh1f = localP -> P_60 ; localDW -> pjymztciyn = localP ->
P_61 ; localDW -> ebmc4lyjdd [ 0 ] = localP -> P_63 ; localDW -> ebmc4lyjdd [
1 ] = localP -> P_63 ; localDW -> ebmc4lyjdd [ 2 ] = localP -> P_63 ; localDW
-> dsjbzv2lh4 [ 0 ] = localP -> P_11 ; localDW -> gixvkpnpus [ 0 ] = localP
-> P_149 ; localDW -> ow5xb5ovt0 [ 0 ] = localP -> P_12 ; localDW ->
krs1cvkxzk [ 0 ] = localP -> P_10 ; localDW -> dsjbzv2lh4 [ 1 ] = localP ->
P_11 ; localDW -> gixvkpnpus [ 1 ] = localP -> P_149 ; localDW -> ow5xb5ovt0
[ 1 ] = localP -> P_12 ; localDW -> krs1cvkxzk [ 1 ] = localP -> P_10 ;
localDW -> c4kiksmhh2 = localP -> P_156 ; localDW -> dxm3w2i52x = localP ->
P_208 ; localDW -> bw2ribqmwm = localP -> P_64 ; localB -> noaggedw1d =
localP -> P_232 ; localB -> a33lpeqllh [ 0 ] = localP -> P_53 ; localB ->
myx153u3em [ 0 ] = localP -> P_54 ; localB -> a33lpeqllh [ 1 ] = localP ->
P_53 ; localB -> myx153u3em [ 1 ] = localP -> P_54 ; gcledvfwzt ( & localB ->
phrpuocqmvu , & localP -> phrpuocqmvu ) ; e0j2slboh1 ( & localB ->
ifzbhw4mrws , & localP -> ifzbhw4mrws ) ; gcledvfwzt ( & localB -> bm3dpymkhz
, & localP -> bm3dpymkhz ) ; e0j2slboh1 ( & localB -> ipbtas1tys , & localP
-> ipbtas1tys ) ; localB -> dzof3xbsea = localP -> P_101 ; localB ->
adokisptgo [ 0 ] = localP -> P_102 ; localB -> h4vd5izemq [ 0 ] = localP ->
P_103 ; localB -> adokisptgo [ 1 ] = localP -> P_102 ; localB -> h4vd5izemq [
1 ] = localP -> P_103 ; localB -> adokisptgo [ 2 ] = localP -> P_102 ; localB
-> h4vd5izemq [ 2 ] = localP -> P_103 ; localB -> adokisptgo [ 3 ] = localP
-> P_102 ; localB -> h4vd5izemq [ 3 ] = localP -> P_103 ; } void bxsrqc204k (
dmp1xsadgu * localDW , nu4qaxumex * localP ) { int32_T i ; localDW ->
b3fmbw5stg [ 0 ] = localP -> P_107 ; localDW -> b3fmbw5stg [ 1 ] = localP ->
P_107 ; localDW -> dq5lalhp1e = 2 ; localDW -> mi4mocbazh = localP -> P_55 ;
localDW -> de4yc1bkky = true ; localDW -> aq2aymvaio [ 0 ] = localP -> P_112
; localDW -> ddv3ztj2wp [ 0 ] = localP -> P_59 ; localDW -> aq2aymvaio [ 1 ]
= localP -> P_112 ; localDW -> ddv3ztj2wp [ 1 ] = localP -> P_59 ; localDW ->
aq2aymvaio [ 2 ] = localP -> P_112 ; localDW -> ddv3ztj2wp [ 2 ] = localP ->
P_59 ; localDW -> dzwopklw3c = localP -> P_114 ; localDW -> bbkjtf4kuy = 0 ;
for ( i = 0 ; i < 15 ; i ++ ) { localDW -> d4fp3a2mpz [ i ] = localP -> P_117
; } localDW -> jd3dqtmo2p = true ; localDW -> f1jy25gy04 = true ; localDW ->
l3lcputuyl = localP -> P_206 ; localDW -> ncgo1wegzg = localP -> P_122 ;
localDW -> mirtkskmtr = localP -> P_125 ; for ( i = 0 ; i < 5 ; i ++ ) {
localDW -> jduomia1pb [ i ] = localP -> P_128 ; } localDW -> pjgu33zeph =
localP -> P_207 ; localDW -> gdn4qfzvsk = true ; for ( i = 0 ; i < 10 ; i ++
) { localDW -> dqfv1m130o [ i ] = localP -> P_132 ; } localDW -> meognsjf1t [
0 ] = localP -> P_9 ; localDW -> gcgpru4rcb [ 0 ] = localP -> P_134 ; localDW
-> peklmaellz [ 0 ] = localP -> P_135 ; localDW -> meognsjf1t [ 1 ] = localP
-> P_9 ; localDW -> gcgpru4rcb [ 1 ] = localP -> P_134 ; localDW ->
peklmaellz [ 1 ] = localP -> P_135 ; localDW -> gaxgdudnvc = localP -> P_215
; localDW -> bsetqjfri4 = localP -> P_137 ; localDW -> fpr1qi0oiw = 2 ;
localDW -> immlnclh1f = localP -> P_60 ; localDW -> pjymztciyn = localP ->
P_61 ; localDW -> ebmc4lyjdd [ 0 ] = localP -> P_63 ; localDW -> ebmc4lyjdd [
1 ] = localP -> P_63 ; localDW -> ebmc4lyjdd [ 2 ] = localP -> P_63 ; localDW
-> dsjbzv2lh4 [ 0 ] = localP -> P_11 ; localDW -> gixvkpnpus [ 0 ] = localP
-> P_149 ; localDW -> ow5xb5ovt0 [ 0 ] = localP -> P_12 ; localDW ->
krs1cvkxzk [ 0 ] = localP -> P_10 ; localDW -> dsjbzv2lh4 [ 1 ] = localP ->
P_11 ; localDW -> gixvkpnpus [ 1 ] = localP -> P_149 ; localDW -> ow5xb5ovt0
[ 1 ] = localP -> P_12 ; localDW -> krs1cvkxzk [ 1 ] = localP -> P_10 ;
localDW -> c4kiksmhh2 = localP -> P_156 ; localDW -> dxm3w2i52x = localP ->
P_208 ; localDW -> bw2ribqmwm = localP -> P_64 ; } void kegjp2lgms (
eo4bbte2ey * localB , dmp1xsadgu * localDW , nu4qaxumex * localP ) { if (
localDW -> g4zcogq4xi ) { localB -> a33lpeqllh [ 0 ] = localP -> P_53 ;
localB -> a33lpeqllh [ 1 ] = localP -> P_53 ; localDW -> g4zcogq4xi = false ;
} if ( localDW -> iftedegxuv ) { localB -> myx153u3em [ 0 ] = localP -> P_54
; localB -> myx153u3em [ 1 ] = localP -> P_54 ; localDW -> iftedegxuv = false
; } if ( localDW -> kh1khihcrt ) { localB -> adokisptgo [ 0 ] = localP ->
P_102 ; localB -> adokisptgo [ 1 ] = localP -> P_102 ; localB -> adokisptgo [
2 ] = localP -> P_102 ; localB -> adokisptgo [ 3 ] = localP -> P_102 ;
localDW -> kh1khihcrt = false ; } if ( localDW -> cqi2pi21ow ) { localB ->
h4vd5izemq [ 0 ] = localP -> P_103 ; localB -> h4vd5izemq [ 1 ] = localP ->
P_103 ; localB -> h4vd5izemq [ 2 ] = localP -> P_103 ; localB -> h4vd5izemq [
3 ] = localP -> P_103 ; localDW -> cqi2pi21ow = false ; } if ( localDW ->
ifzbhw4mrws . njk4w5jozv ) { ng2z3yysbc ( & localB -> ifzbhw4mrws , & localDW
-> ifzbhw4mrws , & localP -> ifzbhw4mrws ) ; } if ( localDW -> ipbtas1tys .
njk4w5jozv ) { ng2z3yysbc ( & localB -> ipbtas1tys , & localDW -> ipbtas1tys
, & localP -> ipbtas1tys ) ; } if ( localDW -> phrpuocqmvu . jhr0womnye ) {
alfdzl2fz1 ( & localB -> phrpuocqmvu , & localDW -> phrpuocqmvu , & localP ->
phrpuocqmvu ) ; } if ( localDW -> bm3dpymkhz . jhr0womnye ) { alfdzl2fz1 ( &
localB -> bm3dpymkhz , & localDW -> bm3dpymkhz , & localP -> bm3dpymkhz ) ; }
} void otjykwnhb3 ( ipf5ube4r0 * const accn4cnket , const SensorsBus *
fp0u5nlpgw , real_T ay1xsyaztb , real_T nfqd2uxnr0 , eo4bbte2ey * localB ,
dmp1xsadgu * localDW , nu4qaxumex * localP , ph1mky0ofs * localZCE ) { int_T
tid = 0 ; __m128 tmp_e ; __m128 tmp_g ; __m128 tmp_i ; __m128 tmp_m ; __m128d
tmp ; __m128d tmp_p ; if ( localP -> P_222 && ( localDW -> dq5lalhp1e <= 0 )
) { localDW -> b3fmbw5stg [ 0 ] = localP -> P_107 ; localDW -> b3fmbw5stg [ 1
] = localP -> P_107 ; } localB -> oru2xh2cyl_idx_0 = localDW -> b3fmbw5stg [
0 ] ; localB -> oru2xh2cyl_idx_1 = localDW -> b3fmbw5stg [ 1 ] ; localB ->
b4lfjlgxec = ( real_T ) localP -> P_108 * fp0u5nlpgw -> HALSensors .
HAL_ultrasound_SI . altitude ; localB -> hd11alvebq_nz4o0shxby = localB ->
b4lfjlgxec ; localB -> p1k24wzycz = ( localDW -> mi4mocbazh > localP -> P_5 )
; localDW -> de4yc1bkky = ( localB -> p1k24wzycz || localDW -> de4yc1bkky ) ;
if ( localDW -> de4yc1bkky ) { localDW -> mtonzezz2z [ 0 ] = localB ->
lqqrqnfg0k [ 0 ] ; localDW -> mtonzezz2z [ 1 ] = localB -> lqqrqnfg0k [ 1 ] ;
} localB -> htv1xfy1hr_idx_0 = localDW -> mtonzezz2z [ 0 ] ; localB ->
htv1xfy1hr_idx_1 = localDW -> mtonzezz2z [ 1 ] ; localDW -> orkq4iljgu = ( (
( ( fp0u5nlpgw -> HALSensors . HAL_pressure_SI . pressure - fp0u5nlpgw ->
SensorCalibration [ 6 ] ) * localP -> P_109 - localDW -> aq2aymvaio [ 0 ] *
localP -> P_111 [ 1 ] ) - localDW -> aq2aymvaio [ 1 ] * localP -> P_111 [ 2 ]
) - localDW -> aq2aymvaio [ 2 ] * localP -> P_111 [ 3 ] ) / localP -> P_111 [
0 ] ; localB -> p4o02ctkvv_jzx3amusab = ( ( localP -> P_110 [ 0 ] * localDW
-> orkq4iljgu + localDW -> aq2aymvaio [ 0 ] * localP -> P_110 [ 1 ] ) +
localDW -> aq2aymvaio [ 1 ] * localP -> P_110 [ 2 ] ) + localDW -> aq2aymvaio
[ 2 ] * localP -> P_110 [ 3 ] ; localDW -> f2ynnmexgv = ( ( ( localB ->
b4lfjlgxec - localDW -> ddv3ztj2wp [ 0 ] * localP -> P_58 [ 1 ] ) - localDW
-> ddv3ztj2wp [ 1 ] * localP -> P_58 [ 2 ] ) - localDW -> ddv3ztj2wp [ 2 ] *
localP -> P_58 [ 3 ] ) / localP -> P_58 [ 0 ] ; if ( localB -> b4lfjlgxec > -
rtP_Sensors . altSensorMin ) { localB -> oxza4umofr_ppxrqq0gsf = -
rtP_Sensors . altSensorMin ; } else if ( localB -> b4lfjlgxec < localP ->
P_56 ) { localB -> oxza4umofr_ppxrqq0gsf = localP -> P_56 ; } else { localB
-> oxza4umofr_ppxrqq0gsf = localB -> b4lfjlgxec ; } localB -> aoneafkd51 = (
( muDoubleScalarAbs ( localDW -> mi4mocbazh - localB -> oxza4umofr_ppxrqq0gsf
) <= localP -> P_4 ) && ( localB -> b4lfjlgxec < - rtP_Sensors . altSensorMin
) && ( ( ! ( muDoubleScalarAbs ( localB -> p4o02ctkvv_jzx3amusab - localDW ->
mi4mocbazh ) >= localP -> P_2 ) ) || ( ! ( muDoubleScalarAbs ( ( ( ( localP
-> P_57 [ 0 ] * localDW -> f2ynnmexgv + localDW -> ddv3ztj2wp [ 0 ] * localP
-> P_57 [ 1 ] ) + localDW -> ddv3ztj2wp [ 1 ] * localP -> P_57 [ 2 ] ) +
localDW -> ddv3ztj2wp [ 2 ] * localP -> P_57 [ 3 ] ) - localDW -> mi4mocbazh
) >= localP -> P_3 ) ) ) ) ; localB -> l2nlpva2j1_c0dok3111h = localB ->
aoneafkd51 ; localB -> ihwj5oflkc_afnsueciae = localB -> aoneafkd51 ; if (
localB -> ihwj5oflkc_afnsueciae ) { if ( ! localDW -> iftedegxuv ) { if (
rtmGetTaskTime ( accn4cnket , 0 ) != rtmGetTStart ( accn4cnket ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ; }
localDW -> iftedegxuv = true ; } localB -> oxza4umofr_ppxrqq0gsf = localB ->
hd11alvebq_nz4o0shxby - ( localP -> P_72 [ 0 ] * localB -> htv1xfy1hr_idx_0 +
localP -> P_72 [ 1 ] * localB -> htv1xfy1hr_idx_1 ) ; localB -> myx153u3em [
0 ] = localB -> jhtkvlotcj [ 0 ] * localB -> oxza4umofr_ppxrqq0gsf ; localB
-> myx153u3em [ 1 ] = localB -> jhtkvlotcj [ 1 ] * localB ->
oxza4umofr_ppxrqq0gsf ; srUpdateBC ( localDW -> mgysgsd2g4 ) ; } else if (
localDW -> iftedegxuv ) { ssSetBlockStateForSolverChangedAtMajorStep (
accn4cnket -> _mdlRefSfcnS ) ; localB -> myx153u3em [ 0 ] = localP -> P_54 ;
localB -> myx153u3em [ 1 ] = localP -> P_54 ; localDW -> iftedegxuv = false ;
} localB -> nnthqeo0xb [ 0 ] = localB -> myx153u3em [ 0 ] + localB ->
htv1xfy1hr_idx_0 ; localB -> nnthqeo0xb [ 1 ] = localB -> myx153u3em [ 1 ] +
localB -> htv1xfy1hr_idx_1 ; localB -> h3hwnlathw_bsqwvugooi = ( real32_T )
localB -> nnthqeo0xb [ 0 ] ; localB -> ljo1dpaub4_lnjdk5wtww = localDW ->
dzwopklw3c ; for ( localB -> i = 0 ; localB -> i < 6 ; localB -> i ++ ) {
localB -> bwhquruhg4 [ localB -> i ] = fp0u5nlpgw -> SensorCalibration [
localB -> i ] + localP -> P_115 [ localB -> i ] ; } localB ->
cqw0qrp4eu_idx_0 = localB -> bwhquruhg4 [ 0 ] ; localB ->
jhtkvlotcj_hv2ho1zopz = localB -> bwhquruhg4 [ 1 ] ; localB ->
bzklm5kboi_idx_1 = localB -> bwhquruhg4 [ 2 ] ; localB -> lan2dv1qbd_idx_0 =
localB -> bwhquruhg4 [ 3 ] ; localB -> eb5vjpyuav_bnlywzniup = localB ->
bwhquruhg4 [ 4 ] ; localB -> acc1 = localB -> bwhquruhg4 [ 5 ] ; localB ->
bwhquruhg4 [ 0 ] = fp0u5nlpgw -> HALSensors . HAL_acc_SI . x - localB ->
cqw0qrp4eu_idx_0 ; localB -> bwhquruhg4 [ 1 ] = fp0u5nlpgw -> HALSensors .
HAL_acc_SI . y - localB -> jhtkvlotcj_hv2ho1zopz ; localB -> bwhquruhg4 [ 2 ]
= fp0u5nlpgw -> HALSensors . HAL_acc_SI . z - localB -> bzklm5kboi_idx_1 ;
localB -> bwhquruhg4 [ 3 ] = fp0u5nlpgw -> HALSensors . HAL_gyro_SI . x -
localB -> lan2dv1qbd_idx_0 ; localB -> bwhquruhg4 [ 4 ] = fp0u5nlpgw ->
HALSensors . HAL_gyro_SI . y - localB -> eb5vjpyuav_bnlywzniup ; localB ->
bwhquruhg4 [ 5 ] = fp0u5nlpgw -> HALSensors . HAL_gyro_SI . z - localB ->
acc1 ; for ( localB -> i = 0 ; localB -> i < 6 ; localB -> i ++ ) { localB ->
bwhquruhg4 [ localB -> i ] *= localP -> P_116 [ localB -> i ] ; } localB ->
acc1 = localB -> bwhquruhg4 [ 0 ] * localP -> P_118 [ 0 ] ; localB -> cff = 1
; localB -> i = localDW -> bbkjtf4kuy ; while ( localB -> i < 5 ) { localB ->
acc1 += localDW -> d4fp3a2mpz [ localB -> i ] * localP -> P_118 [ localB ->
cff ] ; localB -> cff ++ ; localB -> i ++ ; } localB -> i = 0 ; while (
localB -> i < localDW -> bbkjtf4kuy ) { localB -> acc1 += localDW ->
d4fp3a2mpz [ localB -> i ] * localP -> P_118 [ localB -> cff ] ; localB ->
cff ++ ; localB -> i ++ ; } localB -> p2nu5irp4m_g1smspu5ke [ 0 ] = localB ->
acc1 ; localB -> acc1 = localP -> P_118 [ 0 ] * localB -> bwhquruhg4 [ 1 ] ;
localB -> cff = 1 ; localB -> i = localDW -> bbkjtf4kuy ; while ( localB -> i
< 5 ) { localB -> acc1 += localDW -> d4fp3a2mpz [ localB -> i + 5 ] * localP
-> P_118 [ localB -> cff ] ; localB -> cff ++ ; localB -> i ++ ; } localB ->
i = 0 ; while ( localB -> i < localDW -> bbkjtf4kuy ) { localB -> acc1 +=
localDW -> d4fp3a2mpz [ localB -> i + 5 ] * localP -> P_118 [ localB -> cff ]
; localB -> cff ++ ; localB -> i ++ ; } localB -> p2nu5irp4m_g1smspu5ke [ 1 ]
= localB -> acc1 ; localB -> acc1 = localP -> P_118 [ 0 ] * localB ->
bwhquruhg4 [ 2 ] ; localB -> cff = 1 ; localB -> i = localDW -> bbkjtf4kuy ;
while ( localB -> i < 5 ) { localB -> acc1 += localDW -> d4fp3a2mpz [ localB
-> i + 10 ] * localP -> P_118 [ localB -> cff ] ; localB -> cff ++ ; localB
-> i ++ ; } localB -> i = 0 ; while ( localB -> i < localDW -> bbkjtf4kuy ) {
localB -> acc1 += localDW -> d4fp3a2mpz [ localB -> i + 10 ] * localP ->
P_118 [ localB -> cff ] ; localB -> cff ++ ; localB -> i ++ ; } localB ->
p2nu5irp4m_g1smspu5ke [ 2 ] = localB -> acc1 ; localB -> cqw0qrp4eu_idx_0 =
localP -> P_119 * localB -> p2nu5irp4m_g1smspu5ke [ 0 ] ; if ( localB ->
cqw0qrp4eu_idx_0 > 1.0F ) { localB -> cqw0qrp4eu_idx_0 = 1.0F ; } else if (
localB -> cqw0qrp4eu_idx_0 < - 1.0F ) { localB -> cqw0qrp4eu_idx_0 = - 1.0F ;
} localB -> df5jwd0dve = muSingleScalarAsin ( localB -> cqw0qrp4eu_idx_0 ) ;
localB -> pzfs30csun_fdinthrxmb = localB -> df5jwd0dve ; if ( localDW ->
jd3dqtmo2p ) { localDW -> fl0vv44tbs [ 0 ] = localB -> fqjnqqkpgy [ 0 ] ;
localDW -> fl0vv44tbs [ 1 ] = localB -> fqjnqqkpgy [ 1 ] ; } localB ->
b5mq1a52pd_dhamdvybc1 [ 0 ] = localDW -> fl0vv44tbs [ 0 ] ; localB ->
b5mq1a52pd_dhamdvybc1 [ 1 ] = localDW -> fl0vv44tbs [ 1 ] ; localB ->
cqw0qrp4eu_idx_0 = muSingleScalarFloor ( localP -> P_194 ) ; if ( ( localB ->
p2nu5irp4m_g1smspu5ke [ 0 ] < 0.0F ) && ( localP -> P_194 > localB ->
cqw0qrp4eu_idx_0 ) ) { localB -> jhtkvlotcj_hv2ho1zopz = -
muSingleScalarPower ( - localB -> p2nu5irp4m_g1smspu5ke [ 0 ] , localP ->
P_194 ) ; } else { localB -> jhtkvlotcj_hv2ho1zopz = muSingleScalarPower (
localB -> p2nu5irp4m_g1smspu5ke [ 0 ] , localP -> P_194 ) ; } if ( ( localB
-> p2nu5irp4m_g1smspu5ke [ 1 ] < 0.0F ) && ( localP -> P_194 > localB ->
cqw0qrp4eu_idx_0 ) ) { localB -> bzklm5kboi_idx_1 = - muSingleScalarPower ( -
localB -> p2nu5irp4m_g1smspu5ke [ 1 ] , localP -> P_194 ) ; } else { localB
-> bzklm5kboi_idx_1 = muSingleScalarPower ( localB -> p2nu5irp4m_g1smspu5ke [
1 ] , localP -> P_194 ) ; } if ( ( localB -> acc1 < 0.0F ) && ( localP ->
P_194 > localB -> cqw0qrp4eu_idx_0 ) ) { localB -> cqw0qrp4eu_idx_0 = -
muSingleScalarPower ( - localB -> acc1 , localP -> P_194 ) ; } else { localB
-> cqw0qrp4eu_idx_0 = muSingleScalarPower ( localB -> acc1 , localP -> P_194
) ; } localB -> jhtkvlotcj_hv2ho1zopz = muSingleScalarSqrt ( ( localB ->
jhtkvlotcj_hv2ho1zopz + localB -> bzklm5kboi_idx_1 ) + localB ->
cqw0qrp4eu_idx_0 ) ; localB -> iimupityvq = ( int16_T ) ( ( localB ->
jhtkvlotcj_hv2ho1zopz > localP -> P_30 ) && ( localB -> jhtkvlotcj_hv2ho1zopz
< localP -> P_31 ) ) ; localB -> iqocmhdfin_ctvw0tpkon = ( localB ->
iimupityvq != 0 ) ; localB -> kpsjbxclns_evg4t2fsev = ( localB -> iimupityvq
!= 0 ) ; ifzbhw4mrw ( accn4cnket , localB -> kpsjbxclns_evg4t2fsev , localB
-> hwxrjq0it0 , localP -> P_173 , localB -> pzfs30csun_fdinthrxmb , localB ->
b5mq1a52pd_dhamdvybc1 , & localB -> ifzbhw4mrws , & localDW -> ifzbhw4mrws ,
& localP -> ifzbhw4mrws ) ; localB -> mrrvozc1qc_dhmrxtyqop [ 0 ] = localB ->
ifzbhw4mrws . jc2u5ap2bv [ 0 ] + localB -> b5mq1a52pd_dhamdvybc1 [ 0 ] ;
localB -> mrrvozc1qc_dhmrxtyqop [ 1 ] = localB -> ifzbhw4mrws . jc2u5ap2bv [
1 ] + localB -> b5mq1a52pd_dhamdvybc1 [ 1 ] ; localB -> epnbjpnxkg =
muSingleScalarAtan ( localB -> p2nu5irp4m_g1smspu5ke [ 1 ] / localB -> acc1 )
; localB -> isx1jookfr_al00mdgrv4 = localB -> epnbjpnxkg ; if ( localDW ->
f1jy25gy04 ) { localDW -> as5a0ikbk1 [ 0 ] = localB -> oaihmoohg4 [ 0 ] ;
localDW -> as5a0ikbk1 [ 1 ] = localB -> oaihmoohg4 [ 1 ] ; } localB ->
gfg0sju4bm_dypejvacrn [ 0 ] = localDW -> as5a0ikbk1 [ 0 ] ; localB ->
gfg0sju4bm_dypejvacrn [ 1 ] = localDW -> as5a0ikbk1 [ 1 ] ; localB ->
hud1xcjqn5_pxqvlbal2i = ( localB -> iimupityvq != 0 ) ; localB ->
dyul3la2fn_ax3wx1gs5w = ( localB -> iimupityvq != 0 ) ; ifzbhw4mrw (
accn4cnket , localB -> dyul3la2fn_ax3wx1gs5w , localB -> j4qe4nfjsv , localP
-> P_184 , localB -> isx1jookfr_al00mdgrv4 , localB -> gfg0sju4bm_dypejvacrn
, & localB -> ipbtas1tys , & localDW -> ipbtas1tys , & localP -> ipbtas1tys )
; localB -> bzklm5kboi_idx_1 = localB -> mrrvozc1qc_dhmrxtyqop [ 0 ] ; localB
-> jhtkvlotcj_hv2ho1zopz = localB -> ipbtas1tys . jc2u5ap2bv [ 0 ] + localB
-> gfg0sju4bm_dypejvacrn [ 0 ] ; localB -> ivnkv1flcv_nvsvtgkap4 = localDW ->
l3lcputuyl ; if ( localB -> ivnkv1flcv_nvsvtgkap4 < localP -> P_50 ) { localB
-> lan2dv1qbd_idx_0 = fp0u5nlpgw -> VisionSensors . opticalFlow_data [ 0 ] ;
localB -> eb5vjpyuav_bnlywzniup = fp0u5nlpgw -> VisionSensors .
opticalFlow_data [ 1 ] ; } else { localB -> eb5vjpyuav_bnlywzniup = localP ->
P_104 * localB -> h3hwnlathw_bsqwvugooi ; localB -> lan2dv1qbd_idx_0 =
fp0u5nlpgw -> VisionSensors . opticalFlow_data [ 0 ] * localB ->
eb5vjpyuav_bnlywzniup * localP -> P_105 ; localB -> eb5vjpyuav_bnlywzniup =
fp0u5nlpgw -> VisionSensors . opticalFlow_data [ 1 ] * localB ->
eb5vjpyuav_bnlywzniup * localP -> P_105 ; } localB -> eq5jssgbid_dapv3jlyq5 =
muSingleScalarAbs ( localB -> h3hwnlathw_bsqwvugooi ) ; localDW -> b1nmhkw4zo
= ( localB -> bwhquruhg4 [ 3 ] - localP -> P_121 [ 1 ] * localDW ->
ncgo1wegzg ) / localP -> P_121 [ 0 ] ; localB -> dosvknpiqk = localP -> P_120
[ 0 ] * localDW -> b1nmhkw4zo + localP -> P_120 [ 1 ] * localDW -> ncgo1wegzg
; localDW -> n0mydijbcx = ( localB -> bwhquruhg4 [ 4 ] - localP -> P_124 [ 1
] * localDW -> mirtkskmtr ) / localP -> P_124 [ 0 ] ; localB -> li2d3qqqn4 =
localP -> P_123 [ 0 ] * localDW -> n0mydijbcx + localP -> P_123 [ 1 ] *
localDW -> mirtkskmtr ; localDW -> iwg03owvar = localB -> bwhquruhg4 [ 5 ] ;
localB -> denIdx = 1 ; for ( localB -> i = 0 ; localB -> i < 5 ; localB -> i
++ ) { localDW -> iwg03owvar -= localP -> P_127 [ localB -> denIdx ] *
localDW -> jduomia1pb [ localB -> i ] ; localB -> denIdx ++ ; } localDW ->
iwg03owvar /= localP -> P_127 [ 0 ] ; localB -> cqw0qrp4eu_idx_0 = localP ->
P_126 [ 0 ] * localDW -> iwg03owvar ; localB -> denIdx = 1 ; for ( localB ->
i = 0 ; localB -> i < 5 ; localB -> i ++ ) { localB -> cqw0qrp4eu_idx_0 +=
localP -> P_126 [ localB -> denIdx ] * localDW -> jduomia1pb [ localB -> i ]
; localB -> denIdx ++ ; } localB -> bib1wyq24m_icdfyazkhu = localDW ->
pjgu33zeph ; localB -> pu4zoonf1h_p5h3gwuwqg = ( localB ->
bib1wyq24m_icdfyazkhu == localP -> P_49 ) ; if ( ( ( localZCE -> b1rw3rggh2
== POS_ZCSIG ) != ( int32_T ) localB -> pu4zoonf1h_p5h3gwuwqg ) && ( localZCE
-> b1rw3rggh2 != UNINITIALIZED_ZCSIG ) ) { localB -> dzof3xbsea = fp0u5nlpgw
-> HALSensors . HAL_gyro_SI . temperature ; localDW -> a1oodzfxvv = 4 ; }
localZCE -> b1rw3rggh2 = localB -> pu4zoonf1h_p5h3gwuwqg ; if ( localP ->
P_231 == 1 ) { localB -> oxza4umofr_ppxrqq0gsf = ( fp0u5nlpgw -> HALSensors .
HAL_gyro_SI . temperature - localB -> dzof3xbsea ) * localP -> P_100 ; } else
{ localB -> oxza4umofr_ppxrqq0gsf = localP -> P_91 ; } localB -> prfrp52vqr =
localB -> cqw0qrp4eu_idx_0 - ( real32_T ) localB -> oxza4umofr_ppxrqq0gsf ;
localB -> kgl3ocgllz_idx_0 = localB -> dosvknpiqk - ( localB -> ipbtas1tys .
jc2u5ap2bv [ 1 ] + localB -> gfg0sju4bm_dypejvacrn [ 1 ] ) ; localB ->
kgl3ocgllz_idx_1 = localB -> li2d3qqqn4 - localB -> mrrvozc1qc_dhmrxtyqop [ 1
] ; localB -> kgl3ocgllz_idx_2 = localB -> prfrp52vqr - localP -> P_193 ;
localB -> a5i4fgo1s2 [ 0 ] = localB -> eq5jssgbid_dapv3jlyq5 * localB ->
kgl3ocgllz_idx_1 * localP -> P_129 + localB -> lan2dv1qbd_idx_0 ; localB ->
a5i4fgo1s2 [ 1 ] = localB -> eq5jssgbid_dapv3jlyq5 * localB ->
kgl3ocgllz_idx_0 + localB -> eb5vjpyuav_bnlywzniup ; localB ->
mrrvozc1qc_dhmrxtyqop [ 0 ] = localB -> a5i4fgo1s2 [ 0 ] ; localB ->
mrrvozc1qc_dhmrxtyqop [ 1 ] = localB -> a5i4fgo1s2 [ 1 ] ; if ( localDW ->
gdn4qfzvsk ) { localDW -> od5c00niot [ 0 ] = localB -> dmeohakamk [ 0 ] ;
localDW -> od5c00niot [ 1 ] = localB -> dmeohakamk [ 1 ] ; localDW ->
od5c00niot [ 2 ] = localB -> dmeohakamk [ 2 ] ; localDW -> od5c00niot [ 3 ] =
localB -> dmeohakamk [ 3 ] ; } localB -> oy1omazh2e_o4f35lbcvx [ 0 ] =
localDW -> od5c00niot [ 0 ] ; localB -> oy1omazh2e_o4f35lbcvx [ 1 ] = localDW
-> od5c00niot [ 1 ] ; localB -> oy1omazh2e_o4f35lbcvx [ 2 ] = localDW ->
od5c00niot [ 2 ] ; localB -> oy1omazh2e_o4f35lbcvx [ 3 ] = localDW ->
od5c00niot [ 3 ] ; localB -> bjps1hfvua_guugdwf2m3 [ 0 ] = localB ->
dosvknpiqk ; localB -> bjps1hfvua_guugdwf2m3 [ 1 ] = localB -> li2d3qqqn4 ;
for ( localB -> cff = 0 ; localB -> cff < 2 ; localB -> cff ++ ) { localB ->
memOffset = localB -> cff * 5 ; localB -> eq5jssgbid_dapv3jlyq5 = localB ->
bjps1hfvua_guugdwf2m3 [ localB -> cff ] ; localB -> denIdx = 1 ; for ( localB
-> i = 0 ; localB -> i < 5 ; localB -> i ++ ) { localB ->
eq5jssgbid_dapv3jlyq5 -= localDW -> dqfv1m130o [ localB -> memOffset + localB
-> i ] * localP -> P_131 [ localB -> denIdx ] ; localB -> denIdx ++ ; }
localB -> eq5jssgbid_dapv3jlyq5 /= localP -> P_131 [ 0 ] ; localDW ->
mf2pp40f5v [ localB -> cff ] = localB -> eq5jssgbid_dapv3jlyq5 ; localB ->
cqw0qrp4eu_idx_0 = localP -> P_130 [ 0 ] * localDW -> mf2pp40f5v [ localB ->
cff ] ; localB -> denIdx = 1 ; for ( localB -> i = 0 ; localB -> i < 5 ;
localB -> i ++ ) { localB -> cqw0qrp4eu_idx_0 += localDW -> dqfv1m130o [
localB -> memOffset + localB -> i ] * localP -> P_130 [ localB -> denIdx ] ;
localB -> denIdx ++ ; } localB -> lgxyarf22c [ localB -> cff ] = localB ->
cqw0qrp4eu_idx_0 * localP -> P_133 ; } localB -> lqeik1h102_nuebgmauvi [ 0 ]
= localDW -> meognsjf1t [ 0 ] ; localB -> lqeik1h102_nuebgmauvi [ 1 ] =
localDW -> meognsjf1t [ 1 ] ; localB -> ipa11olwgb_bjbgfqrolh [ 0 ] = localB
-> lgxyarf22c [ 0 ] - localB -> lqeik1h102_nuebgmauvi [ 0 ] ; localB ->
ipa11olwgb_bjbgfqrolh [ 1 ] = localB -> lgxyarf22c [ 1 ] - localB ->
lqeik1h102_nuebgmauvi [ 1 ] ; localB -> eq5jssgbid_dapv3jlyq5 =
muSingleScalarAbs ( localB -> dosvknpiqk ) ; localB -> cqw0qrp4eu_idx_0 =
muSingleScalarAbs ( localB -> li2d3qqqn4 ) ; localB -> drrbtvcsxs = ( ( ( (
muSingleScalarAbs ( localB -> bzklm5kboi_idx_1 ) <= localP -> P_37 ) && (
muSingleScalarAbs ( localB -> jhtkvlotcj_hv2ho1zopz ) <= localP -> P_39 ) &&
( localB -> eq5jssgbid_dapv3jlyq5 <= localP -> P_41 ) && ( localB ->
cqw0qrp4eu_idx_0 <= localP -> P_42 ) && ( muSingleScalarAbs ( localB ->
ipa11olwgb_bjbgfqrolh [ 0 ] ) <= localP -> P_35 ) && ( muSingleScalarAbs (
localB -> ipa11olwgb_bjbgfqrolh [ 1 ] ) <= localP -> P_36 ) ) || ( ( localB
-> eq5jssgbid_dapv3jlyq5 <= localP -> P_38 ) && ( localB -> cqw0qrp4eu_idx_0
<= localP -> P_40 ) ) ) && ( muSingleScalarAbs ( localB -> lan2dv1qbd_idx_0 -
localDW -> gcgpru4rcb [ 0 ] ) <= localP -> P_43 ) && ( muSingleScalarAbs (
localB -> eb5vjpyuav_bnlywzniup - localDW -> gcgpru4rcb [ 1 ] ) <= localP ->
P_44 ) && ( localB -> h3hwnlathw_bsqwvugooi <= localP -> P_45 ) ) ; localB ->
pu4zoonf1h_p5h3gwuwqg = localB -> drrbtvcsxs ; localB ->
oaihmoohg4_as0qznsxlv = localB -> drrbtvcsxs ; if ( localB ->
oaihmoohg4_as0qznsxlv ) { if ( ! localDW -> cqi2pi21ow ) { if (
rtmGetTaskTime ( accn4cnket , 0 ) != rtmGetTStart ( accn4cnket ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ; }
localDW -> cqi2pi21ow = true ; } for ( localB -> i = 0 ; localB -> i < 2 ;
localB -> i ++ ) { localB -> olsfagmvoi_ldqodwenvz [ localB -> i ] = localB
-> mrrvozc1qc_dhmrxtyqop [ localB -> i ] - ( ( ( localP -> P_197 [ localB ->
i + 2 ] * localB -> oy1omazh2e_o4f35lbcvx [ 1 ] + localP -> P_197 [ localB ->
i ] * localB -> oy1omazh2e_o4f35lbcvx [ 0 ] ) + localP -> P_197 [ localB -> i
+ 4 ] * localB -> oy1omazh2e_o4f35lbcvx [ 2 ] ) + localP -> P_197 [ localB ->
i + 6 ] * localB -> oy1omazh2e_o4f35lbcvx [ 3 ] ) ; } for ( localB -> i = 0 ;
localB -> i <= 0 ; localB -> i += 4 ) { _mm_storeu_ps ( & localB ->
h4vd5izemq [ localB -> i ] , _mm_set1_ps ( 0.0F ) ) ; tmp_m = _mm_loadu_ps (
& localB -> o340jloaui [ localB -> i ] ) ; tmp_g = _mm_loadu_ps ( & localB ->
h4vd5izemq [ localB -> i ] ) ; _mm_storeu_ps ( & localB -> h4vd5izemq [
localB -> i ] , _mm_add_ps ( _mm_mul_ps ( tmp_m , _mm_set1_ps ( localB ->
olsfagmvoi_ldqodwenvz [ 0 ] ) ) , tmp_g ) ) ; tmp_m = _mm_loadu_ps ( & localB
-> o340jloaui [ localB -> i + 4 ] ) ; tmp_g = _mm_loadu_ps ( & localB ->
h4vd5izemq [ localB -> i ] ) ; _mm_storeu_ps ( & localB -> h4vd5izemq [
localB -> i ] , _mm_add_ps ( _mm_mul_ps ( tmp_m , _mm_set1_ps ( localB ->
olsfagmvoi_ldqodwenvz [ 1 ] ) ) , tmp_g ) ) ; } srUpdateBC ( localDW ->
klyrn0mwhb ) ; } else if ( localDW -> cqi2pi21ow ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ;
localB -> h4vd5izemq [ 0 ] = localP -> P_103 ; localB -> h4vd5izemq [ 1 ] =
localP -> P_103 ; localB -> h4vd5izemq [ 2 ] = localP -> P_103 ; localB ->
h4vd5izemq [ 3 ] = localP -> P_103 ; localDW -> cqi2pi21ow = false ; } localB
-> gfpexfdgco [ 0 ] = localB -> h4vd5izemq [ 0 ] + localB ->
oy1omazh2e_o4f35lbcvx [ 0 ] ; localB -> gfpexfdgco [ 1 ] = localB ->
h4vd5izemq [ 1 ] + localB -> oy1omazh2e_o4f35lbcvx [ 1 ] ; localB ->
gfpexfdgco [ 2 ] = localB -> h4vd5izemq [ 2 ] + localB ->
oy1omazh2e_o4f35lbcvx [ 2 ] ; localB -> gfpexfdgco [ 3 ] = localB ->
h4vd5izemq [ 3 ] + localB -> oy1omazh2e_o4f35lbcvx [ 3 ] ;
muSingleScalarSinCos ( localB -> ljo1dpaub4_lnjdk5wtww , & localB ->
eq5jssgbid_dapv3jlyq5 , & localB -> cqw0qrp4eu_idx_0 ) ; muSingleScalarSinCos
( localB -> bzklm5kboi_idx_1 , & localB -> ljddwhaot1_idx_1 , & localB ->
cqw0qrp4eu_idx_1 ) ; muSingleScalarSinCos ( localB -> jhtkvlotcj_hv2ho1zopz ,
& localB -> ljddwhaot1_idx_2 , & localB -> cqw0qrp4eu_idx_2 ) ; localB ->
jjbahtdunb_cxarnvbvui [ 0 ] = localB -> cqw0qrp4eu_idx_0 * localB ->
cqw0qrp4eu_idx_1 ; localB -> etwxnro2ri_ezqlmfzvpq = localB ->
ljddwhaot1_idx_1 * localB -> ljddwhaot1_idx_2 ; localB ->
jjbahtdunb_cxarnvbvui [ 1 ] = localB -> etwxnro2ri_ezqlmfzvpq * localB ->
cqw0qrp4eu_idx_0 - localB -> eq5jssgbid_dapv3jlyq5 * localB ->
cqw0qrp4eu_idx_2 ; localB -> a0zzfabdmg_bjvjhhzy4i = localB ->
ljddwhaot1_idx_1 * localB -> cqw0qrp4eu_idx_2 ; localB ->
jjbahtdunb_cxarnvbvui [ 2 ] = localB -> a0zzfabdmg_bjvjhhzy4i * localB ->
cqw0qrp4eu_idx_0 + localB -> eq5jssgbid_dapv3jlyq5 * localB ->
ljddwhaot1_idx_2 ; localB -> jjbahtdunb_cxarnvbvui [ 3 ] = localB ->
eq5jssgbid_dapv3jlyq5 * localB -> cqw0qrp4eu_idx_1 ; localB ->
jjbahtdunb_cxarnvbvui [ 4 ] = localB -> etwxnro2ri_ezqlmfzvpq * localB ->
eq5jssgbid_dapv3jlyq5 + localB -> cqw0qrp4eu_idx_0 * localB ->
cqw0qrp4eu_idx_2 ; localB -> jjbahtdunb_cxarnvbvui [ 5 ] = localB ->
a0zzfabdmg_bjvjhhzy4i * localB -> eq5jssgbid_dapv3jlyq5 - localB ->
cqw0qrp4eu_idx_0 * localB -> ljddwhaot1_idx_2 ; localB ->
jjbahtdunb_cxarnvbvui [ 6 ] = - localB -> ljddwhaot1_idx_1 ; localB ->
jjbahtdunb_cxarnvbvui [ 7 ] = localB -> cqw0qrp4eu_idx_1 * localB ->
ljddwhaot1_idx_2 ; localB -> jjbahtdunb_cxarnvbvui [ 8 ] = localB ->
cqw0qrp4eu_idx_1 * localB -> cqw0qrp4eu_idx_2 ; localB ->
oxza4umofr_ppxrqq0gsf = localDW -> peklmaellz [ 0 ] ; localB ->
ianmxnbaoq_idx_1 = localDW -> peklmaellz [ 1 ] ; localB ->
bx132mxpul_llw0u2ae0v = localB -> nnthqeo0xb [ 1 ] ; localB -> unnamed_idx_2
= localB -> nnthqeo0xb [ 1 ] ; for ( localB -> i = 0 ; localB -> i < 3 ;
localB -> i ++ ) { localB -> aq23pmjfqt_tmp = localB -> jjbahtdunb_cxarnvbvui
[ localB -> i + 6 ] ; localB -> aq23pmjfqt_tmp_jwzvbuczlb = localB ->
jjbahtdunb_cxarnvbvui [ localB -> i + 3 ] * localB -> ianmxnbaoq_idx_1 +
localB -> jjbahtdunb_cxarnvbvui [ localB -> i ] * localB ->
oxza4umofr_ppxrqq0gsf ; localB -> aq23pmjfqt_pbm3vprmfu [ localB -> i ] =
localB -> aq23pmjfqt_tmp * localB -> bx132mxpul_llw0u2ae0v + localB ->
aq23pmjfqt_tmp_jwzvbuczlb ; localB -> jjbahtdunb_cv5hdgrwft [ localB -> i ] =
localB -> aq23pmjfqt_tmp * localB -> unnamed_idx_2 + localB ->
aq23pmjfqt_tmp_jwzvbuczlb ; } localB -> cqw0qrp4eu_idx_2 = ( real32_T )
localB -> jjbahtdunb_cv5hdgrwft [ 2 ] ; localB -> evstouefyu_kkiq3xxxve [ 0 ]
= localB -> oru2xh2cyl_idx_0 ; localB -> evstouefyu_kkiq3xxxve [ 1 ] = localB
-> oru2xh2cyl_idx_1 ; localB -> evstouefyu_kkiq3xxxve [ 2 ] = localB ->
h3hwnlathw_bsqwvugooi ; localB -> evstouefyu_kkiq3xxxve [ 3 ] = localB ->
ljo1dpaub4_lnjdk5wtww ; localB -> evstouefyu_kkiq3xxxve [ 4 ] = localB ->
bzklm5kboi_idx_1 ; localB -> evstouefyu_kkiq3xxxve [ 5 ] = localB ->
jhtkvlotcj_hv2ho1zopz ; localB -> evstouefyu_kkiq3xxxve [ 6 ] = localB ->
gfpexfdgco [ 0 ] ; localB -> evstouefyu_kkiq3xxxve [ 7 ] = localB ->
gfpexfdgco [ 1 ] ; localB -> evstouefyu_kkiq3xxxve [ 8 ] = ( real32_T )
localB -> aq23pmjfqt_pbm3vprmfu [ 2 ] ; localB -> evstouefyu_kkiq3xxxve [ 9 ]
= localB -> kgl3ocgllz_idx_0 ; localB -> evstouefyu_kkiq3xxxve [ 10 ] =
localB -> kgl3ocgllz_idx_1 ; localB -> evstouefyu_kkiq3xxxve [ 11 ] = localB
-> kgl3ocgllz_idx_2 ; { if ( tid == 0 ) { if ( localDW -> puq03cpvbg .
AQHandles && ssGetLogOutput ( accn4cnket -> _mdlRefSfcnS ) ) { sdiWriteSignal
( localDW -> puq03cpvbg . AQHandles , rtmGetTaskTime ( accn4cnket , 0 ) , (
char * ) & localB -> evstouefyu_kkiq3xxxve [ 0 ] + 0 ) ; } } } localB ->
drjad5hp0z_m3ybdk4ikc = localDW -> gaxgdudnvc ; localB -> aagcy0d5ye = (
localB -> drjad5hp0z_m3ybdk4ikc < localP -> P_52 ) ; localB ->
bgjnlzeaxl_jacdjrqyev = ( uint16_T ) ( localB -> drjad5hp0z_m3ybdk4ikc +
localP -> P_216 ) ; if ( localB -> bgjnlzeaxl_jacdjrqyev > localP -> P_51 ) {
localB -> ao41flvyb1 = localP -> P_217 ; } else { localB -> ao41flvyb1 =
localB -> bgjnlzeaxl_jacdjrqyev ; } if ( ( ! localB -> aagcy0d5ye ) && (
localDW -> fpr1qi0oiw == 1 ) ) { localDW -> bsetqjfri4 = localP -> P_137 ; }
if ( localDW -> bsetqjfri4 >= localP -> P_138 ) { localDW -> bsetqjfri4 =
localP -> P_138 ; } else if ( localDW -> bsetqjfri4 <= localP -> P_139 ) {
localDW -> bsetqjfri4 = localP -> P_139 ; } if ( nfqd2uxnr0 == 1.0 ) { localB
-> etwxnro2ri_ezqlmfzvpq = muSingleScalarCos ( localB ->
ljo1dpaub4_lnjdk5wtww ) ; localB -> a0zzfabdmg_bjvjhhzy4i = muSingleScalarSin
( localB -> ljo1dpaub4_lnjdk5wtww ) ; } else if ( nfqd2uxnr0 == 2.0 ) {
localB -> etwxnro2ri_ezqlmfzvpq = 0.2F * muSingleScalarSin ( localB ->
ljo1dpaub4_lnjdk5wtww ) ; localB -> a0zzfabdmg_bjvjhhzy4i = 0.2F *
muSingleScalarCos ( localB -> ljo1dpaub4_lnjdk5wtww ) ; } else if (
nfqd2uxnr0 == - 2.0 ) { localB -> etwxnro2ri_ezqlmfzvpq = - 0.2F *
muSingleScalarSin ( localB -> ljo1dpaub4_lnjdk5wtww ) ; localB ->
a0zzfabdmg_bjvjhhzy4i = - 0.2F * muSingleScalarCos ( localB ->
ljo1dpaub4_lnjdk5wtww ) ; } else { localB -> etwxnro2ri_ezqlmfzvpq = (
real32_T ) nfqd2uxnr0 * muSingleScalarCos ( localB -> ljo1dpaub4_lnjdk5wtww )
; localB -> a0zzfabdmg_bjvjhhzy4i = ( real32_T ) nfqd2uxnr0 *
muSingleScalarSin ( localB -> ljo1dpaub4_lnjdk5wtww ) ; } localB ->
fb1afzxcm2 = localP -> P_140 * localB -> etwxnro2ri_ezqlmfzvpq + localDW ->
immlnclh1f ; localB -> g3zvud4ysq = localP -> P_141 * localB ->
a0zzfabdmg_bjvjhhzy4i + localDW -> pjymztciyn ; localB ->
oxza4umofr_ppxrqq0gsf = localP -> P_62 * ay1xsyaztb ; localB -> dcpk0jldla [
0 ] = localB -> oxza4umofr_ppxrqq0gsf + localDW -> ebmc4lyjdd [ 0 ] ; localB
-> dcpk0jldla [ 1 ] = localB -> oxza4umofr_ppxrqq0gsf + localDW -> ebmc4lyjdd
[ 1 ] ; localB -> dcpk0jldla [ 2 ] = localB -> oxza4umofr_ppxrqq0gsf +
localDW -> ebmc4lyjdd [ 2 ] ; localB -> etwxnro2ri_ezqlmfzvpq = ( real32_T )
localP -> P_69 - localB -> h3hwnlathw_bsqwvugooi ; localB -> hzqctpxfat =
localP -> P_142 * localB -> etwxnro2ri_ezqlmfzvpq ; if ( localB -> aagcy0d5ye
) { localB -> cqw0qrp4eu_idx_0 = localP -> P_96 * localP -> P_143 ; } else {
localB -> cqw0qrp4eu_idx_0 = ( localP -> P_97 * localB ->
etwxnro2ri_ezqlmfzvpq + localDW -> bsetqjfri4 ) - localP -> P_98 * ( real32_T
) localB -> aq23pmjfqt_pbm3vprmfu [ 2 ] ; } localB -> etwxnro2ri_ezqlmfzvpq =
localP -> P_143 + localB -> cqw0qrp4eu_idx_0 ; if ( localB ->
etwxnro2ri_ezqlmfzvpq > localP -> P_144 ) { localB -> etwxnro2ri_ezqlmfzvpq =
localP -> P_144 ; } else if ( localB -> etwxnro2ri_ezqlmfzvpq < localP ->
P_145 ) { localB -> etwxnro2ri_ezqlmfzvpq = localP -> P_145 ; } localB ->
ljddwhaot1_idx_2 = muSingleScalarSin ( localB -> ljo1dpaub4_lnjdk5wtww ) ;
localB -> cqw0qrp4eu_idx_1 = muSingleScalarCos ( localB ->
ljo1dpaub4_lnjdk5wtww ) ; localB -> eq5jssgbid_dapv3jlyq5 = ( real32_T )
localB -> fb1afzxcm2 - localB -> oru2xh2cyl_idx_0 ; localB ->
ljddwhaot1_idx_1 = ( real32_T ) localB -> g3zvud4ysq - localB ->
oru2xh2cyl_idx_1 ; localDW -> pwlp5beuqs [ 0U ] = 0.0F ; localB ->
cqw0qrp4eu_idx_0 = ( localB -> cqw0qrp4eu_idx_1 * localB ->
eq5jssgbid_dapv3jlyq5 + localB -> ljddwhaot1_idx_2 * localB ->
ljddwhaot1_idx_1 ) * localP -> P_17 ; if ( localB -> cqw0qrp4eu_idx_0 >
localP -> P_21 ) { localB -> cqw0qrp4eu_idx_0 = localP -> P_21 ; } else if (
localB -> cqw0qrp4eu_idx_0 < localP -> P_13 ) { localB -> cqw0qrp4eu_idx_0 =
localP -> P_13 ; } localB -> a0zzfabdmg_bjvjhhzy4i = localB ->
cqw0qrp4eu_idx_0 - localB -> gfpexfdgco [ 0 ] ; localB -> bqtz4lp0uq [ 0 ] =
localP -> P_18 * localB -> a0zzfabdmg_bjvjhhzy4i + localDW -> dsjbzv2lh4 [ 0
] ; if ( localB -> bqtz4lp0uq [ 0 ] > localP -> P_22 ) { localB ->
cqw0qrp4eu_idx_0 = localP -> P_22 ; } else if ( localB -> bqtz4lp0uq [ 0 ] <
localP -> P_14 ) { localB -> cqw0qrp4eu_idx_0 = localP -> P_14 ; } else {
localB -> cqw0qrp4eu_idx_0 = localB -> bqtz4lp0uq [ 0 ] ; } localDW ->
pwlp5beuqs [ 0 ] = ( localB -> cqw0qrp4eu_idx_0 - localDW -> gixvkpnpus [ 0 ]
* localP -> P_148 [ 1 ] ) / localP -> P_148 [ 0 ] ; localB ->
olsfagmvoi_ldqodwenvz [ 0 ] = localB -> a0zzfabdmg_bjvjhhzy4i ; localB ->
cqw0qrp4eu_idx_0 = ( - localB -> ljddwhaot1_idx_2 * localB ->
eq5jssgbid_dapv3jlyq5 + localB -> cqw0qrp4eu_idx_1 * localB ->
ljddwhaot1_idx_1 ) * localP -> P_17 ; if ( localB -> cqw0qrp4eu_idx_0 >
localP -> P_21 ) { localB -> cqw0qrp4eu_idx_0 = localP -> P_21 ; } else if (
localB -> cqw0qrp4eu_idx_0 < localP -> P_13 ) { localB -> cqw0qrp4eu_idx_0 =
localP -> P_13 ; } localB -> a0zzfabdmg_bjvjhhzy4i = localB ->
cqw0qrp4eu_idx_0 - localB -> gfpexfdgco [ 1 ] ; localB -> bqtz4lp0uq [ 1 ] =
localP -> P_18 * localB -> a0zzfabdmg_bjvjhhzy4i + localDW -> dsjbzv2lh4 [ 1
] ; if ( localB -> bqtz4lp0uq [ 1 ] > localP -> P_22 ) { localB ->
cqw0qrp4eu_idx_0 = localP -> P_22 ; } else if ( localB -> bqtz4lp0uq [ 1 ] <
localP -> P_14 ) { localB -> cqw0qrp4eu_idx_0 = localP -> P_14 ; } else {
localB -> cqw0qrp4eu_idx_0 = localB -> bqtz4lp0uq [ 1 ] ; } localDW ->
pwlp5beuqs [ 1 ] = ( localB -> cqw0qrp4eu_idx_0 - localP -> P_148 [ 1 ] *
localDW -> gixvkpnpus [ 1 ] ) / localP -> P_148 [ 0 ] ; if ( localP -> P_222
) { localB -> ljddwhaot1_idx_2 = ( localP -> P_147 [ 0 ] * localDW ->
pwlp5beuqs [ 0 ] + localDW -> gixvkpnpus [ 0 ] * localP -> P_147 [ 1 ] ) *
localP -> P_99 [ 0 ] ; localB -> ljddwhaot1_idx_1 = ( localP -> P_147 [ 0 ] *
localDW -> pwlp5beuqs [ 1 ] + localP -> P_147 [ 1 ] * localDW -> gixvkpnpus [
1 ] ) * localP -> P_99 [ 1 ] ; } else { localB -> ljddwhaot1_idx_2 = (
real32_T ) localB -> dcpk0jldla [ 1 ] ; localB -> ljddwhaot1_idx_1 = (
real32_T ) localB -> dcpk0jldla [ 2 ] ; } localB -> ljddwhaot1_idx_2 = (
localB -> ljddwhaot1_idx_2 - localB -> bzklm5kboi_idx_1 ) * localP -> P_19 ;
localB -> bjps1hfvua_guugdwf2m3 [ 0 ] = localB -> ljddwhaot1_idx_2 - localB
-> kgl3ocgllz_idx_1 ; localB -> bjps1hfvua_guugdwf2m3 [ 1 ] = ( localB ->
ljddwhaot1_idx_1 - localB -> jhtkvlotcj_hv2ho1zopz ) * localP -> P_19 -
localB -> kgl3ocgllz_idx_0 ; localB -> kgl3ocgllz_idx_0 = ( real32_T ) localB
-> dcpk0jldla [ 0 ] - localB -> ljo1dpaub4_lnjdk5wtww ; if ( localB ->
kgl3ocgllz_idx_0 > localP -> P_152 ) { localB -> kgl3ocgllz_idx_0 = localP ->
P_152 ; } else if ( localB -> kgl3ocgllz_idx_0 < localP -> P_153 ) { localB
-> kgl3ocgllz_idx_0 = localP -> P_153 ; } localB -> kgl3ocgllz_idx_2 = (
localP -> P_154 * localB -> kgl3ocgllz_idx_0 + localDW -> c4kiksmhh2 ) -
localP -> P_157 * localB -> kgl3ocgllz_idx_2 ; localB -> a2spex0c5a = localP
-> P_158 * localB -> kgl3ocgllz_idx_0 ; localB -> c1mdnmjvwk [ 0 ] = ( localP
-> P_6 [ 0 ] * localB -> bjps1hfvua_guugdwf2m3 [ 0 ] - localDW -> krs1cvkxzk
[ 0 ] ) * localP -> P_16 [ 0 ] ; localB -> kgl3ocgllz_idx_0 = ( localP ->
P_20 [ 0 ] * localB -> bjps1hfvua_guugdwf2m3 [ 0 ] + localDW -> ow5xb5ovt0 [
0 ] ) + localB -> c1mdnmjvwk [ 0 ] ; if ( localB -> kgl3ocgllz_idx_0 > localP
-> P_23 ) { localB -> jlk5l1nxst [ 0 ] = localB -> kgl3ocgllz_idx_0 - localP
-> P_23 ; } else if ( localB -> kgl3ocgllz_idx_0 >= localP -> P_15 ) { localB
-> jlk5l1nxst [ 0 ] = 0.0F ; } else { localB -> jlk5l1nxst [ 0 ] = localB ->
kgl3ocgllz_idx_0 - localP -> P_15 ; } localB -> ljddwhaot1_idx_2 = localP ->
P_7 [ 0 ] * localB -> bjps1hfvua_guugdwf2m3 [ 0 ] ; if ( localB -> jlk5l1nxst
[ 0 ] > localP -> P_165 ) { localB -> i_h522xzlxvt = localP -> P_223 ; } else
{ localB -> i_h522xzlxvt = localP -> P_224 ; } if ( localB ->
ljddwhaot1_idx_2 > localP -> P_165 ) { localB -> i1 = localP -> P_225 ; }
else { localB -> i1 = localP -> P_226 ; } if ( ( localP -> P_165 != localB ->
jlk5l1nxst [ 0 ] ) && ( localB -> i_h522xzlxvt == localB -> i1 ) ) { localB
-> jlk5l1nxst [ 0 ] = localP -> P_166 ; } else { localB -> jlk5l1nxst [ 0 ] =
localB -> ljddwhaot1_idx_2 ; } if ( localB -> bqtz4lp0uq [ 0 ] > localP ->
P_22 ) { localB -> bqtz4lp0uq [ 0 ] -= localP -> P_22 ; } else if ( localB ->
bqtz4lp0uq [ 0 ] >= localP -> P_14 ) { localB -> bqtz4lp0uq [ 0 ] = 0.0F ; }
else { localB -> bqtz4lp0uq [ 0 ] -= localP -> P_14 ; } localB ->
ljddwhaot1_idx_2 = localP -> P_8 * localB -> olsfagmvoi_ldqodwenvz [ 0 ] ; if
( localB -> bqtz4lp0uq [ 0 ] > localP -> P_168 ) { localB -> i_h522xzlxvt =
localP -> P_227 ; } else { localB -> i_h522xzlxvt = localP -> P_228 ; } if (
localB -> ljddwhaot1_idx_2 > localP -> P_168 ) { localB -> i1 = localP ->
P_229 ; } else { localB -> i1 = localP -> P_230 ; } if ( ( localP -> P_168 !=
localB -> bqtz4lp0uq [ 0 ] ) && ( localB -> i_h522xzlxvt == localB -> i1 ) )
{ localB -> bqtz4lp0uq [ 0 ] = localP -> P_169 ; } else { localB ->
bqtz4lp0uq [ 0 ] = localB -> ljddwhaot1_idx_2 ; } if ( localB ->
kgl3ocgllz_idx_0 > localP -> P_23 ) { localB -> kgl3ocgllz_idx_1 = localP ->
P_23 ; } else if ( localB -> kgl3ocgllz_idx_0 < localP -> P_15 ) { localB ->
kgl3ocgllz_idx_1 = localP -> P_15 ; } else { localB -> kgl3ocgllz_idx_1 =
localB -> kgl3ocgllz_idx_0 ; } localB -> c1mdnmjvwk [ 1 ] = ( localP -> P_6 [
1 ] * localB -> bjps1hfvua_guugdwf2m3 [ 1 ] - localDW -> krs1cvkxzk [ 1 ] ) *
localP -> P_16 [ 1 ] ; localB -> kgl3ocgllz_idx_0 = ( localP -> P_20 [ 1 ] *
localB -> bjps1hfvua_guugdwf2m3 [ 1 ] + localDW -> ow5xb5ovt0 [ 1 ] ) +
localB -> c1mdnmjvwk [ 1 ] ; if ( localB -> kgl3ocgllz_idx_0 > localP -> P_23
) { localB -> jlk5l1nxst [ 1 ] = localB -> kgl3ocgllz_idx_0 - localP -> P_23
; } else if ( localB -> kgl3ocgllz_idx_0 >= localP -> P_15 ) { localB ->
jlk5l1nxst [ 1 ] = 0.0F ; } else { localB -> jlk5l1nxst [ 1 ] = localB ->
kgl3ocgllz_idx_0 - localP -> P_15 ; } localB -> ljddwhaot1_idx_2 = localP ->
P_7 [ 1 ] * localB -> bjps1hfvua_guugdwf2m3 [ 1 ] ; if ( localB -> jlk5l1nxst
[ 1 ] > localP -> P_165 ) { localB -> i_h522xzlxvt = localP -> P_223 ; } else
{ localB -> i_h522xzlxvt = localP -> P_224 ; } if ( localB ->
ljddwhaot1_idx_2 > localP -> P_165 ) { localB -> i1 = localP -> P_225 ; }
else { localB -> i1 = localP -> P_226 ; } if ( ( localP -> P_165 != localB ->
jlk5l1nxst [ 1 ] ) && ( localB -> i_h522xzlxvt == localB -> i1 ) ) { localB
-> jlk5l1nxst [ 1 ] = localP -> P_166 ; } else { localB -> jlk5l1nxst [ 1 ] =
localB -> ljddwhaot1_idx_2 ; } if ( localB -> bqtz4lp0uq [ 1 ] > localP ->
P_22 ) { localB -> bqtz4lp0uq [ 1 ] -= localP -> P_22 ; } else if ( localB ->
bqtz4lp0uq [ 1 ] >= localP -> P_14 ) { localB -> bqtz4lp0uq [ 1 ] = 0.0F ; }
else { localB -> bqtz4lp0uq [ 1 ] -= localP -> P_14 ; } localB ->
ljddwhaot1_idx_2 = localP -> P_8 * localB -> a0zzfabdmg_bjvjhhzy4i ; if (
localB -> bqtz4lp0uq [ 1 ] > localP -> P_168 ) { localB -> i_h522xzlxvt =
localP -> P_227 ; } else { localB -> i_h522xzlxvt = localP -> P_228 ; } if (
localB -> ljddwhaot1_idx_2 > localP -> P_168 ) { localB -> i1 = localP ->
P_229 ; } else { localB -> i1 = localP -> P_230 ; } if ( ( localP -> P_168 !=
localB -> bqtz4lp0uq [ 1 ] ) && ( localB -> i_h522xzlxvt == localB -> i1 ) )
{ localB -> bqtz4lp0uq [ 1 ] = localP -> P_169 ; } else { localB ->
bqtz4lp0uq [ 1 ] = localB -> ljddwhaot1_idx_2 ; } if ( localB ->
kgl3ocgllz_idx_0 > localP -> P_23 ) { localB -> kgl3ocgllz_idx_0 = localP ->
P_23 ; } else if ( localB -> kgl3ocgllz_idx_0 < localP -> P_15 ) { localB ->
kgl3ocgllz_idx_0 = localP -> P_15 ; } for ( localB -> i = 0 ; localB -> i <=
0 ; localB -> i += 4 ) { tmp_m = _mm_loadu_ps ( & localB -> evofcbwaww [
localB -> i ] ) ; tmp_g = _mm_loadu_ps ( & localB -> evofcbwaww [ localB -> i
+ 4 ] ) ; tmp_e = _mm_loadu_ps ( & localB -> evofcbwaww [ localB -> i + 8 ] )
; tmp_i = _mm_loadu_ps ( & localB -> evofcbwaww [ localB -> i + 12 ] ) ;
_mm_storeu_ps ( & localB -> h0lde0msdj_nyxm0bsxsn [ localB -> i ] ,
_mm_add_ps ( _mm_mul_ps ( tmp_i , _mm_set1_ps ( localB -> kgl3ocgllz_idx_0 )
) , _mm_add_ps ( _mm_mul_ps ( tmp_e , _mm_set1_ps ( localB ->
kgl3ocgllz_idx_1 ) ) , _mm_add_ps ( _mm_mul_ps ( tmp_g , _mm_set1_ps ( localB
-> kgl3ocgllz_idx_2 ) ) , _mm_add_ps ( _mm_mul_ps ( tmp_m , _mm_set1_ps (
localB -> etwxnro2ri_ezqlmfzvpq ) ) , _mm_set1_ps ( 0.0F ) ) ) ) ) ) ; }
localB -> cqw0qrp4eu_idx_0 = localP -> P_159 * localB ->
h0lde0msdj_nyxm0bsxsn [ 0 ] ; if ( localB -> cqw0qrp4eu_idx_0 > localP ->
P_160 ) { localB -> cqw0qrp4eu_idx_0 = localP -> P_160 ; } else if ( localB
-> cqw0qrp4eu_idx_0 < localP -> P_161 ) { localB -> cqw0qrp4eu_idx_0 = localP
-> P_161 ; } localB -> maxn0002kp [ 0 ] = localP -> P_162 [ 0 ] * localB ->
cqw0qrp4eu_idx_0 ; localB -> cqw0qrp4eu_idx_0 = localP -> P_159 * localB ->
h0lde0msdj_nyxm0bsxsn [ 1 ] ; if ( localB -> cqw0qrp4eu_idx_0 > localP ->
P_160 ) { localB -> cqw0qrp4eu_idx_0 = localP -> P_160 ; } else if ( localB
-> cqw0qrp4eu_idx_0 < localP -> P_161 ) { localB -> cqw0qrp4eu_idx_0 = localP
-> P_161 ; } localB -> maxn0002kp [ 1 ] = localP -> P_162 [ 1 ] * localB ->
cqw0qrp4eu_idx_0 ; localB -> cqw0qrp4eu_idx_0 = localP -> P_159 * localB ->
h0lde0msdj_nyxm0bsxsn [ 2 ] ; if ( localB -> cqw0qrp4eu_idx_0 > localP ->
P_160 ) { localB -> cqw0qrp4eu_idx_0 = localP -> P_160 ; } else if ( localB
-> cqw0qrp4eu_idx_0 < localP -> P_161 ) { localB -> cqw0qrp4eu_idx_0 = localP
-> P_161 ; } localB -> maxn0002kp [ 2 ] = localP -> P_162 [ 2 ] * localB ->
cqw0qrp4eu_idx_0 ; localB -> cqw0qrp4eu_idx_0 = localP -> P_159 * localB ->
h0lde0msdj_nyxm0bsxsn [ 3 ] ; if ( localB -> cqw0qrp4eu_idx_0 > localP ->
P_160 ) { localB -> cqw0qrp4eu_idx_0 = localP -> P_160 ; } else if ( localB
-> cqw0qrp4eu_idx_0 < localP -> P_161 ) { localB -> cqw0qrp4eu_idx_0 = localP
-> P_161 ; } localB -> maxn0002kp [ 3 ] = localP -> P_162 [ 3 ] * localB ->
cqw0qrp4eu_idx_0 ; localB -> ohjh1pu3ui_oyypvi4boh = localDW -> dxm3w2i52x ;
if ( localB -> ohjh1pu3ui_oyypvi4boh > localP -> P_68 ) { localB ->
p4o02ctkvv_jzx3amusab = localB -> h3hwnlathw_bsqwvugooi - localB ->
p4o02ctkvv_jzx3amusab ; localB -> oxza4umofr_ppxrqq0gsf = fp0u5nlpgw ->
VisionSensors . opticalFlow_data [ 2 ] ; localB -> ianmxnbaoq_idx_1 =
fp0u5nlpgw -> VisionSensors . opticalFlow_data [ 2 ] ; } else { localB ->
p4o02ctkvv_jzx3amusab = localP -> P_170 ; localB -> oxza4umofr_ppxrqq0gsf =
localP -> P_66 ; localB -> ianmxnbaoq_idx_1 = localP -> P_66 ; } localB ->
imrz1volmu = ( real_T ) ( localB -> ianmxnbaoq_idx_1 == localP -> P_1 ) *
localDW -> bw2ribqmwm + ( real_T ) ( localB -> oxza4umofr_ppxrqq0gsf ==
localP -> P_1 ) ; localB -> babjbmypbd_m3yhjduhi1 = localB ->
ohjh1pu3ui_oyypvi4boh + localP -> P_209 ; if ( localB ->
babjbmypbd_m3yhjduhi1 > localP -> P_46 ) { localB -> cy2taauytx = localP ->
P_210 ; } else { localB -> cy2taauytx = localB -> babjbmypbd_m3yhjduhi1 ; }
if ( ( muSingleScalarAbs ( localB -> oru2xh2cyl_idx_0 ) > localP -> P_24 ) ||
( muSingleScalarAbs ( localB -> oru2xh2cyl_idx_1 ) > localP -> P_25 ) ) {
ghadbep3bb ( & localB -> noaggedw1d , & localP -> ghadbep3bbv ) ; } else if (
( ( muSingleScalarAbs ( fp0u5nlpgw -> VisionSensors . opticalFlow_data [ 0 ]
) > localP -> P_28 ) && ( muSingleScalarAbs ( localP -> P_163 * fp0u5nlpgw ->
VisionSensors . opticalFlow_data [ 0 ] - localB -> gfpexfdgco [ 0 ] ) >
localP -> P_26 ) ) || ( ( muSingleScalarAbs ( localP -> P_164 * fp0u5nlpgw ->
VisionSensors . opticalFlow_data [ 1 ] - localB -> gfpexfdgco [ 1 ] ) >
localP -> P_27 ) && ( muSingleScalarAbs ( fp0u5nlpgw -> VisionSensors .
opticalFlow_data [ 1 ] ) > localP -> P_29 ) ) ) { ghadbep3bb ( & localB ->
noaggedw1d , & localP -> acfz1zxm4t ) ; } else if ( localB -> imrz1volmu >
localP -> P_0 ) { ghadbep3bb ( & localB -> noaggedw1d , & localP ->
clwiujjdqo ) ; } else if ( muSingleScalarAbs ( localB ->
p4o02ctkvv_jzx3amusab ) > localP -> P_67 ) { ghadbep3bb ( & localB ->
noaggedw1d , & localP -> jvbbqhrajh ) ; } else { ghadbep3bb ( & localB ->
noaggedw1d , & localP -> ciy1c2o0rv ) ; } if ( localP -> P_218 ) { for (
localB -> i = 0 ; localB -> i <= 0 ; localB -> i += 2 ) { tmp = _mm_loadu_pd
( & localB -> iqocmhdfin [ localB -> i + 2 ] ) ; tmp_p = _mm_loadu_pd ( &
localB -> iqocmhdfin [ localB -> i ] ) ; _mm_storeu_pd ( & localB ->
mfeecyi5au_bhxxfovxdy [ localB -> i ] , _mm_add_pd ( _mm_mul_pd ( tmp ,
_mm_set1_pd ( localB -> iqocmhdfin [ 2 ] ) ) , _mm_mul_pd ( tmp_p ,
_mm_set1_pd ( localB -> iqocmhdfin [ 0 ] ) ) ) ) ; tmp = _mm_loadu_pd ( &
localB -> iqocmhdfin [ localB -> i + 2 ] ) ; tmp_p = _mm_loadu_pd ( & localB
-> iqocmhdfin [ localB -> i ] ) ; _mm_storeu_pd ( & localB ->
mfeecyi5au_bhxxfovxdy [ localB -> i + 2 ] , _mm_add_pd ( _mm_mul_pd ( tmp ,
_mm_set1_pd ( localB -> iqocmhdfin [ 3 ] ) ) , _mm_mul_pd ( tmp_p ,
_mm_set1_pd ( localB -> iqocmhdfin [ 1 ] ) ) ) ) ; } } else { for ( localB ->
i = 0 ; localB -> i < 2 ; localB -> i ++ ) { localB -> mfeecyi5au_bhxxfovxdy
[ localB -> i ] = localB -> iqocmhdfin [ localB -> i ] ; localB ->
mfeecyi5au_bhxxfovxdy [ localB -> i + 2 ] = localB -> iqocmhdfin [ localB ->
i + 2 ] ; } } localB -> djerhkhvup_g2mlkqadfk [ 0 ] = localB ->
htv1xfy1hr_idx_0 ; localB -> djerhkhvup_g2mlkqadfk [ 1 ] = localB ->
htv1xfy1hr_idx_1 ; localB -> htv1xfy1hr_idx_0 = localP -> P_70 [ 0 ] * localB
-> djerhkhvup_g2mlkqadfk [ 0 ] + localB -> djerhkhvup_g2mlkqadfk [ 1 ] *
localP -> P_70 [ 2 ] ; localB -> htv1xfy1hr_idx_1 = localB ->
djerhkhvup_g2mlkqadfk [ 0 ] * localP -> P_70 [ 1 ] + localB ->
djerhkhvup_g2mlkqadfk [ 1 ] * localP -> P_70 [ 3 ] ; for ( localB -> i = 0 ;
localB -> i < 3 ; localB -> i ++ ) { localB -> hte1fpi5od [ localB -> i ] = (
( localB -> jjbahtdunb_cxarnvbvui [ 3 * localB -> i + 1 ] * localB ->
p2nu5irp4m_g1smspu5ke [ 1 ] + localB -> jjbahtdunb_cxarnvbvui [ 3 * localB ->
i ] * localB -> p2nu5irp4m_g1smspu5ke [ 0 ] ) + localB ->
jjbahtdunb_cxarnvbvui [ 3 * localB -> i + 2 ] * localB -> acc1 ) + localP ->
P_84 [ localB -> i ] ; } localB -> bx132mxpul_llw0u2ae0v = localB ->
hte1fpi5od [ 2 ] ; localB -> oxza4umofr_ppxrqq0gsf = localP -> P_71 [ 0 ] *
localB -> hte1fpi5od [ 2 ] ; localB -> ianmxnbaoq_idx_1 = localP -> P_71 [ 1
] * localB -> hte1fpi5od [ 2 ] ; localB -> jukni12zmf_ifotjnizh4 = localB ->
l2nlpva2j1_c0dok3111h ; if ( localB -> jukni12zmf_ifotjnizh4 ) { if ( !
localDW -> g4zcogq4xi ) { if ( rtmGetTaskTime ( accn4cnket , 0 ) !=
rtmGetTStart ( accn4cnket ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
accn4cnket -> _mdlRefSfcnS ) ; } localDW -> g4zcogq4xi = true ; } localB ->
hd11alvebq_nz4o0shxby -= ( localP -> P_72 [ 0 ] * localB ->
djerhkhvup_g2mlkqadfk [ 0 ] + localP -> P_72 [ 1 ] * localB ->
djerhkhvup_g2mlkqadfk [ 1 ] ) + localP -> P_76 * localB ->
bx132mxpul_llw0u2ae0v ; localB -> a33lpeqllh [ 0 ] = localB -> mzcro4caxu [ 0
] * localB -> hd11alvebq_nz4o0shxby ; localB -> a33lpeqllh [ 1 ] = localB ->
mzcro4caxu [ 1 ] * localB -> hd11alvebq_nz4o0shxby ; srUpdateBC ( localDW ->
idn2v5d33m ) ; } else if ( localDW -> g4zcogq4xi ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ;
localB -> a33lpeqllh [ 0 ] = localP -> P_53 ; localB -> a33lpeqllh [ 1 ] =
localP -> P_53 ; localDW -> g4zcogq4xi = false ; } localB -> foobajajui [ 0 ]
= ( localB -> oxza4umofr_ppxrqq0gsf + localB -> htv1xfy1hr_idx_0 ) + localB
-> a33lpeqllh [ 0 ] ; localB -> foobajajui [ 1 ] = ( localB ->
ianmxnbaoq_idx_1 + localB -> htv1xfy1hr_idx_1 ) + localB -> a33lpeqllh [ 1 ]
; localB -> c5ja3qjwbe_merlcviukg [ 0 ] = localB -> dosvknpiqk ; localB ->
c5ja3qjwbe_merlcviukg [ 1 ] = localB -> li2d3qqqn4 ; localB ->
c5ja3qjwbe_merlcviukg [ 2 ] = localB -> prfrp52vqr ; jfkq2sjtgw ( localB ->
bmrdaxfgpr , localP -> P_219 ) ; localB -> fp3r4suywu_lxo5edjg3c [ 0 ] =
localB -> b5mq1a52pd_dhamdvybc1 [ 0 ] ; localB -> fp3r4suywu_lxo5edjg3c [ 1 ]
= localB -> b5mq1a52pd_dhamdvybc1 [ 1 ] ; localB -> oru2xh2cyl_idx_0 = localP
-> P_171 [ 0 ] * localB -> fp3r4suywu_lxo5edjg3c [ 0 ] + localB ->
fp3r4suywu_lxo5edjg3c [ 1 ] * localP -> P_171 [ 2 ] ; localB ->
oru2xh2cyl_idx_1 = localB -> fp3r4suywu_lxo5edjg3c [ 0 ] * localP -> P_171 [
1 ] + localB -> fp3r4suywu_lxo5edjg3c [ 1 ] * localP -> P_171 [ 3 ] ; localB
-> mexlyjbu22_ju13rw2h0m = localB -> li2d3qqqn4 ; localB -> ljddwhaot1_idx_2
= localP -> P_172 [ 0 ] * localB -> mexlyjbu22_ju13rw2h0m ; localB ->
ljddwhaot1_idx_1 = localP -> P_172 [ 1 ] * localB -> mexlyjbu22_ju13rw2h0m ;
localB -> priqjerfnq_ltu3syw14q = localB -> iqocmhdfin_ctvw0tpkon ;
phrpuocqmv ( accn4cnket , localB -> priqjerfnq_ltu3syw14q , localB ->
nuasakb4gb , localB -> pzfs30csun_fdinthrxmb , localP -> P_173 , localB ->
fp3r4suywu_lxo5edjg3c , localP -> P_174 , localB -> mexlyjbu22_ju13rw2h0m , &
localB -> phrpuocqmvu , & localDW -> phrpuocqmvu , & localP -> phrpuocqmvu )
; localB -> gusraudqef [ 0 ] = ( localB -> ljddwhaot1_idx_2 + localB ->
oru2xh2cyl_idx_0 ) + localB -> phrpuocqmvu . bomzmgvf4n [ 0 ] ; localB ->
gusraudqef [ 1 ] = ( localB -> ljddwhaot1_idx_1 + localB -> oru2xh2cyl_idx_1
) + localB -> phrpuocqmvu . bomzmgvf4n [ 1 ] ; jfkq2sjtgw ( localB ->
bsmav2qoqf , localP -> P_220 ) ; localB -> jifkbeu3xj_owjr1h1vqy [ 0 ] =
localB -> gfg0sju4bm_dypejvacrn [ 0 ] ; localB -> jifkbeu3xj_owjr1h1vqy [ 1 ]
= localB -> gfg0sju4bm_dypejvacrn [ 1 ] ; localB -> oru2xh2cyl_idx_0 = localP
-> P_182 [ 0 ] * localB -> jifkbeu3xj_owjr1h1vqy [ 0 ] + localB ->
jifkbeu3xj_owjr1h1vqy [ 1 ] * localP -> P_182 [ 2 ] ; localB ->
oru2xh2cyl_idx_1 = localB -> jifkbeu3xj_owjr1h1vqy [ 0 ] * localP -> P_182 [
1 ] + localB -> jifkbeu3xj_owjr1h1vqy [ 1 ] * localP -> P_182 [ 3 ] ; localB
-> kjziqwmqqe_jz50ptvnrg = localB -> dosvknpiqk ; localB -> ljddwhaot1_idx_2
= localP -> P_183 [ 0 ] * localB -> kjziqwmqqe_jz50ptvnrg ; localB ->
ljddwhaot1_idx_1 = localP -> P_183 [ 1 ] * localB -> kjziqwmqqe_jz50ptvnrg ;
localB -> jabepyxrmc_ojunzewo4f = localB -> hud1xcjqn5_pxqvlbal2i ;
phrpuocqmv ( accn4cnket , localB -> jabepyxrmc_ojunzewo4f , localB ->
gj4cf0tyj5 , localB -> isx1jookfr_al00mdgrv4 , localP -> P_184 , localB ->
jifkbeu3xj_owjr1h1vqy , localP -> P_185 , localB -> kjziqwmqqe_jz50ptvnrg , &
localB -> bm3dpymkhz , & localDW -> bm3dpymkhz , & localP -> bm3dpymkhz ) ;
localB -> deejr5w5jc [ 0 ] = ( localB -> ljddwhaot1_idx_2 + localB ->
oru2xh2cyl_idx_0 ) + localB -> bm3dpymkhz . bomzmgvf4n [ 0 ] ; localB ->
deejr5w5jc [ 1 ] = ( localB -> ljddwhaot1_idx_1 + localB -> oru2xh2cyl_idx_1
) + localB -> bm3dpymkhz . bomzmgvf4n [ 1 ] ; localB -> jmix0tpmqc_czkfpwuzm5
= localB -> bib1wyq24m_icdfyazkhu + localP -> P_211 ; if ( localB ->
jmix0tpmqc_czkfpwuzm5 > localP -> P_47 ) { localB -> aysvaohtl0 = localP ->
P_212 ; } else { localB -> aysvaohtl0 = localB -> jmix0tpmqc_czkfpwuzm5 ; }
muSingleScalarSinCos ( localB -> ljo1dpaub4_lnjdk5wtww , & localB ->
oru2xh2cyl_idx_0 , & localB -> oru2xh2cyl_idx_1 ) ; muSingleScalarSinCos (
localB -> bzklm5kboi_idx_1 , & localB -> esrcrqipve_idx_1 , & localB ->
ewl1hdfaxi_idx_1 ) ; muSingleScalarSinCos ( localB -> jhtkvlotcj_hv2ho1zopz ,
& localB -> esrcrqipve_idx_2 , & localB -> ewl1hdfaxi_idx_2 ) ; localB ->
jjbahtdunb_cxarnvbvui [ 0 ] = localB -> oru2xh2cyl_idx_1 * localB ->
ewl1hdfaxi_idx_1 ; localB -> etwxnro2ri_ezqlmfzvpq = localB ->
esrcrqipve_idx_1 * localB -> esrcrqipve_idx_2 ; localB ->
jjbahtdunb_cxarnvbvui [ 1 ] = localB -> etwxnro2ri_ezqlmfzvpq * localB ->
oru2xh2cyl_idx_1 - localB -> oru2xh2cyl_idx_0 * localB -> ewl1hdfaxi_idx_2 ;
localB -> a0zzfabdmg_bjvjhhzy4i = localB -> esrcrqipve_idx_1 * localB ->
ewl1hdfaxi_idx_2 ; localB -> jjbahtdunb_cxarnvbvui [ 2 ] = localB ->
a0zzfabdmg_bjvjhhzy4i * localB -> oru2xh2cyl_idx_1 + localB ->
oru2xh2cyl_idx_0 * localB -> esrcrqipve_idx_2 ; localB ->
jjbahtdunb_cxarnvbvui [ 3 ] = localB -> oru2xh2cyl_idx_0 * localB ->
ewl1hdfaxi_idx_1 ; localB -> jjbahtdunb_cxarnvbvui [ 4 ] = localB ->
etwxnro2ri_ezqlmfzvpq * localB -> oru2xh2cyl_idx_0 + localB ->
oru2xh2cyl_idx_1 * localB -> ewl1hdfaxi_idx_2 ; localB ->
jjbahtdunb_cxarnvbvui [ 5 ] = localB -> a0zzfabdmg_bjvjhhzy4i * localB ->
oru2xh2cyl_idx_0 - localB -> oru2xh2cyl_idx_1 * localB -> esrcrqipve_idx_2 ;
localB -> jjbahtdunb_cxarnvbvui [ 6 ] = - localB -> esrcrqipve_idx_1 ; localB
-> jjbahtdunb_cxarnvbvui [ 7 ] = localB -> ewl1hdfaxi_idx_1 * localB ->
esrcrqipve_idx_2 ; localB -> jjbahtdunb_cxarnvbvui [ 8 ] = localB ->
ewl1hdfaxi_idx_1 * localB -> ewl1hdfaxi_idx_2 ; localB ->
l2nlpva2j1_c0dok3111h = ( localB -> h3hwnlathw_bsqwvugooi <= localP -> P_32 )
; localB -> iqocmhdfin_ctvw0tpkon = ( ( localB -> lan2dv1qbd_idx_0 != localP
-> P_33 ) || ( localB -> eb5vjpyuav_bnlywzniup != localP -> P_34 ) ) ; for (
localB -> i = 0 ; localB -> i < 3 ; localB -> i ++ ) { localB ->
aq23pmjfqt_pbm3vprmfu [ localB -> i ] = localB -> p2nu5irp4m_g1smspu5ke [
localB -> i ] - ( ( localB -> jjbahtdunb_cxarnvbvui [ localB -> i + 3 ] *
localP -> P_92 [ 1 ] + localB -> jjbahtdunb_cxarnvbvui [ localB -> i ] *
localP -> P_92 [ 0 ] ) + localB -> jjbahtdunb_cxarnvbvui [ localB -> i + 6 ]
* localP -> P_92 [ 2 ] ) ; } localB -> a55imxpels [ 0 ] = ( real32_T ) (
localP -> P_65 * localB -> aq23pmjfqt_pbm3vprmfu [ 0 ] ) * ( real32_T )
localB -> iqocmhdfin_ctvw0tpkon * ( real32_T ) localB ->
l2nlpva2j1_c0dok3111h ; localB -> a55imxpels [ 1 ] = ( real32_T ) ( localP ->
P_65 * localB -> aq23pmjfqt_pbm3vprmfu [ 1 ] ) * ( real32_T ) localB ->
iqocmhdfin_ctvw0tpkon * ( real32_T ) localB -> l2nlpva2j1_c0dok3111h ; if (
localP -> P_221 ) { for ( localB -> i = 0 ; localB -> i < 4 ; localB -> i ++
) { for ( localB -> cff = 0 ; localB -> cff < 4 ; localB -> cff ++ ) { localB
-> hi5gqbqjyq_cl54gopm0x [ localB -> i + ( localB -> cff << 2 ) ] = ( (
localB -> fb1afzxcm2_mbvzarwird [ localB -> i + 4 ] * localB ->
fb1afzxcm2_mbvzarwird [ localB -> cff + 4 ] + localB -> fb1afzxcm2_mbvzarwird
[ localB -> i ] * localB -> fb1afzxcm2_mbvzarwird [ localB -> cff ] ) +
localB -> fb1afzxcm2_mbvzarwird [ localB -> i + 8 ] * localB ->
fb1afzxcm2_mbvzarwird [ localB -> cff + 8 ] ) + localB ->
fb1afzxcm2_mbvzarwird [ localB -> i + 12 ] * localB -> fb1afzxcm2_mbvzarwird
[ localB -> cff + 12 ] ; } } } else { for ( localB -> i = 0 ; localB -> i < 4
; localB -> i ++ ) { for ( localB -> cff = 0 ; localB -> cff < 4 ; localB ->
cff ++ ) { localB -> hi5gqbqjyq_cl54gopm0x [ localB -> i + ( localB -> cff <<
2 ) ] = localB -> fb1afzxcm2_mbvzarwird [ ( localB -> cff << 2 ) + localB ->
i ] ; } } } localB -> f2qgfhnyjz_fqdqrf4qbc [ 0 ] = localB ->
oy1omazh2e_o4f35lbcvx [ 0 ] ; localB -> f2qgfhnyjz_fqdqrf4qbc [ 1 ] = localB
-> oy1omazh2e_o4f35lbcvx [ 1 ] ; localB -> f2qgfhnyjz_fqdqrf4qbc [ 2 ] =
localB -> oy1omazh2e_o4f35lbcvx [ 2 ] ; localB -> f2qgfhnyjz_fqdqrf4qbc [ 3 ]
= localB -> oy1omazh2e_o4f35lbcvx [ 3 ] ; for ( localB -> i = 0 ; localB -> i
<= 0 ; localB -> i += 4 ) { _mm_storeu_ps ( & localB -> oy1omazh2e_o4f35lbcvx
[ localB -> i ] , _mm_add_ps ( _mm_mul_ps ( _mm_loadu_ps ( & localP -> P_195
[ localB -> i + 12 ] ) , _mm_set1_ps ( localB -> f2qgfhnyjz_fqdqrf4qbc [ 3 ]
) ) , _mm_add_ps ( _mm_mul_ps ( _mm_loadu_ps ( & localP -> P_195 [ localB ->
i + 8 ] ) , _mm_set1_ps ( localB -> f2qgfhnyjz_fqdqrf4qbc [ 2 ] ) ) ,
_mm_add_ps ( _mm_mul_ps ( _mm_loadu_ps ( & localP -> P_195 [ localB -> i + 4
] ) , _mm_set1_ps ( localB -> f2qgfhnyjz_fqdqrf4qbc [ 1 ] ) ) , _mm_add_ps (
_mm_mul_ps ( _mm_loadu_ps ( & localP -> P_195 [ localB -> i ] ) , _mm_set1_ps
( localB -> f2qgfhnyjz_fqdqrf4qbc [ 0 ] ) ) , _mm_set1_ps ( 0.0F ) ) ) ) ) )
; } localB -> oru2xh2cyl_idx_0 = localB -> a55imxpels [ 0 ] ; localB ->
oru2xh2cyl_idx_1 = localB -> a55imxpels [ 1 ] ; for ( localB -> i = 0 ;
localB -> i <= 0 ; localB -> i += 4 ) { _mm_storeu_ps ( & localB ->
h0lde0msdj_nyxm0bsxsn [ localB -> i ] , _mm_add_ps ( _mm_mul_ps (
_mm_loadu_ps ( & localP -> P_196 [ localB -> i + 4 ] ) , _mm_set1_ps ( localB
-> a55imxpels [ 1 ] ) ) , _mm_add_ps ( _mm_mul_ps ( _mm_loadu_ps ( & localP
-> P_196 [ localB -> i ] ) , _mm_set1_ps ( localB -> a55imxpels [ 0 ] ) ) ,
_mm_set1_ps ( 0.0F ) ) ) ) ; } localB -> e2teotczdh_o2tow3gxzm = localB ->
pu4zoonf1h_p5h3gwuwqg ; if ( localB -> e2teotczdh_o2tow3gxzm ) { if ( !
localDW -> kh1khihcrt ) { if ( rtmGetTaskTime ( accn4cnket , 0 ) !=
rtmGetTStart ( accn4cnket ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
accn4cnket -> _mdlRefSfcnS ) ; } localDW -> kh1khihcrt = true ; } for (
localB -> i = 0 ; localB -> i < 2 ; localB -> i ++ ) { localB ->
bjps1hfvua_guugdwf2m3 [ localB -> i ] = ( ( localP -> P_197 [ localB -> i + 2
] * localB -> f2qgfhnyjz_fqdqrf4qbc [ 1 ] + localP -> P_197 [ localB -> i ] *
localB -> f2qgfhnyjz_fqdqrf4qbc [ 0 ] ) + localP -> P_197 [ localB -> i + 4 ]
* localB -> f2qgfhnyjz_fqdqrf4qbc [ 2 ] ) + localP -> P_197 [ localB -> i + 6
] * localB -> f2qgfhnyjz_fqdqrf4qbc [ 3 ] ; } localB -> h3hwnlathw_bsqwvugooi
= localB -> mrrvozc1qc_dhmrxtyqop [ 0 ] - ( ( localP -> P_198 [ 0 ] * localB
-> oru2xh2cyl_idx_0 + localP -> P_198 [ 2 ] * localB -> oru2xh2cyl_idx_1 ) +
localB -> bjps1hfvua_guugdwf2m3 [ 0 ] ) ; localB -> hpc3d2iong_idx_0 = localB
-> mrrvozc1qc_dhmrxtyqop [ 1 ] - ( ( localP -> P_198 [ 1 ] * localB ->
oru2xh2cyl_idx_0 + localP -> P_198 [ 3 ] * localB -> oru2xh2cyl_idx_1 ) +
localB -> bjps1hfvua_guugdwf2m3 [ 1 ] ) ; for ( localB -> i = 0 ; localB -> i
<= 0 ; localB -> i += 4 ) { _mm_storeu_ps ( & localB -> adokisptgo [ localB
-> i ] , _mm_set1_ps ( 0.0F ) ) ; tmp_m = _mm_loadu_ps ( & localB ->
bgjnlzeaxl [ localB -> i ] ) ; tmp_g = _mm_loadu_ps ( & localB -> adokisptgo
[ localB -> i ] ) ; _mm_storeu_ps ( & localB -> adokisptgo [ localB -> i ] ,
_mm_add_ps ( _mm_mul_ps ( tmp_m , _mm_set1_ps ( localB ->
h3hwnlathw_bsqwvugooi ) ) , tmp_g ) ) ; tmp_m = _mm_loadu_ps ( & localB ->
bgjnlzeaxl [ localB -> i + 4 ] ) ; tmp_g = _mm_loadu_ps ( & localB ->
adokisptgo [ localB -> i ] ) ; _mm_storeu_ps ( & localB -> adokisptgo [
localB -> i ] , _mm_add_ps ( _mm_mul_ps ( tmp_m , _mm_set1_ps ( localB ->
hpc3d2iong_idx_0 ) ) , tmp_g ) ) ; } srUpdateBC ( localDW -> mfifybuxty ) ; }
else if ( localDW -> kh1khihcrt ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ;
localB -> adokisptgo [ 0 ] = localP -> P_102 ; localB -> adokisptgo [ 1 ] =
localP -> P_102 ; localB -> adokisptgo [ 2 ] = localP -> P_102 ; localB ->
adokisptgo [ 3 ] = localP -> P_102 ; localDW -> kh1khihcrt = false ; } localB
-> ee4exjimpd [ 0 ] = ( localB -> h0lde0msdj_nyxm0bsxsn [ 0 ] + localB ->
oy1omazh2e_o4f35lbcvx [ 0 ] ) + localB -> adokisptgo [ 0 ] ; localB ->
ee4exjimpd [ 1 ] = ( localB -> h0lde0msdj_nyxm0bsxsn [ 1 ] + localB ->
oy1omazh2e_o4f35lbcvx [ 1 ] ) + localB -> adokisptgo [ 1 ] ; localB ->
ee4exjimpd [ 2 ] = ( localB -> h0lde0msdj_nyxm0bsxsn [ 2 ] + localB ->
oy1omazh2e_o4f35lbcvx [ 2 ] ) + localB -> adokisptgo [ 2 ] ; localB ->
ee4exjimpd [ 3 ] = ( localB -> h0lde0msdj_nyxm0bsxsn [ 3 ] + localB ->
oy1omazh2e_o4f35lbcvx [ 3 ] ) + localB -> adokisptgo [ 3 ] ; localB ->
djz1b20dzo_mdoasc5av4 = localB -> ivnkv1flcv_nvsvtgkap4 + localP -> P_213 ;
if ( localB -> djz1b20dzo_mdoasc5av4 > localP -> P_48 ) { localB ->
cohlel0sic = localP -> P_214 ; } else { localB -> cohlel0sic = localB ->
djz1b20dzo_mdoasc5av4 ; } muSingleScalarSinCos ( localB ->
ljo1dpaub4_lnjdk5wtww , & localB -> h3hwnlathw_bsqwvugooi , & localB ->
hpc3d2iong_idx_0 ) ; muSingleScalarSinCos ( localB -> bzklm5kboi_idx_1 , &
localB -> ljo1dpaub4_lnjdk5wtww , & localB -> hpc3d2iong_idx_1 ) ;
muSingleScalarSinCos ( localB -> jhtkvlotcj_hv2ho1zopz , & localB ->
kkuvtjkaau_idx_2 , & localB -> hpc3d2iong_idx_2 ) ; localB ->
jjbahtdunb_cxarnvbvui [ 0 ] = localB -> hpc3d2iong_idx_0 * localB ->
hpc3d2iong_idx_1 ; localB -> etwxnro2ri_ezqlmfzvpq = localB ->
ljo1dpaub4_lnjdk5wtww * localB -> kkuvtjkaau_idx_2 ; localB ->
jjbahtdunb_cxarnvbvui [ 1 ] = localB -> etwxnro2ri_ezqlmfzvpq * localB ->
hpc3d2iong_idx_0 - localB -> h3hwnlathw_bsqwvugooi * localB ->
hpc3d2iong_idx_2 ; localB -> a0zzfabdmg_bjvjhhzy4i = localB ->
ljo1dpaub4_lnjdk5wtww * localB -> hpc3d2iong_idx_2 ; localB ->
jjbahtdunb_cxarnvbvui [ 2 ] = localB -> a0zzfabdmg_bjvjhhzy4i * localB ->
hpc3d2iong_idx_0 + localB -> h3hwnlathw_bsqwvugooi * localB ->
kkuvtjkaau_idx_2 ; localB -> jjbahtdunb_cxarnvbvui [ 3 ] = localB ->
h3hwnlathw_bsqwvugooi * localB -> hpc3d2iong_idx_1 ; localB ->
jjbahtdunb_cxarnvbvui [ 4 ] = localB -> etwxnro2ri_ezqlmfzvpq * localB ->
h3hwnlathw_bsqwvugooi + localB -> hpc3d2iong_idx_0 * localB ->
hpc3d2iong_idx_2 ; localB -> jjbahtdunb_cxarnvbvui [ 5 ] = localB ->
a0zzfabdmg_bjvjhhzy4i * localB -> h3hwnlathw_bsqwvugooi - localB ->
hpc3d2iong_idx_0 * localB -> kkuvtjkaau_idx_2 ; localB ->
jjbahtdunb_cxarnvbvui [ 6 ] = - localB -> ljo1dpaub4_lnjdk5wtww ; localB ->
jjbahtdunb_cxarnvbvui [ 7 ] = localB -> hpc3d2iong_idx_1 * localB ->
kkuvtjkaau_idx_2 ; localB -> jjbahtdunb_cxarnvbvui [ 8 ] = localB ->
hpc3d2iong_idx_1 * localB -> hpc3d2iong_idx_2 ; localB -> oru2xh2cyl_idx_0 =
localB -> gfpexfdgco [ 0 ] ; localB -> oru2xh2cyl_idx_1 = localB ->
gfpexfdgco [ 1 ] ; for ( localB -> i = 0 ; localB -> i < 3 ; localB -> i ++ )
{ localB -> plbhaqnn1y [ localB -> i ] = 0.0F ; localB -> plbhaqnn1y [ localB
-> i ] += localB -> jjbahtdunb_cxarnvbvui [ 3 * localB -> i ] * localB ->
oru2xh2cyl_idx_0 ; localB -> plbhaqnn1y [ localB -> i ] += localB ->
jjbahtdunb_cxarnvbvui [ 3 * localB -> i + 1 ] * localB -> oru2xh2cyl_idx_1 ;
localB -> plbhaqnn1y [ localB -> i ] += localB -> jjbahtdunb_cxarnvbvui [ 3 *
localB -> i + 2 ] * localB -> cqw0qrp4eu_idx_2 ; } } void otjykwnhb3TID2 (
eo4bbte2ey * localB , nu4qaxumex * localP ) { int_T tid = 0 ; real_T
jfud24tomz ; real32_T i5rkleo3m4 [ 4 ] ; real32_T kgl3ocgllz ; real32_T
j0lyzs1mve ; real32_T aj0c5n325l ; real32_T j1g4u2c3yv [ 16 ] ; int32_T i ;
memcpy ( & localB -> evofcbwaww [ 0 ] , & localP -> P_167 [ 0 ] , sizeof (
real32_T ) << 4U ) ; localB -> mzcro4caxu [ 0 ] = localP -> P_74 [ 0 ] ;
localB -> mzcro4caxu [ 1 ] = localP -> P_74 [ 1 ] ; localB -> jhtkvlotcj [ 0
] = localP -> P_75 [ 0 ] ; localB -> jhtkvlotcj [ 1 ] = localP -> P_75 [ 1 ]
; jfud24tomz = 0.0 ; localB -> iqocmhdfin [ 0 ] = localP -> P_73 [ 0 ] ;
localB -> iqocmhdfin [ 1 ] = localP -> P_73 [ 1 ] ; localB -> iqocmhdfin [ 2
] = localP -> P_73 [ 2 ] ; localB -> iqocmhdfin [ 3 ] = localP -> P_73 [ 3 ]
; i5rkleo3m4 [ 0 ] = ( real32_T ) localP -> P_77 [ 0 ] ; i5rkleo3m4 [ 1 ] = (
real32_T ) localP -> P_77 [ 1 ] ; i5rkleo3m4 [ 2 ] = ( real32_T ) localP ->
P_77 [ 2 ] ; i5rkleo3m4 [ 3 ] = ( real32_T ) localP -> P_77 [ 3 ] ; localB ->
lqqrqnfg0k [ 0 ] = localP -> P_83 [ 0 ] ; localB -> lqqrqnfg0k [ 1 ] = localP
-> P_83 [ 1 ] ; localB -> nuasakb4gb [ 0 ] = ( real32_T ) localP -> P_86 [ 0
] ; localB -> nuasakb4gb [ 1 ] = ( real32_T ) localP -> P_86 [ 1 ] ; localB
-> hwxrjq0it0 [ 0 ] = ( real32_T ) localP -> P_87 [ 0 ] ; localB ->
hwxrjq0it0 [ 1 ] = ( real32_T ) localP -> P_87 [ 1 ] ; kgl3ocgllz = 0.0F ;
localB -> bmrdaxfgpr [ 0 ] = ( real32_T ) localP -> P_85 [ 0 ] ; localB ->
bmrdaxfgpr [ 1 ] = ( real32_T ) localP -> P_85 [ 1 ] ; localB -> bmrdaxfgpr [
2 ] = ( real32_T ) localP -> P_85 [ 2 ] ; localB -> bmrdaxfgpr [ 3 ] = (
real32_T ) localP -> P_85 [ 3 ] ; localB -> fqjnqqkpgy [ 0 ] = localP ->
P_181 [ 0 ] ; localB -> fqjnqqkpgy [ 1 ] = localP -> P_181 [ 1 ] ; localB ->
gj4cf0tyj5 [ 0 ] = ( real32_T ) localP -> P_89 [ 0 ] ; localB -> gj4cf0tyj5 [
1 ] = ( real32_T ) localP -> P_89 [ 1 ] ; localB -> j4qe4nfjsv [ 0 ] = (
real32_T ) localP -> P_90 [ 0 ] ; localB -> j4qe4nfjsv [ 1 ] = ( real32_T )
localP -> P_90 [ 1 ] ; j0lyzs1mve = 0.0F ; localB -> bsmav2qoqf [ 0 ] = (
real32_T ) localP -> P_88 [ 0 ] ; localB -> bsmav2qoqf [ 1 ] = ( real32_T )
localP -> P_88 [ 1 ] ; localB -> bsmav2qoqf [ 2 ] = ( real32_T ) localP ->
P_88 [ 2 ] ; localB -> bsmav2qoqf [ 3 ] = ( real32_T ) localP -> P_88 [ 3 ] ;
localB -> oaihmoohg4 [ 0 ] = localP -> P_192 [ 0 ] ; localB -> oaihmoohg4 [ 1
] = localP -> P_192 [ 1 ] ; for ( i = 0 ; i < 8 ; i ++ ) { localB ->
bgjnlzeaxl [ i ] = ( real32_T ) localP -> P_94 [ i ] ; } for ( i = 0 ; i < 8
; i ++ ) { localB -> o340jloaui [ i ] = ( real32_T ) localP -> P_95 [ i ] ; }
aj0c5n325l = 0.0F ; for ( i = 0 ; i < 16 ; i ++ ) { localB ->
fb1afzxcm2_mbvzarwird [ i ] = ( real32_T ) localP -> P_93 [ i ] ; } memcpy (
& j1g4u2c3yv [ 0 ] , & localP -> P_199 [ 0 ] , sizeof ( real32_T ) << 4U ) ;
localB -> dmeohakamk [ 0 ] = localP -> P_205 [ 0 ] ; localB -> dmeohakamk [ 1
] = localP -> P_205 [ 1 ] ; localB -> dmeohakamk [ 2 ] = localP -> P_205 [ 2
] ; localB -> dmeohakamk [ 3 ] = localP -> P_205 [ 3 ] ; } void lsjhvu4egy (
eo4bbte2ey * localB , dmp1xsadgu * localDW , nu4qaxumex * localP ) { int32_T
k ; int32_T memOffset ; localDW -> dq5lalhp1e = ( int8_T ) localP -> P_222 ;
localDW -> mi4mocbazh = localB -> nnthqeo0xb [ 0 ] ; localDW -> de4yc1bkky =
false ; localDW -> b3fmbw5stg [ 0 ] += localP -> P_106 * localB -> plbhaqnn1y
[ 0 ] ; localDW -> mtonzezz2z [ 0 ] = localB -> foobajajui [ 0 ] ; localDW ->
aq2aymvaio [ 2 ] = localDW -> aq2aymvaio [ 1 ] ; localDW -> ddv3ztj2wp [ 2 ]
= localDW -> ddv3ztj2wp [ 1 ] ; localDW -> b3fmbw5stg [ 1 ] += localP ->
P_106 * localB -> plbhaqnn1y [ 1 ] ; localDW -> mtonzezz2z [ 1 ] = localB ->
foobajajui [ 1 ] ; localDW -> aq2aymvaio [ 1 ] = localDW -> aq2aymvaio [ 0 ]
; localDW -> ddv3ztj2wp [ 1 ] = localDW -> ddv3ztj2wp [ 0 ] ; localDW ->
aq2aymvaio [ 0 ] = localDW -> orkq4iljgu ; localDW -> ddv3ztj2wp [ 0 ] =
localDW -> f2ynnmexgv ; localDW -> dzwopklw3c += localP -> P_113 * localB ->
prfrp52vqr ; localDW -> bbkjtf4kuy -- ; if ( localDW -> bbkjtf4kuy < 0 ) {
localDW -> bbkjtf4kuy = 4 ; } localDW -> d4fp3a2mpz [ localDW -> bbkjtf4kuy ]
= localB -> bwhquruhg4 [ 0 ] ; localDW -> d4fp3a2mpz [ localDW -> bbkjtf4kuy
+ 5 ] = localB -> bwhquruhg4 [ 1 ] ; localDW -> d4fp3a2mpz [ localDW ->
bbkjtf4kuy + 10 ] = localB -> bwhquruhg4 [ 2 ] ; localDW -> jd3dqtmo2p =
false ; localDW -> f1jy25gy04 = false ; localDW -> fl0vv44tbs [ 0 ] = localB
-> gusraudqef [ 0 ] ; localDW -> as5a0ikbk1 [ 0 ] = localB -> deejr5w5jc [ 0
] ; localDW -> fl0vv44tbs [ 1 ] = localB -> gusraudqef [ 1 ] ; localDW ->
as5a0ikbk1 [ 1 ] = localB -> deejr5w5jc [ 1 ] ; localDW -> l3lcputuyl =
localB -> cohlel0sic ; localDW -> ncgo1wegzg = localDW -> b1nmhkw4zo ;
localDW -> mirtkskmtr = localDW -> n0mydijbcx ; localDW -> pjgu33zeph =
localB -> aysvaohtl0 ; localDW -> gdn4qfzvsk = false ; localDW -> jduomia1pb
[ 4 ] = localDW -> jduomia1pb [ 3 ] ; localDW -> od5c00niot [ 0 ] = localB ->
ee4exjimpd [ 0 ] ; localDW -> jduomia1pb [ 3 ] = localDW -> jduomia1pb [ 2 ]
; localDW -> od5c00niot [ 1 ] = localB -> ee4exjimpd [ 1 ] ; localDW ->
jduomia1pb [ 2 ] = localDW -> jduomia1pb [ 1 ] ; localDW -> od5c00niot [ 2 ]
= localB -> ee4exjimpd [ 2 ] ; localDW -> jduomia1pb [ 1 ] = localDW ->
jduomia1pb [ 0 ] ; localDW -> od5c00niot [ 3 ] = localB -> ee4exjimpd [ 3 ] ;
localDW -> jduomia1pb [ 0 ] = localDW -> iwg03owvar ; for ( k = 0 ; k < 2 ; k
++ ) { memOffset = k * 5 ; localDW -> dqfv1m130o [ memOffset + 4 ] = localDW
-> dqfv1m130o [ memOffset + 3 ] ; localDW -> dqfv1m130o [ memOffset + 3 ] =
localDW -> dqfv1m130o [ memOffset + 2 ] ; localDW -> dqfv1m130o [ memOffset +
2 ] = localDW -> dqfv1m130o [ memOffset + 1 ] ; localDW -> dqfv1m130o [
memOffset + 1 ] = localDW -> dqfv1m130o [ memOffset ] ; localDW -> dqfv1m130o
[ memOffset ] = localDW -> mf2pp40f5v [ k ] ; localDW -> meognsjf1t [ k ] =
localB -> lgxyarf22c [ k ] ; localDW -> gcgpru4rcb [ k ] = localB ->
gfpexfdgco [ k ] ; localDW -> peklmaellz [ k ] = localB -> gfpexfdgco [ k ] ;
} localDW -> gaxgdudnvc = localB -> ao41flvyb1 ; localDW -> bsetqjfri4 +=
localP -> P_136 * localB -> hzqctpxfat ; if ( localDW -> bsetqjfri4 >= localP
-> P_138 ) { localDW -> bsetqjfri4 = localP -> P_138 ; } else if ( localDW ->
bsetqjfri4 <= localP -> P_139 ) { localDW -> bsetqjfri4 = localP -> P_139 ; }
localDW -> fpr1qi0oiw = ( int8_T ) localB -> aagcy0d5ye ; localDW ->
immlnclh1f = localB -> fb1afzxcm2 ; localDW -> pjymztciyn = localB ->
g3zvud4ysq ; localDW -> ebmc4lyjdd [ 0 ] = localB -> dcpk0jldla [ 0 ] ;
localDW -> ebmc4lyjdd [ 1 ] = localB -> dcpk0jldla [ 1 ] ; localDW ->
ebmc4lyjdd [ 2 ] = localB -> dcpk0jldla [ 2 ] ; localDW -> dsjbzv2lh4 [ 0 ]
+= localP -> P_146 * localB -> bqtz4lp0uq [ 0 ] ; localDW -> gixvkpnpus [ 0 ]
= localDW -> pwlp5beuqs [ 0 ] ; localDW -> ow5xb5ovt0 [ 0 ] += localP ->
P_150 * localB -> jlk5l1nxst [ 0 ] ; localDW -> krs1cvkxzk [ 0 ] += localP ->
P_151 * localB -> c1mdnmjvwk [ 0 ] ; localDW -> dsjbzv2lh4 [ 1 ] += localP ->
P_146 * localB -> bqtz4lp0uq [ 1 ] ; localDW -> gixvkpnpus [ 1 ] = localDW ->
pwlp5beuqs [ 1 ] ; localDW -> ow5xb5ovt0 [ 1 ] += localP -> P_150 * localB ->
jlk5l1nxst [ 1 ] ; localDW -> krs1cvkxzk [ 1 ] += localP -> P_151 * localB ->
c1mdnmjvwk [ 1 ] ; localDW -> c4kiksmhh2 += localP -> P_155 * localB ->
a2spex0c5a ; localDW -> dxm3w2i52x = localB -> cy2taauytx ; localDW ->
bw2ribqmwm = localB -> imrz1volmu ; } void eyt3piuhqz ( ipf5ube4r0 * const
accn4cnket , dmp1xsadgu * localDW ) { if ( ( ssGetSimMode ( accn4cnket ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( accn4cnket -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> puq03cpvbg . AQHandles ) { sdiTerminateStreaming ( & localDW ->
puq03cpvbg . AQHandles ) ; } } } static void gqzro24tmt ( const boolean_T
varargin_1 [ 19200 ] , boolean_T varargout_1 [ 19200 ] ) { real32_T magmax ;
int8_T b_idx ; static const real_T b [ 2 ] = { 120.0 , 160.0 } ; static const
real_T c [ 2 ] = { 132.0 , 160.0 } ; static const real_T d [ 13 ] = {
3.4813359214923059E-5 , 0.00054457256285105158 , 0.0051667606200595222 ,
0.029732654490475543 , 0.10377716120747747 , 0.21969625200024598 ,
0.28209557151935094 , 0.21969625200024598 , 0.10377716120747747 ,
0.029732654490475543 , 0.0051667606200595222 , 0.00054457256285105158 ,
3.4813359214923059E-5 } ; static const real_T e [ 2 ] = { 13.0 , 1.0 } ;
static const real_T h [ 2 ] = { 120.0 , 160.0 } ; static const real_T j [ 2 ]
= { 120.0 , 172.0 } ; static const real_T k [ 13 ] = { 0.0020299751839417137
, 0.0102182810143517 , 0.058116735860084034 , 0.19634433732941292 ,
0.37823877042972087 , 0.35505190018248872 , 0.0 , - 0.35505190018248872 , -
0.37823877042972087 , - 0.19634433732941292 , - 0.058116735860084034 , -
0.0102182810143517 , - 0.0020299751839417137 } ; static const real_T l [ 2 ]
= { 1.0 , 13.0 } ; static const real_T p [ 2 ] = { 120.0 , 160.0 } ; static
const real_T q [ 2 ] = { 120.0 , 172.0 } ; static const real_T r [ 13 ] = {
3.4813359214923059E-5 , 0.00054457256285105158 , 0.0051667606200595222 ,
0.029732654490475543 , 0.10377716120747747 , 0.21969625200024598 ,
0.28209557151935094 , 0.21969625200024598 , 0.10377716120747747 ,
0.029732654490475543 , 0.0051667606200595222 , 0.00054457256285105158 ,
3.4813359214923059E-5 } ; static const real_T s [ 2 ] = { 1.0 , 13.0 } ;
static const real_T w [ 2 ] = { 120.0 , 160.0 } ; static const real_T x [ 2 ]
= { 132.0 , 160.0 } ; static const real_T y [ 13 ] = { 0.0020299751839417137
, 0.0102182810143517 , 0.058116735860084034 , 0.19634433732941292 ,
0.37823877042972087 , 0.35505190018248872 , 0.0 , - 0.35505190018248872 , -
0.37823877042972087 , - 0.19634433732941292 , - 0.058116735860084034 , -
0.0102182810143517 , - 0.0020299751839417137 } ; static const real_T ab [ 2 ]
= { 13.0 , 1.0 } ; real32_T c_idx ; static const real_T eb [ 2 ] = { 120.0 ,
160.0 } ; static const real_T fb [ 2 ] = { 120.0 , 160.0 } ; __m128 tmp ;
int32_T g_i ; int32_T i ; static const uint8_T gb [ 320 ] = { 1U , 1U , 1U ,
1U , 1U , 1U , 1U , 2U , 3U , 4U , 5U , 6U , 7U , 8U , 9U , 10U , 11U , 12U ,
13U , 14U , 15U , 16U , 17U , 18U , 19U , 20U , 21U , 22U , 23U , 24U , 25U ,
26U , 27U , 28U , 29U , 30U , 31U , 32U , 33U , 34U , 35U , 36U , 37U , 38U ,
39U , 40U , 41U , 42U , 43U , 44U , 45U , 46U , 47U , 48U , 49U , 50U , 51U ,
52U , 53U , 54U , 55U , 56U , 57U , 58U , 59U , 60U , 61U , 62U , 63U , 64U ,
65U , 66U , 67U , 68U , 69U , 70U , 71U , 72U , 73U , 74U , 75U , 76U , 77U ,
78U , 79U , 80U , 81U , 82U , 83U , 84U , 85U , 86U , 87U , 88U , 89U , 90U ,
91U , 92U , 93U , 94U , 95U , 96U , 97U , 98U , 99U , 100U , 101U , 102U ,
103U , 104U , 105U , 106U , 107U , 108U , 109U , 110U , 111U , 112U , 113U ,
114U , 115U , 116U , 117U , 118U , 119U , 120U , 120U , 120U , 120U , 120U ,
120U , 120U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
1U , 2U , 3U , 4U , 5U , 6U , 7U , 8U , 9U , 10U , 11U , 12U , 13U , 14U ,
15U , 16U , 17U , 18U , 19U , 20U , 21U , 22U , 23U , 24U , 25U , 26U , 27U ,
28U , 29U , 30U , 31U , 32U , 33U , 34U , 35U , 36U , 37U , 38U , 39U , 40U ,
41U , 42U , 43U , 44U , 45U , 46U , 47U , 48U , 49U , 50U , 51U , 52U , 53U ,
54U , 55U , 56U , 57U , 58U , 59U , 60U , 61U , 62U , 63U , 64U , 65U , 66U ,
67U , 68U , 69U , 70U , 71U , 72U , 73U , 74U , 75U , 76U , 77U , 78U , 79U ,
80U , 81U , 82U , 83U , 84U , 85U , 86U , 87U , 88U , 89U , 90U , 91U , 92U ,
93U , 94U , 95U , 96U , 97U , 98U , 99U , 100U , 101U , 102U , 103U , 104U ,
105U , 106U , 107U , 108U , 109U , 110U , 111U , 112U , 113U , 114U , 115U ,
116U , 117U , 118U , 119U , 120U , 121U , 122U , 123U , 124U , 125U , 126U ,
127U , 128U , 129U , 130U , 131U , 132U , 133U , 134U , 135U , 136U , 137U ,
138U , 139U , 140U , 141U , 142U , 143U , 144U , 145U , 146U , 147U , 148U ,
149U , 150U , 151U , 152U , 153U , 154U , 155U , 156U , 157U , 158U , 159U ,
160U } ; static const uint8_T hb [ 344 ] = { 1U , 2U , 3U , 4U , 5U , 6U , 7U
, 8U , 9U , 10U , 11U , 12U , 13U , 14U , 15U , 16U , 17U , 18U , 19U , 20U ,
21U , 22U , 23U , 24U , 25U , 26U , 27U , 28U , 29U , 30U , 31U , 32U , 33U ,
34U , 35U , 36U , 37U , 38U , 39U , 40U , 41U , 42U , 43U , 44U , 45U , 46U ,
47U , 48U , 49U , 50U , 51U , 52U , 53U , 54U , 55U , 56U , 57U , 58U , 59U ,
60U , 61U , 62U , 63U , 64U , 65U , 66U , 67U , 68U , 69U , 70U , 71U , 72U ,
73U , 74U , 75U , 76U , 77U , 78U , 79U , 80U , 81U , 82U , 83U , 84U , 85U ,
86U , 87U , 88U , 89U , 90U , 91U , 92U , 93U , 94U , 95U , 96U , 97U , 98U ,
99U , 100U , 101U , 102U , 103U , 104U , 105U , 106U , 107U , 108U , 109U ,
110U , 111U , 112U , 113U , 114U , 115U , 116U , 117U , 118U , 119U , 120U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 2U , 3U , 4U ,
5U , 6U , 7U , 8U , 9U , 10U , 11U , 12U , 13U , 14U , 15U , 16U , 17U , 18U
, 19U , 20U , 21U , 22U , 23U , 24U , 25U , 26U , 27U , 28U , 29U , 30U , 31U
, 32U , 33U , 34U , 35U , 36U , 37U , 38U , 39U , 40U , 41U , 42U , 43U , 44U
, 45U , 46U , 47U , 48U , 49U , 50U , 51U , 52U , 53U , 54U , 55U , 56U , 57U
, 58U , 59U , 60U , 61U , 62U , 63U , 64U , 65U , 66U , 67U , 68U , 69U , 70U
, 71U , 72U , 73U , 74U , 75U , 76U , 77U , 78U , 79U , 80U , 81U , 82U , 83U
, 84U , 85U , 86U , 87U , 88U , 89U , 90U , 91U , 92U , 93U , 94U , 95U , 96U
, 97U , 98U , 99U , 100U , 101U , 102U , 103U , 104U , 105U , 106U , 107U ,
108U , 109U , 110U , 111U , 112U , 113U , 114U , 115U , 116U , 117U , 118U ,
119U , 120U , 121U , 122U , 123U , 124U , 125U , 126U , 127U , 128U , 129U ,
130U , 131U , 132U , 133U , 134U , 135U , 136U , 137U , 138U , 139U , 140U ,
141U , 142U , 143U , 144U , 145U , 146U , 147U , 148U , 149U , 150U , 151U ,
152U , 153U , 154U , 155U , 156U , 157U , 158U , 159U , 160U , 160U , 160U ,
160U , 160U , 160U , 160U } ; for ( i = 0 ; i < 19200 ; i ++ ) { ksm0js2nhsy
. b_I [ i ] = varargin_1 [ i ] ; } for ( i = 0 ; i < 160 ; i ++ ) { for ( g_i
= 0 ; g_i < 132 ; g_i ++ ) { ksm0js2nhsy . a [ g_i + 132 * i ] = ksm0js2nhsy
. b_I [ ( ( gb [ i + 160 ] - 1 ) * 120 + gb [ g_i ] ) - 1 ] ; } }
ippfilter_real32 ( & ksm0js2nhsy . a [ 0 ] , & ksm0js2nhsy . dx [ 0 ] , & b [
0 ] , 2.0 , & c [ 0 ] , & d [ 0 ] , & e [ 0 ] , true ) ; for ( i = 0 ; i <
172 ; i ++ ) { for ( g_i = 0 ; g_i < 120 ; g_i ++ ) { ksm0js2nhsy . b_a [ g_i
+ 120 * i ] = ksm0js2nhsy . dx [ ( ( hb [ i + 172 ] - 1 ) * 120 + hb [ g_i ]
) - 1 ] ; } } ippfilter_real32 ( & ksm0js2nhsy . b_a [ 0 ] , & ksm0js2nhsy .
dx [ 0 ] , & h [ 0 ] , 2.0 , & j [ 0 ] , & k [ 0 ] , & l [ 0 ] , true ) ; for
( i = 0 ; i < 172 ; i ++ ) { for ( g_i = 0 ; g_i < 120 ; g_i ++ ) {
ksm0js2nhsy . b_a [ g_i + 120 * i ] = ksm0js2nhsy . b_I [ ( ( hb [ i + 172 ]
- 1 ) * 120 + hb [ g_i ] ) - 1 ] ; } } ippfilter_real32 ( & ksm0js2nhsy . b_a
[ 0 ] , & ksm0js2nhsy . b_I [ 0 ] , & p [ 0 ] , 2.0 , & q [ 0 ] , & r [ 0 ] ,
& s [ 0 ] , true ) ; for ( i = 0 ; i < 160 ; i ++ ) { for ( g_i = 0 ; g_i <
132 ; g_i ++ ) { ksm0js2nhsy . a [ g_i + 132 * i ] = ksm0js2nhsy . b_I [ ( (
gb [ i + 160 ] - 1 ) * 120 + gb [ g_i ] ) - 1 ] ; } } ippfilter_real32 ( &
ksm0js2nhsy . a [ 0 ] , & ksm0js2nhsy . b_I [ 0 ] , & w [ 0 ] , 2.0 , & x [ 0
] , & y [ 0 ] , & ab [ 0 ] , true ) ; ksm0js2nhsy . magGrad [ 0 ] =
muSingleScalarHypot ( ksm0js2nhsy . dx [ 0 ] , ksm0js2nhsy . b_I [ 0 ] ) ;
magmax = ksm0js2nhsy . magGrad [ 0 ] ; for ( i = 0 ; i < 19199 ; i ++ ) {
ksm0js2nhsy . magGrad [ i + 1 ] = muSingleScalarHypot ( ksm0js2nhsy . dx [ i
+ 1 ] , ksm0js2nhsy . b_I [ i + 1 ] ) ; magmax = muSingleScalarMax (
ksm0js2nhsy . magGrad [ i + 1 ] , magmax ) ; } if ( magmax > 0.0F ) { for ( i
= 0 ; i <= 19196 ; i += 4 ) { tmp = _mm_loadu_ps ( & ksm0js2nhsy . magGrad [
i ] ) ; _mm_storeu_ps ( & ksm0js2nhsy . magGrad [ i ] , _mm_div_ps ( tmp ,
_mm_set1_ps ( magmax ) ) ) ; } } ksm0js2nhsy . out_g1smspu5ke = 1.0 ;
getnumcores ( & ksm0js2nhsy . out_g1smspu5ke ) ; for ( i = 0 ; i < 64 ; i ++
) { ksm0js2nhsy . b_y_fqdqrf4qbc [ i ] = 0.0 ; } for ( i = 0 ; i < 19200 ; i
++ ) { magmax = ksm0js2nhsy . magGrad [ i ] ; if ( muSingleScalarIsNaN (
magmax ) ) { c_idx = 0.0F ; } else { c_idx = magmax * 63.0F + 0.5F ; } if (
c_idx > 63.0F ) { ksm0js2nhsy . b_y_fqdqrf4qbc [ 63 ] ++ ; } else if (
muSingleScalarIsInf ( magmax ) ) { ksm0js2nhsy . b_y_fqdqrf4qbc [ 63 ] ++ ; }
else { ksm0js2nhsy . b_y_fqdqrf4qbc [ ( int32_T ) c_idx ] ++ ; } }
ksm0js2nhsy . out_g1smspu5ke = 0.0 ; b_idx = 1 ; while ( ( ! ( ksm0js2nhsy .
out_g1smspu5ke > 13440.0 ) ) && ( b_idx <= 64 ) ) { ksm0js2nhsy .
out_g1smspu5ke += ksm0js2nhsy . b_y_fqdqrf4qbc [ b_idx - 1 ] ; b_idx ++ ; }
ksm0js2nhsy . highThreshTemp_g2mlkqadfk = ( ( real_T ) b_idx - 1.0 ) / 64.0 ;
if ( ( b_idx > 64 ) && ( ! ( ksm0js2nhsy . out_g1smspu5ke > 13440.0 ) ) ) { }
else { ksm0js2nhsy . highThresh_data_idx_0_merlcviukg = ksm0js2nhsy .
highThreshTemp_g2mlkqadfk ; ksm0js2nhsy . lowThresh_data_idx_0_nz4o0shxby =
0.4 * ksm0js2nhsy . highThreshTemp_g2mlkqadfk ; } memset ( & ksm0js2nhsy .
mask [ 0 ] , 0 , 19200U * sizeof ( boolean_T ) ) ;
cannythresholding_real32_tbb ( & ksm0js2nhsy . dx [ 0 ] , & ksm0js2nhsy . b_I
[ 0 ] , & ksm0js2nhsy . magGrad [ 0 ] , & eb [ 0 ] , ksm0js2nhsy .
lowThresh_data_idx_0_nz4o0shxby , & ksm0js2nhsy . mask [ 0 ] ) ; for ( i = 0
; i < 19200 ; i ++ ) { varargout_1 [ i ] = ( ksm0js2nhsy . magGrad [ i ] >
ksm0js2nhsy . highThresh_data_idx_0_merlcviukg ) ; } ippreconstruct_uint8 ( (
uint8_T * ) & varargout_1 [ 0 ] , ( uint8_T * ) & ksm0js2nhsy . mask [ 0 ] ,
& fb [ 0 ] , 2.0 ) ; } static void gqzro24tmtz ( const boolean_T varargin_1 [
961 ] , boolean_T varargout_1 [ 961 ] ) { real32_T magmax ; int8_T b_idx ;
static const real_T b [ 2 ] = { 31.0 , 31.0 } ; static const real_T c [ 2 ] =
{ 43.0 , 31.0 } ; static const real_T d [ 13 ] = { 3.4813359214923059E-5 ,
0.00054457256285105158 , 0.0051667606200595222 , 0.029732654490475543 ,
0.10377716120747747 , 0.21969625200024598 , 0.28209557151935094 ,
0.21969625200024598 , 0.10377716120747747 , 0.029732654490475543 ,
0.0051667606200595222 , 0.00054457256285105158 , 3.4813359214923059E-5 } ;
static const real_T e [ 2 ] = { 13.0 , 1.0 } ; static const real_T h [ 2 ] =
{ 31.0 , 31.0 } ; static const real_T j [ 2 ] = { 31.0 , 43.0 } ; static
const real_T k [ 13 ] = { 0.0020299751839417137 , 0.0102182810143517 ,
0.058116735860084034 , 0.19634433732941292 , 0.37823877042972087 ,
0.35505190018248872 , 0.0 , - 0.35505190018248872 , - 0.37823877042972087 , -
0.19634433732941292 , - 0.058116735860084034 , - 0.0102182810143517 , -
0.0020299751839417137 } ; static const real_T l [ 2 ] = { 1.0 , 13.0 } ;
static const real_T p [ 2 ] = { 31.0 , 31.0 } ; static const real_T q [ 2 ] =
{ 31.0 , 43.0 } ; static const real_T r [ 13 ] = { 3.4813359214923059E-5 ,
0.00054457256285105158 , 0.0051667606200595222 , 0.029732654490475543 ,
0.10377716120747747 , 0.21969625200024598 , 0.28209557151935094 ,
0.21969625200024598 , 0.10377716120747747 , 0.029732654490475543 ,
0.0051667606200595222 , 0.00054457256285105158 , 3.4813359214923059E-5 } ;
static const real_T s [ 2 ] = { 1.0 , 13.0 } ; static const real_T w [ 2 ] =
{ 31.0 , 31.0 } ; static const real_T x [ 2 ] = { 43.0 , 31.0 } ; static
const real_T y [ 13 ] = { 0.0020299751839417137 , 0.0102182810143517 ,
0.058116735860084034 , 0.19634433732941292 , 0.37823877042972087 ,
0.35505190018248872 , 0.0 , - 0.35505190018248872 , - 0.37823877042972087 , -
0.19634433732941292 , - 0.058116735860084034 , - 0.0102182810143517 , -
0.0020299751839417137 } ; static const real_T ab [ 2 ] = { 13.0 , 1.0 } ;
real32_T c_idx ; static const real_T eb [ 2 ] = { 31.0 , 31.0 } ; static
const real_T fb [ 2 ] = { 31.0 , 31.0 } ; __m128 tmp ; int32_T g_i ; int32_T
i ; static const int8_T gb [ 86 ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 , 3 , 4 ,
5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18 , 19 , 20 , 21
, 22 , 23 , 24 , 25 , 26 , 27 , 28 , 29 , 30 , 31 , 31 , 31 , 31 , 31 , 31 ,
31 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 ,
17 , 18 , 19 , 20 , 21 , 22 , 23 , 24 , 25 , 26 , 27 , 28 , 29 , 30 , 31 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static const int8_T hb [ 86 ]
= { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17
, 18 , 19 , 20 , 21 , 22 , 23 , 24 , 25 , 26 , 27 , 28 , 29 , 30 , 31 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 , 3 ,
4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18 , 19 , 20
, 21 , 22 , 23 , 24 , 25 , 26 , 27 , 28 , 29 , 30 , 31 , 31 , 31 , 31 , 31 ,
31 , 31 } ; for ( i = 0 ; i < 961 ; i ++ ) { ksm0js2nhsy . b_I_bhxxfovxdy [ i
] = varargin_1 [ i ] ; } for ( i = 0 ; i < 31 ; i ++ ) { for ( g_i = 0 ; g_i
< 43 ; g_i ++ ) { ksm0js2nhsy . a_cl54gopm0x [ g_i + 43 * i ] = ksm0js2nhsy .
b_I_bhxxfovxdy [ ( ( gb [ i + 43 ] - 1 ) * 31 + gb [ g_i ] ) - 1 ] ; } }
ippfilter_real32 ( & ksm0js2nhsy . a_cl54gopm0x [ 0 ] , & ksm0js2nhsy .
dx_cxarnvbvui [ 0 ] , & b [ 0 ] , 2.0 , & c [ 0 ] , & d [ 0 ] , & e [ 0 ] ,
true ) ; for ( i = 0 ; i < 43 ; i ++ ) { for ( g_i = 0 ; g_i < 31 ; g_i ++ )
{ ksm0js2nhsy . a_cl54gopm0x [ g_i + 31 * i ] = ksm0js2nhsy . dx_cxarnvbvui [
( ( hb [ i + 43 ] - 1 ) * 31 + hb [ g_i ] ) - 1 ] ; } } ippfilter_real32 ( &
ksm0js2nhsy . a_cl54gopm0x [ 0 ] , & ksm0js2nhsy . dx_cxarnvbvui [ 0 ] , & h
[ 0 ] , 2.0 , & j [ 0 ] , & k [ 0 ] , & l [ 0 ] , true ) ; for ( i = 0 ; i <
43 ; i ++ ) { for ( g_i = 0 ; g_i < 31 ; g_i ++ ) { ksm0js2nhsy .
a_cl54gopm0x [ g_i + 31 * i ] = ksm0js2nhsy . b_I_bhxxfovxdy [ ( ( hb [ i +
43 ] - 1 ) * 31 + hb [ g_i ] ) - 1 ] ; } } ippfilter_real32 ( & ksm0js2nhsy .
a_cl54gopm0x [ 0 ] , & ksm0js2nhsy . b_I_bhxxfovxdy [ 0 ] , & p [ 0 ] , 2.0 ,
& q [ 0 ] , & r [ 0 ] , & s [ 0 ] , true ) ; for ( i = 0 ; i < 31 ; i ++ ) {
for ( g_i = 0 ; g_i < 43 ; g_i ++ ) { ksm0js2nhsy . a_cl54gopm0x [ g_i + 43 *
i ] = ksm0js2nhsy . b_I_bhxxfovxdy [ ( ( gb [ i + 43 ] - 1 ) * 31 + gb [ g_i
] ) - 1 ] ; } } ippfilter_real32 ( & ksm0js2nhsy . a_cl54gopm0x [ 0 ] , &
ksm0js2nhsy . b_I_bhxxfovxdy [ 0 ] , & w [ 0 ] , 2.0 , & x [ 0 ] , & y [ 0 ]
, & ab [ 0 ] , true ) ; ksm0js2nhsy . magGrad_kkiq3xxxve [ 0 ] =
muSingleScalarHypot ( ksm0js2nhsy . dx_cxarnvbvui [ 0 ] , ksm0js2nhsy .
b_I_bhxxfovxdy [ 0 ] ) ; magmax = ksm0js2nhsy . magGrad_kkiq3xxxve [ 0 ] ;
for ( i = 0 ; i < 960 ; i ++ ) { ksm0js2nhsy . magGrad_kkiq3xxxve [ i + 1 ] =
muSingleScalarHypot ( ksm0js2nhsy . dx_cxarnvbvui [ i + 1 ] , ksm0js2nhsy .
b_I_bhxxfovxdy [ i + 1 ] ) ; magmax = muSingleScalarMax ( ksm0js2nhsy .
magGrad_kkiq3xxxve [ i + 1 ] , magmax ) ; } if ( magmax > 0.0F ) { for ( i =
0 ; i <= 956 ; i += 4 ) { tmp = _mm_loadu_ps ( & ksm0js2nhsy .
magGrad_kkiq3xxxve [ i ] ) ; _mm_storeu_ps ( & ksm0js2nhsy .
magGrad_kkiq3xxxve [ i ] , _mm_div_ps ( tmp , _mm_set1_ps ( magmax ) ) ) ; }
for ( i = 960 ; i < 961 ; i ++ ) { ksm0js2nhsy . magGrad_kkiq3xxxve [ i ] /=
magmax ; } } ksm0js2nhsy . out = 1.0 ; getnumcores ( & ksm0js2nhsy . out ) ;
for ( i = 0 ; i < 64 ; i ++ ) { ksm0js2nhsy . b_y [ i ] = 0.0 ; } for ( i = 0
; i < 961 ; i ++ ) { magmax = ksm0js2nhsy . magGrad_kkiq3xxxve [ i ] ; if (
muSingleScalarIsNaN ( magmax ) ) { c_idx = 0.0F ; } else { c_idx = magmax *
63.0F + 0.5F ; } if ( c_idx > 63.0F ) { ksm0js2nhsy . b_y [ 63 ] ++ ; } else
if ( muSingleScalarIsInf ( magmax ) ) { ksm0js2nhsy . b_y [ 63 ] ++ ; } else
{ ksm0js2nhsy . b_y [ ( int32_T ) c_idx ] ++ ; } } ksm0js2nhsy . out = 0.0 ;
b_idx = 1 ; while ( ( ! ( ksm0js2nhsy . out > 672.69999999999993 ) ) && (
b_idx <= 64 ) ) { ksm0js2nhsy . out += ksm0js2nhsy . b_y [ b_idx - 1 ] ;
b_idx ++ ; } ksm0js2nhsy . highThreshTemp = ( ( real_T ) b_idx - 1.0 ) / 64.0
; if ( ( b_idx > 64 ) && ( ! ( ksm0js2nhsy . out > 672.69999999999993 ) ) ) {
} else { ksm0js2nhsy . highThresh_data_idx_0 = ksm0js2nhsy . highThreshTemp ;
ksm0js2nhsy . lowThresh_data_idx_0 = 0.4 * ksm0js2nhsy . highThreshTemp ; }
memset ( & ksm0js2nhsy . mask_cv5hdgrwft [ 0 ] , 0 , 961U * sizeof (
boolean_T ) ) ; cannythresholding_real32_tbb ( & ksm0js2nhsy . dx_cxarnvbvui
[ 0 ] , & ksm0js2nhsy . b_I_bhxxfovxdy [ 0 ] , & ksm0js2nhsy .
magGrad_kkiq3xxxve [ 0 ] , & eb [ 0 ] , ksm0js2nhsy . lowThresh_data_idx_0 ,
& ksm0js2nhsy . mask_cv5hdgrwft [ 0 ] ) ; for ( i = 0 ; i < 961 ; i ++ ) {
varargout_1 [ i ] = ( ksm0js2nhsy . magGrad_kkiq3xxxve [ i ] > ksm0js2nhsy .
highThresh_data_idx_0 ) ; } ippreconstruct_uint8 ( ( uint8_T * ) &
varargout_1 [ 0 ] , ( uint8_T * ) & ksm0js2nhsy . mask_cv5hdgrwft [ 0 ] , &
fb [ 0 ] , 2.0 ) ; } static void hjmbtqheef ( boolean_T bwin [ 961 ] ) {
int32_T k ; boolean_T b_p ; boolean_T p ; static const boolean_T b [ 512 ] =
{ false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , true , true , true ,
true , true , true , true , false , true , true , false , false , true , true
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , true
, true , false , false , true , true , false , false , true , true , false ,
false , true , true , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , true , true , true , true , true , true , true , true , true ,
false , false , false , true , true , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , true , true , true , true , true , true , true ,
true , true , true , false , false , true , true , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , false ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , true , true , false , false , false , true , false , false , true ,
true , false , false , true , true , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , true ,
false , false , false , true , false , false , true , true , true , true ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true } ; real_T sizeIn [ 2 ] ; static
const boolean_T c [ 512 ] = { false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, true , true , true , true , true , true , true , true , true , true , true
, false , true , true , true , true , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , true , true , true , true , true , true , true ,
true , false , true , false , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , true , true , true , true , true ,
true , true , true , false , false , true , false , true , true , true , true
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , true , true ,
true , false , true , true , true , false , false , true , true , false ,
true , true , true , false , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , true
, true , true , true , true , true , true , true , false , false , true ,
false , true , true , true , true , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , true , true , true , false , true , true , true , false ,
false , true , true , false , true , true , true , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false , false , false , true , true , true , true , false ,
true , true , true , true , true , true , true , true , true , true , true ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , false , false , false , false , false , false , false , false
, false , false , false , false , false , false , false , false , true , true
, true , true , true , true , true , true , false , false , true , false ,
true , true , true , true , false , false , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , true , true , true , false , true , true , true , false , false ,
true , true , false , true , true , true , false , false , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , true , true , true , true , true , true , true ,
false , false , true , false , true , true , true , true , false , false ,
false , false , false , false , false , false , false , false , false , false
, false , false , false , false , false , true , true , true , false , true ,
true , true , false , false , true , true , false , true , true , true } ;
boolean_T exitg1 ; do { memcpy ( & ksm0js2nhsy . x1 [ 0 ] , & bwin [ 0 ] ,
961U * sizeof ( boolean_T ) ) ; sizeIn [ 0 ] = 31.0 ; sizeIn [ 1 ] = 31.0 ;
bwlookup_tbb_boolean ( & bwin [ 0 ] , & sizeIn [ 0 ] , 2.0 , & b [ 0 ] ,
512.0 , & ksm0js2nhsy . image_iter1 [ 0 ] ) ; sizeIn [ 0 ] = 31.0 ; sizeIn [
1 ] = 31.0 ; bwlookup_tbb_boolean ( & ksm0js2nhsy . image_iter1 [ 0 ] , &
sizeIn [ 0 ] , 2.0 , & c [ 0 ] , 512.0 , & bwin [ 0 ] ) ; p = false ; b_p =
true ; k = 0 ; exitg1 = false ; while ( ( ! exitg1 ) && ( k < 961 ) ) { if (
ksm0js2nhsy . x1 [ k ] != bwin [ k ] ) { b_p = false ; exitg1 = true ; } else
{ k ++ ; } } if ( b_p ) { p = true ; } } while ( ! p ) ; } void dw0zngvhyq (
void ) { ipf5ube4r0 * const accn4cnket = & ( lhjbdsj2rj . rtm ) ; mr51bswvyz
( accn4cnket , & dqykr4eggmg . otjykwnhb3s ) ; } void ha1ipjbq54 ( uint8_T *
o3vpgniqky ) { dqykr4eggmg . mdrqgzmhxm [ 0 ] = b1hr2q0zjh . P_3 ;
dqykr4eggmg . btek1dk1x3 = 0 ; dqykr4eggmg . fdg0ctxzju [ 0 ] = b1hr2q0zjh .
P_4 ; dqykr4eggmg . jw22f2in0f = 0 ; ic5jb3movn ( & ksm0js2nhsy . otjykwnhb3s
, & dqykr4eggmg . otjykwnhb3s , & b1hr2q0zjh . otjykwnhb3s ) ; dqykr4eggmg .
epb50zhs4j = 0.0 ; dqykr4eggmg . kuiiaoa3ie = 0.0 ; dqykr4eggmg . bcinjdyi1p
[ 0 ] = 0.0 ; dqykr4eggmg . bcinjdyi1p [ 1 ] = 0.0 ; dqykr4eggmg . bcinjdyi1p
[ 2 ] = 0.0 ; dqykr4eggmg . bcinjdyi1p [ 3 ] = 0.0 ; * o3vpgniqky =
ksm0js2nhsy . otjykwnhb3s . noaggedw1d ; } void gwlyno50ln ( void ) {
dqykr4eggmg . mdrqgzmhxm [ 0 ] = b1hr2q0zjh . P_3 ; dqykr4eggmg . btek1dk1x3
= 0 ; dqykr4eggmg . fdg0ctxzju [ 0 ] = b1hr2q0zjh . P_4 ; dqykr4eggmg .
jw22f2in0f = 0 ; bxsrqc204k ( & dqykr4eggmg . otjykwnhb3s , & b1hr2q0zjh .
otjykwnhb3s ) ; dqykr4eggmg . epb50zhs4j = 0.0 ; dqykr4eggmg . kuiiaoa3ie =
0.0 ; dqykr4eggmg . bcinjdyi1p [ 0 ] = 0.0 ; dqykr4eggmg . bcinjdyi1p [ 1 ] =
0.0 ; dqykr4eggmg . bcinjdyi1p [ 2 ] = 0.0 ; dqykr4eggmg . bcinjdyi1p [ 3 ] =
0.0 ; } void bog0frvixl ( void ) { kegjp2lgms ( & ksm0js2nhsy . otjykwnhb3s ,
& dqykr4eggmg . otjykwnhb3s , & b1hr2q0zjh . otjykwnhb3s ) ; } void
k3yxem35zg ( void ) { dqykr4eggmg . jjrfotind4 = true ; dqykr4eggmg .
l152eirbdu . isInitialized = 1 ; } void flightControlSystemTID0 ( const
SensorsBus * pxdb2gu5va , real32_T pikqq4svts [ 4 ] , uint8_T * o3vpgniqky )
{ ipf5ube4r0 * const accn4cnket = & ( lhjbdsj2rj . rtm ) ; ksm0js2nhsy .
dx1bkiqd54_ppxrqq0gsf = dqykr4eggmg . mdrqgzmhxm [ dqykr4eggmg . btek1dk1x3 ]
; ksm0js2nhsy . d5rwtv2qyu_llw0u2ae0v = dqykr4eggmg . fdg0ctxzju [
dqykr4eggmg . jw22f2in0f ] ; otjykwnhb3 ( accn4cnket , pxdb2gu5va ,
ksm0js2nhsy . d5rwtv2qyu_llw0u2ae0v , ksm0js2nhsy . dx1bkiqd54_ppxrqq0gsf , &
ksm0js2nhsy . otjykwnhb3s , & dqykr4eggmg . otjykwnhb3s , & b1hr2q0zjh .
otjykwnhb3s , & f51itwtzkqf . otjykwnhb3s ) ; pikqq4svts [ 0 ] = ksm0js2nhsy
. otjykwnhb3s . maxn0002kp [ 0 ] ; pikqq4svts [ 1 ] = ksm0js2nhsy .
otjykwnhb3s . maxn0002kp [ 1 ] ; pikqq4svts [ 2 ] = ksm0js2nhsy . otjykwnhb3s
. maxn0002kp [ 2 ] ; pikqq4svts [ 3 ] = ksm0js2nhsy . otjykwnhb3s .
maxn0002kp [ 3 ] ; * o3vpgniqky = ksm0js2nhsy . otjykwnhb3s . noaggedw1d ; }
void flightControlSystemTID1 ( void ) { int32_T c_n ; int32_T i ; int32_T
loop_ub ; int32_T loop_ub_p ; int32_T lvxtmekiju ; int32_T r ; uint32_T qY ;
boolean_T center_cond ; boolean_T exitg1 ; boolean_T heading_cond ; for ( i =
0 ; i < 19200 ; i ++ ) { ksm0js2nhsy . pmdbpthf5b_mbvzarwird [ i ] = ( ( 0.0
- 0.0 / b1hr2q0zjh . P_2 ) - 0.0 / b1hr2q0zjh . P_2 > b1hr2q0zjh . P_1 ) ; }
gqzro24tmt ( ksm0js2nhsy . pmdbpthf5b_mbvzarwird , ksm0js2nhsy . unusedExpr )
; memset ( & ksm0js2nhsy . find_yaw_mat [ 0 ] , 0 , 19200U * sizeof ( int8_T
) ) ; lvxtmekiju = 0 ; c_n = 0 ; for ( i = 0 ; i < 961 ; i ++ ) { ksm0js2nhsy
. e = ( i / 31 + 64 ) * 120 + i % 31 ; if ( ksm0js2nhsy .
pmdbpthf5b_mbvzarwird [ ksm0js2nhsy . e ] ) { lvxtmekiju ++ ; } if (
ksm0js2nhsy . pmdbpthf5b_mbvzarwird [ ksm0js2nhsy . e + 44 ] ) { c_n ++ ; } }
for ( ksm0js2nhsy . e = 0 ; ksm0js2nhsy . e < 31 ; ksm0js2nhsy . e ++ ) { for
( ksm0js2nhsy . d_col = 0 ; ksm0js2nhsy . d_col < 31 ; ksm0js2nhsy . d_col ++
) { ksm0js2nhsy . pmdbpthf5b_pbm3vprmfu [ ksm0js2nhsy . d_col + 31 *
ksm0js2nhsy . e ] = ksm0js2nhsy . pmdbpthf5b_mbvzarwird [ ( ksm0js2nhsy . e +
64 ) * 120 + ksm0js2nhsy . d_col ] ; } } gqzro24tmtz ( ksm0js2nhsy .
pmdbpthf5b_pbm3vprmfu , ksm0js2nhsy . canny_head_mat ) ; hjmbtqheef (
ksm0js2nhsy . canny_head_mat ) ; heading_cond = ( lvxtmekiju > 0 ) ;
center_cond = ( c_n > 0 ) ; i = 0 ; lvxtmekiju = 0 ; memset ( & ksm0js2nhsy .
local_area [ 0 ] , 0 , 2000U * sizeof ( uint8_T ) ) ; if ( heading_cond &&
center_cond ) { dqykr4eggmg . kuiiaoa3ie = 0.0 ; if ( dqykr4eggmg .
epb50zhs4j == 1.0 ) { i = 1 ; ksm0js2nhsy . count = 0.0 ; for ( ksm0js2nhsy .
e = 0 ; ksm0js2nhsy . e < 31 ; ksm0js2nhsy . e ++ ) { ksm0js2nhsy .
yaw_stop_array [ ksm0js2nhsy . e ] = 0.0 ; } for ( ksm0js2nhsy . e = 0 ;
ksm0js2nhsy . e < 31 ; ksm0js2nhsy . e ++ ) { ksm0js2nhsy . d_col = 0 ;
exitg1 = false ; while ( ( ! exitg1 ) && ( ksm0js2nhsy . d_col < 31 ) ) { if
( ksm0js2nhsy . pmdbpthf5b_mbvzarwird [ ( ksm0js2nhsy . d_col + 64 ) * 120 +
ksm0js2nhsy . e ] ) { ksm0js2nhsy . count ++ ; ksm0js2nhsy . yaw_stop_array [
( int32_T ) ksm0js2nhsy . count - 1 ] = ( real_T ) ksm0js2nhsy . d_col + 1.0
; exitg1 = true ; } else { ksm0js2nhsy . d_col ++ ; } } } if ( ksm0js2nhsy .
count == 31.0 ) { ksm0js2nhsy . count = minimum_VUlvYBuM ( ksm0js2nhsy .
yaw_stop_array ) ; ksm0js2nhsy . side_decision = maximum_gwCiuXP4 (
ksm0js2nhsy . yaw_stop_array ) ; if ( ( ksm0js2nhsy . side_decision ==
ksm0js2nhsy . count ) || ( ksm0js2nhsy . side_decision < ksm0js2nhsy . count
+ 2.0 ) ) { dqykr4eggmg . epb50zhs4j = 0.0 ; } } } else if ( dqykr4eggmg .
epb50zhs4j == - 1.0 ) { i = - 1 ; ksm0js2nhsy . count = 0.0 ; for (
ksm0js2nhsy . e = 0 ; ksm0js2nhsy . e < 31 ; ksm0js2nhsy . e ++ ) {
ksm0js2nhsy . yaw_stop_array [ ksm0js2nhsy . e ] = 0.0 ; } for ( ksm0js2nhsy
. e = 0 ; ksm0js2nhsy . e < 31 ; ksm0js2nhsy . e ++ ) { ksm0js2nhsy . d_col =
0 ; exitg1 = false ; while ( ( ! exitg1 ) && ( ksm0js2nhsy . d_col < 31 ) ) {
if ( ksm0js2nhsy . pmdbpthf5b_mbvzarwird [ ( 94 - ksm0js2nhsy . d_col ) * 120
+ ksm0js2nhsy . e ] ) { ksm0js2nhsy . count ++ ; ksm0js2nhsy . yaw_stop_array
[ ( int32_T ) ksm0js2nhsy . count - 1 ] = - ( real_T ) ksm0js2nhsy . d_col +
31.0 ; exitg1 = true ; } else { ksm0js2nhsy . d_col ++ ; } } } if (
ksm0js2nhsy . count == 31.0 ) { ksm0js2nhsy . count = minimum_VUlvYBuM (
ksm0js2nhsy . yaw_stop_array ) ; ksm0js2nhsy . side_decision =
maximum_gwCiuXP4 ( ksm0js2nhsy . yaw_stop_array ) ; if ( ( ksm0js2nhsy .
side_decision == ksm0js2nhsy . count ) || ( ksm0js2nhsy . side_decision <
ksm0js2nhsy . count + 2.0 ) ) { dqykr4eggmg . epb50zhs4j = 0.0 ; } } } if (
dqykr4eggmg . epb50zhs4j == 0.0 ) { ksm0js2nhsy . count = 0.0 ; ksm0js2nhsy .
side_decision = 0.0 ; for ( lvxtmekiju = 0 ; lvxtmekiju < 31 ; lvxtmekiju ++
) { for ( ksm0js2nhsy . e = 0 ; ksm0js2nhsy . e < 31 ; ksm0js2nhsy . e ++ ) {
if ( ksm0js2nhsy . pmdbpthf5b_mbvzarwird [ ( ( ksm0js2nhsy . e + 64 ) * 120 +
lvxtmekiju ) + 44 ] ) { ksm0js2nhsy . count ++ ; ksm0js2nhsy . side_decision
+= ( real_T ) ksm0js2nhsy . e + 1.0 ; } } } ksm0js2nhsy . side_decision /=
ksm0js2nhsy . count ; ksm0js2nhsy . side_decision = muDoubleScalarRound (
ksm0js2nhsy . side_decision ) ; if ( ksm0js2nhsy . side_decision > 19.0 ) {
lvxtmekiju = - 2 ; } else if ( ksm0js2nhsy . side_decision < 13.0 ) {
lvxtmekiju = 2 ; } else { lvxtmekiju = 1 ; } } } else if ( ( ! heading_cond )
&& center_cond ) { ksm0js2nhsy . side_decision = 0.0 ; ksm0js2nhsy . count =
0.0 ; if ( dqykr4eggmg . kuiiaoa3ie == 1.0 ) { if ( dqykr4eggmg . bcinjdyi1p
[ 0 ] > dqykr4eggmg . bcinjdyi1p [ 1 ] ) { c_n = 0 ; ksm0js2nhsy . c = 0 ; }
else { c_n = ( int32_T ) dqykr4eggmg . bcinjdyi1p [ 0 ] - 1 ; ksm0js2nhsy . c
= ( int32_T ) dqykr4eggmg . bcinjdyi1p [ 1 ] ; } if ( dqykr4eggmg .
bcinjdyi1p [ 2 ] > dqykr4eggmg . bcinjdyi1p [ 3 ] ) { ksm0js2nhsy . f = 0 ;
ksm0js2nhsy . e = 0 ; } else { ksm0js2nhsy . f = ( int32_T ) dqykr4eggmg .
bcinjdyi1p [ 2 ] - 1 ; ksm0js2nhsy . e = ( int32_T ) dqykr4eggmg . bcinjdyi1p
[ 3 ] ; } if ( dqykr4eggmg . bcinjdyi1p [ 0 ] > dqykr4eggmg . bcinjdyi1p [ 1
] ) { ksm0js2nhsy . p = 1 ; } else { ksm0js2nhsy . p = ( int32_T )
dqykr4eggmg . bcinjdyi1p [ 0 ] ; } if ( dqykr4eggmg . bcinjdyi1p [ 2 ] >
dqykr4eggmg . bcinjdyi1p [ 3 ] ) { r = 1 ; } else { r = ( int32_T )
dqykr4eggmg . bcinjdyi1p [ 2 ] ; } loop_ub = ksm0js2nhsy . e - ksm0js2nhsy .
f ; for ( ksm0js2nhsy . e = 0 ; ksm0js2nhsy . e < loop_ub ; ksm0js2nhsy . e
++ ) { loop_ub_p = ksm0js2nhsy . c - c_n ; for ( ksm0js2nhsy . d_col = 0 ;
ksm0js2nhsy . d_col < loop_ub_p ; ksm0js2nhsy . d_col ++ ) { ksm0js2nhsy .
find_yaw_mat [ ( ( ksm0js2nhsy . p + ksm0js2nhsy . d_col ) + 120 * ( ( r +
ksm0js2nhsy . e ) - 1 ) ) - 1 ] = ( int8_T ) ksm0js2nhsy .
pmdbpthf5b_mbvzarwird [ ( ( ksm0js2nhsy . f + ksm0js2nhsy . e ) * 120 + c_n )
+ ksm0js2nhsy . d_col ] ; } } } for ( ksm0js2nhsy . e = 0 ; ksm0js2nhsy . e <
120 ; ksm0js2nhsy . e ++ ) { for ( ksm0js2nhsy . d_col = 0 ; ksm0js2nhsy .
d_col < 160 ; ksm0js2nhsy . d_col ++ ) { if ( dqykr4eggmg . kuiiaoa3ie == 0.0
) { ksm0js2nhsy . d = muDoubleScalarSqrt ( ( ksm0js2nhsy . e - 59 ) * (
ksm0js2nhsy . e - 59 ) + ( ksm0js2nhsy . d_col - 79 ) * ( ksm0js2nhsy . d_col
- 79 ) ) ; if ( ( ksm0js2nhsy . d <= 50.0 ) && ( ksm0js2nhsy . d >= 30.0 ) &&
( ( ksm0js2nhsy . e + 1 <= 46 ) || ( ksm0js2nhsy . e + 1 >= 74 ) || (
ksm0js2nhsy . d_col + 1 <= 70 ) ) && ksm0js2nhsy . pmdbpthf5b_mbvzarwird [
120 * ksm0js2nhsy . d_col + ksm0js2nhsy . e ] ) { ksm0js2nhsy . count ++ ;
c_n = ( ( int32_T ) ksm0js2nhsy . count - 1 ) << 1 ; ksm0js2nhsy . local_area
[ c_n ] = ( uint8_T ) ( ksm0js2nhsy . e + 1 ) ; ksm0js2nhsy . local_area [
c_n + 1 ] = ( uint8_T ) ( ksm0js2nhsy . d_col + 1 ) ; } } else { ksm0js2nhsy
. d = muDoubleScalarSqrt ( ( ksm0js2nhsy . e - 59 ) * ( ksm0js2nhsy . e - 59
) + ( ksm0js2nhsy . d_col - 79 ) * ( ksm0js2nhsy . d_col - 79 ) ) ; if ( (
ksm0js2nhsy . d <= 50.0 ) && ( ksm0js2nhsy . d >= 30.0 ) && ( ksm0js2nhsy .
find_yaw_mat [ 120 * ksm0js2nhsy . d_col + ksm0js2nhsy . e ] == 1 ) ) {
ksm0js2nhsy . count ++ ; ksm0js2nhsy . side_decision += ( real_T )
ksm0js2nhsy . d_col + 1.0 ; c_n = ( ( int32_T ) ksm0js2nhsy . count - 1 ) <<
1 ; ksm0js2nhsy . local_area [ c_n ] = ( uint8_T ) ( ksm0js2nhsy . e + 1 ) ;
ksm0js2nhsy . local_area [ c_n + 1 ] = ( uint8_T ) ( ksm0js2nhsy . d_col + 1
) ; } } } } if ( dqykr4eggmg . kuiiaoa3ie == 1.0 ) { ksm0js2nhsy .
side_decision /= ksm0js2nhsy . count ; } dqykr4eggmg . kuiiaoa3ie = 1.0 ;
ksm0js2nhsy . e = 0 ; ksm0js2nhsy . d_col = 0 ; exitg1 = false ; while ( ( !
exitg1 ) && ( ksm0js2nhsy . d_col < 1000 ) ) { ksm0js2nhsy . e = ksm0js2nhsy
. d_col ; if ( ksm0js2nhsy . local_area [ ksm0js2nhsy . d_col << 1 ] == 0 ) {
exitg1 = true ; } else { ksm0js2nhsy . d_col ++ ; } } if ( ksm0js2nhsy . e <
1 ) { ksm0js2nhsy . d_col = - 1 ; } else { ksm0js2nhsy . d_col = ksm0js2nhsy
. e - 1 ; } ksm0js2nhsy . local_area_size [ 0 ] = 1 ; ksm0js2nhsy .
local_area_size [ 1 ] = ksm0js2nhsy . d_col + 1 ; for ( ksm0js2nhsy . e = 0 ;
ksm0js2nhsy . e <= ksm0js2nhsy . d_col ; ksm0js2nhsy . e ++ ) { ksm0js2nhsy .
local_area_data [ ksm0js2nhsy . e ] = ksm0js2nhsy . local_area [ ksm0js2nhsy
. e << 1 ] ; } ksm0js2nhsy . e = minimum_vkZKsMs2 ( ksm0js2nhsy .
local_area_data , ksm0js2nhsy . local_area_size ) ; qY = ( uint32_T )
ksm0js2nhsy . e - 2U ; if ( ( uint32_T ) ksm0js2nhsy . e - 2U > ( uint32_T )
ksm0js2nhsy . e ) { qY = 0U ; } dqykr4eggmg . bcinjdyi1p [ 0 ] = ( int32_T )
qY ; ksm0js2nhsy . local_area_size [ 0 ] = 1 ; ksm0js2nhsy . local_area_size
[ 1 ] = ksm0js2nhsy . d_col + 1 ; for ( ksm0js2nhsy . e = 0 ; ksm0js2nhsy . e
<= ksm0js2nhsy . d_col ; ksm0js2nhsy . e ++ ) { ksm0js2nhsy . local_area_data
[ ksm0js2nhsy . e ] = ksm0js2nhsy . local_area [ ksm0js2nhsy . e << 1 ] ; }
ksm0js2nhsy . e = ( int32_T ) ( maximum_YhTLPI0W ( ksm0js2nhsy .
local_area_data , ksm0js2nhsy . local_area_size ) + 2U ) ; if ( ( uint32_T )
ksm0js2nhsy . e > 255U ) { ksm0js2nhsy . e = 255 ; } dqykr4eggmg . bcinjdyi1p
[ 1 ] = ksm0js2nhsy . e ; ksm0js2nhsy . local_area_size [ 0 ] = 1 ;
ksm0js2nhsy . local_area_size [ 1 ] = ksm0js2nhsy . d_col + 1 ; for (
ksm0js2nhsy . e = 0 ; ksm0js2nhsy . e <= ksm0js2nhsy . d_col ; ksm0js2nhsy .
e ++ ) { ksm0js2nhsy . local_area_data [ ksm0js2nhsy . e ] = ksm0js2nhsy .
local_area [ ( ksm0js2nhsy . e << 1 ) + 1 ] ; } ksm0js2nhsy . e =
minimum_vkZKsMs2 ( ksm0js2nhsy . local_area_data , ksm0js2nhsy .
local_area_size ) ; qY = ( uint32_T ) ksm0js2nhsy . e - 2U ; if ( ( uint32_T
) ksm0js2nhsy . e - 2U > ( uint32_T ) ksm0js2nhsy . e ) { qY = 0U ; }
dqykr4eggmg . bcinjdyi1p [ 2 ] = ( int32_T ) qY ; ksm0js2nhsy .
local_area_size [ 0 ] = 1 ; ksm0js2nhsy . local_area_size [ 1 ] = ksm0js2nhsy
. d_col + 1 ; for ( ksm0js2nhsy . e = 0 ; ksm0js2nhsy . e <= ksm0js2nhsy .
d_col ; ksm0js2nhsy . e ++ ) { ksm0js2nhsy . local_area_data [ ksm0js2nhsy .
e ] = ksm0js2nhsy . local_area [ ( ksm0js2nhsy . e << 1 ) + 1 ] ; }
ksm0js2nhsy . e = ( int32_T ) ( maximum_YhTLPI0W ( ksm0js2nhsy .
local_area_data , ksm0js2nhsy . local_area_size ) + 2U ) ; if ( ( uint32_T )
ksm0js2nhsy . e > 255U ) { ksm0js2nhsy . e = 255 ; } dqykr4eggmg . bcinjdyi1p
[ 3 ] = ksm0js2nhsy . e ; if ( ! ( ksm0js2nhsy . side_decision == 0.0 ) ) {
if ( ksm0js2nhsy . side_decision > 80.0 ) { i = 1 ; dqykr4eggmg . epb50zhs4j
= 1.0 ; } else if ( ksm0js2nhsy . side_decision <= 80.0 ) { i = - 1 ;
dqykr4eggmg . epb50zhs4j = - 1.0 ; } } } dqykr4eggmg . mdrqgzmhxm [
dqykr4eggmg . btek1dk1x3 == 0 ] = lvxtmekiju ; dqykr4eggmg . btek1dk1x3 = (
int8_T ) ( dqykr4eggmg . btek1dk1x3 == 0 ) ; dqykr4eggmg . fdg0ctxzju [
dqykr4eggmg . jw22f2in0f == 0 ] = i ; dqykr4eggmg . jw22f2in0f = ( int8_T ) (
dqykr4eggmg . jw22f2in0f == 0 ) ; } void flightControlSystemTID2 ( void ) {
otjykwnhb3TID2 ( & ksm0js2nhsy . otjykwnhb3s , & b1hr2q0zjh . otjykwnhb3s ) ;
} void pyvd4pdf3iTID0 ( void ) { lsjhvu4egy ( & ksm0js2nhsy . otjykwnhb3s , &
dqykr4eggmg . otjykwnhb3s , & b1hr2q0zjh . otjykwnhb3s ) ; } void
pyvd4pdf3iTID1 ( void ) { } void m0l5se3ogg ( void ) { ipf5ube4r0 * const
accn4cnket = & ( lhjbdsj2rj . rtm ) ; eyt3piuhqz ( accn4cnket , & dqykr4eggmg
. otjykwnhb3s ) ; } void o2f5l50guo ( void ) { ipf5ube4r0 * const accn4cnket
= & ( lhjbdsj2rj . rtm ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( accn4cnket -> _mdlRefSfcnS , "flightControlSystem" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void f4qzdbbxmw (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo *
rt_ParentMMI , const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T
rt_CSTATEIdx ) { ipf5ube4r0 * const accn4cnket = & ( lhjbdsj2rj . rtm ) ;
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; b1hr2q0zjh . otjykwnhb3s . P_56 =
rtMinusInf ; ( void ) memset ( ( void * ) accn4cnket , 0 , sizeof (
ipf5ube4r0 ) ) ; nmtwkzsqud [ 0 ] = mdlref_TID0 ; nmtwkzsqud [ 1 ] =
mdlref_TID1 ; nmtwkzsqud [ 2 ] = mdlref_TID2 ; accn4cnket -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( accn4cnket -> _mdlRefSfcnS , "flightControlSystem" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } ( void ) memset ( ( ( void *
) & ksm0js2nhsy ) , 0 , sizeof ( ircitwx3zdm ) ) ; { int32_T i ; for ( i = 0
; i < 6 ; i ++ ) { ksm0js2nhsy . otjykwnhb3s . bwhquruhg4 [ i ] = 0.0F ; }
for ( i = 0 ; i < 16 ; i ++ ) { ksm0js2nhsy . otjykwnhb3s . evofcbwaww [ i ]
= 0.0F ; } for ( i = 0 ; i < 8 ; i ++ ) { ksm0js2nhsy . otjykwnhb3s .
bgjnlzeaxl [ i ] = 0.0F ; } for ( i = 0 ; i < 8 ; i ++ ) { ksm0js2nhsy .
otjykwnhb3s . o340jloaui [ i ] = 0.0F ; } for ( i = 0 ; i < 16 ; i ++ ) {
ksm0js2nhsy . otjykwnhb3s . fb1afzxcm2_mbvzarwird [ i ] = 0.0F ; }
ksm0js2nhsy . otjykwnhb3s . b4lfjlgxec = 0.0 ; ksm0js2nhsy . otjykwnhb3s .
nnthqeo0xb [ 0 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . nnthqeo0xb [ 1 ] = 0.0 ;
ksm0js2nhsy . otjykwnhb3s . fb1afzxcm2 = 0.0 ; ksm0js2nhsy . otjykwnhb3s .
g3zvud4ysq = 0.0 ; ksm0js2nhsy . otjykwnhb3s . dcpk0jldla [ 0 ] = 0.0 ;
ksm0js2nhsy . otjykwnhb3s . dcpk0jldla [ 1 ] = 0.0 ; ksm0js2nhsy .
otjykwnhb3s . dcpk0jldla [ 2 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . imrz1volmu
= 0.0 ; ksm0js2nhsy . otjykwnhb3s . hte1fpi5od [ 0 ] = 0.0 ; ksm0js2nhsy .
otjykwnhb3s . hte1fpi5od [ 1 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . hte1fpi5od
[ 2 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . foobajajui [ 0 ] = 0.0 ;
ksm0js2nhsy . otjykwnhb3s . foobajajui [ 1 ] = 0.0 ; ksm0js2nhsy .
otjykwnhb3s . mzcro4caxu [ 0 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . mzcro4caxu
[ 1 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . jhtkvlotcj [ 0 ] = 0.0 ;
ksm0js2nhsy . otjykwnhb3s . jhtkvlotcj [ 1 ] = 0.0 ; ksm0js2nhsy .
otjykwnhb3s . iqocmhdfin [ 0 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . iqocmhdfin
[ 1 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . iqocmhdfin [ 2 ] = 0.0 ;
ksm0js2nhsy . otjykwnhb3s . iqocmhdfin [ 3 ] = 0.0 ; ksm0js2nhsy .
otjykwnhb3s . lqqrqnfg0k [ 0 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . lqqrqnfg0k
[ 1 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . myx153u3em [ 0 ] = 0.0 ;
ksm0js2nhsy . otjykwnhb3s . myx153u3em [ 1 ] = 0.0 ; ksm0js2nhsy .
otjykwnhb3s . a33lpeqllh [ 0 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . a33lpeqllh
[ 1 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . df5jwd0dve = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . epnbjpnxkg = 0.0F ; ksm0js2nhsy . otjykwnhb3s . dosvknpiqk =
0.0F ; ksm0js2nhsy . otjykwnhb3s . li2d3qqqn4 = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . prfrp52vqr = 0.0F ; ksm0js2nhsy . otjykwnhb3s . a5i4fgo1s2 [ 0
] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . a5i4fgo1s2 [ 1 ] = 0.0F ; ksm0js2nhsy
. otjykwnhb3s . lgxyarf22c [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
lgxyarf22c [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . gfpexfdgco [ 0 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . gfpexfdgco [ 1 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . gfpexfdgco [ 2 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
gfpexfdgco [ 3 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . hzqctpxfat = 0.0F ;
ksm0js2nhsy . otjykwnhb3s . c1mdnmjvwk [ 0 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . c1mdnmjvwk [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
jlk5l1nxst [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . jlk5l1nxst [ 1 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . bqtz4lp0uq [ 0 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . bqtz4lp0uq [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
a2spex0c5a = 0.0F ; ksm0js2nhsy . otjykwnhb3s . maxn0002kp [ 0 ] = 0.0F ;
ksm0js2nhsy . otjykwnhb3s . maxn0002kp [ 1 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . maxn0002kp [ 2 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
maxn0002kp [ 3 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . gusraudqef [ 0 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . gusraudqef [ 1 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . deejr5w5jc [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
deejr5w5jc [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . a55imxpels [ 0 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . a55imxpels [ 1 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . ee4exjimpd [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
ee4exjimpd [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . ee4exjimpd [ 2 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . ee4exjimpd [ 3 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . plbhaqnn1y [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
plbhaqnn1y [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . plbhaqnn1y [ 2 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . nuasakb4gb [ 0 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . nuasakb4gb [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
hwxrjq0it0 [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . hwxrjq0it0 [ 1 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . bmrdaxfgpr [ 0 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . bmrdaxfgpr [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
bmrdaxfgpr [ 2 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . bmrdaxfgpr [ 3 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . fqjnqqkpgy [ 0 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . fqjnqqkpgy [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
gj4cf0tyj5 [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . gj4cf0tyj5 [ 1 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . j4qe4nfjsv [ 0 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . j4qe4nfjsv [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
bsmav2qoqf [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . bsmav2qoqf [ 1 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . bsmav2qoqf [ 2 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . bsmav2qoqf [ 3 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
oaihmoohg4 [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . oaihmoohg4 [ 1 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . dmeohakamk [ 0 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . dmeohakamk [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
dmeohakamk [ 2 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . dmeohakamk [ 3 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . h4vd5izemq [ 0 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . h4vd5izemq [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
h4vd5izemq [ 2 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . h4vd5izemq [ 3 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . adokisptgo [ 0 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . adokisptgo [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
adokisptgo [ 2 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . adokisptgo [ 3 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . dzof3xbsea = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
ipbtas1tys . jc2u5ap2bv [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . ipbtas1tys
. jc2u5ap2bv [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . bm3dpymkhz .
bomzmgvf4n [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . bm3dpymkhz . bomzmgvf4n
[ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . ifzbhw4mrws . jc2u5ap2bv [ 0 ] =
0.0F ; ksm0js2nhsy . otjykwnhb3s . ifzbhw4mrws . jc2u5ap2bv [ 1 ] = 0.0F ;
ksm0js2nhsy . otjykwnhb3s . phrpuocqmvu . bomzmgvf4n [ 0 ] = 0.0F ;
ksm0js2nhsy . otjykwnhb3s . phrpuocqmvu . bomzmgvf4n [ 1 ] = 0.0F ; } ( void
) memset ( ( void * ) & dqykr4eggmg , 0 , sizeof ( nllkaxiwhzw ) ) ;
dqykr4eggmg . mdrqgzmhxm [ 0 ] = 0.0 ; dqykr4eggmg . mdrqgzmhxm [ 1 ] = 0.0 ;
dqykr4eggmg . fdg0ctxzju [ 0 ] = 0.0 ; dqykr4eggmg . fdg0ctxzju [ 1 ] = 0.0 ;
dqykr4eggmg . kuiiaoa3ie = 0.0 ; dqykr4eggmg . bcinjdyi1p [ 0 ] = 0.0 ;
dqykr4eggmg . bcinjdyi1p [ 1 ] = 0.0 ; dqykr4eggmg . bcinjdyi1p [ 2 ] = 0.0 ;
dqykr4eggmg . bcinjdyi1p [ 3 ] = 0.0 ; dqykr4eggmg . epb50zhs4j = 0.0 ;
dqykr4eggmg . otjykwnhb3s . mi4mocbazh = 0.0 ; dqykr4eggmg . otjykwnhb3s .
mtonzezz2z [ 0 ] = 0.0 ; dqykr4eggmg . otjykwnhb3s . mtonzezz2z [ 1 ] = 0.0 ;
dqykr4eggmg . otjykwnhb3s . ddv3ztj2wp [ 0 ] = 0.0 ; dqykr4eggmg .
otjykwnhb3s . ddv3ztj2wp [ 1 ] = 0.0 ; dqykr4eggmg . otjykwnhb3s . ddv3ztj2wp
[ 2 ] = 0.0 ; dqykr4eggmg . otjykwnhb3s . immlnclh1f = 0.0 ; dqykr4eggmg .
otjykwnhb3s . pjymztciyn = 0.0 ; dqykr4eggmg . otjykwnhb3s . ebmc4lyjdd [ 0 ]
= 0.0 ; dqykr4eggmg . otjykwnhb3s . ebmc4lyjdd [ 1 ] = 0.0 ; dqykr4eggmg .
otjykwnhb3s . ebmc4lyjdd [ 2 ] = 0.0 ; dqykr4eggmg . otjykwnhb3s . bw2ribqmwm
= 0.0 ; dqykr4eggmg . otjykwnhb3s . f2ynnmexgv = 0.0 ; dqykr4eggmg .
otjykwnhb3s . b3fmbw5stg [ 0 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s .
b3fmbw5stg [ 1 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s . aq2aymvaio [ 0 ] = 0.0F
; dqykr4eggmg . otjykwnhb3s . aq2aymvaio [ 1 ] = 0.0F ; dqykr4eggmg .
otjykwnhb3s . aq2aymvaio [ 2 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s .
dzwopklw3c = 0.0F ; { int32_T i ; for ( i = 0 ; i < 15 ; i ++ ) { dqykr4eggmg
. otjykwnhb3s . d4fp3a2mpz [ i ] = 0.0F ; } } dqykr4eggmg . otjykwnhb3s .
fl0vv44tbs [ 0 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s . fl0vv44tbs [ 1 ] = 0.0F
; dqykr4eggmg . otjykwnhb3s . as5a0ikbk1 [ 0 ] = 0.0F ; dqykr4eggmg .
otjykwnhb3s . as5a0ikbk1 [ 1 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s .
ncgo1wegzg = 0.0F ; dqykr4eggmg . otjykwnhb3s . mirtkskmtr = 0.0F ; { int32_T
i ; for ( i = 0 ; i < 5 ; i ++ ) { dqykr4eggmg . otjykwnhb3s . jduomia1pb [ i
] = 0.0F ; } } dqykr4eggmg . otjykwnhb3s . od5c00niot [ 0 ] = 0.0F ;
dqykr4eggmg . otjykwnhb3s . od5c00niot [ 1 ] = 0.0F ; dqykr4eggmg .
otjykwnhb3s . od5c00niot [ 2 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s .
od5c00niot [ 3 ] = 0.0F ; { int32_T i ; for ( i = 0 ; i < 10 ; i ++ ) {
dqykr4eggmg . otjykwnhb3s . dqfv1m130o [ i ] = 0.0F ; } } dqykr4eggmg .
otjykwnhb3s . meognsjf1t [ 0 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s .
meognsjf1t [ 1 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s . gcgpru4rcb [ 0 ] = 0.0F
; dqykr4eggmg . otjykwnhb3s . gcgpru4rcb [ 1 ] = 0.0F ; dqykr4eggmg .
otjykwnhb3s . peklmaellz [ 0 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s .
peklmaellz [ 1 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s . bsetqjfri4 = 0.0F ;
dqykr4eggmg . otjykwnhb3s . dsjbzv2lh4 [ 0 ] = 0.0F ; dqykr4eggmg .
otjykwnhb3s . dsjbzv2lh4 [ 1 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s .
gixvkpnpus [ 0 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s . gixvkpnpus [ 1 ] = 0.0F
; dqykr4eggmg . otjykwnhb3s . ow5xb5ovt0 [ 0 ] = 0.0F ; dqykr4eggmg .
otjykwnhb3s . ow5xb5ovt0 [ 1 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s .
krs1cvkxzk [ 0 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s . krs1cvkxzk [ 1 ] = 0.0F
; dqykr4eggmg . otjykwnhb3s . c4kiksmhh2 = 0.0F ; dqykr4eggmg . otjykwnhb3s .
orkq4iljgu = 0.0F ; dqykr4eggmg . otjykwnhb3s . b1nmhkw4zo = 0.0F ;
dqykr4eggmg . otjykwnhb3s . n0mydijbcx = 0.0F ; dqykr4eggmg . otjykwnhb3s .
iwg03owvar = 0.0F ; dqykr4eggmg . otjykwnhb3s . mf2pp40f5v [ 0 ] = 0.0F ;
dqykr4eggmg . otjykwnhb3s . mf2pp40f5v [ 1 ] = 0.0F ; dqykr4eggmg .
otjykwnhb3s . pwlp5beuqs [ 0 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s .
pwlp5beuqs [ 1 ] = 0.0F ; flightControlSystem_InitializeDataMapInfo (
accn4cnket , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) &&
( rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( accn4cnket -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
accn4cnket -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( accn4cnket -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } f51itwtzkqf . otjykwnhb3s . b1rw3rggh2 =
UNINITIALIZED_ZCSIG ; } void mr_flightControlSystem_MdlInfoRegFcn ( SimStruct
* mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal = 0 ; {
boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_flightControlSystem , 206 ) ; * retVal = 1 ; } static void
mr_flightControlSystem_cacheDataAsMxArray ( mxArray * destArray , mwIndex i ,
int j , const void * srcData , size_t numBytes ) ; static void
mr_flightControlSystem_cacheDataAsMxArray ( mxArray * destArray , mwIndex i ,
int j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_flightControlSystem_restoreDataFromMxArray ( void *
destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ;
static void mr_flightControlSystem_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_flightControlSystem_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex
i , int j , uint_T bitVal ) ; static void
mr_flightControlSystem_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex
i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_flightControlSystem_extractBitFieldFromMxArray ( const mxArray * srcArray
, mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_flightControlSystem_extractBitFieldFromMxArray ( const mxArray * srcArray
, mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_flightControlSystem_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_flightControlSystem_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_flightControlSystem_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_flightControlSystem_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_flightControlSystem_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_flightControlSystem_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_flightControlSystem_extractBitFieldFromCellArrayWithOffset ( const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_flightControlSystem_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_flightControlSystem_GetDWork ( ) {
static const char * ssDWFieldNames [ 3 ] = { "ksm0js2nhsy" , "dqykr4eggmg" ,
"f51itwtzkqf" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 ,
ssDWFieldNames ) ; mr_flightControlSystem_cacheDataAsMxArray ( ssDW , 0 , 0 ,
( const void * ) & ( ksm0js2nhsy ) , sizeof ( ksm0js2nhsy ) ) ; { static
const char * rtdwDataFieldNames [ 76 ] = { "dqykr4eggmg.mdrqgzmhxm" ,
"dqykr4eggmg.fdg0ctxzju" , "dqykr4eggmg.kuiiaoa3ie" ,
"dqykr4eggmg.bcinjdyi1p" , "dqykr4eggmg.epb50zhs4j" ,
"dqykr4eggmg.l152eirbdu" , "dqykr4eggmg.btek1dk1x3" ,
"dqykr4eggmg.jw22f2in0f" , "dqykr4eggmg.jjrfotind4" ,
"dqykr4eggmg.otjykwnhb3s.mi4mocbazh" , "dqykr4eggmg.otjykwnhb3s.mtonzezz2z" ,
"dqykr4eggmg.otjykwnhb3s.ddv3ztj2wp" , "dqykr4eggmg.otjykwnhb3s.immlnclh1f" ,
"dqykr4eggmg.otjykwnhb3s.pjymztciyn" , "dqykr4eggmg.otjykwnhb3s.ebmc4lyjdd" ,
"dqykr4eggmg.otjykwnhb3s.bw2ribqmwm" , "dqykr4eggmg.otjykwnhb3s.f2ynnmexgv" ,
"dqykr4eggmg.otjykwnhb3s.b3fmbw5stg" , "dqykr4eggmg.otjykwnhb3s.aq2aymvaio" ,
"dqykr4eggmg.otjykwnhb3s.dzwopklw3c" , "dqykr4eggmg.otjykwnhb3s.d4fp3a2mpz" ,
"dqykr4eggmg.otjykwnhb3s.fl0vv44tbs" , "dqykr4eggmg.otjykwnhb3s.as5a0ikbk1" ,
"dqykr4eggmg.otjykwnhb3s.ncgo1wegzg" , "dqykr4eggmg.otjykwnhb3s.mirtkskmtr" ,
"dqykr4eggmg.otjykwnhb3s.jduomia1pb" , "dqykr4eggmg.otjykwnhb3s.od5c00niot" ,
"dqykr4eggmg.otjykwnhb3s.dqfv1m130o" , "dqykr4eggmg.otjykwnhb3s.meognsjf1t" ,
"dqykr4eggmg.otjykwnhb3s.gcgpru4rcb" , "dqykr4eggmg.otjykwnhb3s.peklmaellz" ,
"dqykr4eggmg.otjykwnhb3s.bsetqjfri4" , "dqykr4eggmg.otjykwnhb3s.dsjbzv2lh4" ,
"dqykr4eggmg.otjykwnhb3s.gixvkpnpus" , "dqykr4eggmg.otjykwnhb3s.ow5xb5ovt0" ,
"dqykr4eggmg.otjykwnhb3s.krs1cvkxzk" , "dqykr4eggmg.otjykwnhb3s.c4kiksmhh2" ,
"dqykr4eggmg.otjykwnhb3s.bbkjtf4kuy" , "dqykr4eggmg.otjykwnhb3s.l3lcputuyl" ,
"dqykr4eggmg.otjykwnhb3s.pjgu33zeph" , "dqykr4eggmg.otjykwnhb3s.dxm3w2i52x" ,
"dqykr4eggmg.otjykwnhb3s.orkq4iljgu" , "dqykr4eggmg.otjykwnhb3s.b1nmhkw4zo" ,
"dqykr4eggmg.otjykwnhb3s.n0mydijbcx" , "dqykr4eggmg.otjykwnhb3s.iwg03owvar" ,
"dqykr4eggmg.otjykwnhb3s.mf2pp40f5v" , "dqykr4eggmg.otjykwnhb3s.pwlp5beuqs" ,
"dqykr4eggmg.otjykwnhb3s.gaxgdudnvc" , "dqykr4eggmg.otjykwnhb3s.dq5lalhp1e" ,
"dqykr4eggmg.otjykwnhb3s.fpr1qi0oiw" , "dqykr4eggmg.otjykwnhb3s.klyrn0mwhb" ,
"dqykr4eggmg.otjykwnhb3s.mfifybuxty" , "dqykr4eggmg.otjykwnhb3s.a1oodzfxvv" ,
"dqykr4eggmg.otjykwnhb3s.mgysgsd2g4" , "dqykr4eggmg.otjykwnhb3s.idn2v5d33m" ,
"dqykr4eggmg.otjykwnhb3s.de4yc1bkky" , "dqykr4eggmg.otjykwnhb3s.jd3dqtmo2p" ,
"dqykr4eggmg.otjykwnhb3s.f1jy25gy04" , "dqykr4eggmg.otjykwnhb3s.gdn4qfzvsk" ,
"dqykr4eggmg.otjykwnhb3s.cqi2pi21ow" , "dqykr4eggmg.otjykwnhb3s.kh1khihcrt" ,
"dqykr4eggmg.otjykwnhb3s.iftedegxuv" , "dqykr4eggmg.otjykwnhb3s.g4zcogq4xi" ,
"dqykr4eggmg.otjykwnhb3s.ipbtas1tys.ley0an2uip" ,
"dqykr4eggmg.otjykwnhb3s.ipbtas1tys.njk4w5jozv" ,
"dqykr4eggmg.otjykwnhb3s.bm3dpymkhz.mkkaskumzr" ,
"dqykr4eggmg.otjykwnhb3s.bm3dpymkhz.jhr0womnye" ,
"dqykr4eggmg.otjykwnhb3s.ifzbhw4mrws.ley0an2uip" ,
"dqykr4eggmg.otjykwnhb3s.ifzbhw4mrws.njk4w5jozv" ,
"dqykr4eggmg.otjykwnhb3s.phrpuocqmvu.mkkaskumzr" ,
"dqykr4eggmg.otjykwnhb3s.phrpuocqmvu.jhr0womnye" ,
"dqykr4eggmg.otjykwnhb3s.ciy1c2o0rv.fau3qf03xm" ,
"dqykr4eggmg.otjykwnhb3s.jvbbqhrajh.fau3qf03xm" ,
"dqykr4eggmg.otjykwnhb3s.clwiujjdqo.fau3qf03xm" ,
"dqykr4eggmg.otjykwnhb3s.acfz1zxm4t.fau3qf03xm" ,
"dqykr4eggmg.otjykwnhb3s.ghadbep3bbv.fau3qf03xm" , } ; mxArray * rtdwData =
mxCreateStructMatrix ( 1 , 1 , 76 , rtdwDataFieldNames ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void *
) & ( dqykr4eggmg . mdrqgzmhxm ) , sizeof ( dqykr4eggmg . mdrqgzmhxm ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void *
) & ( dqykr4eggmg . fdg0ctxzju ) , sizeof ( dqykr4eggmg . fdg0ctxzju ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void *
) & ( dqykr4eggmg . kuiiaoa3ie ) , sizeof ( dqykr4eggmg . kuiiaoa3ie ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void *
) & ( dqykr4eggmg . bcinjdyi1p ) , sizeof ( dqykr4eggmg . bcinjdyi1p ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void *
) & ( dqykr4eggmg . epb50zhs4j ) , sizeof ( dqykr4eggmg . epb50zhs4j ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void *
) & ( dqykr4eggmg . l152eirbdu ) , sizeof ( dqykr4eggmg . l152eirbdu ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void *
) & ( dqykr4eggmg . btek1dk1x3 ) , sizeof ( dqykr4eggmg . btek1dk1x3 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void *
) & ( dqykr4eggmg . jw22f2in0f ) , sizeof ( dqykr4eggmg . jw22f2in0f ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void *
) & ( dqykr4eggmg . jjrfotind4 ) , sizeof ( dqykr4eggmg . jjrfotind4 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void *
) & ( dqykr4eggmg . otjykwnhb3s . mi4mocbazh ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . mi4mocbazh ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 10 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
mtonzezz2z ) , sizeof ( dqykr4eggmg . otjykwnhb3s . mtonzezz2z ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . ddv3ztj2wp ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . ddv3ztj2wp ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 12 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
immlnclh1f ) , sizeof ( dqykr4eggmg . otjykwnhb3s . immlnclh1f ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . pjymztciyn ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . pjymztciyn ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 14 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
ebmc4lyjdd ) , sizeof ( dqykr4eggmg . otjykwnhb3s . ebmc4lyjdd ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . bw2ribqmwm ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . bw2ribqmwm ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 16 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
f2ynnmexgv ) , sizeof ( dqykr4eggmg . otjykwnhb3s . f2ynnmexgv ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . b3fmbw5stg ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . b3fmbw5stg ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 18 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
aq2aymvaio ) , sizeof ( dqykr4eggmg . otjykwnhb3s . aq2aymvaio ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . dzwopklw3c ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . dzwopklw3c ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 20 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
d4fp3a2mpz ) , sizeof ( dqykr4eggmg . otjykwnhb3s . d4fp3a2mpz ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . fl0vv44tbs ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . fl0vv44tbs ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 22 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
as5a0ikbk1 ) , sizeof ( dqykr4eggmg . otjykwnhb3s . as5a0ikbk1 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . ncgo1wegzg ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . ncgo1wegzg ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 24 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
mirtkskmtr ) , sizeof ( dqykr4eggmg . otjykwnhb3s . mirtkskmtr ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 25 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . jduomia1pb ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . jduomia1pb ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 26 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
od5c00niot ) , sizeof ( dqykr4eggmg . otjykwnhb3s . od5c00niot ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 27 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . dqfv1m130o ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . dqfv1m130o ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 28 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
meognsjf1t ) , sizeof ( dqykr4eggmg . otjykwnhb3s . meognsjf1t ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 29 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . gcgpru4rcb ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . gcgpru4rcb ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 30 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
peklmaellz ) , sizeof ( dqykr4eggmg . otjykwnhb3s . peklmaellz ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 31 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . bsetqjfri4 ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . bsetqjfri4 ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 32 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
dsjbzv2lh4 ) , sizeof ( dqykr4eggmg . otjykwnhb3s . dsjbzv2lh4 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 33 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . gixvkpnpus ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . gixvkpnpus ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 34 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
ow5xb5ovt0 ) , sizeof ( dqykr4eggmg . otjykwnhb3s . ow5xb5ovt0 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 35 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . krs1cvkxzk ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . krs1cvkxzk ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 36 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
c4kiksmhh2 ) , sizeof ( dqykr4eggmg . otjykwnhb3s . c4kiksmhh2 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 37 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . bbkjtf4kuy ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . bbkjtf4kuy ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 38 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
l3lcputuyl ) , sizeof ( dqykr4eggmg . otjykwnhb3s . l3lcputuyl ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 39 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . pjgu33zeph ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . pjgu33zeph ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 40 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
dxm3w2i52x ) , sizeof ( dqykr4eggmg . otjykwnhb3s . dxm3w2i52x ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 41 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . orkq4iljgu ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . orkq4iljgu ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 42 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
b1nmhkw4zo ) , sizeof ( dqykr4eggmg . otjykwnhb3s . b1nmhkw4zo ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 43 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . n0mydijbcx ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . n0mydijbcx ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 44 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
iwg03owvar ) , sizeof ( dqykr4eggmg . otjykwnhb3s . iwg03owvar ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 45 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . mf2pp40f5v ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . mf2pp40f5v ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 46 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
pwlp5beuqs ) , sizeof ( dqykr4eggmg . otjykwnhb3s . pwlp5beuqs ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 47 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . gaxgdudnvc ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . gaxgdudnvc ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 48 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
dq5lalhp1e ) , sizeof ( dqykr4eggmg . otjykwnhb3s . dq5lalhp1e ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 49 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . fpr1qi0oiw ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . fpr1qi0oiw ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 50 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
klyrn0mwhb ) , sizeof ( dqykr4eggmg . otjykwnhb3s . klyrn0mwhb ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 51 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . mfifybuxty ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . mfifybuxty ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 52 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
a1oodzfxvv ) , sizeof ( dqykr4eggmg . otjykwnhb3s . a1oodzfxvv ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 53 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . mgysgsd2g4 ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . mgysgsd2g4 ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 54 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
idn2v5d33m ) , sizeof ( dqykr4eggmg . otjykwnhb3s . idn2v5d33m ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 55 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . de4yc1bkky ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . de4yc1bkky ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 56 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
jd3dqtmo2p ) , sizeof ( dqykr4eggmg . otjykwnhb3s . jd3dqtmo2p ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 57 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . f1jy25gy04 ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . f1jy25gy04 ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 58 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
gdn4qfzvsk ) , sizeof ( dqykr4eggmg . otjykwnhb3s . gdn4qfzvsk ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 59 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . cqi2pi21ow ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . cqi2pi21ow ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 60 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
kh1khihcrt ) , sizeof ( dqykr4eggmg . otjykwnhb3s . kh1khihcrt ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 61 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . iftedegxuv ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . iftedegxuv ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 62 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
g4zcogq4xi ) , sizeof ( dqykr4eggmg . otjykwnhb3s . g4zcogq4xi ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 63 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . ipbtas1tys . ley0an2uip ) , sizeof (
dqykr4eggmg . otjykwnhb3s . ipbtas1tys . ley0an2uip ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 64 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . ipbtas1tys . njk4w5jozv ) , sizeof (
dqykr4eggmg . otjykwnhb3s . ipbtas1tys . njk4w5jozv ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 65 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . bm3dpymkhz . mkkaskumzr ) , sizeof (
dqykr4eggmg . otjykwnhb3s . bm3dpymkhz . mkkaskumzr ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 66 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . bm3dpymkhz . jhr0womnye ) , sizeof (
dqykr4eggmg . otjykwnhb3s . bm3dpymkhz . jhr0womnye ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 67 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . ifzbhw4mrws . ley0an2uip ) , sizeof (
dqykr4eggmg . otjykwnhb3s . ifzbhw4mrws . ley0an2uip ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 68 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . ifzbhw4mrws . njk4w5jozv ) , sizeof (
dqykr4eggmg . otjykwnhb3s . ifzbhw4mrws . njk4w5jozv ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 69 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . phrpuocqmvu . mkkaskumzr ) , sizeof (
dqykr4eggmg . otjykwnhb3s . phrpuocqmvu . mkkaskumzr ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 70 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . phrpuocqmvu . jhr0womnye ) , sizeof (
dqykr4eggmg . otjykwnhb3s . phrpuocqmvu . jhr0womnye ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 71 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . ciy1c2o0rv . fau3qf03xm ) , sizeof (
dqykr4eggmg . otjykwnhb3s . ciy1c2o0rv . fau3qf03xm ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 72 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . jvbbqhrajh . fau3qf03xm ) , sizeof (
dqykr4eggmg . otjykwnhb3s . jvbbqhrajh . fau3qf03xm ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 73 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . clwiujjdqo . fau3qf03xm ) , sizeof (
dqykr4eggmg . otjykwnhb3s . clwiujjdqo . fau3qf03xm ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 74 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . acfz1zxm4t . fau3qf03xm ) , sizeof (
dqykr4eggmg . otjykwnhb3s . acfz1zxm4t . fau3qf03xm ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 75 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . ghadbep3bbv . fau3qf03xm ) , sizeof (
dqykr4eggmg . otjykwnhb3s . ghadbep3bbv . fau3qf03xm ) ) ; mxSetFieldByNumber
( ssDW , 0 , 1 , rtdwData ) ; } mr_flightControlSystem_cacheDataAsMxArray (
ssDW , 0 , 2 , ( const void * ) & ( f51itwtzkqf ) , sizeof ( f51itwtzkqf ) )
; return ssDW ; } void mr_flightControlSystem_SetDWork ( const mxArray * ssDW
) { ( void ) ssDW ; mr_flightControlSystem_restoreDataFromMxArray ( ( void *
) & ( ksm0js2nhsy ) , ssDW , 0 , 0 , sizeof ( ksm0js2nhsy ) ) ; { const
mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
mdrqgzmhxm ) , rtdwData , 0 , 0 , sizeof ( dqykr4eggmg . mdrqgzmhxm ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
fdg0ctxzju ) , rtdwData , 0 , 1 , sizeof ( dqykr4eggmg . fdg0ctxzju ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kuiiaoa3ie ) , rtdwData , 0 , 2 , sizeof ( dqykr4eggmg . kuiiaoa3ie ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
bcinjdyi1p ) , rtdwData , 0 , 3 , sizeof ( dqykr4eggmg . bcinjdyi1p ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
epb50zhs4j ) , rtdwData , 0 , 4 , sizeof ( dqykr4eggmg . epb50zhs4j ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
l152eirbdu ) , rtdwData , 0 , 5 , sizeof ( dqykr4eggmg . l152eirbdu ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
btek1dk1x3 ) , rtdwData , 0 , 6 , sizeof ( dqykr4eggmg . btek1dk1x3 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
jw22f2in0f ) , rtdwData , 0 , 7 , sizeof ( dqykr4eggmg . jw22f2in0f ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
jjrfotind4 ) , rtdwData , 0 , 8 , sizeof ( dqykr4eggmg . jjrfotind4 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . mi4mocbazh ) , rtdwData , 0 , 9 , sizeof ( dqykr4eggmg .
otjykwnhb3s . mi4mocbazh ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . mtonzezz2z ) , rtdwData , 0 , 10
, sizeof ( dqykr4eggmg . otjykwnhb3s . mtonzezz2z ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . ddv3ztj2wp ) , rtdwData , 0 , 11 , sizeof ( dqykr4eggmg .
otjykwnhb3s . ddv3ztj2wp ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . immlnclh1f ) , rtdwData , 0 , 12
, sizeof ( dqykr4eggmg . otjykwnhb3s . immlnclh1f ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . pjymztciyn ) , rtdwData , 0 , 13 , sizeof ( dqykr4eggmg .
otjykwnhb3s . pjymztciyn ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . ebmc4lyjdd ) , rtdwData , 0 , 14
, sizeof ( dqykr4eggmg . otjykwnhb3s . ebmc4lyjdd ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . bw2ribqmwm ) , rtdwData , 0 , 15 , sizeof ( dqykr4eggmg .
otjykwnhb3s . bw2ribqmwm ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . f2ynnmexgv ) , rtdwData , 0 , 16
, sizeof ( dqykr4eggmg . otjykwnhb3s . f2ynnmexgv ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . b3fmbw5stg ) , rtdwData , 0 , 17 , sizeof ( dqykr4eggmg .
otjykwnhb3s . b3fmbw5stg ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . aq2aymvaio ) , rtdwData , 0 , 18
, sizeof ( dqykr4eggmg . otjykwnhb3s . aq2aymvaio ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . dzwopklw3c ) , rtdwData , 0 , 19 , sizeof ( dqykr4eggmg .
otjykwnhb3s . dzwopklw3c ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . d4fp3a2mpz ) , rtdwData , 0 , 20
, sizeof ( dqykr4eggmg . otjykwnhb3s . d4fp3a2mpz ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . fl0vv44tbs ) , rtdwData , 0 , 21 , sizeof ( dqykr4eggmg .
otjykwnhb3s . fl0vv44tbs ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . as5a0ikbk1 ) , rtdwData , 0 , 22
, sizeof ( dqykr4eggmg . otjykwnhb3s . as5a0ikbk1 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . ncgo1wegzg ) , rtdwData , 0 , 23 , sizeof ( dqykr4eggmg .
otjykwnhb3s . ncgo1wegzg ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . mirtkskmtr ) , rtdwData , 0 , 24
, sizeof ( dqykr4eggmg . otjykwnhb3s . mirtkskmtr ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . jduomia1pb ) , rtdwData , 0 , 25 , sizeof ( dqykr4eggmg .
otjykwnhb3s . jduomia1pb ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . od5c00niot ) , rtdwData , 0 , 26
, sizeof ( dqykr4eggmg . otjykwnhb3s . od5c00niot ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . dqfv1m130o ) , rtdwData , 0 , 27 , sizeof ( dqykr4eggmg .
otjykwnhb3s . dqfv1m130o ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . meognsjf1t ) , rtdwData , 0 , 28
, sizeof ( dqykr4eggmg . otjykwnhb3s . meognsjf1t ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . gcgpru4rcb ) , rtdwData , 0 , 29 , sizeof ( dqykr4eggmg .
otjykwnhb3s . gcgpru4rcb ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . peklmaellz ) , rtdwData , 0 , 30
, sizeof ( dqykr4eggmg . otjykwnhb3s . peklmaellz ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . bsetqjfri4 ) , rtdwData , 0 , 31 , sizeof ( dqykr4eggmg .
otjykwnhb3s . bsetqjfri4 ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . dsjbzv2lh4 ) , rtdwData , 0 , 32
, sizeof ( dqykr4eggmg . otjykwnhb3s . dsjbzv2lh4 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . gixvkpnpus ) , rtdwData , 0 , 33 , sizeof ( dqykr4eggmg .
otjykwnhb3s . gixvkpnpus ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . ow5xb5ovt0 ) , rtdwData , 0 , 34
, sizeof ( dqykr4eggmg . otjykwnhb3s . ow5xb5ovt0 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . krs1cvkxzk ) , rtdwData , 0 , 35 , sizeof ( dqykr4eggmg .
otjykwnhb3s . krs1cvkxzk ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . c4kiksmhh2 ) , rtdwData , 0 , 36
, sizeof ( dqykr4eggmg . otjykwnhb3s . c4kiksmhh2 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . bbkjtf4kuy ) , rtdwData , 0 , 37 , sizeof ( dqykr4eggmg .
otjykwnhb3s . bbkjtf4kuy ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . l3lcputuyl ) , rtdwData , 0 , 38
, sizeof ( dqykr4eggmg . otjykwnhb3s . l3lcputuyl ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . pjgu33zeph ) , rtdwData , 0 , 39 , sizeof ( dqykr4eggmg .
otjykwnhb3s . pjgu33zeph ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . dxm3w2i52x ) , rtdwData , 0 , 40
, sizeof ( dqykr4eggmg . otjykwnhb3s . dxm3w2i52x ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . orkq4iljgu ) , rtdwData , 0 , 41 , sizeof ( dqykr4eggmg .
otjykwnhb3s . orkq4iljgu ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . b1nmhkw4zo ) , rtdwData , 0 , 42
, sizeof ( dqykr4eggmg . otjykwnhb3s . b1nmhkw4zo ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . n0mydijbcx ) , rtdwData , 0 , 43 , sizeof ( dqykr4eggmg .
otjykwnhb3s . n0mydijbcx ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . iwg03owvar ) , rtdwData , 0 , 44
, sizeof ( dqykr4eggmg . otjykwnhb3s . iwg03owvar ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . mf2pp40f5v ) , rtdwData , 0 , 45 , sizeof ( dqykr4eggmg .
otjykwnhb3s . mf2pp40f5v ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . pwlp5beuqs ) , rtdwData , 0 , 46
, sizeof ( dqykr4eggmg . otjykwnhb3s . pwlp5beuqs ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . gaxgdudnvc ) , rtdwData , 0 , 47 , sizeof ( dqykr4eggmg .
otjykwnhb3s . gaxgdudnvc ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . dq5lalhp1e ) , rtdwData , 0 , 48
, sizeof ( dqykr4eggmg . otjykwnhb3s . dq5lalhp1e ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . fpr1qi0oiw ) , rtdwData , 0 , 49 , sizeof ( dqykr4eggmg .
otjykwnhb3s . fpr1qi0oiw ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . klyrn0mwhb ) , rtdwData , 0 , 50
, sizeof ( dqykr4eggmg . otjykwnhb3s . klyrn0mwhb ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . mfifybuxty ) , rtdwData , 0 , 51 , sizeof ( dqykr4eggmg .
otjykwnhb3s . mfifybuxty ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . a1oodzfxvv ) , rtdwData , 0 , 52
, sizeof ( dqykr4eggmg . otjykwnhb3s . a1oodzfxvv ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . mgysgsd2g4 ) , rtdwData , 0 , 53 , sizeof ( dqykr4eggmg .
otjykwnhb3s . mgysgsd2g4 ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . idn2v5d33m ) , rtdwData , 0 , 54
, sizeof ( dqykr4eggmg . otjykwnhb3s . idn2v5d33m ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . de4yc1bkky ) , rtdwData , 0 , 55 , sizeof ( dqykr4eggmg .
otjykwnhb3s . de4yc1bkky ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . jd3dqtmo2p ) , rtdwData , 0 , 56
, sizeof ( dqykr4eggmg . otjykwnhb3s . jd3dqtmo2p ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . f1jy25gy04 ) , rtdwData , 0 , 57 , sizeof ( dqykr4eggmg .
otjykwnhb3s . f1jy25gy04 ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . gdn4qfzvsk ) , rtdwData , 0 , 58
, sizeof ( dqykr4eggmg . otjykwnhb3s . gdn4qfzvsk ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . cqi2pi21ow ) , rtdwData , 0 , 59 , sizeof ( dqykr4eggmg .
otjykwnhb3s . cqi2pi21ow ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . kh1khihcrt ) , rtdwData , 0 , 60
, sizeof ( dqykr4eggmg . otjykwnhb3s . kh1khihcrt ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . iftedegxuv ) , rtdwData , 0 , 61 , sizeof ( dqykr4eggmg .
otjykwnhb3s . iftedegxuv ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . g4zcogq4xi ) , rtdwData , 0 , 62
, sizeof ( dqykr4eggmg . otjykwnhb3s . g4zcogq4xi ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . ipbtas1tys . ley0an2uip ) , rtdwData , 0 , 63 , sizeof (
dqykr4eggmg . otjykwnhb3s . ipbtas1tys . ley0an2uip ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . ipbtas1tys . njk4w5jozv ) , rtdwData , 0 , 64 , sizeof (
dqykr4eggmg . otjykwnhb3s . ipbtas1tys . njk4w5jozv ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . bm3dpymkhz . mkkaskumzr ) , rtdwData , 0 , 65 , sizeof (
dqykr4eggmg . otjykwnhb3s . bm3dpymkhz . mkkaskumzr ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . bm3dpymkhz . jhr0womnye ) , rtdwData , 0 , 66 , sizeof (
dqykr4eggmg . otjykwnhb3s . bm3dpymkhz . jhr0womnye ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . ifzbhw4mrws . ley0an2uip ) , rtdwData , 0 , 67 , sizeof (
dqykr4eggmg . otjykwnhb3s . ifzbhw4mrws . ley0an2uip ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . ifzbhw4mrws . njk4w5jozv ) , rtdwData , 0 , 68 , sizeof (
dqykr4eggmg . otjykwnhb3s . ifzbhw4mrws . njk4w5jozv ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . phrpuocqmvu . mkkaskumzr ) , rtdwData , 0 , 69 , sizeof (
dqykr4eggmg . otjykwnhb3s . phrpuocqmvu . mkkaskumzr ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . phrpuocqmvu . jhr0womnye ) , rtdwData , 0 , 70 , sizeof (
dqykr4eggmg . otjykwnhb3s . phrpuocqmvu . jhr0womnye ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . ciy1c2o0rv . fau3qf03xm ) , rtdwData , 0 , 71 , sizeof (
dqykr4eggmg . otjykwnhb3s . ciy1c2o0rv . fau3qf03xm ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . jvbbqhrajh . fau3qf03xm ) , rtdwData , 0 , 72 , sizeof (
dqykr4eggmg . otjykwnhb3s . jvbbqhrajh . fau3qf03xm ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . clwiujjdqo . fau3qf03xm ) , rtdwData , 0 , 73 , sizeof (
dqykr4eggmg . otjykwnhb3s . clwiujjdqo . fau3qf03xm ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . acfz1zxm4t . fau3qf03xm ) , rtdwData , 0 , 74 , sizeof (
dqykr4eggmg . otjykwnhb3s . acfz1zxm4t . fau3qf03xm ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . ghadbep3bbv . fau3qf03xm ) , rtdwData , 0 , 75 , sizeof (
dqykr4eggmg . otjykwnhb3s . ghadbep3bbv . fau3qf03xm ) ) ; }
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( f51itwtzkqf )
, ssDW , 0 , 2 , sizeof ( f51itwtzkqf ) ) ; } void
mr_flightControlSystem_RegisterSimStateChecksum ( SimStruct * S ) { const
uint32_T chksum [ 4 ] = { 1822184971U , 1993745053U , 2313244580U ,
2620871885U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"flightControlSystem" , & chksum [ 0 ] ) ; } mxArray *
mr_flightControlSystem_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 1 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char * blockType [ 1 ] = { "MATLABSystem" , } ; static const char * blockPath
[ 1 ] = {
"flightControlSystem/Image Processing System/PARROT Image Conversion" , } ;
static const int reason [ 1 ] = { 6 , } ; for ( subs [ 0 ] = 0 ; subs [ 0 ] <
1 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset = mxCalcSingleSubscript (
data , 2 , subs ) ; mxSetCell ( data , offset , mxCreateString ( blockType [
subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset = mxCalcSingleSubscript ( data , 2
, subs ) ; mxSetCell ( data , offset , mxCreateString ( blockPath [ subs [ 0
] ] ) ) ; subs [ 1 ] = 2 ; offset = mxCalcSingleSubscript ( data , 2 , subs )
; mxSetCell ( data , offset , mxCreateDoubleScalar ( ( double ) reason [ subs
[ 0 ] ] ) ) ; } } return data ; } static void *
flightControlSystem_InitRestoreDataPtr = ( NULL ) ; void
mr_flightControlSystem_CreateInitRestoreData ( ) {
flightControlSystem_InitRestoreDataPtr = utMalloc ( sizeof ( dqykr4eggmg ) )
; memcpy ( flightControlSystem_InitRestoreDataPtr , ( void * ) & (
dqykr4eggmg ) , sizeof ( dqykr4eggmg ) ) ; } void
mr_flightControlSystem_CopyFromInitRestoreData ( ) { memcpy ( ( void * ) & (
dqykr4eggmg ) , flightControlSystem_InitRestoreDataPtr , sizeof ( dqykr4eggmg
) ) ; } void mr_flightControlSystem_DestroyInitRestoreData ( ) { utFree (
flightControlSystem_InitRestoreDataPtr ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
