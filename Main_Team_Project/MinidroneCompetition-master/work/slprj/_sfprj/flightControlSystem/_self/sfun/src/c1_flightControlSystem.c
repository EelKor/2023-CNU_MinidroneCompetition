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

static emlrtMCInfo c1_c_emlrtMCI = { 28,/* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtMCInfo c1_d_emlrtMCI = { 134,/* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtMCInfo c1_e_emlrtMCI = { 87,/* lineNo */
  33,                                  /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtRSInfo c1_emlrtRSI = { 23, /* lineNo */
  "Image Processing System/Mode_Select_Function",/* fcnName */
  "#flightControlSystem:2683"          /* pathName */
};

static emlrtRSInfo c1_b_emlrtRSI = { 163,/* lineNo */
  "Image Processing System/Mode_Select_Function",/* fcnName */
  "#flightControlSystem:2683"          /* pathName */
};

static emlrtRSInfo c1_c_emlrtRSI = { 171,/* lineNo */
  "Image Processing System/Mode_Select_Function",/* fcnName */
  "#flightControlSystem:2683"          /* pathName */
};

static emlrtRSInfo c1_d_emlrtRSI = { 201,/* lineNo */
  "Image Processing System/Mode_Select_Function",/* fcnName */
  "#flightControlSystem:2683"          /* pathName */
};

static emlrtRSInfo c1_e_emlrtRSI = { 116,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c1_f_emlrtRSI = { 132,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c1_g_emlrtRSI = { 138,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c1_h_emlrtRSI = { 708,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c1_i_emlrtRSI = { 709,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c1_j_emlrtRSI = { 714,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c1_k_emlrtRSI = { 715,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c1_l_emlrtRSI = { 44,/* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m"/* pathName */
};

static emlrtRSInfo c1_m_emlrtRSI = { 71,/* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo c1_n_emlrtRSI = { 106,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c1_o_emlrtRSI = { 110,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c1_p_emlrtRSI = { 854,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c1_q_emlrtRSI = { 72,/* lineNo */
  "padarray",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c1_r_emlrtRSI = { 928,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c1_s_emlrtRSI = { 1002,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c1_t_emlrtRSI = { 1030,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c1_u_emlrtRSI = { 1042,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c1_v_emlrtRSI = { 724,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c1_w_emlrtRSI = { 133,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c1_x_emlrtRSI = { 170,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c1_y_emlrtRSI = { 456,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c1_ab_emlrtRSI = { 14,/* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo c1_bb_emlrtRSI = { 762,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c1_cb_emlrtRSI = { 768,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c1_db_emlrtRSI = { 872,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c1_eb_emlrtRSI = { 76,/* lineNo */
  "imreconstruct",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imreconstruct.m"/* pathName */
};

static emlrtRSInfo c1_fb_emlrtRSI = { 220,/* lineNo */
  "Image Processing System/Mode_Select_Function",/* fcnName */
  "#flightControlSystem:2683"          /* pathName */
};

static emlrtRSInfo c1_gb_emlrtRSI = { 221,/* lineNo */
  "Image Processing System/Mode_Select_Function",/* fcnName */
  "#flightControlSystem:2683"          /* pathName */
};

static emlrtRSInfo c1_hb_emlrtRSI = { 222,/* lineNo */
  "Image Processing System/Mode_Select_Function",/* fcnName */
  "#flightControlSystem:2683"          /* pathName */
};

static emlrtRSInfo c1_ib_emlrtRSI = { 223,/* lineNo */
  "Image Processing System/Mode_Select_Function",/* fcnName */
  "#flightControlSystem:2683"          /* pathName */
};

static emlrtRSInfo c1_jb_emlrtRSI = { 15,/* lineNo */
  "min",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"/* pathName */
};

static emlrtRSInfo c1_kb_emlrtRSI = { 46,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c1_lb_emlrtRSI = { 92,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c1_mb_emlrtRSI = { 15,/* lineNo */
  "max",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"/* pathName */
};

static emlrtRSInfo c1_nb_emlrtRSI = { 44,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c1_ob_emlrtRSI = { 79,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRTEInfo c1_emlrtRTEI = { 198,/* lineNo */
  5,                                   /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683"          /* pName */
};

static emlrtRTEInfo c1_b_emlrtRTEI = { 154,/* lineNo */
  22,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683"          /* pName */
};

static emlrtRTEInfo c1_c_emlrtRTEI = { 154,/* lineNo */
  39,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683"          /* pName */
};

static emlrtRTEInfo c1_d_emlrtRTEI = { 154,/* lineNo */
  9,                                   /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683"          /* pName */
};

static emlrtRTEInfo c1_e_emlrtRTEI = { 155,/* lineNo */
  17,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683"          /* pName */
};

static emlrtRTEInfo c1_f_emlrtRTEI = { 155,/* lineNo */
  34,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683"          /* pName */
};

static emlrtRTEInfo c1_g_emlrtRTEI = { 155,/* lineNo */
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

static emlrtRTEInfo c1_l_emlrtRTEI = { 220,/* lineNo */
  25,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683"          /* pName */
};

static emlrtRTEInfo c1_m_emlrtRTEI = { 221,/* lineNo */
  25,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683"          /* pName */
};

static emlrtRTEInfo c1_n_emlrtRTEI = { 222,/* lineNo */
  25,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683"          /* pName */
};

static emlrtRTEInfo c1_o_emlrtRTEI = { 223,/* lineNo */
  25,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683"          /* pName */
};

static emlrtRTEInfo c1_p_emlrtRTEI = { 225,/* lineNo */
  48,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtDCInfo c1_emlrtDCI = { 154,/* lineNo */
  60,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_emlrtBCI = { 1,  /* iFirst */
  120,                                 /* iLast */
  154,                                 /* lineNo */
  60,                                  /* colNo */
  "u",                                 /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_b_emlrtDCI = { 154,/* lineNo */
  68,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_b_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  154,                                 /* lineNo */
  68,                                  /* colNo */
  "u",                                 /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_c_emlrtDCI = { 154,/* lineNo */
  77,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_c_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  154,                                 /* lineNo */
  77,                                  /* colNo */
  "u",                                 /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_d_emlrtDCI = { 154,/* lineNo */
  85,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_d_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  154,                                 /* lineNo */
  85,                                  /* colNo */
  "u",                                 /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_e_emlrtDCI = { 155,/* lineNo */
  63,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_e_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  155,                                 /* lineNo */
  63,                                  /* colNo */
  "canny_img",                         /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_f_emlrtDCI = { 155,/* lineNo */
  71,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_f_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  155,                                 /* lineNo */
  71,                                  /* colNo */
  "canny_img",                         /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_g_emlrtDCI = { 155,/* lineNo */
  80,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_g_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  155,                                 /* lineNo */
  80,                                  /* colNo */
  "canny_img",                         /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_h_emlrtDCI = { 155,/* lineNo */
  88,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_h_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  155,                                 /* lineNo */
  88,                                  /* colNo */
  "canny_img",                         /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_i_emlrtDCI = { 155,/* lineNo */
  17,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_i_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  155,                                 /* lineNo */
  17,                                  /* colNo */
  "yaw_mat",                           /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_j_emlrtDCI = { 155,/* lineNo */
  25,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_j_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  155,                                 /* lineNo */
  25,                                  /* colNo */
  "yaw_mat",                           /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_k_emlrtDCI = { 155,/* lineNo */
  34,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_k_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  155,                                 /* lineNo */
  34,                                  /* colNo */
  "yaw_mat",                           /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_l_emlrtDCI = { 155,/* lineNo */
  42,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_l_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  155,                                 /* lineNo */
  42,                                  /* colNo */
  "yaw_mat",                           /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c1_emlrtECI = { -1, /* nDims */
  155,                                 /* lineNo */
  9,                                   /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683"          /* pName */
};

static emlrtDCInfo c1_m_emlrtDCI = { 154,/* lineNo */
  22,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_m_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  154,                                 /* lineNo */
  22,                                  /* colNo */
  "find_yaw_mat",                      /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_n_emlrtDCI = { 154,/* lineNo */
  30,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_n_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  154,                                 /* lineNo */
  30,                                  /* colNo */
  "find_yaw_mat",                      /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_o_emlrtDCI = { 154,/* lineNo */
  39,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_o_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  154,                                 /* lineNo */
  39,                                  /* colNo */
  "find_yaw_mat",                      /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_p_emlrtDCI = { 154,/* lineNo */
  47,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_p_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  154,                                 /* lineNo */
  47,                                  /* colNo */
  "find_yaw_mat",                      /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c1_b_emlrtECI = { -1,/* nDims */
  154,                                 /* lineNo */
  9,                                   /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683"          /* pName */
};

static emlrtDCInfo c1_q_emlrtDCI = { 167,/* lineNo */
  38,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_q_emlrtBCI = { 1,/* iFirst */
  1000,                                /* iLast */
  167,                                 /* lineNo */
  38,                                  /* colNo */
  "local_area",                        /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c1_r_emlrtDCI = { 168,/* lineNo */
  38,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_r_emlrtBCI = { 1,/* iFirst */
  1000,                                /* iLast */
  168,                                 /* lineNo */
  38,                                  /* colNo */
  "local_area",                        /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c1_s_emlrtDCI = { 175,/* lineNo */
  34,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_s_emlrtBCI = { 1,/* iFirst */
  1000,                                /* iLast */
  175,                                 /* lineNo */
  34,                                  /* colNo */
  "local_area",                        /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c1_t_emlrtDCI = { 176,/* lineNo */
  34,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_t_emlrtBCI = { 1,/* iFirst */
  1000,                                /* iLast */
  176,                                 /* lineNo */
  34,                                  /* colNo */
  "local_area",                        /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c1_u_emlrtDCI = { 198,/* lineNo */
  41,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_u_emlrtBCI = { 1,/* iFirst */
  1000,                                /* iLast */
  198,                                 /* lineNo */
  41,                                  /* colNo */
  "local_area",                        /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_v_emlrtBCI = { 1,/* iFirst */
  31,                                  /* iLast */
  92,                                  /* lineNo */
  28,                                  /* colNo */
  "center_mat",                        /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_v_emlrtDCI = { 92,/* lineNo */
  28,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_w_emlrtBCI = { 1,/* iFirst */
  31,                                  /* iLast */
  92,                                  /* lineNo */
  32,                                  /* colNo */
  "center_mat",                        /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_w_emlrtDCI = { 92,/* lineNo */
  32,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_x_emlrtBCI = { 1,/* iFirst */
  1000,                                /* iLast */
  192,                                 /* lineNo */
  26,                                  /* colNo */
  "local_area",                        /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_x_emlrtDCI = { 192,/* lineNo */
  26,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_y_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  172,                                 /* lineNo */
  35,                                  /* colNo */
  "find_yaw_mat",                      /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_y_emlrtDCI = { 172,/* lineNo */
  35,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_ab_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  172,                                 /* lineNo */
  39,                                  /* colNo */
  "find_yaw_mat",                      /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_ab_emlrtDCI = { 172,/* lineNo */
  39,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_bb_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  165,                                 /* lineNo */
  28,                                  /* colNo */
  "u",                                 /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_bb_emlrtDCI = { 165,/* lineNo */
  28,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_cb_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  165,                                 /* lineNo */
  32,                                  /* colNo */
  "u",                                 /* aName */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_cb_emlrtDCI = { 165,/* lineNo */
  32,                                  /* colNo */
  "Image Processing System/Mode_Select_Function",/* fName */
  "#flightControlSystem:2683",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_db_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  141,                                 /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_eb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  142,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_fb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  762,                                 /* lineNo */
  70,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_gb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  767,                                 /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_hb_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  100,                                 /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_ib_emlrtBCI = { 1,/* iFirst */
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
  boolean_T c1_s[961]);
static boolean_T c1_isequal(SFc1_flightControlSystemInstanceStruct
  *chartInstance, boolean_T c1_varargin_2[93]);
static void c1_local_find(SFc1_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c1_sp, uint8_T c1_local_array_data_data[], int32_T
  c1_local_array_data_size[2], real_T c1_b_local_array[4]);
static uint8_T c1_minimum(SFc1_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c1_sp, uint8_T c1_x_data[], int32_T c1_x_size[2]);
static uint8_T c1_maximum(SFc1_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c1_sp, uint8_T c1_x_data[], int32_T c1_x_size[2]);
static void c1_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_center_mat, const char_T *c1_identifier,
  boolean_T c1_y[961]);
static void c1_b_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T c1_y[961]);
static void c1_c_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_c_head_canny_mat, const char_T
  *c1_identifier, real_T c1_y[19200]);
static void c1_d_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_u, const emlrtMsgIdentifier *c1_parentId,
  real_T c1_y[19200]);
static real_T c1_e_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_output_mode, const char_T *c1_identifier);
static real_T c1_f_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_u, const emlrtMsgIdentifier *c1_parentId);
static real_T c1_g_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_add_yaw, const char_T *c1_identifier,
  boolean_T *c1_svPtr);
static real_T c1_h_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T *c1_svPtr);
static void c1_i_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_local_array, const char_T *c1_identifier,
  boolean_T *c1_svPtr, real_T c1_y[4]);
static void c1_j_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T *c1_svPtr, real_T c1_y[4]);
static uint8_T c1_k_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_is_active_c1_flightControlSystem, const
  char_T *c1_identifier);
static uint8_T c1_l_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
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
  static const int32_T c1_d_postfixPredicateTree[5] = { 0, 1, -3, 2, -3 };

  static const int32_T c1_e_postfixPredicateTree[5] = { 0, 1, -3, 2, -3 };

  static const int32_T c1_b_postfixPredicateTree[3] = { 0, 1, -3 };

  static const int32_T c1_c_postfixPredicateTree[3] = { 0, 1, -3 };

  static const int32_T c1_d_condTxtEndIdx[3] = { 4352, 4408, 4545 };

  static const int32_T c1_d_condTxtStartIdx[3] = { 4298, 4356, 4437 };

  static const int32_T c1_e_condTxtEndIdx[3] = { 4814, 4872, 4928 };

  static const int32_T c1_e_condTxtStartIdx[3] = { 4799, 4818, 4876 };

  static const int32_T c1_postfixPredicateTree[3] = { 0, 1, -3 };

  static const int32_T c1_b_condTxtEndIdx[2] = { 2670, 2688 };

  static const int32_T c1_b_condTxtStartIdx[2] = { 2658, 2674 };

  static const int32_T c1_c_condTxtEndIdx[2] = { 3562, 3582 };

  static const int32_T c1_c_condTxtStartIdx[2] = { 3545, 3566 };

  static const int32_T c1_condTxtEndIdx[2] = { 1452, 1472 };

  static const int32_T c1_condTxtStartIdx[2] = { 1435, 1456 };

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
    19U);
  covrtChartInitFcn(chartInstance->c1_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c1_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c1_decisionTxtStartIdx, &c1_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c1_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c1_covrtInstance, "", 4U, 0U, 2U, 0U, 24U, 0U,
                  8U, 0U, 5U, 0U, 12U, 5U);
  covrtEmlFcnInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 5913);
  covrtEmlFcnInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 1U, "local_find",
                     5916, -1, 6320);
  covrtEmlSaturationInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U, 4656,
    -1, 4681);
  covrtEmlSaturationInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 1U, 4707,
    -1, 4732);
  covrtEmlSaturationInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 2U, 5108,
    -1, 5133);
  covrtEmlSaturationInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 3U, 5155,
    -1, 5180);
  covrtEmlSaturationInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 4U, 6031,
    -1, 6069);
  covrtEmlSaturationInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 5U, 6127,
    -1, 6165);
  covrtEmlSaturationInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 6U, 6198,
    -1, 6236);
  covrtEmlSaturationInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 7U, 6269,
    -1, 6307);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U, 147, 168, -1,
                    189, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 1U, 191, 215, -1,
                    239, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 2U, 241, 266, -1,
                    300, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 3U, 1431, 1473,
                    3537, 5910, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 4U, 1506, 1522,
                    1569, 1613, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 5U, 1569, 1590, -1,
                    1613, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 6U, 1626, 1645, -1,
                    1905, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 7U, 1833, 1849, -1,
                    1897, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 8U, 2154, 2183, -1,
                    2275, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 9U, 2375, 2407,
                    2504, 2642, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 10U, 2504, 2541, -1,
                    2642, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 11U, 2655, 2689, -1,
                    2743, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 12U, 3537, 3583, -1,
                    5910, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 13U, 3731, 3751, -1,
                    4113, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 14U, 4243, 4263,
                    4790, 5202, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 15U, 4293, 4546, -1,
                    4777, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 16U, 4567, 4588, -1,
                    4757, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 17U, 4790, 4929, -1,
                    5202, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 18U, 4959, 4991, -1,
                    5201, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 19U, 5247, 5267, -1,
                    5336, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 20U, 5457, 5482,
                    5519, 5520, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 21U, 5682, 5705,
                    5731, 5813, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 22U, 5731, 5758,
                    5817, 5908, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 23U, 5817, 5845, -1,
                    5901, false);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U, 2086, 2109,
                     2295);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 1U, 2118, 2141,
                     2287);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 2U, 4138, 4154,
                     5237);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 3U, 4164, 4183,
                     5229);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 4U, 5425, 5448,
                     5520);
  covrtEmlMCDCInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U, 1435, 1472,
                      2U, 0U, c1_condTxtStartIdx, c1_condTxtEndIdx, 3U,
                      c1_postfixPredicateTree, false);
  covrtEmlMCDCInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 1U, 2658, 2688,
                      2U, 2U, c1_b_condTxtStartIdx, c1_b_condTxtEndIdx, 3U,
                      c1_b_postfixPredicateTree, false);
  covrtEmlMCDCInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 2U, 3545, 3582,
                      2U, 4U, c1_c_condTxtStartIdx, c1_c_condTxtEndIdx, 3U,
                      c1_c_postfixPredicateTree, false);
  covrtEmlMCDCInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 3U, 4298, 4545,
                      3U, 6U, c1_d_condTxtStartIdx, c1_d_condTxtEndIdx, 5U,
                      c1_d_postfixPredicateTree, false);
  covrtEmlMCDCInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 4U, 4799, 4928,
                      3U, 9U, c1_e_condTxtStartIdx, c1_e_condTxtEndIdx, 5U,
                      c1_e_postfixPredicateTree, false);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U, 1435,
    1452, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 1U, 1456,
    1472, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 2U, 1509,
    1521, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 3U, 1576,
    1589, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 4U, 1837,
    1848, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 5U, 2158,
    2182, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 6U, 2379,
    2406, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 7U, 2512,
    2540, -1, 2U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 8U, 2658,
    2670, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 9U, 2674,
    2688, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 10U, 3545,
    3562, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 11U, 3566,
    3582, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 12U, 3735,
    3750, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 13U, 4247,
    4262, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 14U, 4298,
    4352, -1, 3U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 15U, 4356,
    4408, -1, 5U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 16U, 4572,
    4587, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 17U, 4799,
    4814, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 18U, 4818,
    4872, -1, 3U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 19U, 4876,
    4928, -1, 5U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 20U, 4964,
    4990, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 21U, 5251,
    5266, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 22U, 5461,
    5481, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 23U, 5686,
    5704, -1, 0U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 24U, 5739,
    5757, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 25U, 5825,
    5844, -1, 3U);
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
  emlrtStack c1_b_st;
  emlrtStack c1_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T c1_b_dv[4];
  real_T c1_ab_a;
  real_T c1_avg_col;
  real_T c1_b_c;
  real_T c1_b_output_mode;
  real_T c1_b_yaw_out;
  real_T c1_bb_a;
  real_T c1_c;
  real_T c1_c_c;
  real_T c1_c_col;
  real_T c1_c_row;
  real_T c1_cb_a;
  real_T c1_center_one_num;
  real_T c1_col_max;
  real_T c1_col_min;
  real_T c1_count;
  real_T c1_d;
  real_T c1_d1;
  real_T c1_d10;
  real_T c1_d11;
  real_T c1_d12;
  real_T c1_d2;
  real_T c1_d3;
  real_T c1_d4;
  real_T c1_d5;
  real_T c1_d6;
  real_T c1_d7;
  real_T c1_d8;
  real_T c1_d9;
  real_T c1_d_a;
  real_T c1_d_c;
  real_T c1_db_a;
  real_T c1_e_a;
  real_T c1_e_c;
  real_T c1_eb_a;
  real_T c1_f_a;
  real_T c1_f_c;
  real_T c1_fb_a;
  real_T c1_g_a;
  real_T c1_g_c;
  real_T c1_gb_a;
  real_T c1_h_a;
  real_T c1_h_c;
  real_T c1_hb_a;
  real_T c1_head_one_num;
  real_T c1_i_a;
  real_T c1_ib_a;
  real_T c1_j_a;
  real_T c1_jb_a;
  real_T c1_k;
  real_T c1_k_a;
  real_T c1_kb_a;
  real_T c1_l_a;
  real_T c1_lb_a;
  real_T c1_m_a;
  real_T c1_mb_a;
  real_T c1_n_a;
  real_T c1_nb_a;
  real_T c1_o_a;
  real_T c1_ob_a;
  real_T c1_p_a;
  real_T c1_pb_a;
  real_T c1_q_a;
  real_T c1_qb_a;
  real_T c1_r_a;
  real_T c1_rb_a;
  real_T c1_roll_cond;
  real_T c1_row_max;
  real_T c1_row_min;
  real_T c1_s_a;
  real_T c1_side_decision;
  real_T c1_t_a;
  real_T c1_u_a;
  real_T c1_v_a;
  real_T c1_w_a;
  real_T c1_x;
  real_T c1_x_a;
  real_T c1_y_a;
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
  int32_T c1_c_loop_ub;
  int32_T c1_col;
  int32_T c1_d_loop_ub;
  int32_T c1_e_loop_ub;
  int32_T c1_exitg1;
  int32_T c1_f_loop_ub;
  int32_T c1_g_loop_ub;
  int32_T c1_h_loop_ub;
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
  int32_T c1_i48;
  int32_T c1_i49;
  int32_T c1_i5;
  int32_T c1_i50;
  int32_T c1_i51;
  int32_T c1_i52;
  int32_T c1_i53;
  int32_T c1_i54;
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
  int32_T c1_i9;
  int32_T c1_i_loop_ub;
  int32_T c1_j_loop_ub;
  int32_T c1_k_loop_ub;
  int32_T c1_l_loop_ub;
  int32_T c1_loop_ub;
  int32_T c1_m_loop_ub;
  int32_T c1_row;
  uint8_T c1_local_area[2000];
  uint8_T c1_local_area_new_data[2];
  uint8_T c1_c_u;
  uint8_T c1_u1;
  uint8_T c1_u2;
  uint8_T c1_u3;
  boolean_T c1_b_u[19200];
  boolean_T c1_canny_img[19200];
  boolean_T c1_b_center_mat[961];
  boolean_T c1_heading_mat[961];
  boolean_T c1_yaw_mat_compare[93];
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
  boolean_T c1_b4;
  boolean_T c1_b5;
  boolean_T c1_b6;
  boolean_T c1_b7;
  boolean_T c1_b8;
  boolean_T c1_b9;
  boolean_T c1_b_covSaturation;
  boolean_T c1_c_covSaturation;
  boolean_T c1_center_cond;
  boolean_T c1_covSaturation;
  boolean_T c1_d_covSaturation;
  boolean_T c1_guard1 = false;
  boolean_T c1_guard2 = false;
  boolean_T c1_heading_cond;
  boolean_T c1_yaw_tf;
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

  for (c1_i5 = 0; c1_i5 < 19200; c1_i5++) {
    chartInstance->c1_head_canny_mat[c1_i5] = chartInstance->c1_yaw_mat[c1_i5];
  }

  c1_i6 = 0;
  c1_i7 = 0;
  for (c1_i8 = 0; c1_i8 < 31; c1_i8++) {
    for (c1_i10 = 0; c1_i10 < 31; c1_i10++) {
      c1_b_center_mat[c1_i10 + c1_i6] = c1_b_u[(c1_i10 + c1_i7) + 7724];
    }

    c1_i6 += 31;
    c1_i7 += 120;
  }

  c1_i9 = 0;
  c1_i11 = 0;
  for (c1_i12 = 0; c1_i12 < 31; c1_i12++) {
    for (c1_i13 = 0; c1_i13 < 31; c1_i13++) {
      c1_heading_mat[c1_i13 + c1_i9] = c1_b_u[(c1_i13 + c1_i11) + 7680];
    }

    c1_i9 += 31;
    c1_i11 += 120;
  }

  c1_head_one_num = (real_T)c1_intnnz(chartInstance, c1_heading_mat);
  c1_center_one_num = (real_T)c1_intnnz(chartInstance, c1_b_center_mat);
  c1_heading_cond = (c1_head_one_num > 0.0);
  c1_center_cond = (c1_center_one_num > 0.0);
  c1_b_yaw_out = 0.0;
  c1_b_output_mode = 0.0;
  for (c1_i14 = 0; c1_i14 < 2000; c1_i14++) {
    c1_local_area[c1_i14] = 0U;
  }

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
      c1_b_yaw_out = 1.0;
    } else if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 5,
                covrtRelationalopUpdateFcn(chartInstance->c1_covrtInstance, 4U,
                 0U, 3U, chartInstance->c1_add_yaw, -1.0, -1, 0U,
                 chartInstance->c1_add_yaw == -1.0))) {
      c1_b_yaw_out = -1.0;
    }

    if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 6,
                       !(chartInstance->c1_add_yaw == 0.0))) {
      c1_i16 = 0;
      for (c1_i17 = 0; c1_i17 < 3; c1_i17++) {
        for (c1_i19 = 0; c1_i19 < 31; c1_i19++) {
          c1_yaw_mat_compare[c1_i19 + c1_i16] = c1_heading_mat[(c1_i19 + c1_i16)
            + 403];
        }

        c1_i16 += 31;
      }

      c1_yaw_tf = c1_isequal(chartInstance, c1_yaw_mat_compare);
      if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 7,
                         covrtRelationalopUpdateFcn
                         (chartInstance->c1_covrtInstance, 4U, 0U, 4U, (real_T)
                          c1_yaw_tf, 1.0, -1, 0U, (int32_T)c1_yaw_tf))) {
        chartInstance->c1_add_yaw = 0.0;
      }
    }

    c1_count = 0.0;
    c1_avg_col = 0.0;
    for (c1_b_row = 0; c1_b_row < 31; c1_b_row++) {
      c1_c_row = 1.0 + (real_T)c1_b_row;
      covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 0, 1);
      for (c1_b_col = 0; c1_b_col < 31; c1_b_col++) {
        c1_c_col = 1.0 + (real_T)c1_b_col;
        covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 1, 1);
        if (c1_c_row != (real_T)(int32_T)muDoubleScalarFloor(c1_c_row)) {
          emlrtIntegerCheckR2012b(c1_c_row, &c1_v_emlrtDCI, &c1_st);
        }

        c1_i27 = (int32_T)c1_c_row;
        if ((c1_i27 < 1) || (c1_i27 > 31)) {
          emlrtDynamicBoundsCheckR2012b(c1_i27, 1, 31, &c1_v_emlrtBCI, &c1_st);
        }

        if (c1_c_col != (real_T)(int32_T)muDoubleScalarFloor(c1_c_col)) {
          emlrtIntegerCheckR2012b(c1_c_col, &c1_w_emlrtDCI, &c1_st);
        }

        c1_i32 = (int32_T)c1_c_col;
        if ((c1_i32 < 1) || (c1_i32 > 31)) {
          emlrtDynamicBoundsCheckR2012b(c1_i32, 1, 31, &c1_w_emlrtBCI, &c1_st);
        }

        c1_d2 = (real_T)c1_b_center_mat[(c1_i27 + 31 * (c1_i32 - 1)) - 1];
        if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 8,
                           covrtRelationalopUpdateFcn
                           (chartInstance->c1_covrtInstance, 4U, 0U, 5U, c1_d2,
                            1.0, -1, 0U, c1_d2 == 1.0))) {
          c1_count++;
          c1_avg_col += c1_c_col;
        }

        _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
      }

      covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 1, 0);
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 0, 0);
    c1_x = c1_avg_col / c1_count;
    c1_avg_col = c1_x;
    c1_avg_col = muDoubleScalarRound(c1_avg_col);
    c1_roll_cond = 0.0;
    if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 9,
                       covrtRelationalopUpdateFcn
                       (chartInstance->c1_covrtInstance, 4U, 0U, 6U, c1_avg_col,
                        19.0, -1, 4U, c1_avg_col > 19.0))) {
      c1_b_output_mode = -2.0;
      c1_roll_cond = 1.0;
    } else if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 10,
                covrtRelationalopUpdateFcn(chartInstance->c1_covrtInstance, 4U,
                 0U, 7U, c1_avg_col, 13.0, -1, 2U, c1_avg_col < 13.0))) {
      c1_b_output_mode = 2.0;
      c1_roll_cond = 1.0;
    }

    if (covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 2,
                         covrtRelationalopUpdateFcn
                         (chartInstance->c1_covrtInstance, 4U, 0U, 8U,
                          chartInstance->c1_add_yaw, 0.0, -1, 0U,
                          chartInstance->c1_add_yaw == 0.0)) && covrtEmlCondEval
        (chartInstance->c1_covrtInstance, 4U, 0, 3, covrtRelationalopUpdateFcn
         (chartInstance->c1_covrtInstance, 4U, 0U, 9U, c1_roll_cond, 0.0, -1, 0U,
          c1_roll_cond == 0.0))) {
      covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 1, true);
      covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 11, true);
      c1_b_output_mode = 1.0;
    } else {
      covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 1, false);
      covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 11, false);
    }

    c1_i31 = 0;
    for (c1_i34 = 0; c1_i34 < 31; c1_i34++) {
      for (c1_i36 = 0; c1_i36 < 31; c1_i36++) {
        chartInstance->c1_head_canny_mat[(c1_i36 + c1_i31) + 7680] = (real_T)
          c1_b_u[(c1_i36 + c1_i31) + 7680];
      }

      c1_i31 += 120;
    }
  } else {
    covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 0, false);
    covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 3, false);
    if (covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 4,
                         covrtRelationalopUpdateFcn
                         (chartInstance->c1_covrtInstance, 4U, 0U, 10U, (real_T)
                          c1_heading_cond, 0.0, -1, 0U, !c1_heading_cond)) &&
        covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 5,
                         covrtRelationalopUpdateFcn
                         (chartInstance->c1_covrtInstance, 4U, 0U, 11U, (real_T)
                          c1_center_cond, 1.0, -1, 0U, (int32_T)c1_center_cond)))
    {
      covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 2, true);
      covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 12, true);
      c1_side_decision = 0.0;
      c1_count = 0.0;
      if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 13,
                         covrtRelationalopUpdateFcn
                         (chartInstance->c1_covrtInstance, 4U, 0U, 12U,
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
          c1_i22 = 1;
          c1_i24 = 0;
        } else {
          if (c1_row_min != (real_T)(int32_T)muDoubleScalarFloor(c1_row_min)) {
            emlrtIntegerCheckR2012b(c1_row_min, &c1_emlrtDCI, &c1_st);
          }

          c1_i25 = (int32_T)c1_row_min;
          if ((c1_i25 < 1) || (c1_i25 > 120)) {
            emlrtDynamicBoundsCheckR2012b(c1_i25, 1, 120, &c1_emlrtBCI, &c1_st);
          }

          c1_i22 = c1_i25;
          if (c1_row_max != (real_T)(int32_T)muDoubleScalarFloor(c1_row_max)) {
            emlrtIntegerCheckR2012b(c1_row_max, &c1_b_emlrtDCI, &c1_st);
          }

          c1_i29 = (int32_T)c1_row_max;
          if ((c1_i29 < 1) || (c1_i29 > 120)) {
            emlrtDynamicBoundsCheckR2012b(c1_i29, 1, 120, &c1_b_emlrtBCI, &c1_st);
          }

          c1_i24 = c1_i29;
        }

        c1_b4 = (c1_col_min > c1_col_max);
        c1_b5 = c1_b4;
        c1_b6 = false;
        c1_b7 = (c1_b5 || c1_b6);
        if (c1_b7) {
          c1_i30 = 1;
          c1_i33 = 0;
        } else {
          if (c1_col_min != (real_T)(int32_T)muDoubleScalarFloor(c1_col_min)) {
            emlrtIntegerCheckR2012b(c1_col_min, &c1_c_emlrtDCI, &c1_st);
          }

          c1_i35 = (int32_T)c1_col_min;
          if ((c1_i35 < 1) || (c1_i35 > 160)) {
            emlrtDynamicBoundsCheckR2012b(c1_i35, 1, 160, &c1_c_emlrtBCI, &c1_st);
          }

          c1_i30 = c1_i35;
          if (c1_col_max != (real_T)(int32_T)muDoubleScalarFloor(c1_col_max)) {
            emlrtIntegerCheckR2012b(c1_col_max, &c1_d_emlrtDCI, &c1_st);
          }

          c1_i40 = (int32_T)c1_col_max;
          if ((c1_i40 < 1) || (c1_i40 > 160)) {
            emlrtDynamicBoundsCheckR2012b(c1_i40, 1, 160, &c1_d_emlrtBCI, &c1_st);
          }

          c1_i33 = c1_i40;
        }

        c1_b12 = (c1_row_min > c1_row_max);
        c1_b13 = c1_b12;
        c1_b14 = false;
        c1_b15 = (c1_b13 || c1_b14);
        if (c1_b15) {
          c1_i41 = 1;
          c1_i42 = 0;
        } else {
          if (c1_row_min != (real_T)(int32_T)muDoubleScalarFloor(c1_row_min)) {
            emlrtIntegerCheckR2012b(c1_row_min, &c1_m_emlrtDCI, &c1_st);
          }

          c1_i43 = (int32_T)c1_row_min;
          if ((c1_i43 < 1) || (c1_i43 > 120)) {
            emlrtDynamicBoundsCheckR2012b(c1_i43, 1, 120, &c1_m_emlrtBCI, &c1_st);
          }

          c1_i41 = c1_i43;
          if (c1_row_max != (real_T)(int32_T)muDoubleScalarFloor(c1_row_max)) {
            emlrtIntegerCheckR2012b(c1_row_max, &c1_n_emlrtDCI, &c1_st);
          }

          c1_i47 = (int32_T)c1_row_max;
          if ((c1_i47 < 1) || (c1_i47 > 120)) {
            emlrtDynamicBoundsCheckR2012b(c1_i47, 1, 120, &c1_n_emlrtBCI, &c1_st);
          }

          c1_i42 = c1_i47;
        }

        c1_b16 = (c1_col_min > c1_col_max);
        c1_b17 = c1_b16;
        c1_b18 = false;
        c1_b19 = (c1_b17 || c1_b18);
        if (c1_b19) {
          c1_i48 = 1;
          c1_i49 = 0;
        } else {
          if (c1_col_min != (real_T)(int32_T)muDoubleScalarFloor(c1_col_min)) {
            emlrtIntegerCheckR2012b(c1_col_min, &c1_o_emlrtDCI, &c1_st);
          }

          c1_i50 = (int32_T)c1_col_min;
          if ((c1_i50 < 1) || (c1_i50 > 160)) {
            emlrtDynamicBoundsCheckR2012b(c1_i50, 1, 160, &c1_o_emlrtBCI, &c1_st);
          }

          c1_i48 = c1_i50;
          if (c1_col_max != (real_T)(int32_T)muDoubleScalarFloor(c1_col_max)) {
            emlrtIntegerCheckR2012b(c1_col_max, &c1_p_emlrtDCI, &c1_st);
          }

          c1_i52 = (int32_T)c1_col_max;
          if ((c1_i52 < 1) || (c1_i52 > 160)) {
            emlrtDynamicBoundsCheckR2012b(c1_i52, 1, 160, &c1_p_emlrtBCI, &c1_st);
          }

          c1_i49 = c1_i52;
        }

        c1_tmp_size[0] = (c1_i42 - c1_i41) + 1;
        c1_b_loop_ub = c1_i42 - c1_i41;
        for (c1_i51 = 0; c1_i51 <= c1_b_loop_ub; c1_i51++) {
          c1_b_tmp_data[c1_i51] = (c1_i41 + c1_i51) - 1;
        }

        c1_b_tmp_size[0] = (c1_i49 - c1_i48) + 1;
        c1_c_loop_ub = c1_i49 - c1_i48;
        for (c1_i53 = 0; c1_i53 <= c1_c_loop_ub; c1_i53++) {
          c1_c_tmp_data[c1_i53] = (c1_i48 + c1_i53) - 1;
        }

        c1_c_tmp_size[0] = (c1_i24 - c1_i22) + 1;
        c1_c_tmp_size[1] = (c1_i33 - c1_i30) + 1;
        c1_d_loop_ub = c1_i33 - c1_i30;
        for (c1_i54 = 0; c1_i54 <= c1_d_loop_ub; c1_i54++) {
          c1_e_loop_ub = c1_i24 - c1_i22;
          for (c1_i55 = 0; c1_i55 <= c1_e_loop_ub; c1_i55++) {
            chartInstance->c1_tmp_data[c1_i55 + c1_c_tmp_size[0] * c1_i54] =
              (real_T)c1_b_u[((c1_i22 + c1_i55) + 120 * ((c1_i30 + c1_i54) - 1))
              - 1];
          }
        }

        c1_iv[0] = c1_tmp_size[0];
        c1_iv[1] = c1_b_tmp_size[0];
        emlrtSubAssignSizeCheckR2012b(&c1_iv[0], 2, &c1_c_tmp_size[0], 2,
          &c1_b_emlrtECI, &c1_st);
        c1_f_loop_ub = c1_c_tmp_size[1] - 1;
        for (c1_i57 = 0; c1_i57 <= c1_f_loop_ub; c1_i57++) {
          c1_g_loop_ub = c1_c_tmp_size[0] - 1;
          for (c1_i59 = 0; c1_i59 <= c1_g_loop_ub; c1_i59++) {
            chartInstance->c1_find_yaw_mat[c1_b_tmp_data[c1_i59] + 120 *
              c1_c_tmp_data[c1_i57]] = chartInstance->c1_tmp_data[c1_i59 +
              c1_c_tmp_size[0] * c1_i57];
          }
        }

        c1_b21 = (c1_row_min > c1_row_max);
        c1_b22 = c1_b21;
        c1_b23 = false;
        c1_b24 = (c1_b22 || c1_b23);
        if (c1_b24) {
          c1_i61 = 1;
          c1_i63 = 0;
        } else {
          if (c1_row_min != (real_T)(int32_T)muDoubleScalarFloor(c1_row_min)) {
            emlrtIntegerCheckR2012b(c1_row_min, &c1_e_emlrtDCI, &c1_st);
          }

          c1_i64 = (int32_T)c1_row_min;
          if ((c1_i64 < 1) || (c1_i64 > 120)) {
            emlrtDynamicBoundsCheckR2012b(c1_i64, 1, 120, &c1_e_emlrtBCI, &c1_st);
          }

          c1_i61 = c1_i64;
          if (c1_row_max != (real_T)(int32_T)muDoubleScalarFloor(c1_row_max)) {
            emlrtIntegerCheckR2012b(c1_row_max, &c1_f_emlrtDCI, &c1_st);
          }

          c1_i66 = (int32_T)c1_row_max;
          if ((c1_i66 < 1) || (c1_i66 > 120)) {
            emlrtDynamicBoundsCheckR2012b(c1_i66, 1, 120, &c1_f_emlrtBCI, &c1_st);
          }

          c1_i63 = c1_i66;
        }

        c1_b25 = (c1_col_min > c1_col_max);
        c1_b26 = c1_b25;
        c1_b27 = false;
        c1_b28 = (c1_b26 || c1_b27);
        if (c1_b28) {
          c1_i67 = 1;
          c1_i69 = 0;
        } else {
          if (c1_col_min != (real_T)(int32_T)muDoubleScalarFloor(c1_col_min)) {
            emlrtIntegerCheckR2012b(c1_col_min, &c1_g_emlrtDCI, &c1_st);
          }

          c1_i70 = (int32_T)c1_col_min;
          if ((c1_i70 < 1) || (c1_i70 > 160)) {
            emlrtDynamicBoundsCheckR2012b(c1_i70, 1, 160, &c1_g_emlrtBCI, &c1_st);
          }

          c1_i67 = c1_i70;
          if (c1_col_max != (real_T)(int32_T)muDoubleScalarFloor(c1_col_max)) {
            emlrtIntegerCheckR2012b(c1_col_max, &c1_h_emlrtDCI, &c1_st);
          }

          c1_i71 = (int32_T)c1_col_max;
          if ((c1_i71 < 1) || (c1_i71 > 160)) {
            emlrtDynamicBoundsCheckR2012b(c1_i71, 1, 160, &c1_h_emlrtBCI, &c1_st);
          }

          c1_i69 = c1_i71;
        }

        c1_b29 = (c1_row_min > c1_row_max);
        c1_b30 = c1_b29;
        c1_b31 = false;
        c1_b32 = (c1_b30 || c1_b31);
        if (c1_b32) {
          c1_i72 = 1;
          c1_i73 = 0;
        } else {
          if (c1_row_min != (real_T)(int32_T)muDoubleScalarFloor(c1_row_min)) {
            emlrtIntegerCheckR2012b(c1_row_min, &c1_i_emlrtDCI, &c1_st);
          }

          c1_i74 = (int32_T)c1_row_min;
          if ((c1_i74 < 1) || (c1_i74 > 120)) {
            emlrtDynamicBoundsCheckR2012b(c1_i74, 1, 120, &c1_i_emlrtBCI, &c1_st);
          }

          c1_i72 = c1_i74;
          if (c1_row_max != (real_T)(int32_T)muDoubleScalarFloor(c1_row_max)) {
            emlrtIntegerCheckR2012b(c1_row_max, &c1_j_emlrtDCI, &c1_st);
          }

          c1_i77 = (int32_T)c1_row_max;
          if ((c1_i77 < 1) || (c1_i77 > 120)) {
            emlrtDynamicBoundsCheckR2012b(c1_i77, 1, 120, &c1_j_emlrtBCI, &c1_st);
          }

          c1_i73 = c1_i77;
        }

        c1_b33 = (c1_col_min > c1_col_max);
        c1_b34 = c1_b33;
        c1_b35 = false;
        c1_b36 = (c1_b34 || c1_b35);
        if (c1_b36) {
          c1_i78 = 1;
          c1_i79 = 0;
        } else {
          if (c1_col_min != (real_T)(int32_T)muDoubleScalarFloor(c1_col_min)) {
            emlrtIntegerCheckR2012b(c1_col_min, &c1_k_emlrtDCI, &c1_st);
          }

          c1_i80 = (int32_T)c1_col_min;
          if ((c1_i80 < 1) || (c1_i80 > 160)) {
            emlrtDynamicBoundsCheckR2012b(c1_i80, 1, 160, &c1_k_emlrtBCI, &c1_st);
          }

          c1_i78 = c1_i80;
          if (c1_col_max != (real_T)(int32_T)muDoubleScalarFloor(c1_col_max)) {
            emlrtIntegerCheckR2012b(c1_col_max, &c1_l_emlrtDCI, &c1_st);
          }

          c1_i82 = (int32_T)c1_col_max;
          if ((c1_i82 < 1) || (c1_i82 > 160)) {
            emlrtDynamicBoundsCheckR2012b(c1_i82, 1, 160, &c1_l_emlrtBCI, &c1_st);
          }

          c1_i79 = c1_i82;
        }

        c1_tmp_size[0] = (c1_i73 - c1_i72) + 1;
        c1_h_loop_ub = c1_i73 - c1_i72;
        for (c1_i81 = 0; c1_i81 <= c1_h_loop_ub; c1_i81++) {
          c1_b_tmp_data[c1_i81] = (c1_i72 + c1_i81) - 1;
        }

        c1_b_tmp_size[0] = (c1_i79 - c1_i78) + 1;
        c1_i_loop_ub = c1_i79 - c1_i78;
        for (c1_i83 = 0; c1_i83 <= c1_i_loop_ub; c1_i83++) {
          c1_c_tmp_data[c1_i83] = (c1_i78 + c1_i83) - 1;
        }

        c1_c_tmp_size[0] = (c1_i63 - c1_i61) + 1;
        c1_c_tmp_size[1] = (c1_i69 - c1_i67) + 1;
        c1_j_loop_ub = c1_i69 - c1_i67;
        for (c1_i84 = 0; c1_i84 <= c1_j_loop_ub; c1_i84++) {
          c1_k_loop_ub = c1_i63 - c1_i61;
          for (c1_i85 = 0; c1_i85 <= c1_k_loop_ub; c1_i85++) {
            chartInstance->c1_tmp_data[c1_i85 + c1_c_tmp_size[0] * c1_i84] =
              (real_T)c1_canny_img[((c1_i61 + c1_i85) + 120 * ((c1_i67 + c1_i84)
              - 1)) - 1];
          }
        }

        c1_iv1[0] = c1_tmp_size[0];
        c1_iv1[1] = c1_b_tmp_size[0];
        emlrtSubAssignSizeCheckR2012b(&c1_iv1[0], 2, &c1_c_tmp_size[0], 2,
          &c1_emlrtECI, &c1_st);
        c1_l_loop_ub = c1_c_tmp_size[1] - 1;
        for (c1_i86 = 0; c1_i86 <= c1_l_loop_ub; c1_i86++) {
          c1_m_loop_ub = c1_c_tmp_size[0] - 1;
          for (c1_i87 = 0; c1_i87 <= c1_m_loop_ub; c1_i87++) {
            chartInstance->c1_yaw_mat[c1_b_tmp_data[c1_i87] + 120 *
              c1_c_tmp_data[c1_i86]] = chartInstance->c1_tmp_data[c1_i87 +
              c1_c_tmp_size[0] * c1_i86];
          }
        }
      }

      for (c1_row = 0; c1_row < 120; c1_row++) {
        c1_c_row = 1.0 + (real_T)c1_row;
        covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 2, 1);
        for (c1_col = 0; c1_col < 160; c1_col++) {
          c1_c_col = 1.0 + (real_T)c1_col;
          covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 3, 1);
          c1_guard1 = false;
          c1_guard2 = false;
          if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 14,
                             covrtRelationalopUpdateFcn
                             (chartInstance->c1_covrtInstance, 4U, 0U, 13U,
                              chartInstance->c1_local_cond, 0.0, -1, 0U,
                              chartInstance->c1_local_cond == 0.0))) {
            c1_b_st.site = &c1_b_emlrtRSI;
            c1_d_a = c1_c_row - 60.0;
            c1_f_a = c1_d_a;
            c1_h_a = c1_f_a;
            c1_j_a = c1_h_a;
            c1_l_a = c1_j_a;
            c1_c = c1_l_a * c1_l_a;
            c1_b_st.site = &c1_b_emlrtRSI;
            c1_n_a = c1_c_col - 80.0;
            c1_p_a = c1_n_a;
            c1_r_a = c1_p_a;
            c1_t_a = c1_r_a;
            c1_v_a = c1_t_a;
            c1_c_c = c1_v_a * c1_v_a;
            c1_d3 = c1_c + c1_c_c;
            c1_b_st.site = &c1_b_emlrtRSI;
            c1_b_sqrt(chartInstance, &c1_b_st, &c1_d3);
            if (covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 6,
                                 covrtRelationalopUpdateFcn
                                 (chartInstance->c1_covrtInstance, 4U, 0U, 14U,
                                  c1_d3, 50.0, -1, 3U, c1_d3 <= 50.0))) {
              c1_b_st.site = &c1_b_emlrtRSI;
              c1_x_a = c1_c_row - 60.0;
              c1_ab_a = c1_x_a;
              c1_cb_a = c1_ab_a;
              c1_eb_a = c1_cb_a;
              c1_gb_a = c1_eb_a;
              c1_e_c = c1_gb_a * c1_gb_a;
              c1_b_st.site = &c1_b_emlrtRSI;
              c1_ib_a = c1_c_col - 80.0;
              c1_kb_a = c1_ib_a;
              c1_mb_a = c1_kb_a;
              c1_ob_a = c1_mb_a;
              c1_qb_a = c1_ob_a;
              c1_g_c = c1_qb_a * c1_qb_a;
              c1_d5 = c1_e_c + c1_g_c;
              c1_b_st.site = &c1_b_emlrtRSI;
              c1_b_sqrt(chartInstance, &c1_b_st, &c1_d5);
              if (covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 7,
                                   covrtRelationalopUpdateFcn
                                   (chartInstance->c1_covrtInstance, 4U, 0U, 15U,
                                    c1_d5, 30.0, -1, 5U, c1_d5 >= 30.0))) {
                if ((c1_c_row > 50.0) && (c1_c_row < 70.0) && (c1_c_col > 70.0))
                {
                  c1_b20 = true;
                } else {
                  c1_b20 = false;
                }

                if (covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 8,
                                     !c1_b20)) {
                  covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 3,
                                   true);
                  covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 15,
                                 true);
                  if (c1_c_row != (real_T)(int32_T)muDoubleScalarFloor(c1_c_row))
                  {
                    emlrtIntegerCheckR2012b(c1_c_row, &c1_bb_emlrtDCI, &c1_st);
                  }

                  c1_i58 = (int32_T)c1_c_row;
                  if ((c1_i58 < 1) || (c1_i58 > 120)) {
                    emlrtDynamicBoundsCheckR2012b(c1_i58, 1, 120,
                      &c1_bb_emlrtBCI, &c1_st);
                  }

                  if (c1_c_col != (real_T)(int32_T)muDoubleScalarFloor(c1_c_col))
                  {
                    emlrtIntegerCheckR2012b(c1_c_col, &c1_cb_emlrtDCI, &c1_st);
                  }

                  c1_i62 = (int32_T)c1_c_col;
                  if ((c1_i62 < 1) || (c1_i62 > 160)) {
                    emlrtDynamicBoundsCheckR2012b(c1_i62, 1, 160,
                      &c1_cb_emlrtBCI, &c1_st);
                  }

                  c1_d8 = (real_T)c1_b_u[(c1_i58 + 120 * (c1_i62 - 1)) - 1];
                  if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 16,
                                     covrtRelationalopUpdateFcn
                                     (chartInstance->c1_covrtInstance, 4U, 0U,
                                      16U, c1_d8, 1.0, -1, 0U, c1_d8 == 1.0))) {
                    c1_count++;
                    if (c1_count != (real_T)(int32_T)muDoubleScalarFloor
                        (c1_count)) {
                      emlrtIntegerCheckR2012b(c1_count, &c1_q_emlrtDCI, &c1_st);
                    }

                    c1_i68 = (int32_T)c1_count;
                    if ((c1_i68 < 1) || (c1_i68 > 1000)) {
                      emlrtDynamicBoundsCheckR2012b(c1_i68, 1, 1000,
                        &c1_q_emlrtBCI, &c1_st);
                    }

                    c1_d10 = muDoubleScalarRound(c1_c_row);
                    c1_b_covSaturation = false;
                    if (c1_d10 < 256.0) {
                      if (c1_d10 >= 0.0) {
                        c1_u1 = (uint8_T)c1_d10;
                      } else {
                        c1_b_covSaturation = true;
                        c1_u1 = 0U;
                        sf_data_saturate_error(chartInstance->S, 1U, 4656, 25);
                      }
                    } else if (c1_d10 >= 256.0) {
                      c1_b_covSaturation = true;
                      c1_u1 = MAX_uint8_T;
                      sf_data_saturate_error(chartInstance->S, 1U, 4656, 25);
                    } else {
                      c1_u1 = 0U;
                    }

                    covrtSaturationUpdateFcn(chartInstance->c1_covrtInstance, 4,
                      0, 0, 0, c1_b_covSaturation);
                    c1_local_area[(c1_i68 - 1) << 1] = c1_u1;
                    if (c1_count != (real_T)(int32_T)muDoubleScalarFloor
                        (c1_count)) {
                      emlrtIntegerCheckR2012b(c1_count, &c1_r_emlrtDCI, &c1_st);
                    }

                    c1_i76 = (int32_T)c1_count;
                    if ((c1_i76 < 1) || (c1_i76 > 1000)) {
                      emlrtDynamicBoundsCheckR2012b(c1_i76, 1, 1000,
                        &c1_r_emlrtBCI, &c1_st);
                    }

                    c1_d12 = muDoubleScalarRound(c1_c_col);
                    c1_d_covSaturation = false;
                    if (c1_d12 < 256.0) {
                      if (c1_d12 >= 0.0) {
                        c1_u3 = (uint8_T)c1_d12;
                      } else {
                        c1_d_covSaturation = true;
                        c1_u3 = 0U;
                        sf_data_saturate_error(chartInstance->S, 1U, 4707, 25);
                      }
                    } else if (c1_d12 >= 256.0) {
                      c1_d_covSaturation = true;
                      c1_u3 = MAX_uint8_T;
                      sf_data_saturate_error(chartInstance->S, 1U, 4707, 25);
                    } else {
                      c1_u3 = 0U;
                    }

                    covrtSaturationUpdateFcn(chartInstance->c1_covrtInstance, 4,
                      0, 1, 0, c1_d_covSaturation);
                    c1_local_area[1 + ((c1_i76 - 1) << 1)] = c1_u3;
                  }
                } else {
                  c1_guard2 = true;
                }
              } else {
                c1_guard2 = true;
              }
            } else {
              c1_guard2 = true;
            }
          } else if (covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 9,
                      covrtRelationalopUpdateFcn(chartInstance->c1_covrtInstance,
            4U, 0U, 17U, chartInstance->c1_local_cond, 1.0, -1, 0U,
                       chartInstance->c1_local_cond == 1.0))) {
            c1_b_st.site = &c1_c_emlrtRSI;
            c1_e_a = c1_c_row - 60.0;
            c1_g_a = c1_e_a;
            c1_i_a = c1_g_a;
            c1_k_a = c1_i_a;
            c1_m_a = c1_k_a;
            c1_b_c = c1_m_a * c1_m_a;
            c1_b_st.site = &c1_c_emlrtRSI;
            c1_o_a = c1_c_col - 80.0;
            c1_q_a = c1_o_a;
            c1_s_a = c1_q_a;
            c1_u_a = c1_s_a;
            c1_w_a = c1_u_a;
            c1_d_c = c1_w_a * c1_w_a;
            c1_d4 = c1_b_c + c1_d_c;
            c1_b_st.site = &c1_c_emlrtRSI;
            c1_b_sqrt(chartInstance, &c1_b_st, &c1_d4);
            if (covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 10,
                                 covrtRelationalopUpdateFcn
                                 (chartInstance->c1_covrtInstance, 4U, 0U, 18U,
                                  c1_d4, 50.0, -1, 3U, c1_d4 <= 50.0))) {
              c1_b_st.site = &c1_c_emlrtRSI;
              c1_y_a = c1_c_row - 60.0;
              c1_bb_a = c1_y_a;
              c1_db_a = c1_bb_a;
              c1_fb_a = c1_db_a;
              c1_hb_a = c1_fb_a;
              c1_f_c = c1_hb_a * c1_hb_a;
              c1_b_st.site = &c1_c_emlrtRSI;
              c1_jb_a = c1_c_col - 80.0;
              c1_lb_a = c1_jb_a;
              c1_nb_a = c1_lb_a;
              c1_pb_a = c1_nb_a;
              c1_rb_a = c1_pb_a;
              c1_h_c = c1_rb_a * c1_rb_a;
              c1_d6 = c1_f_c + c1_h_c;
              c1_b_st.site = &c1_c_emlrtRSI;
              c1_b_sqrt(chartInstance, &c1_b_st, &c1_d6);
              if (covrtEmlCondEval(chartInstance->c1_covrtInstance, 4U, 0, 11,
                                   covrtRelationalopUpdateFcn
                                   (chartInstance->c1_covrtInstance, 4U, 0U, 19U,
                                    c1_d6, 30.0, -1, 5U, c1_d6 >= 30.0))) {
                covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 4, true);
                covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 17, true);
                if (c1_c_row != (real_T)(int32_T)muDoubleScalarFloor(c1_c_row))
                {
                  emlrtIntegerCheckR2012b(c1_c_row, &c1_y_emlrtDCI, &c1_st);
                }

                c1_i56 = (int32_T)c1_c_row;
                if ((c1_i56 < 1) || (c1_i56 > 120)) {
                  emlrtDynamicBoundsCheckR2012b(c1_i56, 1, 120, &c1_y_emlrtBCI,
                    &c1_st);
                }

                if (c1_c_col != (real_T)(int32_T)muDoubleScalarFloor(c1_c_col))
                {
                  emlrtIntegerCheckR2012b(c1_c_col, &c1_ab_emlrtDCI, &c1_st);
                }

                c1_i60 = (int32_T)c1_c_col;
                if ((c1_i60 < 1) || (c1_i60 > 160)) {
                  emlrtDynamicBoundsCheckR2012b(c1_i60, 1, 160, &c1_ab_emlrtBCI,
                    &c1_st);
                }

                c1_d7 = chartInstance->c1_find_yaw_mat[(c1_i56 + 120 * (c1_i60 -
                  1)) - 1];
                if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 18,
                                   covrtRelationalopUpdateFcn
                                   (chartInstance->c1_covrtInstance, 4U, 0U, 20U,
                                    c1_d7, 1.0, -1, 0U, c1_d7 == 1.0))) {
                  c1_count++;
                  c1_side_decision += c1_c_col;
                  if (c1_count != (real_T)(int32_T)muDoubleScalarFloor(c1_count))
                  {
                    emlrtIntegerCheckR2012b(c1_count, &c1_s_emlrtDCI, &c1_st);
                  }

                  c1_i65 = (int32_T)c1_count;
                  if ((c1_i65 < 1) || (c1_i65 > 1000)) {
                    emlrtDynamicBoundsCheckR2012b(c1_i65, 1, 1000,
                      &c1_s_emlrtBCI, &c1_st);
                  }

                  c1_d9 = muDoubleScalarRound(c1_c_row);
                  c1_covSaturation = false;
                  if (c1_d9 < 256.0) {
                    if (c1_d9 >= 0.0) {
                      c1_c_u = (uint8_T)c1_d9;
                    } else {
                      c1_covSaturation = true;
                      c1_c_u = 0U;
                      sf_data_saturate_error(chartInstance->S, 1U, 5108, 25);
                    }
                  } else if (c1_d9 >= 256.0) {
                    c1_covSaturation = true;
                    c1_c_u = MAX_uint8_T;
                    sf_data_saturate_error(chartInstance->S, 1U, 5108, 25);
                  } else {
                    c1_c_u = 0U;
                  }

                  covrtSaturationUpdateFcn(chartInstance->c1_covrtInstance, 4, 0,
                    2, 0, c1_covSaturation);
                  c1_local_area[(c1_i65 - 1) << 1] = c1_c_u;
                  if (c1_count != (real_T)(int32_T)muDoubleScalarFloor(c1_count))
                  {
                    emlrtIntegerCheckR2012b(c1_count, &c1_t_emlrtDCI, &c1_st);
                  }

                  c1_i75 = (int32_T)c1_count;
                  if ((c1_i75 < 1) || (c1_i75 > 1000)) {
                    emlrtDynamicBoundsCheckR2012b(c1_i75, 1, 1000,
                      &c1_t_emlrtBCI, &c1_st);
                  }

                  c1_d11 = muDoubleScalarRound(c1_c_col);
                  c1_c_covSaturation = false;
                  if (c1_d11 < 256.0) {
                    if (c1_d11 >= 0.0) {
                      c1_u2 = (uint8_T)c1_d11;
                    } else {
                      c1_c_covSaturation = true;
                      c1_u2 = 0U;
                      sf_data_saturate_error(chartInstance->S, 1U, 5155, 25);
                    }
                  } else if (c1_d11 >= 256.0) {
                    c1_c_covSaturation = true;
                    c1_u2 = MAX_uint8_T;
                    sf_data_saturate_error(chartInstance->S, 1U, 5155, 25);
                  } else {
                    c1_u2 = 0U;
                  }

                  covrtSaturationUpdateFcn(chartInstance->c1_covrtInstance, 4, 0,
                    3, 0, c1_c_covSaturation);
                  c1_local_area[1 + ((c1_i75 - 1) << 1)] = c1_u2;
                }
              } else {
                c1_guard1 = true;
              }
            } else {
              c1_guard1 = true;
            }
          } else {
            c1_guard1 = true;
          }

          if (c1_guard2) {
            covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 3, false);
            covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 15, false);
          }

          if (c1_guard1) {
            covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 4, false);
            covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 17, false);
          }

          _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
        }

        covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 3, 0);
        _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
      }

      covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 2, 0);
      if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 19,
                         covrtRelationalopUpdateFcn
                         (chartInstance->c1_covrtInstance, 4U, 0U, 21U,
                          chartInstance->c1_local_cond, 1.0, -1, 0U,
                          chartInstance->c1_local_cond == 1.0))) {
        c1_side_decision /= c1_count;
      }

      chartInstance->c1_local_cond = 1.0;
      c1_k = 1.0;
      c1_b_k = 0;
      do {
        c1_exitg1 = 0;
        if (c1_b_k < 2) {
          c1_k = 1.0 + (real_T)c1_b_k;
          covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 4, 1);
          if (c1_k != (real_T)(int32_T)muDoubleScalarFloor(c1_k)) {
            emlrtIntegerCheckR2012b(c1_k, &c1_x_emlrtDCI, &c1_st);
          }

          c1_i28 = (int32_T)c1_k;
          if ((c1_i28 < 1) || (c1_i28 > 1000)) {
            emlrtDynamicBoundsCheckR2012b(c1_i28, 1, 1000, &c1_x_emlrtBCI,
              &c1_st);
          }

          c1_d1 = (real_T)c1_local_area[(c1_i28 - 1) << 1];
          if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 20,
                             covrtRelationalopUpdateFcn
                             (chartInstance->c1_covrtInstance, 4U, 0U, 22U,
                              c1_d1, 0.0, -1, 0U, c1_d1 == 0.0))) {
            c1_exitg1 = 1;
          } else {
            c1_b_k++;
            _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
          }
        } else {
          covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 4, 0);
          c1_exitg1 = 1;
        }
      } while (c1_exitg1 == 0);

      c1_d = c1_k - 1.0;
      c1_b8 = (c1_d < 1.0);
      c1_b9 = c1_b8;
      c1_b10 = false;
      c1_b11 = (c1_b9 || c1_b10);
      if (c1_b11) {
        c1_i37 = 1;
        c1_i38 = 0;
      } else {
        c1_i37 = 1;
        if (c1_d != (real_T)(int32_T)muDoubleScalarFloor(c1_d)) {
          emlrtIntegerCheckR2012b(c1_d, &c1_u_emlrtDCI, &c1_st);
        }

        c1_i39 = (int32_T)c1_d;
        if ((c1_i39 < 1) || (c1_i39 > 1000)) {
          emlrtDynamicBoundsCheckR2012b(c1_i39, 1, 1000, &c1_u_emlrtBCI, &c1_st);
        }

        c1_i38 = c1_i39;
      }

      c1_local_area_new_size[0] = 2;
      c1_local_area_new_size[1] = (c1_i38 - c1_i37) + 1;
      c1_loop_ub = c1_i38 - c1_i37;
      for (c1_i44 = 0; c1_i44 <= c1_loop_ub; c1_i44++) {
        for (c1_i45 = 0; c1_i45 < 2; c1_i45++) {
          c1_local_area_new_data[c1_i45 + (c1_i44 << 1)] = c1_local_area[c1_i45
            + (((c1_i37 + c1_i44) - 1) << 1)];
        }
      }

      c1_b_st.site = &c1_d_emlrtRSI;
      c1_local_find(chartInstance, &c1_b_st, c1_local_area_new_data,
                    c1_local_area_new_size, c1_b_dv);
      for (c1_i46 = 0; c1_i46 < 4; c1_i46++) {
        chartInstance->c1_local_array[c1_i46] = c1_b_dv[c1_i46];
      }

      if (!covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 21,
                          covrtRelationalopUpdateFcn
                          (chartInstance->c1_covrtInstance, 4U, 0U, 23U,
                           c1_side_decision, 0.0, -1, 0U, c1_side_decision ==
                           0.0))) {
        if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 22,
                           covrtRelationalopUpdateFcn
                           (chartInstance->c1_covrtInstance, 4U, 0U, 24U,
                            c1_side_decision, 80.0, -1, 4U, c1_side_decision >
                            80.0))) {
          c1_b_yaw_out = 1.0;
          chartInstance->c1_add_yaw = 1.0;
        } else if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 23,
                    covrtRelationalopUpdateFcn(chartInstance->c1_covrtInstance,
                     4U, 0U, 25U, c1_side_decision, 80.0, -1, 3U,
                     c1_side_decision <= 80.0))) {
          c1_b_yaw_out = -1.0;
          chartInstance->c1_add_yaw = -1.0;
        }
      }
    } else {
      covrtEmlMcdcEval(chartInstance->c1_covrtInstance, 4U, 0, 2, false);
      covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 12, false);
    }
  }

  for (c1_i15 = 0; c1_i15 < 961; c1_i15++) {
    (*chartInstance->c1_center_mat)[c1_i15] = c1_b_center_mat[c1_i15];
  }

  for (c1_i18 = 0; c1_i18 < 19200; c1_i18++) {
    (*chartInstance->c1_b_head_canny_mat)[c1_i18] =
      chartInstance->c1_head_canny_mat[c1_i18];
  }

  for (c1_i20 = 0; c1_i20 < 19200; c1_i20++) {
    (*chartInstance->c1_b_yaw_mat)[c1_i20] = chartInstance->c1_yaw_mat[c1_i20];
  }

  *chartInstance->c1_output_mode = c1_b_output_mode;
  *chartInstance->c1_yaw_out = c1_b_yaw_out;
  c1_do_animation_call_c1_flightControlSystem(chartInstance);
  for (c1_i21 = 0; c1_i21 < 961; c1_i21++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 1U, (real_T)
                      (*chartInstance->c1_center_mat)[c1_i21]);
  }

  for (c1_i23 = 0; c1_i23 < 19200; c1_i23++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 2U,
                      (*chartInstance->c1_b_head_canny_mat)[c1_i23]);
  }

  for (c1_i26 = 0; c1_i26 < 19200; c1_i26++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 3U,
                      (*chartInstance->c1_b_yaw_mat)[c1_i26]);
  }

  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 4U,
                    *chartInstance->c1_output_mode);
  covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 5U,
                    *chartInstance->c1_yaw_out);
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
  const mxArray *c1_st;
  const mxArray *c1_y = NULL;
  c1_st = NULL;
  c1_st = NULL;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_createcellmatrix(9, 1), false);
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", *chartInstance->c1_center_mat, 11,
    0U, 1U, 0U, 2, 31, 31), false);
  sf_mex_setcell(c1_y, 0, c1_b_y);
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y", *chartInstance->c1_b_head_canny_mat,
    0, 0U, 1U, 0U, 2, 120, 160), false);
  sf_mex_setcell(c1_y, 1, c1_c_y);
  c1_d_y = NULL;
  sf_mex_assign(&c1_d_y, sf_mex_create("y", chartInstance->c1_output_mode, 0, 0U,
    0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 2, c1_d_y);
  c1_e_y = NULL;
  sf_mex_assign(&c1_e_y, sf_mex_create("y", *chartInstance->c1_b_yaw_mat, 0, 0U,
    1U, 0U, 2, 120, 160), false);
  sf_mex_setcell(c1_y, 3, c1_e_y);
  c1_f_y = NULL;
  sf_mex_assign(&c1_f_y, sf_mex_create("y", chartInstance->c1_yaw_out, 0, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c1_y, 4, c1_f_y);
  c1_g_y = NULL;
  if (!chartInstance->c1_add_yaw_not_empty) {
    sf_mex_assign(&c1_g_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c1_g_y, sf_mex_create("y", &chartInstance->c1_add_yaw, 0, 0U,
      0U, 0U, 0), false);
  }

  sf_mex_setcell(c1_y, 5, c1_g_y);
  c1_h_y = NULL;
  if (!chartInstance->c1_local_array_not_empty) {
    sf_mex_assign(&c1_h_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c1_h_y, sf_mex_create("y", chartInstance->c1_local_array, 0,
      0U, 1U, 0U, 1, 4), false);
  }

  sf_mex_setcell(c1_y, 6, c1_h_y);
  c1_i_y = NULL;
  if (!chartInstance->c1_add_yaw_not_empty) {
    sf_mex_assign(&c1_i_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c1_i_y, sf_mex_create("y", &chartInstance->c1_local_cond, 0,
      0U, 0U, 0U, 0), false);
  }

  sf_mex_setcell(c1_y, 7, c1_i_y);
  c1_j_y = NULL;
  sf_mex_assign(&c1_j_y, sf_mex_create("y",
    &chartInstance->c1_is_active_c1_flightControlSystem, 3, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c1_y, 8, c1_j_y);
  sf_mex_assign(&c1_st, c1_y, false);
  return c1_st;
}

static void set_sim_state_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance, const mxArray *c1_st)
{
  const mxArray *c1_b_u;
  real_T c1_dv2[4];
  int32_T c1_b_i1;
  int32_T c1_i;
  int32_T c1_i2;
  int32_T c1_i3;
  boolean_T c1_bv[961];
  chartInstance->c1_doneDoubleBufferReInit = true;
  c1_b_u = sf_mex_dup(c1_st);
  c1_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_b_u, 0)),
                      "center_mat", c1_bv);
  for (c1_i = 0; c1_i < 961; c1_i++) {
    (*chartInstance->c1_center_mat)[c1_i] = c1_bv[c1_i];
  }

  c1_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_b_u, 1)),
                        "head_canny_mat", chartInstance->c1_dv);
  for (c1_b_i1 = 0; c1_b_i1 < 19200; c1_b_i1++) {
    (*chartInstance->c1_b_head_canny_mat)[c1_b_i1] = chartInstance->
      c1_dv[c1_b_i1];
  }

  *chartInstance->c1_output_mode = c1_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c1_b_u, 2)), "output_mode");
  c1_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_b_u, 3)),
                        "yaw_mat", chartInstance->c1_dv1);
  for (c1_i2 = 0; c1_i2 < 19200; c1_i2++) {
    (*chartInstance->c1_b_yaw_mat)[c1_i2] = chartInstance->c1_dv1[c1_i2];
  }

  *chartInstance->c1_yaw_out = c1_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_b_u, 4)), "yaw_out");
  chartInstance->c1_add_yaw = c1_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_b_u, 5)), "add_yaw", &chartInstance->c1_add_yaw_not_empty);
  c1_i_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_b_u, 6)),
                        "local_array", &chartInstance->c1_local_array_not_empty,
                        c1_dv2);
  for (c1_i3 = 0; c1_i3 < 4; c1_i3++) {
    chartInstance->c1_local_array[c1_i3] = c1_dv2[c1_i3];
  }

  chartInstance->c1_local_cond = c1_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c1_b_u, 7)), "local_cond",
    &chartInstance->c1_local_cond_not_empty);
  chartInstance->c1_is_active_c1_flightControlSystem = c1_k_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c1_b_u, 8)),
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

  c1_st.site = &c1_e_emlrtRSI;
  c1_b_st.site = &c1_h_emlrtRSI;
  c1_c_st.site = &c1_n_emlrtRSI;
  c1_d_st.site = &c1_p_emlrtRSI;
  for (c1_j = 0; c1_j < 160; c1_j++) {
    c1_b_j = (real_T)c1_j + 1.0;
    for (c1_b_i = 0; c1_b_i < 132; c1_b_i++) {
      c1_d_i = (real_T)c1_b_i + 1.0;
      if ((c1_idxA[(int32_T)c1_d_i - 1] < 1) || (c1_idxA[(int32_T)c1_d_i - 1] >
           120)) {
        emlrtDynamicBoundsCheckR2012b(c1_idxA[(int32_T)c1_d_i - 1], 1, 120,
          &c1_hb_emlrtBCI, &c1_d_st);
      }

      c1_b_i1 = c1_idxA[(int32_T)c1_b_j + 159];
      if ((c1_b_i1 < 1) || (c1_b_i1 > 160)) {
        emlrtDynamicBoundsCheckR2012b(c1_b_i1, 1, 160, &c1_ib_emlrtBCI, &c1_d_st);
      }

      chartInstance->c1_a[((int32_T)c1_d_i + 132 * ((int32_T)c1_b_j - 1)) - 1] =
        chartInstance->c1_c_a[(c1_idxA[(int32_T)c1_d_i - 1] + 120 * (c1_b_i1 - 1))
        - 1];
    }
  }

  c1_c_st.site = &c1_o_emlrtRSI;
  c1_d_st.site = &c1_r_emlrtRSI;
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

  c1_b_st.site = &c1_i_emlrtRSI;
  c1_c_st.site = &c1_n_emlrtRSI;
  c1_d_st.site = &c1_p_emlrtRSI;
  for (c1_c_j = 0; c1_c_j < 172; c1_c_j++) {
    c1_d_j = (real_T)c1_c_j + 1.0;
    for (c1_e_i = 0; c1_e_i < 120; c1_e_i++) {
      c1_g_i = (real_T)c1_e_i + 1.0;
      if ((c1_b_idxA[(int32_T)c1_g_i - 1] < 1) || (c1_b_idxA[(int32_T)c1_g_i - 1]
           > 120)) {
        emlrtDynamicBoundsCheckR2012b(c1_b_idxA[(int32_T)c1_g_i - 1], 1, 120,
          &c1_hb_emlrtBCI, &c1_d_st);
      }

      c1_i10 = c1_b_idxA[(int32_T)c1_d_j + 171];
      if ((c1_i10 < 1) || (c1_i10 > 160)) {
        emlrtDynamicBoundsCheckR2012b(c1_i10, 1, 160, &c1_ib_emlrtBCI, &c1_d_st);
      }

      chartInstance->c1_b_a[((int32_T)c1_g_i + 120 * ((int32_T)c1_d_j - 1)) - 1]
        = chartInstance->c1_i1[(c1_b_idxA[(int32_T)c1_g_i - 1] + 120 * (c1_i10 -
        1)) - 1];
    }
  }

  c1_c_st.site = &c1_o_emlrtRSI;
  c1_d_st.site = &c1_r_emlrtRSI;
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

  c1_b_st.site = &c1_j_emlrtRSI;
  c1_c_st.site = &c1_n_emlrtRSI;
  c1_d_st.site = &c1_p_emlrtRSI;
  for (c1_e_j = 0; c1_e_j < 172; c1_e_j++) {
    c1_f_j = (real_T)c1_e_j + 1.0;
    for (c1_h_i = 0; c1_h_i < 120; c1_h_i++) {
      c1_j_i = (real_T)c1_h_i + 1.0;
      if ((c1_b_idxA[(int32_T)c1_j_i - 1] < 1) || (c1_b_idxA[(int32_T)c1_j_i - 1]
           > 120)) {
        emlrtDynamicBoundsCheckR2012b(c1_b_idxA[(int32_T)c1_j_i - 1], 1, 120,
          &c1_hb_emlrtBCI, &c1_d_st);
      }

      c1_i18 = c1_b_idxA[(int32_T)c1_f_j + 171];
      if ((c1_i18 < 1) || (c1_i18 > 160)) {
        emlrtDynamicBoundsCheckR2012b(c1_i18, 1, 160, &c1_ib_emlrtBCI, &c1_d_st);
      }

      chartInstance->c1_b_a[((int32_T)c1_j_i + 120 * ((int32_T)c1_f_j - 1)) - 1]
        = chartInstance->c1_c_a[(c1_b_idxA[(int32_T)c1_j_i - 1] + 120 * (c1_i18
        - 1)) - 1];
    }
  }

  c1_c_st.site = &c1_o_emlrtRSI;
  c1_d_st.site = &c1_r_emlrtRSI;
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

  c1_b_st.site = &c1_k_emlrtRSI;
  c1_c_st.site = &c1_n_emlrtRSI;
  c1_d_st.site = &c1_p_emlrtRSI;
  for (c1_g_j = 0; c1_g_j < 160; c1_g_j++) {
    c1_h_j = (real_T)c1_g_j + 1.0;
    for (c1_k_i = 0; c1_k_i < 132; c1_k_i++) {
      c1_m_i = (real_T)c1_k_i + 1.0;
      if ((c1_idxA[(int32_T)c1_m_i - 1] < 1) || (c1_idxA[(int32_T)c1_m_i - 1] >
           120)) {
        emlrtDynamicBoundsCheckR2012b(c1_idxA[(int32_T)c1_m_i - 1], 1, 120,
          &c1_hb_emlrtBCI, &c1_d_st);
      }

      c1_i27 = c1_idxA[(int32_T)c1_h_j + 159];
      if ((c1_i27 < 1) || (c1_i27 > 160)) {
        emlrtDynamicBoundsCheckR2012b(c1_i27, 1, 160, &c1_ib_emlrtBCI, &c1_d_st);
      }

      chartInstance->c1_a[((int32_T)c1_m_i + 132 * ((int32_T)c1_h_j - 1)) - 1] =
        c1_b_i2[(c1_idxA[(int32_T)c1_m_i - 1] + 120 * (c1_i27 - 1)) - 1];
    }
  }

  c1_c_st.site = &c1_o_emlrtRSI;
  c1_d_st.site = &c1_r_emlrtRSI;
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

  c1_st.site = &c1_f_emlrtRSI;
  c1_b_st.site = &c1_v_emlrtRSI;
  c1_c_st.site = &c1_w_emlrtRSI;
  c1_d_st.site = &c1_x_emlrtRSI;
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
    c1_d_st.site = &c1_y_emlrtRSI;
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

  c1_st.site = &c1_g_emlrtRSI;
  c1_i40 = 1;
  if ((c1_i40 < 1) || (c1_i40 > c1_lowThresh_size[0])) {
    emlrtDynamicBoundsCheckR2012b(c1_i40, 1, c1_lowThresh_size[0],
      &c1_fb_emlrtBCI, &c1_st);
  }

  c1_b_st.site = &c1_bb_emlrtRSI;
  c1_lowThresh = c1_lowThresh_data[0];
  c1_c_st.site = &c1_db_emlrtRSI;
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
      &c1_gb_emlrtBCI, &c1_st);
  }

  c1_highThresh = c1_highThresh_data[0];
  for (c1_i44 = 0; c1_i44 < 19200; c1_i44++) {
    c1_varargout_1[c1_i44] = ((real_T)chartInstance->c1_c_a[c1_i44] >
      c1_highThresh);
  }

  c1_b_st.site = &c1_cb_emlrtRSI;
  c1_c_st.site = &c1_eb_emlrtRSI;
  for (c1_i45 = 0; c1_i45 < 2; c1_i45++) {
    c1_connDimsT[c1_i45] = 120.0 + 40.0 * (real_T)c1_i45;
  }

  ippreconstruct_uint8((uint8_T *)&c1_varargout_1[0], (uint8_T *)&c1_E[0],
                       &c1_connDimsT[0], 2.0);
  c1_i46 = 1;
  if ((c1_i46 < 1) || (c1_i46 > c1_lowThresh_size[0])) {
    emlrtDynamicBoundsCheckR2012b(c1_i46, 1, c1_lowThresh_size[0],
      &c1_db_emlrtBCI, (emlrtConstCTX)c1_sp);
  }

  c1_i47 = 1;
  if ((c1_i47 < 1) || (c1_i47 > c1_highThresh_size[0])) {
    emlrtDynamicBoundsCheckR2012b(c1_i47, 1, c1_highThresh_size[0],
      &c1_eb_emlrtBCI, (emlrtConstCTX)c1_sp);
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
  c1_st.site = &c1_ab_emlrtRSI;
  c1_b_feval(chartInstance, &c1_st, c1_y, c1_feval(chartInstance, &c1_st, c1_b_y,
              c1_c_y));
}

static int32_T c1_intnnz(SFc1_flightControlSystemInstanceStruct *chartInstance,
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

static boolean_T c1_isequal(SFc1_flightControlSystemInstanceStruct
  *chartInstance, boolean_T c1_varargin_2[93])
{
  real_T c1_b_k;
  int32_T c1_k;
  boolean_T c1_b_p;
  boolean_T c1_c_p;
  boolean_T c1_exitg1;
  boolean_T c1_p;
  boolean_T c1_x2;
  (void)chartInstance;
  c1_p = false;
  c1_b_p = true;
  c1_k = 0;
  c1_exitg1 = false;
  while ((!c1_exitg1) && (c1_k < 93)) {
    c1_b_k = (real_T)c1_k + 1.0;
    c1_x2 = c1_varargin_2[(int32_T)c1_b_k - 1];
    c1_c_p = c1_x2;
    if (!c1_c_p) {
      c1_b_p = false;
      c1_exitg1 = true;
    } else {
      c1_k++;
    }
  }

  if (c1_b_p) {
    c1_p = true;
  }

  return c1_p;
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
  uint8_T c1_varargin_1_data[1];
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
  c1_st.site = &c1_fb_emlrtRSI;
  c1_varargin_1_size[0] = 1;
  c1_varargin_1_size[1] = c1_local_array_data_size[1];
  c1_loop_ub = c1_local_array_data_size[1] - 1;
  c1_i = 0;
  for (c1_b_i1 = 0; c1_b_i1 <= c1_loop_ub; c1_b_i1++) {
    c1_varargin_1_data[c1_b_i1] = c1_local_array_data_data[c1_i];
    c1_i += 2;
  }

  c1_b_st.site = &c1_jb_emlrtRSI;
  c1_c_st.site = &c1_kb_emlrtRSI;
  c1_minval = c1_minimum(chartInstance, &c1_c_st, c1_varargin_1_data,
    c1_varargin_1_size);
  c1_q0 = c1_minval;
  c1_qY = c1_q0 - 5U;
  c1_covSaturation = false;
  if (c1_qY > c1_q0) {
    c1_covSaturation = true;
    c1_qY = 0U;
    sf_data_saturate_error(chartInstance->S, 1U, 6031, 38);
  }

  c1_b_u = c1_qY;
  if (c1_b_u > 255U) {
    c1_covSaturation = true;
    c1_b_u = 255U;
    sf_data_saturate_error(chartInstance->S, 1U, 6031, 38);
  }

  covrtSaturationUpdateFcn(chartInstance->c1_covrtInstance, 4, 0, 4, 0,
    c1_covSaturation);
  c1_b_local_array[0] = (real_T)(uint8_T)c1_b_u;
  c1_st.site = &c1_gb_emlrtRSI;
  c1_varargin_1_size[0] = 1;
  c1_varargin_1_size[1] = c1_local_array_data_size[1];
  c1_b_loop_ub = c1_local_array_data_size[1] - 1;
  c1_i2 = 0;
  for (c1_i3 = 0; c1_i3 <= c1_b_loop_ub; c1_i3++) {
    c1_varargin_1_data[c1_i3] = c1_local_array_data_data[c1_i2];
    c1_i2 += 2;
  }

  c1_b_st.site = &c1_mb_emlrtRSI;
  c1_c_st.site = &c1_nb_emlrtRSI;
  c1_maxval = c1_maximum(chartInstance, &c1_c_st, c1_varargin_1_data,
    c1_varargin_1_size);
  c1_u1 = (uint32_T)c1_maxval + 5U;
  c1_b_covSaturation = false;
  if (c1_u1 > 255U) {
    c1_b_covSaturation = true;
    c1_u1 = 255U;
    sf_data_saturate_error(chartInstance->S, 1U, 6127, 38);
  }

  covrtSaturationUpdateFcn(chartInstance->c1_covrtInstance, 4, 0, 5, 0,
    c1_b_covSaturation);
  c1_b_local_array[1] = (real_T)(uint8_T)c1_u1;
  c1_st.site = &c1_hb_emlrtRSI;
  c1_varargin_1_size[0] = 1;
  c1_varargin_1_size[1] = c1_local_array_data_size[1];
  c1_c_loop_ub = c1_local_array_data_size[1] - 1;
  c1_i4 = 0;
  for (c1_i5 = 0; c1_i5 <= c1_c_loop_ub; c1_i5++) {
    c1_varargin_1_data[c1_i5] = c1_local_array_data_data[c1_i4 + 1];
    c1_i4 += 2;
  }

  c1_b_st.site = &c1_jb_emlrtRSI;
  c1_c_st.site = &c1_kb_emlrtRSI;
  c1_b_minval = c1_minimum(chartInstance, &c1_c_st, c1_varargin_1_data,
    c1_varargin_1_size);
  c1_b_q0 = c1_b_minval;
  c1_b_qY = c1_b_q0 - 5U;
  c1_c_covSaturation = false;
  if (c1_b_qY > c1_b_q0) {
    c1_c_covSaturation = true;
    c1_b_qY = 0U;
    sf_data_saturate_error(chartInstance->S, 1U, 6198, 38);
  }

  c1_u2 = c1_b_qY;
  if (c1_u2 > 255U) {
    c1_c_covSaturation = true;
    c1_u2 = 255U;
    sf_data_saturate_error(chartInstance->S, 1U, 6198, 38);
  }

  covrtSaturationUpdateFcn(chartInstance->c1_covrtInstance, 4, 0, 6, 0,
    c1_c_covSaturation);
  c1_b_local_array[2] = (real_T)(uint8_T)c1_u2;
  c1_st.site = &c1_ib_emlrtRSI;
  c1_varargin_1_size[0] = 1;
  c1_varargin_1_size[1] = c1_local_array_data_size[1];
  c1_d_loop_ub = c1_local_array_data_size[1] - 1;
  c1_i6 = 0;
  for (c1_i7 = 0; c1_i7 <= c1_d_loop_ub; c1_i7++) {
    c1_varargin_1_data[c1_i7] = c1_local_array_data_data[c1_i6 + 1];
    c1_i6 += 2;
  }

  c1_b_st.site = &c1_mb_emlrtRSI;
  c1_c_st.site = &c1_nb_emlrtRSI;
  c1_b_maxval = c1_maximum(chartInstance, &c1_c_st, c1_varargin_1_data,
    c1_varargin_1_size);
  c1_u3 = (uint32_T)c1_b_maxval + 5U;
  c1_d_covSaturation = false;
  if (c1_u3 > 255U) {
    c1_d_covSaturation = true;
    c1_u3 = 255U;
    sf_data_saturate_error(chartInstance->S, 1U, 6269, 38);
  }

  covrtSaturationUpdateFcn(chartInstance->c1_covrtInstance, 4, 0, 7, 0,
    c1_d_covSaturation);
  c1_b_local_array[3] = (real_T)(uint8_T)c1_u3;
}

static uint8_T c1_minimum(SFc1_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c1_sp, uint8_T c1_x_data[], int32_T c1_x_size[2])
{
  emlrtStack c1_st;
  const mxArray *c1_b_y = NULL;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_d_y = NULL;
  const mxArray *c1_y = NULL;
  uint8_T c1_b_x_data[1];
  boolean_T c1_b;
  boolean_T c1_b1;
  (void)chartInstance;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_st.site = &c1_lb_emlrtRSI;
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
    sf_mex_call(&c1_st, &c1_c_emlrtMCI, "error", 0U, 2U, 14, c1_y, 14,
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
    sf_mex_call(&c1_st, &c1_d_emlrtMCI, "error", 0U, 2U, 14, c1_b_y, 14,
                sf_mex_call(&c1_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c1_st, NULL, "message", 1U, 1U, 14, c1_d_y)));
  }

  c1_b_x_data[0] = c1_x_data[0];
  return c1_b_x_data[0];
}

static uint8_T c1_maximum(SFc1_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c1_sp, uint8_T c1_x_data[], int32_T c1_x_size[2])
{
  emlrtStack c1_st;
  const mxArray *c1_b_y = NULL;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_d_y = NULL;
  const mxArray *c1_y = NULL;
  uint8_T c1_b_x_data[1];
  boolean_T c1_b;
  boolean_T c1_b1;
  (void)chartInstance;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_st.site = &c1_ob_emlrtRSI;
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
    sf_mex_call(&c1_st, &c1_c_emlrtMCI, "error", 0U, 2U, 14, c1_y, 14,
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
    sf_mex_call(&c1_st, &c1_d_emlrtMCI, "error", 0U, 2U, 14, c1_b_y, 14,
                sf_mex_call(&c1_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c1_st, NULL, "message", 1U, 1U, 14, c1_d_y)));
  }

  c1_b_x_data[0] = c1_x_data[0];
  return c1_b_x_data[0];
}

static void c1_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_center_mat, const char_T *c1_identifier,
  boolean_T c1_y[961])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_center_mat), &c1_thisId,
                        c1_y);
  sf_mex_destroy(&c1_b_center_mat);
}

static void c1_b_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
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

static void c1_c_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_c_head_canny_mat, const char_T
  *c1_identifier, real_T c1_y[19200])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_c_head_canny_mat),
                        &c1_thisId, c1_y);
  sf_mex_destroy(&c1_c_head_canny_mat);
}

static void c1_d_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
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

static real_T c1_e_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_output_mode, const char_T *c1_identifier)
{
  emlrtMsgIdentifier c1_thisId;
  real_T c1_y;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_output_mode),
    &c1_thisId);
  sf_mex_destroy(&c1_b_output_mode);
  return c1_y;
}

static real_T c1_f_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
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

static real_T c1_g_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_add_yaw, const char_T *c1_identifier,
  boolean_T *c1_svPtr)
{
  emlrtMsgIdentifier c1_thisId;
  real_T c1_y;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_add_yaw),
    &c1_thisId, c1_svPtr);
  sf_mex_destroy(&c1_b_add_yaw);
  return c1_y;
}

static real_T c1_h_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
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

static void c1_i_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_local_array, const char_T *c1_identifier,
  boolean_T *c1_svPtr, real_T c1_y[4])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_local_array), &c1_thisId,
                        c1_svPtr, c1_y);
  sf_mex_destroy(&c1_b_local_array);
}

static void c1_j_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
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

static uint8_T c1_k_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_b_is_active_c1_flightControlSystem, const
  char_T *c1_identifier)
{
  emlrtMsgIdentifier c1_thisId;
  uint8_T c1_y;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_l_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c1_b_is_active_c1_flightControlSystem), &c1_thisId);
  sf_mex_destroy(&c1_b_is_active_c1_flightControlSystem);
  return c1_y;
}

static uint8_T c1_l_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
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
    *c1_isValueTooBig = 1U;
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
  chartInstance->c1_b_head_canny_mat = (real_T (*)[19200])
    ssGetOutputPortSignal_wrapper(chartInstance->S, 2);
  chartInstance->c1_b_yaw_mat = (real_T (*)[19200])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c1_output_mode = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c1_yaw_out = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 5);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c1_flightControlSystem_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(536200373U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3150366336U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(507075309U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2133860028U);
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
    "eNrllUFLwzAYhtMyp5tQevDooWcRwZs3A556EARBEIQQk8wV2qS0mdqbP9Gf4k8wabKtxOKKLax"
    "g4CN9P3i/5ulLW+DFt0CtQFU4B2Cq9iNVPjDrwGpP1czupj/Z9CNVssqZ7pcFianaOc5qjVfvMV"
    "+Iev4V2M6ftsz3GvNntm/W13U//wnUftjwT1r884Y/tJowLlmBMixNPwDbfX88p514AodH6yXDF"
    "BHMeWWYxsFz1onn2OHRWqxkvpIoE5SNKJ8L6PrbeA4dHq0r/FYHMw6O814cKpuBOELYz//z/l05"
    "MKVIsdT+T/D799Fzvo++1dqTggTk9hxwB4fvcIRriAhDc/E8yPMYSy5/ee9TQXCKcFHgajNn7/n"
    "AJ5sP+lf5tP03TT5EcArGk8/Hg83ncST5RIOc425HPpGTj9ZJiTCRyStD5BIt0uRlKW8El4VI76"
    "tSsmzN9w1amFxi"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c1_flightControlSystem_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sUFBBxaDUFX6ekBduQGL0pB";
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
    "eNrtWctuI0UUrUSZQCYzURZo2IxE2CE0oCAQYqQROH4NlhwSaCc8hGRVuq/dJVdX9VRV2zFCiAV",
    "fwIJv4DP4BJYsQCz4AZYsudXd9lgdk3TZQTEztOR0yva5t859V5ustQ4JXjv4+vFVQjbx/iK+1k",
    "l23crXazOv7P0N8ihff71NiC8D6IPwkl6PnRO3SyTRMVU00sT9EjSCT0BLnhgmRUv0ZHksEz1QI",
    "HwUEEtlnPRqFiWciUEzEb7VrD8NmR96oUx4UEWBNDgSfPxPeuPEHKPGOlPgmyZAYEIlk37Y5LR/",
    "uRWUGdVC8Ac6iZxtpcF4SWyp6sOEGxZzaJyD3xLaULSCvoKvZ6iBmjl3M7Llq70JWkYxZ1SUt3V",
    "ItQcxRoeBkzjAv0eJQeuVwvohVaYKIR2CbrNBql0KKKWdafz2GRPUSMUob0S8ZqWV5HvMkeMhpg",
    "R39RHyrSqgg1gyYRwTwmuinRuCnnGow1nSd9TrwZPEZsMpgxEoN//2anIIivbhSLjtOfVR4zwNy",
    "mkulcQaFsEpVQc+xq6GwK1uYNJpj2I4QgfFOGEhNXFLdxQbYmy41rqWTf+Fal0SZdGvF8KmehtD",
    "cI6rqd6mL2qUc+2G7ci4DUPgqf46NXQBbKbfAaw1CzoSo8NWG8eKlQiGmZBja1IErHxUDguotLF",
    "9hE2qBJxFNg0gQDNPtz4VdFUeJdrIqIYlp95ul9R3EdsSBlSP+lC6xyjKNOCG07hy1BswbRMJ0W",
    "glk7IsLSHLwYWgRPcSUR9JNUAbuzazp7aymeCGhqCPhdlAWuQaGN2nlCcl9xzpPuYPhseJxirrp",
    "hexNn8WAvvUDyGwnZNxOMQ6iwLKuljbln+AbIfMjOugfcXispmUYEHHpmut1BnHcCIGQo5EU8nI",
    "yyevS+IKAKsGVYKJfhVbuBo3cfPldq3gSSet7q5DjrUzNZye2dh4DAK7oeVqpwbqY1Y1BI7IuKF",
    "lsB77CocYoZk22KjHWavP+p6d3z8kT+f3jTnz+72Z+X03X/tvdXuc9UNbaIyS3Buj7CiTtz8j70",
    "6J88BkH5fhyAUcmeIm99dm8Gtz9JKZe1Hf1vrl+1zH/9ZyXGUGd7egZ6OA28xtNvr1rvy9Pvrum",
    "x8e/PHb9p3vl9H/022389ZOvr4/mZumVXp4oZCViYeXC/Fg1/qkWa2e0/pJ87N3YVANko8ft/fj",
    "aipv94r9bhX2O3l/z85qmMRpTVB+K8jPbXZNk+w8YeW/N7PfzSvssTUTT4T8+cFy+JcqxXiYZ6/",
    "bBXvZtQ+2ZXYxfS/G8c3xuV+Kz06Bj12HeHLt+lSIccZpNfi8XorPdoGPXct0cOxGWFhXyD9vVo",
    "r4eXxeKPCx6zEdpY5ZDR4PluKBvrkmHruV5fAX9ZflQYOgi1xS/M/ErZ6v52uL4YSReE5fmsdjv",
    "cBjd0Jij1ayf86uxR6r4pdF8p5Ln/IuVYqOp3Ju3D+VL3P/dJ8r/8zrm5l/fDzdktXxz7enuX8+",
    "XxH/7F3LPo6v8M9ewT976TO9LrUnN+jOPyHsXMP87Yoj/+NWArf2HPIrc/5dFHeL/Hvn7evELcv",
    "P9Vz/X//+/iV1lxS+v7vCPIr3RZ/vrBqvXxznjVfy9fvT3xdqIePBnCec+cdtoL15nz4j8f2Xo/",
    "0mz5sa1n75D9FfvH0gKB9rlj2enbx9rOzvidOPFFA9/7nxTfSTZc4lIyYCOdJvPHzn4VL96W91i",
    "l4P",
    ""
  };

  static char newstr [1729] = "";
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
  ssSetChecksum0(S,(1863179383U));
  ssSetChecksum1(S,(2222408927U));
  ssSetChecksum2(S,(3811350142U));
  ssSetChecksum3(S,(2450263005U));
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
