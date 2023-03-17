/* Include files */

#include "flightControlSystem_sfun.h"
#include "c1_flightControlSystem.h"
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Forward Declarations */

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c1_emlrtMCI = { 13, /* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtMCInfo c1_b_emlrtMCI = { 82,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

static emlrtMCInfo c1_c_emlrtMCI = { 87,/* lineNo */
  33,                                  /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo c1_d_emlrtMCI = { 28,/* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtMCInfo c1_e_emlrtMCI = { 134,/* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtRSInfo c1_emlrtRSI = { 23, /* lineNo */
  "Image Processing System/Mode_Select_Function",/* fcnName */
  "#flightControlSystem:2683"          /* pathName */
};

static emlrtRSInfo c1_b_emlrtRSI = { 280,/* lineNo */
  "Image Processing System/Mode_Select_Function",/* fcnName */
  "#flightControlSystem:2683"          /* pathName */
};

static emlrtRSInfo c1_c_emlrtRSI = { 315,/* lineNo */
  "Image Processing System/Mode_Select_Function",/* fcnName */
  "#flightControlSystem:2683"          /* pathName */
};

static emlrtRSInfo c1_d_emlrtRSI = { 317,/* lineNo */
  "Image Processing System/Mode_Select_Function",/* fcnName */
  "#flightControlSystem:2683"          /* pathName */
};

static emlrtRSInfo c1_e_emlrtRSI = { 332,/* lineNo */
  "Image Processing System/Mode_Select_Function",/* fcnName */
  "#flightControlSystem:2683"          /* pathName */
};

static emlrtRSInfo c1_f_emlrtRSI = { 116,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c1_g_emlrtRSI = { 132,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c1_h_emlrtRSI = { 138,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c1_i_emlrtRSI = { 708,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c1_j_emlrtRSI = { 709,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c1_k_emlrtRSI = { 714,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c1_l_emlrtRSI = { 715,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c1_m_emlrtRSI = { 44,/* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m"/* pathName */
};

static emlrtRSInfo c1_n_emlrtRSI = { 71,/* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo c1_o_emlrtRSI = { 106,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c1_p_emlrtRSI = { 110,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c1_q_emlrtRSI = { 854,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c1_r_emlrtRSI = { 72,/* lineNo */
  "padarray",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c1_s_emlrtRSI = { 928,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c1_t_emlrtRSI = { 1002,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c1_u_emlrtRSI = { 1030,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c1_v_emlrtRSI = { 1042,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c1_w_emlrtRSI = { 724,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c1_x_emlrtRSI = { 133,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c1_y_emlrtRSI = { 170,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c1_ab_emlrtRSI = { 456,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c1_bb_emlrtRSI = { 14,/* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo c1_cb_emlrtRSI = { 762,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c1_db_emlrtRSI = { 768,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c1_eb_emlrtRSI = { 872,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c1_fb_emlrtRSI = { 76,/* lineNo */
  "imreconstruct",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imreconstruct.m"/* pathName */
};

static emlrtRSInfo c1_gb_emlrtRSI = { 351,/* lineNo */
  "Image Processing System/Mode_Select_Function",/* fcnName */
  "#flightControlSystem:2683"          /* pathName */
};

static emlrtRSInfo c1_hb_emlrtRSI = { 352,/* lineNo */
  "Image Processing System/Mode_Select_Function",/* fcnName */
  "#flightControlSystem:2683"          /* pathName */
};

static emlrtRSInfo c1_ib_emlrtRSI = { 353,/* lineNo */
  "Image Processing System/Mode_Select_Function",/* fcnName */
  "#flightControlSystem:2683"          /* pathName */
};

static emlrtRSInfo c1_jb_emlrtRSI = { 354,/* lineNo */
  "Image Processing System/Mode_Select_Function",/* fcnName */
  "#flightControlSystem:2683"          /* pathName */
};

static emlrtRSInfo c1_kb_emlrtRSI = { 15,/* lineNo */
  "min",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"/* pathName */
};

static emlrtRSInfo c1_lb_emlrtRSI = { 46,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c1_mb_emlrtRSI = { 92,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c1_nb_emlrtRSI = { 15,/* lineNo */
  "max",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"/* pathName */
};

static emlrtRSInfo c1_ob_emlrtRSI = { 44,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c1_pb_emlrtRSI = { 79,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c1_qb_emlrtRSI = { 48,/* lineNo */
  "string",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\string.m"/* pathName */
};

static emlrtRSInfo c1_rb_emlrtRSI = { 38,/* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

static emlrtRSInfo c1_sb_emlrtRSI = { 66,/* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

static emlrtRTEInfo c1_emlrtRTEI = { 314,/* lineNo */
  9,                                   /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683"          /* pName */
};

static emlrtRTEInfo c1_b_emlrtRTEI = { 272,/* lineNo */
  22,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683"          /* pName */
};

static emlrtRTEInfo c1_c_emlrtRTEI = { 272,/* lineNo */
  39,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683"          /* pName */
};

static emlrtRTEInfo c1_d_emlrtRTEI = { 272,/* lineNo */
  9,                                   /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683"          /* pName */
};

static emlrtRTEInfo c1_e_emlrtRTEI = { 273,/* lineNo */
  17,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683"          /* pName */
};

static emlrtRTEInfo c1_f_emlrtRTEI = { 273,/* lineNo */
  34,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683"          /* pName */
};

static emlrtRTEInfo c1_g_emlrtRTEI = { 273,/* lineNo */
  9,                                   /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683"          /* pName */
};

static emlrtRTEInfo c1_h_emlrtRTEI = { 739,/* lineNo */
  9,                                   /* colNo */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pName */
};

static emlrtRTEInfo c1_i_emlrtRTEI = { 740,/* lineNo */
  37,                                  /* colNo */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pName */
};

static emlrtRTEInfo c1_j_emlrtRTEI = { 76,/* lineNo */
  9,                                   /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo c1_k_emlrtRTEI = { 740,/* lineNo */
  9,                                   /* colNo */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pName */
};

static emlrtRTEInfo c1_l_emlrtRTEI = { 351,/* lineNo */
  25,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683"          /* pName */
};

static emlrtRTEInfo c1_m_emlrtRTEI = { 352,/* lineNo */
  25,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683"          /* pName */
};

static emlrtRTEInfo c1_n_emlrtRTEI = { 353,/* lineNo */
  25,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683"          /* pName */
};

static emlrtRTEInfo c1_o_emlrtRTEI = { 354,/* lineNo */
  25,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683"          /* pName */
};

static emlrtDCInfo c1_emlrtDCI = { 80, /* lineNo */
  38,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_emlrtBCI = { 1,  /* iFirst */
  26,                                  /* iLast */
  80,                                  /* lineNo */
  38,                                  /* colNo */
  "yaw_stop_array",                    /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c1_b_emlrtDCI = { 100,/* lineNo */
  38,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_b_emlrtBCI = { 1,/* iFirst */
  26,                                  /* iLast */
  100,                                 /* lineNo */
  38,                                  /* colNo */
  "yaw_stop_array",                    /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c1_c_emlrtDCI = { 272,/* lineNo */
  60,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_c_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  272,                                 /* lineNo */
  60,                                  /* colNo */
  "u",                                 /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_d_emlrtDCI = { 272,/* lineNo */
  68,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_d_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  272,                                 /* lineNo */
  68,                                  /* colNo */
  "u",                                 /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_e_emlrtDCI = { 272,/* lineNo */
  77,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_e_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  272,                                 /* lineNo */
  77,                                  /* colNo */
  "u",                                 /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_f_emlrtDCI = { 272,/* lineNo */
  85,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_f_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  272,                                 /* lineNo */
  85,                                  /* colNo */
  "u",                                 /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_g_emlrtDCI = { 273,/* lineNo */
  63,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_g_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  273,                                 /* lineNo */
  63,                                  /* colNo */
  "canny_img",                         /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_h_emlrtDCI = { 273,/* lineNo */
  71,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_h_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  273,                                 /* lineNo */
  71,                                  /* colNo */
  "canny_img",                         /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_i_emlrtDCI = { 273,/* lineNo */
  80,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_i_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  273,                                 /* lineNo */
  80,                                  /* colNo */
  "canny_img",                         /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_j_emlrtDCI = { 273,/* lineNo */
  88,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_j_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  273,                                 /* lineNo */
  88,                                  /* colNo */
  "canny_img",                         /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_k_emlrtDCI = { 273,/* lineNo */
  17,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_k_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  273,                                 /* lineNo */
  17,                                  /* colNo */
  "yaw_mat",                           /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_l_emlrtDCI = { 273,/* lineNo */
  25,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_l_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  273,                                 /* lineNo */
  25,                                  /* colNo */
  "yaw_mat",                           /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_m_emlrtDCI = { 273,/* lineNo */
  34,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_m_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  273,                                 /* lineNo */
  34,                                  /* colNo */
  "yaw_mat",                           /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_n_emlrtDCI = { 273,/* lineNo */
  42,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_n_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  273,                                 /* lineNo */
  42,                                  /* colNo */
  "yaw_mat",                           /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c1_emlrtECI = { -1, /* nDims */
  273,                                 /* lineNo */
  9,                                   /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683"          /* pName */
};

static emlrtDCInfo c1_o_emlrtDCI = { 272,/* lineNo */
  22,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_o_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  272,                                 /* lineNo */
  22,                                  /* colNo */
  "find_yaw_mat",                      /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_p_emlrtDCI = { 272,/* lineNo */
  30,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_p_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  272,                                 /* lineNo */
  30,                                  /* colNo */
  "find_yaw_mat",                      /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_q_emlrtDCI = { 272,/* lineNo */
  39,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_q_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  272,                                 /* lineNo */
  39,                                  /* colNo */
  "find_yaw_mat",                      /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_r_emlrtDCI = { 272,/* lineNo */
  47,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_r_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  272,                                 /* lineNo */
  47,                                  /* colNo */
  "find_yaw_mat",                      /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c1_b_emlrtECI = { -1,/* nDims */
  272,                                 /* lineNo */
  9,                                   /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683"          /* pName */
};

static emlrtDCInfo c1_s_emlrtDCI = { 286,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_s_emlrtBCI = { 1,/* iFirst */
  1000,                                /* iLast */
  286,                                 /* lineNo */
  33,                                  /* colNo */
  "local_area",                        /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c1_t_emlrtDCI = { 287,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_t_emlrtBCI = { 1,/* iFirst */
  1000,                                /* iLast */
  287,                                 /* lineNo */
  33,                                  /* colNo */
  "local_area",                        /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c1_u_emlrtDCI = { 294,/* lineNo */
  34,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_u_emlrtBCI = { 1,/* iFirst */
  1000,                                /* iLast */
  294,                                 /* lineNo */
  34,                                  /* colNo */
  "local_area",                        /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c1_v_emlrtDCI = { 295,/* lineNo */
  34,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_v_emlrtBCI = { 1,/* iFirst */
  1000,                                /* iLast */
  295,                                 /* lineNo */
  34,                                  /* colNo */
  "local_area",                        /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c1_w_emlrtDCI = { 314,/* lineNo */
  45,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_w_emlrtBCI = { 1,/* iFirst */
  1000,                                /* iLast */
  314,                                 /* lineNo */
  45,                                  /* colNo */
  "local_area",                        /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_x_emlrtBCI = { 1,/* iFirst */
  26,                                  /* iLast */
  78,                                  /* lineNo */
  33,                                  /* colNo */
  "heading_mat",                       /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_x_emlrtDCI = { 78,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_y_emlrtBCI = { 1,/* iFirst */
  31,                                  /* iLast */
  78,                                  /* lineNo */
  37,                                  /* colNo */
  "heading_mat",                       /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_y_emlrtDCI = { 78,/* lineNo */
  37,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_ab_emlrtBCI = { 1,/* iFirst */
  26,                                  /* iLast */
  98,                                  /* lineNo */
  33,                                  /* colNo */
  "heading_mat",                       /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_ab_emlrtDCI = { 98,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_bb_emlrtBCI = { 1,/* iFirst */
  31,                                  /* iLast */
  98,                                  /* lineNo */
  37,                                  /* colNo */
  "heading_mat",                       /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_bb_emlrtDCI = { 98,/* lineNo */
  37,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_cb_emlrtBCI = { 1,/* iFirst */
  26,                                  /* iLast */
  124,                                 /* lineNo */
  33,                                  /* colNo */
  "heading_mat",                       /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_cb_emlrtDCI = { 124,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_db_emlrtBCI = { 1,/* iFirst */
  31,                                  /* iLast */
  124,                                 /* lineNo */
  37,                                  /* colNo */
  "heading_mat",                       /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_db_emlrtDCI = { 124,/* lineNo */
  37,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_eb_emlrtBCI = { 1,/* iFirst */
  1000,                                /* iLast */
  310,                                 /* lineNo */
  26,                                  /* colNo */
  "local_area",                        /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_eb_emlrtDCI = { 310,/* lineNo */
  26,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_fb_emlrtBCI = { 1,/* iFirst */
  26,                                  /* iLast */
  136,                                 /* lineNo */
  33,                                  /* colNo */
  "heading_mat",                       /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_fb_emlrtDCI = { 136,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_gb_emlrtBCI = { 1,/* iFirst */
  31,                                  /* iLast */
  136,                                 /* lineNo */
  37,                                  /* colNo */
  "heading_mat",                       /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_gb_emlrtDCI = { 136,/* lineNo */
  37,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_hb_emlrtBCI = { 1,/* iFirst */
  26,                                  /* iLast */
  148,                                 /* lineNo */
  33,                                  /* colNo */
  "heading_mat",                       /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_hb_emlrtDCI = { 148,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_ib_emlrtBCI = { 1,/* iFirst */
  31,                                  /* iLast */
  148,                                 /* lineNo */
  37,                                  /* colNo */
  "heading_mat",                       /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_ib_emlrtDCI = { 148,/* lineNo */
  37,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_jb_emlrtBCI = { 1,/* iFirst */
  26,                                  /* iLast */
  160,                                 /* lineNo */
  33,                                  /* colNo */
  "heading_mat",                       /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_jb_emlrtDCI = { 160,/* lineNo */
  33,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_kb_emlrtBCI = { 1,/* iFirst */
  31,                                  /* iLast */
  160,                                 /* lineNo */
  37,                                  /* colNo */
  "heading_mat",                       /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_kb_emlrtDCI = { 160,/* lineNo */
  37,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_lb_emlrtBCI = { 1,/* iFirst */
  31,                                  /* iLast */
  179,                                 /* lineNo */
  32,                                  /* colNo */
  "center_mat",                        /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_lb_emlrtDCI = { 179,/* lineNo */
  32,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_mb_emlrtBCI = { 1,/* iFirst */
  31,                                  /* iLast */
  179,                                 /* lineNo */
  36,                                  /* colNo */
  "center_mat",                        /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_mb_emlrtDCI = { 179,/* lineNo */
  36,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_nb_emlrtBCI = { 1,/* iFirst */
  31,                                  /* iLast */
  191,                                 /* lineNo */
  32,                                  /* colNo */
  "center_mat",                        /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_nb_emlrtDCI = { 191,/* lineNo */
  32,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_ob_emlrtBCI = { 1,/* iFirst */
  31,                                  /* iLast */
  191,                                 /* lineNo */
  36,                                  /* colNo */
  "center_mat",                        /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_ob_emlrtDCI = { 191,/* lineNo */
  36,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_pb_emlrtBCI = { 1,/* iFirst */
  31,                                  /* iLast */
  203,                                 /* lineNo */
  32,                                  /* colNo */
  "center_mat",                        /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_pb_emlrtDCI = { 203,/* lineNo */
  32,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_qb_emlrtBCI = { 1,/* iFirst */
  31,                                  /* iLast */
  203,                                 /* lineNo */
  36,                                  /* colNo */
  "center_mat",                        /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_qb_emlrtDCI = { 203,/* lineNo */
  36,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_rb_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  284,                                 /* lineNo */
  22,                                  /* colNo */
  "u",                                 /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_rb_emlrtDCI = { 284,/* lineNo */
  22,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_sb_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  284,                                 /* lineNo */
  26,                                  /* colNo */
  "u",                                 /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_sb_emlrtDCI = { 284,/* lineNo */
  26,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_tb_emlrtBCI = { 1,/* iFirst */
  31,                                  /* iLast */
  215,                                 /* lineNo */
  32,                                  /* colNo */
  "center_mat",                        /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_tb_emlrtDCI = { 215,/* lineNo */
  32,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_ub_emlrtBCI = { 1,/* iFirst */
  31,                                  /* iLast */
  215,                                 /* lineNo */
  36,                                  /* colNo */
  "center_mat",                        /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_ub_emlrtDCI = { 215,/* lineNo */
  36,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_vb_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  291,                                 /* lineNo */
  35,                                  /* colNo */
  "find_yaw_mat",                      /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_vb_emlrtDCI = { 291,/* lineNo */
  35,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_wb_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  291,                                 /* lineNo */
  39,                                  /* colNo */
  "find_yaw_mat",                      /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_wb_emlrtDCI = { 291,/* lineNo */
  39,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_xb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  141,                                 /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_yb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  142,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_ac_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  762,                                 /* lineNo */
  70,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_bc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  767,                                 /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_cc_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  100,                                 /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_dc_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  100,                                 /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static char_T c1_cv[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
  'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r', '_', 'm',
  'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

static char_T c1_cv1[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
  'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o', 'm',
  'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

/* Function Declarations */
static void initialize_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static void initialize_params_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static void mdl_start_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static void mdl_terminate_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static void enable_c1_flightControlSystem(SFc1_flightControlSystemInstanceStruct
  *chartInstance);
static void disable_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static void sf_gateway_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static void ext_mode_exec_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static void c1_update_jit_animation_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static void c1_do_animation_call_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static void set_sim_state_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance, const mxArray *c1_st);
static void initSimStructsc1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static void c1_edge(SFc1_flightControlSystemInstanceStruct *chartInstance, const
                    emlrtStack *c1_sp, boolean_T c1_varargin_1[19200], boolean_T
                    c1_varargout_1[19200]);
static real_T c1_sqrt(SFc1_flightControlSystemInstanceStruct *chartInstance,
                      const emlrtStack *c1_sp, real_T c1_x);
static void c1_warning(SFc1_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c1_sp);
static int32_T c1_intnnz(SFc1_flightControlSystemInstanceStruct *chartInstance,
  boolean_T c1_s[806]);
static int32_T c1_b_intnnz(SFc1_flightControlSystemInstanceStruct *chartInstance,
  boolean_T c1_s[961]);
static real_T c1_minimum(SFc1_flightControlSystemInstanceStruct *chartInstance,
  real_T c1_x[26]);
static real_T c1_maximum(SFc1_flightControlSystemInstanceStruct *chartInstance,
  real_T c1_x[26]);
static void c1_local_find(SFc1_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c1_sp, uint8_T c1_local_array_data_data[], int32_T
  c1_local_array_data_size[2], real_T c1_b_local_array[4]);
static uint8_T c1_b_minimum(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, uint8_T c1_x_data[], int32_T
  c1_x_size[2]);
static uint8_T c1_b_maximum(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, uint8_T c1_x_data[], int32_T
  c1_x_size[2]);
static void c1_string_disp(SFc1_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c1_sp);
static void c1_b_string_disp(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c1_sp);
static real_T c1_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_a__output_of_feval_, const char_T
  *c1_identifier);
static real_T c1_b_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_c_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_center_mat, const char_T *c1_identifier,
  boolean_T c1_y[961]);
static void c1_d_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T c1_y[961]);
static void c1_e_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_heading_mat, const char_T *c1_identifier,
  boolean_T c1_y[806]);
static void c1_f_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T c1_y[806]);
static void c1_g_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_pts_erase_past_line, const char_T
  *c1_identifier, int8_T c1_y[4]);
static void c1_h_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_u, const emlrtMsgIdentifier *c1_parentId,
  int8_T c1_y[4]);
static void c1_i_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_pts_roi_circle, const char_T
  *c1_identifier, int8_T c1_y[6]);
static void c1_j_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_u, const emlrtMsgIdentifier *c1_parentId,
  int8_T c1_y[6]);
static void c1_k_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_c_yaw_mat, const char_T *c1_identifier,
  real_T c1_y[19200]);
static void c1_l_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_u, const emlrtMsgIdentifier *c1_parentId,
  real_T c1_y[19200]);
static real_T c1_m_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_add_yaw, const char_T *c1_identifier,
  boolean_T *c1_svPtr);
static real_T c1_n_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T *c1_svPtr);
static void c1_o_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_local_array, const char_T *c1_identifier,
  boolean_T *c1_svPtr, real_T c1_y[4]);
static void c1_p_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T *c1_svPtr, real_T c1_y[4]);
static uint8_T c1_q_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_is_active_c1_flightControlSystem, const
  char_T *c1_identifier);
static uint8_T c1_r_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_slStringInitializeDynamicBuffers
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static void c1_chart_data_browse_helper(SFc1_flightControlSystemInstanceStruct
  *chartInstance, int32_T c1_ssIdNumber, const mxArray **c1_mxData, uint8_T
  *c1_isValueTooBig);
static const mxArray *c1_feval(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, const mxArray *c1_input0, const
  mxArray *c1_input1);
static void c1_b_feval(SFc1_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c1_sp, const mxArray *c1_input0, const mxArray *c1_input1);
static const mxArray *c1_c_feval(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, const mxArray *c1_input0, const
  mxArray *c1_input1, const mxArray *c1_input2, const mxArray *c1_input3);
static const mxArray *c1_d_feval(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, const mxArray *c1_input0, const
  mxArray *c1_input1, const mxArray *c1_input2, const mxArray *c1_input3);
static void c1_b_sqrt(SFc1_flightControlSystemInstanceStruct *chartInstance,
                      const emlrtStack *c1_sp, real_T *c1_x);
static void init_dsm_address_info(SFc1_flightControlSystemInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc1_flightControlSystemInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  emlrtStack c1_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c1_st.tls = chartInstance->c1_fEmlrtCtx;
  emlrtLicenseCheckR2022a(&c1_st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "image_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c1_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c1_local_cond_not_empty = false;
  chartInstance->c1_local_array_not_empty = false;
  chartInstance->c1_add_yaw_not_empty = false;
  chartInstance->c1_is_active_c1_flightControlSystem = 0U;
}

static void initialize_params_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  static const int32_T c1_d_postfixPredicateTree[5] = { 0, 1, 2, -3, -2 };

  static const int32_T c1_e_postfixPredicateTree[5] = { 0, 1, 2, -3, -2 };

  static const int32_T c1_k_postfixPredicateTree[5] = { 0, 1, -3, 2, -3 };

  static const int32_T c1_l_postfixPredicateTree[5] = { 0, 1, -3, 2, -3 };

  static const int32_T c1_n_postfixPredicateTree[5] = { 0, 1, -3, 2, -3 };

  static const int32_T c1_o_postfixPredicateTree[5] = { 0, 1, -3, 2, -3 };

  static const int32_T c1_b_postfixPredicateTree[3] = { 0, 1, -2 };

  static const int32_T c1_c_postfixPredicateTree[3] = { 0, 1, -2 };

  static const int32_T c1_d_condTxtEndIdx[3] = { 6021, 6062, 6096 };

  static const int32_T c1_d_condTxtStartIdx[3] = { 5998, 6026, 6066 };

  static const int32_T c1_e_condTxtEndIdx[3] = { 6139, 6182, 6217 };

  static const int32_T c1_e_condTxtStartIdx[3] = { 6125, 6144, 6186 };

  static const int32_T c1_f_postfixPredicateTree[3] = { 0, 1, -3 };

  static const int32_T c1_g_postfixPredicateTree[3] = { 0, 1, -3 };

  static const int32_T c1_h_postfixPredicateTree[3] = { 0, 1, -2 };

  static const int32_T c1_i_postfixPredicateTree[3] = { 0, 1, -2 };

  static const int32_T c1_j_postfixPredicateTree[3] = { 0, 1, -3 };

  static const int32_T c1_k_condTxtEndIdx[3] = { 7965, 8000, 8037 };

  static const int32_T c1_k_condTxtStartIdx[3] = { 7936, 7971, 8007 };

  static const int32_T c1_l_condTxtEndIdx[3] = { 8072, 8105, 8138 };

  static const int32_T c1_l_condTxtStartIdx[3] = { 8057, 8076, 8109 };

  static const int32_T c1_m_postfixPredicateTree[3] = { 0, 1, -3 };

  static const int32_T c1_n_condTxtEndIdx[3] = { 8411, 8444, 8477 };

  static const int32_T c1_n_condTxtStartIdx[3] = { 8396, 8415, 8448 };

  static const int32_T c1_o_condTxtEndIdx[3] = { 9873, 9894, 9914 };

  static const int32_T c1_o_condTxtStartIdx[3] = { 9849, 9877, 9898 };

  static const int32_T c1_postfixPredicateTree[3] = { 0, 1, -3 };

  static const int32_T c1_b_condTxtEndIdx[2] = { 2025, 2052 };

  static const int32_T c1_b_condTxtStartIdx[2] = { 2007, 2029 };

  static const int32_T c1_c_condTxtEndIdx[2] = { 2651, 2678 };

  static const int32_T c1_c_condTxtStartIdx[2] = { 2633, 2655 };

  static const int32_T c1_condTxtEndIdx[2] = { 1471, 1491 };

  static const int32_T c1_condTxtStartIdx[2] = { 1454, 1475 };

  static const int32_T c1_f_condTxtEndIdx[2] = { 6278, 6299 };

  static const int32_T c1_f_condTxtStartIdx[2] = { 6264, 6282 };

  static const int32_T c1_g_condTxtEndIdx[2] = { 6354, 6374 };

  static const int32_T c1_g_condTxtStartIdx[2] = { 6341, 6358 };

  static const int32_T c1_h_condTxtEndIdx[2] = { 6545, 6591 };

  static const int32_T c1_h_condTxtStartIdx[2] = { 6506, 6549 };

  static const int32_T c1_i_condTxtEndIdx[2] = { 6692, 6730 };

  static const int32_T c1_i_condTxtStartIdx[2] = { 6663, 6697 };

  static const int32_T c1_j_condTxtEndIdx[2] = { 7192, 7212 };

  static const int32_T c1_j_condTxtStartIdx[2] = { 7175, 7196 };

  static const int32_T c1_m_condTxtEndIdx[2] = { 8187, 8213 };

  static const int32_T c1_m_condTxtStartIdx[2] = { 8172, 8191 };

  static const uint32_T c1_decisionTxtEndIdx = 0U;
  static const uint32_T c1_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c1_chart_data_browse_helper);
  chartInstance->c1_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c1_RuntimeVar,
    &chartInstance->c1_IsDebuggerActive,
    &chartInstance->c1_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c1_mlFcnLineNumber, &chartInstance->c1_IsHeatMapPresent, 0);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c1_covrtInstance, 1U, 0U, 1U,
    25U);
  covrtChartInitFcn(chartInstance->c1_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c1_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c1_decisionTxtStartIdx, &c1_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c1_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c1_covrtInstance, "", 4U, 0U, 2U, 0U, 46U, 0U,
                  9U, 0U, 23U, 0U, 36U, 15U);
  covrtEmlFcnInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 10102);
  covrtEmlFcnInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 1U, "local_find",
                     10105, -1, 10509);
  covrtEmlSaturationInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U, 10220,
    -1, 10258);
  covrtEmlSaturationInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 1U, 10316,
    -1, 10354);
  covrtEmlSaturationInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 2U, 10387,
    -1, 10425);
  covrtEmlSaturationInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 3U, 10458,
    -1, 10496);
  covrtEmlSaturationInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 4U, 8272,
    -1, 8297);
  covrtEmlSaturationInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 5U, 8318,
    -1, 8343);
  covrtEmlSaturationInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 6U, 8673,
    -1, 8698);
  covrtEmlSaturationInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 7U, 8720,
    -1, 8745);
  covrtEmlSaturationInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 8U, 9938,
    -1, 10054);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U, 197, 218, -1,
                    239, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 1U, 241, 265, -1,
                    289, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 2U, 291, 316, -1,
                    350, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 3U, 1450, 1492,
                    7167, 9608, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 4U, 1518, 1534,
                    2136, 2789, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 5U, 1679, 1709,
                    1860, 1861, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 6U, 1882, 1905, -1,
                    2110, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 7U, 2004, 2053, -1,
                    2098, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 8U, 2136, 2157,
                    2793, 6883, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 9U, 2305, 2335,
                    2486, 2487, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 10U, 2508, 2531, -1,
                    2736, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 11U, 2630, 2679, -1,
                    2724, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 12U, 2793, 2813, -1,
                    6876, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 13U, 3064, 3094,
                    3196, 3197, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 14U, 3210, 3238,
                    3287, 3288, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 15U, 3381, 3411,
                    3516, 3517, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 16U, 3530, 3561,
                    3610, 3611, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 17U, 3702, 3732,
                    3835, 3836, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 18U, 3849, 3878,
                    3927, 3928, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 19U, 4016, 4046,
                    4152, 4153, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 20U, 4166, 4198,
                    4247, 4248, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 21U, 4487, 4516,
                    4620, 4621, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 22U, 4634, 4664,
                    4713, 4714, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 23U, 4811, 4840,
                    4947, 4948, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 24U, 4961, 4994,
                    5043, 5044, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 25U, 5139, 5168,
                    5273, 5274, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 26U, 5287, 5318,
                    5367, 5368, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 27U, 5460, 5489,
                    5597, 5598, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 28U, 5611, 5645,
                    5694, 5695, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 29U, 6261, 6300,
                    6334, 6875, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 30U, 6334, 6375,
                    6410, 6875, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 31U, 6502, 6592,
                    6654, 6863, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 32U, 6654, 6731,
                    6792, 6863, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 33U, 7167, 7213,
                    9551, 9608, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 34U, 7302, 7322, -1,
                    7692, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 35U, 8053, 8139,
                    8387, 8767, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 36U, 8169, 8214, -1,
                    8364, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 37U, 8387, 8478, -1,
                    8767, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 38U, 8508, 8540, -1,
                    8766, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 39U, 8813, 8833, -1,
                    8918, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 40U, 9017, 9042,
                    9060, 9061, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 41U, 9071, 9083,
                    9189, 9255, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 42U, 9285, 9316,
                    9342, 9439, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 43U, 9342, 9384,
                    9443, 9549, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 44U, 9443, 9486, -1,
                    9542, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 45U, 9846, 9916,
                    10056, 10102, false);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U, 1607, 1628,
                     1873);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 1U, 1641, 1662,
                     1861);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 2U, 2230, 2251,
                     2499);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 3U, 2264, 2288,
                     2487);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 4U, 2992, 3013,
                     3288);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 5U, 3026, 3047,
                     3197);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 6U, 3306, 3330,
                     3611);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 7U, 3343, 3364,
                     3517);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 8U, 3627, 3648,
                     3928);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 9U, 3661, 3685,
                     3836);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 10U, 3938, 3962,
                     4248);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 11U, 3975, 3999,
                     4153);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 12U, 4411, 4434,
                     4714);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 13U, 4447, 4470,
                     4621);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 14U, 4732, 4758,
                     5044);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 15U, 4771, 4794,
                     4948);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 16U, 5060, 5083,
                     5368);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 17U, 5096, 5122,
                     5274);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 18U, 5378, 5404,
                     5695);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 19U, 5417, 5443,
                     5598);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 20U, 7761, 7777,
                     8803);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 21U, 7787, 7806,
                     8795);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 22U, 8975, 9008,
                     9061);
  covrtEmlMCDCInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U, 1454, 1491,
                      2U, 0U, c1_condTxtStartIdx, c1_condTxtEndIdx, 3U,
                      c1_postfixPredicateTree, false);
  covrtEmlMCDCInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 1U, 2007, 2052,
                      2U, 2U, c1_b_condTxtStartIdx, c1_b_condTxtEndIdx, 3U,
                      c1_b_postfixPredicateTree, false);
  covrtEmlMCDCInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 2U, 2633, 2678,
                      2U, 4U, c1_c_condTxtStartIdx, c1_c_condTxtEndIdx, 3U,
                      c1_c_postfixPredicateTree, false);
  covrtEmlMCDCInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 3U, 5998, 6097,
                      3U, 6U, c1_d_condTxtStartIdx, c1_d_condTxtEndIdx, 5U,
                      c1_d_postfixPredicateTree, false);
  covrtEmlMCDCInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 4U, 6125, 6218,
                      3U, 9U, c1_e_condTxtStartIdx, c1_e_condTxtEndIdx, 5U,
                      c1_e_postfixPredicateTree, false);
  covrtEmlMCDCInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 5U, 6264, 6299,
                      2U, 12U, c1_f_condTxtStartIdx, c1_f_condTxtEndIdx, 3U,
                      c1_f_postfixPredicateTree, false);
  covrtEmlMCDCInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 6U, 6341, 6374,
                      2U, 14U, c1_g_condTxtStartIdx, c1_g_condTxtEndIdx, 3U,
                      c1_g_postfixPredicateTree, false);
  covrtEmlMCDCInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 7U, 6506, 6591,
                      2U, 16U, c1_h_condTxtStartIdx, c1_h_condTxtEndIdx, 3U,
                      c1_h_postfixPredicateTree, false);
  covrtEmlMCDCInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 8U, 6663, 6730,
                      2U, 18U, c1_i_condTxtStartIdx, c1_i_condTxtEndIdx, 3U,
                      c1_i_postfixPredicateTree, false);
  covrtEmlMCDCInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 9U, 7175, 7212,
                      2U, 20U, c1_j_condTxtStartIdx, c1_j_condTxtEndIdx, 3U,
                      c1_j_postfixPredicateTree, false);
  covrtEmlMCDCInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 10U, 7935, 8038,
                      3U, 22U, c1_k_condTxtStartIdx, c1_k_condTxtEndIdx, 5U,
                      c1_k_postfixPredicateTree, false);
  covrtEmlMCDCInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 11U, 8057, 8138,
                      3U, 25U, c1_l_condTxtStartIdx, c1_l_condTxtEndIdx, 5U,
                      c1_l_postfixPredicateTree, false);
  covrtEmlMCDCInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 12U, 8172, 8213,
                      2U, 28U, c1_m_condTxtStartIdx, c1_m_condTxtEndIdx, 3U,
                      c1_m_postfixPredicateTree, false);
  covrtEmlMCDCInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 13U, 8396, 8477,
                      3U, 30U, c1_n_condTxtStartIdx, c1_n_condTxtEndIdx, 5U,
                      c1_n_postfixPredicateTree, false);
  covrtEmlMCDCInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 14U, 9849, 9914,
                      3U, 33U, c1_o_condTxtStartIdx, c1_o_condTxtEndIdx, 5U,
                      c1_o_postfixPredicateTree, false);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U, 1454,
    1471, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 1U, 1475,
    1491, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 2U, 1521,
    1533, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 3U, 1683,
    1708, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 4U, 1886,
    1904, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 5U, 2007,
    2025, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 6U, 2029,
    2052, -1, 2U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 7U, 2143,
    2156, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 8U, 2309,
    2334, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 9U, 2512,
    2530, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 10U, 2633,
    2651, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 11U, 2655,
    2678, -1, 2U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 12U, 2800,
    2812, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 13U, 3068,
    3093, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 14U, 3385,
    3410, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 15U, 3706,
    3731, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 16U, 4020,
    4045, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 17U, 4491,
    4515, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 18U, 4815,
    4839, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 19U, 5143,
    5167, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 20U, 5464,
    5488, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 21U, 6506,
    6545, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 22U, 6549,
    6591, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 23U, 6663,
    6692, -1, 2U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 24U, 6697,
    6730, -1, 2U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 25U, 7175,
    7192, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 26U, 7196,
    7212, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 27U, 7306,
    7321, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 28U, 8057,
    8072, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 29U, 8076,
    8105, -1, 3U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 30U, 8109,
    8138, -1, 5U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 31U, 8172,
    8187, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 32U, 8396,
    8411, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 33U, 8415,
    8444, -1, 3U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 34U, 8448,
    8477, -1, 5U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 35U, 8513,
    8539, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 36U, 8817,
    8832, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 37U, 9021,
    9041, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 38U, 9074,
    9082, -1, 5U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 39U, 9289,
    9315, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 40U, 9350,
    9383, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 41U, 9451,
    9485, -1, 3U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 42U, 9849,
    9873, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 43U, 9877,
    9894, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 44U, 9898,
    9914, -1, 0U);
}

static void mdl_cleanup_runtime_resources_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c1_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c1_covrtInstance);
}

static void enable_c1_flightControlSystem(SFc1_flightControlSystemInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  static int8_T c1_b_pts_roi_circle[6] = { 80, 80, 60, 60, 58, 43 };

  static int8_T c1_b_pts_erase_past_line[4] = { 57, 42, 46, 118 };

  emlrtStack c1_b_st;
  emlrtStack c1_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T c1_yaw_stop_array[26];
  real_T c1_b_dv[4];
  real_T c1_b_c;
  real_T c1_b_output_mode;
  real_T c1_b_yaw_out;
  real_T c1_c;
  real_T c1_c_row;
  real_T c1_center_left_bottom;
  real_T c1_center_left_top;
  real_T c1_center_one_num;
  real_T c1_center_right_bottom;
  real_T c1_center_right_top;
  real_T c1_col_max;
  real_T c1_col_min;
  real_T c1_count;
  real_T c1_d;
  real_T c1_d1;
  real_T c1_d10;
  real_T c1_d11;
  real_T c1_d12;
  real_T c1_d13;
  real_T c1_d14;
  real_T c1_d15;
  real_T c1_d16;
  real_T c1_d17;
  real_T c1_d18;
  real_T c1_d19;
  real_T c1_d2;
  real_T c1_d20;
  real_T c1_d21;
  real_T c1_d3;
  real_T c1_d4;
  real_T c1_d5;
  real_T c1_d6;
  real_T c1_d7;
  real_T c1_d8;
  real_T c1_d9;
  real_T c1_d_a;
  real_T c1_d_col;
  real_T c1_direction_of_nextLine;
  real_T c1_distance_from_center;
  real_T c1_e_a;
  real_T c1_f_a;
  real_T c1_g_a;
  real_T c1_h_a;
  real_T c1_head_one_num;
  real_T c1_i_a;
  real_T c1_j_a;
  real_T c1_k;
  real_T c1_k_a;
  real_T c1_l_a;
  real_T c1_left_mean;
  real_T c1_left_side_bottom;
  real_T c1_left_side_top;
  real_T c1_m_a;
  real_T c1_max_ysa;
  real_T c1_min_ysa;
  real_T c1_right_mean;
  real_T c1_right_side_bottom;
  real_T c1_right_side_top;
  real_T c1_row_max;
  real_T c1_row_min;
  int32_T c1_c_tmp_data[160];
  int32_T c1_b_tmp_data[120];
  int32_T c1_c_tmp_size[2];
  int32_T c1_iv[2];
  int32_T c1_iv1[2];
  int32_T c1_local_area_new_size[2];
  int32_T c1_b_tmp_size[1];
  int32_T c1_tmp_size[1];
  int32_T c1_b_col;
  int32_T c1_b_i1;
  int32_T c1_b_k;
  int32_T c1_b_loop_ub;
  int32_T c1_b_row;
  int32_T c1_c_col;
  int32_T c1_c_loop_ub;
  int32_T c1_col;
  int32_T c1_d_loop_ub;
  int32_T c1_d_row;
  int32_T c1_e_col;
  int32_T c1_e_loop_ub;
  int32_T c1_e_row;
  int32_T c1_exitg1;
  int32_T c1_exitg2;
  int32_T c1_f_col;
  int32_T c1_f_loop_ub;
  int32_T c1_f_row;
  int32_T c1_g_col;
  int32_T c1_g_loop_ub;
  int32_T c1_g_row;
  int32_T c1_h_col;
  int32_T c1_h_loop_ub;
  int32_T c1_h_row;
  int32_T c1_i;
  int32_T c1_i10;
  int32_T c1_i100;
  int32_T c1_i101;
  int32_T c1_i102;
  int32_T c1_i103;
  int32_T c1_i104;
  int32_T c1_i105;
  int32_T c1_i106;
  int32_T c1_i107;
  int32_T c1_i108;
  int32_T c1_i109;
  int32_T c1_i11;
  int32_T c1_i110;
  int32_T c1_i111;
  int32_T c1_i112;
  int32_T c1_i12;
  int32_T c1_i13;
  int32_T c1_i14;
  int32_T c1_i15;
  int32_T c1_i16;
  int32_T c1_i17;
  int32_T c1_i19;
  int32_T c1_i2;
  int32_T c1_i20;
  int32_T c1_i21;
  int32_T c1_i22;
  int32_T c1_i23;
  int32_T c1_i24;
  int32_T c1_i25;
  int32_T c1_i27;
  int32_T c1_i28;
  int32_T c1_i29;
  int32_T c1_i3;
  int32_T c1_i30;
  int32_T c1_i31;
  int32_T c1_i32;
  int32_T c1_i33;
  int32_T c1_i34;
  int32_T c1_i35;
  int32_T c1_i36;
  int32_T c1_i37;
  int32_T c1_i38;
  int32_T c1_i4;
  int32_T c1_i40;
  int32_T c1_i41;
  int32_T c1_i42;
  int32_T c1_i43;
  int32_T c1_i44;
  int32_T c1_i45;
  int32_T c1_i46;
  int32_T c1_i47;
  int32_T c1_i48;
  int32_T c1_i49;
  int32_T c1_i5;
  int32_T c1_i50;
  int32_T c1_i51;
  int32_T c1_i52;
  int32_T c1_i53;
  int32_T c1_i55;
  int32_T c1_i56;
  int32_T c1_i57;
  int32_T c1_i58;
  int32_T c1_i59;
  int32_T c1_i6;
  int32_T c1_i60;
  int32_T c1_i61;
  int32_T c1_i62;
  int32_T c1_i63;
  int32_T c1_i64;
  int32_T c1_i65;
  int32_T c1_i66;
  int32_T c1_i67;
  int32_T c1_i68;
  int32_T c1_i69;
  int32_T c1_i7;
  int32_T c1_i70;
  int32_T c1_i71;
  int32_T c1_i72;
  int32_T c1_i73;
  int32_T c1_i74;
  int32_T c1_i75;
  int32_T c1_i76;
  int32_T c1_i77;
  int32_T c1_i78;
  int32_T c1_i79;
  int32_T c1_i8;
  int32_T c1_i80;
  int32_T c1_i81;
  int32_T c1_i82;
  int32_T c1_i83;
  int32_T c1_i84;
  int32_T c1_i85;
  int32_T c1_i86;
  int32_T c1_i87;
  int32_T c1_i88;
  int32_T c1_i89;
  int32_T c1_i9;
  int32_T c1_i90;
  int32_T c1_i91;
  int32_T c1_i92;
  int32_T c1_i93;
  int32_T c1_i94;
  int32_T c1_i95;
  int32_T c1_i96;
  int32_T c1_i97;
  int32_T c1_i98;
  int32_T c1_i99;
  int32_T c1_i_col;
  int32_T c1_i_loop_ub;
  int32_T c1_i_row;
  int32_T c1_j_col;
  int32_T c1_j_loop_ub;
  int32_T c1_j_row;
  int32_T c1_k_col;
  int32_T c1_k_loop_ub;
  int32_T c1_k_row;
  int32_T c1_l_col;
  int32_T c1_l_loop_ub;
  int32_T c1_l_row;
  int32_T c1_loop_ub;
  int32_T c1_m_loop_ub;
  int32_T c1_row;
  int8_T c1_i18;
  int8_T c1_i26;
  int8_T c1_i39;
  int8_T c1_i54;
  uint8_T c1_local_area[2000];
  uint8_T c1_local_area_new_data[1998];
  uint8_T c1_c_u;
  uint8_T c1_u1;
  uint8_T c1_u2;
  uint8_T c1_u3;
  boolean_T c1_b_u[19200];
  boolean_T c1_canny_img[19200];
  boolean_T c1_b_center_mat[961];
  boolean_T c1_b_heading_mat[806];
  boolean_T c1_b;
  boolean_T c1_b1;
  boolean_T c1_b10;
  boolean_T c1_b11;
  boolean_T c1_b12;
  boolean_T c1_b13;
  boolean_T c1_b14;
  boolean_T c1_b15;
  boolean_T c1_b16;
  boolean_T c1_b17;
  boolean_T c1_b18;
  boolean_T c1_b19;
  boolean_T c1_b2;
  boolean_T c1_b20;
  boolean_T c1_b21;
  boolean_T c1_b22;
  boolean_T c1_b23;
  boolean_T c1_b24;
  boolean_T c1_b25;
  boolean_T c1_b26;
  boolean_T c1_b27;
  boolean_T c1_b28;
  boolean_T c1_b29;
  boolean_T c1_b3;
  boolean_T c1_b30;
  boolean_T c1_b31;
  boolean_T c1_b32;
  boolean_T c1_b33;
  boolean_T c1_b34;
  boolean_T c1_b35;
  boolean_T c1_b36;
  boolean_T c1_b37;
  boolean_T c1_b38;
  boolean_T c1_b4;
  boolean_T c1_b5;
  boolean_T c1_b6;
  boolean_T c1_b7;
  boolean_T c1_b8;
  boolean_T c1_b9;
  boolean_T c1_b_covSaturation;
  boolean_T c1_c_covSaturation;
  boolean_T c1_center_cond;
  boolean_T c1_center_left_cond;
  boolean_T c1_center_right_cond;
  boolean_T c1_covSaturation;
  boolean_T c1_d_covSaturation;
  boolean_T c1_e_covSaturation;
  boolean_T c1_heading_cond;
  boolean_T c1_is_past_line_area;
  boolean_T c1_left_yaw_cond;
  boolean_T c1_right_yaw_cond;
  c1_st.tls = chartInstance->c1_fEmlrtCtx;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  chartInstance->c1_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  for (c1_i = 0; c1_i < 19200; c1_i++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 0U, (real_T)
                      (*chartInstance->c1_u)[c1_i]);
  }

  chartInstance->c1_sfEvent = CALL_EVENT;
  for (c1_b_i1 = 0; c1_b_i1 < 19200; c1_b_i1++) {
    c1_b_u[c1_b_i1] = (*chartInstance->c1_u)[c1_b_i1];
  }

  covrtEmlFcnEval(chartInstance->c1_covrtInstance, 4U, 0, 0);
  if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 0,
                     !chartInstance->c1_add_yaw_not_empty)) {
    chartInstance->c1_add_yaw = 0.0;
    chartInstance->c1_add_yaw_not_empty = true;
  }

  if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 1,
                     !chartInstance->c1_local_cond_not_empty)) {
    chartInstance->c1_local_cond = 0.0;
    chartInstance->c1_local_cond_not_empty = true;
  }

  if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 2,
                     !chartInstance->c1_local_array_not_empty)) {
    for (c1_i2 = 0; c1_i2 < 4; c1_i2++) {
      chartInstance->c1_local_array[c1_i2] = 0.0;
    }

    chartInstance->c1_local_array_not_empty = true;
  }

  c1_b_st.site = &c1_emlrtRSI;
  c1_edge(chartInstance, &c1_b_st, c1_b_u, c1_canny_img);
  for (c1_i3 = 0; c1_i3 < 19200; c1_i3++) {
    chartInstance->c1_yaw_mat[c1_i3] = 0.0;
  }

  for (c1_i4 = 0; c1_i4 < 19200; c1_i4++) {
    chartInstance->c1_find_yaw_mat[c1_i4] = chartInstance->c1_yaw_mat[c1_i4];
  }

  c1_i5 = 0;
  c1_i6 = 0;
  for (c1_i7 = 0; c1_i7 < 31; c1_i7++) {
    for (c1_i9 = 0; c1_i9 < 31; c1_i9++) {
      c1_b_center_mat[c1_i9 + c1_i5] = c1_b_u[(c1_i9 + c1_i6) + 7724];
    }

    c1_i5 += 31;
    c1_i6 += 120;
  }

  c1_i8 = 0;
  c1_i10 = 0;
  for (c1_i11 = 0; c1_i11 < 31; c1_i11++) {
    for (c1_i12 = 0; c1_i12 < 26; c1_i12++) {
      c1_b_heading_mat[c1_i12 + c1_i8] = c1_b_u[(c1_i12 + c1_i10) + 7680];
    }

    c1_i8 += 26;
    c1_i10 += 120;
  }

  c1_head_one_num = (real_T)c1_intnnz(chartInstance, c1_b_heading_mat);
  c1_center_one_num = (real_T)c1_b_intnnz(chartInstance, c1_b_center_mat);
  c1_heading_cond = (c1_head_one_num > 0.0);
  c1_center_cond = (c1_center_one_num > 0.0);
  c1_b_yaw_out = 0.0;
  c1_b_output_mode = 0.0;
  if (covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 0,
                       covrtRelationalopUpdateFcn
                       (chartInstance->c1_covrtInstance, 4U, 0U, 0U, (real_T)
                        c1_heading_cond, 1.0, -1, 0U, (int32_T)c1_heading_cond))
      && covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 1,
                          covrtRelationalopUpdateFcn
                          (chartInstance->c1_covrtInstance, 4U, 0U, 1U, (real_T)
        c1_center_cond, 1.0, -1, 0U, (int32_T)c1_center_cond))) {
    covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 0, true);
    covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 3, true);
    chartInstance->c1_local_cond = 0.0;
    if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 4,
                       covrtRelationalopUpdateFcn
                       (chartInstance->c1_covrtInstance, 4U, 0U, 2U,
                        chartInstance->c1_add_yaw, 1.0, -1, 0U,
                        chartInstance->c1_add_yaw == 1.0))) {
      for (c1_i13 = 0; c1_i13 < 26; c1_i13++) {
        c1_yaw_stop_array[c1_i13] = 0.0;
      }

      c1_count = 0.0;
      for (c1_row = 0; c1_row < 26; c1_row++) {
        c1_c_row = 1.0 + (real_T)c1_row;
        covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 0, 1);
        c1_col = 0;
        do {
          c1_exitg1 = 0;
          if (c1_col < 31) {
            c1_d_col = 1.0 + (real_T)c1_col;
            covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 1, 1);
            if (c1_c_row != (real_T)(int32_T)muDoubleScalarFloor(c1_c_row)) {
              emlrtIntegerCheckR2012b(c1_c_row, &c1_x_emlrtDCI, &c1_st);
            }

            c1_i23 = (int32_T)c1_c_row;
            if ((c1_i23 < 1) || (c1_i23 > 26)) {
              emlrtDynamicBoundsCheckR2012b(c1_i23, 1, 26, &c1_x_emlrtBCI,
                &c1_st);
            }

            if (c1_d_col != (real_T)(int32_T)muDoubleScalarFloor(c1_d_col)) {
              emlrtIntegerCheckR2012b(c1_d_col, &c1_y_emlrtDCI, &c1_st);
            }

            c1_i29 = (int32_T)c1_d_col;
            if ((c1_i29 < 1) || (c1_i29 > 31)) {
              emlrtDynamicBoundsCheckR2012b(c1_i29, 1, 31, &c1_y_emlrtBCI,
                &c1_st);
            }

            c1_d4 = (real_T)c1_b_heading_mat[(c1_i23 + 26 * (c1_i29 - 1)) - 1];
            if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 5,
                               covrtRelationalopUpdateFcn
                               (chartInstance->c1_covrtInstance, 4U, 0U, 3U,
                                c1_d4, 1.0, -1, 0U, c1_d4 == 1.0))) {
              c1_count++;
              if (c1_count != (real_T)(int32_T)muDoubleScalarFloor(c1_count)) {
                emlrtIntegerCheckR2012b(c1_count, &c1_emlrtDCI, &c1_st);
              }

              c1_i42 = (int32_T)c1_count;
              if ((c1_i42 < 1) || (c1_i42 > 26)) {
                emlrtDynamicBoundsCheckR2012b(c1_i42, 1, 26, &c1_emlrtBCI,
                  &c1_st);
              }

              c1_yaw_stop_array[c1_i42 - 1] = c1_d_col;
              c1_exitg1 = 1;
            } else {
              c1_col++;
              _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
            }
          } else {
            covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 1, 0);
            c1_exitg1 = 1;
          }
        } while (c1_exitg1 == 0);

        _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
      }

      covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 0, 0);
      if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 6,
                         covrtRelationalopUpdateFcn
                         (chartInstance->c1_covrtInstance, 4U, 0U, 4U, c1_count,
                          26.0, -1, 0U, c1_count == 26.0))) {
        c1_min_ysa = c1_minimum(chartInstance, c1_yaw_stop_array);
        c1_max_ysa = c1_maximum(chartInstance, c1_yaw_stop_array);
        if (covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 2,
                             covrtRelationalopUpdateFcn
                             (chartInstance->c1_covrtInstance, 4U, 0U, 5U,
                              c1_max_ysa, c1_min_ysa, -1, 0U, c1_max_ysa ==
                              c1_min_ysa)) || covrtEmlCondEval
            (chartInstance->c1_covrtInstance, 4U, 0, 3,
             covrtRelationalopUpdateFcn(chartInstance->c1_covrtInstance, 4U, 0U,
              6U, c1_max_ysa, c1_min_ysa + 2.0, -1, 2U, c1_max_ysa < c1_min_ysa
              + 2.0))) {
          covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 1, true);
          covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 7, true);
          chartInstance->c1_add_yaw = 0.0;
        } else {
          covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 1, false);
          covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 7, false);
        }
      }

      c1_b_yaw_out = 1.0;
    } else if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 8,
                covrtRelationalopUpdateFcn(chartInstance->c1_covrtInstance, 4U,
                 0U, 7U, chartInstance->c1_add_yaw, -1.0, -1, 0U,
                 chartInstance->c1_add_yaw == -1.0))) {
      for (c1_i14 = 0; c1_i14 < 26; c1_i14++) {
        c1_yaw_stop_array[c1_i14] = 0.0;
      }

      c1_count = 0.0;
      for (c1_b_row = 0; c1_b_row < 26; c1_b_row++) {
        c1_c_row = 1.0 + (real_T)c1_b_row;
        covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 2, 1);
        c1_b_col = 0;
        do {
          c1_exitg1 = 0;
          if (c1_b_col < 31) {
            c1_d_col = 31.0 - (real_T)c1_b_col;
            covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 3, 1);
            if (c1_c_row != (real_T)(int32_T)muDoubleScalarFloor(c1_c_row)) {
              emlrtIntegerCheckR2012b(c1_c_row, &c1_ab_emlrtDCI, &c1_st);
            }

            c1_i25 = (int32_T)c1_c_row;
            if ((c1_i25 < 1) || (c1_i25 > 26)) {
              emlrtDynamicBoundsCheckR2012b(c1_i25, 1, 26, &c1_ab_emlrtBCI,
                &c1_st);
            }

            if (c1_d_col != (real_T)(int32_T)muDoubleScalarFloor(c1_d_col)) {
              emlrtIntegerCheckR2012b(c1_d_col, &c1_bb_emlrtDCI, &c1_st);
            }

            c1_i32 = (int32_T)c1_d_col;
            if ((c1_i32 < 1) || (c1_i32 > 31)) {
              emlrtDynamicBoundsCheckR2012b(c1_i32, 1, 31, &c1_bb_emlrtBCI,
                &c1_st);
            }

            c1_d5 = (real_T)c1_b_heading_mat[(c1_i25 + 26 * (c1_i32 - 1)) - 1];
            if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 9,
                               covrtRelationalopUpdateFcn
                               (chartInstance->c1_covrtInstance, 4U, 0U, 8U,
                                c1_d5, 1.0, -1, 0U, c1_d5 == 1.0))) {
              c1_count++;
              if (c1_count != (real_T)(int32_T)muDoubleScalarFloor(c1_count)) {
                emlrtIntegerCheckR2012b(c1_count, &c1_b_emlrtDCI, &c1_st);
              }

              c1_i47 = (int32_T)c1_count;
              if ((c1_i47 < 1) || (c1_i47 > 26)) {
                emlrtDynamicBoundsCheckR2012b(c1_i47, 1, 26, &c1_b_emlrtBCI,
                  &c1_st);
              }

              c1_yaw_stop_array[c1_i47 - 1] = c1_d_col;
              c1_exitg1 = 1;
            } else {
              c1_b_col++;
              _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
            }
          } else {
            covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 3, 0);
            c1_exitg1 = 1;
          }
        } while (c1_exitg1 == 0);

        _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
      }

      covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 2, 0);
      if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 10,
                         covrtRelationalopUpdateFcn
                         (chartInstance->c1_covrtInstance, 4U, 0U, 9U, c1_count,
                          26.0, -1, 0U, c1_count == 26.0))) {
        c1_min_ysa = c1_minimum(chartInstance, c1_yaw_stop_array);
        c1_max_ysa = c1_maximum(chartInstance, c1_yaw_stop_array);
        if (covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 4,
                             covrtRelationalopUpdateFcn
                             (chartInstance->c1_covrtInstance, 4U, 0U, 10U,
                              c1_max_ysa, c1_min_ysa, -1, 0U, c1_max_ysa ==
                              c1_min_ysa)) || covrtEmlCondEval
            (chartInstance->c1_covrtInstance, 4U, 0, 5,
             covrtRelationalopUpdateFcn(chartInstance->c1_covrtInstance, 4U, 0U,
              11U, c1_max_ysa, c1_min_ysa + 2.0, -1, 2U, c1_max_ysa < c1_min_ysa
              + 2.0))) {
          covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 2, true);
          covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 11, true);
          chartInstance->c1_add_yaw = 0.0;
        } else {
          covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 2, false);
          covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 11, false);
        }
      }

      c1_b_yaw_out = -1.0;
    } else if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 12,
                covrtRelationalopUpdateFcn(chartInstance->c1_covrtInstance, 4U,
                 0U, 12U, chartInstance->c1_add_yaw, 0.0, -1, 0U,
                 chartInstance->c1_add_yaw == 0.0))) {
      c1_left_side_top = 0.0;
      c1_left_side_bottom = 0.0;
      c1_right_side_top = 0.0;
      c1_right_side_bottom = 0.0;
      c1_d_row = 0;
      do {
        c1_exitg1 = 0;
        if (c1_d_row < 26) {
          c1_c_row = 1.0 + (real_T)c1_d_row;
          covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 4, 1);
          c1_e_col = 0;
          do {
            c1_exitg2 = 0;
            if (c1_e_col < 31) {
              c1_d_col = 1.0 + (real_T)c1_e_col;
              covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 5, 1);
              if (c1_c_row != (real_T)(int32_T)muDoubleScalarFloor(c1_c_row)) {
                emlrtIntegerCheckR2012b(c1_c_row, &c1_cb_emlrtDCI, &c1_st);
              }

              c1_i28 = (int32_T)c1_c_row;
              if ((c1_i28 < 1) || (c1_i28 > 26)) {
                emlrtDynamicBoundsCheckR2012b(c1_i28, 1, 26, &c1_cb_emlrtBCI,
                  &c1_st);
              }

              if (c1_d_col != (real_T)(int32_T)muDoubleScalarFloor(c1_d_col)) {
                emlrtIntegerCheckR2012b(c1_d_col, &c1_db_emlrtDCI, &c1_st);
              }

              c1_i38 = (int32_T)c1_d_col;
              if ((c1_i38 < 1) || (c1_i38 > 31)) {
                emlrtDynamicBoundsCheckR2012b(c1_i38, 1, 31, &c1_db_emlrtBCI,
                  &c1_st);
              }

              c1_d7 = (real_T)c1_b_heading_mat[(c1_i28 + 26 * (c1_i38 - 1)) - 1];
              if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 13,
                                 covrtRelationalopUpdateFcn
                                 (chartInstance->c1_covrtInstance, 4U, 0U, 13U,
                                  c1_d7, 1.0, -1, 0U, c1_d7 == 1.0))) {
                c1_left_side_top = c1_d_col;
                c1_exitg2 = 1;
              } else {
                c1_e_col++;
                _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
              }
            } else {
              covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 5, 0);
              c1_exitg2 = 1;
            }
          } while (c1_exitg2 == 0);

          if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 14,
                             !(c1_left_side_top == 0.0))) {
            c1_exitg1 = 1;
          } else {
            c1_d_row++;
            _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
          }
        } else {
          covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 4, 0);
          c1_exitg1 = 1;
        }
      } while (c1_exitg1 == 0);

      c1_f_row = 0;
      do {
        c1_exitg1 = 0;
        if (c1_f_row < 26) {
          c1_c_row = 26.0 - (real_T)c1_f_row;
          covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 6, 1);
          c1_f_col = 0;
          do {
            c1_exitg2 = 0;
            if (c1_f_col < 31) {
              c1_d_col = 1.0 + (real_T)c1_f_col;
              covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 7, 1);
              if (c1_c_row != (real_T)(int32_T)muDoubleScalarFloor(c1_c_row)) {
                emlrtIntegerCheckR2012b(c1_c_row, &c1_fb_emlrtDCI, &c1_st);
              }

              c1_i41 = (int32_T)c1_c_row;
              if ((c1_i41 < 1) || (c1_i41 > 26)) {
                emlrtDynamicBoundsCheckR2012b(c1_i41, 1, 26, &c1_fb_emlrtBCI,
                  &c1_st);
              }

              if (c1_d_col != (real_T)(int32_T)muDoubleScalarFloor(c1_d_col)) {
                emlrtIntegerCheckR2012b(c1_d_col, &c1_gb_emlrtDCI, &c1_st);
              }

              c1_i53 = (int32_T)c1_d_col;
              if ((c1_i53 < 1) || (c1_i53 > 31)) {
                emlrtDynamicBoundsCheckR2012b(c1_i53, 1, 31, &c1_gb_emlrtBCI,
                  &c1_st);
              }

              c1_d9 = (real_T)c1_b_heading_mat[(c1_i41 + 26 * (c1_i53 - 1)) - 1];
              if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 15,
                                 covrtRelationalopUpdateFcn
                                 (chartInstance->c1_covrtInstance, 4U, 0U, 14U,
                                  c1_d9, 1.0, -1, 0U, c1_d9 == 1.0))) {
                c1_left_side_bottom = c1_d_col;
                c1_exitg2 = 1;
              } else {
                c1_f_col++;
                _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
              }
            } else {
              covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 7, 0);
              c1_exitg2 = 1;
            }
          } while (c1_exitg2 == 0);

          if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 16,
                             !(c1_left_side_bottom == 0.0))) {
            c1_exitg1 = 1;
          } else {
            c1_f_row++;
            _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
          }
        } else {
          covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 6, 0);
          c1_exitg1 = 1;
        }
      } while (c1_exitg1 == 0);

      c1_g_row = 0;
      do {
        c1_exitg1 = 0;
        if (c1_g_row < 26) {
          c1_c_row = 1.0 + (real_T)c1_g_row;
          covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 8, 1);
          c1_g_col = 0;
          do {
            c1_exitg2 = 0;
            if (c1_g_col < 31) {
              c1_d_col = 31.0 - (real_T)c1_g_col;
              covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 9, 1);
              if (c1_c_row != (real_T)(int32_T)muDoubleScalarFloor(c1_c_row)) {
                emlrtIntegerCheckR2012b(c1_c_row, &c1_hb_emlrtDCI, &c1_st);
              }

              c1_i57 = (int32_T)c1_c_row;
              if ((c1_i57 < 1) || (c1_i57 > 26)) {
                emlrtDynamicBoundsCheckR2012b(c1_i57, 1, 26, &c1_hb_emlrtBCI,
                  &c1_st);
              }

              if (c1_d_col != (real_T)(int32_T)muDoubleScalarFloor(c1_d_col)) {
                emlrtIntegerCheckR2012b(c1_d_col, &c1_ib_emlrtDCI, &c1_st);
              }

              c1_i66 = (int32_T)c1_d_col;
              if ((c1_i66 < 1) || (c1_i66 > 31)) {
                emlrtDynamicBoundsCheckR2012b(c1_i66, 1, 31, &c1_ib_emlrtBCI,
                  &c1_st);
              }

              c1_d10 = (real_T)c1_b_heading_mat[(c1_i57 + 26 * (c1_i66 - 1)) - 1];
              if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 17,
                                 covrtRelationalopUpdateFcn
                                 (chartInstance->c1_covrtInstance, 4U, 0U, 15U,
                                  c1_d10, 1.0, -1, 0U, c1_d10 == 1.0))) {
                c1_right_side_top = c1_d_col;
                c1_exitg2 = 1;
              } else {
                c1_g_col++;
                _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
              }
            } else {
              covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 9, 0);
              c1_exitg2 = 1;
            }
          } while (c1_exitg2 == 0);

          if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 18,
                             !(c1_right_side_top == 0.0))) {
            c1_exitg1 = 1;
          } else {
            c1_g_row++;
            _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
          }
        } else {
          covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 8, 0);
          c1_exitg1 = 1;
        }
      } while (c1_exitg1 == 0);

      c1_h_row = 0;
      do {
        c1_exitg1 = 0;
        if (c1_h_row < 26) {
          c1_c_row = 26.0 - (real_T)c1_h_row;
          covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 10, 1);
          c1_h_col = 0;
          do {
            c1_exitg2 = 0;
            if (c1_h_col < 31) {
              c1_d_col = 31.0 - (real_T)c1_h_col;
              covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 11, 1);
              if (c1_c_row != (real_T)(int32_T)muDoubleScalarFloor(c1_c_row)) {
                emlrtIntegerCheckR2012b(c1_c_row, &c1_jb_emlrtDCI, &c1_st);
              }

              c1_i69 = (int32_T)c1_c_row;
              if ((c1_i69 < 1) || (c1_i69 > 26)) {
                emlrtDynamicBoundsCheckR2012b(c1_i69, 1, 26, &c1_jb_emlrtBCI,
                  &c1_st);
              }

              if (c1_d_col != (real_T)(int32_T)muDoubleScalarFloor(c1_d_col)) {
                emlrtIntegerCheckR2012b(c1_d_col, &c1_kb_emlrtDCI, &c1_st);
              }

              c1_i74 = (int32_T)c1_d_col;
              if ((c1_i74 < 1) || (c1_i74 > 31)) {
                emlrtDynamicBoundsCheckR2012b(c1_i74, 1, 31, &c1_kb_emlrtBCI,
                  &c1_st);
              }

              c1_d13 = (real_T)c1_b_heading_mat[(c1_i69 + 26 * (c1_i74 - 1)) - 1];
              if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 19,
                                 covrtRelationalopUpdateFcn
                                 (chartInstance->c1_covrtInstance, 4U, 0U, 16U,
                                  c1_d13, 1.0, -1, 0U, c1_d13 == 1.0))) {
                c1_right_side_bottom = c1_d_col;
                c1_exitg2 = 1;
              } else {
                c1_h_col++;
                _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
              }
            } else {
              covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 11, 0);
              c1_exitg2 = 1;
            }
          } while (c1_exitg2 == 0);

          if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 20,
                             !(c1_right_side_bottom == 0.0))) {
            c1_exitg1 = 1;
          } else {
            c1_h_row++;
            _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
          }
        } else {
          covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 10, 0);
          c1_exitg1 = 1;
        }
      } while (c1_exitg1 == 0);

      c1_center_left_top = 0.0;
      c1_center_left_bottom = 0.0;
      c1_center_right_top = 0.0;
      c1_center_right_bottom = 0.0;
      c1_i_row = 0;
      do {
        c1_exitg1 = 0;
        if (c1_i_row < 31) {
          c1_c_row = 1.0 + (real_T)c1_i_row;
          covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 12, 1);
          c1_i_col = 0;
          do {
            c1_exitg2 = 0;
            if (c1_i_col < 31) {
              c1_d_col = 1.0 + (real_T)c1_i_col;
              covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 13, 1);
              if (c1_c_row != (real_T)(int32_T)muDoubleScalarFloor(c1_c_row)) {
                emlrtIntegerCheckR2012b(c1_c_row, &c1_lb_emlrtDCI, &c1_st);
              }

              c1_i78 = (int32_T)c1_c_row;
              if ((c1_i78 < 1) || (c1_i78 > 31)) {
                emlrtDynamicBoundsCheckR2012b(c1_i78, 1, 31, &c1_lb_emlrtBCI,
                  &c1_st);
              }

              if (c1_d_col != (real_T)(int32_T)muDoubleScalarFloor(c1_d_col)) {
                emlrtIntegerCheckR2012b(c1_d_col, &c1_mb_emlrtDCI, &c1_st);
              }

              c1_i82 = (int32_T)c1_d_col;
              if ((c1_i82 < 1) || (c1_i82 > 31)) {
                emlrtDynamicBoundsCheckR2012b(c1_i82, 1, 31, &c1_mb_emlrtBCI,
                  &c1_st);
              }

              c1_d16 = (real_T)c1_b_center_mat[(c1_i78 + 31 * (c1_i82 - 1)) - 1];
              if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 21,
                                 covrtRelationalopUpdateFcn
                                 (chartInstance->c1_covrtInstance, 4U, 0U, 17U,
                                  c1_d16, 1.0, -1, 0U, c1_d16 == 1.0))) {
                c1_center_left_top = c1_d_col;
                c1_exitg2 = 1;
              } else {
                c1_i_col++;
                _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
              }
            } else {
              covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 13, 0);
              c1_exitg2 = 1;
            }
          } while (c1_exitg2 == 0);

          if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 22,
                             !(c1_center_left_top == 0.0))) {
            c1_exitg1 = 1;
          } else {
            c1_i_row++;
            _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
          }
        } else {
          covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 12, 0);
          c1_exitg1 = 1;
        }
      } while (c1_exitg1 == 0);

      c1_j_row = 0;
      do {
        c1_exitg1 = 0;
        if (c1_j_row < 31) {
          c1_c_row = 31.0 - (real_T)c1_j_row;
          covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 14, 1);
          c1_j_col = 0;
          do {
            c1_exitg2 = 0;
            if (c1_j_col < 31) {
              c1_d_col = 1.0 + (real_T)c1_j_col;
              covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 15, 1);
              if (c1_c_row != (real_T)(int32_T)muDoubleScalarFloor(c1_c_row)) {
                emlrtIntegerCheckR2012b(c1_c_row, &c1_nb_emlrtDCI, &c1_st);
              }

              c1_i84 = (int32_T)c1_c_row;
              if ((c1_i84 < 1) || (c1_i84 > 31)) {
                emlrtDynamicBoundsCheckR2012b(c1_i84, 1, 31, &c1_nb_emlrtBCI,
                  &c1_st);
              }

              if (c1_d_col != (real_T)(int32_T)muDoubleScalarFloor(c1_d_col)) {
                emlrtIntegerCheckR2012b(c1_d_col, &c1_ob_emlrtDCI, &c1_st);
              }

              c1_i87 = (int32_T)c1_d_col;
              if ((c1_i87 < 1) || (c1_i87 > 31)) {
                emlrtDynamicBoundsCheckR2012b(c1_i87, 1, 31, &c1_ob_emlrtBCI,
                  &c1_st);
              }

              c1_d17 = (real_T)c1_b_center_mat[(c1_i84 + 31 * (c1_i87 - 1)) - 1];
              if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 23,
                                 covrtRelationalopUpdateFcn
                                 (chartInstance->c1_covrtInstance, 4U, 0U, 18U,
                                  c1_d17, 1.0, -1, 0U, c1_d17 == 1.0))) {
                c1_center_left_bottom = c1_d_col;
                c1_exitg2 = 1;
              } else {
                c1_j_col++;
                _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
              }
            } else {
              covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 15, 0);
              c1_exitg2 = 1;
            }
          } while (c1_exitg2 == 0);

          if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 24,
                             !(c1_center_left_bottom == 0.0))) {
            c1_exitg1 = 1;
          } else {
            c1_j_row++;
            _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
          }
        } else {
          covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 14, 0);
          c1_exitg1 = 1;
        }
      } while (c1_exitg1 == 0);

      c1_k_row = 0;
      do {
        c1_exitg1 = 0;
        if (c1_k_row < 31) {
          c1_c_row = 1.0 + (real_T)c1_k_row;
          covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 16, 1);
          c1_k_col = 0;
          do {
            c1_exitg2 = 0;
            if (c1_k_col < 31) {
              c1_d_col = 31.0 - (real_T)c1_k_col;
              covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 17, 1);
              if (c1_c_row != (real_T)(int32_T)muDoubleScalarFloor(c1_c_row)) {
                emlrtIntegerCheckR2012b(c1_c_row, &c1_pb_emlrtDCI, &c1_st);
              }

              c1_i92 = (int32_T)c1_c_row;
              if ((c1_i92 < 1) || (c1_i92 > 31)) {
                emlrtDynamicBoundsCheckR2012b(c1_i92, 1, 31, &c1_pb_emlrtBCI,
                  &c1_st);
              }

              if (c1_d_col != (real_T)(int32_T)muDoubleScalarFloor(c1_d_col)) {
                emlrtIntegerCheckR2012b(c1_d_col, &c1_qb_emlrtDCI, &c1_st);
              }

              c1_i95 = (int32_T)c1_d_col;
              if ((c1_i95 < 1) || (c1_i95 > 31)) {
                emlrtDynamicBoundsCheckR2012b(c1_i95, 1, 31, &c1_qb_emlrtBCI,
                  &c1_st);
              }

              c1_d20 = (real_T)c1_b_center_mat[(c1_i92 + 31 * (c1_i95 - 1)) - 1];
              if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 25,
                                 covrtRelationalopUpdateFcn
                                 (chartInstance->c1_covrtInstance, 4U, 0U, 19U,
                                  c1_d20, 1.0, -1, 0U, c1_d20 == 1.0))) {
                c1_center_right_top = c1_d_col;
                c1_exitg2 = 1;
              } else {
                c1_k_col++;
                _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
              }
            } else {
              covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 17, 0);
              c1_exitg2 = 1;
            }
          } while (c1_exitg2 == 0);

          if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 26,
                             !(c1_center_right_top == 0.0))) {
            c1_exitg1 = 1;
          } else {
            c1_k_row++;
            _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
          }
        } else {
          covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 16, 0);
          c1_exitg1 = 1;
        }
      } while (c1_exitg1 == 0);

      c1_l_row = 0;
      do {
        c1_exitg1 = 0;
        if (c1_l_row < 31) {
          c1_c_row = 31.0 - (real_T)c1_l_row;
          covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 18, 1);
          c1_l_col = 0;
          do {
            c1_exitg2 = 0;
            if (c1_l_col < 31) {
              c1_d_col = 31.0 - (real_T)c1_l_col;
              covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 19, 1);
              if (c1_c_row != (real_T)(int32_T)muDoubleScalarFloor(c1_c_row)) {
                emlrtIntegerCheckR2012b(c1_c_row, &c1_tb_emlrtDCI, &c1_st);
              }

              c1_i98 = (int32_T)c1_c_row;
              if ((c1_i98 < 1) || (c1_i98 > 31)) {
                emlrtDynamicBoundsCheckR2012b(c1_i98, 1, 31, &c1_tb_emlrtBCI,
                  &c1_st);
              }

              if (c1_d_col != (real_T)(int32_T)muDoubleScalarFloor(c1_d_col)) {
                emlrtIntegerCheckR2012b(c1_d_col, &c1_ub_emlrtDCI, &c1_st);
              }

              c1_i101 = (int32_T)c1_d_col;
              if ((c1_i101 < 1) || (c1_i101 > 31)) {
                emlrtDynamicBoundsCheckR2012b(c1_i101, 1, 31, &c1_ub_emlrtBCI,
                  &c1_st);
              }

              c1_d21 = (real_T)c1_b_center_mat[(c1_i98 + 31 * (c1_i101 - 1)) - 1];
              if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 27,
                                 covrtRelationalopUpdateFcn
                                 (chartInstance->c1_covrtInstance, 4U, 0U, 20U,
                                  c1_d21, 1.0, -1, 0U, c1_d21 == 1.0))) {
                c1_center_right_bottom = c1_d_col;
                c1_exitg2 = 1;
              } else {
                c1_l_col++;
                _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
              }
            } else {
              covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 19, 0);
              c1_exitg2 = 1;
            }
          } while (c1_exitg2 == 0);

          if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 28,
                             !(c1_center_right_bottom == 0.0))) {
            c1_exitg1 = 1;
          } else {
            c1_l_row++;
            _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
          }
        } else {
          covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 18, 0);
          c1_exitg1 = 1;
        }
      } while (c1_exitg1 == 0);

      c1_center_right_cond = (c1_center_left_bottom + 3.0 < c1_center_left_top);
      c1_center_left_cond = (c1_center_right_top + 3.0 < c1_center_right_bottom);
      c1_left_mean = (c1_left_side_top + c1_left_side_bottom) / 2.0;
      c1_right_mean = (c1_right_side_top + c1_right_side_bottom) / 2.0;
      if (covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 6,
                           c1_right_mean == 31.0) || (covrtEmlCondEval
           (chartInstance->c1_covrtInstance, 4U, 0, 7, c1_left_side_bottom + 3.0
            < c1_left_side_top) && covrtEmlCondEval
           (chartInstance->c1_covrtInstance, 4U, 0, 8, c1_left_mean > 16.0))) {
        c1_b33 = true;
      } else {
        c1_b33 = false;
      }

      c1_right_yaw_cond = covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U,
        0, 3, c1_b33);
      if (covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 9,
                           c1_left_mean == 1.0) || (covrtEmlCondEval
           (chartInstance->c1_covrtInstance, 4U, 0, 10, c1_right_side_top + 3.0 <
            c1_right_side_bottom) && covrtEmlCondEval
           (chartInstance->c1_covrtInstance, 4U, 0, 11, c1_right_mean < 16.0)))
      {
        c1_b35 = true;
      } else {
        c1_b35 = false;
      }

      c1_left_yaw_cond = covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0,
        4, c1_b35);
      if (covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 12,
                           c1_right_yaw_cond) && covrtEmlCondEval
          (chartInstance->c1_covrtInstance, 4U, 0, 13, c1_center_right_cond)) {
        covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 5, true);
        covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 29, true);
        chartInstance->c1_add_yaw = 1.0;
      } else {
        covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 5, false);
        covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 29, false);
        if (covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 14,
                             c1_left_yaw_cond) && covrtEmlCondEval
            (chartInstance->c1_covrtInstance, 4U, 0, 15, c1_center_left_cond)) {
          covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 6, true);
          covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 30, true);
          chartInstance->c1_add_yaw = -1.0;
        } else {
          covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 6, false);
          covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 30, false);
          if (covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 16,
                               covrtRelationalopUpdateFcn
                               (chartInstance->c1_covrtInstance, 4U, 0U, 21U,
                                c1_center_right_top, 28.0, -1, 4U,
                                c1_center_right_top > 28.0)) || covrtEmlCondEval
              (chartInstance->c1_covrtInstance, 4U, 0, 17,
               covrtRelationalopUpdateFcn(chartInstance->c1_covrtInstance, 4U,
                0U, 22U, c1_center_right_bottom, 28.0, -1, 4U,
                c1_center_right_bottom > 28.0))) {
            covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 7, true);
            covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 31, true);
            c1_b_output_mode = 2.0;
          } else {
            covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 7, false);
            covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 31, false);
            if (covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 18,
                                 covrtRelationalopUpdateFcn
                                 (chartInstance->c1_covrtInstance, 4U, 0U, 23U,
                                  c1_center_left_top, 4.0, -1, 2U,
                                  c1_center_left_top < 4.0)) || covrtEmlCondEval
                (chartInstance->c1_covrtInstance, 4U, 0, 19,
                 covrtRelationalopUpdateFcn(chartInstance->c1_covrtInstance, 4U,
                  0U, 24U, c1_center_left_bottom, 4.0, -1, 2U,
                  c1_center_left_bottom < 4.0))) {
              covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 8, true);
              covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 32, true);
              c1_b_output_mode = -2.0;
            } else {
              covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 8, false);
              covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 32, false);
              c1_b_output_mode = 1.0;
            }
          }
        }
      }
    }
  } else {
    covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 0, false);
    covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 3, false);
    if (covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 20,
                         covrtRelationalopUpdateFcn
                         (chartInstance->c1_covrtInstance, 4U, 0U, 25U, (real_T)
                          c1_heading_cond, 0.0, -1, 0U, !c1_heading_cond)) &&
        covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 21,
                         covrtRelationalopUpdateFcn
                         (chartInstance->c1_covrtInstance, 4U, 0U, 26U, (real_T)
                          c1_center_cond, 1.0, -1, 0U, (int32_T)c1_center_cond)))
    {
      covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 9, true);
      covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 33, true);
      c1_direction_of_nextLine = 0.0;
      c1_count = 0.0;
      if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 34,
                         covrtRelationalopUpdateFcn
                         (chartInstance->c1_covrtInstance, 4U, 0U, 27U,
                          chartInstance->c1_local_cond, 1.0, -1, 0U,
                          chartInstance->c1_local_cond == 1.0))) {
        c1_row_min = chartInstance->c1_local_array[0];
        c1_row_max = chartInstance->c1_local_array[1];
        c1_col_min = chartInstance->c1_local_array[2];
        c1_col_max = chartInstance->c1_local_array[3];
        c1_b = (c1_row_min > c1_row_max);
        c1_b1 = c1_b;
        c1_b2 = false;
        c1_b3 = (c1_b1 || c1_b2);
        if (c1_b3) {
          c1_i19 = 1;
          c1_i21 = 0;
        } else {
          if (c1_row_min != (real_T)(int32_T)muDoubleScalarFloor(c1_row_min)) {
            emlrtIntegerCheckR2012b(c1_row_min, &c1_c_emlrtDCI, &c1_st);
          }

          c1_i22 = (int32_T)c1_row_min;
          if ((c1_i22 < 1) || (c1_i22 > 120)) {
            emlrtDynamicBoundsCheckR2012b(c1_i22, 1, 120, &c1_c_emlrtBCI, &c1_st);
          }

          c1_i19 = c1_i22;
          if (c1_row_max != (real_T)(int32_T)muDoubleScalarFloor(c1_row_max)) {
            emlrtIntegerCheckR2012b(c1_row_max, &c1_d_emlrtDCI, &c1_st);
          }

          c1_i30 = (int32_T)c1_row_max;
          if ((c1_i30 < 1) || (c1_i30 > 120)) {
            emlrtDynamicBoundsCheckR2012b(c1_i30, 1, 120, &c1_d_emlrtBCI, &c1_st);
          }

          c1_i21 = c1_i30;
        }

        c1_b4 = (c1_col_min > c1_col_max);
        c1_b5 = c1_b4;
        c1_b6 = false;
        c1_b7 = (c1_b5 || c1_b6);
        if (c1_b7) {
          c1_i31 = 1;
          c1_i35 = 0;
        } else {
          if (c1_col_min != (real_T)(int32_T)muDoubleScalarFloor(c1_col_min)) {
            emlrtIntegerCheckR2012b(c1_col_min, &c1_e_emlrtDCI, &c1_st);
          }

          c1_i36 = (int32_T)c1_col_min;
          if ((c1_i36 < 1) || (c1_i36 > 160)) {
            emlrtDynamicBoundsCheckR2012b(c1_i36, 1, 160, &c1_e_emlrtBCI, &c1_st);
          }

          c1_i31 = c1_i36;
          if (c1_col_max != (real_T)(int32_T)muDoubleScalarFloor(c1_col_max)) {
            emlrtIntegerCheckR2012b(c1_col_max, &c1_f_emlrtDCI, &c1_st);
          }

          c1_i45 = (int32_T)c1_col_max;
          if ((c1_i45 < 1) || (c1_i45 > 160)) {
            emlrtDynamicBoundsCheckR2012b(c1_i45, 1, 160, &c1_f_emlrtBCI, &c1_st);
          }

          c1_i35 = c1_i45;
        }

        c1_b9 = (c1_row_min > c1_row_max);
        c1_b11 = c1_b9;
        c1_b13 = false;
        c1_b15 = (c1_b11 || c1_b13);
        if (c1_b15) {
          c1_i46 = 1;
          c1_i49 = 0;
        } else {
          if (c1_row_min != (real_T)(int32_T)muDoubleScalarFloor(c1_row_min)) {
            emlrtIntegerCheckR2012b(c1_row_min, &c1_o_emlrtDCI, &c1_st);
          }

          c1_i50 = (int32_T)c1_row_min;
          if ((c1_i50 < 1) || (c1_i50 > 120)) {
            emlrtDynamicBoundsCheckR2012b(c1_i50, 1, 120, &c1_o_emlrtBCI, &c1_st);
          }

          c1_i46 = c1_i50;
          if (c1_row_max != (real_T)(int32_T)muDoubleScalarFloor(c1_row_max)) {
            emlrtIntegerCheckR2012b(c1_row_max, &c1_p_emlrtDCI, &c1_st);
          }

          c1_i60 = (int32_T)c1_row_max;
          if ((c1_i60 < 1) || (c1_i60 > 120)) {
            emlrtDynamicBoundsCheckR2012b(c1_i60, 1, 120, &c1_p_emlrtBCI, &c1_st);
          }

          c1_i49 = c1_i60;
        }

        c1_b16 = (c1_col_min > c1_col_max);
        c1_b18 = c1_b16;
        c1_b19 = false;
        c1_b20 = (c1_b18 || c1_b19);
        if (c1_b20) {
          c1_i61 = 1;
          c1_i62 = 0;
        } else {
          if (c1_col_min != (real_T)(int32_T)muDoubleScalarFloor(c1_col_min)) {
            emlrtIntegerCheckR2012b(c1_col_min, &c1_q_emlrtDCI, &c1_st);
          }

          c1_i64 = (int32_T)c1_col_min;
          if ((c1_i64 < 1) || (c1_i64 > 160)) {
            emlrtDynamicBoundsCheckR2012b(c1_i64, 1, 160, &c1_q_emlrtBCI, &c1_st);
          }

          c1_i61 = c1_i64;
          if (c1_col_max != (real_T)(int32_T)muDoubleScalarFloor(c1_col_max)) {
            emlrtIntegerCheckR2012b(c1_col_max, &c1_r_emlrtDCI, &c1_st);
          }

          c1_i70 = (int32_T)c1_col_max;
          if ((c1_i70 < 1) || (c1_i70 > 160)) {
            emlrtDynamicBoundsCheckR2012b(c1_i70, 1, 160, &c1_r_emlrtBCI, &c1_st);
          }

          c1_i62 = c1_i70;
        }

        c1_tmp_size[0] = (c1_i49 - c1_i46) + 1;
        c1_b_loop_ub = c1_i49 - c1_i46;
        for (c1_i67 = 0; c1_i67 <= c1_b_loop_ub; c1_i67++) {
          c1_b_tmp_data[c1_i67] = (c1_i46 + c1_i67) - 1;
        }

        c1_b_tmp_size[0] = (c1_i62 - c1_i61) + 1;
        c1_c_loop_ub = c1_i62 - c1_i61;
        for (c1_i72 = 0; c1_i72 <= c1_c_loop_ub; c1_i72++) {
          c1_c_tmp_data[c1_i72] = (c1_i61 + c1_i72) - 1;
        }

        c1_c_tmp_size[0] = (c1_i21 - c1_i19) + 1;
        c1_c_tmp_size[1] = (c1_i35 - c1_i31) + 1;
        c1_d_loop_ub = c1_i35 - c1_i31;
        for (c1_i75 = 0; c1_i75 <= c1_d_loop_ub; c1_i75++) {
          c1_e_loop_ub = c1_i21 - c1_i19;
          for (c1_i76 = 0; c1_i76 <= c1_e_loop_ub; c1_i76++) {
            chartInstance->c1_tmp_data[c1_i76 + c1_c_tmp_size[0] * c1_i75] =
              (real_T)c1_b_u[((c1_i19 + c1_i76) + 120 * ((c1_i31 + c1_i75) - 1))
              - 1];
          }
        }

        c1_iv[0] = c1_tmp_size[0];
        c1_iv[1] = c1_b_tmp_size[0];
        emlrtSubAssignSizeCheckR2012b(&c1_iv[0], 2, &c1_c_tmp_size[0], 2,
          &c1_b_emlrtECI, &c1_st);
        c1_f_loop_ub = c1_c_tmp_size[1] - 1;
        for (c1_i79 = 0; c1_i79 <= c1_f_loop_ub; c1_i79++) {
          c1_g_loop_ub = c1_c_tmp_size[0] - 1;
          for (c1_i81 = 0; c1_i81 <= c1_g_loop_ub; c1_i81++) {
            chartInstance->c1_find_yaw_mat[c1_b_tmp_data[c1_i81] + 120 *
              c1_c_tmp_data[c1_i79]] = chartInstance->c1_tmp_data[c1_i81 +
              c1_c_tmp_size[0] * c1_i79];
          }
        }

        c1_b21 = (c1_row_min > c1_row_max);
        c1_b22 = c1_b21;
        c1_b23 = false;
        c1_b24 = (c1_b22 || c1_b23);
        if (c1_b24) {
          c1_i83 = 1;
          c1_i85 = 0;
        } else {
          if (c1_row_min != (real_T)(int32_T)muDoubleScalarFloor(c1_row_min)) {
            emlrtIntegerCheckR2012b(c1_row_min, &c1_g_emlrtDCI, &c1_st);
          }

          c1_i86 = (int32_T)c1_row_min;
          if ((c1_i86 < 1) || (c1_i86 > 120)) {
            emlrtDynamicBoundsCheckR2012b(c1_i86, 1, 120, &c1_g_emlrtBCI, &c1_st);
          }

          c1_i83 = c1_i86;
          if (c1_row_max != (real_T)(int32_T)muDoubleScalarFloor(c1_row_max)) {
            emlrtIntegerCheckR2012b(c1_row_max, &c1_h_emlrtDCI, &c1_st);
          }

          c1_i90 = (int32_T)c1_row_max;
          if ((c1_i90 < 1) || (c1_i90 > 120)) {
            emlrtDynamicBoundsCheckR2012b(c1_i90, 1, 120, &c1_h_emlrtBCI, &c1_st);
          }

          c1_i85 = c1_i90;
        }

        c1_b25 = (c1_col_min > c1_col_max);
        c1_b26 = c1_b25;
        c1_b27 = false;
        c1_b28 = (c1_b26 || c1_b27);
        if (c1_b28) {
          c1_i91 = 1;
          c1_i93 = 0;
        } else {
          if (c1_col_min != (real_T)(int32_T)muDoubleScalarFloor(c1_col_min)) {
            emlrtIntegerCheckR2012b(c1_col_min, &c1_i_emlrtDCI, &c1_st);
          }

          c1_i94 = (int32_T)c1_col_min;
          if ((c1_i94 < 1) || (c1_i94 > 160)) {
            emlrtDynamicBoundsCheckR2012b(c1_i94, 1, 160, &c1_i_emlrtBCI, &c1_st);
          }

          c1_i91 = c1_i94;
          if (c1_col_max != (real_T)(int32_T)muDoubleScalarFloor(c1_col_max)) {
            emlrtIntegerCheckR2012b(c1_col_max, &c1_j_emlrtDCI, &c1_st);
          }

          c1_i96 = (int32_T)c1_col_max;
          if ((c1_i96 < 1) || (c1_i96 > 160)) {
            emlrtDynamicBoundsCheckR2012b(c1_i96, 1, 160, &c1_j_emlrtBCI, &c1_st);
          }

          c1_i93 = c1_i96;
        }

        c1_b29 = (c1_row_min > c1_row_max);
        c1_b30 = c1_b29;
        c1_b31 = false;
        c1_b32 = (c1_b30 || c1_b31);
        if (c1_b32) {
          c1_i97 = 1;
          c1_i99 = 0;
        } else {
          if (c1_row_min != (real_T)(int32_T)muDoubleScalarFloor(c1_row_min)) {
            emlrtIntegerCheckR2012b(c1_row_min, &c1_k_emlrtDCI, &c1_st);
          }

          c1_i100 = (int32_T)c1_row_min;
          if ((c1_i100 < 1) || (c1_i100 > 120)) {
            emlrtDynamicBoundsCheckR2012b(c1_i100, 1, 120, &c1_k_emlrtBCI,
              &c1_st);
          }

          c1_i97 = c1_i100;
          if (c1_row_max != (real_T)(int32_T)muDoubleScalarFloor(c1_row_max)) {
            emlrtIntegerCheckR2012b(c1_row_max, &c1_l_emlrtDCI, &c1_st);
          }

          c1_i102 = (int32_T)c1_row_max;
          if ((c1_i102 < 1) || (c1_i102 > 120)) {
            emlrtDynamicBoundsCheckR2012b(c1_i102, 1, 120, &c1_l_emlrtBCI,
              &c1_st);
          }

          c1_i99 = c1_i102;
        }

        c1_b34 = (c1_col_min > c1_col_max);
        c1_b36 = c1_b34;
        c1_b37 = false;
        c1_b38 = (c1_b36 || c1_b37);
        if (c1_b38) {
          c1_i103 = 1;
          c1_i104 = 0;
        } else {
          if (c1_col_min != (real_T)(int32_T)muDoubleScalarFloor(c1_col_min)) {
            emlrtIntegerCheckR2012b(c1_col_min, &c1_m_emlrtDCI, &c1_st);
          }

          c1_i105 = (int32_T)c1_col_min;
          if ((c1_i105 < 1) || (c1_i105 > 160)) {
            emlrtDynamicBoundsCheckR2012b(c1_i105, 1, 160, &c1_m_emlrtBCI,
              &c1_st);
          }

          c1_i103 = c1_i105;
          if (c1_col_max != (real_T)(int32_T)muDoubleScalarFloor(c1_col_max)) {
            emlrtIntegerCheckR2012b(c1_col_max, &c1_n_emlrtDCI, &c1_st);
          }

          c1_i107 = (int32_T)c1_col_max;
          if ((c1_i107 < 1) || (c1_i107 > 160)) {
            emlrtDynamicBoundsCheckR2012b(c1_i107, 1, 160, &c1_n_emlrtBCI,
              &c1_st);
          }

          c1_i104 = c1_i107;
        }

        c1_tmp_size[0] = (c1_i99 - c1_i97) + 1;
        c1_h_loop_ub = c1_i99 - c1_i97;
        for (c1_i106 = 0; c1_i106 <= c1_h_loop_ub; c1_i106++) {
          c1_b_tmp_data[c1_i106] = (c1_i97 + c1_i106) - 1;
        }

        c1_b_tmp_size[0] = (c1_i104 - c1_i103) + 1;
        c1_i_loop_ub = c1_i104 - c1_i103;
        for (c1_i108 = 0; c1_i108 <= c1_i_loop_ub; c1_i108++) {
          c1_c_tmp_data[c1_i108] = (c1_i103 + c1_i108) - 1;
        }

        c1_c_tmp_size[0] = (c1_i85 - c1_i83) + 1;
        c1_c_tmp_size[1] = (c1_i93 - c1_i91) + 1;
        c1_j_loop_ub = c1_i93 - c1_i91;
        for (c1_i109 = 0; c1_i109 <= c1_j_loop_ub; c1_i109++) {
          c1_k_loop_ub = c1_i85 - c1_i83;
          for (c1_i110 = 0; c1_i110 <= c1_k_loop_ub; c1_i110++) {
            chartInstance->c1_tmp_data[c1_i110 + c1_c_tmp_size[0] * c1_i109] =
              (real_T)c1_canny_img[((c1_i83 + c1_i110) + 120 * ((c1_i91 +
              c1_i109) - 1)) - 1];
          }
        }

        c1_iv1[0] = c1_tmp_size[0];
        c1_iv1[1] = c1_b_tmp_size[0];
        emlrtSubAssignSizeCheckR2012b(&c1_iv1[0], 2, &c1_c_tmp_size[0], 2,
          &c1_emlrtECI, &c1_st);
        c1_l_loop_ub = c1_c_tmp_size[1] - 1;
        for (c1_i111 = 0; c1_i111 <= c1_l_loop_ub; c1_i111++) {
          c1_m_loop_ub = c1_c_tmp_size[0] - 1;
          for (c1_i112 = 0; c1_i112 <= c1_m_loop_ub; c1_i112++) {
            chartInstance->c1_yaw_mat[c1_b_tmp_data[c1_i112] + 120 *
              c1_c_tmp_data[c1_i111]] = chartInstance->c1_tmp_data[c1_i112 +
              c1_c_tmp_size[0] * c1_i111];
          }
        }
      }

      for (c1_i15 = 0; c1_i15 < 2000; c1_i15++) {
        c1_local_area[c1_i15] = 0U;
      }

      for (c1_e_row = 0; c1_e_row < 120; c1_e_row++) {
        c1_c_row = 1.0 + (real_T)c1_e_row;
        covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 20, 1);
        for (c1_c_col = 0; c1_c_col < 160; c1_c_col++) {
          c1_d_col = 1.0 + (real_T)c1_c_col;
          covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 21, 1);
          c1_b_st.site = &c1_b_emlrtRSI;
          c1_d_a = c1_c_row - 60.0;
          c1_e_a = c1_d_a;
          c1_f_a = c1_e_a;
          c1_g_a = c1_f_a;
          c1_h_a = c1_g_a;
          c1_c = c1_h_a * c1_h_a;
          c1_b_st.site = &c1_b_emlrtRSI;
          c1_i_a = c1_d_col - 80.0;
          c1_j_a = c1_i_a;
          c1_k_a = c1_j_a;
          c1_l_a = c1_k_a;
          c1_m_a = c1_l_a;
          c1_b_c = c1_m_a * c1_m_a;
          c1_distance_from_center = c1_c + c1_b_c;
          c1_b_st.site = &c1_b_emlrtRSI;
          c1_b_sqrt(chartInstance, &c1_b_st, &c1_distance_from_center);
          if (covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 22,
                               c1_d_col > 57.0) && covrtEmlCondEval
              (chartInstance->c1_covrtInstance, 4U, 0, 23, c1_d_col < 103.0) &&
              covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 24,
                               c1_c_row > 42.0)) {
            c1_b17 = true;
          } else {
            c1_b17 = false;
          }

          c1_is_past_line_area = covrtEmlMcdcEval
            (chartInstance->c1_covrtInstance, 4U, 0, 10, c1_b17);
          if (covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 25,
                               covrtRelationalopUpdateFcn
                               (chartInstance->c1_covrtInstance, 4U, 0U, 28U,
                                chartInstance->c1_local_cond, 0.0, -1, 0U,
                                chartInstance->c1_local_cond == 0.0)) &&
              covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 26,
                               covrtRelationalopUpdateFcn
                               (chartInstance->c1_covrtInstance, 4U, 0U, 29U,
                                c1_distance_from_center, 58.0, -1, 3U,
                                c1_distance_from_center <= 58.0)) &&
              covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 27,
                               covrtRelationalopUpdateFcn
                               (chartInstance->c1_covrtInstance, 4U, 0U, 30U,
                                c1_distance_from_center, 43.0, -1, 5U,
                                c1_distance_from_center >= 43.0))) {
            covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 11, true);
            covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 35, true);
            if (c1_c_row != (real_T)(int32_T)muDoubleScalarFloor(c1_c_row)) {
              emlrtIntegerCheckR2012b(c1_c_row, &c1_rb_emlrtDCI, &c1_st);
            }

            c1_i65 = (int32_T)c1_c_row;
            if ((c1_i65 < 1) || (c1_i65 > 120)) {
              emlrtDynamicBoundsCheckR2012b(c1_i65, 1, 120, &c1_rb_emlrtBCI,
                &c1_st);
            }

            if (c1_d_col != (real_T)(int32_T)muDoubleScalarFloor(c1_d_col)) {
              emlrtIntegerCheckR2012b(c1_d_col, &c1_sb_emlrtDCI, &c1_st);
            }

            c1_i71 = (int32_T)c1_d_col;
            if ((c1_i71 < 1) || (c1_i71 > 160)) {
              emlrtDynamicBoundsCheckR2012b(c1_i71, 1, 160, &c1_sb_emlrtBCI,
                &c1_st);
            }

            c1_d11 = (real_T)c1_b_u[(c1_i65 + 120 * (c1_i71 - 1)) - 1];
            if (covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 28,
                                 covrtRelationalopUpdateFcn
                                 (chartInstance->c1_covrtInstance, 4U, 0U, 31U,
                                  c1_d11, 1.0, -1, 0U, c1_d11 == 1.0)) &&
                covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 29,
                                 !c1_is_past_line_area)) {
              covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 12, true);
              covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 36, true);
              c1_count++;
              if (c1_count != (real_T)(int32_T)muDoubleScalarFloor(c1_count)) {
                emlrtIntegerCheckR2012b(c1_count, &c1_s_emlrtDCI, &c1_st);
              }

              c1_i77 = (int32_T)c1_count;
              if ((c1_i77 < 1) || (c1_i77 > 1000)) {
                emlrtDynamicBoundsCheckR2012b(c1_i77, 1, 1000, &c1_s_emlrtBCI,
                  &c1_st);
              }

              c1_d14 = muDoubleScalarRound(c1_c_row);
              c1_b_covSaturation = false;
              if (c1_d14 < 256.0) {
                if (c1_d14 >= 0.0) {
                  c1_c_u = (uint8_T)c1_d14;
                } else {
                  c1_b_covSaturation = true;
                  c1_c_u = 0U;
                  sf_data_saturate_error(chartInstance->S, 1U, 8272, 25);
                }
              } else if (c1_d14 >= 256.0) {
                c1_b_covSaturation = true;
                c1_c_u = MAX_uint8_T;
                sf_data_saturate_error(chartInstance->S, 1U, 8272, 25);
              } else {
                c1_c_u = 0U;
              }

              covrtSaturationUpdateFcn(chartInstance->c1_covrtInstance, 4, 0, 4,
                0, c1_b_covSaturation);
              c1_local_area[(c1_i77 - 1) << 1] = c1_c_u;
              if (c1_count != (real_T)(int32_T)muDoubleScalarFloor(c1_count)) {
                emlrtIntegerCheckR2012b(c1_count, &c1_t_emlrtDCI, &c1_st);
              }

              c1_i88 = (int32_T)c1_count;
              if ((c1_i88 < 1) || (c1_i88 > 1000)) {
                emlrtDynamicBoundsCheckR2012b(c1_i88, 1, 1000, &c1_t_emlrtBCI,
                  &c1_st);
              }

              c1_d18 = muDoubleScalarRound(c1_d_col);
              c1_d_covSaturation = false;
              if (c1_d18 < 256.0) {
                if (c1_d18 >= 0.0) {
                  c1_u2 = (uint8_T)c1_d18;
                } else {
                  c1_d_covSaturation = true;
                  c1_u2 = 0U;
                  sf_data_saturate_error(chartInstance->S, 1U, 8318, 25);
                }
              } else if (c1_d18 >= 256.0) {
                c1_d_covSaturation = true;
                c1_u2 = MAX_uint8_T;
                sf_data_saturate_error(chartInstance->S, 1U, 8318, 25);
              } else {
                c1_u2 = 0U;
              }

              covrtSaturationUpdateFcn(chartInstance->c1_covrtInstance, 4, 0, 5,
                0, c1_d_covSaturation);
              c1_local_area[1 + ((c1_i88 - 1) << 1)] = c1_u2;
            } else {
              covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 12, false);
              covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 36, false);
            }
          } else {
            covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 11, false);
            covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 35, false);
            if (covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 30,
                                 covrtRelationalopUpdateFcn
                                 (chartInstance->c1_covrtInstance, 4U, 0U, 32U,
                                  chartInstance->c1_local_cond, 1.0, -1, 0U,
                                  chartInstance->c1_local_cond == 1.0)) &&
                covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 31,
                                 covrtRelationalopUpdateFcn
                                 (chartInstance->c1_covrtInstance, 4U, 0U, 33U,
                                  c1_distance_from_center, 58.0, -1, 3U,
                                  c1_distance_from_center <= 58.0)) &&
                covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 32,
                                 covrtRelationalopUpdateFcn
                                 (chartInstance->c1_covrtInstance, 4U, 0U, 34U,
                                  c1_distance_from_center, 43.0, -1, 5U,
                                  c1_distance_from_center >= 43.0))) {
              covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 13, true);
              covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 37, true);
              if (c1_c_row != (real_T)(int32_T)muDoubleScalarFloor(c1_c_row)) {
                emlrtIntegerCheckR2012b(c1_c_row, &c1_vb_emlrtDCI, &c1_st);
              }

              c1_i68 = (int32_T)c1_c_row;
              if ((c1_i68 < 1) || (c1_i68 > 120)) {
                emlrtDynamicBoundsCheckR2012b(c1_i68, 1, 120, &c1_vb_emlrtBCI,
                  &c1_st);
              }

              if (c1_d_col != (real_T)(int32_T)muDoubleScalarFloor(c1_d_col)) {
                emlrtIntegerCheckR2012b(c1_d_col, &c1_wb_emlrtDCI, &c1_st);
              }

              c1_i73 = (int32_T)c1_d_col;
              if ((c1_i73 < 1) || (c1_i73 > 160)) {
                emlrtDynamicBoundsCheckR2012b(c1_i73, 1, 160, &c1_wb_emlrtBCI,
                  &c1_st);
              }

              c1_d12 = chartInstance->c1_find_yaw_mat[(c1_i68 + 120 * (c1_i73 -
                1)) - 1];
              if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 38,
                                 covrtRelationalopUpdateFcn
                                 (chartInstance->c1_covrtInstance, 4U, 0U, 35U,
                                  c1_d12, 1.0, -1, 0U, c1_d12 == 1.0))) {
                c1_count++;
                c1_direction_of_nextLine += c1_d_col;
                if (c1_count != (real_T)(int32_T)muDoubleScalarFloor(c1_count))
                {
                  emlrtIntegerCheckR2012b(c1_count, &c1_u_emlrtDCI, &c1_st);
                }

                c1_i80 = (int32_T)c1_count;
                if ((c1_i80 < 1) || (c1_i80 > 1000)) {
                  emlrtDynamicBoundsCheckR2012b(c1_i80, 1, 1000, &c1_u_emlrtBCI,
                    &c1_st);
                }

                c1_d15 = muDoubleScalarRound(c1_c_row);
                c1_c_covSaturation = false;
                if (c1_d15 < 256.0) {
                  if (c1_d15 >= 0.0) {
                    c1_u1 = (uint8_T)c1_d15;
                  } else {
                    c1_c_covSaturation = true;
                    c1_u1 = 0U;
                    sf_data_saturate_error(chartInstance->S, 1U, 8673, 25);
                  }
                } else if (c1_d15 >= 256.0) {
                  c1_c_covSaturation = true;
                  c1_u1 = MAX_uint8_T;
                  sf_data_saturate_error(chartInstance->S, 1U, 8673, 25);
                } else {
                  c1_u1 = 0U;
                }

                covrtSaturationUpdateFcn(chartInstance->c1_covrtInstance, 4, 0,
                  6, 0, c1_c_covSaturation);
                c1_local_area[(c1_i80 - 1) << 1] = c1_u1;
                if (c1_count != (real_T)(int32_T)muDoubleScalarFloor(c1_count))
                {
                  emlrtIntegerCheckR2012b(c1_count, &c1_v_emlrtDCI, &c1_st);
                }

                c1_i89 = (int32_T)c1_count;
                if ((c1_i89 < 1) || (c1_i89 > 1000)) {
                  emlrtDynamicBoundsCheckR2012b(c1_i89, 1, 1000, &c1_v_emlrtBCI,
                    &c1_st);
                }

                c1_d19 = muDoubleScalarRound(c1_d_col);
                c1_e_covSaturation = false;
                if (c1_d19 < 256.0) {
                  if (c1_d19 >= 0.0) {
                    c1_u3 = (uint8_T)c1_d19;
                  } else {
                    c1_e_covSaturation = true;
                    c1_u3 = 0U;
                    sf_data_saturate_error(chartInstance->S, 1U, 8720, 25);
                  }
                } else if (c1_d19 >= 256.0) {
                  c1_e_covSaturation = true;
                  c1_u3 = MAX_uint8_T;
                  sf_data_saturate_error(chartInstance->S, 1U, 8720, 25);
                } else {
                  c1_u3 = 0U;
                }

                covrtSaturationUpdateFcn(chartInstance->c1_covrtInstance, 4, 0,
                  7, 0, c1_e_covSaturation);
                c1_local_area[1 + ((c1_i89 - 1) << 1)] = c1_u3;
              }
            } else {
              covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 13, false);
              covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 37, false);
            }
          }

          _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
        }

        covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 21, 0);
        _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
      }

      covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 20, 0);
      if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 39,
                         covrtRelationalopUpdateFcn
                         (chartInstance->c1_covrtInstance, 4U, 0U, 36U,
                          chartInstance->c1_local_cond, 1.0, -1, 0U,
                          chartInstance->c1_local_cond == 1.0))) {
        c1_direction_of_nextLine /= c1_count;
      }

      chartInstance->c1_local_cond = 1.0;
      c1_k = 1.0;
      c1_b_k = 0;
      do {
        c1_exitg1 = 0;
        if (c1_b_k < 1000) {
          c1_k = 1.0 + (real_T)c1_b_k;
          covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 22, 1);
          if (c1_k != (real_T)(int32_T)muDoubleScalarFloor(c1_k)) {
            emlrtIntegerCheckR2012b(c1_k, &c1_eb_emlrtDCI, &c1_st);
          }

          c1_i34 = (int32_T)c1_k;
          if ((c1_i34 < 1) || (c1_i34 > 1000)) {
            emlrtDynamicBoundsCheckR2012b(c1_i34, 1, 1000, &c1_eb_emlrtBCI,
              &c1_st);
          }

          c1_d6 = (real_T)c1_local_area[(c1_i34 - 1) << 1];
          if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 40,
                             covrtRelationalopUpdateFcn
                             (chartInstance->c1_covrtInstance, 4U, 0U, 37U,
                              c1_d6, 0.0, -1, 0U, c1_d6 == 0.0))) {
            c1_exitg1 = 1;
          } else {
            c1_b_k++;
            _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
          }
        } else {
          covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 22, 0);
          c1_exitg1 = 1;
        }
      } while (c1_exitg1 == 0);

      if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 41,
                         covrtRelationalopUpdateFcn
                         (chartInstance->c1_covrtInstance, 4U, 0U, 38U, c1_k -
                          1.0, 1.0, -1, 5U, c1_k - 1.0 >= 1.0))) {
        c1_d3 = c1_k - 1.0;
        c1_b8 = (c1_d3 < 1.0);
        c1_b10 = c1_b8;
        c1_b12 = false;
        c1_b14 = (c1_b10 || c1_b12);
        if (c1_b14) {
          c1_i44 = 1;
          c1_i48 = 0;
        } else {
          c1_i44 = 1;
          if (c1_d3 != (real_T)(int32_T)muDoubleScalarFloor(c1_d3)) {
            emlrtIntegerCheckR2012b(c1_d3, &c1_w_emlrtDCI, &c1_st);
          }

          c1_i51 = (int32_T)c1_d3;
          if ((c1_i51 < 1) || (c1_i51 > 1000)) {
            emlrtDynamicBoundsCheckR2012b(c1_i51, 1, 1000, &c1_w_emlrtBCI,
              &c1_st);
          }

          c1_i48 = c1_i51;
        }

        c1_local_area_new_size[0] = 2;
        c1_local_area_new_size[1] = (c1_i48 - c1_i44) + 1;
        c1_loop_ub = c1_i48 - c1_i44;
        for (c1_i56 = 0; c1_i56 <= c1_loop_ub; c1_i56++) {
          for (c1_i59 = 0; c1_i59 < 2; c1_i59++) {
            c1_local_area_new_data[c1_i59 + (c1_i56 << 1)] =
              c1_local_area[c1_i59 + (((c1_i44 + c1_i56) - 1) << 1)];
          }
        }

        c1_b_st.site = &c1_c_emlrtRSI;
        c1_local_find(chartInstance, &c1_b_st, c1_local_area_new_data,
                      c1_local_area_new_size, c1_b_dv);
        for (c1_i63 = 0; c1_i63 < 4; c1_i63++) {
          chartInstance->c1_local_array[c1_i63] = c1_b_dv[c1_i63];
        }
      } else {
        c1_b_st.site = &c1_d_emlrtRSI;
        c1_string_disp(chartInstance, &c1_b_st);
      }

      if (!covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 42,
                          covrtRelationalopUpdateFcn
                          (chartInstance->c1_covrtInstance, 4U, 0U, 39U,
                           c1_direction_of_nextLine, 0.0, -1, 0U,
                           c1_direction_of_nextLine == 0.0))) {
        if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 43,
                           covrtRelationalopUpdateFcn
                           (chartInstance->c1_covrtInstance, 4U, 0U, 40U,
                            c1_direction_of_nextLine, 80.0, -1, 4U,
                            c1_direction_of_nextLine > 80.0))) {
          c1_b_yaw_out = 1.0;
          chartInstance->c1_add_yaw = 1.0;
        } else if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 44,
                    covrtRelationalopUpdateFcn(chartInstance->c1_covrtInstance,
                     4U, 0U, 41U, c1_direction_of_nextLine, 80.0, -1, 3U,
                     c1_direction_of_nextLine <= 80.0))) {
          c1_b_yaw_out = -1.0;
          chartInstance->c1_add_yaw = -1.0;
        }
      }
    } else {
      covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 9, false);
      covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 33, false);
      c1_b_st.site = &c1_e_emlrtRSI;
      c1_b_string_disp(chartInstance, &c1_b_st);
    }
  }

  covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 33,
                   covrtRelationalopUpdateFcn(chartInstance->c1_covrtInstance,
    4U, 0U, 42U, 4.0, 4.0, -1, 0U, 1));
  if (covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 34,
                       covrtRelationalopUpdateFcn
                       (chartInstance->c1_covrtInstance, 4U, 0U, 43U, (real_T)
                        c1_heading_cond, 0.0, -1, 0U, !c1_heading_cond)) &&
      covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 35,
                       covrtRelationalopUpdateFcn
                       (chartInstance->c1_covrtInstance, 4U, 0U, 44U, (real_T)
                        c1_center_cond, 1.0, -1, 0U, (int32_T)c1_center_cond)))
  {
    covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 14, true);
    covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 45, true);
    c1_d = muDoubleScalarRound(chartInstance->c1_local_array[2]);
    if (c1_d < 128.0) {
      if (c1_d >= -128.0) {
        c1_i18 = (int8_T)c1_d;
      } else {
        c1_i18 = MIN_int8_T;
        sf_data_saturate_error(chartInstance->S, 1U, 9938, 116);
      }
    } else if (c1_d >= 128.0) {
      c1_i18 = MAX_int8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 9938, 116);
    } else {
      c1_i18 = 0;
    }

    (*chartInstance->c1_pts_local_area)[0] = c1_i18;
    c1_d1 = muDoubleScalarRound(chartInstance->c1_local_array[0]);
    if (c1_d1 < 128.0) {
      if (c1_d1 >= -128.0) {
        c1_i26 = (int8_T)c1_d1;
      } else {
        c1_i26 = MIN_int8_T;
        sf_data_saturate_error(chartInstance->S, 1U, 9938, 116);
      }
    } else if (c1_d1 >= 128.0) {
      c1_i26 = MAX_int8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 9938, 116);
    } else {
      c1_i26 = 0;
    }

    (*chartInstance->c1_pts_local_area)[1] = c1_i26;
    c1_d2 = muDoubleScalarRound(chartInstance->c1_local_array[3] -
      chartInstance->c1_local_array[2]);
    if (c1_d2 < 128.0) {
      if (c1_d2 >= -128.0) {
        c1_i39 = (int8_T)c1_d2;
      } else {
        c1_i39 = MIN_int8_T;
        sf_data_saturate_error(chartInstance->S, 1U, 9938, 116);
      }
    } else if (c1_d2 >= 128.0) {
      c1_i39 = MAX_int8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 9938, 116);
    } else {
      c1_i39 = 0;
    }

    (*chartInstance->c1_pts_local_area)[2] = c1_i39;
    c1_d8 = muDoubleScalarRound(chartInstance->c1_local_array[1] -
      chartInstance->c1_local_array[0]);
    c1_covSaturation = false;
    if (c1_d8 < 128.0) {
      if (c1_d8 >= -128.0) {
        c1_i54 = (int8_T)c1_d8;
      } else {
        c1_covSaturation = true;
        c1_i54 = MIN_int8_T;
        sf_data_saturate_error(chartInstance->S, 1U, 9938, 116);
      }
    } else if (c1_d8 >= 128.0) {
      c1_covSaturation = true;
      c1_i54 = MAX_int8_T;
      sf_data_saturate_error(chartInstance->S, 1U, 9938, 116);
    } else {
      c1_i54 = 0;
    }

    covrtSaturationUpdateFcn(chartInstance->c1_covrtInstance, 4, 0, 8, 0,
      c1_covSaturation);
    (*chartInstance->c1_pts_local_area)[3] = c1_i54;
  } else {
    covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 14, false);
    covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 45, false);
    for (c1_i16 = 0; c1_i16 < 4; c1_i16++) {
      (*chartInstance->c1_pts_local_area)[c1_i16] = 0;
    }
  }

  for (c1_i17 = 0; c1_i17 < 961; c1_i17++) {
    (*chartInstance->c1_center_mat)[c1_i17] = c1_b_center_mat[c1_i17];
  }

  for (c1_i20 = 0; c1_i20 < 806; c1_i20++) {
    (*chartInstance->c1_heading_mat)[c1_i20] = c1_b_heading_mat[c1_i20];
  }

  for (c1_i24 = 0; c1_i24 < 19200; c1_i24++) {
    (*chartInstance->c1_b_yaw_mat)[c1_i24] = chartInstance->c1_yaw_mat[c1_i24];
  }

  *chartInstance->c1_output_mode = c1_b_output_mode;
  *chartInstance->c1_yaw_out = c1_b_yaw_out;
  for (c1_i27 = 0; c1_i27 < 4; c1_i27++) {
    (*chartInstance->c1_pts_erase_past_line)[c1_i27] =
      c1_b_pts_erase_past_line[c1_i27];
  }

  for (c1_i33 = 0; c1_i33 < 6; c1_i33++) {
    (*chartInstance->c1_pts_roi_circle)[c1_i33] = c1_b_pts_roi_circle[c1_i33];
  }

  c1_do_animation_call_c1_flightControlSystem(chartInstance);
  for (c1_i37 = 0; c1_i37 < 961; c1_i37++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 1U, (real_T)
                      (*chartInstance->c1_center_mat)[c1_i37]);
  }

  for (c1_i40 = 0; c1_i40 < 806; c1_i40++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 2U, (real_T)
                      (*chartInstance->c1_heading_mat)[c1_i40]);
  }

  for (c1_i43 = 0; c1_i43 < 19200; c1_i43++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 3U,
                      (*chartInstance->c1_b_yaw_mat)[c1_i43]);
  }

  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 4U,
                    *chartInstance->c1_output_mode);
  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 5U,
                    *chartInstance->c1_yaw_out);
  for (c1_i52 = 0; c1_i52 < 4; c1_i52++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 6U, (real_T)
                      (*chartInstance->c1_pts_erase_past_line)[c1_i52]);
  }

  for (c1_i55 = 0; c1_i55 < 4; c1_i55++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 7U, (real_T)
                      (*chartInstance->c1_pts_local_area)[c1_i55]);
  }

  for (c1_i58 = 0; c1_i58 < 6; c1_i58++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 8U, (real_T)
                      (*chartInstance->c1_pts_roi_circle)[c1_i58]);
  }
}

static void ext_mode_exec_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c1_update_jit_animation_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c1_do_animation_call_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  const mxArray *c1_b_y = NULL;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_d_y = NULL;
  const mxArray *c1_e_y = NULL;
  const mxArray *c1_f_y = NULL;
  const mxArray *c1_g_y = NULL;
  const mxArray *c1_h_y = NULL;
  const mxArray *c1_i_y = NULL;
  const mxArray *c1_j_y = NULL;
  const mxArray *c1_k_y = NULL;
  const mxArray *c1_l_y = NULL;
  const mxArray *c1_m_y = NULL;
  const mxArray *c1_st;
  const mxArray *c1_y = NULL;
  c1_st = NULL;
  c1_st = NULL;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_createcellmatrix(12, 1), false);
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", *chartInstance->c1_center_mat, 11,
    0U, 1U, 0U, 2, 31, 31), false);
  sf_mex_setcell(c1_y, 0, c1_b_y);
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y", *chartInstance->c1_heading_mat, 11,
    0U, 1U, 0U, 2, 26, 31), false);
  sf_mex_setcell(c1_y, 1, c1_c_y);
  c1_d_y = NULL;
  sf_mex_assign(&c1_d_y, sf_mex_create("y", chartInstance->c1_output_mode, 0, 0U,
    0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 2, c1_d_y);
  c1_e_y = NULL;
  sf_mex_assign(&c1_e_y, sf_mex_create("y",
    *chartInstance->c1_pts_erase_past_line, 2, 0U, 1U, 0U, 2, 1, 4), false);
  sf_mex_setcell(c1_y, 3, c1_e_y);
  c1_f_y = NULL;
  sf_mex_assign(&c1_f_y, sf_mex_create("y", *chartInstance->c1_pts_local_area, 2,
    0U, 1U, 0U, 2, 1, 4), false);
  sf_mex_setcell(c1_y, 4, c1_f_y);
  c1_g_y = NULL;
  sf_mex_assign(&c1_g_y, sf_mex_create("y", *chartInstance->c1_pts_roi_circle, 2,
    0U, 1U, 0U, 2, 2, 3), false);
  sf_mex_setcell(c1_y, 5, c1_g_y);
  c1_h_y = NULL;
  sf_mex_assign(&c1_h_y, sf_mex_create("y", *chartInstance->c1_b_yaw_mat, 0, 0U,
    1U, 0U, 2, 120, 160), false);
  sf_mex_setcell(c1_y, 6, c1_h_y);
  c1_i_y = NULL;
  sf_mex_assign(&c1_i_y, sf_mex_create("y", chartInstance->c1_yaw_out, 0, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c1_y, 7, c1_i_y);
  c1_j_y = NULL;
  if (!chartInstance->c1_add_yaw_not_empty) {
    sf_mex_assign(&c1_j_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c1_j_y, sf_mex_create("y", &chartInstance->c1_add_yaw, 0, 0U,
      0U, 0U, 0), false);
  }

  sf_mex_setcell(c1_y, 8, c1_j_y);
  c1_k_y = NULL;
  if (!chartInstance->c1_local_array_not_empty) {
    sf_mex_assign(&c1_k_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c1_k_y, sf_mex_create("y", chartInstance->c1_local_array, 0,
      0U, 1U, 0U, 1, 4), false);
  }

  sf_mex_setcell(c1_y, 9, c1_k_y);
  c1_l_y = NULL;
  if (!chartInstance->c1_add_yaw_not_empty) {
    sf_mex_assign(&c1_l_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c1_l_y, sf_mex_create("y", &chartInstance->c1_local_cond, 0,
      0U, 0U, 0U, 0), false);
  }

  sf_mex_setcell(c1_y, 10, c1_l_y);
  c1_m_y = NULL;
  sf_mex_assign(&c1_m_y, sf_mex_create("y",
    &chartInstance->c1_is_active_c1_flightControlSystem, 3, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c1_y, 11, c1_m_y);
  sf_mex_assign(&c1_st, c1_y, false);
  return c1_st;
}

static void set_sim_state_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance, const mxArray *c1_st)
{
  const mxArray *c1_b_u;
  real_T c1_dv1[4];
  int32_T c1_b_i1;
  int32_T c1_i;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int8_T c1_iv2[6];
  int8_T c1_iv[4];
  int8_T c1_iv1[4];
  boolean_T c1_bv[961];
  boolean_T c1_bv1[806];
  chartInstance->c1_doneDoubleBufferReInit = true;
  c1_b_u = sf_mex_dup(c1_st);
  c1_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_b_u, 0)),
                        "center_mat", c1_bv);
  for (c1_i = 0; c1_i < 961; c1_i++) {
    (*chartInstance->c1_center_mat)[c1_i] = c1_bv[c1_i];
  }

  c1_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_b_u, 1)),
                        "heading_mat", c1_bv1);
  for (c1_b_i1 = 0; c1_b_i1 < 806; c1_b_i1++) {
    (*chartInstance->c1_heading_mat)[c1_b_i1] = c1_bv1[c1_b_i1];
  }

  *chartInstance->c1_output_mode = c1_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_b_u, 2)), "output_mode");
  c1_g_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_b_u, 3)),
                        "pts_erase_past_line", c1_iv);
  for (c1_i2 = 0; c1_i2 < 4; c1_i2++) {
    (*chartInstance->c1_pts_erase_past_line)[c1_i2] = c1_iv[c1_i2];
  }

  c1_g_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_b_u, 4)),
                        "pts_local_area", c1_iv1);
  for (c1_i3 = 0; c1_i3 < 4; c1_i3++) {
    (*chartInstance->c1_pts_local_area)[c1_i3] = c1_iv1[c1_i3];
  }

  c1_i_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_b_u, 5)),
                        "pts_roi_circle", c1_iv2);
  for (c1_i4 = 0; c1_i4 < 6; c1_i4++) {
    (*chartInstance->c1_pts_roi_circle)[c1_i4] = c1_iv2[c1_i4];
  }

  c1_k_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_b_u, 6)),
                        "yaw_mat", chartInstance->c1_dv);
  for (c1_i5 = 0; c1_i5 < 19200; c1_i5++) {
    (*chartInstance->c1_b_yaw_mat)[c1_i5] = chartInstance->c1_dv[c1_i5];
  }

  *chartInstance->c1_yaw_out = c1_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_b_u, 7)), "yaw_out");
  chartInstance->c1_add_yaw = c1_m_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_b_u, 8)), "add_yaw", &chartInstance->c1_add_yaw_not_empty);
  c1_o_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_b_u, 9)),
                        "local_array", &chartInstance->c1_local_array_not_empty,
                        c1_dv1);
  for (c1_i6 = 0; c1_i6 < 4; c1_i6++) {
    chartInstance->c1_local_array[c1_i6] = c1_dv1[c1_i6];
  }

  chartInstance->c1_local_cond = c1_m_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_b_u, 10)), "local_cond",
    &chartInstance->c1_local_cond_not_empty);
  chartInstance->c1_is_active_c1_flightControlSystem = c1_q_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c1_b_u, 11)),
     "is_active_c1_flightControlSystem");
  sf_mex_destroy(&c1_b_u);
  sf_mex_destroy(&c1_st);
}

static void initSimStructsc1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

const mxArray *sf_c1_flightControlSystem_get_eml_resolved_functions_info(void)
{
  const mxArray *c1_nameCaptureInfo = NULL;
  c1_nameCaptureInfo = NULL;
  sf_mex_assign(&c1_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c1_nameCaptureInfo;
}

static void c1_edge(SFc1_flightControlSystemInstanceStruct *chartInstance, const
                    emlrtStack *c1_sp, boolean_T c1_varargin_1[19200], boolean_T
                    c1_varargout_1[19200])
{
  static real_T c1_b_kernel[13] = { 0.0020299751839417137, 0.0102182810143517,
    0.058116735860084034, 0.19634433732941292, 0.37823877042972087,
    0.35505190018248872, 0.0, -0.35505190018248872, -0.37823877042972087,
    -0.19634433732941292, -0.058116735860084034, -0.0102182810143517,
    -0.0020299751839417137 };

  static real_T c1_c_kernel[13] = { 3.4813359214923059E-5,
    0.00054457256285105158, 0.0051667606200595222, 0.029732654490475543,
    0.10377716120747747, 0.21969625200024598, 0.28209557151935094,
    0.21969625200024598, 0.10377716120747747, 0.029732654490475543,
    0.0051667606200595222, 0.00054457256285105158, 3.4813359214923059E-5 };

  static real_T c1_d_kernel[13] = { 0.0020299751839417137, 0.0102182810143517,
    0.058116735860084034, 0.19634433732941292, 0.37823877042972087,
    0.35505190018248872, 0.0, -0.35505190018248872, -0.37823877042972087,
    -0.19634433732941292, -0.058116735860084034, -0.0102182810143517,
    -0.0020299751839417137 };

  static real_T c1_kernel[13] = { 3.4813359214923059E-5, 0.00054457256285105158,
    0.0051667606200595222, 0.029732654490475543, 0.10377716120747747,
    0.21969625200024598, 0.28209557151935094, 0.21969625200024598,
    0.10377716120747747, 0.029732654490475543, 0.0051667606200595222,
    0.00054457256285105158, 3.4813359214923059E-5 };

  static real_T c1_nonZeroKernel[12] = { 0.0020299751839417137,
    0.0102182810143517, 0.058116735860084034, 0.19634433732941292,
    0.37823877042972087, 0.35505190018248872, -0.35505190018248872,
    -0.37823877042972087, -0.19634433732941292, -0.058116735860084034,
    -0.0102182810143517, -0.0020299751839417137 };

  static int32_T c1_b_idxA[344] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13,
    14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32,
    33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51,
    52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70,
    71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89,
    90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106,
    107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1,
    1, 1, 1, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18,
    19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37,
    38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56,
    57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75,
    76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94,
    95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110,
    111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125,
    126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140,
    141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155,
    156, 157, 158, 159, 160, 160, 160, 160, 160, 160, 160 };

  static int32_T c1_idxA[320] = { 1, 1, 1, 1, 1, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9,
    10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28,
    29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47,
    48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66,
    67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85,
    86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103,
    104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118,
    119, 120, 120, 120, 120, 120, 120, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
    10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28,
    29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47,
    48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66,
    67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85,
    86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103,
    104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118,
    119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133,
    134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148,
    149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160 };

  static boolean_T c1_b_conn[13] = { true, true, true, true, true, true, false,
    true, true, true, true, true, true };

  static boolean_T c1_c_conn[13] = { true, true, true, true, true, true, false,
    true, true, true, true, true, true };

  emlrtStack c1_b_st;
  emlrtStack c1_c_st;
  emlrtStack c1_d_st;
  emlrtStack c1_st;
  real_T c1_counts[64];
  real_T c1_connDimsT[2];
  real_T c1_outSizeT[2];
  real_T c1_padSizeT[2];
  real_T c1_startT[2];
  real_T c1_b_data[1];
  real_T c1_highThresh_data[1];
  real_T c1_lowThresh_data[1];
  real_T c1_b_idx;
  real_T c1_b_j;
  real_T c1_b_lowThresh;
  real_T c1_d_i;
  real_T c1_d_j;
  real_T c1_f_j;
  real_T c1_g_i;
  real_T c1_h_j;
  real_T c1_highThresh;
  real_T c1_highThreshTemp;
  real_T c1_j_i;
  real_T c1_lowThresh;
  real_T c1_m_i;
  real_T c1_o_i;
  real_T c1_out;
  real_T c1_sum;
  int32_T c1_highThresh_size[1];
  int32_T c1_lowThresh_size[1];
  int32_T c1_b_c;
  int32_T c1_b_i;
  int32_T c1_b_i1;
  int32_T c1_c;
  int32_T c1_c_i;
  int32_T c1_c_j;
  int32_T c1_e_i;
  int32_T c1_e_j;
  int32_T c1_f_i;
  int32_T c1_g_j;
  int32_T c1_h_i;
  int32_T c1_i;
  int32_T c1_i10;
  int32_T c1_i11;
  int32_T c1_i12;
  int32_T c1_i13;
  int32_T c1_i14;
  int32_T c1_i15;
  int32_T c1_i16;
  int32_T c1_i17;
  int32_T c1_i18;
  int32_T c1_i19;
  int32_T c1_i2;
  int32_T c1_i20;
  int32_T c1_i21;
  int32_T c1_i22;
  int32_T c1_i23;
  int32_T c1_i24;
  int32_T c1_i25;
  int32_T c1_i26;
  int32_T c1_i27;
  int32_T c1_i28;
  int32_T c1_i29;
  int32_T c1_i3;
  int32_T c1_i30;
  int32_T c1_i31;
  int32_T c1_i32;
  int32_T c1_i33;
  int32_T c1_i34;
  int32_T c1_i35;
  int32_T c1_i36;
  int32_T c1_i37;
  int32_T c1_i38;
  int32_T c1_i39;
  int32_T c1_i4;
  int32_T c1_i40;
  int32_T c1_i41;
  int32_T c1_i42;
  int32_T c1_i43;
  int32_T c1_i44;
  int32_T c1_i45;
  int32_T c1_i46;
  int32_T c1_i47;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_i8;
  int32_T c1_i9;
  int32_T c1_i_i;
  int32_T c1_idx;
  int32_T c1_j;
  int32_T c1_k_i;
  int32_T c1_l_i;
  int32_T c1_loop_ub;
  int32_T c1_n_i;
  real32_T c1_b_i2[19200];
  real32_T c1_b;
  real32_T c1_b_b;
  real32_T c1_b_r;
  real32_T c1_b_varargin_1;
  real32_T c1_b_x;
  real32_T c1_b_x1;
  real32_T c1_b_x2;
  real32_T c1_b_y;
  real32_T c1_c_b;
  real32_T c1_c_x;
  real32_T c1_c_y;
  real32_T c1_d_a;
  real32_T c1_d_b;
  real32_T c1_d_idx;
  real32_T c1_d_x;
  real32_T c1_d_y;
  real32_T c1_e_a;
  real32_T c1_e_x;
  real32_T c1_e_y;
  real32_T c1_f_a;
  real32_T c1_f_x;
  real32_T c1_f_y;
  real32_T c1_g_a;
  real32_T c1_g_b;
  real32_T c1_g_x;
  real32_T c1_g_y;
  real32_T c1_h_a;
  real32_T c1_h_x;
  real32_T c1_h_y;
  real32_T c1_i_a;
  real32_T c1_i_x;
  real32_T c1_i_y;
  real32_T c1_j_a;
  real32_T c1_j_x;
  real32_T c1_j_y;
  real32_T c1_k_x;
  real32_T c1_k_y;
  real32_T c1_magmax;
  real32_T c1_r;
  real32_T c1_varargin_2;
  real32_T c1_x;
  real32_T c1_x1;
  real32_T c1_x2;
  real32_T c1_y;
  int8_T c1_c_idx;
  boolean_T c1_E[19200];
  boolean_T c1_conn[13];
  boolean_T c1_b_modeFlag;
  boolean_T c1_b_tooBig;
  boolean_T c1_c_modeFlag;
  boolean_T c1_c_tooBig;
  boolean_T c1_d_modeFlag;
  boolean_T c1_d_tooBig;
  boolean_T c1_e_b;
  boolean_T c1_e_modeFlag;
  boolean_T c1_f_b;
  boolean_T c1_f_modeFlag;
  boolean_T c1_g_modeFlag;
  boolean_T c1_h_modeFlag;
  boolean_T c1_i_modeFlag;
  boolean_T c1_j_modeFlag;
  boolean_T c1_k_modeFlag;
  boolean_T c1_l_modeFlag;
  boolean_T c1_modeFlag;
  boolean_T c1_nanFlag;
  boolean_T c1_tooBig;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  c1_c_st.prev = &c1_b_st;
  c1_c_st.tls = c1_b_st.tls;
  c1_d_st.prev = &c1_c_st;
  c1_d_st.tls = c1_c_st.tls;
  for (c1_i = 0; c1_i < 19200; c1_i++) {
    chartInstance->c1_c_a[c1_i] = (real32_T)c1_varargin_1[c1_i];
  }

  c1_st.site = &c1_f_emlrtRSI;
  c1_b_st.site = &c1_i_emlrtRSI;
  c1_c_st.site = &c1_o_emlrtRSI;
  c1_d_st.site = &c1_q_emlrtRSI;
  for (c1_j = 0; c1_j < 160; c1_j++) {
    c1_b_j = (real_T)c1_j + 1.0;
    for (c1_b_i = 0; c1_b_i < 132; c1_b_i++) {
      c1_d_i = (real_T)c1_b_i + 1.0;
      if ((c1_idxA[(int32_T)c1_d_i - 1] < 1) || (c1_idxA[(int32_T)c1_d_i - 1] >
           120)) {
        emlrtDynamicBoundsCheckR2012b(c1_idxA[(int32_T)c1_d_i - 1], 1, 120,
          &c1_cc_emlrtBCI, &c1_d_st);
      }

      c1_b_i1 = c1_idxA[(int32_T)c1_b_j + 159];
      if ((c1_b_i1 < 1) || (c1_b_i1 > 160)) {
        emlrtDynamicBoundsCheckR2012b(c1_b_i1, 1, 160, &c1_dc_emlrtBCI, &c1_d_st);
      }

      chartInstance->c1_a[((int32_T)c1_d_i + 132 * ((int32_T)c1_b_j - 1)) - 1] =
        chartInstance->c1_c_a[(c1_idxA[(int32_T)c1_d_i - 1] + 120 * (c1_b_i1 - 1))
        - 1];
    }
  }

  c1_c_st.site = &c1_p_emlrtRSI;
  c1_d_st.site = &c1_s_emlrtRSI;
  c1_tooBig = true;
  for (c1_c_i = 0; c1_c_i < 2; c1_c_i++) {
    c1_tooBig = false;
  }

  if (!c1_tooBig) {
    c1_modeFlag = true;
  } else {
    c1_modeFlag = false;
  }

  if (c1_modeFlag) {
    c1_b_modeFlag = true;
  } else {
    c1_b_modeFlag = false;
  }

  c1_c_modeFlag = c1_b_modeFlag;
  if (c1_c_modeFlag) {
    for (c1_i3 = 0; c1_i3 < 2; c1_i3++) {
      c1_padSizeT[c1_i3] = 132.0 + 28.0 * (real_T)c1_i3;
    }

    for (c1_i5 = 0; c1_i5 < 2; c1_i5++) {
      c1_outSizeT[c1_i5] = 120.0 + 40.0 * (real_T)c1_i5;
    }

    for (c1_i7 = 0; c1_i7 < 2; c1_i7++) {
      c1_connDimsT[c1_i7] = 13.0 + -12.0 * (real_T)c1_i7;
    }

    ippfilter_real32(&chartInstance->c1_a[0], &chartInstance->c1_i1[0],
                     &c1_outSizeT[0], 2.0, &c1_padSizeT[0], &c1_kernel[0],
                     &c1_connDimsT[0], true);
  } else {
    for (c1_i2 = 0; c1_i2 < 13; c1_i2++) {
      c1_conn[c1_i2] = true;
    }

    for (c1_i4 = 0; c1_i4 < 2; c1_i4++) {
      c1_padSizeT[c1_i4] = 132.0 + 28.0 * (real_T)c1_i4;
    }

    for (c1_i6 = 0; c1_i6 < 2; c1_i6++) {
      c1_outSizeT[c1_i6] = 120.0 + 40.0 * (real_T)c1_i6;
    }

    for (c1_i8 = 0; c1_i8 < 2; c1_i8++) {
      c1_connDimsT[c1_i8] = 13.0 + -12.0 * (real_T)c1_i8;
    }

    for (c1_i9 = 0; c1_i9 < 2; c1_i9++) {
      c1_startT[c1_i9] = 6.0 + -6.0 * (real_T)c1_i9;
    }

    imfilter_real32(&chartInstance->c1_a[0], &chartInstance->c1_i1[0], 2.0,
                    &c1_outSizeT[0], 2.0, &c1_padSizeT[0], &c1_kernel[0], 13.0,
                    &c1_conn[0], 2.0, &c1_connDimsT[0], &c1_startT[0], 2.0, true,
                    true);
  }

  c1_b_st.site = &c1_j_emlrtRSI;
  c1_c_st.site = &c1_o_emlrtRSI;
  c1_d_st.site = &c1_q_emlrtRSI;
  for (c1_c_j = 0; c1_c_j < 172; c1_c_j++) {
    c1_d_j = (real_T)c1_c_j + 1.0;
    for (c1_e_i = 0; c1_e_i < 120; c1_e_i++) {
      c1_g_i = (real_T)c1_e_i + 1.0;
      if ((c1_b_idxA[(int32_T)c1_g_i - 1] < 1) || (c1_b_idxA[(int32_T)c1_g_i - 1]
           > 120)) {
        emlrtDynamicBoundsCheckR2012b(c1_b_idxA[(int32_T)c1_g_i - 1], 1, 120,
          &c1_cc_emlrtBCI, &c1_d_st);
      }

      c1_i10 = c1_b_idxA[(int32_T)c1_d_j + 171];
      if ((c1_i10 < 1) || (c1_i10 > 160)) {
        emlrtDynamicBoundsCheckR2012b(c1_i10, 1, 160, &c1_dc_emlrtBCI, &c1_d_st);
      }

      chartInstance->c1_b_a[((int32_T)c1_g_i + 120 * ((int32_T)c1_d_j - 1)) - 1]
        = chartInstance->c1_i1[(c1_b_idxA[(int32_T)c1_g_i - 1] + 120 * (c1_i10 -
        1)) - 1];
    }
  }

  c1_c_st.site = &c1_p_emlrtRSI;
  c1_d_st.site = &c1_s_emlrtRSI;
  c1_b_tooBig = true;
  for (c1_f_i = 0; c1_f_i < 2; c1_f_i++) {
    c1_b_tooBig = false;
  }

  if (!c1_b_tooBig) {
    c1_d_modeFlag = true;
  } else {
    c1_d_modeFlag = false;
  }

  if (c1_d_modeFlag) {
    c1_e_modeFlag = true;
  } else {
    c1_e_modeFlag = false;
  }

  c1_f_modeFlag = c1_e_modeFlag;
  if (c1_f_modeFlag) {
    for (c1_i12 = 0; c1_i12 < 2; c1_i12++) {
      c1_padSizeT[c1_i12] = 120.0 + 52.0 * (real_T)c1_i12;
    }

    for (c1_i14 = 0; c1_i14 < 2; c1_i14++) {
      c1_outSizeT[c1_i14] = 120.0 + 40.0 * (real_T)c1_i14;
    }

    for (c1_i16 = 0; c1_i16 < 2; c1_i16++) {
      c1_connDimsT[c1_i16] = 1.0 + 12.0 * (real_T)c1_i16;
    }

    ippfilter_real32(&chartInstance->c1_b_a[0], &chartInstance->c1_i1[0],
                     &c1_outSizeT[0], 2.0, &c1_padSizeT[0], &c1_b_kernel[0],
                     &c1_connDimsT[0], true);
  } else {
    for (c1_i11 = 0; c1_i11 < 2; c1_i11++) {
      c1_padSizeT[c1_i11] = 120.0 + 52.0 * (real_T)c1_i11;
    }

    for (c1_i13 = 0; c1_i13 < 2; c1_i13++) {
      c1_outSizeT[c1_i13] = 120.0 + 40.0 * (real_T)c1_i13;
    }

    for (c1_i15 = 0; c1_i15 < 2; c1_i15++) {
      c1_connDimsT[c1_i15] = 1.0 + 12.0 * (real_T)c1_i15;
    }

    for (c1_i17 = 0; c1_i17 < 2; c1_i17++) {
      c1_startT[c1_i17] = 6.0 * (real_T)c1_i17;
    }

    imfilter_real32(&chartInstance->c1_b_a[0], &chartInstance->c1_i1[0], 2.0,
                    &c1_outSizeT[0], 2.0, &c1_padSizeT[0], &c1_nonZeroKernel[0],
                    12.0, &c1_b_conn[0], 2.0, &c1_connDimsT[0], &c1_startT[0],
                    2.0, true, true);
  }

  c1_b_st.site = &c1_k_emlrtRSI;
  c1_c_st.site = &c1_o_emlrtRSI;
  c1_d_st.site = &c1_q_emlrtRSI;
  for (c1_e_j = 0; c1_e_j < 172; c1_e_j++) {
    c1_f_j = (real_T)c1_e_j + 1.0;
    for (c1_h_i = 0; c1_h_i < 120; c1_h_i++) {
      c1_j_i = (real_T)c1_h_i + 1.0;
      if ((c1_b_idxA[(int32_T)c1_j_i - 1] < 1) || (c1_b_idxA[(int32_T)c1_j_i - 1]
           > 120)) {
        emlrtDynamicBoundsCheckR2012b(c1_b_idxA[(int32_T)c1_j_i - 1], 1, 120,
          &c1_cc_emlrtBCI, &c1_d_st);
      }

      c1_i18 = c1_b_idxA[(int32_T)c1_f_j + 171];
      if ((c1_i18 < 1) || (c1_i18 > 160)) {
        emlrtDynamicBoundsCheckR2012b(c1_i18, 1, 160, &c1_dc_emlrtBCI, &c1_d_st);
      }

      chartInstance->c1_b_a[((int32_T)c1_j_i + 120 * ((int32_T)c1_f_j - 1)) - 1]
        = chartInstance->c1_c_a[(c1_b_idxA[(int32_T)c1_j_i - 1] + 120 * (c1_i18
        - 1)) - 1];
    }
  }

  c1_c_st.site = &c1_p_emlrtRSI;
  c1_d_st.site = &c1_s_emlrtRSI;
  c1_c_tooBig = true;
  for (c1_i_i = 0; c1_i_i < 2; c1_i_i++) {
    c1_c_tooBig = false;
  }

  if (!c1_c_tooBig) {
    c1_g_modeFlag = true;
  } else {
    c1_g_modeFlag = false;
  }

  if (c1_g_modeFlag) {
    c1_h_modeFlag = true;
  } else {
    c1_h_modeFlag = false;
  }

  c1_i_modeFlag = c1_h_modeFlag;
  if (c1_i_modeFlag) {
    for (c1_i20 = 0; c1_i20 < 2; c1_i20++) {
      c1_padSizeT[c1_i20] = 120.0 + 52.0 * (real_T)c1_i20;
    }

    for (c1_i22 = 0; c1_i22 < 2; c1_i22++) {
      c1_outSizeT[c1_i22] = 120.0 + 40.0 * (real_T)c1_i22;
    }

    for (c1_i24 = 0; c1_i24 < 2; c1_i24++) {
      c1_connDimsT[c1_i24] = 1.0 + 12.0 * (real_T)c1_i24;
    }

    ippfilter_real32(&chartInstance->c1_b_a[0], &c1_b_i2[0], &c1_outSizeT[0],
                     2.0, &c1_padSizeT[0], &c1_c_kernel[0], &c1_connDimsT[0],
                     true);
  } else {
    for (c1_i19 = 0; c1_i19 < 13; c1_i19++) {
      c1_conn[c1_i19] = true;
    }

    for (c1_i21 = 0; c1_i21 < 2; c1_i21++) {
      c1_padSizeT[c1_i21] = 120.0 + 52.0 * (real_T)c1_i21;
    }

    for (c1_i23 = 0; c1_i23 < 2; c1_i23++) {
      c1_outSizeT[c1_i23] = 120.0 + 40.0 * (real_T)c1_i23;
    }

    for (c1_i25 = 0; c1_i25 < 2; c1_i25++) {
      c1_connDimsT[c1_i25] = 1.0 + 12.0 * (real_T)c1_i25;
    }

    for (c1_i26 = 0; c1_i26 < 2; c1_i26++) {
      c1_startT[c1_i26] = 6.0 * (real_T)c1_i26;
    }

    imfilter_real32(&chartInstance->c1_b_a[0], &c1_b_i2[0], 2.0, &c1_outSizeT[0],
                    2.0, &c1_padSizeT[0], &c1_kernel[0], 13.0, &c1_conn[0], 2.0,
                    &c1_connDimsT[0], &c1_startT[0], 2.0, true, true);
  }

  c1_b_st.site = &c1_l_emlrtRSI;
  c1_c_st.site = &c1_o_emlrtRSI;
  c1_d_st.site = &c1_q_emlrtRSI;
  for (c1_g_j = 0; c1_g_j < 160; c1_g_j++) {
    c1_h_j = (real_T)c1_g_j + 1.0;
    for (c1_k_i = 0; c1_k_i < 132; c1_k_i++) {
      c1_m_i = (real_T)c1_k_i + 1.0;
      if ((c1_idxA[(int32_T)c1_m_i - 1] < 1) || (c1_idxA[(int32_T)c1_m_i - 1] >
           120)) {
        emlrtDynamicBoundsCheckR2012b(c1_idxA[(int32_T)c1_m_i - 1], 1, 120,
          &c1_cc_emlrtBCI, &c1_d_st);
      }

      c1_i27 = c1_idxA[(int32_T)c1_h_j + 159];
      if ((c1_i27 < 1) || (c1_i27 > 160)) {
        emlrtDynamicBoundsCheckR2012b(c1_i27, 1, 160, &c1_dc_emlrtBCI, &c1_d_st);
      }

      chartInstance->c1_a[((int32_T)c1_m_i + 132 * ((int32_T)c1_h_j - 1)) - 1] =
        c1_b_i2[(c1_idxA[(int32_T)c1_m_i - 1] + 120 * (c1_i27 - 1)) - 1];
    }
  }

  c1_c_st.site = &c1_p_emlrtRSI;
  c1_d_st.site = &c1_s_emlrtRSI;
  c1_d_tooBig = true;
  for (c1_l_i = 0; c1_l_i < 2; c1_l_i++) {
    c1_d_tooBig = false;
  }

  if (!c1_d_tooBig) {
    c1_j_modeFlag = true;
  } else {
    c1_j_modeFlag = false;
  }

  if (c1_j_modeFlag) {
    c1_k_modeFlag = true;
  } else {
    c1_k_modeFlag = false;
  }

  c1_l_modeFlag = c1_k_modeFlag;
  if (c1_l_modeFlag) {
    for (c1_i29 = 0; c1_i29 < 2; c1_i29++) {
      c1_padSizeT[c1_i29] = 132.0 + 28.0 * (real_T)c1_i29;
    }

    for (c1_i31 = 0; c1_i31 < 2; c1_i31++) {
      c1_outSizeT[c1_i31] = 120.0 + 40.0 * (real_T)c1_i31;
    }

    for (c1_i33 = 0; c1_i33 < 2; c1_i33++) {
      c1_connDimsT[c1_i33] = 13.0 + -12.0 * (real_T)c1_i33;
    }

    ippfilter_real32(&chartInstance->c1_a[0], &c1_b_i2[0], &c1_outSizeT[0], 2.0,
                     &c1_padSizeT[0], &c1_d_kernel[0], &c1_connDimsT[0], true);
  } else {
    for (c1_i28 = 0; c1_i28 < 2; c1_i28++) {
      c1_padSizeT[c1_i28] = 132.0 + 28.0 * (real_T)c1_i28;
    }

    for (c1_i30 = 0; c1_i30 < 2; c1_i30++) {
      c1_outSizeT[c1_i30] = 120.0 + 40.0 * (real_T)c1_i30;
    }

    for (c1_i32 = 0; c1_i32 < 2; c1_i32++) {
      c1_connDimsT[c1_i32] = 13.0 + -12.0 * (real_T)c1_i32;
    }

    for (c1_i34 = 0; c1_i34 < 2; c1_i34++) {
      c1_startT[c1_i34] = 6.0 + -6.0 * (real_T)c1_i34;
    }

    imfilter_real32(&chartInstance->c1_a[0], &c1_b_i2[0], 2.0, &c1_outSizeT[0],
                    2.0, &c1_padSizeT[0], &c1_nonZeroKernel[0], 12.0,
                    &c1_c_conn[0], 2.0, &c1_connDimsT[0], &c1_startT[0], 2.0,
                    true, true);
  }

  c1_x = chartInstance->c1_i1[0];
  c1_y = c1_b_i2[0];
  c1_d_a = c1_x;
  c1_b = c1_y;
  c1_b_x = c1_d_a;
  c1_b_y = c1_b;
  c1_x1 = c1_b_x;
  c1_x2 = c1_b_y;
  c1_e_a = c1_x1;
  c1_b_b = c1_x2;
  c1_r = muSingleScalarHypot(c1_e_a, c1_b_b);
  chartInstance->c1_c_a[0] = c1_r;
  c1_magmax = chartInstance->c1_c_a[0];
  for (c1_idx = 0; c1_idx < 19199; c1_idx++) {
    c1_b_idx = (real_T)c1_idx + 2.0;
    c1_c_x = chartInstance->c1_i1[(int32_T)c1_b_idx - 1];
    c1_e_y = c1_b_i2[(int32_T)c1_b_idx - 1];
    c1_f_a = c1_c_x;
    c1_c_b = c1_e_y;
    c1_d_x = c1_f_a;
    c1_f_y = c1_c_b;
    c1_b_x1 = c1_d_x;
    c1_b_x2 = c1_f_y;
    c1_g_a = c1_b_x1;
    c1_d_b = c1_b_x2;
    c1_b_r = muSingleScalarHypot(c1_g_a, c1_d_b);
    chartInstance->c1_c_a[(int32_T)c1_b_idx - 1] = c1_b_r;
    c1_b_varargin_1 = chartInstance->c1_c_a[(int32_T)c1_b_idx - 1];
    c1_varargin_2 = c1_magmax;
    c1_f_x = c1_b_varargin_1;
    c1_g_y = c1_varargin_2;
    c1_g_x = c1_f_x;
    c1_h_y = c1_g_y;
    c1_h_x = c1_g_x;
    c1_i_y = c1_h_y;
    c1_h_a = c1_h_x;
    c1_g_b = c1_i_y;
    c1_j_x = c1_h_a;
    c1_j_y = c1_g_b;
    c1_k_x = c1_j_x;
    c1_k_y = c1_j_y;
    c1_magmax = muSingleScalarMax(c1_k_x, c1_k_y);
  }

  if (c1_magmax > 0.0F) {
    c1_c_y = c1_magmax;
    c1_d_y = c1_c_y;
    for (c1_i35 = 0; c1_i35 < 19200; c1_i35++) {
      chartInstance->c1_c_a[c1_i35] /= c1_d_y;
    }
  }

  c1_st.site = &c1_g_emlrtRSI;
  c1_b_st.site = &c1_w_emlrtRSI;
  c1_c_st.site = &c1_x_emlrtRSI;
  c1_d_st.site = &c1_y_emlrtRSI;
  c1_out = 1.0;
  getnumcores(&c1_out);
  for (c1_i36 = 0; c1_i36 < 64; c1_i36++) {
    c1_counts[c1_i36] = 0.0;
  }

  c1_nanFlag = false;
  for (c1_n_i = 0; c1_n_i < 19200; c1_n_i++) {
    c1_o_i = (real_T)c1_n_i + 1.0;
    c1_e_x = chartInstance->c1_c_a[(int32_T)c1_o_i - 1];
    c1_e_b = muSingleScalarIsNaN(c1_e_x);
    if (c1_e_b) {
      c1_nanFlag = true;
      c1_d_idx = 0.0F;
    } else {
      c1_d_idx = chartInstance->c1_c_a[(int32_T)c1_o_i - 1] * 63.0F + 0.5F;
    }

    if (c1_d_idx > 63.0F) {
      c1_counts[63]++;
    } else {
      c1_i_x = chartInstance->c1_c_a[(int32_T)c1_o_i - 1];
      c1_f_b = muSingleScalarIsInf(c1_i_x);
      if (c1_f_b) {
        c1_counts[63]++;
      } else {
        c1_i_a = c1_d_idx;
        c1_c = (int32_T)c1_i_a;
        c1_j_a = c1_d_idx;
        c1_b_c = (int32_T)c1_j_a;
        c1_counts[c1_c] = c1_counts[c1_b_c] + 1.0;
      }
    }
  }

  if (c1_nanFlag) {
    c1_d_st.site = &c1_ab_emlrtRSI;
    c1_warning(chartInstance, &c1_d_st);
  }

  c1_sum = 0.0;
  c1_c_idx = 1;
  while ((!(c1_sum > 13440.0)) && ((real_T)c1_c_idx <= 64.0)) {
    c1_sum += c1_counts[c1_c_idx - 1];
    c1_i38 = c1_c_idx + 1;
    if (c1_i38 > 127) {
      c1_i38 = 127;
    } else if (c1_i38 < -128) {
      c1_i38 = -128;
    }

    c1_c_idx = (int8_T)c1_i38;
  }

  c1_i37 = c1_c_idx - 1;
  if (c1_i37 > 127) {
    c1_i37 = 127;
  } else if (c1_i37 < -128) {
    c1_i37 = -128;
  }

  c1_highThreshTemp = (real_T)(int8_T)c1_i37 / 64.0;
  if (((real_T)c1_c_idx > 64.0) && (!(c1_sum > 13440.0))) {
    c1_highThresh_size[0] = 0;
    c1_lowThresh_size[0] = 0;
  } else {
    c1_highThresh_size[0] = 1;
    c1_highThresh_data[0] = c1_highThreshTemp;
    c1_loop_ub = c1_highThresh_size[0] - 1;
    for (c1_i39 = 0; c1_i39 <= c1_loop_ub; c1_i39++) {
      c1_b_data[c1_i39] = c1_highThresh_data[c1_i39];
    }

    c1_b_data[0] *= 0.4;
    c1_lowThresh_size[0] = 1;
    c1_lowThresh_data[0] = c1_b_data[0];
  }

  c1_st.site = &c1_h_emlrtRSI;
  c1_i40 = 1;
  if ((c1_i40 < 1) || (c1_i40 > c1_lowThresh_size[0])) {
    emlrtDynamicBoundsCheckR2012b(c1_i40, 1, c1_lowThresh_size[0],
      &c1_ac_emlrtBCI, &c1_st);
  }

  c1_b_st.site = &c1_cb_emlrtRSI;
  c1_lowThresh = c1_lowThresh_data[0];
  c1_c_st.site = &c1_eb_emlrtRSI;
  c1_b_lowThresh = c1_lowThresh;
  for (c1_i41 = 0; c1_i41 < 19200; c1_i41++) {
    c1_E[c1_i41] = false;
  }

  for (c1_i42 = 0; c1_i42 < 2; c1_i42++) {
    c1_connDimsT[c1_i42] = 120.0 + 40.0 * (real_T)c1_i42;
  }

  cannythresholding_real32_tbb(&chartInstance->c1_i1[0], &c1_b_i2[0],
    &chartInstance->c1_c_a[0], &c1_connDimsT[0], c1_b_lowThresh, &c1_E[0]);
  c1_i43 = 1;
  if ((c1_i43 < 1) || (c1_i43 > c1_highThresh_size[0])) {
    emlrtDynamicBoundsCheckR2012b(c1_i43, 1, c1_highThresh_size[0],
      &c1_bc_emlrtBCI, &c1_st);
  }

  c1_highThresh = c1_highThresh_data[0];
  for (c1_i44 = 0; c1_i44 < 19200; c1_i44++) {
    c1_varargout_1[c1_i44] = ((real_T)chartInstance->c1_c_a[c1_i44] >
      c1_highThresh);
  }

  c1_b_st.site = &c1_db_emlrtRSI;
  c1_c_st.site = &c1_fb_emlrtRSI;
  for (c1_i45 = 0; c1_i45 < 2; c1_i45++) {
    c1_connDimsT[c1_i45] = 120.0 + 40.0 * (real_T)c1_i45;
  }

  ippreconstruct_uint8((uint8_T *)&c1_varargout_1[0], (uint8_T *)&c1_E[0],
                       &c1_connDimsT[0], 2.0);
  c1_i46 = 1;
  if ((c1_i46 < 1) || (c1_i46 > c1_lowThresh_size[0])) {
    emlrtDynamicBoundsCheckR2012b(c1_i46, 1, c1_lowThresh_size[0],
      &c1_xb_emlrtBCI, (emlrtConstCTX)c1_sp);
  }

  c1_i47 = 1;
  if ((c1_i47 < 1) || (c1_i47 > c1_highThresh_size[0])) {
    emlrtDynamicBoundsCheckR2012b(c1_i47, 1, c1_highThresh_size[0],
      &c1_yb_emlrtBCI, (emlrtConstCTX)c1_sp);
  }
}

static real_T c1_sqrt(SFc1_flightControlSystemInstanceStruct *chartInstance,
                      const emlrtStack *c1_sp, real_T c1_x)
{
  real_T c1_b_x;
  c1_b_x = c1_x;
  c1_b_sqrt(chartInstance, c1_sp, &c1_b_x);
  return c1_b_x;
}

static void c1_warning(SFc1_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c1_sp)
{
  static char_T c1_msgID[27] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'i', 'm',
    'h', 'i', 's', 't', 'c', ':', 'i', 'n', 'p', 'u', 't', 'H', 'a', 's', 'N',
    'a', 'N', 's' };

  static char_T c1_b_cv[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T c1_b_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack c1_st;
  const mxArray *c1_b_y = NULL;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_y = NULL;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_b_cv, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", c1_b_cv1, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y", c1_msgID, 10, 0U, 1U, 0U, 2, 1, 27),
                false);
  c1_st.site = &c1_bb_emlrtRSI;
  c1_b_feval(chartInstance, &c1_st, c1_y, c1_feval(chartInstance, &c1_st, c1_b_y,
              c1_c_y));
}

static int32_T c1_intnnz(SFc1_flightControlSystemInstanceStruct *chartInstance,
  boolean_T c1_s[806])
{
  real_T c1_b_k;
  int32_T c1_d_a;
  int32_T c1_k;
  int32_T c1_n;
  (void)chartInstance;
  c1_n = 0;
  for (c1_k = 0; c1_k < 806; c1_k++) {
    c1_b_k = (real_T)c1_k + 1.0;
    if (c1_s[(int32_T)c1_b_k - 1]) {
      c1_d_a = c1_n + 1;
      c1_n = c1_d_a;
    }
  }

  return c1_n;
}

static int32_T c1_b_intnnz(SFc1_flightControlSystemInstanceStruct *chartInstance,
  boolean_T c1_s[961])
{
  real_T c1_b_k;
  int32_T c1_d_a;
  int32_T c1_k;
  int32_T c1_n;
  (void)chartInstance;
  c1_n = 0;
  for (c1_k = 0; c1_k < 961; c1_k++) {
    c1_b_k = (real_T)c1_k + 1.0;
    if (c1_s[(int32_T)c1_b_k - 1]) {
      c1_d_a = c1_n + 1;
      c1_n = c1_d_a;
    }
  }

  return c1_n;
}

static real_T c1_minimum(SFc1_flightControlSystemInstanceStruct *chartInstance,
  real_T c1_x[26])
{
  real_T c1_b_ex;
  int32_T c1_k;
  (void)chartInstance;
  c1_b_ex = c1_x[0];
  for (c1_k = 0; c1_k < 25; c1_k++) {
    if (c1_b_ex > c1_x[c1_k + 1]) {
      c1_b_ex = c1_x[c1_k + 1];
    }
  }

  return c1_b_ex;
}

static real_T c1_maximum(SFc1_flightControlSystemInstanceStruct *chartInstance,
  real_T c1_x[26])
{
  real_T c1_b_ex;
  int32_T c1_k;
  (void)chartInstance;
  c1_b_ex = c1_x[0];
  for (c1_k = 0; c1_k < 25; c1_k++) {
    if (c1_b_ex < c1_x[c1_k + 1]) {
      c1_b_ex = c1_x[c1_k + 1];
    }
  }

  return c1_b_ex;
}

static void c1_local_find(SFc1_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c1_sp, uint8_T c1_local_array_data_data[], int32_T
  c1_local_array_data_size[2], real_T c1_b_local_array[4])
{
  emlrtStack c1_b_st;
  emlrtStack c1_c_st;
  emlrtStack c1_st;
  int32_T c1_varargin_1_size[2];
  int32_T c1_b_i1;
  int32_T c1_b_loop_ub;
  int32_T c1_c_loop_ub;
  int32_T c1_d_loop_ub;
  int32_T c1_i;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_loop_ub;
  uint32_T c1_b_q0;
  uint32_T c1_b_qY;
  uint32_T c1_b_u;
  uint32_T c1_q0;
  uint32_T c1_qY;
  uint32_T c1_u1;
  uint32_T c1_u2;
  uint32_T c1_u3;
  uint8_T c1_varargin_1_data[999];
  uint8_T c1_b_maxval;
  uint8_T c1_b_minval;
  uint8_T c1_maxval;
  uint8_T c1_minval;
  boolean_T c1_b_covSaturation;
  boolean_T c1_c_covSaturation;
  boolean_T c1_covSaturation;
  boolean_T c1_d_covSaturation;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  c1_c_st.prev = &c1_b_st;
  c1_c_st.tls = c1_b_st.tls;
  covrtEmlFcnEval(chartInstance->c1_covrtInstance, 4U, 0, 1);
  c1_st.site = &c1_gb_emlrtRSI;
  c1_varargin_1_size[0] = 1;
  c1_varargin_1_size[1] = c1_local_array_data_size[1];
  c1_loop_ub = c1_local_array_data_size[1] - 1;
  c1_i = 0;
  for (c1_b_i1 = 0; c1_b_i1 <= c1_loop_ub; c1_b_i1++) {
    c1_varargin_1_data[c1_b_i1] = c1_local_array_data_data[c1_i];
    c1_i += 2;
  }

  c1_b_st.site = &c1_kb_emlrtRSI;
  c1_c_st.site = &c1_lb_emlrtRSI;
  c1_minval = c1_b_minimum(chartInstance, &c1_c_st, c1_varargin_1_data,
    c1_varargin_1_size);
  c1_q0 = c1_minval;
  c1_qY = c1_q0 - 2U;
  c1_covSaturation = false;
  if (c1_qY > c1_q0) {
    c1_covSaturation = true;
    c1_qY = 0U;
    sf_data_saturate_error(chartInstance->S, 1U, 10220, 38);
  }

  c1_b_u = c1_qY;
  if (c1_b_u > 255U) {
    c1_covSaturation = true;
    c1_b_u = 255U;
    sf_data_saturate_error(chartInstance->S, 1U, 10220, 38);
  }

  covrtSaturationUpdateFcn(chartInstance->c1_covrtInstance, 4, 0, 0, 0,
    c1_covSaturation);
  c1_b_local_array[0] = (real_T)(uint8_T)c1_b_u;
  c1_st.site = &c1_hb_emlrtRSI;
  c1_varargin_1_size[0] = 1;
  c1_varargin_1_size[1] = c1_local_array_data_size[1];
  c1_b_loop_ub = c1_local_array_data_size[1] - 1;
  c1_i2 = 0;
  for (c1_i3 = 0; c1_i3 <= c1_b_loop_ub; c1_i3++) {
    c1_varargin_1_data[c1_i3] = c1_local_array_data_data[c1_i2];
    c1_i2 += 2;
  }

  c1_b_st.site = &c1_nb_emlrtRSI;
  c1_c_st.site = &c1_ob_emlrtRSI;
  c1_maxval = c1_b_maximum(chartInstance, &c1_c_st, c1_varargin_1_data,
    c1_varargin_1_size);
  c1_u1 = (uint32_T)c1_maxval + 2U;
  c1_b_covSaturation = false;
  if (c1_u1 > 255U) {
    c1_b_covSaturation = true;
    c1_u1 = 255U;
    sf_data_saturate_error(chartInstance->S, 1U, 10316, 38);
  }

  covrtSaturationUpdateFcn(chartInstance->c1_covrtInstance, 4, 0, 1, 0,
    c1_b_covSaturation);
  c1_b_local_array[1] = (real_T)(uint8_T)c1_u1;
  c1_st.site = &c1_ib_emlrtRSI;
  c1_varargin_1_size[0] = 1;
  c1_varargin_1_size[1] = c1_local_array_data_size[1];
  c1_c_loop_ub = c1_local_array_data_size[1] - 1;
  c1_i4 = 0;
  for (c1_i5 = 0; c1_i5 <= c1_c_loop_ub; c1_i5++) {
    c1_varargin_1_data[c1_i5] = c1_local_array_data_data[c1_i4 + 1];
    c1_i4 += 2;
  }

  c1_b_st.site = &c1_kb_emlrtRSI;
  c1_c_st.site = &c1_lb_emlrtRSI;
  c1_b_minval = c1_b_minimum(chartInstance, &c1_c_st, c1_varargin_1_data,
    c1_varargin_1_size);
  c1_b_q0 = c1_b_minval;
  c1_b_qY = c1_b_q0 - 2U;
  c1_c_covSaturation = false;
  if (c1_b_qY > c1_b_q0) {
    c1_c_covSaturation = true;
    c1_b_qY = 0U;
    sf_data_saturate_error(chartInstance->S, 1U, 10387, 38);
  }

  c1_u2 = c1_b_qY;
  if (c1_u2 > 255U) {
    c1_c_covSaturation = true;
    c1_u2 = 255U;
    sf_data_saturate_error(chartInstance->S, 1U, 10387, 38);
  }

  covrtSaturationUpdateFcn(chartInstance->c1_covrtInstance, 4, 0, 2, 0,
    c1_c_covSaturation);
  c1_b_local_array[2] = (real_T)(uint8_T)c1_u2;
  c1_st.site = &c1_jb_emlrtRSI;
  c1_varargin_1_size[0] = 1;
  c1_varargin_1_size[1] = c1_local_array_data_size[1];
  c1_d_loop_ub = c1_local_array_data_size[1] - 1;
  c1_i6 = 0;
  for (c1_i7 = 0; c1_i7 <= c1_d_loop_ub; c1_i7++) {
    c1_varargin_1_data[c1_i7] = c1_local_array_data_data[c1_i6 + 1];
    c1_i6 += 2;
  }

  c1_b_st.site = &c1_nb_emlrtRSI;
  c1_c_st.site = &c1_ob_emlrtRSI;
  c1_b_maxval = c1_b_maximum(chartInstance, &c1_c_st, c1_varargin_1_data,
    c1_varargin_1_size);
  c1_u3 = (uint32_T)c1_b_maxval + 2U;
  c1_d_covSaturation = false;
  if (c1_u3 > 255U) {
    c1_d_covSaturation = true;
    c1_u3 = 255U;
    sf_data_saturate_error(chartInstance->S, 1U, 10458, 38);
  }

  covrtSaturationUpdateFcn(chartInstance->c1_covrtInstance, 4, 0, 3, 0,
    c1_d_covSaturation);
  c1_b_local_array[3] = (real_T)(uint8_T)c1_u3;
}

static uint8_T c1_b_minimum(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, uint8_T c1_x_data[], int32_T
  c1_x_size[2])
{
  emlrtStack c1_st;
  const mxArray *c1_b_y = NULL;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_d_y = NULL;
  const mxArray *c1_y = NULL;
  int32_T c1_b_istop;
  int32_T c1_istop;
  int32_T c1_k;
  uint8_T c1_ex;
  boolean_T c1_b;
  boolean_T c1_b1;
  (void)chartInstance;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_st.site = &c1_mb_emlrtRSI;
  c1_b = (c1_x_size[1] == 1);
  if (c1_b || ((real_T)c1_x_size[1] != 1.0)) {
    c1_b1 = true;
  } else {
    c1_b1 = false;
  }

  if (!c1_b1) {
    c1_y = NULL;
    sf_mex_assign(&c1_y, sf_mex_create("y", c1_cv1, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    c1_c_y = NULL;
    sf_mex_assign(&c1_c_y, sf_mex_create("y", c1_cv1, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    sf_mex_call(&c1_st, &c1_d_emlrtMCI, "error", 0U, 2U, 14, c1_y, 14,
                sf_mex_call(&c1_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c1_st, NULL, "message", 1U, 1U, 14, c1_c_y)));
  }

  if (!((real_T)c1_x_size[1] >= 1.0)) {
    c1_b_y = NULL;
    sf_mex_assign(&c1_b_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c1_d_y = NULL;
    sf_mex_assign(&c1_d_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    sf_mex_call(&c1_st, &c1_e_emlrtMCI, "error", 0U, 2U, 14, c1_b_y, 14,
                sf_mex_call(&c1_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c1_st, NULL, "message", 1U, 1U, 14, c1_d_y)));
  }

  c1_istop = c1_x_size[1];
  c1_b_istop = c1_istop;
  c1_ex = c1_x_data[0];
  for (c1_k = 2; c1_k <= c1_b_istop; c1_k++) {
    if (c1_ex > c1_x_data[c1_k - 1]) {
      c1_ex = c1_x_data[c1_k - 1];
    }
  }

  return c1_ex;
}

static uint8_T c1_b_maximum(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, uint8_T c1_x_data[], int32_T
  c1_x_size[2])
{
  emlrtStack c1_st;
  const mxArray *c1_b_y = NULL;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_d_y = NULL;
  const mxArray *c1_y = NULL;
  int32_T c1_b_istop;
  int32_T c1_istop;
  int32_T c1_k;
  uint8_T c1_ex;
  boolean_T c1_b;
  boolean_T c1_b1;
  (void)chartInstance;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_st.site = &c1_pb_emlrtRSI;
  c1_b = (c1_x_size[1] == 1);
  if (c1_b || ((real_T)c1_x_size[1] != 1.0)) {
    c1_b1 = true;
  } else {
    c1_b1 = false;
  }

  if (!c1_b1) {
    c1_y = NULL;
    sf_mex_assign(&c1_y, sf_mex_create("y", c1_cv1, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    c1_c_y = NULL;
    sf_mex_assign(&c1_c_y, sf_mex_create("y", c1_cv1, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    sf_mex_call(&c1_st, &c1_d_emlrtMCI, "error", 0U, 2U, 14, c1_y, 14,
                sf_mex_call(&c1_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c1_st, NULL, "message", 1U, 1U, 14, c1_c_y)));
  }

  if (!((real_T)c1_x_size[1] >= 1.0)) {
    c1_b_y = NULL;
    sf_mex_assign(&c1_b_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c1_d_y = NULL;
    sf_mex_assign(&c1_d_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    sf_mex_call(&c1_st, &c1_e_emlrtMCI, "error", 0U, 2U, 14, c1_b_y, 14,
                sf_mex_call(&c1_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c1_st, NULL, "message", 1U, 1U, 14, c1_d_y)));
  }

  c1_istop = c1_x_size[1];
  c1_b_istop = c1_istop;
  c1_ex = c1_x_data[0];
  for (c1_k = 2; c1_k <= c1_b_istop; c1_k++) {
    if (c1_ex < c1_x_data[c1_k - 1]) {
      c1_ex = c1_x_data[c1_k - 1];
    }
  }

  return c1_ex;
}

static void c1_string_disp(SFc1_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c1_sp)
{
  static char_T c1_varargin_1[36] = { 'E', 'X', 'C', 'E', 'P', 'T', 'I', 'O',
    'N', ' ', ':', ' ', 'l', 'o', 'c', 'a', 'l', '_', 'a', 'r', 'e', 'a', ' ',
    'E', 'r', 'a', 's', 'e', ' ', '0', ' ', 'v', 'a', 'l', 'u', 'e' };

  static char_T c1_b_cv[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  static char_T c1_b_cv1[4] = { '%', 's', '\\', 'n' };

  emlrtStack c1_b_st;
  emlrtStack c1_c_st;
  emlrtStack c1_st;
  const mxArray *c1_b_y = NULL;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_d_y = NULL;
  const mxArray *c1_y = NULL;
  real_T c1_b_u;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  c1_c_st.prev = &c1_b_st;
  c1_c_st.tls = c1_b_st.tls;
  c1_st.site = &c1_qb_emlrtRSI;
  c1_b_st.site = &c1_rb_emlrtRSI;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_b_cv, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c1_b_u = 1.0;
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", &c1_b_u, 0, 0U, 0U, 0U, 0), false);
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y", c1_b_cv1, 10, 0U, 1U, 0U, 2, 1, 4),
                false);
  c1_d_y = NULL;
  sf_mex_assign(&c1_d_y, sf_mex_create("y", c1_varargin_1, 10, 0U, 1U, 0U, 2, 1,
    36), false);
  c1_c_st.site = &c1_sb_emlrtRSI;
  c1_emlrt_marshallIn(chartInstance, c1_c_feval(chartInstance, &c1_c_st, c1_y,
    c1_b_y, c1_c_y, c1_d_y), "<output of feval>");
}

static void c1_b_string_disp(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c1_sp)
{
  static char_T c1_varargin_1[36] = { 'E', 'X', 'C', 'E', 'P', 'T', 'I', 'O',
    'N', ' ', ':', ' ', 'M', 'o', 'd', 'e', ' ', 'c', 'o', 'n', 'd', 'i', 't',
    'i', 'o', 'n', ' ', 'E', 'x', 'c', 'e', 'p', 't', 'i', 'o', 'n' };

  static char_T c1_b_cv[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  static char_T c1_b_cv1[4] = { '%', 's', '\\', 'n' };

  emlrtStack c1_b_st;
  emlrtStack c1_c_st;
  emlrtStack c1_st;
  const mxArray *c1_b_y = NULL;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_d_y = NULL;
  const mxArray *c1_y = NULL;
  real_T c1_b_u;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  c1_c_st.prev = &c1_b_st;
  c1_c_st.tls = c1_b_st.tls;
  c1_st.site = &c1_qb_emlrtRSI;
  c1_b_st.site = &c1_rb_emlrtRSI;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_b_cv, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c1_b_u = 1.0;
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", &c1_b_u, 0, 0U, 0U, 0U, 0), false);
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y", c1_b_cv1, 10, 0U, 1U, 0U, 2, 1, 4),
                false);
  c1_d_y = NULL;
  sf_mex_assign(&c1_d_y, sf_mex_create("y", c1_varargin_1, 10, 0U, 1U, 0U, 2, 1,
    36), false);
  c1_c_st.site = &c1_sb_emlrtRSI;
  c1_emlrt_marshallIn(chartInstance, c1_d_feval(chartInstance, &c1_c_st, c1_y,
    c1_b_y, c1_c_y, c1_d_y), "<output of feval>");
}

static real_T c1_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_a__output_of_feval_, const char_T
  *c1_identifier)
{
  emlrtMsgIdentifier c1_thisId;
  real_T c1_y;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_a__output_of_feval_),
    &c1_thisId);
  sf_mex_destroy(&c1_a__output_of_feval_);
  return c1_y;
}

static real_T c1_b_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_u, const emlrtMsgIdentifier *c1_parentId)
{
  real_T c1_d;
  real_T c1_y;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_b_u), &c1_d, 1, 0, 0U, 0, 0U, 0);
  c1_y = c1_d;
  sf_mex_destroy(&c1_b_u);
  return c1_y;
}

static void c1_c_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_center_mat, const char_T *c1_identifier,
  boolean_T c1_y[961])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_center_mat), &c1_thisId,
                        c1_y);
  sf_mex_destroy(&c1_b_center_mat);
}

static void c1_d_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T c1_y[961])
{
  int32_T c1_i;
  boolean_T c1_bv[961];
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_b_u), c1_bv, 1, 11, 0U, 1, 0U, 2, 31,
                31);
  for (c1_i = 0; c1_i < 961; c1_i++) {
    c1_y[c1_i] = c1_bv[c1_i];
  }

  sf_mex_destroy(&c1_b_u);
}

static void c1_e_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_heading_mat, const char_T *c1_identifier,
  boolean_T c1_y[806])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_heading_mat), &c1_thisId,
                        c1_y);
  sf_mex_destroy(&c1_b_heading_mat);
}

static void c1_f_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T c1_y[806])
{
  int32_T c1_i;
  boolean_T c1_bv[806];
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_b_u), c1_bv, 1, 11, 0U, 1, 0U, 2, 26,
                31);
  for (c1_i = 0; c1_i < 806; c1_i++) {
    c1_y[c1_i] = c1_bv[c1_i];
  }

  sf_mex_destroy(&c1_b_u);
}

static void c1_g_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_pts_erase_past_line, const char_T
  *c1_identifier, int8_T c1_y[4])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_pts_erase_past_line),
                        &c1_thisId, c1_y);
  sf_mex_destroy(&c1_b_pts_erase_past_line);
}

static void c1_h_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_u, const emlrtMsgIdentifier *c1_parentId,
  int8_T c1_y[4])
{
  int32_T c1_i;
  int8_T c1_iv[4];
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_b_u), c1_iv, 1, 2, 0U, 1, 0U, 2, 1, 4);
  for (c1_i = 0; c1_i < 4; c1_i++) {
    c1_y[c1_i] = c1_iv[c1_i];
  }

  sf_mex_destroy(&c1_b_u);
}

static void c1_i_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_pts_roi_circle, const char_T
  *c1_identifier, int8_T c1_y[6])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_pts_roi_circle),
                        &c1_thisId, c1_y);
  sf_mex_destroy(&c1_b_pts_roi_circle);
}

static void c1_j_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_u, const emlrtMsgIdentifier *c1_parentId,
  int8_T c1_y[6])
{
  int32_T c1_i;
  int8_T c1_iv[6];
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_b_u), c1_iv, 1, 2, 0U, 1, 0U, 2, 2, 3);
  for (c1_i = 0; c1_i < 6; c1_i++) {
    c1_y[c1_i] = c1_iv[c1_i];
  }

  sf_mex_destroy(&c1_b_u);
}

static void c1_k_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_c_yaw_mat, const char_T *c1_identifier,
  real_T c1_y[19200])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_l_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_c_yaw_mat), &c1_thisId,
                        c1_y);
  sf_mex_destroy(&c1_c_yaw_mat);
}

static void c1_l_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_u, const emlrtMsgIdentifier *c1_parentId,
  real_T c1_y[19200])
{
  real_T c1_b_dv[19200];
  int32_T c1_i;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_b_u), c1_b_dv, 1, 0, 0U, 1, 0U, 2,
                120, 160);
  for (c1_i = 0; c1_i < 19200; c1_i++) {
    c1_y[c1_i] = c1_b_dv[c1_i];
  }

  sf_mex_destroy(&c1_b_u);
}

static real_T c1_m_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_add_yaw, const char_T *c1_identifier,
  boolean_T *c1_svPtr)
{
  emlrtMsgIdentifier c1_thisId;
  real_T c1_y;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_n_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_add_yaw),
    &c1_thisId, c1_svPtr);
  sf_mex_destroy(&c1_b_add_yaw);
  return c1_y;
}

static real_T c1_n_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T *c1_svPtr)
{
  real_T c1_d;
  real_T c1_y;
  (void)chartInstance;
  if (mxIsEmpty(c1_b_u)) {
    *c1_svPtr = false;
  } else {
    *c1_svPtr = true;
    sf_mex_import(c1_parentId, sf_mex_dup(c1_b_u), &c1_d, 1, 0, 0U, 0, 0U, 0);
    c1_y = c1_d;
  }

  sf_mex_destroy(&c1_b_u);
  return c1_y;
}

static void c1_o_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_local_array, const char_T *c1_identifier,
  boolean_T *c1_svPtr, real_T c1_y[4])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_p_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_local_array), &c1_thisId,
                        c1_svPtr, c1_y);
  sf_mex_destroy(&c1_b_local_array);
}

static void c1_p_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T *c1_svPtr, real_T c1_y[4])
{
  real_T c1_b_dv[4];
  int32_T c1_i;
  (void)chartInstance;
  if (mxIsEmpty(c1_b_u)) {
    *c1_svPtr = false;
  } else {
    *c1_svPtr = true;
    sf_mex_import(c1_parentId, sf_mex_dup(c1_b_u), c1_b_dv, 1, 0, 0U, 1, 0U, 1,
                  4);
    for (c1_i = 0; c1_i < 4; c1_i++) {
      c1_y[c1_i] = c1_b_dv[c1_i];
    }
  }

  sf_mex_destroy(&c1_b_u);
}

static uint8_T c1_q_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_is_active_c1_flightControlSystem, const
  char_T *c1_identifier)
{
  emlrtMsgIdentifier c1_thisId;
  uint8_T c1_y;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_r_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c1_b_is_active_c1_flightControlSystem), &c1_thisId);
  sf_mex_destroy(&c1_b_is_active_c1_flightControlSystem);
  return c1_y;
}

static uint8_T c1_r_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_u, const emlrtMsgIdentifier *c1_parentId)
{
  uint8_T c1_c_u;
  uint8_T c1_y;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_b_u), &c1_c_u, 1, 3, 0U, 0, 0U, 0);
  c1_y = c1_c_u;
  sf_mex_destroy(&c1_b_u);
  return c1_y;
}

static void c1_slStringInitializeDynamicBuffers
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c1_chart_data_browse_helper(SFc1_flightControlSystemInstanceStruct
  *chartInstance, int32_T c1_ssIdNumber, const mxArray **c1_mxData, uint8_T
  *c1_isValueTooBig)
{
  real_T c1_d;
  real_T c1_d1;
  *c1_mxData = NULL;
  *c1_mxData = NULL;
  *c1_isValueTooBig = 0U;
  switch (c1_ssIdNumber) {
   case 4U:
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", *chartInstance->c1_u, 11,
      0U, 1U, 0U, 2, 120, 160), false);
    break;

   case 5U:
    sf_mex_assign(c1_mxData, sf_mex_create("mxData",
      *chartInstance->c1_center_mat, 11, 0U, 1U, 0U, 2, 31, 31), false);
    break;

   case 7U:
    sf_mex_assign(c1_mxData, sf_mex_create("mxData",
      *chartInstance->c1_heading_mat, 11, 0U, 1U, 0U, 2, 26, 31), false);
    break;

   case 15U:
    *c1_isValueTooBig = 1U;
    break;

   case 13U:
    c1_d = *chartInstance->c1_output_mode;
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", &c1_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 14U:
    c1_d1 = *chartInstance->c1_yaw_out;
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", &c1_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 32U:
    sf_mex_assign(c1_mxData, sf_mex_create("mxData",
      *chartInstance->c1_pts_erase_past_line, 2, 0U, 1U, 0U, 2, 1, 4), false);
    break;

   case 31U:
    sf_mex_assign(c1_mxData, sf_mex_create("mxData",
      *chartInstance->c1_pts_local_area, 2, 0U, 1U, 0U, 2, 1, 4), false);
    break;

   case 33U:
    sf_mex_assign(c1_mxData, sf_mex_create("mxData",
      *chartInstance->c1_pts_roi_circle, 2, 0U, 1U, 0U, 2, 2, 3), false);
    break;
  }
}

static const mxArray *c1_feval(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, const mxArray *c1_input0, const
  mxArray *c1_input1)
{
  const mxArray *c1_m = NULL;
  (void)chartInstance;
  c1_m = NULL;
  sf_mex_assign(&c1_m, sf_mex_call(c1_sp, NULL, "feval", 1U, 2U, 14, sf_mex_dup
    (c1_input0), 14, sf_mex_dup(c1_input1)), false);
  sf_mex_destroy(&c1_input0);
  sf_mex_destroy(&c1_input1);
  return c1_m;
}

static void c1_b_feval(SFc1_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c1_sp, const mxArray *c1_input0, const mxArray *c1_input1)
{
  (void)chartInstance;
  sf_mex_call(c1_sp, NULL, "feval", 0U, 2U, 14, sf_mex_dup(c1_input0), 14,
              sf_mex_dup(c1_input1));
  sf_mex_destroy(&c1_input0);
  sf_mex_destroy(&c1_input1);
}

static const mxArray *c1_c_feval(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, const mxArray *c1_input0, const
  mxArray *c1_input1, const mxArray *c1_input2, const mxArray *c1_input3)
{
  const mxArray *c1_m = NULL;
  (void)chartInstance;
  c1_m = NULL;
  sf_mex_assign(&c1_m, sf_mex_call(c1_sp, NULL, "feval", 1U, 4U, 14, sf_mex_dup
    (c1_input0), 14, sf_mex_dup(c1_input1), 14, sf_mex_dup(c1_input2), 14,
    sf_mex_dup(c1_input3)), false);
  sf_mex_destroy(&c1_input0);
  sf_mex_destroy(&c1_input1);
  sf_mex_destroy(&c1_input2);
  sf_mex_destroy(&c1_input3);
  return c1_m;
}

static const mxArray *c1_d_feval(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, const mxArray *c1_input0, const
  mxArray *c1_input1, const mxArray *c1_input2, const mxArray *c1_input3)
{
  const mxArray *c1_m = NULL;
  (void)chartInstance;
  c1_m = NULL;
  sf_mex_assign(&c1_m, sf_mex_call(c1_sp, NULL, "feval", 1U, 4U, 14, sf_mex_dup
    (c1_input0), 14, sf_mex_dup(c1_input1), 14, sf_mex_dup(c1_input2), 14,
    sf_mex_dup(c1_input3)), false);
  sf_mex_destroy(&c1_input0);
  sf_mex_destroy(&c1_input1);
  sf_mex_destroy(&c1_input2);
  sf_mex_destroy(&c1_input3);
  return c1_m;
}

static void c1_b_sqrt(SFc1_flightControlSystemInstanceStruct *chartInstance,
                      const emlrtStack *c1_sp, real_T *c1_x)
{
  static char_T c1_b_cv[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  static char_T c1_b_cv1[4] = { 's', 'q', 'r', 't' };

  const mxArray *c1_b_y = NULL;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_y = NULL;
  real_T c1_b_x;
  boolean_T c1_b_p;
  boolean_T c1_p;
  (void)chartInstance;
  c1_b_x = *c1_x;
  if (c1_b_x < 0.0) {
    c1_p = true;
  } else {
    c1_p = false;
  }

  c1_b_p = c1_p;
  if (c1_b_p) {
    c1_y = NULL;
    sf_mex_assign(&c1_y, sf_mex_create("y", c1_b_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c1_b_y = NULL;
    sf_mex_assign(&c1_b_y, sf_mex_create("y", c1_b_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c1_c_y = NULL;
    sf_mex_assign(&c1_c_y, sf_mex_create("y", c1_b_cv1, 10, 0U, 1U, 0U, 2, 1, 4),
                  false);
    sf_mex_call(c1_sp, &c1_emlrtMCI, "error", 0U, 2U, 14, c1_y, 14, sf_mex_call
                (c1_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call(c1_sp, NULL,
      "message", 1U, 2U, 14, c1_b_y, 14, c1_c_y)));
  }

  *c1_x = muDoubleScalarSqrt(*c1_x);
}

static void init_dsm_address_info(SFc1_flightControlSystemInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc1_flightControlSystemInstanceStruct
  *chartInstance)
{
  chartInstance->c1_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c1_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c1_u = (boolean_T (*)[19200])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c1_center_mat = (boolean_T (*)[961])
    ssGetOutputPortSignal_wrapper(chartInstance->S, 1);
  chartInstance->c1_heading_mat = (boolean_T (*)[806])
    ssGetOutputPortSignal_wrapper(chartInstance->S, 2);
  chartInstance->c1_b_yaw_mat = (real_T (*)[19200])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c1_output_mode = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c1_yaw_out = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 5);
  chartInstance->c1_pts_erase_past_line = (int8_T (*)[4])
    ssGetOutputPortSignal_wrapper(chartInstance->S, 6);
  chartInstance->c1_pts_local_area = (int8_T (*)[4])
    ssGetOutputPortSignal_wrapper(chartInstance->S, 7);
  chartInstance->c1_pts_roi_circle = (int8_T (*)[6])
    ssGetOutputPortSignal_wrapper(chartInstance->S, 8);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c1_flightControlSystem_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1838029385U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2055635620U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(909765582U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(777686451U);
}

mxArray *sf_c1_flightControlSystem_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,5);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.IppfilterBuildable"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "images.internal.coder.buildable.ImfilterBuildable"));
  mxSetCell(mxcell3p, 2, mxCreateString(
             "images.internal.coder.buildable.GetnumcoresBuildable"));
  mxSetCell(mxcell3p, 3, mxCreateString(
             "images.internal.coder.buildable.CannyThresholdingTbbBuildable"));
  mxSetCell(mxcell3p, 4, mxCreateString(
             "images.internal.coder.buildable.IppreconstructBuildable"));
  return(mxcell3p);
}

mxArray *sf_c1_flightControlSystem_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("ippfilter_real32");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c1_flightControlSystem_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c1_flightControlSystem(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNrlls1KAzEQx7Ol1q+yFPTooWcRwZu3BrzYgyD4ADEmaRvIbpZsqu6tRx/LR/BRfAST3fSDuNj"
    "SLTRgYBhm4D+7v/3DZEE0fADmxCY+ugB0TD4y0QLVOXB1ZKLrctVvL/p9E7rImO3nigypySlOyh"
    "pP34fpSJbzb8FyfqdmfrQy/9j1q/M9aKY/h1YPV/TtGv3Jir7nasJSzRRKsK76MVjm/fFcbMRz6"
    "vHYesIw5el4ARQGz+XWPHKqs6lGiaQsIB5Y8tyv4TnzeGyd6RwxhXOGMpxrJHgaEtdgI59ijyt2"
    "XEISLBBWDAfCM4ONeJTkiHBFBAvFn2vo6+t4Dj0eWxf4rdwJYXBcNeIwO2FHHD3YTP/7+ZtyYEq"
    "RYSn1X+Dvezny7uWWq61GAA4y9x5wDUfL4+jNIZ7HsFprk518j1B82ea+me8whYvFnP37Qyt/Pt"
    "m/8qfuf63yh8iUgnD8mWHnz0sg/vR38h6Pa/zpe/7YmucIE81fGSI3aCT4eKLvZKqVFE9Frlky5"
    "/sBYMZ71g=="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c1_flightControlSystem_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "s0Iiy1AvAQsQPOYvS3TCpSG";
}

static void sf_opaque_initialize_c1_flightControlSystem(void *chartInstanceVar)
{
  initialize_params_c1_flightControlSystem
    ((SFc1_flightControlSystemInstanceStruct*) chartInstanceVar);
  initialize_c1_flightControlSystem((SFc1_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c1_flightControlSystem(void *chartInstanceVar)
{
  enable_c1_flightControlSystem((SFc1_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c1_flightControlSystem(void *chartInstanceVar)
{
  disable_c1_flightControlSystem((SFc1_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c1_flightControlSystem(void *chartInstanceVar)
{
  sf_gateway_c1_flightControlSystem((SFc1_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c1_flightControlSystem(SimStruct*
  S)
{
  return get_sim_state_c1_flightControlSystem
    ((SFc1_flightControlSystemInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c1_flightControlSystem(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c1_flightControlSystem((SFc1_flightControlSystemInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c1_flightControlSystem(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc1_flightControlSystemInstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_flightControlSystem_optimization_info();
    }

    mdl_cleanup_runtime_resources_c1_flightControlSystem
      ((SFc1_flightControlSystemInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c1_flightControlSystem(void *chartInstanceVar)
{
  mdl_start_c1_flightControlSystem((SFc1_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c1_flightControlSystem(void
  *chartInstanceVar)
{
  mdl_terminate_c1_flightControlSystem((SFc1_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc1_flightControlSystem((SFc1_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c1_flightControlSystem(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c1_flightControlSystem
      ((SFc1_flightControlSystemInstanceStruct*)sf_get_chart_instance_ptr(S));
    initSimStructsc1_flightControlSystem((SFc1_flightControlSystemInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c1_flightControlSystem_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [25] = {
    "eNrtWk1vG0UY3kQhtDSNIoHopRI5cECIolTlQCVEnfijWEqIyzrh4+KOd197R56d2c7M2nHVQ4/",
    "8Dq79Ez1z6pGfwJET4oLEO7tr19oYZ8cOykJZyVmP7Wfeed7vmY2z1jxy8NrG1+6HjrOJ92v4Wn",
    "fS661svDbzSj/fcL7Ixs9uOI4nfOgDd+Nej545dhePwxaRJFSO/cVJCN+AEizWVPAm74niWMp7I",
    "IF7OEEkpLaSq2gYM8oHjZh7RrL6NqBe4AYiZv4BTkj8Y87Gfyc3inULJdaoBE83AHwdSBH3gwYj",
    "/cVakHpUDcAbqDi01pUC7caRoaqOYqZpxKB+Bl6TK01QC+oCvq4mGqr6zE7Jhq9yJ2gRRowSXlz",
    "XAVEuROgdGk4iH/8exxq1VwjrBUTqAwjIENQhHSTSBYdC0qnCX3cpJ1pISlg9ZFUzW0G+LYYcjz",
    "AkmK2NkO+BBDKIBOXaMiDcBuq5zkmXQQ26cd9SrgtPYhMNpxRGIO3s26uKIUjSh2Nut+bERvWzx",
    "CmnsVQQq2kIp0Tue+i7Cny7vIFBp1yC7ghtnMYKC4mKm6ot6RB9wzbXNU34L5Xr4jD1frUUNpFb",
    "H4K1X03lNjxeJYwpO2xbRIcwBJbIrxFNlsCm8i3ASlG/LdA7TLaxzFgxpxgJGbYquE+Le+Uwh0o",
    "K29dYpArAaWjCAHxU83Tp04kuiqNYaRFWMeXUDg8LyjuPbXINskc8KFxjJKEKcMGJX1nK9akygY",
    "Ro1JJOWBaeIY3BpaCO6sW8NhJygDq2LWavdWUiwQ4Nfh8Ts4YkydXRu08JiwuuOVR9jB90jxOFW",
    "dZOLmJN/CwF9ogXgG8qJ2VwhHkWJyhqYmVK/j6yHVI9roHyJI2KRlKMCR2LrtFSexzBCR9wMeIN",
    "KUI367wW+BUAZg0iOeX9AyzhctzAxRdbtYQn7SS72zY5Rs9EM9I1vvEQOFZDw9V0DcTDqKpzbJF",
    "xQatgXfoUmxiuqNJYqMdpqU/rnunfv3Je9+8bc/r392f6951s7N3t9BjtBybRaCmYO8a5w3S+vZ",
    "n5tgrsBybrWIRzzuGcKW5y/2gGvzZHrjNzz8u7vr54nev4bi3DVWZwN3NyNnK4zUxnv97pvvju6",
    "e8vf3726s8XP+3cWkX+5zft9lvb2fj2pG+aZunhuURWxB9u5fzBjNVek47v7g/3H6lHrePvh+69",
    "djVyHybz/bi1eL1bufVOPt81vRoGcZITpNf0s32bGZM43U8k+phZ7+YF+rg+40+O89uD1fDvVfL",
    "+ME9f7+T0ZcYemJLZwfA978dXx+d2IT43cnzMOMCdK2aaKaFy8Pl4aT4iaRw7ISbWEvGpVIrE57",
    "s5PmYcadXB8qCgExGlO1gIy8TrQSE7bed4bWe8mPAI6xDc/paEz/PKSnykoB2PSo9BWezzaSWPn",
    "8fn7RwfMx6TUZITysHjk5V4YE64JB47ldXw5+UX5UF8v4NcEvwrx66PWM/GBsMc6kRz+qF5PNZz",
    "PHYmJB73K2laCy5FH2WxyzL1ZpLDJBlP57l6+/ipfV7CG2Wfef1aah9PcN8pj32ek8w+3ZLYZ/d",
    "S1tG6wD67OfvsJmfJHWJODKAzf2e6fQn7Pluc8z+uFLi1N5BfkXOXZXHXnH/unOcycavysz1P+r",
    "f/fm9B3nVyv98pMY/8fdlzxbLx+sWy3/ggG385fa5VDSjz55ysZ18fAunN+/Y/4t9/WOpvcs5ZN",
    "/rL/gHih3v7nLCxouljgcnHLWmeY0+/kkDU/OcVV1FPVtmXjCj3xUjduf/Z/ZXq019WaX4y",
    ""
  };

  static char newstr [1797] = "";
  newstr[0] = '\0';
  for (i = 0; i < 25; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c1_flightControlSystem(SimStruct *S)
{
  const char* newstr = sf_c1_flightControlSystem_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(2875338216U));
  ssSetChecksum1(S,(3237378648U));
  ssSetChecksum2(S,(4258299082U));
  ssSetChecksum3(S,(386966187U));
}

static void mdlRTW_c1_flightControlSystem(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c1_flightControlSystem(SimStruct *S)
{
  SFc1_flightControlSystemInstanceStruct *chartInstance;
  chartInstance = (SFc1_flightControlSystemInstanceStruct *)utMalloc(sizeof
    (SFc1_flightControlSystemInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc1_flightControlSystemInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  if (ssGetSampleTime(S, 0) == CONTINUOUS_SAMPLE_TIME && ssGetOffsetTime(S, 0) ==
      0 && sfHasContStates(S) &&
      !supportsLegacyBehaviorForPersistentVarInContinuousTime(S)) {
    sf_error_out_about_continuous_sample_time_with_persistent_vars(S);
  }

  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c1_flightControlSystem;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c1_flightControlSystem;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c1_flightControlSystem;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c1_flightControlSystem;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c1_flightControlSystem;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c1_flightControlSystem;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c1_flightControlSystem;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c1_flightControlSystem;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c1_flightControlSystem;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c1_flightControlSystem;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c1_flightControlSystem;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c1_flightControlSystem;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->chartInfo.chartStateSetterFcn = NULL;
  chartInstance->chartInfo.chartStateGetterFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0,
    chartInstance->c1_JITStateAnimation,
    chartInstance->c1_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c1_flightControlSystem(chartInstance);
}

void c1_flightControlSystem_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c1_flightControlSystem(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c1_flightControlSystem(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c1_flightControlSystem(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c1_flightControlSystem_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
