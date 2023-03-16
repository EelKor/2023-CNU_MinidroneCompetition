#ifndef RTW_HEADER_flightControlSystem_h_
#define RTW_HEADER_flightControlSystem_h_
#ifndef flightControlSystem_COMMON_INCLUDES_
#define flightControlSystem_COMMON_INCLUDES_
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "libmwbwlookup_tbb.h"
#include "libmwcannythresholding_tbb.h"
#include "libmwgetnumcores.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwippreconstruct.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "flightControlSystem_types.h"
#include <stddef.h>
#include "rtGetInf.h"
#include "rtw_modelmap_simtarget.h"
#include <string.h>
#include "rt_nonfinite.h"
#include "zero_crossing_types.h"
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { int8_T fau3qf03xm ; } hrtts4l5bc ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real32_T bomzmgvf4n [ 2 ] ; } orji2pbk05 ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { int8_T mkkaskumzr ; boolean_T jhr0womnye ; } imbf3wrgri ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real32_T jc2u5ap2bv [ 2 ] ; } dyc32xehtl ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { int8_T ley0an2uip ; boolean_T njk4w5jozv ; } gabr0rnvjj ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real32_T hi5gqbqjyq_cl54gopm0x [ 16 ] ; real32_T
evstouefyu_kkiq3xxxve [ 12 ] ; real32_T jjbahtdunb_cxarnvbvui [ 9 ] ; real_T
b4lfjlgxec ; real_T nnthqeo0xb [ 2 ] ; real_T fb1afzxcm2 ; real_T g3zvud4ysq
; real_T dcpk0jldla [ 3 ] ; real_T imrz1volmu ; real_T hte1fpi5od [ 3 ] ;
real_T foobajajui [ 2 ] ; real_T mzcro4caxu [ 2 ] ; real_T jhtkvlotcj [ 2 ] ;
real_T iqocmhdfin [ 4 ] ; real32_T o340jloaui [ 8 ] ; real32_T
fb1afzxcm2_mbvzarwird [ 16 ] ; real_T mfeecyi5au_bhxxfovxdy [ 4 ] ; real_T
aq23pmjfqt_pbm3vprmfu [ 3 ] ; real_T jjbahtdunb_cv5hdgrwft [ 3 ] ; real32_T
dmeohakamk [ 4 ] ; real32_T h4vd5izemq [ 4 ] ; real32_T adokisptgo [ 4 ] ;
real32_T oy1omazh2e_o4f35lbcvx [ 4 ] ; real32_T h0lde0msdj_nyxm0bsxsn [ 4 ] ;
real32_T f2qgfhnyjz_fqdqrf4qbc [ 4 ] ; real_T lqqrqnfg0k [ 2 ] ; real_T
myx153u3em [ 2 ] ; real_T a33lpeqllh [ 2 ] ; real_T djerhkhvup_g2mlkqadfk [ 2
] ; real32_T p2nu5irp4m_g1smspu5ke [ 3 ] ; real32_T c5ja3qjwbe_merlcviukg [ 3
] ; real_T hd11alvebq_nz4o0shxby ; real_T oxza4umofr_ppxrqq0gsf ; real_T
bx132mxpul_llw0u2ae0v ; real_T unnamed_idx_2 ; real_T htv1xfy1hr_idx_0 ;
real_T ianmxnbaoq_idx_1 ; real_T htv1xfy1hr_idx_1 ; real_T aq23pmjfqt_tmp ;
real_T aq23pmjfqt_tmp_jwzvbuczlb ; real32_T mrrvozc1qc_dhmrxtyqop [ 2 ] ;
real32_T bjps1hfvua_guugdwf2m3 [ 2 ] ; real32_T olsfagmvoi_ldqodwenvz [ 2 ] ;
real32_T b5mq1a52pd_dhamdvybc1 [ 2 ] ; real32_T gfg0sju4bm_dypejvacrn [ 2 ] ;
real32_T fp3r4suywu_lxo5edjg3c [ 2 ] ; real32_T jifkbeu3xj_owjr1h1vqy [ 2 ] ;
real32_T ipa11olwgb_bjbgfqrolh [ 2 ] ; real32_T lqeik1h102_nuebgmauvi [ 2 ] ;
real32_T dosvknpiqk ; real32_T li2d3qqqn4 ; real32_T prfrp52vqr ; real32_T
a5i4fgo1s2 [ 2 ] ; real32_T lgxyarf22c [ 2 ] ; real32_T gfpexfdgco [ 4 ] ;
real32_T hzqctpxfat ; real32_T c1mdnmjvwk [ 2 ] ; real32_T jlk5l1nxst [ 2 ] ;
real32_T bqtz4lp0uq [ 2 ] ; real32_T a2spex0c5a ; real32_T maxn0002kp [ 4 ] ;
real32_T gusraudqef [ 2 ] ; real32_T deejr5w5jc [ 2 ] ; real32_T a55imxpels [
2 ] ; real32_T ee4exjimpd [ 4 ] ; real32_T plbhaqnn1y [ 3 ] ; real32_T
evofcbwaww [ 16 ] ; real32_T nuasakb4gb [ 2 ] ; real32_T hwxrjq0it0 [ 2 ] ;
real32_T bmrdaxfgpr [ 4 ] ; real32_T fqjnqqkpgy [ 2 ] ; real32_T gj4cf0tyj5 [
2 ] ; real32_T j4qe4nfjsv [ 2 ] ; real32_T bsmav2qoqf [ 4 ] ; real32_T
oaihmoohg4 [ 2 ] ; real32_T bgjnlzeaxl [ 8 ] ; real32_T dzof3xbsea ; real32_T
acc1 ; real32_T h3hwnlathw_bsqwvugooi ; real32_T ljo1dpaub4_lnjdk5wtww ;
real32_T jhtkvlotcj_hv2ho1zopz ; real32_T eb5vjpyuav_bnlywzniup ; real32_T
eq5jssgbid_dapv3jlyq5 ; real32_T etwxnro2ri_ezqlmfzvpq ; real32_T
a0zzfabdmg_bjvjhhzy4i ; real32_T p4o02ctkvv_jzx3amusab ; real32_T
ljddwhaot1_idx_1 ; real32_T ljddwhaot1_idx_2 ; real32_T kgl3ocgllz_idx_2 ;
real32_T bzklm5kboi_idx_1 ; real32_T kgl3ocgllz_idx_0 ; real32_T
kgl3ocgllz_idx_1 ; real32_T lan2dv1qbd_idx_0 ; real32_T cqw0qrp4eu_idx_0 ;
real32_T cqw0qrp4eu_idx_1 ; real32_T cqw0qrp4eu_idx_2 ; real32_T
oru2xh2cyl_idx_0 ; real32_T oru2xh2cyl_idx_1 ; real32_T ewl1hdfaxi_idx_1 ;
real32_T esrcrqipve_idx_1 ; real32_T esrcrqipve_idx_2 ; real32_T
ewl1hdfaxi_idx_2 ; real32_T hpc3d2iong_idx_0 ; real32_T hpc3d2iong_idx_1 ;
real32_T kkuvtjkaau_idx_2 ; real32_T hpc3d2iong_idx_2 ; real32_T
pzfs30csun_fdinthrxmb ; real32_T isx1jookfr_al00mdgrv4 ; real32_T
mexlyjbu22_ju13rw2h0m ; real32_T kjziqwmqqe_jz50ptvnrg ; int32_T cff ;
int32_T denIdx ; int32_T memOffset ; int32_T i ; uint32_T cy2taauytx ;
uint32_T aysvaohtl0 ; uint32_T cohlel0sic ; real32_T bwhquruhg4 [ 6 ] ;
real32_T df5jwd0dve ; real32_T epnbjpnxkg ; uint32_T bib1wyq24m_icdfyazkhu ;
uint32_T ohjh1pu3ui_oyypvi4boh ; uint32_T ivnkv1flcv_nvsvtgkap4 ; uint32_T
babjbmypbd_m3yhjduhi1 ; uint32_T jmix0tpmqc_czkfpwuzm5 ; uint32_T
djz1b20dzo_mdoasc5av4 ; uint16_T ao41flvyb1 ; int16_T iimupityvq ; uint16_T
drjad5hp0z_m3ybdk4ikc ; uint16_T bgjnlzeaxl_jacdjrqyev ; int8_T i_h522xzlxvt
; int8_T i1 ; uint8_T noaggedw1d ; boolean_T p1k24wzycz ; boolean_T
aoneafkd51 ; boolean_T drrbtvcsxs ; boolean_T aagcy0d5ye ; boolean_T
l2nlpva2j1_c0dok3111h ; boolean_T iqocmhdfin_ctvw0tpkon ; boolean_T
hud1xcjqn5_pxqvlbal2i ; boolean_T pu4zoonf1h_p5h3gwuwqg ; boolean_T
ihwj5oflkc_afnsueciae ; boolean_T kpsjbxclns_evg4t2fsev ; boolean_T
dyul3la2fn_ax3wx1gs5w ; boolean_T oaihmoohg4_as0qznsxlv ; boolean_T
jukni12zmf_ifotjnizh4 ; boolean_T priqjerfnq_ltu3syw14q ; boolean_T
jabepyxrmc_ojunzewo4f ; boolean_T e2teotczdh_o2tow3gxzm ; dyc32xehtl
ipbtas1tys ; orji2pbk05 bm3dpymkhz ; dyc32xehtl ifzbhw4mrws ; orji2pbk05
phrpuocqmvu ; } eo4bbte2ey ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real_T mi4mocbazh ; real_T mtonzezz2z [ 2 ] ; real_T
ddv3ztj2wp [ 3 ] ; real_T immlnclh1f ; real_T pjymztciyn ; real_T ebmc4lyjdd
[ 3 ] ; real_T bw2ribqmwm ; real_T f2ynnmexgv ; struct { void * AQHandles ; }
puq03cpvbg ; real32_T b3fmbw5stg [ 2 ] ; real32_T aq2aymvaio [ 3 ] ; real32_T
dzwopklw3c ; real32_T d4fp3a2mpz [ 15 ] ; real32_T fl0vv44tbs [ 2 ] ;
real32_T as5a0ikbk1 [ 2 ] ; real32_T ncgo1wegzg ; real32_T mirtkskmtr ;
real32_T jduomia1pb [ 5 ] ; real32_T od5c00niot [ 4 ] ; real32_T dqfv1m130o [
10 ] ; real32_T meognsjf1t [ 2 ] ; real32_T gcgpru4rcb [ 2 ] ; real32_T
peklmaellz [ 2 ] ; real32_T bsetqjfri4 ; real32_T dsjbzv2lh4 [ 2 ] ; real32_T
gixvkpnpus [ 2 ] ; real32_T ow5xb5ovt0 [ 2 ] ; real32_T krs1cvkxzk [ 2 ] ;
real32_T c4kiksmhh2 ; int32_T bbkjtf4kuy ; uint32_T l3lcputuyl ; uint32_T
pjgu33zeph ; uint32_T dxm3w2i52x ; real32_T orkq4iljgu ; real32_T b1nmhkw4zo
; real32_T n0mydijbcx ; real32_T iwg03owvar ; real32_T mf2pp40f5v [ 2 ] ;
real32_T pwlp5beuqs [ 2 ] ; uint16_T gaxgdudnvc ; int8_T dq5lalhp1e ; int8_T
fpr1qi0oiw ; int8_T klyrn0mwhb ; int8_T mfifybuxty ; int8_T a1oodzfxvv ;
int8_T mgysgsd2g4 ; int8_T idn2v5d33m ; boolean_T de4yc1bkky ; boolean_T
jd3dqtmo2p ; boolean_T f1jy25gy04 ; boolean_T gdn4qfzvsk ; boolean_T
cqi2pi21ow ; boolean_T kh1khihcrt ; boolean_T iftedegxuv ; boolean_T
g4zcogq4xi ; gabr0rnvjj ipbtas1tys ; imbf3wrgri bm3dpymkhz ; gabr0rnvjj
ifzbhw4mrws ; imbf3wrgri phrpuocqmvu ; hrtts4l5bc ciy1c2o0rv ; hrtts4l5bc
jvbbqhrajh ; hrtts4l5bc clwiujjdqo ; hrtts4l5bc acfz1zxm4t ; hrtts4l5bc
ghadbep3bbv ; } dmp1xsadgu ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real_T b3ouxrig41 ; } k5baggiqtb ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { ZCSigState b1rw3rggh2 ; } ph1mky0ofs ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real32_T a [ 21120 ] ; real32_T b_a [ 20640 ] ; real32_T
magGrad [ 19200 ] ; real32_T dx [ 19200 ] ; real32_T b_I [ 19200 ] ; int8_T
find_yaw_mat [ 19200 ] ; boolean_T pmdbpthf5b_mbvzarwird [ 19200 ] ;
boolean_T unusedExpr [ 19200 ] ; boolean_T mask [ 19200 ] ; real32_T
a_cl54gopm0x [ 1333 ] ; real32_T magGrad_kkiq3xxxve [ 961 ] ; real32_T
dx_cxarnvbvui [ 961 ] ; real32_T b_I_bhxxfovxdy [ 961 ] ; uint8_T local_area
[ 2000 ] ; uint8_T local_area_data [ 999 ] ; boolean_T canny_head_mat [ 961 ]
; boolean_T pmdbpthf5b_pbm3vprmfu [ 961 ] ; boolean_T mask_cv5hdgrwft [ 961 ]
; boolean_T image_iter1 [ 961 ] ; boolean_T x1 [ 961 ] ; real_T b_y [ 64 ] ;
real_T b_y_fqdqrf4qbc [ 64 ] ; real_T yaw_stop_array [ 31 ] ; real_T count ;
real_T side_decision ; real_T d ; real_T highThreshTemp ; real_T out ; real_T
highThresh_data_idx_0 ; real_T lowThresh_data_idx_0 ; real_T
highThreshTemp_g2mlkqadfk ; real_T out_g1smspu5ke ; real_T
highThresh_data_idx_0_merlcviukg ; real_T lowThresh_data_idx_0_nz4o0shxby ;
real_T dx1bkiqd54_ppxrqq0gsf ; real_T d5rwtv2qyu_llw0u2ae0v ; int32_T
local_area_size [ 2 ] ; int32_T c ; int32_T e ; int32_T f ; int32_T d_col ;
int32_T p ; eo4bbte2ey otjykwnhb3s ; } ircitwx3zdm ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { real_T mdrqgzmhxm [ 2 ] ; real_T fdg0ctxzju [ 2 ] ; real_T
kuiiaoa3ie ; real_T bcinjdyi1p [ 4 ] ; real_T epb50zhs4j ; bjqsgn0csy
l152eirbdu ; int8_T btek1dk1x3 ; int8_T jw22f2in0f ; boolean_T jjrfotind4 ;
dmp1xsadgu otjykwnhb3s ; } nllkaxiwhzw ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { k5baggiqtb otjykwnhb3s ; } h5liyesltnn ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { ph1mky0ofs otjykwnhb3s ; } cspyln32yuv ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct bpvdgm2xq5_ { uint8_T P_0 ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct je33m1dqwd_ { real32_T P_0 ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct fpqg1jdlo0_ { real32_T P_0 ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct nu4qaxumex_ { real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ;
real_T P_4 ; real_T P_5 ; real32_T P_6 [ 2 ] ; real32_T P_7 [ 2 ] ; real32_T
P_8 ; real32_T P_9 ; real32_T P_10 ; real32_T P_11 ; real32_T P_12 ; real32_T
P_13 ; real32_T P_14 ; real32_T P_15 ; real32_T P_16 [ 2 ] ; real32_T P_17 ;
real32_T P_18 ; real32_T P_19 ; real32_T P_20 [ 2 ] ; real32_T P_21 ;
real32_T P_22 ; real32_T P_23 ; real32_T P_24 ; real32_T P_25 ; real32_T P_26
; real32_T P_27 ; real32_T P_28 ; real32_T P_29 ; real32_T P_30 ; real32_T
P_31 ; real32_T P_32 ; real32_T P_33 ; real32_T P_34 ; real32_T P_35 ;
real32_T P_36 ; real32_T P_37 ; real32_T P_38 ; real32_T P_39 ; real32_T P_40
; real32_T P_41 ; real32_T P_42 ; real32_T P_43 ; real32_T P_44 ; real32_T
P_45 ; uint32_T P_46 ; uint32_T P_47 ; uint32_T P_48 ; uint32_T P_49 ;
uint32_T P_50 ; uint16_T P_51 ; uint16_T P_52 ; real_T P_53 ; real_T P_54 ;
real_T P_55 ; real_T P_56 ; real_T P_57 [ 4 ] ; real_T P_58 [ 4 ] ; real_T
P_59 ; real_T P_60 ; real_T P_61 ; real_T P_62 ; real_T P_63 ; real_T P_64 ;
real_T P_65 ; real_T P_66 ; real_T P_67 ; real_T P_68 ; real_T P_69 ; real_T
P_70 [ 4 ] ; real_T P_71 [ 2 ] ; real_T P_72 [ 2 ] ; real_T P_73 [ 4 ] ;
real_T P_74 [ 2 ] ; real_T P_75 [ 2 ] ; real_T P_76 ; real_T P_77 [ 4 ] ;
real_T P_78 [ 2 ] ; real_T P_79 ; real_T P_80 ; real_T P_81 ; real_T P_82 ;
real_T P_83 [ 2 ] ; real_T P_84 [ 3 ] ; real_T P_85 [ 4 ] ; real_T P_86 [ 2 ]
; real_T P_87 [ 2 ] ; real_T P_88 [ 4 ] ; real_T P_89 [ 2 ] ; real_T P_90 [ 2
] ; real_T P_91 ; real_T P_92 [ 3 ] ; real_T P_93 [ 16 ] ; real_T P_94 [ 8 ]
; real_T P_95 [ 8 ] ; real32_T P_96 ; real32_T P_97 ; real32_T P_98 ;
real32_T P_99 [ 2 ] ; real32_T P_100 ; real32_T P_101 ; real32_T P_102 ;
real32_T P_103 ; real32_T P_104 ; real32_T P_105 ; real32_T P_106 ; real32_T
P_107 ; real32_T P_108 ; real32_T P_109 ; real32_T P_110 [ 4 ] ; real32_T
P_111 [ 4 ] ; real32_T P_112 ; real32_T P_113 ; real32_T P_114 ; real32_T
P_115 [ 6 ] ; real32_T P_116 [ 6 ] ; real32_T P_117 ; real32_T P_118 [ 6 ] ;
real32_T P_119 ; real32_T P_120 [ 2 ] ; real32_T P_121 [ 2 ] ; real32_T P_122
; real32_T P_123 [ 2 ] ; real32_T P_124 [ 2 ] ; real32_T P_125 ; real32_T
P_126 [ 6 ] ; real32_T P_127 [ 6 ] ; real32_T P_128 ; real32_T P_129 ;
real32_T P_130 [ 6 ] ; real32_T P_131 [ 6 ] ; real32_T P_132 ; real32_T P_133
; real32_T P_134 ; real32_T P_135 ; real32_T P_136 ; real32_T P_137 ;
real32_T P_138 ; real32_T P_139 ; real32_T P_140 ; real32_T P_141 ; real32_T
P_142 ; real32_T P_143 ; real32_T P_144 ; real32_T P_145 ; real32_T P_146 ;
real32_T P_147 [ 2 ] ; real32_T P_148 [ 2 ] ; real32_T P_149 ; real32_T P_150
; real32_T P_151 ; real32_T P_152 ; real32_T P_153 ; real32_T P_154 ;
real32_T P_155 ; real32_T P_156 ; real32_T P_157 ; real32_T P_158 ; real32_T
P_159 ; real32_T P_160 ; real32_T P_161 ; real32_T P_162 [ 4 ] ; real32_T
P_163 ; real32_T P_164 ; real32_T P_165 ; real32_T P_166 ; real32_T P_167 [
16 ] ; real32_T P_168 ; real32_T P_169 ; real32_T P_170 ; real32_T P_171 [ 4
] ; real32_T P_172 [ 2 ] ; real32_T P_173 [ 2 ] ; real32_T P_174 ; real32_T
P_175 [ 4 ] ; real32_T P_176 [ 4 ] ; real32_T P_177 [ 2 ] ; real32_T P_178 [
2 ] ; real32_T P_179 [ 4 ] ; real32_T P_180 ; real32_T P_181 [ 2 ] ; real32_T
P_182 [ 4 ] ; real32_T P_183 [ 2 ] ; real32_T P_184 [ 2 ] ; real32_T P_185 ;
real32_T P_186 [ 4 ] ; real32_T P_187 [ 4 ] ; real32_T P_188 [ 2 ] ; real32_T
P_189 [ 2 ] ; real32_T P_190 [ 4 ] ; real32_T P_191 ; real32_T P_192 [ 2 ] ;
real32_T P_193 ; real32_T P_194 ; real32_T P_195 [ 16 ] ; real32_T P_196 [ 8
] ; real32_T P_197 [ 8 ] ; real32_T P_198 [ 4 ] ; real32_T P_199 [ 16 ] ;
real32_T P_200 [ 16 ] ; real32_T P_201 [ 8 ] ; real32_T P_202 [ 8 ] ;
real32_T P_203 [ 16 ] ; real32_T P_204 [ 4 ] ; real32_T P_205 [ 4 ] ;
uint32_T P_206 ; uint32_T P_207 ; uint32_T P_208 ; uint32_T P_209 ; uint32_T
P_210 ; uint32_T P_211 ; uint32_T P_212 ; uint32_T P_213 ; uint32_T P_214 ;
uint16_T P_215 ; uint16_T P_216 ; uint16_T P_217 ; boolean_T P_218 ;
boolean_T P_219 ; boolean_T P_220 ; boolean_T P_221 ; boolean_T P_222 ;
int8_T P_223 ; int8_T P_224 ; int8_T P_225 ; int8_T P_226 ; int8_T P_227 ;
int8_T P_228 ; int8_T P_229 ; int8_T P_230 ; uint8_T P_231 ; uint8_T P_232 ;
fpqg1jdlo0 ipbtas1tys ; je33m1dqwd bm3dpymkhz ; fpqg1jdlo0 ifzbhw4mrws ;
je33m1dqwd phrpuocqmvu ; bpvdgm2xq5 ciy1c2o0rv ; bpvdgm2xq5 jvbbqhrajh ;
bpvdgm2xq5 clwiujjdqo ; bpvdgm2xq5 acfz1zxm4t ; bpvdgm2xq5 ghadbep3bbv ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct ileg2v2ld1r_ { real_T P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4 ;
nu4qaxumex otjykwnhb3s ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
struct diqjpw4041 { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 32 ] ; int32_T * vardimsAddress [
32 ] ; RTWLoggingFcnPtr loggingPtrs [ 32 ] ; sysRanDType * systemRan [ 32 ] ;
int_T systemTid [ 32 ] ; } DataMapInfo ; } ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
typedef struct { ipf5ube4r0 rtm ; } lhjbdsj2rjg ;
#endif
extern struct_8SSZ93PxvPkADZcA4gG8MD rtP_Sensors ; extern void dw0zngvhyq (
void ) ; extern void ha1ipjbq54 ( uint8_T * o3vpgniqky ) ; extern void
gwlyno50ln ( void ) ; extern void m0l5se3ogg ( void ) ; extern void
k3yxem35zg ( void ) ; extern void bog0frvixl ( void ) ; extern void
pyvd4pdf3iTID0 ( void ) ; extern void pyvd4pdf3iTID1 ( void ) ; extern void
flightControlSystemTID0 ( const SensorsBus * pxdb2gu5va , real32_T pikqq4svts
[ 4 ] , uint8_T * o3vpgniqky ) ; extern void flightControlSystemTID1 ( void )
; extern void flightControlSystemTID2 ( void ) ; extern void o2f5l50guo (
void ) ; extern void f4qzdbbxmw ( SimStruct * _mdlRefSfcnS , int_T
mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 , void * sysRanPtr , int
contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_flightControlSystem_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray *
mr_flightControlSystem_GetDWork ( ) ; extern void
mr_flightControlSystem_SetDWork ( const mxArray * ssDW ) ; extern void
mr_flightControlSystem_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_flightControlSystem_GetSimStateDisallowedBlocks ( ) ; extern
const rtwCAPI_ModelMappingStaticInfo * flightControlSystem_GetCAPIStaticMap (
void ) ;
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
extern void ghadbep3bb ( uint8_T * hfpztkhwej , bpvdgm2xq5 * localP ) ;
extern void jfkq2sjtgw ( const real32_T duqg5o24fi [ 4 ] , boolean_T
pfxu5bb25d ) ; extern void gcledvfwzt ( orji2pbk05 * localB , je33m1dqwd *
localP ) ; extern void alfdzl2fz1 ( orji2pbk05 * localB , imbf3wrgri *
localDW , je33m1dqwd * localP ) ; extern void phrpuocqmv ( ipf5ube4r0 * const
accn4cnket , boolean_T hjrswm4ob0 , const real32_T ndqlqfbq0n [ 2 ] ,
real32_T pp4ryk1bnn , const real32_T crftt4mdlv [ 2 ] , const real32_T
pc1pu0u41d [ 2 ] , real32_T kemszrfmdj , real32_T k3tun14l4o , orji2pbk05 *
localB , imbf3wrgri * localDW , je33m1dqwd * localP ) ; extern void
e0j2slboh1 ( dyc32xehtl * localB , fpqg1jdlo0 * localP ) ; extern void
ng2z3yysbc ( dyc32xehtl * localB , gabr0rnvjj * localDW , fpqg1jdlo0 * localP
) ; extern void ifzbhw4mrw ( ipf5ube4r0 * const accn4cnket , boolean_T
ny1m4yhfkt , const real32_T izmwj1ddpc [ 2 ] , const real32_T fppyei0jac [ 2
] , real32_T fjag4trd4p , const real32_T fn1cyjs1o0 [ 2 ] , dyc32xehtl *
localB , gabr0rnvjj * localDW , fpqg1jdlo0 * localP ) ; extern void
mr51bswvyz ( ipf5ube4r0 * const accn4cnket , dmp1xsadgu * localDW ) ; extern
void ic5jb3movn ( eo4bbte2ey * localB , dmp1xsadgu * localDW , nu4qaxumex *
localP ) ; extern void bxsrqc204k ( dmp1xsadgu * localDW , nu4qaxumex *
localP ) ; extern void eyt3piuhqz ( ipf5ube4r0 * const accn4cnket ,
dmp1xsadgu * localDW ) ; extern void kegjp2lgms ( eo4bbte2ey * localB ,
dmp1xsadgu * localDW , nu4qaxumex * localP ) ; extern void lsjhvu4egy (
eo4bbte2ey * localB , dmp1xsadgu * localDW , nu4qaxumex * localP ) ; extern
void otjykwnhb3 ( ipf5ube4r0 * const accn4cnket , const SensorsBus *
fp0u5nlpgw , real_T ay1xsyaztb , real_T nfqd2uxnr0 , eo4bbte2ey * localB ,
dmp1xsadgu * localDW , nu4qaxumex * localP , ph1mky0ofs * localZCE ) ; extern
void otjykwnhb3TID2 ( eo4bbte2ey * localB , nu4qaxumex * localP ) ;
#endif
void mr_flightControlSystem_CreateInitRestoreData ( ) ; void
mr_flightControlSystem_CopyFromInitRestoreData ( ) ; void
mr_flightControlSystem_DestroyInitRestoreData ( ) ;
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
extern lhjbdsj2rjg lhjbdsj2rj ;
#endif
#ifndef flightControlSystem_MDLREF_HIDE_CHILD_
extern ircitwx3zdm ksm0js2nhsy ; extern nllkaxiwhzw dqykr4eggmg ; extern
cspyln32yuv f51itwtzkqf ;
#endif
#endif
