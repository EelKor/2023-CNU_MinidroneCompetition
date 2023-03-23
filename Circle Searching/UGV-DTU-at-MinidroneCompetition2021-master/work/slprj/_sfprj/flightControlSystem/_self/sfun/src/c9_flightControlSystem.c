/* Include files */

#include "flightControlSystem_sfun.h"
#include "c9_flightControlSystem.h"
#include <string.h>
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
static emlrtMCInfo c9_emlrtMCI = { 87, /* lineNo */
  33,                                  /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo c9_b_emlrtMCI = { 122,/* lineNo */
  5,                                   /* colNo */
  "indexShapeCheck",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pName */
};

static emlrtMCInfo c9_c_emlrtMCI = { 42,/* lineNo */
  19,                                  /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtMCInfo c9_d_emlrtMCI = { 32,/* lineNo */
  23,                                  /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtMCInfo c9_e_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatenonnan",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnan.m"/* pName */
};

static emlrtMCInfo c9_f_emlrtMCI = { 13,/* lineNo */
  13,                                  /* colNo */
  "toLogicalCheck",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\toLogicalCheck.m"/* pName */
};

static emlrtMCInfo c9_g_emlrtMCI = { 1442,/* lineNo */
  5,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtMCInfo c9_h_emlrtMCI = { 47,/* lineNo */
  5,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtMCInfo c9_i_emlrtMCI = { 58,/* lineNo */
  23,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo c9_j_emlrtMCI = { 64,/* lineNo */
  15,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo c9_k_emlrtMCI = { 40,/* lineNo */
  15,                                  /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtMCInfo c9_l_emlrtMCI = { 285,/* lineNo */
  27,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtMCInfo c9_m_emlrtMCI = { 46,/* lineNo */
  23,                                  /* colNo */
  "sumprod",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"/* pName */
};

static emlrtMCInfo c9_n_emlrtMCI = { 81,/* lineNo */
  27,                                  /* colNo */
  "nullAssignment",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pName */
};

static emlrtMCInfo c9_o_emlrtMCI = { 296,/* lineNo */
  1,                                   /* colNo */
  "nullAssignment",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pName */
};

static emlrtMCInfo c9_p_emlrtMCI = { 81,/* lineNo */
  1,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtMCInfo c9_q_emlrtMCI = { 392,/* lineNo */
  1,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtMCInfo c9_r_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatepositive",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatepositive.m"/* pName */
};

static emlrtMCInfo c9_s_emlrtMCI = { 13,/* lineNo */
  37,                                  /* colNo */
  "validatenonempty",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonempty.m"/* pName */
};

static emlrtMCInfo c9_t_emlrtMCI = { 18,/* lineNo */
  23,                                  /* colNo */
  "validatencols",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatencols.m"/* pName */
};

static emlrtMCInfo c9_u_emlrtMCI = { 72,/* lineNo */
  1,                                   /* colNo */
  "chradiiphcode",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"/* pName */
};

static emlrtMCInfo c9_v_emlrtMCI = { 47,/* lineNo */
  19,                                  /* colNo */
  "allOrAny",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"/* pName */
};

static emlrtRSInfo c9_emlrtRSI = { 26, /* lineNo */
  "Image Processing System/CircleDetect",/* fcnName */
  "#flightControlSystem:2709"          /* pathName */
};

static emlrtRSInfo c9_b_emlrtRSI = { 47,/* lineNo */
  "Image Processing System/CircleDetect",/* fcnName */
  "#flightControlSystem:2709"          /* pathName */
};

static emlrtRSInfo c9_c_emlrtRSI = { 205,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c9_d_emlrtRSI = { 106,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c9_e_emlrtRSI = { 110,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c9_f_emlrtRSI = { 854,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c9_g_emlrtRSI = { 928,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c9_h_emlrtRSI = { 1002,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c9_i_emlrtRSI = { 1030,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c9_j_emlrtRSI = { 1042,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c9_k_emlrtRSI = { 163,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c9_l_emlrtRSI = { 164,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c9_m_emlrtRSI = { 33,/* lineNo */
  "imfindcircles",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfindcircles.m"/* pathName */
};

static emlrtRSInfo c9_n_emlrtRSI = { 43,/* lineNo */
  "imfindcircles",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfindcircles.m"/* pathName */
};

static emlrtRSInfo c9_o_emlrtRSI = { 51,/* lineNo */
  "imfindcircles",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfindcircles.m"/* pathName */
};

static emlrtRSInfo c9_p_emlrtRSI = { 69,/* lineNo */
  "imfindcircles",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfindcircles.m"/* pathName */
};

static emlrtRSInfo c9_q_emlrtRSI = { 24,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c9_r_emlrtRSI = { 28,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c9_s_emlrtRSI = { 31,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c9_t_emlrtRSI = { 32,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c9_u_emlrtRSI = { 78,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c9_v_emlrtRSI = { 139,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c9_w_emlrtRSI = { 184,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c9_x_emlrtRSI = { 35,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c9_y_emlrtRSI = { 138,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c9_ab_emlrtRSI = { 255,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c9_bb_emlrtRSI = { 254,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c9_cb_emlrtRSI = { 253,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c9_db_emlrtRSI = { 42,/* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtRSInfo c9_eb_emlrtRSI = { 16,/* lineNo */
  "sub2ind",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pathName */
};

static emlrtRSInfo c9_fb_emlrtRSI = { 28,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo c9_gb_emlrtRSI = { 125,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo c9_hb_emlrtRSI = { 328,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo c9_ib_emlrtRSI = { 20,/* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo c9_jb_emlrtRSI = { 150,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c9_kb_emlrtRSI = { 58,/* lineNo */
  "medfilt2",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\medfilt2.m"/* pathName */
};

static emlrtRSInfo c9_lb_emlrtRSI = { 155,/* lineNo */
  "ordfilt2",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\ordfilt2.m"/* pathName */
};

static emlrtRSInfo c9_mb_emlrtRSI = { 179,/* lineNo */
  "ordfilt2",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\ordfilt2.m"/* pathName */
};

static emlrtRSInfo c9_nb_emlrtRSI = { 29,/* lineNo */
  "chcenters",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pathName */
};

static emlrtRSInfo c9_ob_emlrtRSI = { 34,/* lineNo */
  "chcenters",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pathName */
};

static emlrtRSInfo c9_pb_emlrtRSI = { 35,/* lineNo */
  "chcenters",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pathName */
};

static emlrtRSInfo c9_qb_emlrtRSI = { 36,/* lineNo */
  "chcenters",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pathName */
};

static emlrtRSInfo c9_rb_emlrtRSI = { 48,/* lineNo */
  "chcenters",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pathName */
};

static emlrtRSInfo c9_sb_emlrtRSI = { 53,/* lineNo */
  "chcenters",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pathName */
};

static emlrtRSInfo c9_tb_emlrtRSI = { 55,/* lineNo */
  "chcenters",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pathName */
};

static emlrtRSInfo c9_ub_emlrtRSI = { 66,/* lineNo */
  "imhmax",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\imhmax.m"/* pathName */
};

static emlrtRSInfo c9_vb_emlrtRSI = { 10,/* lineNo */
  "imreconstruct",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imreconstruct.m"/* pathName */
};

static emlrtRSInfo c9_wb_emlrtRSI = { 14,/* lineNo */
  "imreconstruct",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imreconstruct.m"/* pathName */
};

static emlrtRSInfo c9_xb_emlrtRSI = { 76,/* lineNo */
  "imreconstruct",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imreconstruct.m"/* pathName */
};

static emlrtRSInfo c9_yb_emlrtRSI = { 93,/* lineNo */
  "validateattributes",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo c9_ac_emlrtRSI = { 14,/* lineNo */
  "imregionalmax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imregionalmax.m"/* pathName */
};

static emlrtRSInfo c9_bc_emlrtRSI = { 35,/* lineNo */
  "imregionalmax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imregionalmax.m"/* pathName */
};

static emlrtRSInfo c9_cc_emlrtRSI = { 37,/* lineNo */
  "imregionalmax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imregionalmax.m"/* pathName */
};

static emlrtRSInfo c9_dc_emlrtRSI = { 41,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c9_ec_emlrtRSI = { 97,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c9_fc_emlrtRSI = { 99,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c9_gc_emlrtRSI = { 304,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c9_hc_emlrtRSI = { 306,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c9_ic_emlrtRSI = { 368,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c9_jc_emlrtRSI = { 79,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c9_kc_emlrtRSI = { 71,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c9_lc_emlrtRSI = { 70,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c9_mc_emlrtRSI = { 69,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c9_nc_emlrtRSI = { 57,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c9_oc_emlrtRSI = { 44,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c9_pc_emlrtRSI = { 23,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c9_qc_emlrtRSI = { 51,/* lineNo */
  "intermediateLabelRuns",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pathName */
};

static emlrtRSInfo c9_rc_emlrtRSI = { 114,/* lineNo */
  "intermediateLabelRuns",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pathName */
};

static emlrtRSInfo c9_sc_emlrtRSI = { 149,/* lineNo */
  "intermediateLabelRuns",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pathName */
};

static emlrtRSInfo c9_tc_emlrtRSI = { 150,/* lineNo */
  "intermediateLabelRuns",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pathName */
};

static emlrtRSInfo c9_uc_emlrtRSI = { 153,/* lineNo */
  "intermediateLabelRuns",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pathName */
};

static emlrtRSInfo c9_vc_emlrtRSI = { 20,/* lineNo */
  "sum",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"/* pathName */
};

static emlrtRSInfo c9_wc_emlrtRSI = { 99,/* lineNo */
  "sumprod",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"/* pathName */
};

static emlrtRSInfo c9_xc_emlrtRSI = { 74,/* lineNo */
  "combineVectorElements",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorElements.m"/* pathName */
};

static emlrtRSInfo c9_yc_emlrtRSI = { 107,/* lineNo */
  "blockedSummation",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blockedSummation.m"/* pathName */
};

static emlrtRSInfo c9_ad_emlrtRSI = { 22,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c9_bd_emlrtRSI = { 42,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c9_cd_emlrtRSI = { 57,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c9_dd_emlrtRSI = { 178,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c9_ed_emlrtRSI = { 182,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c9_fd_emlrtRSI = { 184,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c9_gd_emlrtRSI = { 189,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c9_hd_emlrtRSI = { 210,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c9_id_emlrtRSI = { 14,/* lineNo */
  "cumsum",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\cumsum.m"/* pathName */
};

static emlrtRSInfo c9_jd_emlrtRSI = { 16,/* lineNo */
  "cumop",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop.m"/* pathName */
};

static emlrtRSInfo c9_kd_emlrtRSI = { 32,/* lineNo */
  "useConstantDim",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\useConstantDim.m"/* pathName */
};

static emlrtRSInfo c9_ld_emlrtRSI = { 99,/* lineNo */
  "cumop",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop.m"/* pathName */
};

static emlrtRSInfo c9_md_emlrtRSI = { 124,/* lineNo */
  "cumop",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop.m"/* pathName */
};

static emlrtRSInfo c9_nd_emlrtRSI = { 289,/* lineNo */
  "cumop",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop.m"/* pathName */
};

static emlrtRSInfo c9_od_emlrtRSI = { 1454,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c9_pd_emlrtRSI = { 1639,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c9_qd_emlrtRSI = { 28,/* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtRSInfo c9_rd_emlrtRSI = { 2011,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c9_sd_emlrtRSI = { 466,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c9_td_emlrtRSI = { 1324,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c9_ud_emlrtRSI = { 1315,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c9_vd_emlrtRSI = { 1310,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c9_wd_emlrtRSI = { 1307,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c9_xd_emlrtRSI = { 944,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c9_yd_emlrtRSI = { 942,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c9_ae_emlrtRSI = { 19,/* lineNo */
  "ind2sub",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pathName */
};

static emlrtRSInfo c9_be_emlrtRSI = { 36,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo c9_ce_emlrtRSI = { 110,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo c9_de_emlrtRSI = { 1293,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c9_ee_emlrtRSI = { 22,/* lineNo */
  "nullAssignment",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pathName */
};

static emlrtRSInfo c9_fe_emlrtRSI = { 26,/* lineNo */
  "nullAssignment",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pathName */
};

static emlrtRSInfo c9_ge_emlrtRSI = { 273,/* lineNo */
  "nullAssignment",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pathName */
};

static emlrtRSInfo c9_he_emlrtRSI = { 274,/* lineNo */
  "nullAssignment",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pathName */
};

static emlrtRSInfo c9_ie_emlrtRSI = { 10,/* lineNo */
  "round",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elfun\\round.m"/* pathName */
};

static emlrtRSInfo c9_je_emlrtRSI = { 33,/* lineNo */
  "applyScalarFunctionInPlace",        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunctionInPlace.m"/* pathName */
};

static emlrtRSInfo c9_ke_emlrtRSI = { 27,/* lineNo */
  "sort",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m"/* pathName */
};

static emlrtRSInfo c9_le_emlrtRSI = { 72,/* lineNo */
  "sort",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"/* pathName */
};

static emlrtRSInfo c9_me_emlrtRSI = { 104,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c9_ne_emlrtRSI = { 105,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c9_oe_emlrtRSI = { 308,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c9_pe_emlrtRSI = { 316,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c9_qe_emlrtRSI = { 317,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c9_re_emlrtRSI = { 325,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c9_se_emlrtRSI = { 333,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c9_te_emlrtRSI = { 340,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c9_ue_emlrtRSI = { 392,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c9_ve_emlrtRSI = { 420,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c9_we_emlrtRSI = { 427,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c9_xe_emlrtRSI = { 587,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c9_ye_emlrtRSI = { 589,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c9_af_emlrtRSI = { 617,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c9_bf_emlrtRSI = { 499,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c9_cf_emlrtRSI = { 506,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c9_df_emlrtRSI = { 507,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c9_ef_emlrtRSI = { 514,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c9_ff_emlrtRSI = { 561,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c9_gf_emlrtRSI = { 530,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c9_hf_emlrtRSI = { 354,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c9_if_emlrtRSI = { 363,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c9_jf_emlrtRSI = { 39,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c9_kf_emlrtRSI = { 144,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c9_lf_emlrtRSI = { 382,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c9_mf_emlrtRSI = { 402,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c9_nf_emlrtRSI = { 14,/* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo c9_of_emlrtRSI = { 6,/* lineNo */
  "chradiiphcode",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"/* pathName */
};

static emlrtRSInfo c9_pf_emlrtRSI = { 14,/* lineNo */
  "chradiiphcode",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"/* pathName */
};

static emlrtRSInfo c9_qf_emlrtRSI = { 16,/* lineNo */
  "chradiiphcode",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"/* pathName */
};

static emlrtRSInfo c9_rf_emlrtRSI = { 32,/* lineNo */
  "chradiiphcode",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"/* pathName */
};

static emlrtRSInfo c9_sf_emlrtRSI = { 35,/* lineNo */
  "chradiiphcode",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"/* pathName */
};

static emlrtRSInfo c9_tf_emlrtRSI = { 44,/* lineNo */
  "chradiiphcode",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"/* pathName */
};

static emlrtRSInfo c9_uf_emlrtRSI = { 72,/* lineNo */
  "chradiiphcode",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"/* pathName */
};

static emlrtRSInfo c9_vf_emlrtRSI = { 73,/* lineNo */
  "chradiiphcode",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"/* pathName */
};

static emlrtRSInfo c9_wf_emlrtRSI = { 13,/* lineNo */
  "all",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\all.m"/* pathName */
};

static emlrtRSInfo c9_xf_emlrtRSI = { 143,/* lineNo */
  "allOrAny",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"/* pathName */
};

static emlrtRSInfo c9_yf_emlrtRSI = { 9,/* lineNo */
  "angle",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elfun\\angle.m"/* pathName */
};

static emlrtRSInfo c9_ag_emlrtRSI = { 74,/* lineNo */
  "applyScalarFunction",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunction.m"/* pathName */
};

static emlrtRSInfo c9_bg_emlrtRSI = { 10,/* lineNo */
  "exp",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elfun\\exp.m"/* pathName */
};

static emlrtRTEInfo c9_emlrtRTEI = { 43,/* lineNo */
  6,                                   /* colNo */
  "imfindcircles",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfindcircles.m"/* pName */
};

static emlrtRTEInfo c9_b_emlrtRTEI = { 51,/* lineNo */
  21,                                  /* colNo */
  "imfindcircles",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfindcircles.m"/* pName */
};

static emlrtRTEInfo c9_c_emlrtRTEI = { 51,/* lineNo */
  5,                                   /* colNo */
  "imfindcircles",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfindcircles.m"/* pName */
};

static emlrtRTEInfo c9_d_emlrtRTEI = { 52,/* lineNo */
  5,                                   /* colNo */
  "imfindcircles",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfindcircles.m"/* pName */
};

static emlrtRTEInfo c9_e_emlrtRTEI = { 69,/* lineNo */
  21,                                  /* colNo */
  "imfindcircles",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfindcircles.m"/* pName */
};

static emlrtRTEInfo c9_f_emlrtRTEI = { 8,/* lineNo */
  1,                                   /* colNo */
  "Image Processing System/CircleDetect",/* fName */
  "#flightControlSystem:2709"          /* pName */
};

static emlrtRTEInfo c9_g_emlrtRTEI = { 9,/* lineNo */
  1,                                   /* colNo */
  "Image Processing System/CircleDetect",/* fName */
  "#flightControlSystem:2709"          /* pName */
};

static emlrtRTEInfo c9_h_emlrtRTEI = { 31,/* lineNo */
  6,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c9_i_emlrtRTEI = { 128,/* lineNo */
  57,                                  /* colNo */
  "allOrAny",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"/* pName */
};

static emlrtRTEInfo c9_j_emlrtRTEI = { 36,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c9_k_emlrtRTEI = { 37,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c9_l_emlrtRTEI = { 32,/* lineNo */
  35,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c9_m_emlrtRTEI = { 32,/* lineNo */
  39,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c9_n_emlrtRTEI = { 16,/* lineNo */
  1,                                   /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtRTEInfo c9_o_emlrtRTEI = { 32,/* lineNo */
  1,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c9_p_emlrtRTEI = { 78,/* lineNo */
  23,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c9_q_emlrtRTEI = { 79,/* lineNo */
  31,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c9_r_emlrtRTEI = { 80,/* lineNo */
  31,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c9_s_emlrtRTEI = { 81,/* lineNo */
  33,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c9_t_emlrtRTEI = { 93,/* lineNo */
  25,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c9_u_emlrtRTEI = { 94,/* lineNo */
  25,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c9_v_emlrtRTEI = { 96,/* lineNo */
  24,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c9_w_emlrtRTEI = { 97,/* lineNo */
  29,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c9_x_emlrtRTEI = { 100,/* lineNo */
  5,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c9_y_emlrtRTEI = { 123,/* lineNo */
  29,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c9_ab_emlrtRTEI = { 320,/* lineNo */
  20,                                  /* colNo */
  "colon",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtRTEInfo c9_bb_emlrtRTEI = { 124,/* lineNo */
  29,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c9_cb_emlrtRTEI = { 125,/* lineNo */
  28,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c9_db_emlrtRTEI = { 79,/* lineNo */
  5,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c9_eb_emlrtRTEI = { 80,/* lineNo */
  5,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c9_fb_emlrtRTEI = { 81,/* lineNo */
  5,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c9_gb_emlrtRTEI = { 93,/* lineNo */
  5,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c9_hb_emlrtRTEI = { 94,/* lineNo */
  5,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c9_ib_emlrtRTEI = { 96,/* lineNo */
  5,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c9_jb_emlrtRTEI = { 97,/* lineNo */
  5,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c9_kb_emlrtRTEI = { 123,/* lineNo */
  5,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c9_lb_emlrtRTEI = { 124,/* lineNo */
  5,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c9_mb_emlrtRTEI = { 125,/* lineNo */
  5,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c9_nb_emlrtRTEI = { 1,/* lineNo */
  39,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c9_ob_emlrtRTEI = { 32,/* lineNo */
  8,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c9_pb_emlrtRTEI = { 16,/* lineNo */
  14,                                  /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtRTEInfo c9_qb_emlrtRTEI = { 195,/* lineNo */
  24,                                  /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c9_rb_emlrtRTEI = { 197,/* lineNo */
  24,                                  /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c9_sb_emlrtRTEI = { 253,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c9_tb_emlrtRTEI = { 254,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c9_ub_emlrtRTEI = { 47,/* lineNo */
  1,                                   /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtRTEInfo c9_vb_emlrtRTEI = { 49,/* lineNo */
  23,                                  /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtRTEInfo c9_wb_emlrtRTEI = { 40,/* lineNo */
  5,                                   /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c9_xb_emlrtRTEI = { 42,/* lineNo */
  21,                                  /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c9_yb_emlrtRTEI = { 53,/* lineNo */
  38,                                  /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c9_ac_emlrtRTEI = { 48,/* lineNo */
  13,                                  /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c9_bc_emlrtRTEI = { 53,/* lineNo */
  58,                                  /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c9_cc_emlrtRTEI = { 53,/* lineNo */
  18,                                  /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c9_dc_emlrtRTEI = { 53,/* lineNo */
  9,                                   /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c9_ec_emlrtRTEI = { 55,/* lineNo */
  33,                                  /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c9_fc_emlrtRTEI = { 28,/* lineNo */
  5,                                   /* colNo */
  "sort",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m"/* pName */
};

static emlrtRTEInfo c9_gc_emlrtRTEI = { 55,/* lineNo */
  10,                                  /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c9_hc_emlrtRTEI = { 56,/* lineNo */
  19,                                  /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c9_ic_emlrtRTEI = { 56,/* lineNo */
  9,                                   /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c9_jc_emlrtRTEI = { 36,/* lineNo */
  1,                                   /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c9_kc_emlrtRTEI = { 1,/* lineNo */
  30,                                  /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c9_lc_emlrtRTEI = { 53,/* lineNo */
  21,                                  /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c9_mc_emlrtRTEI = { 31,/* lineNo */
  1,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtRTEInfo c9_nc_emlrtRTEI = { 1454,/* lineNo */
  9,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c9_oc_emlrtRTEI = { 2011,/* lineNo */
  1,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c9_pc_emlrtRTEI = { 462,/* lineNo */
  13,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c9_qc_emlrtRTEI = { 463,/* lineNo */
  13,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c9_rc_emlrtRTEI = { 17,/* lineNo */
  25,                                  /* colNo */
  "cumop",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop.m"/* pName */
};

static emlrtRTEInfo c9_sc_emlrtRTEI = { 466,/* lineNo */
  9,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c9_tc_emlrtRTEI = { 469,/* lineNo */
  17,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c9_uc_emlrtRTEI = { 35,/* lineNo */
  13,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c9_vc_emlrtRTEI = { 99,/* lineNo */
  2,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c9_wc_emlrtRTEI = { 1890,/* lineNo */
  5,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c9_xc_emlrtRTEI = { 391,/* lineNo */
  13,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c9_yc_emlrtRTEI = { 404,/* lineNo */
  17,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c9_ad_emlrtRTEI = { 405,/* lineNo */
  17,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c9_bd_emlrtRTEI = { 48,/* lineNo */
  27,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c9_cd_emlrtRTEI = { 49,/* lineNo */
  25,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c9_dd_emlrtRTEI = { 50,/* lineNo */
  28,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c9_ed_emlrtRTEI = { 55,/* lineNo */
  1,                                   /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c9_fd_emlrtRTEI = { 39,/* lineNo */
  35,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c9_gd_emlrtRTEI = { 33,/* lineNo */
  5,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c9_hd_emlrtRTEI = { 55,/* lineNo */
  1,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c9_id_emlrtRTEI = { 69,/* lineNo */
  31,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c9_jd_emlrtRTEI = { 70,/* lineNo */
  46,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c9_kd_emlrtRTEI = { 70,/* lineNo */
  1,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c9_ld_emlrtRTEI = { 89,/* lineNo */
  1,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c9_md_emlrtRTEI = { 90,/* lineNo */
  1,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c9_nd_emlrtRTEI = { 11,/* lineNo */
  6,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c9_od_emlrtRTEI = { 11,/* lineNo */
  19,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c9_pd_emlrtRTEI = { 39,/* lineNo */
  1,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c9_qd_emlrtRTEI = { 51,/* lineNo */
  48,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c9_rd_emlrtRTEI = { 51,/* lineNo */
  57,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c9_sd_emlrtRTEI = { 51,/* lineNo */
  64,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c9_td_emlrtRTEI = { 32,/* lineNo */
  9,                                   /* colNo */
  "useConstantDim",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\useConstantDim.m"/* pName */
};

static emlrtRTEInfo c9_ud_emlrtRTEI = { 1302,/* lineNo */
  5,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c9_vd_emlrtRTEI = { 1,/* lineNo */
  14,                                  /* colNo */
  "nullAssignment",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pName */
};

static emlrtRTEInfo c9_wd_emlrtRTEI = { 1,/* lineNo */
  14,                                  /* colNo */
  "round",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elfun\\round.m"/* pName */
};

static emlrtRTEInfo c9_xd_emlrtRTEI = { 1,/* lineNo */
  20,                                  /* colNo */
  "sort",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"/* pName */
};

static emlrtRTEInfo c9_yd_emlrtRTEI = { 572,/* lineNo */
  20,                                  /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c9_ae_emlrtRTEI = { 482,/* lineNo */
  32,                                  /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c9_be_emlrtRTEI = { 520,/* lineNo */
  32,                                  /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c9_ce_emlrtRTEI = { 369,/* lineNo */
  24,                                  /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c9_de_emlrtRTEI = { 144,/* lineNo */
  9,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c9_ee_emlrtRTEI = { 72,/* lineNo */
  30,                                  /* colNo */
  "chradiiphcode",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"/* pName */
};

static emlrtRTEInfo c9_fe_emlrtRTEI = { 73,/* lineNo */
  9,                                   /* colNo */
  "chradiiphcode",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"/* pName */
};

static emlrtRTEInfo c9_ge_emlrtRTEI = { 14,/* lineNo */
  56,                                  /* colNo */
  "chradiiphcode",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"/* pName */
};

static emlrtRTEInfo c9_he_emlrtRTEI = { 14,/* lineNo */
  76,                                  /* colNo */
  "chradiiphcode",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"/* pName */
};

static emlrtRTEInfo c9_ie_emlrtRTEI = { 14,/* lineNo */
  18,                                  /* colNo */
  "chradiiphcode",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"/* pName */
};

static emlrtRTEInfo c9_je_emlrtRTEI = { 30,/* lineNo */
  21,                                  /* colNo */
  "applyScalarFunction",               /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunction.m"/* pName */
};

static emlrtRTEInfo c9_ke_emlrtRTEI = { 14,/* lineNo */
  30,                                  /* colNo */
  "chradiiphcode",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"/* pName */
};

static emlrtRTEInfo c9_le_emlrtRTEI = { 941,/* lineNo */
  21,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c9_me_emlrtRTEI = { 1292,/* lineNo */
  57,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c9_ne_emlrtRTEI = { 942,/* lineNo */
  41,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c9_oe_emlrtRTEI = { 946,/* lineNo */
  13,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c9_pe_emlrtRTEI = { 1314,/* lineNo */
  9,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c9_qe_emlrtRTEI = { 32,/* lineNo */
  1,                                   /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c9_re_emlrtRTEI = { 1292,/* lineNo */
  47,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c9_se_emlrtRTEI = { 1293,/* lineNo */
  33,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c9_te_emlrtRTEI = { 44,/* lineNo */
  5,                                   /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c9_ue_emlrtRTEI = { 1324,/* lineNo */
  21,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c9_ve_emlrtRTEI = { 45,/* lineNo */
  5,                                   /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c9_we_emlrtRTEI = { 21,/* lineNo */
  5,                                   /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c9_xe_emlrtRTEI = { 1294,/* lineNo */
  27,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c9_ye_emlrtRTEI = { 118,/* lineNo */
  9,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c9_af_emlrtRTEI = { 125,/* lineNo */
  30,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c9_bf_emlrtRTEI = { 944,/* lineNo */
  13,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c9_cf_emlrtRTEI = { 942,/* lineNo */
  17,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c9_df_emlrtRTEI = { 113,/* lineNo */
  1,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c9_ef_emlrtRTEI = { 22,/* lineNo */
  25,                                  /* colNo */
  "nullAssignment",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pName */
};

static emlrtRTEInfo c9_ff_emlrtRTEI = { 26,/* lineNo */
  13,                                  /* colNo */
  "nullAssignment",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pName */
};

static emlrtRTEInfo c9_gf_emlrtRTEI = { 61,/* lineNo */
  5,                                   /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c9_hf_emlrtRTEI = { 267,/* lineNo */
  24,                                  /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c9_if_emlrtRTEI = { 385,/* lineNo */
  9,                                   /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c9_jf_emlrtRTEI = { 386,/* lineNo */
  1,                                   /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c9_kf_emlrtRTEI = { 274,/* lineNo */
  24,                                  /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c9_lf_emlrtRTEI = { 387,/* lineNo */
  9,                                   /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c9_mf_emlrtRTEI = { 388,/* lineNo */
  1,                                   /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtBCInfo c9_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  20,                                  /* colNo */
  "centers",                           /* aName */
  "Image Processing System/CircleDetect",/* fName */
  "#flightControlSystem:2709",         /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_b_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  38,                                  /* colNo */
  "centers",                           /* aName */
  "Image Processing System/CircleDetect",/* fName */
  "#flightControlSystem:2709",         /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_c_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  20,                                  /* colNo */
  "centers",                           /* aName */
  "Image Processing System/CircleDetect",/* fName */
  "#flightControlSystem:2709",         /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_d_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  40,                                  /* colNo */
  "centers",                           /* aName */
  "Image Processing System/CircleDetect",/* fName */
  "#flightControlSystem:2709",         /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_e_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  20,                                  /* colNo */
  "centers",                           /* aName */
  "Image Processing System/CircleDetect",/* fName */
  "#flightControlSystem:2709",         /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_f_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  39,                                  /* colNo */
  "centers",                           /* aName */
  "Image Processing System/CircleDetect",/* fName */
  "#flightControlSystem:2709",         /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_g_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  20,                                  /* colNo */
  "centers",                           /* aName */
  "Image Processing System/CircleDetect",/* fName */
  "#flightControlSystem:2709",         /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_h_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  58,                                  /* colNo */
  "centers",                           /* aName */
  "Image Processing System/CircleDetect",/* fName */
  "#flightControlSystem:2709",         /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_i_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  39,                                  /* colNo */
  "centers",                           /* aName */
  "Image Processing System/CircleDetect",/* fName */
  "#flightControlSystem:2709",         /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_j_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  77,                                  /* colNo */
  "centers",                           /* aName */
  "Image Processing System/CircleDetect",/* fName */
  "#flightControlSystem:2709",         /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_k_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  58,                                  /* colNo */
  "centers",                           /* aName */
  "Image Processing System/CircleDetect",/* fName */
  "#flightControlSystem:2709",         /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_l_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  77,                                  /* colNo */
  "centers",                           /* aName */
  "Image Processing System/CircleDetect",/* fName */
  "#flightControlSystem:2709",         /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_m_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "imfindcircles",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfindcircles.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_n_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "imfindcircles",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfindcircles.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_o_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  100,                                 /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_p_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  100,                                 /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo c9_nf_emlrtRTEI = { 77,/* lineNo */
  9,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtBCInfo c9_q_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  85,                                  /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_r_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  85,                                  /* lineNo */
  18,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_s_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  86,                                  /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_t_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  86,                                  /* lineNo */
  18,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_u_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  87,                                  /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_v_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  87,                                  /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_w_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  104,                                 /* lineNo */
  80,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_x_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  104,                                 /* lineNo */
  110,                                 /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_y_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  104,                                 /* lineNo */
  44,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_ab_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  130,                                 /* lineNo */
  29,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_bb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  130,                                 /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_cb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  104,                                 /* lineNo */
  16,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_db_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  105,                                 /* lineNo */
  80,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_eb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  132,                                 /* lineNo */
  64,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_fb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  132,                                 /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_gb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  105,                                 /* lineNo */
  110,                                 /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_hb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  133,                                 /* lineNo */
  64,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_ib_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  133,                                 /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_jb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  134,                                 /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_kb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  134,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_lb_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  151,                                 /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_mb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  151,                                 /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_nb_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  151,                                 /* lineNo */
  40,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_ob_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  151,                                 /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_pb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  151,                                 /* lineNo */
  53,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_qb_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  151,                                 /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c9_rb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  151,                                 /* lineNo */
  12,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_sb_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  151,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c9_tb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  151,                                 /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_ub_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  105,                                 /* lineNo */
  44,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_vb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  105,                                 /* lineNo */
  16,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_wb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  107,                                 /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_xb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  108,                                 /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_yb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  108,                                 /* lineNo */
  61,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_ac_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  108,                                 /* lineNo */
  84,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_bc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  108,                                 /* lineNo */
  107,                                 /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_cc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  108,                                 /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_dc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  111,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_ec_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  112,                                 /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_fc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c9_emlrtECI = { -1, /* nDims */
  42,                                  /* lineNo */
  9,                                   /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c9_of_emlrtRTEI = { 46,/* lineNo */
  15,                                  /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtBCInfo c9_gc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_hc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_ic_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_jc_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  53,                                  /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_kc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_lc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  469,                                 /* lineNo */
  69,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_mc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  469,                                 /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_nc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  2067,                                /* lineNo */
  56,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_oc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  2069,                                /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_pc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  2070,                                /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_qc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  2070,                                /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_rc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  469,                                 /* lineNo */
  64,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_sc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  469,                                 /* lineNo */
  78,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_tc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  469,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c9_emlrtDCI = { 48, /* lineNo */
  33,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo c9_uc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  233,                                 /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_vc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  75,                                  /* lineNo */
  18,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_wc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  234,                                 /* lineNo */
  16,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_xc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  81,                                  /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c9_b_emlrtDCI = { 55,/* lineNo */
  1,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c9_yc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_ad_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_bd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  238,                                 /* lineNo */
  16,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_cd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  86,                                  /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_dd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  44,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_ed_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  60,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_fd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_gd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_hd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  130,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_id_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  134,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_jd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_kd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_ld_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  66,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_md_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  80,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_nd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  99,                                  /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_od_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  108,                                 /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_pd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  108,                                 /* lineNo */
  63,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_qd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  103,                                 /* lineNo */
  58,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_rd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  103,                                 /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_sd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  52,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_td_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_ud_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  62,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_vd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  76,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_wd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_xd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  181,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_yd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  182,                                 /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_ae_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  182,                                 /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_be_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  182,                                 /* lineNo */
  12,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_ce_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  183,                                 /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c9_c_emlrtDCI = { 69,/* lineNo */
  37,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c9_d_emlrtDCI = { 69,/* lineNo */
  37,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo c9_de_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  170,                                 /* lineNo */
  12,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_ee_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  167,                                 /* lineNo */
  12,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_fe_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  171,                                 /* lineNo */
  12,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_ge_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  168,                                 /* lineNo */
  12,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_he_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  73,                                  /* lineNo */
  82,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_ie_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  76,                                  /* lineNo */
  52,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_je_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  79,                                  /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_ke_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  79,                                  /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_le_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  63,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_me_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_ne_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  81,                                  /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_oe_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  81,                                  /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_pe_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  72,                                  /* colNo */
  "",                                  /* aName */
  "chradiiphcode",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_qe_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  92,                                  /* colNo */
  "",                                  /* aName */
  "chradiiphcode",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_re_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  72,                                  /* lineNo */
  40,                                  /* colNo */
  "",                                  /* aName */
  "chradiiphcode",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_se_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  73,                                  /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "chradiiphcode",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_te_emlrtBCI = { 1,/* iFirst */
  19200,                               /* iLast */
  14,                                  /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "chradiiphcode",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c9_b_emlrtECI = { 1,/* nDims */
  1324,                                /* lineNo */
  21,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtBCInfo c9_ue_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1316,                                /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_ve_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1295,                                /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_we_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1292,                                /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_xe_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  946,                                 /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_ye_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1324,                                /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_af_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1328,                                /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_bf_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  1295,                                /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_cf_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1295,                                /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_df_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1295,                                /* lineNo */
  54,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_ef_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1295,                                /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_ff_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  944,                                 /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_gf_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  941,                                 /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_hf_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1292,                                /* lineNo */
  57,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_if_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  942,                                 /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_jf_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1314,                                /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_kf_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1314,                                /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_lf_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1293,                                /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c9_mf_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1294,                                /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo c9_cg_emlrtRSI = { 56,/* lineNo */
  "chcenters",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pathName */
};

static emlrtRSInfo c9_dg_emlrtRSI = { 40,/* lineNo */
  "chcenters",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pathName */
};

static emlrtRSInfo c9_eg_emlrtRSI = { 97,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c9_fg_emlrtRSI = { 1314,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c9_gg_emlrtRSI = { 81,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c9_hg_emlrtRSI = { 80,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c9_ig_emlrtRSI = { 79,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c9_jg_emlrtRSI = { 94,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c9_kg_emlrtRSI = { 93,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c9_lg_emlrtRSI = { 96,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c9_mg_emlrtRSI = { 55,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c9_ng_emlrtRSI = { 39,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c9_og_emlrtRSI = { 49,/* lineNo */
  "sub2ind",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pathName */
};

static emlrtRSInfo c9_pg_emlrtRSI = { 47,/* lineNo */
  "sub2ind",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pathName */
};

static emlrtRSInfo c9_qg_emlrtRSI = { 124,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c9_rg_emlrtRSI = { 123,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c9_sg_emlrtRSI = { 125,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static int32_T c9_iv[324] = { 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
  15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34,
  35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54,
  55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74,
  75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94,
  95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111,
  112, 113, 114, 115, 116, 117, 118, 119, 120, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18,
  19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38,
  39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58,
  59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78,
  79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98,
  99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114,
  115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130,
  131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146,
  147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 160 };

static char_T c9_cv[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
  'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't', 'r',
  'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'N', 'o',
  'n', 'N', 'a', 'N' };

static char_T c9_cv1[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i', 'l',
  't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F', 'a',
  'i', 'l', 'e', 'd' };

/* Function Declarations */
static void initialize_c9_flightControlSystem
  (SFc9_flightControlSystemInstanceStruct *chartInstance);
static void initialize_params_c9_flightControlSystem
  (SFc9_flightControlSystemInstanceStruct *chartInstance);
static void mdl_start_c9_flightControlSystem
  (SFc9_flightControlSystemInstanceStruct *chartInstance);
static void mdl_terminate_c9_flightControlSystem
  (SFc9_flightControlSystemInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c9_flightControlSystem
  (SFc9_flightControlSystemInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c9_flightControlSystem
  (SFc9_flightControlSystemInstanceStruct *chartInstance);
static void enable_c9_flightControlSystem(SFc9_flightControlSystemInstanceStruct
  *chartInstance);
static void disable_c9_flightControlSystem
  (SFc9_flightControlSystemInstanceStruct *chartInstance);
static void sf_gateway_c9_flightControlSystem
  (SFc9_flightControlSystemInstanceStruct *chartInstance);
static void ext_mode_exec_c9_flightControlSystem
  (SFc9_flightControlSystemInstanceStruct *chartInstance);
static void c9_update_jit_animation_c9_flightControlSystem
  (SFc9_flightControlSystemInstanceStruct *chartInstance);
static void c9_do_animation_call_c9_flightControlSystem
  (SFc9_flightControlSystemInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c9_flightControlSystem
  (SFc9_flightControlSystemInstanceStruct *chartInstance);
static void set_sim_state_c9_flightControlSystem
  (SFc9_flightControlSystemInstanceStruct *chartInstance, const mxArray *c9_st);
static void initSimStructsc9_flightControlSystem
  (SFc9_flightControlSystemInstanceStruct *chartInstance);
static void c9_imfilter(SFc9_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c9_sp, real32_T c9_varargin_1[19200], real32_T c9_b[19200]);
static void c9_b_imfilter(SFc9_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c9_sp, real32_T c9_varargin_1[19200], real32_T c9_b[19200]);
static void c9_c_imfilter(SFc9_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c9_sp, real32_T c9_varargin_1[19200], real32_T c9_b[19200]);
static void c9_chaccum(SFc9_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c9_sp, boolean_T c9_varargin_1[19200], creal_T
  c9_d_accumMatrix[19200], real32_T c9_b_gradientImg[19200]);
static void c9_eml_find(SFc9_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c9_sp, boolean_T c9_x[19200], c9_emxArray_int32_T *c9_i,
  c9_emxArray_int32_T *c9_j);
static void c9_indexShapeCheck(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, int32_T c9_matrixSize, int32_T
  c9_indexSize[2]);
static boolean_T c9_allinrange(SFc9_flightControlSystemInstanceStruct
  *chartInstance, c9_emxArray_real_T *c9_x, int32_T c9_hi);
static void c9_eml_sub2ind(SFc9_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c9_sp, c9_emxArray_real_T *c9_varargin_1, c9_emxArray_real_T
  *c9_b_varargin_2, c9_emxArray_int32_T *c9_idx);
static void c9_check_forloop_overflow_error
  (SFc9_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c9_sp);
static boolean_T c9_any(SFc9_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c9_sp, creal_T c9_x[19200]);
static void c9_medfilt2(SFc9_flightControlSystemInstanceStruct *chartInstance,
  real_T c9_varargin_1[19200], real_T c9_b[19200]);
static void c9_chcenters(SFc9_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c9_sp, creal_T c9_varargin_1[19200], c9_emxArray_real_T
  *c9_centers, c9_emxArray_real_T *c9_metric);
static void c9_validateattributes(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, real_T c9_d_a[19200]);
static void c9_imregionalmax(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, real_T c9_varargin_1[19200],
  boolean_T c9_BW[19200]);
static void c9_regionprops(SFc9_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c9_sp, boolean_T c9_varargin_1[19200], real_T
  c9_b_varargin_2[19200], c9_emxArray_sOA5t73y81YtFHGIDxk0fK *c9_outstats);
static void c9_bwconncomp(SFc9_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c9_sp, boolean_T c9_varargin_1[19200],
  c9_s_vX9LV7M75v5ZNol5H5URkE *c9_CC);
static real_T c9_sumColumnB(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_int32_T *c9_x, int32_T
  c9_vlen);
static real_T c9_sumColumnB4(SFc9_flightControlSystemInstanceStruct
  *chartInstance, c9_emxArray_int32_T *c9_x, int32_T c9_vstart);
static real_T c9_b_sumColumnB(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_int32_T *c9_x, int32_T
  c9_vlen, int32_T c9_vstart);
static void c9_useConstantDim(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_int32_T *c9_b_varargin_2,
  int32_T c9_varargin_3, c9_emxArray_int32_T *c9_varargout_1);
static void c9_assertValidSizeArg(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, real_T c9_varargin_1);
static void c9_ComputeWeightedCentroid(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, real_T c9_b_I[19200],
  c9_emxArray_s_R6Og1x0kmqQXSF9Pwa49 *c9_stats, c9_sHtk0WM4OMtyqkehwQYcq2
  c9_statsAlreadyComputed, c9_emxArray_s_R6Og1x0kmqQXSF9Pwa49 *c9_b_stats,
  c9_sHtk0WM4OMtyqkehwQYcq2 *c9_b_statsAlreadyComputed);
static real_T c9_sum(SFc9_flightControlSystemInstanceStruct *chartInstance,
                     const emlrtStack *c9_sp, c9_emxArray_real_T *c9_x);
static real_T c9_c_sumColumnB(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_real_T *c9_x, int32_T
  c9_vlen);
static real_T c9_b_sumColumnB4(SFc9_flightControlSystemInstanceStruct
  *chartInstance, c9_emxArray_real_T *c9_x, int32_T c9_vstart);
static real_T c9_d_sumColumnB(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_real_T *c9_x, int32_T
  c9_vlen, int32_T c9_vstart);
static void c9_nullAssignment(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_real_T *c9_x, int32_T
  c9_idx, c9_emxArray_real_T *c9_b_x);
static void c9_round(SFc9_flightControlSystemInstanceStruct *chartInstance,
                     const emlrtStack *c9_sp, c9_emxArray_real_T *c9_x,
                     c9_emxArray_real_T *c9_b_x);
static void c9_sort(SFc9_flightControlSystemInstanceStruct *chartInstance, const
                    emlrtStack *c9_sp, c9_emxArray_real_T *c9_x,
                    c9_emxArray_real_T *c9_b_x, c9_emxArray_int32_T *c9_idx);
static void c9_merge_pow2_block(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_int32_T *c9_idx,
  c9_emxArray_real_T *c9_x, int32_T c9_offset, c9_emxArray_int32_T *c9_b_idx,
  c9_emxArray_real_T *c9_b_x);
static void c9_merge_block(SFc9_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c9_sp, c9_emxArray_int32_T *c9_idx, c9_emxArray_real_T *c9_x,
  int32_T c9_offset, int32_T c9_n, int32_T c9_preSortLevel, c9_emxArray_int32_T *
  c9_iwork, c9_emxArray_real_T *c9_xwork, c9_emxArray_int32_T *c9_b_idx,
  c9_emxArray_real_T *c9_b_x, c9_emxArray_int32_T *c9_b_iwork,
  c9_emxArray_real_T *c9_b_xwork);
static void c9_merge(SFc9_flightControlSystemInstanceStruct *chartInstance,
                     const emlrtStack *c9_sp, c9_emxArray_int32_T *c9_idx,
                     c9_emxArray_real_T *c9_x, int32_T c9_offset, int32_T c9_np,
                     int32_T c9_nq, c9_emxArray_int32_T *c9_iwork,
                     c9_emxArray_real_T *c9_xwork, c9_emxArray_int32_T *c9_b_idx,
                     c9_emxArray_real_T *c9_b_x, c9_emxArray_int32_T *c9_b_iwork,
                     c9_emxArray_real_T *c9_b_xwork);
static void c9_b_eml_find(SFc9_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c9_sp, c9_emxArray_boolean_T *c9_x, c9_emxArray_int32_T
  *c9_i);
static void c9_chradiiphcode(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_real_T *c9_varargin_1,
  creal_T c9_b_varargin_2[19200], c9_emxArray_real_T *c9_r_estimated);
static boolean_T c9_all(SFc9_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c9_sp, c9_emxArray_boolean_T *c9_x);
static void c9_b_chcenters(SFc9_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c9_sp, creal_T c9_varargin_1[19200], c9_emxArray_real_T
  *c9_centers, c9_emxArray_real_T *c9_metric);
static void c9_emlrt_marshallIn(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c9_b_Red_Comp, const char_T *c9_identifier,
  boolean_T c9_b_y[19200]);
static void c9_b_emlrt_marshallIn(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId,
  boolean_T c9_b_y[19200]);
static void c9_c_emlrt_marshallIn(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c9_b_direct, const char_T *c9_identifier,
  real_T c9_b_y[2]);
static void c9_d_emlrt_marshallIn(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId,
  real_T c9_b_y[2]);
static real_T c9_e_emlrt_marshallIn(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c9_b_land, const char_T *c9_identifier);
static real_T c9_f_emlrt_marshallIn(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId);
static boolean_T c9_g_emlrt_marshallIn(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c9_b_y, const char_T *c9_identifier);
static boolean_T c9_h_emlrt_marshallIn(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId);
static boolean_T c9_i_emlrt_marshallIn(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c9_b_flag_threshold, const char_T
  *c9_identifier, boolean_T *c9_svPtr);
static boolean_T c9_j_emlrt_marshallIn(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId,
  boolean_T *c9_svPtr);
static uint8_T c9_k_emlrt_marshallIn(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c9_b_is_active_c9_flightControlSystem, const
  char_T *c9_identifier);
static uint8_T c9_l_emlrt_marshallIn(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId);
static void c9_slStringInitializeDynamicBuffers
  (SFc9_flightControlSystemInstanceStruct *chartInstance);
static void c9_chart_data_browse_helper(SFc9_flightControlSystemInstanceStruct
  *chartInstance, int32_T c9_ssIdNumber, const mxArray **c9_mxData, uint8_T
  *c9_isValueTooBig);
static void c9_b_ComputeWeightedCentroid(SFc9_flightControlSystemInstanceStruct *
  chartInstance, const emlrtStack *c9_sp, real_T c9_b_I[19200],
  c9_emxArray_s_R6Og1x0kmqQXSF9Pwa49 *c9_stats, c9_sHtk0WM4OMtyqkehwQYcq2
  *c9_statsAlreadyComputed);
static void c9_b_nullAssignment(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_real_T *c9_x, int32_T
  c9_idx);
static void c9_b_round(SFc9_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c9_sp, c9_emxArray_real_T *c9_x);
static void c9_b_sort(SFc9_flightControlSystemInstanceStruct *chartInstance,
                      const emlrtStack *c9_sp, c9_emxArray_real_T *c9_x,
                      c9_emxArray_int32_T *c9_idx);
static void c9_b_merge_pow2_block(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_int32_T *c9_idx,
  c9_emxArray_real_T *c9_x, int32_T c9_offset);
static void c9_b_merge_block(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_int32_T *c9_idx,
  c9_emxArray_real_T *c9_x, int32_T c9_offset, int32_T c9_n, int32_T
  c9_preSortLevel, c9_emxArray_int32_T *c9_iwork, c9_emxArray_real_T *c9_xwork);
static void c9_b_merge(SFc9_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c9_sp, c9_emxArray_int32_T *c9_idx, c9_emxArray_real_T *c9_x,
  int32_T c9_offset, int32_T c9_np, int32_T c9_nq, c9_emxArray_int32_T *c9_iwork,
  c9_emxArray_real_T *c9_xwork);
static real_T c9_binary_expand_op(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, emlrtRSInfo c9_in1,
  c9_emxArray_real_T *c9_in2, c9_emxArray_real_T *c9_in3);
static void c9_emxEnsureCapacity_real_T(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_real_T *c9_emxArray,
  int32_T c9_oldNumel, const emlrtRTEInfo *c9_srcLocation);
static void c9_emxEnsureCapacity_boolean_T
  (SFc9_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c9_sp, c9_emxArray_boolean_T *c9_emxArray, int32_T c9_oldNumel, const
   emlrtRTEInfo *c9_srcLocation);
static void c9_emxEnsureCapacity_real_T1(SFc9_flightControlSystemInstanceStruct *
  chartInstance, const emlrtStack *c9_sp, c9_emxArray_real_T *c9_emxArray,
  int32_T c9_oldNumel, const emlrtRTEInfo *c9_srcLocation);
static void c9_emxInit_real_T(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_real_T **c9_pEmxArray,
  int32_T c9_numDimensions, const emlrtRTEInfo *c9_srcLocation);
static void c9_emxInit_real_T1(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_real_T **c9_pEmxArray,
  int32_T c9_numDimensions, const emlrtRTEInfo *c9_srcLocation);
static void c9_emxInit_boolean_T(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_boolean_T **c9_pEmxArray,
  int32_T c9_numDimensions, const emlrtRTEInfo *c9_srcLocation);
static void c9_emxInit_int32_T(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_int32_T **c9_pEmxArray,
  int32_T c9_numDimensions, const emlrtRTEInfo *c9_srcLocation);
static void c9_emxFree_real_T(SFc9_flightControlSystemInstanceStruct
  *chartInstance, c9_emxArray_real_T **c9_pEmxArray);
static void c9_emxFree_boolean_T(SFc9_flightControlSystemInstanceStruct
  *chartInstance, c9_emxArray_boolean_T **c9_pEmxArray);
static void c9_emxFree_int32_T(SFc9_flightControlSystemInstanceStruct
  *chartInstance, c9_emxArray_int32_T **c9_pEmxArray);
static void c9_emxEnsureCapacity_real32_T(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_real32_T *c9_emxArray,
  int32_T c9_oldNumel, const emlrtRTEInfo *c9_srcLocation);
static void c9_emxEnsureCapacity_creal_T(SFc9_flightControlSystemInstanceStruct *
  chartInstance, const emlrtStack *c9_sp, c9_emxArray_creal_T *c9_emxArray,
  int32_T c9_oldNumel, const emlrtRTEInfo *c9_srcLocation);
static void c9_emxEnsureCapacity_int32_T(SFc9_flightControlSystemInstanceStruct *
  chartInstance, const emlrtStack *c9_sp, c9_emxArray_int32_T *c9_emxArray,
  int32_T c9_oldNumel, const emlrtRTEInfo *c9_srcLocation);
static void c9_emxEnsureCapacity_creal_T1(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_creal_T *c9_emxArray,
  int32_T c9_oldNumel, const emlrtRTEInfo *c9_srcLocation);
static void c9_emxInit_real32_T(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_real32_T **c9_pEmxArray,
  int32_T c9_numDimensions, const emlrtRTEInfo *c9_srcLocation);
static void c9_emxInit_creal_T(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_creal_T **c9_pEmxArray,
  int32_T c9_numDimensions, const emlrtRTEInfo *c9_srcLocation);
static void c9_emxInit_creal_T1(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_creal_T **c9_pEmxArray,
  int32_T c9_numDimensions, const emlrtRTEInfo *c9_srcLocation);
static void c9_emxFree_real32_T(SFc9_flightControlSystemInstanceStruct
  *chartInstance, c9_emxArray_real32_T **c9_pEmxArray);
static void c9_emxFree_creal_T(SFc9_flightControlSystemInstanceStruct
  *chartInstance, c9_emxArray_creal_T **c9_pEmxArray);
static void c9_emxInit_sOA5t73y81YtFHGIDxk0fKF
  (SFc9_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c9_sp, c9_emxArray_sOA5t73y81YtFHGIDxk0fK **c9_pEmxArray, int32_T
   c9_numDimensions, const emlrtRTEInfo *c9_srcLocation);
static void c9_emxInit_int32_T1(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_int32_T **c9_pEmxArray,
  int32_T c9_numDimensions, const emlrtRTEInfo *c9_srcLocation);
static void c9_emxFree_sOA5t73y81YtFHGIDxk0fKF
  (SFc9_flightControlSystemInstanceStruct *chartInstance,
   c9_emxArray_sOA5t73y81YtFHGIDxk0fK **c9_pEmxArray);
static void c9_emxEnsureCapacity_boolean_T1
  (SFc9_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c9_sp, c9_emxArray_boolean_T *c9_emxArray, int32_T c9_oldNumel, const
   emlrtRTEInfo *c9_srcLocation);
static void c9_emxEnsureCapacity_sOA5t73y81YtF
  (SFc9_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c9_sp, c9_emxArray_sOA5t73y81YtFHGIDxk0fK *c9_emxArray, int32_T c9_oldNumel,
   const emlrtRTEInfo *c9_srcLocation);
static void c9_emxFreeStruct_s_R6Og1x0kmqQXSF9
  (SFc9_flightControlSystemInstanceStruct *chartInstance,
   c9_s_R6Og1x0kmqQXSF9Pwa49FD *c9_pStruct);
static void c9_emxTrim_s_R6Og1x0kmqQXSF9Pwa49F
  (SFc9_flightControlSystemInstanceStruct *chartInstance,
   c9_emxArray_s_R6Og1x0kmqQXSF9Pwa49 *c9_emxArray, int32_T c9_fromIndex,
   int32_T c9_toIndex);
static void c9_emxInitStruct_s_R6Og1x0kmqQXSF9
  (SFc9_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c9_sp, c9_s_R6Og1x0kmqQXSF9Pwa49FD *c9_pStruct, const emlrtRTEInfo
   *c9_srcLocation);
static void c9_emxExpand_s_R6Og1x0kmqQXSF9Pwa4
  (SFc9_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c9_sp, c9_emxArray_s_R6Og1x0kmqQXSF9Pwa49 *c9_emxArray, int32_T c9_fromIndex,
   int32_T c9_toIndex, const emlrtRTEInfo *c9_srcLocation);
static void c9_emxEnsureCapacity_s_R6Og1x0kmqQ
  (SFc9_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c9_sp, c9_emxArray_s_R6Og1x0kmqQXSF9Pwa49 *c9_emxArray, int32_T c9_oldNumel,
   const emlrtRTEInfo *c9_srcLocation);
static void c9_emxCopyStruct_s_R6Og1x0kmqQXSF9
  (SFc9_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c9_sp, c9_s_R6Og1x0kmqQXSF9Pwa49FD *c9_dst, const
   c9_s_R6Og1x0kmqQXSF9Pwa49FD *c9_src, const emlrtRTEInfo *c9_srcLocation);
static void c9_emxCopyMatrix_real_T(SFc9_flightControlSystemInstanceStruct
  *chartInstance, real_T c9_dst[2], const real_T c9_src[2]);
static void c9_emxCopyMatrix_real_T1(SFc9_flightControlSystemInstanceStruct
  *chartInstance, real_T c9_dst[4], const real_T c9_src[4]);
static void c9_emxCopy_boolean_T_0x0(SFc9_flightControlSystemInstanceStruct
  *chartInstance, c9_emxArray_boolean_T_0x0 *c9_dst, const
  c9_emxArray_boolean_T_0x0 *c9_src);
static void c9_emxCopyMatrix_real_T2(SFc9_flightControlSystemInstanceStruct
  *chartInstance, real_T c9_dst[16], const real_T c9_src[16]);
static void c9_emxCopy_real_T(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_real_T **c9_dst,
  c9_emxArray_real_T * const *c9_src, const emlrtRTEInfo *c9_srcLocation);
static void c9_emxCopy_real_T1(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_real_T **c9_dst,
  c9_emxArray_real_T * const *c9_src, const emlrtRTEInfo *c9_srcLocation);
static void c9_emxCopy_real_T_1x0(SFc9_flightControlSystemInstanceStruct
  *chartInstance, c9_emxArray_real_T_1x0 *c9_dst, const c9_emxArray_real_T_1x0
  *c9_src);
static void c9_emxInitStruct_s_vX9LV7M75v5ZNol
  (SFc9_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c9_sp, c9_s_vX9LV7M75v5ZNol5H5URkE *c9_pStruct, const emlrtRTEInfo
   *c9_srcLocation);
static void c9_emxInit_s_R6Og1x0kmqQXSF9Pwa49F
  (SFc9_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c9_sp, c9_emxArray_s_R6Og1x0kmqQXSF9Pwa49 **c9_pEmxArray, int32_T
   c9_numDimensions, const emlrtRTEInfo *c9_srcLocation);
static void c9_emxInit_boolean_T1(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_boolean_T **c9_pEmxArray,
  int32_T c9_numDimensions, const emlrtRTEInfo *c9_srcLocation);
static void c9_emxFreeStruct_s_vX9LV7M75v5ZNol
  (SFc9_flightControlSystemInstanceStruct *chartInstance,
   c9_s_vX9LV7M75v5ZNol5H5URkE *c9_pStruct);
static void c9_emxFree_s_R6Og1x0kmqQXSF9Pwa49F
  (SFc9_flightControlSystemInstanceStruct *chartInstance,
   c9_emxArray_s_R6Og1x0kmqQXSF9Pwa49 **c9_pEmxArray);
static void c9_emxEnsureCapacity_int32_T1(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_int32_T *c9_emxArray,
  int32_T c9_oldNumel, const emlrtRTEInfo *c9_srcLocation);
static void c9_emxInitMatrix_cell_wrap_37(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_cell_wrap_37 c9_pMatrix[2], const
  emlrtRTEInfo *c9_srcLocation);
static void c9_emxInitStruct_cell_wrap_37(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_cell_wrap_37 *c9_pStruct, const
  emlrtRTEInfo *c9_srcLocation);
static void c9_emxFreeMatrix_cell_wrap_37(SFc9_flightControlSystemInstanceStruct
  *chartInstance, c9_cell_wrap_37 c9_pMatrix[2]);
static void c9_emxFreeStruct_cell_wrap_37(SFc9_flightControlSystemInstanceStruct
  *chartInstance, c9_cell_wrap_37 *c9_pStruct);
static int32_T c9_div_nzp_s32(SFc9_flightControlSystemInstanceStruct
  *chartInstance, int32_T c9_numerator, int32_T c9_denominator, int32_T
  c9_EMLOvCount_src_loc, uint32_T c9_ssid_src_loc, int32_T c9_offset_src_loc,
  int32_T c9_length_src_loc);
static int32_T c9__s32_add__(SFc9_flightControlSystemInstanceStruct
  *chartInstance, int32_T c9_b, int32_T c9_c, int32_T c9_EMLOvCount_src_loc,
  uint32_T c9_ssid_src_loc, int32_T c9_offset_src_loc, int32_T c9_length_src_loc);
static int32_T c9__s32_minus__(SFc9_flightControlSystemInstanceStruct
  *chartInstance, int32_T c9_b, int32_T c9_c, int32_T c9_EMLOvCount_src_loc,
  uint32_T c9_ssid_src_loc, int32_T c9_offset_src_loc, int32_T c9_length_src_loc);
static int32_T c9__s32_s64_(SFc9_flightControlSystemInstanceStruct
  *chartInstance, int64_T c9_b, int32_T c9_EMLOvCount_src_loc, uint32_T
  c9_ssid_src_loc, int32_T c9_offset_src_loc, int32_T c9_length_src_loc);
static void init_dsm_address_info(SFc9_flightControlSystemInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc9_flightControlSystemInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c9_flightControlSystem
  (SFc9_flightControlSystemInstanceStruct *chartInstance)
{
  emlrtStack c9_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c9_st.tls = chartInstance->c9_fEmlrtCtx;
  emlrtLicenseCheckR2022a(&c9_st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "image_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c9_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c9_flag_threshold_not_empty = false;
  chartInstance->c9_is_active_c9_flightControlSystem = 0U;
}

static void initialize_params_c9_flightControlSystem
  (SFc9_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c9_flightControlSystem
  (SFc9_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c9_flightControlSystem
  (SFc9_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c9_flightControlSystem
  (SFc9_flightControlSystemInstanceStruct *chartInstance)
{
  static const int32_T c9_b_postfixPredicateTree[7] = { 0, 1, -3, 2, -3, 3, -3 };

  static const int32_T c9_c_postfixPredicateTree[7] = { 0, 1, -3, 2, -3, 3, -3 };

  static const int32_T c9_b_condTxtEndIdx[4] = { 1092, 1111, 1130, 1149 };

  static const int32_T c9_b_condTxtStartIdx[4] = { 1077, 1096, 1115, 1134 };

  static const int32_T c9_c_condTxtEndIdx[4] = { 1764, 1783, 1802, 1821 };

  static const int32_T c9_c_condTxtStartIdx[4] = { 1749, 1768, 1787, 1806 };

  static const int32_T c9_postfixPredicateTree[2] = { 0, -1 };

  static const int32_T c9_condTxtEndIdx[1] = { 867 };

  static const int32_T c9_condTxtStartIdx[1] = { 853 };

  static const uint32_T c9_decisionTxtEndIdx = 0U;
  static const uint32_T c9_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c9_chart_data_browse_helper);
  chartInstance->c9_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c9_RuntimeVar,
    &chartInstance->c9_IsDebuggerActive,
    &chartInstance->c9_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c9_mlFcnLineNumber, &chartInstance->c9_IsHeatMapPresent, 0);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c9_covrtInstance, 1U, 0U, 1U,
    37U);
  covrtChartInitFcn(chartInstance->c9_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c9_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c9_decisionTxtStartIdx, &c9_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c9_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c9_covrtInstance, "", 4U, 0U, 1U, 0U, 6U, 0U,
                  8U, 0U, 0U, 0U, 9U, 3U);
  covrtEmlFcnInitFcn(chartInstance->c9_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 1890);
  covrtEmlSaturationInitFcn(chartInstance->c9_covrtInstance, 4U, 0U, 0U, 1434,
    -1, 1461);
  covrtEmlSaturationInitFcn(chartInstance->c9_covrtInstance, 4U, 0U, 1U, 1434,
    -1, 1477);
  covrtEmlSaturationInitFcn(chartInstance->c9_covrtInstance, 4U, 0U, 2U, 1447,
    -1, 1461);
  covrtEmlSaturationInitFcn(chartInstance->c9_covrtInstance, 4U, 0U, 3U, 1464,
    -1, 1477);
  covrtEmlSaturationInitFcn(chartInstance->c9_covrtInstance, 4U, 0U, 4U, 519, -1,
    546);
  covrtEmlSaturationInitFcn(chartInstance->c9_covrtInstance, 4U, 0U, 5U, 519, -1,
    562);
  covrtEmlSaturationInitFcn(chartInstance->c9_covrtInstance, 4U, 0U, 6U, 532, -1,
    546);
  covrtEmlSaturationInitFcn(chartInstance->c9_covrtInstance, 4U, 0U, 7U, 549, -1,
    562);
  covrtEmlIfInitFcn(chartInstance->c9_covrtInstance, 4U, 0U, 0U, 162, 189, -1,
                    222, false);
  covrtEmlIfInitFcn(chartInstance->c9_covrtInstance, 4U, 0U, 1U, 247, 275, 1226,
                    1869, false);
  covrtEmlIfInitFcn(chartInstance->c9_covrtInstance, 4U, 0U, 2U, 849, 868, -1,
                    1225, false);
  covrtEmlIfInitFcn(chartInstance->c9_covrtInstance, 4U, 0U, 3U, 1074, 1150, -1,
                    1185, false);
  covrtEmlIfInitFcn(chartInstance->c9_covrtInstance, 4U, 0U, 4U, 1624, 1642,
                    1680, 1865, false);
  covrtEmlIfInitFcn(chartInstance->c9_covrtInstance, 4U, 0U, 5U, 1746, 1822, -1,
                    1857, false);
  covrtEmlMCDCInitFcn(chartInstance->c9_covrtInstance, 4U, 0U, 0U, 852, 867, 1U,
                      0U, c9_condTxtStartIdx, c9_condTxtEndIdx, 2U,
                      c9_postfixPredicateTree, false);
  covrtEmlMCDCInitFcn(chartInstance->c9_covrtInstance, 4U, 0U, 1U, 1077, 1149,
                      4U, 1U, c9_b_condTxtStartIdx, c9_b_condTxtEndIdx, 7U,
                      c9_b_postfixPredicateTree, false);
  covrtEmlMCDCInitFcn(chartInstance->c9_covrtInstance, 4U, 0U, 2U, 1749, 1821,
                      4U, 5U, c9_c_condTxtStartIdx, c9_c_condTxtEndIdx, 7U,
                      c9_c_postfixPredicateTree, false);
  covrtEmlRelationalInitFcn(chartInstance->c9_covrtInstance, 4U, 0U, 1U, 1077,
    1092, -1, 2U);
  covrtEmlRelationalInitFcn(chartInstance->c9_covrtInstance, 4U, 0U, 2U, 1096,
    1111, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c9_covrtInstance, 4U, 0U, 3U, 1115,
    1130, -1, 2U);
  covrtEmlRelationalInitFcn(chartInstance->c9_covrtInstance, 4U, 0U, 4U, 1134,
    1149, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c9_covrtInstance, 4U, 0U, 5U, 1749,
    1764, -1, 2U);
  covrtEmlRelationalInitFcn(chartInstance->c9_covrtInstance, 4U, 0U, 6U, 1768,
    1783, -1, 4U);
  covrtEmlRelationalInitFcn(chartInstance->c9_covrtInstance, 4U, 0U, 7U, 1787,
    1802, -1, 2U);
  covrtEmlRelationalInitFcn(chartInstance->c9_covrtInstance, 4U, 0U, 8U, 1806,
    1821, -1, 4U);
}

static void mdl_cleanup_runtime_resources_c9_flightControlSystem
  (SFc9_flightControlSystemInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c9_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c9_covrtInstance);
}

static void enable_c9_flightControlSystem(SFc9_flightControlSystemInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c9_flightControlSystem
  (SFc9_flightControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c9_flightControlSystem
  (SFc9_flightControlSystemInstanceStruct *chartInstance)
{
  c9_emxArray_boolean_T *c9_x;
  c9_emxArray_int32_T *c9_ii;
  c9_emxArray_real_T *c9_b_centers;
  c9_emxArray_real_T *c9_centers;
  c9_emxArray_real_T *c9_idx2Keep;
  c9_emxArray_real_T *c9_metric;
  c9_emxArray_real_T *c9_radii;
  emlrtStack c9_b_st;
  emlrtStack c9_c_st;
  emlrtStack c9_d_st;
  emlrtStack c9_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c9_c_y = NULL;
  real_T c9_b_direct[2];
  real_T c9_b_land;
  real_T c9_b_z;
  real_T c9_c_z;
  real_T c9_d;
  real_T c9_d1;
  real_T c9_d10;
  real_T c9_d11;
  real_T c9_d2;
  real_T c9_d3;
  real_T c9_d4;
  real_T c9_d5;
  real_T c9_d6;
  real_T c9_d7;
  real_T c9_d8;
  real_T c9_d9;
  real_T c9_d_z;
  real_T c9_z;
  int32_T c9_b_k;
  int32_T c9_b_loop_ub;
  int32_T c9_b_metric;
  int32_T c9_c_centers;
  int32_T c9_c_k;
  int32_T c9_c_loop_ub;
  int32_T c9_c_metric;
  int32_T c9_d_centers;
  int32_T c9_d_k;
  int32_T c9_d_loop_ub;
  int32_T c9_e_k;
  int32_T c9_e_loop_ub;
  int32_T c9_f_k;
  int32_T c9_f_loop_ub;
  int32_T c9_g_k;
  int32_T c9_g_loop_ub;
  int32_T c9_h_k;
  int32_T c9_h_loop_ub;
  int32_T c9_i;
  int32_T c9_i1;
  int32_T c9_i10;
  int32_T c9_i11;
  int32_T c9_i12;
  int32_T c9_i13;
  int32_T c9_i14;
  int32_T c9_i15;
  int32_T c9_i16;
  int32_T c9_i17;
  int32_T c9_i18;
  int32_T c9_i19;
  int32_T c9_i2;
  int32_T c9_i20;
  int32_T c9_i21;
  int32_T c9_i22;
  int32_T c9_i23;
  int32_T c9_i24;
  int32_T c9_i25;
  int32_T c9_i26;
  int32_T c9_i27;
  int32_T c9_i28;
  int32_T c9_i29;
  int32_T c9_i3;
  int32_T c9_i30;
  int32_T c9_i31;
  int32_T c9_i32;
  int32_T c9_i33;
  int32_T c9_i34;
  int32_T c9_i35;
  int32_T c9_i36;
  int32_T c9_i37;
  int32_T c9_i38;
  int32_T c9_i39;
  int32_T c9_i4;
  int32_T c9_i40;
  int32_T c9_i41;
  int32_T c9_i42;
  int32_T c9_i43;
  int32_T c9_i44;
  int32_T c9_i45;
  int32_T c9_i46;
  int32_T c9_i47;
  int32_T c9_i48;
  int32_T c9_i49;
  int32_T c9_i5;
  int32_T c9_i50;
  int32_T c9_i51;
  int32_T c9_i52;
  int32_T c9_i53;
  int32_T c9_i54;
  int32_T c9_i55;
  int32_T c9_i56;
  int32_T c9_i57;
  int32_T c9_i58;
  int32_T c9_i59;
  int32_T c9_i6;
  int32_T c9_i60;
  int32_T c9_i61;
  int32_T c9_i62;
  int32_T c9_i63;
  int32_T c9_i64;
  int32_T c9_i65;
  int32_T c9_i66;
  int32_T c9_i67;
  int32_T c9_i68;
  int32_T c9_i69;
  int32_T c9_i7;
  int32_T c9_i70;
  int32_T c9_i71;
  int32_T c9_i72;
  int32_T c9_i73;
  int32_T c9_i74;
  int32_T c9_i75;
  int32_T c9_i76;
  int32_T c9_i77;
  int32_T c9_i78;
  int32_T c9_i79;
  int32_T c9_i8;
  int32_T c9_i9;
  int32_T c9_i_loop_ub;
  int32_T c9_j_loop_ub;
  int32_T c9_k;
  int32_T c9_k_loop_ub;
  int32_T c9_l_loop_ub;
  int32_T c9_loop_ub;
  int32_T c9_m_loop_ub;
  int32_T c9_n_loop_ub;
  uint32_T c9_b_q0;
  uint32_T c9_b_qY;
  uint32_T c9_c_q0;
  uint32_T c9_c_qY;
  uint32_T c9_d_q0;
  uint32_T c9_d_qY;
  uint32_T c9_q0;
  uint32_T c9_qY;
  uint32_T c9_u2;
  uint32_T c9_u4;
  uint32_T c9_u6;
  uint32_T c9_u7;
  uint8_T c9_blueChannel[19200];
  uint8_T c9_e_z[19200];
  uint8_T c9_greenChannel[19200];
  uint8_T c9_redChannel[19200];
  uint8_T c9_b_x;
  uint8_T c9_c_x;
  uint8_T c9_d_x;
  uint8_T c9_e_x;
  uint8_T c9_u;
  uint8_T c9_u1;
  uint8_T c9_u3;
  uint8_T c9_u5;
  boolean_T c9_b_Red_Comp[19200];
  boolean_T c9_b;
  boolean_T c9_b1;
  boolean_T c9_b10;
  boolean_T c9_b11;
  boolean_T c9_b2;
  boolean_T c9_b3;
  boolean_T c9_b4;
  boolean_T c9_b5;
  boolean_T c9_b6;
  boolean_T c9_b7;
  boolean_T c9_b8;
  boolean_T c9_b9;
  boolean_T c9_b_covSaturation;
  boolean_T c9_b_y;
  boolean_T c9_c_covSaturation;
  boolean_T c9_covSaturation;
  boolean_T c9_d_covSaturation;
  boolean_T c9_e_covSaturation;
  boolean_T c9_f_covSaturation;
  boolean_T c9_g_covSaturation;
  boolean_T c9_guard1 = false;
  boolean_T c9_h_covSaturation;
  c9_st.tls = chartInstance->c9_fEmlrtCtx;
  c9_b_st.prev = &c9_st;
  c9_b_st.tls = c9_st.tls;
  c9_c_st.prev = &c9_b_st;
  c9_c_st.tls = c9_b_st.tls;
  c9_d_st.prev = &c9_c_st;
  c9_d_st.tls = c9_c_st.tls;
  chartInstance->c9_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  for (c9_i = 0; c9_i < 57600; c9_i++) {
    covrtSigUpdateFcn(chartInstance->c9_covrtInstance, 0U, (real_T)
                      (*chartInstance->c9_I)[c9_i]);
  }

  chartInstance->c9_sfEvent = CALL_EVENT;
  covrtEmlFcnEval(chartInstance->c9_covrtInstance, 4U, 0, 0);
  for (c9_i1 = 0; c9_i1 < 2; c9_i1++) {
    c9_b_direct[c9_i1] = 0.0;
  }

  c9_b_land = 0.0;
  if (covrtEmlIfEval(chartInstance->c9_covrtInstance, 4U, 0, 0,
                     !chartInstance->c9_flag_threshold_not_empty)) {
    chartInstance->c9_flag_threshold = false;
    chartInstance->c9_flag_threshold_not_empty = true;
  }

  c9_emxInit_real_T(chartInstance, &c9_st, &c9_centers, 2, &c9_f_emlrtRTEI);
  c9_emxInit_real_T(chartInstance, &c9_st, &c9_radii, 2, &c9_g_emlrtRTEI);
  c9_emxInit_real_T1(chartInstance, &c9_st, &c9_idx2Keep, 1, &c9_c_emlrtRTEI);
  c9_emxInit_real_T(chartInstance, &c9_st, &c9_b_centers, 2, (emlrtRTEInfo *)
                    NULL);
  c9_emxInit_real_T(chartInstance, &c9_st, &c9_metric, 2, (emlrtRTEInfo *)NULL);
  c9_emxInit_boolean_T(chartInstance, &c9_st, &c9_x, 2, &c9_b_emlrtRTEI);
  c9_emxInit_int32_T(chartInstance, &c9_st, &c9_ii, 1, &c9_h_emlrtRTEI);
  if (covrtEmlIfEval(chartInstance->c9_covrtInstance, 4U, 0, 1,
                     !chartInstance->c9_flag_threshold)) {
    c9_i3 = 0;
    for (c9_i5 = 0; c9_i5 < 160; c9_i5++) {
      for (c9_i9 = 0; c9_i9 < 120; c9_i9++) {
        c9_redChannel[c9_i9 + c9_i3] = (*chartInstance->c9_I)[c9_i9 + c9_i3];
      }

      c9_i3 += 120;
    }

    c9_i8 = 0;
    for (c9_i11 = 0; c9_i11 < 160; c9_i11++) {
      for (c9_i15 = 0; c9_i15 < 120; c9_i15++) {
        c9_greenChannel[c9_i15 + c9_i8] = (*chartInstance->c9_I)[(c9_i15 + c9_i8)
          + 19200];
      }

      c9_i8 += 120;
    }

    c9_i14 = 0;
    for (c9_i17 = 0; c9_i17 < 160; c9_i17++) {
      for (c9_i19 = 0; c9_i19 < 120; c9_i19++) {
        c9_blueChannel[c9_i19 + c9_i14] = (*chartInstance->c9_I)[(c9_i19 +
          c9_i14) + 38400];
      }

      c9_i14 += 120;
    }

    for (c9_b_k = 0; c9_b_k < 19200; c9_b_k++) {
      c9_f_k = c9__s32_add__(chartInstance, c9_b_k, 1, 0, 1U, 532, 14);
      c9_c_x = c9_greenChannel[c9__s32_minus__(chartInstance, c9_f_k, 1, 0, 1U,
        532, 14)];
      c9_b_z = (real_T)c9_c_x / 2.0;
      c9_d1 = muDoubleScalarRound(c9_b_z);
      c9_b_covSaturation = false;
      if (c9_d1 < 256.0) {
        if (c9_d1 >= 0.0) {
          c9_u1 = (uint8_T)c9_d1;
        } else {
          c9_b_covSaturation = true;
          c9_u1 = 0U;
          sf_data_saturate_error(chartInstance->S, 1U, 532, 14);
        }
      } else if (c9_d1 >= 256.0) {
        c9_b_covSaturation = true;
        c9_u1 = MAX_uint8_T;
        sf_data_saturate_error(chartInstance->S, 1U, 532, 14);
      } else {
        c9_u1 = 0U;
      }

      covrtSaturationUpdateFcn(chartInstance->c9_covrtInstance, 4, 0, 6, 0,
        c9_b_covSaturation);
      c9_e_z[c9__s32_minus__(chartInstance, c9_f_k, 1, 0, 1U, 532, 14)] = c9_u1;
    }

    for (c9_e_k = 0; c9_e_k < 19200; c9_e_k++) {
      c9_h_k = c9__s32_add__(chartInstance, c9_e_k, 1, 0, 1U, 549, 13);
      c9_e_x = c9_blueChannel[c9__s32_minus__(chartInstance, c9_h_k, 1, 0, 1U,
        549, 13)];
      c9_d_z = (real_T)c9_e_x / 2.0;
      c9_d3 = muDoubleScalarRound(c9_d_z);
      c9_f_covSaturation = false;
      if (c9_d3 < 256.0) {
        if (c9_d3 >= 0.0) {
          c9_u5 = (uint8_T)c9_d3;
        } else {
          c9_f_covSaturation = true;
          c9_u5 = 0U;
          sf_data_saturate_error(chartInstance->S, 1U, 549, 13);
        }
      } else if (c9_d3 >= 256.0) {
        c9_f_covSaturation = true;
        c9_u5 = MAX_uint8_T;
        sf_data_saturate_error(chartInstance->S, 1U, 549, 13);
      } else {
        c9_u5 = 0U;
      }

      covrtSaturationUpdateFcn(chartInstance->c9_covrtInstance, 4, 0, 7, 0,
        c9_f_covSaturation);
      c9_greenChannel[c9__s32_minus__(chartInstance, c9_h_k, 1, 0, 1U, 549, 13)]
        = c9_u5;
    }

    for (c9_i21 = 0; c9_i21 < 19200; c9_i21++) {
      c9_b_q0 = c9_redChannel[c9_i21];
      c9_b_qY = c9_b_q0 - (uint32_T)c9_e_z[c9_i21];
      c9_e_covSaturation = false;
      if (c9_b_qY > c9_b_q0) {
        c9_e_covSaturation = true;
        c9_b_qY = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 519, 27);
      }

      c9_u4 = c9_b_qY;
      if (c9_u4 > 255U) {
        c9_e_covSaturation = true;
        c9_u4 = 255U;
        sf_data_saturate_error(chartInstance->S, 1U, 519, 27);
      }

      covrtSaturationUpdateFcn(chartInstance->c9_covrtInstance, 4, 0, 4, 0,
        c9_e_covSaturation);
      c9_d_q0 = (uint8_T)c9_u4;
      c9_d_qY = c9_d_q0 - (uint32_T)c9_greenChannel[c9_i21];
      c9_h_covSaturation = false;
      if (c9_d_qY > c9_d_q0) {
        c9_h_covSaturation = true;
        c9_d_qY = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 519, 43);
      }

      c9_u7 = c9_d_qY;
      if (c9_u7 > 255U) {
        c9_h_covSaturation = true;
        c9_u7 = 255U;
        sf_data_saturate_error(chartInstance->S, 1U, 519, 43);
      }

      covrtSaturationUpdateFcn(chartInstance->c9_covrtInstance, 4, 0, 5, 0,
        c9_h_covSaturation);
      c9_b_Red_Comp[c9_i21] = ((real_T)(uint8_T)c9_u7 > 50.0);
    }

    c9_b_st.site = &c9_emlrtRSI;
    c9_centers->size[0] = 0;
    c9_centers->size[1] = 0;
    c9_radii->size[0] = 0;
    c9_radii->size[1] = 0;
    c9_c_st.site = &c9_m_emlrtRSI;
    c9_chaccum(chartInstance, &c9_c_st, c9_b_Red_Comp,
               chartInstance->c9_accumMatrix, chartInstance->c9_gradientImg);
    if (!c9_any(chartInstance, &c9_b_st, chartInstance->c9_accumMatrix)) {
    } else {
      c9_c_st.site = &c9_n_emlrtRSI;
      for (c9_i23 = 0; c9_i23 < 19200; c9_i23++) {
        chartInstance->c9_c_accumMatrix[c9_i23] = chartInstance->
          c9_accumMatrix[c9_i23];
      }

      c9_chcenters(chartInstance, &c9_c_st, chartInstance->c9_c_accumMatrix,
                   c9_b_centers, c9_metric);
      c9_i26 = c9_centers->size[0] * c9_centers->size[1];
      c9_centers->size[0] = c9_b_centers->size[0];
      c9_centers->size[1] = c9_b_centers->size[1];
      c9_emxEnsureCapacity_real_T(chartInstance, &c9_b_st, c9_centers, c9_i26,
        &c9_emlrtRTEI);
      c9_b_loop_ub = c9_b_centers->size[0] * c9_b_centers->size[1] - 1;
      for (c9_i32 = 0; c9_i32 <= c9_b_loop_ub; c9_i32++) {
        c9_centers->data[c9_i32] = c9_b_centers->data[c9_i32];
      }

      c9_b5 = (c9_b_centers->size[0] == 0);
      c9_b7 = (c9_b_centers->size[1] == 0);
      if (c9_b5 || c9_b7) {
      } else {
        c9_c_st.site = &c9_o_emlrtRSI;
        c9_i38 = c9_x->size[0] * c9_x->size[1];
        c9_x->size[0] = c9_metric->size[0];
        c9_x->size[1] = c9_metric->size[1];
        c9_emxEnsureCapacity_boolean_T(chartInstance, &c9_c_st, c9_x, c9_i38,
          &c9_b_emlrtRTEI);
        c9_d_loop_ub = c9_metric->size[0] * c9_metric->size[1] - 1;
        for (c9_i45 = 0; c9_i45 <= c9_d_loop_ub; c9_i45++) {
          c9_x->data[c9_i45] = (c9_metric->data[c9_i45] >= 0.069999999999999951);
        }

        c9_d_st.site = &c9_jf_emlrtRSI;
        c9_b_eml_find(chartInstance, &c9_d_st, c9_x, c9_ii);
        c9_i50 = c9_idx2Keep->size[0];
        c9_idx2Keep->size[0] = c9_ii->size[0];
        c9_emxEnsureCapacity_real_T1(chartInstance, &c9_c_st, c9_idx2Keep,
          c9_i50, &c9_c_emlrtRTEI);
        c9_f_loop_ub = c9_ii->size[0] - 1;
        for (c9_i56 = 0; c9_i56 <= c9_f_loop_ub; c9_i56++) {
          c9_idx2Keep->data[c9_i56] = (real_T)c9_ii->data[c9_i56];
        }

        c9_d_centers = c9_b_centers->size[0];
        c9_i60 = c9_centers->size[0] * c9_centers->size[1];
        c9_centers->size[0] = c9_idx2Keep->size[0];
        c9_centers->size[1] = c9_b_centers->size[1];
        c9_emxEnsureCapacity_real_T(chartInstance, &c9_b_st, c9_centers, c9_i60,
          &c9_d_emlrtRTEI);
        c9_h_loop_ub = c9_b_centers->size[1] - 1;
        for (c9_i65 = 0; c9_i65 <= c9_h_loop_ub; c9_i65++) {
          c9_j_loop_ub = c9_idx2Keep->size[0] - 1;
          for (c9_i69 = 0; c9_i69 <= c9_j_loop_ub; c9_i69++) {
            c9_i73 = (int32_T)c9_idx2Keep->data[c9_i69];
            if ((c9_i73 < 1) || (c9_i73 > c9_d_centers)) {
              emlrtDynamicBoundsCheckR2012b(c9_i73, 1, c9_d_centers,
                &c9_m_emlrtBCI, &c9_b_st);
            }

            c9_centers->data[c9_i69 + c9_centers->size[0] * c9_i65] =
              c9_b_centers->data[(c9_i73 + c9_b_centers->size[0] * c9_i65) - 1];
          }
        }

        c9_c_metric = c9_metric->size[0];
        c9_l_loop_ub = c9_idx2Keep->size[0] - 1;
        for (c9_i71 = 0; c9_i71 <= c9_l_loop_ub; c9_i71++) {
          c9_i75 = (int32_T)c9_idx2Keep->data[c9_i71];
          if ((c9_i75 < 1) || (c9_i75 > c9_c_metric)) {
            emlrtDynamicBoundsCheckR2012b(c9_i75, 1, c9_c_metric, &c9_n_emlrtBCI,
              &c9_b_st);
          }
        }

        c9_b9 = (c9_centers->size[0] == 0);
        c9_b11 = (c9_centers->size[1] == 0);
        if (c9_b9 || c9_b11) {
          c9_centers->size[0] = 0;
          c9_centers->size[1] = 0;
        } else {
          c9_c_st.site = &c9_p_emlrtRSI;
          c9_chradiiphcode(chartInstance, &c9_c_st, c9_centers,
                           chartInstance->c9_accumMatrix, c9_idx2Keep);
          c9_i77 = c9_radii->size[0] * c9_radii->size[1];
          c9_radii->size[0] = c9_idx2Keep->size[0];
          c9_radii->size[1] = 1;
          c9_emxEnsureCapacity_real_T(chartInstance, &c9_b_st, c9_radii, c9_i77,
            &c9_e_emlrtRTEI);
          c9_n_loop_ub = c9_idx2Keep->size[0] - 1;
          for (c9_i79 = 0; c9_i79 <= c9_n_loop_ub; c9_i79++) {
            c9_radii->data[c9_i79] = c9_idx2Keep->data[c9_i79];
          }
        }
      }
    }

    c9_b1 = (c9_radii->size[0] == 0);
    c9_b3 = (c9_radii->size[1] == 0);
    if (covrtEmlIfEval(chartInstance->c9_covrtInstance, 4U, 0, 2,
                       covrtEmlMcdcEval(chartInstance->c9_covrtInstance, 4U, 0,
          0, !covrtEmlCondEval(chartInstance->c9_covrtInstance, 4U, 0, 0, c9_b1 ||
           c9_b3)))) {
      c9_i27 = c9__s32_s64_(chartInstance, (int64_T)c9_centers->size[0] *
                            (int64_T)c9_centers->size[1], 0, 1U, 905, 17);
      c9_i29 = 2;
      if ((c9_i29 < 1) || (c9_i29 > c9_i27)) {
        emlrtDynamicBoundsCheckR2012b(c9_i29, 1, c9_i27, &c9_c_emlrtBCI, &c9_st);
      }

      c9_b_direct[0] = c9_centers->data[c9_i29 - 1] - 60.0;
      c9_i33 = c9__s32_s64_(chartInstance, (int64_T)c9_centers->size[0] *
                            (int64_T)c9_centers->size[1], 0, 1U, 925, 13);
      c9_i35 = 1;
      if ((c9_i35 < 1) || (c9_i35 > c9_i33)) {
        emlrtDynamicBoundsCheckR2012b(c9_i35, 1, c9_i33, &c9_d_emlrtBCI, &c9_st);
      }

      c9_b_direct[1] = c9_centers->data[c9_i35 - 1] - 80.0;
      c9_i36 = c9__s32_s64_(chartInstance, (int64_T)c9_centers->size[0] *
                            (int64_T)c9_centers->size[1], 0, 1U, 1077, 10);
      c9_i40 = 1;
      if ((c9_i40 < 1) || (c9_i40 > c9_i36)) {
        emlrtDynamicBoundsCheckR2012b(c9_i40, 1, c9_i36, &c9_e_emlrtBCI, &c9_st);
      }

      c9_d4 = c9_centers->data[c9_i40 - 1];
      c9_guard1 = false;
      if (covrtEmlCondEval(chartInstance->c9_covrtInstance, 4U, 0, 1,
                           covrtRelationalopUpdateFcn
                           (chartInstance->c9_covrtInstance, 4U, 0U, 1U, c9_d4,
                            85.0, -1, 2U, c9_d4 < 85.0))) {
        c9_i46 = c9__s32_s64_(chartInstance, (int64_T)c9_centers->size[0] *
                              (int64_T)c9_centers->size[1], 0, 1U, 1096, 10);
        c9_i48 = 1;
        if ((c9_i48 < 1) || (c9_i48 > c9_i46)) {
          emlrtDynamicBoundsCheckR2012b(c9_i48, 1, c9_i46, &c9_f_emlrtBCI,
            &c9_st);
        }

        c9_d6 = c9_centers->data[c9_i48 - 1];
        if (covrtEmlCondEval(chartInstance->c9_covrtInstance, 4U, 0, 2,
                             covrtRelationalopUpdateFcn
                             (chartInstance->c9_covrtInstance, 4U, 0U, 2U, c9_d6,
                              75.0, -1, 4U, c9_d6 > 75.0))) {
          c9_i54 = c9__s32_s64_(chartInstance, (int64_T)c9_centers->size[0] *
                                (int64_T)c9_centers->size[1], 0, 1U, 1115, 10);
          c9_i57 = 2;
          if ((c9_i57 < 1) || (c9_i57 > c9_i54)) {
            emlrtDynamicBoundsCheckR2012b(c9_i57, 1, c9_i54, &c9_h_emlrtBCI,
              &c9_st);
          }

          c9_d8 = c9_centers->data[c9_i57 - 1];
          if (covrtEmlCondEval(chartInstance->c9_covrtInstance, 4U, 0, 3,
                               covrtRelationalopUpdateFcn
                               (chartInstance->c9_covrtInstance, 4U, 0U, 3U,
                                c9_d8, 65.0, -1, 2U, c9_d8 < 65.0))) {
            c9_i62 = c9__s32_s64_(chartInstance, (int64_T)c9_centers->size[0] *
                                  (int64_T)c9_centers->size[1], 0, 1U, 1134, 10);
            c9_i63 = 2;
            if ((c9_i63 < 1) || (c9_i63 > c9_i62)) {
              emlrtDynamicBoundsCheckR2012b(c9_i63, 1, c9_i62, &c9_j_emlrtBCI,
                &c9_st);
            }

            c9_d10 = c9_centers->data[c9_i63 - 1];
            if (covrtEmlCondEval(chartInstance->c9_covrtInstance, 4U, 0, 4,
                                 covrtRelationalopUpdateFcn
                                 (chartInstance->c9_covrtInstance, 4U, 0U, 4U,
                                  c9_d10, 55.0, -1, 4U, c9_d10 > 55.0))) {
              covrtEmlMcdcEval(chartInstance->c9_covrtInstance, 4U, 0, 1, true);
              covrtEmlIfEval(chartInstance->c9_covrtInstance, 4U, 0, 3, true);
              c9_b_land = 1.0;
            } else {
              c9_guard1 = true;
            }
          } else {
            c9_guard1 = true;
          }
        } else {
          c9_guard1 = true;
        }
      } else {
        c9_guard1 = true;
      }

      if (c9_guard1) {
        covrtEmlMcdcEval(chartInstance->c9_covrtInstance, 4U, 0, 1, false);
        covrtEmlIfEval(chartInstance->c9_covrtInstance, 4U, 0, 3, false);
      }

      chartInstance->c9_flag_threshold = true;
    }
  } else {
    c9_i2 = 0;
    for (c9_i4 = 0; c9_i4 < 160; c9_i4++) {
      for (c9_i7 = 0; c9_i7 < 120; c9_i7++) {
        c9_redChannel[c9_i7 + c9_i2] = (*chartInstance->c9_I)[c9_i7 + c9_i2];
      }

      c9_i2 += 120;
    }

    c9_i6 = 0;
    for (c9_i10 = 0; c9_i10 < 160; c9_i10++) {
      for (c9_i13 = 0; c9_i13 < 120; c9_i13++) {
        c9_greenChannel[c9_i13 + c9_i6] = (*chartInstance->c9_I)[(c9_i13 + c9_i6)
          + 19200];
      }

      c9_i6 += 120;
    }

    c9_i12 = 0;
    for (c9_i16 = 0; c9_i16 < 160; c9_i16++) {
      for (c9_i18 = 0; c9_i18 < 120; c9_i18++) {
        c9_blueChannel[c9_i18 + c9_i12] = (*chartInstance->c9_I)[(c9_i18 +
          c9_i12) + 38400];
      }

      c9_i12 += 120;
    }

    for (c9_k = 0; c9_k < 19200; c9_k++) {
      c9_d_k = c9__s32_add__(chartInstance, c9_k, 1, 0, 1U, 1447, 14);
      c9_b_x = c9_greenChannel[c9__s32_minus__(chartInstance, c9_d_k, 1, 0, 1U,
        1447, 14)];
      c9_z = (real_T)c9_b_x / 2.0;
      c9_d = muDoubleScalarRound(c9_z);
      c9_covSaturation = false;
      if (c9_d < 256.0) {
        if (c9_d >= 0.0) {
          c9_u = (uint8_T)c9_d;
        } else {
          c9_covSaturation = true;
          c9_u = 0U;
          sf_data_saturate_error(chartInstance->S, 1U, 1447, 14);
        }
      } else if (c9_d >= 256.0) {
        c9_covSaturation = true;
        c9_u = MAX_uint8_T;
        sf_data_saturate_error(chartInstance->S, 1U, 1447, 14);
      } else {
        c9_u = 0U;
      }

      covrtSaturationUpdateFcn(chartInstance->c9_covrtInstance, 4, 0, 2, 0,
        c9_covSaturation);
      c9_e_z[c9__s32_minus__(chartInstance, c9_d_k, 1, 0, 1U, 1447, 14)] = c9_u;
    }

    for (c9_c_k = 0; c9_c_k < 19200; c9_c_k++) {
      c9_g_k = c9__s32_add__(chartInstance, c9_c_k, 1, 0, 1U, 1464, 13);
      c9_d_x = c9_blueChannel[c9__s32_minus__(chartInstance, c9_g_k, 1, 0, 1U,
        1464, 13)];
      c9_c_z = (real_T)c9_d_x / 2.0;
      c9_d2 = muDoubleScalarRound(c9_c_z);
      c9_d_covSaturation = false;
      if (c9_d2 < 256.0) {
        if (c9_d2 >= 0.0) {
          c9_u3 = (uint8_T)c9_d2;
        } else {
          c9_d_covSaturation = true;
          c9_u3 = 0U;
          sf_data_saturate_error(chartInstance->S, 1U, 1464, 13);
        }
      } else if (c9_d2 >= 256.0) {
        c9_d_covSaturation = true;
        c9_u3 = MAX_uint8_T;
        sf_data_saturate_error(chartInstance->S, 1U, 1464, 13);
      } else {
        c9_u3 = 0U;
      }

      covrtSaturationUpdateFcn(chartInstance->c9_covrtInstance, 4, 0, 3, 0,
        c9_d_covSaturation);
      c9_greenChannel[c9__s32_minus__(chartInstance, c9_g_k, 1, 0, 1U, 1464, 13)]
        = c9_u3;
    }

    for (c9_i20 = 0; c9_i20 < 19200; c9_i20++) {
      c9_q0 = c9_redChannel[c9_i20];
      c9_qY = c9_q0 - (uint32_T)c9_e_z[c9_i20];
      c9_c_covSaturation = false;
      if (c9_qY > c9_q0) {
        c9_c_covSaturation = true;
        c9_qY = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 1434, 27);
      }

      c9_u2 = c9_qY;
      if (c9_u2 > 255U) {
        c9_c_covSaturation = true;
        c9_u2 = 255U;
        sf_data_saturate_error(chartInstance->S, 1U, 1434, 27);
      }

      covrtSaturationUpdateFcn(chartInstance->c9_covrtInstance, 4, 0, 0, 0,
        c9_c_covSaturation);
      c9_c_q0 = (uint8_T)c9_u2;
      c9_c_qY = c9_c_q0 - (uint32_T)c9_greenChannel[c9_i20];
      c9_g_covSaturation = false;
      if (c9_c_qY > c9_c_q0) {
        c9_g_covSaturation = true;
        c9_c_qY = 0U;
        sf_data_saturate_error(chartInstance->S, 1U, 1434, 43);
      }

      c9_u6 = c9_c_qY;
      if (c9_u6 > 255U) {
        c9_g_covSaturation = true;
        c9_u6 = 255U;
        sf_data_saturate_error(chartInstance->S, 1U, 1434, 43);
      }

      covrtSaturationUpdateFcn(chartInstance->c9_covrtInstance, 4, 0, 1, 0,
        c9_g_covSaturation);
      c9_b_Red_Comp[c9_i20] = ((real_T)(uint8_T)c9_u6 > 50.0);
    }

    c9_b_st.site = &c9_b_emlrtRSI;
    c9_centers->size[0] = 0;
    c9_centers->size[1] = 0;
    c9_radii->size[0] = 0;
    c9_radii->size[1] = 0;
    c9_c_st.site = &c9_m_emlrtRSI;
    c9_chaccum(chartInstance, &c9_c_st, c9_b_Red_Comp,
               chartInstance->c9_accumMatrix, chartInstance->c9_gradientImg);
    if (!c9_any(chartInstance, &c9_b_st, chartInstance->c9_accumMatrix)) {
    } else {
      c9_c_st.site = &c9_n_emlrtRSI;
      for (c9_i22 = 0; c9_i22 < 19200; c9_i22++) {
        chartInstance->c9_b_accumMatrix[c9_i22] = chartInstance->
          c9_accumMatrix[c9_i22];
      }

      c9_b_chcenters(chartInstance, &c9_c_st, chartInstance->c9_b_accumMatrix,
                     c9_b_centers, c9_metric);
      c9_i24 = c9_centers->size[0] * c9_centers->size[1];
      c9_centers->size[0] = c9_b_centers->size[0];
      c9_centers->size[1] = c9_b_centers->size[1];
      c9_emxEnsureCapacity_real_T(chartInstance, &c9_b_st, c9_centers, c9_i24,
        &c9_emlrtRTEI);
      c9_loop_ub = c9_b_centers->size[0] * c9_b_centers->size[1] - 1;
      for (c9_i30 = 0; c9_i30 <= c9_loop_ub; c9_i30++) {
        c9_centers->data[c9_i30] = c9_b_centers->data[c9_i30];
      }

      c9_b4 = (c9_b_centers->size[0] == 0);
      c9_b6 = (c9_b_centers->size[1] == 0);
      if (c9_b4 || c9_b6) {
      } else {
        c9_c_st.site = &c9_o_emlrtRSI;
        c9_i37 = c9_x->size[0] * c9_x->size[1];
        c9_x->size[0] = c9_metric->size[0];
        c9_x->size[1] = c9_metric->size[1];
        c9_emxEnsureCapacity_boolean_T(chartInstance, &c9_c_st, c9_x, c9_i37,
          &c9_b_emlrtRTEI);
        c9_c_loop_ub = c9_metric->size[0] * c9_metric->size[1] - 1;
        for (c9_i44 = 0; c9_i44 <= c9_c_loop_ub; c9_i44++) {
          c9_x->data[c9_i44] = (c9_metric->data[c9_i44] >= 0.064999999999999947);
        }

        c9_d_st.site = &c9_jf_emlrtRSI;
        c9_b_eml_find(chartInstance, &c9_d_st, c9_x, c9_ii);
        c9_i49 = c9_idx2Keep->size[0];
        c9_idx2Keep->size[0] = c9_ii->size[0];
        c9_emxEnsureCapacity_real_T1(chartInstance, &c9_c_st, c9_idx2Keep,
          c9_i49, &c9_c_emlrtRTEI);
        c9_e_loop_ub = c9_ii->size[0] - 1;
        for (c9_i55 = 0; c9_i55 <= c9_e_loop_ub; c9_i55++) {
          c9_idx2Keep->data[c9_i55] = (real_T)c9_ii->data[c9_i55];
        }

        c9_c_centers = c9_b_centers->size[0];
        c9_i58 = c9_centers->size[0] * c9_centers->size[1];
        c9_centers->size[0] = c9_idx2Keep->size[0];
        c9_centers->size[1] = c9_b_centers->size[1];
        c9_emxEnsureCapacity_real_T(chartInstance, &c9_b_st, c9_centers, c9_i58,
          &c9_d_emlrtRTEI);
        c9_g_loop_ub = c9_b_centers->size[1] - 1;
        for (c9_i64 = 0; c9_i64 <= c9_g_loop_ub; c9_i64++) {
          c9_i_loop_ub = c9_idx2Keep->size[0] - 1;
          for (c9_i68 = 0; c9_i68 <= c9_i_loop_ub; c9_i68++) {
            c9_i72 = (int32_T)c9_idx2Keep->data[c9_i68];
            if ((c9_i72 < 1) || (c9_i72 > c9_c_centers)) {
              emlrtDynamicBoundsCheckR2012b(c9_i72, 1, c9_c_centers,
                &c9_m_emlrtBCI, &c9_b_st);
            }

            c9_centers->data[c9_i68 + c9_centers->size[0] * c9_i64] =
              c9_b_centers->data[(c9_i72 + c9_b_centers->size[0] * c9_i64) - 1];
          }
        }

        c9_b_metric = c9_metric->size[0];
        c9_k_loop_ub = c9_idx2Keep->size[0] - 1;
        for (c9_i70 = 0; c9_i70 <= c9_k_loop_ub; c9_i70++) {
          c9_i74 = (int32_T)c9_idx2Keep->data[c9_i70];
          if ((c9_i74 < 1) || (c9_i74 > c9_b_metric)) {
            emlrtDynamicBoundsCheckR2012b(c9_i74, 1, c9_b_metric, &c9_n_emlrtBCI,
              &c9_b_st);
          }
        }

        c9_b8 = (c9_centers->size[0] == 0);
        c9_b10 = (c9_centers->size[1] == 0);
        if (c9_b8 || c9_b10) {
          c9_centers->size[0] = 0;
          c9_centers->size[1] = 0;
        } else {
          c9_c_st.site = &c9_p_emlrtRSI;
          c9_chradiiphcode(chartInstance, &c9_c_st, c9_centers,
                           chartInstance->c9_accumMatrix, c9_idx2Keep);
          c9_i76 = c9_radii->size[0] * c9_radii->size[1];
          c9_radii->size[0] = c9_idx2Keep->size[0];
          c9_radii->size[1] = 1;
          c9_emxEnsureCapacity_real_T(chartInstance, &c9_b_st, c9_radii, c9_i76,
            &c9_e_emlrtRTEI);
          c9_m_loop_ub = c9_idx2Keep->size[0] - 1;
          for (c9_i78 = 0; c9_i78 <= c9_m_loop_ub; c9_i78++) {
            c9_radii->data[c9_i78] = c9_idx2Keep->data[c9_i78];
          }
        }
      }
    }

    c9_b = (c9_radii->size[0] == 0);
    c9_b2 = (c9_radii->size[1] == 0);
    if (covrtEmlIfEval(chartInstance->c9_covrtInstance, 4U, 0, 4, c9_b || c9_b2))
    {
      chartInstance->c9_flag_threshold = false;
    } else {
      c9_i25 = c9__s32_s64_(chartInstance, (int64_T)c9_centers->size[0] *
                            (int64_T)c9_centers->size[1], 0, 1U, 1704, 15);
      c9_i28 = 2;
      if ((c9_i28 < 1) || (c9_i28 > c9_i25)) {
        emlrtDynamicBoundsCheckR2012b(c9_i28, 1, c9_i25, &c9_emlrtBCI, &c9_st);
      }

      c9_b_direct[0] = c9_centers->data[c9_i28 - 1] - 60.0;
      c9_i31 = c9__s32_s64_(chartInstance, (int64_T)c9_centers->size[0] *
                            (int64_T)c9_centers->size[1], 0, 1U, 1722, 13);
      c9_i34 = 1;
      if ((c9_i34 < 1) || (c9_i34 > c9_i31)) {
        emlrtDynamicBoundsCheckR2012b(c9_i34, 1, c9_i31, &c9_b_emlrtBCI, &c9_st);
      }

      c9_b_direct[1] = c9_centers->data[c9_i34 - 1] - 80.0;
      sf_mex_printf("%s =\\n", "direct");
      c9_c_y = NULL;
      sf_mex_assign(&c9_c_y, sf_mex_create("y", c9_b_direct, 0, 0U, 1U, 0U, 2, 1,
        2), false);
      sf_mex_call(&c9_st, NULL, "disp", 0U, 1U, 14, c9_c_y);
      c9_i41 = c9__s32_s64_(chartInstance, (int64_T)c9_centers->size[0] *
                            (int64_T)c9_centers->size[1], 0, 1U, 1749, 10);
      c9_i43 = 1;
      if ((c9_i43 < 1) || (c9_i43 > c9_i41)) {
        emlrtDynamicBoundsCheckR2012b(c9_i43, 1, c9_i41, &c9_g_emlrtBCI, &c9_st);
      }

      c9_d5 = c9_centers->data[c9_i43 - 1];
      c9_guard1 = false;
      if (covrtEmlCondEval(chartInstance->c9_covrtInstance, 4U, 0, 5,
                           covrtRelationalopUpdateFcn
                           (chartInstance->c9_covrtInstance, 4U, 0U, 5U, c9_d5,
                            85.0, -1, 2U, c9_d5 < 85.0))) {
        c9_i51 = c9__s32_s64_(chartInstance, (int64_T)c9_centers->size[0] *
                              (int64_T)c9_centers->size[1], 0, 1U, 1768, 10);
        c9_i53 = 1;
        if ((c9_i53 < 1) || (c9_i53 > c9_i51)) {
          emlrtDynamicBoundsCheckR2012b(c9_i53, 1, c9_i51, &c9_i_emlrtBCI,
            &c9_st);
        }

        c9_d7 = c9_centers->data[c9_i53 - 1];
        if (covrtEmlCondEval(chartInstance->c9_covrtInstance, 4U, 0, 6,
                             covrtRelationalopUpdateFcn
                             (chartInstance->c9_covrtInstance, 4U, 0U, 6U, c9_d7,
                              75.0, -1, 4U, c9_d7 > 75.0))) {
          c9_i59 = c9__s32_s64_(chartInstance, (int64_T)c9_centers->size[0] *
                                (int64_T)c9_centers->size[1], 0, 1U, 1787, 10);
          c9_i61 = 2;
          if ((c9_i61 < 1) || (c9_i61 > c9_i59)) {
            emlrtDynamicBoundsCheckR2012b(c9_i61, 1, c9_i59, &c9_k_emlrtBCI,
              &c9_st);
          }

          c9_d9 = c9_centers->data[c9_i61 - 1];
          if (covrtEmlCondEval(chartInstance->c9_covrtInstance, 4U, 0, 7,
                               covrtRelationalopUpdateFcn
                               (chartInstance->c9_covrtInstance, 4U, 0U, 7U,
                                c9_d9, 65.0, -1, 2U, c9_d9 < 65.0))) {
            c9_i66 = c9__s32_s64_(chartInstance, (int64_T)c9_centers->size[0] *
                                  (int64_T)c9_centers->size[1], 0, 1U, 1806, 10);
            c9_i67 = 2;
            if ((c9_i67 < 1) || (c9_i67 > c9_i66)) {
              emlrtDynamicBoundsCheckR2012b(c9_i67, 1, c9_i66, &c9_l_emlrtBCI,
                &c9_st);
            }

            c9_d11 = c9_centers->data[c9_i67 - 1];
            if (covrtEmlCondEval(chartInstance->c9_covrtInstance, 4U, 0, 8,
                                 covrtRelationalopUpdateFcn
                                 (chartInstance->c9_covrtInstance, 4U, 0U, 8U,
                                  c9_d11, 55.0, -1, 4U, c9_d11 > 55.0))) {
              covrtEmlMcdcEval(chartInstance->c9_covrtInstance, 4U, 0, 2, true);
              covrtEmlIfEval(chartInstance->c9_covrtInstance, 4U, 0, 5, true);
              c9_b_land = 1.0;
            } else {
              c9_guard1 = true;
            }
          } else {
            c9_guard1 = true;
          }
        } else {
          c9_guard1 = true;
        }
      } else {
        c9_guard1 = true;
      }

      if (c9_guard1) {
        covrtEmlMcdcEval(chartInstance->c9_covrtInstance, 4U, 0, 2, false);
        covrtEmlIfEval(chartInstance->c9_covrtInstance, 4U, 0, 5, false);
      }
    }
  }

  c9_emxFree_int32_T(chartInstance, &c9_ii);
  c9_emxFree_boolean_T(chartInstance, &c9_x);
  c9_emxFree_real_T(chartInstance, &c9_metric);
  c9_emxFree_real_T(chartInstance, &c9_b_centers);
  c9_emxFree_real_T(chartInstance, &c9_idx2Keep);
  c9_emxFree_real_T(chartInstance, &c9_radii);
  c9_emxFree_real_T(chartInstance, &c9_centers);
  c9_b_y = chartInstance->c9_flag_threshold;
  *chartInstance->c9_land = c9_b_land;
  for (c9_i39 = 0; c9_i39 < 2; c9_i39++) {
    (*chartInstance->c9_direct)[c9_i39] = c9_b_direct[c9_i39];
  }

  *chartInstance->c9_y = c9_b_y;
  for (c9_i42 = 0; c9_i42 < 19200; c9_i42++) {
    (*chartInstance->c9_Red_Comp)[c9_i42] = c9_b_Red_Comp[c9_i42];
  }

  c9_do_animation_call_c9_flightControlSystem(chartInstance);
  covrtSigUpdateFcn(chartInstance->c9_covrtInstance, 1U, *chartInstance->c9_land);
  for (c9_i47 = 0; c9_i47 < 2; c9_i47++) {
    covrtSigUpdateFcn(chartInstance->c9_covrtInstance, 2U,
                      (*chartInstance->c9_direct)[c9_i47]);
  }

  covrtSigUpdateFcn(chartInstance->c9_covrtInstance, 3U, (real_T)
                    *chartInstance->c9_y);
  for (c9_i52 = 0; c9_i52 < 19200; c9_i52++) {
    covrtSigUpdateFcn(chartInstance->c9_covrtInstance, 4U, (real_T)
                      (*chartInstance->c9_Red_Comp)[c9_i52]);
  }
}

static void ext_mode_exec_c9_flightControlSystem
  (SFc9_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c9_update_jit_animation_c9_flightControlSystem
  (SFc9_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c9_do_animation_call_c9_flightControlSystem
  (SFc9_flightControlSystemInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c9_flightControlSystem
  (SFc9_flightControlSystemInstanceStruct *chartInstance)
{
  const mxArray *c9_b_y = NULL;
  const mxArray *c9_c_y = NULL;
  const mxArray *c9_d_y = NULL;
  const mxArray *c9_e_y = NULL;
  const mxArray *c9_f_y = NULL;
  const mxArray *c9_g_y = NULL;
  const mxArray *c9_h_y = NULL;
  const mxArray *c9_st;
  c9_st = NULL;
  c9_st = NULL;
  c9_b_y = NULL;
  sf_mex_assign(&c9_b_y, sf_mex_createcellmatrix(6, 1), false);
  c9_c_y = NULL;
  sf_mex_assign(&c9_c_y, sf_mex_create("y", *chartInstance->c9_Red_Comp, 11, 0U,
    1U, 0U, 2, 120, 160), false);
  sf_mex_setcell(c9_b_y, 0, c9_c_y);
  c9_d_y = NULL;
  sf_mex_assign(&c9_d_y, sf_mex_create("y", *chartInstance->c9_direct, 0, 0U, 1U,
    0U, 2, 1, 2), false);
  sf_mex_setcell(c9_b_y, 1, c9_d_y);
  c9_e_y = NULL;
  sf_mex_assign(&c9_e_y, sf_mex_create("y", chartInstance->c9_land, 0, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c9_b_y, 2, c9_e_y);
  c9_f_y = NULL;
  sf_mex_assign(&c9_f_y, sf_mex_create("y", chartInstance->c9_y, 11, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c9_b_y, 3, c9_f_y);
  c9_g_y = NULL;
  if (!chartInstance->c9_flag_threshold_not_empty) {
    sf_mex_assign(&c9_g_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c9_g_y, sf_mex_create("y", &chartInstance->c9_flag_threshold,
      11, 0U, 0U, 0U, 0), false);
  }

  sf_mex_setcell(c9_b_y, 4, c9_g_y);
  c9_h_y = NULL;
  sf_mex_assign(&c9_h_y, sf_mex_create("y",
    &chartInstance->c9_is_active_c9_flightControlSystem, 3, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c9_b_y, 5, c9_h_y);
  sf_mex_assign(&c9_st, c9_b_y, false);
  return c9_st;
}

static void set_sim_state_c9_flightControlSystem
  (SFc9_flightControlSystemInstanceStruct *chartInstance, const mxArray *c9_st)
{
  const mxArray *c9_u;
  real_T c9_dv[2];
  int32_T c9_i;
  int32_T c9_i1;
  boolean_T c9_bv[19200];
  chartInstance->c9_doneDoubleBufferReInit = true;
  c9_u = sf_mex_dup(c9_st);
  c9_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c9_u, 0)),
                      "Red_Comp", c9_bv);
  for (c9_i = 0; c9_i < 19200; c9_i++) {
    (*chartInstance->c9_Red_Comp)[c9_i] = c9_bv[c9_i];
  }

  c9_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c9_u, 1)),
                        "direct", c9_dv);
  for (c9_i1 = 0; c9_i1 < 2; c9_i1++) {
    (*chartInstance->c9_direct)[c9_i1] = c9_dv[c9_i1];
  }

  *chartInstance->c9_land = c9_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c9_u, 2)), "land");
  *chartInstance->c9_y = c9_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c9_u, 3)), "y");
  chartInstance->c9_flag_threshold = c9_i_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c9_u, 4)), "flag_threshold",
    &chartInstance->c9_flag_threshold_not_empty);
  chartInstance->c9_is_active_c9_flightControlSystem = c9_k_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c9_u, 5)),
     "is_active_c9_flightControlSystem");
  sf_mex_destroy(&c9_u);
  sf_mex_destroy(&c9_st);
}

static void initSimStructsc9_flightControlSystem
  (SFc9_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

const mxArray *sf_c9_flightControlSystem_get_eml_resolved_functions_info(void)
{
  const mxArray *c9_nameCaptureInfo = NULL;
  c9_nameCaptureInfo = NULL;
  sf_mex_assign(&c9_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c9_nameCaptureInfo;
}

static void c9_imfilter(SFc9_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c9_sp, real32_T c9_varargin_1[19200], real32_T c9_b[19200])
{
  static real_T c9_kernel[25] = { 0.014418818362460822, 0.028084023356349175,
    0.0350727008055935, 0.028084023356349175, 0.014418818362460822,
    0.028084023356349175, 0.054700208300935887, 0.068312293270780214,
    0.054700208300935887, 0.028084023356349175, 0.0350727008055935,
    0.068312293270780214, 0.085311730190125085, 0.068312293270780214,
    0.0350727008055935, 0.028084023356349175, 0.054700208300935887,
    0.068312293270780214, 0.054700208300935887, 0.028084023356349175,
    0.014418818362460822, 0.028084023356349175, 0.0350727008055935,
    0.028084023356349175, 0.014418818362460822 };

  static real_T c9_nonZeroKernel[25] = { 0.014418818362460822,
    0.028084023356349175, 0.0350727008055935, 0.028084023356349175,
    0.014418818362460822, 0.028084023356349175, 0.054700208300935887,
    0.068312293270780214, 0.054700208300935887, 0.028084023356349175,
    0.0350727008055935, 0.068312293270780214, 0.085311730190125085,
    0.068312293270780214, 0.0350727008055935, 0.028084023356349175,
    0.054700208300935887, 0.068312293270780214, 0.054700208300935887,
    0.028084023356349175, 0.014418818362460822, 0.028084023356349175,
    0.0350727008055935, 0.028084023356349175, 0.014418818362460822 };

  static int32_T c9_idxA[328] = { 1, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,
    13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,
    32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
    51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69,
    70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88,
    89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105,
    106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120,
    120, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 3, 4, 5, 6,
    7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26,
    27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45,
    46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64,
    65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83,
    84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101,
    102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116,
    117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131,
    132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146,
    147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 160,
    160 };

  emlrtStack c9_b_st;
  emlrtStack c9_st;
  real_T c9_connDimsT[2];
  real_T c9_outSizeT[2];
  real_T c9_padSizeT[2];
  real_T c9_startT[2];
  real_T c9_b_j;
  real_T c9_c_i;
  int32_T c9_b_i;
  int32_T c9_d_i;
  int32_T c9_i;
  int32_T c9_i1;
  int32_T c9_i2;
  int32_T c9_i3;
  int32_T c9_i4;
  int32_T c9_i5;
  int32_T c9_i6;
  int32_T c9_i7;
  int32_T c9_i8;
  int32_T c9_j;
  boolean_T c9_conn[25];
  boolean_T c9_b_modeFlag;
  boolean_T c9_c_modeFlag;
  boolean_T c9_modeFlag;
  boolean_T c9_tooBig;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_st.site = &c9_d_emlrtRSI;
  c9_b_st.prev = &c9_st;
  c9_b_st.tls = c9_st.tls;
  c9_b_st.site = &c9_f_emlrtRSI;
  for (c9_j = 0; c9_j < 164; c9_j++) {
    c9_b_j = (real_T)c9_j + 1.0;
    for (c9_i = 0; c9_i < 124; c9_i++) {
      c9_c_i = (real_T)c9_i + 1.0;
      if ((c9_idxA[(int32_T)c9_c_i - 1] < 1) || (c9_idxA[(int32_T)c9_c_i - 1] >
           120)) {
        emlrtDynamicBoundsCheckR2012b(c9_idxA[(int32_T)c9_c_i - 1], 1, 120,
          &c9_o_emlrtBCI, &c9_b_st);
      }

      c9_d_i = c9_idxA[(int32_T)c9_b_j + 163];
      if ((c9_d_i < 1) || (c9_d_i > 160)) {
        emlrtDynamicBoundsCheckR2012b(c9_d_i, 1, 160, &c9_p_emlrtBCI, &c9_b_st);
      }

      chartInstance->c9_a[((int32_T)c9_c_i + 124 * ((int32_T)c9_b_j - 1)) - 1] =
        c9_varargin_1[(c9_idxA[(int32_T)c9_c_i - 1] + 120 * (c9_d_i - 1)) - 1];
    }
  }

  c9_st.site = &c9_e_emlrtRSI;
  c9_tooBig = true;
  for (c9_b_i = 0; c9_b_i < 2; c9_b_i++) {
    c9_tooBig = false;
  }

  if (!c9_tooBig) {
    c9_modeFlag = true;
  } else {
    c9_modeFlag = false;
  }

  if (c9_modeFlag) {
    c9_b_modeFlag = true;
  } else {
    c9_b_modeFlag = false;
  }

  c9_c_modeFlag = c9_b_modeFlag;
  if (c9_c_modeFlag) {
    for (c9_i2 = 0; c9_i2 < 2; c9_i2++) {
      c9_padSizeT[c9_i2] = 124.0 + 40.0 * (real_T)c9_i2;
    }

    for (c9_i4 = 0; c9_i4 < 2; c9_i4++) {
      c9_outSizeT[c9_i4] = 120.0 + 40.0 * (real_T)c9_i4;
    }

    for (c9_i6 = 0; c9_i6 < 2; c9_i6++) {
      c9_connDimsT[c9_i6] = 5.0;
    }

    ippfilter_real32(&chartInstance->c9_a[0], &c9_b[0], &c9_outSizeT[0], 2.0,
                     &c9_padSizeT[0], &c9_kernel[0], &c9_connDimsT[0], false);
  } else {
    for (c9_i1 = 0; c9_i1 < 25; c9_i1++) {
      c9_conn[c9_i1] = true;
    }

    for (c9_i3 = 0; c9_i3 < 2; c9_i3++) {
      c9_padSizeT[c9_i3] = 124.0 + 40.0 * (real_T)c9_i3;
    }

    for (c9_i5 = 0; c9_i5 < 2; c9_i5++) {
      c9_outSizeT[c9_i5] = 120.0 + 40.0 * (real_T)c9_i5;
    }

    for (c9_i7 = 0; c9_i7 < 2; c9_i7++) {
      c9_connDimsT[c9_i7] = 5.0;
    }

    for (c9_i8 = 0; c9_i8 < 2; c9_i8++) {
      c9_startT[c9_i8] = 2.0;
    }

    imfilter_real32(&chartInstance->c9_a[0], &c9_b[0], 2.0, &c9_outSizeT[0], 2.0,
                    &c9_padSizeT[0], &c9_nonZeroKernel[0], 25.0, &c9_conn[0],
                    2.0, &c9_connDimsT[0], &c9_startT[0], 2.0, true, false);
  }
}

static void c9_b_imfilter(SFc9_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c9_sp, real32_T c9_varargin_1[19200], real32_T c9_b[19200])
{
  static real_T c9_kernel[9] = { -1.0, -2.0, -1.0, -0.0, -0.0, -0.0, 1.0, 2.0,
    1.0 };

  static real_T c9_nonZeroKernel[6] = { -1.0, -2.0, -1.0, 1.0, 2.0, 1.0 };

  static boolean_T c9_conn[9] = { true, true, true, false, false, false, true,
    true, true };

  emlrtStack c9_b_st;
  emlrtStack c9_st;
  real_T c9_connDimsT[2];
  real_T c9_outSizeT[2];
  real_T c9_padSizeT[2];
  real_T c9_startT[2];
  real_T c9_b_j;
  real_T c9_c_i;
  int32_T c9_b_i;
  int32_T c9_d_i;
  int32_T c9_i;
  int32_T c9_i1;
  int32_T c9_i2;
  int32_T c9_i3;
  int32_T c9_i4;
  int32_T c9_i5;
  int32_T c9_i6;
  int32_T c9_i7;
  int32_T c9_j;
  boolean_T c9_b_modeFlag;
  boolean_T c9_c_modeFlag;
  boolean_T c9_modeFlag;
  boolean_T c9_tooBig;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_st.site = &c9_d_emlrtRSI;
  c9_b_st.prev = &c9_st;
  c9_b_st.tls = c9_st.tls;
  c9_b_st.site = &c9_f_emlrtRSI;
  for (c9_j = 0; c9_j < 162; c9_j++) {
    c9_b_j = (real_T)c9_j + 1.0;
    for (c9_i = 0; c9_i < 122; c9_i++) {
      c9_c_i = (real_T)c9_i + 1.0;
      if ((c9_iv[(int32_T)c9_c_i - 1] < 1) || (c9_iv[(int32_T)c9_c_i - 1] > 120))
      {
        emlrtDynamicBoundsCheckR2012b(c9_iv[(int32_T)c9_c_i - 1], 1, 120,
          &c9_o_emlrtBCI, &c9_b_st);
      }

      c9_d_i = c9_iv[(int32_T)c9_b_j + 161];
      if ((c9_d_i < 1) || (c9_d_i > 160)) {
        emlrtDynamicBoundsCheckR2012b(c9_d_i, 1, 160, &c9_p_emlrtBCI, &c9_b_st);
      }

      chartInstance->c9_c_a[((int32_T)c9_c_i + 122 * ((int32_T)c9_b_j - 1)) - 1]
        = c9_varargin_1[(c9_iv[(int32_T)c9_c_i - 1] + 120 * (c9_d_i - 1)) - 1];
    }
  }

  c9_st.site = &c9_e_emlrtRSI;
  c9_tooBig = true;
  for (c9_b_i = 0; c9_b_i < 2; c9_b_i++) {
    c9_tooBig = false;
  }

  if (!c9_tooBig) {
    c9_modeFlag = true;
  } else {
    c9_modeFlag = false;
  }

  if (c9_modeFlag) {
    c9_b_modeFlag = true;
  } else {
    c9_b_modeFlag = false;
  }

  c9_c_modeFlag = c9_b_modeFlag;
  if (c9_c_modeFlag) {
    for (c9_i2 = 0; c9_i2 < 2; c9_i2++) {
      c9_padSizeT[c9_i2] = 122.0 + 40.0 * (real_T)c9_i2;
    }

    for (c9_i4 = 0; c9_i4 < 2; c9_i4++) {
      c9_outSizeT[c9_i4] = 120.0 + 40.0 * (real_T)c9_i4;
    }

    for (c9_i6 = 0; c9_i6 < 2; c9_i6++) {
      c9_connDimsT[c9_i6] = 3.0;
    }

    ippfilter_real32(&chartInstance->c9_c_a[0], &c9_b[0], &c9_outSizeT[0], 2.0,
                     &c9_padSizeT[0], &c9_kernel[0], &c9_connDimsT[0], true);
  } else {
    for (c9_i1 = 0; c9_i1 < 2; c9_i1++) {
      c9_padSizeT[c9_i1] = 122.0 + 40.0 * (real_T)c9_i1;
    }

    for (c9_i3 = 0; c9_i3 < 2; c9_i3++) {
      c9_outSizeT[c9_i3] = 120.0 + 40.0 * (real_T)c9_i3;
    }

    for (c9_i5 = 0; c9_i5 < 2; c9_i5++) {
      c9_connDimsT[c9_i5] = 3.0;
    }

    for (c9_i7 = 0; c9_i7 < 2; c9_i7++) {
      c9_startT[c9_i7] = 1.0;
    }

    imfilter_real32(&chartInstance->c9_c_a[0], &c9_b[0], 2.0, &c9_outSizeT[0],
                    2.0, &c9_padSizeT[0], &c9_nonZeroKernel[0], 6.0, &c9_conn[0],
                    2.0, &c9_connDimsT[0], &c9_startT[0], 2.0, true, true);
  }
}

static void c9_c_imfilter(SFc9_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c9_sp, real32_T c9_varargin_1[19200], real32_T c9_b[19200])
{
  static real_T c9_kernel[9] = { -1.0, -0.0, 1.0, -2.0, -0.0, 2.0, -1.0, -0.0,
    1.0 };

  static real_T c9_nonZeroKernel[6] = { -1.0, 1.0, -2.0, 2.0, -1.0, 1.0 };

  static boolean_T c9_conn[9] = { true, false, true, true, false, true, true,
    false, true };

  emlrtStack c9_b_st;
  emlrtStack c9_st;
  real_T c9_connDimsT[2];
  real_T c9_outSizeT[2];
  real_T c9_padSizeT[2];
  real_T c9_startT[2];
  real_T c9_b_j;
  real_T c9_c_i;
  int32_T c9_b_i;
  int32_T c9_d_i;
  int32_T c9_i;
  int32_T c9_i1;
  int32_T c9_i2;
  int32_T c9_i3;
  int32_T c9_i4;
  int32_T c9_i5;
  int32_T c9_i6;
  int32_T c9_i7;
  int32_T c9_j;
  boolean_T c9_b_modeFlag;
  boolean_T c9_c_modeFlag;
  boolean_T c9_modeFlag;
  boolean_T c9_tooBig;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_st.site = &c9_d_emlrtRSI;
  c9_b_st.prev = &c9_st;
  c9_b_st.tls = c9_st.tls;
  c9_b_st.site = &c9_f_emlrtRSI;
  for (c9_j = 0; c9_j < 162; c9_j++) {
    c9_b_j = (real_T)c9_j + 1.0;
    for (c9_i = 0; c9_i < 122; c9_i++) {
      c9_c_i = (real_T)c9_i + 1.0;
      if ((c9_iv[(int32_T)c9_c_i - 1] < 1) || (c9_iv[(int32_T)c9_c_i - 1] > 120))
      {
        emlrtDynamicBoundsCheckR2012b(c9_iv[(int32_T)c9_c_i - 1], 1, 120,
          &c9_o_emlrtBCI, &c9_b_st);
      }

      c9_d_i = c9_iv[(int32_T)c9_b_j + 161];
      if ((c9_d_i < 1) || (c9_d_i > 160)) {
        emlrtDynamicBoundsCheckR2012b(c9_d_i, 1, 160, &c9_p_emlrtBCI, &c9_b_st);
      }

      chartInstance->c9_b_a[((int32_T)c9_c_i + 122 * ((int32_T)c9_b_j - 1)) - 1]
        = c9_varargin_1[(c9_iv[(int32_T)c9_c_i - 1] + 120 * (c9_d_i - 1)) - 1];
    }
  }

  c9_st.site = &c9_e_emlrtRSI;
  c9_tooBig = true;
  for (c9_b_i = 0; c9_b_i < 2; c9_b_i++) {
    c9_tooBig = false;
  }

  if (!c9_tooBig) {
    c9_modeFlag = true;
  } else {
    c9_modeFlag = false;
  }

  if (c9_modeFlag) {
    c9_b_modeFlag = true;
  } else {
    c9_b_modeFlag = false;
  }

  c9_c_modeFlag = c9_b_modeFlag;
  if (c9_c_modeFlag) {
    for (c9_i2 = 0; c9_i2 < 2; c9_i2++) {
      c9_padSizeT[c9_i2] = 122.0 + 40.0 * (real_T)c9_i2;
    }

    for (c9_i4 = 0; c9_i4 < 2; c9_i4++) {
      c9_outSizeT[c9_i4] = 120.0 + 40.0 * (real_T)c9_i4;
    }

    for (c9_i6 = 0; c9_i6 < 2; c9_i6++) {
      c9_connDimsT[c9_i6] = 3.0;
    }

    ippfilter_real32(&chartInstance->c9_b_a[0], &c9_b[0], &c9_outSizeT[0], 2.0,
                     &c9_padSizeT[0], &c9_kernel[0], &c9_connDimsT[0], true);
  } else {
    for (c9_i1 = 0; c9_i1 < 2; c9_i1++) {
      c9_padSizeT[c9_i1] = 122.0 + 40.0 * (real_T)c9_i1;
    }

    for (c9_i3 = 0; c9_i3 < 2; c9_i3++) {
      c9_outSizeT[c9_i3] = 120.0 + 40.0 * (real_T)c9_i3;
    }

    for (c9_i5 = 0; c9_i5 < 2; c9_i5++) {
      c9_connDimsT[c9_i5] = 3.0;
    }

    for (c9_i7 = 0; c9_i7 < 2; c9_i7++) {
      c9_startT[c9_i7] = 1.0;
    }

    imfilter_real32(&chartInstance->c9_b_a[0], &c9_b[0], 2.0, &c9_outSizeT[0],
                    2.0, &c9_padSizeT[0], &c9_nonZeroKernel[0], 6.0, &c9_conn[0],
                    2.0, &c9_connDimsT[0], &c9_startT[0], 2.0, true, true);
  }
}

static void c9_chaccum(SFc9_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c9_sp, boolean_T c9_varargin_1[19200], creal_T
  c9_d_accumMatrix[19200], real32_T c9_b_gradientImg[19200])
{
  static creal_T c9_Opca[31] = { { -1.0,/* re */
      -1.2246467991473532E-16          /* im */
    }, { -0.95615124641749827,         /* re */
      -0.29287334118055974             /* im */
    }, { -0.8336990307590183,          /* re */
      -0.55221909249090018             /* im */
    }, { -0.64943121249867575,         /* re */
      -0.7604203444362202              /* im */
    }, { -0.42252321772467138,         /* re */
      -0.90635210072222483             /* im */
    }, { -0.17259493247790872,         /* re */
      -0.98499288793521045             /* im */
    }, { 0.081806067135590188,         /* re */
      -0.99664826663161732             /* im */
    }, { 0.32429052496520183,          /* re */
      -0.9459575336228333              /* im */
    }, { 0.5413163044171575,           /* re */
      -0.8408190403244632              /* im */
    }, { 0.72253513364778288,          /* re */
      -0.6913342032943115              /* im */
    }, { 0.86086194086240941,          /* re */
      -0.50883859796069475             /* im */
    }, { 0.9523324991276807,           /* re */
      -0.30506197912100752             /* im */
    }, { 0.99581076703864879,          /* re */
      -0.091438045965002171            /* im */
    }, { 0.99259987429192575,          /* re */
      0.12143100738960029              /* im */
    }, { 0.94600183597195175,          /* re */
      0.32416126594288897              /* im */
    }, { 0.86086194086241141,          /* re */
      0.50883859796069131              /* im */
    }, { 0.74312509122060533,          /* re */
      0.66915252282149174              /* im */
    }, { 0.5994236088602789,           /* re */
      0.80043196908976555              /* im */
    }, { 0.43670937692412126,          /* re */
      0.89960264567560366              /* im */
    }, { 0.26193771706003083,          /* re */
      0.96508477989313413              /* im */
    }, { 0.081806067135594393,         /* re */
      0.996648266631617                /* im */
    }, { -0.097452774920332663,        /* re */
      0.99524015024532                 /* im */
    }, { -0.27022547076676262,         /* re */
      0.96279706841518864              /* im */
    }, { -0.43162528684845275,         /* re */
      0.90205299830608121              /* im */
    }, { -0.57755683638145328,         /* re */
      0.8163504766636982               /* im */
    }, { -0.70474420482416189,         /* re */
      0.70946148998149272              /* im */
    }, { -0.810728382535478,           /* re */
      0.58542248825220888              /* im */
    }, { -0.89383978605837788,         /* re */
      0.44838648157489452              /* im */
    }, { -0.95315131088542715,         /* re */
      0.30249393143894937              /* im */
    }, { -0.98841689123984988,         /* re */
      0.15176313489036372              /* im */
    }, { -1.0,                         /* re */
      1.2246467991473532E-16           /* im */
    } };

  static real_T c9_dv[31] = { 94.247779607693786, 97.389372261283583,
    100.53096491487338, 103.67255756846318, 106.81415022205297,
    109.95574287564276, 113.09733552923255, 116.23892818282235,
    119.38052083641213, 122.52211349000193, 125.66370614359172,
    128.80529879718151, 131.94689145077132, 135.0884841043611,
    138.23007675795088, 141.37166941154069, 144.51326206513048,
    147.65485471872029, 150.79644737231007, 153.93804002589985,
    157.07963267948966, 160.22122533307945, 163.36281798666926,
    166.50441064025904, 169.64600329384882, 172.78759594743863,
    175.92918860102841, 179.0707812546182, 182.212373908208, 185.35396656179779,
    188.49555921538757 };

  c9_emxArray_boolean_T *c9_inside;
  c9_emxArray_creal_T *c9_w;
  c9_emxArray_creal_T *c9_wkeep;
  c9_emxArray_int32_T *c9_ii;
  c9_emxArray_int32_T *c9_jj;
  c9_emxArray_int32_T *c9_r;
  c9_emxArray_int32_T *c9_xckeep;
  c9_emxArray_int32_T *c9_yckeep;
  c9_emxArray_real32_T *c9_xc;
  c9_emxArray_real32_T *c9_yc;
  c9_emxArray_real_T *c9_Ex;
  c9_emxArray_real_T *c9_Ex_chunk;
  c9_emxArray_real_T *c9_Ey;
  c9_emxArray_real_T *c9_Ey_chunk;
  c9_emxArray_real_T *c9_b_varargin_2;
  c9_emxArray_real_T *c9_idxE;
  c9_emxArray_real_T *c9_idxE_chunk;
  c9_emxArray_real_T *c9_ndx;
  c9_emxArray_real_T *c9_r1;
  emlrtStack c9_b_st;
  emlrtStack c9_c_st;
  emlrtStack c9_d_st;
  emlrtStack c9_e_st;
  emlrtStack c9_st;
  creal_T c9_w0[31];
  real_T c9_a1;
  real_T c9_ai;
  real_T c9_apnd;
  real_T c9_ar;
  real_T c9_b1;
  real_T c9_b_d;
  real_T c9_b_idx1;
  real_T c9_b_idx2;
  real_T c9_b_k;
  real_T c9_b_s;
  real_T c9_bi;
  real_T c9_bim;
  real_T c9_br;
  real_T c9_brm;
  real_T c9_c;
  real_T c9_c_i;
  real_T c9_c_idx;
  real_T c9_c_varargin_2;
  real_T c9_c_y;
  real_T c9_cdiff;
  real_T c9_d;
  real_T c9_d_b;
  real_T c9_d_y;
  real_T c9_dim1;
  real_T c9_e_a;
  real_T c9_e_b;
  real_T c9_e_y;
  real_T c9_f_a;
  real_T c9_f_b;
  real_T c9_f_y;
  real_T c9_g_a;
  real_T c9_g_b;
  real_T c9_g_x;
  real_T c9_g_y;
  real_T c9_h_a;
  real_T c9_h_b;
  real_T c9_h_x;
  real_T c9_h_y;
  real_T c9_i_a;
  real_T c9_i_x;
  real_T c9_i_y;
  real_T c9_j_x;
  real_T c9_j_y;
  real_T c9_k_a;
  real_T c9_k_x;
  real_T c9_kd;
  real_T c9_l_a;
  real_T c9_l_x;
  real_T c9_lenE;
  real_T c9_m_x;
  real_T c9_minval;
  real_T c9_n_x;
  real_T c9_ndbl;
  real_T c9_ni;
  real_T c9_nr;
  real_T c9_o_x;
  real_T c9_p_x;
  real_T c9_q_x;
  real_T c9_r_x;
  real_T c9_sgnbi;
  real_T c9_sgnbr;
  real_T c9_sizeChunk;
  real_T c9_thresh;
  int32_T c9_rows_to_keep_size[1];
  int32_T c9_b_i;
  int32_T c9_b_idx;
  int32_T c9_b_loop_ub;
  int32_T c9_c_idx1;
  int32_T c9_c_idx2;
  int32_T c9_c_k;
  int32_T c9_c_loop_ub;
  int32_T c9_d_idx;
  int32_T c9_d_k;
  int32_T c9_d_loop_ub;
  int32_T c9_e_idx;
  int32_T c9_e_k;
  int32_T c9_e_loop_ub;
  int32_T c9_f_k;
  int32_T c9_f_loop_ub;
  int32_T c9_first;
  int32_T c9_g_k;
  int32_T c9_g_loop_ub;
  int32_T c9_h_k;
  int32_T c9_h_loop_ub;
  int32_T c9_i;
  int32_T c9_i1;
  int32_T c9_i10;
  int32_T c9_i100;
  int32_T c9_i101;
  int32_T c9_i102;
  int32_T c9_i103;
  int32_T c9_i104;
  int32_T c9_i105;
  int32_T c9_i106;
  int32_T c9_i107;
  int32_T c9_i108;
  int32_T c9_i109;
  int32_T c9_i11;
  int32_T c9_i110;
  int32_T c9_i111;
  int32_T c9_i112;
  int32_T c9_i113;
  int32_T c9_i114;
  int32_T c9_i115;
  int32_T c9_i116;
  int32_T c9_i117;
  int32_T c9_i12;
  int32_T c9_i13;
  int32_T c9_i14;
  int32_T c9_i15;
  int32_T c9_i16;
  int32_T c9_i17;
  int32_T c9_i18;
  int32_T c9_i19;
  int32_T c9_i2;
  int32_T c9_i20;
  int32_T c9_i21;
  int32_T c9_i22;
  int32_T c9_i23;
  int32_T c9_i24;
  int32_T c9_i25;
  int32_T c9_i26;
  int32_T c9_i27;
  int32_T c9_i28;
  int32_T c9_i29;
  int32_T c9_i3;
  int32_T c9_i30;
  int32_T c9_i31;
  int32_T c9_i32;
  int32_T c9_i33;
  int32_T c9_i34;
  int32_T c9_i35;
  int32_T c9_i36;
  int32_T c9_i37;
  int32_T c9_i38;
  int32_T c9_i39;
  int32_T c9_i4;
  int32_T c9_i40;
  int32_T c9_i41;
  int32_T c9_i42;
  int32_T c9_i43;
  int32_T c9_i44;
  int32_T c9_i45;
  int32_T c9_i46;
  int32_T c9_i47;
  int32_T c9_i48;
  int32_T c9_i49;
  int32_T c9_i5;
  int32_T c9_i50;
  int32_T c9_i51;
  int32_T c9_i52;
  int32_T c9_i53;
  int32_T c9_i54;
  int32_T c9_i55;
  int32_T c9_i56;
  int32_T c9_i57;
  int32_T c9_i58;
  int32_T c9_i59;
  int32_T c9_i6;
  int32_T c9_i60;
  int32_T c9_i61;
  int32_T c9_i62;
  int32_T c9_i63;
  int32_T c9_i64;
  int32_T c9_i65;
  int32_T c9_i66;
  int32_T c9_i67;
  int32_T c9_i68;
  int32_T c9_i69;
  int32_T c9_i7;
  int32_T c9_i70;
  int32_T c9_i71;
  int32_T c9_i72;
  int32_T c9_i73;
  int32_T c9_i74;
  int32_T c9_i75;
  int32_T c9_i76;
  int32_T c9_i77;
  int32_T c9_i78;
  int32_T c9_i79;
  int32_T c9_i8;
  int32_T c9_i80;
  int32_T c9_i81;
  int32_T c9_i82;
  int32_T c9_i83;
  int32_T c9_i84;
  int32_T c9_i85;
  int32_T c9_i86;
  int32_T c9_i87;
  int32_T c9_i88;
  int32_T c9_i89;
  int32_T c9_i9;
  int32_T c9_i90;
  int32_T c9_i91;
  int32_T c9_i92;
  int32_T c9_i93;
  int32_T c9_i94;
  int32_T c9_i95;
  int32_T c9_i96;
  int32_T c9_i97;
  int32_T c9_i98;
  int32_T c9_i99;
  int32_T c9_i_b;
  int32_T c9_idx;
  int32_T c9_idx1;
  int32_T c9_idx2;
  int32_T c9_idxEdge;
  int32_T c9_idxkeep;
  int32_T c9_j_a;
  int32_T c9_j_b;
  int32_T c9_k;
  int32_T c9_k_b;
  int32_T c9_k_y;
  int32_T c9_loop_ub;
  int32_T c9_m_b;
  int32_T c9_n;
  int32_T c9_n_b;
  int32_T c9_nm1;
  int32_T c9_nm1d2;
  int32_T c9_szxc;
  real32_T c9_Gmax;
  real32_T c9_ab_x;
  real32_T c9_b_b;
  real32_T c9_b_x;
  real32_T c9_b_y;
  real32_T c9_b_z;
  real32_T c9_c_x;
  real32_T c9_c_z;
  real32_T c9_d_a;
  real32_T c9_d_x;
  real32_T c9_e_x;
  real32_T c9_ex;
  real32_T c9_f_x;
  real32_T c9_l_b;
  real32_T c9_l_y;
  real32_T c9_m_y;
  real32_T c9_n_y;
  real32_T c9_o_b;
  real32_T c9_o_y;
  real32_T c9_p_y;
  real32_T c9_q_y;
  real32_T c9_s_x;
  real32_T c9_t;
  real32_T c9_t_x;
  real32_T c9_u_x;
  real32_T c9_v_x;
  real32_T c9_w_x;
  real32_T c9_x1;
  real32_T c9_x2;
  real32_T c9_x_x;
  real32_T c9_y_x;
  real32_T c9_z;
  boolean_T c9_rows_to_keep_data[19200];
  boolean_T c9_x[19200];
  boolean_T c9_x_data[19200];
  boolean_T c9_b;
  boolean_T c9_b2;
  boolean_T c9_b3;
  boolean_T c9_b4;
  boolean_T c9_b5;
  boolean_T c9_b_b1;
  boolean_T c9_b_overflow;
  boolean_T c9_b_p;
  boolean_T c9_b_varargin_1;
  boolean_T c9_c_b;
  boolean_T c9_exitg1;
  boolean_T c9_flat;
  boolean_T c9_overflow;
  boolean_T c9_p;
  boolean_T c9_p_b;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_b_st.prev = &c9_st;
  c9_b_st.tls = c9_st.tls;
  c9_c_st.prev = &c9_b_st;
  c9_c_st.tls = c9_b_st.tls;
  c9_d_st.prev = &c9_c_st;
  c9_d_st.tls = c9_c_st.tls;
  c9_e_st.prev = &c9_d_st;
  c9_e_st.tls = c9_d_st.tls;
  c9_b_varargin_1 = c9_varargin_1[0];
  for (c9_i = 0; c9_i < 19200; c9_i++) {
    c9_x[c9_i] = ((int32_T)c9_varargin_1[c9_i] == (int32_T)c9_b_varargin_1);
  }

  for (c9_i1 = 0; c9_i1 < 19200; c9_i1++) {
    c9_x_data[c9_i1] = c9_x[c9_i1];
  }

  c9_flat = true;
  c9_k = 0;
  c9_exitg1 = false;
  while ((!c9_exitg1) && (c9_k < 19200)) {
    c9_b_k = (real_T)c9_k + 1.0;
    if (!c9_x_data[(int32_T)c9_b_k - 1]) {
      c9_flat = false;
      c9_exitg1 = true;
    } else {
      c9_k++;
    }
  }

  if (c9_flat) {
    for (c9_i2 = 0; c9_i2 < 19200; c9_i2++) {
      c9_d_accumMatrix[c9_i2].re = 0.0;
      c9_d_accumMatrix[c9_i2].im = 0.0;
    }

    for (c9_i4 = 0; c9_i4 < 19200; c9_i4++) {
      c9_b_gradientImg[c9_i4] = 0.0F;
    }
  } else {
    c9_st.site = &c9_q_emlrtRSI;
    for (c9_i3 = 0; c9_i3 < 19200; c9_i3++) {
      chartInstance->c9_s[c9_i3] = (real32_T)c9_varargin_1[c9_i3];
    }

    c9_b_st.site = &c9_c_emlrtRSI;
    c9_imfilter(chartInstance, &c9_b_st, chartInstance->c9_s,
                chartInstance->c9_A);
    c9_st.site = &c9_r_emlrtRSI;
    c9_b_st.site = &c9_k_emlrtRSI;
    c9_b_imfilter(chartInstance, &c9_b_st, chartInstance->c9_A,
                  chartInstance->c9_Gx);
    c9_b_st.site = &c9_l_emlrtRSI;
    c9_c_imfilter(chartInstance, &c9_b_st, chartInstance->c9_A,
                  chartInstance->c9_Gy);
    for (c9_c_k = 0; c9_c_k < 19200; c9_c_k++) {
      c9_d_k = c9_c_k;
      c9_b_x = chartInstance->c9_Gx[c9_d_k];
      c9_b_y = chartInstance->c9_Gy[c9_d_k];
      c9_x1 = c9_b_x;
      c9_x2 = c9_b_y;
      c9_d_a = c9_x1;
      c9_b_b = c9_x2;
      c9_z = muSingleScalarHypot(c9_d_a, c9_b_b);
      c9_b_gradientImg[c9_d_k] = c9_z;
    }

    c9_st.site = &c9_s_emlrtRSI;
    for (c9_i5 = 0; c9_i5 < 19200; c9_i5++) {
      chartInstance->c9_s[c9_i5] = c9_b_gradientImg[c9_i5];
    }

    c9_c_x = chartInstance->c9_s[0];
    c9_d_x = c9_c_x;
    c9_b = muSingleScalarIsNaN(c9_d_x);
    c9_p = !c9_b;
    if (c9_p) {
      c9_idx = 1;
    } else {
      c9_idx = 0;
      c9_e_k = 2;
      c9_exitg1 = false;
      while ((!c9_exitg1) && (c9_e_k < 19201)) {
        c9_e_x = chartInstance->c9_s[c9_e_k - 1];
        c9_f_x = c9_e_x;
        c9_c_b = muSingleScalarIsNaN(c9_f_x);
        c9_b_p = !c9_c_b;
        if (c9_b_p) {
          c9_idx = c9_e_k;
          c9_exitg1 = true;
        } else {
          c9_e_k++;
        }
      }
    }

    if (c9_idx == 0) {
      c9_Gmax = chartInstance->c9_s[0];
    } else {
      c9_first = c9_idx - 1;
      c9_ex = chartInstance->c9_s[c9_first];
      c9_i6 = c9_first;
      for (c9_f_k = c9_i6 + 2; c9_f_k < 19201; c9_f_k++) {
        if (c9_ex < chartInstance->c9_s[c9_f_k - 1]) {
          c9_ex = chartInstance->c9_s[c9_f_k - 1];
        }
      }

      c9_Gmax = c9_ex;
    }

    c9_t = c9_Gmax * 0.7F;
    c9_b_st.site = &c9_w_emlrtRSI;
    for (c9_i7 = 0; c9_i7 < 19200; c9_i7++) {
      c9_x[c9_i7] = (c9_b_gradientImg[c9_i7] > c9_t);
    }

    c9_emxInit_int32_T(chartInstance, &c9_b_st, &c9_ii, 1, &c9_nb_emlrtRTEI);
    c9_emxInit_int32_T(chartInstance, &c9_b_st, &c9_jj, 1, &c9_nb_emlrtRTEI);
    c9_c_st.site = &c9_x_emlrtRSI;
    c9_eml_find(chartInstance, &c9_c_st, c9_x, c9_ii, c9_jj);
    c9_emxInit_real_T1(chartInstance, &c9_b_st, &c9_Ey, 1, &c9_nb_emlrtRTEI);
    c9_i8 = c9_Ey->size[0];
    c9_Ey->size[0] = c9_ii->size[0];
    c9_emxEnsureCapacity_real_T1(chartInstance, &c9_b_st, c9_Ey, c9_i8,
      &c9_j_emlrtRTEI);
    c9_loop_ub = c9_ii->size[0] - 1;
    for (c9_i9 = 0; c9_i9 <= c9_loop_ub; c9_i9++) {
      c9_Ey->data[c9_i9] = (real_T)c9_ii->data[c9_i9];
    }

    c9_emxFree_int32_T(chartInstance, &c9_ii);
    c9_emxInit_real_T1(chartInstance, &c9_b_st, &c9_Ex, 1, &c9_nb_emlrtRTEI);
    c9_i10 = c9_Ex->size[0];
    c9_Ex->size[0] = c9_jj->size[0];
    c9_emxEnsureCapacity_real_T1(chartInstance, &c9_b_st, c9_Ex, c9_i10,
      &c9_k_emlrtRTEI);
    c9_b_loop_ub = c9_jj->size[0] - 1;
    for (c9_i11 = 0; c9_i11 <= c9_b_loop_ub; c9_i11++) {
      c9_Ex->data[c9_i11] = (real_T)c9_jj->data[c9_i11];
    }

    c9_emxFree_int32_T(chartInstance, &c9_jj);
    c9_emxInit_real_T1(chartInstance, c9_sp, &c9_ndx, 1, &c9_ob_emlrtRTEI);
    c9_st.site = &c9_t_emlrtRSI;
    c9_i12 = c9_ndx->size[0];
    c9_ndx->size[0] = c9_Ey->size[0];
    c9_b_st.site = &c9_t_emlrtRSI;
    c9_emxEnsureCapacity_real_T1(chartInstance, &c9_b_st, c9_ndx, c9_i12,
      &c9_l_emlrtRTEI);
    c9_c_loop_ub = c9_Ey->size[0] - 1;
    for (c9_i13 = 0; c9_i13 <= c9_c_loop_ub; c9_i13++) {
      c9_ndx->data[c9_i13] = c9_Ey->data[c9_i13];
    }

    c9_emxInit_real_T1(chartInstance, &c9_st, &c9_b_varargin_2, 1,
                       &c9_m_emlrtRTEI);
    c9_i14 = c9_b_varargin_2->size[0];
    c9_b_varargin_2->size[0] = c9_Ex->size[0];
    c9_b_st.site = &c9_t_emlrtRSI;
    c9_emxEnsureCapacity_real_T1(chartInstance, &c9_b_st, c9_b_varargin_2,
      c9_i14, &c9_m_emlrtRTEI);
    c9_d_loop_ub = c9_Ex->size[0] - 1;
    for (c9_i15 = 0; c9_i15 <= c9_d_loop_ub; c9_i15++) {
      c9_b_varargin_2->data[c9_i15] = c9_Ex->data[c9_i15];
    }

    c9_emxInit_int32_T(chartInstance, &c9_st, &c9_r, 1, &c9_pb_emlrtRTEI);
    c9_b_st.site = &c9_eb_emlrtRSI;
    c9_eml_sub2ind(chartInstance, &c9_b_st, c9_ndx, c9_b_varargin_2, c9_r);
    c9_emxFree_real_T(chartInstance, &c9_b_varargin_2);
    c9_i16 = c9_ndx->size[0];
    c9_ndx->size[0] = c9_r->size[0];
    c9_emxEnsureCapacity_real_T1(chartInstance, &c9_st, c9_ndx, c9_i16,
      &c9_n_emlrtRTEI);
    c9_e_loop_ub = c9_r->size[0] - 1;
    for (c9_i17 = 0; c9_i17 <= c9_e_loop_ub; c9_i17++) {
      c9_ndx->data[c9_i17] = (real_T)c9_r->data[c9_i17];
    }

    c9_emxFree_int32_T(chartInstance, &c9_r);
    c9_emxInit_real_T1(chartInstance, c9_sp, &c9_idxE, 1, &c9_o_emlrtRTEI);
    c9_i18 = c9_idxE->size[0];
    c9_idxE->size[0] = c9_ndx->size[0];
    c9_st.site = &c9_t_emlrtRSI;
    c9_emxEnsureCapacity_real_T1(chartInstance, &c9_st, c9_idxE, c9_i18,
      &c9_o_emlrtRTEI);
    c9_f_loop_ub = c9_ndx->size[0] - 1;
    for (c9_i19 = 0; c9_i19 <= c9_f_loop_ub; c9_i19++) {
      c9_idxE->data[c9_i19] = c9_ndx->data[c9_i19];
    }

    c9_emxFree_real_T(chartInstance, &c9_ndx);
    for (c9_i20 = 0; c9_i20 < 31; c9_i20++) {
      c9_ar = c9_Opca[c9_i20].re;
      c9_ai = c9_Opca[c9_i20].im;
      c9_br = c9_dv[c9_i20];
      c9_bi = 0.0;
      if (c9_bi == 0.0) {
        if (c9_ai == 0.0) {
          c9_w0[c9_i20].re = c9_ar / c9_br;
          c9_w0[c9_i20].im = 0.0;
        } else if (c9_ar == 0.0) {
          c9_w0[c9_i20].re = 0.0;
          c9_w0[c9_i20].im = c9_ai / c9_br;
        } else {
          c9_w0[c9_i20].re = c9_ar / c9_br;
          c9_w0[c9_i20].im = c9_ai / c9_br;
        }
      } else if (c9_br == 0.0) {
        if (c9_ar == 0.0) {
          c9_w0[c9_i20].re = c9_ai / c9_bi;
          c9_w0[c9_i20].im = 0.0;
        } else if (c9_ai == 0.0) {
          c9_w0[c9_i20].re = 0.0;
          c9_w0[c9_i20].im = -(c9_ar / c9_bi);
        } else {
          c9_w0[c9_i20].re = c9_ai / c9_bi;
          c9_w0[c9_i20].im = -(c9_ar / c9_bi);
        }
      } else {
        c9_brm = muDoubleScalarAbs(c9_br);
        c9_bim = muDoubleScalarAbs(c9_bi);
        if (c9_brm > c9_bim) {
          c9_b_s = c9_bi / c9_br;
          c9_d = c9_br + c9_b_s * c9_bi;
          c9_nr = c9_ar + c9_b_s * c9_ai;
          c9_ni = c9_ai - c9_b_s * c9_ar;
          c9_w0[c9_i20].re = c9_nr / c9_d;
          c9_w0[c9_i20].im = c9_ni / c9_d;
        } else if (c9_bim == c9_brm) {
          if (c9_br > 0.0) {
            c9_sgnbr = 0.5;
          } else {
            c9_sgnbr = -0.5;
          }

          if (c9_bi > 0.0) {
            c9_sgnbi = 0.5;
          } else {
            c9_sgnbi = -0.5;
          }

          c9_nr = c9_ar * c9_sgnbr + c9_ai * c9_sgnbi;
          c9_ni = c9_ai * c9_sgnbr - c9_ar * c9_sgnbi;
          c9_w0[c9_i20].re = c9_nr / c9_brm;
          c9_w0[c9_i20].im = c9_ni / c9_brm;
        } else {
          c9_b_s = c9_br / c9_bi;
          c9_d = c9_bi + c9_b_s * c9_br;
          c9_nr = c9_b_s * c9_ar + c9_ai;
          c9_ni = c9_b_s * c9_ai - c9_ar;
          c9_w0[c9_i20].re = c9_nr / c9_d;
          c9_w0[c9_i20].im = c9_ni / c9_d;
        }
      }
    }

    c9_lenE = (real_T)c9_Ex->size[0];
    for (c9_i21 = 0; c9_i21 < 19200; c9_i21++) {
      c9_d_accumMatrix[c9_i21].re = 0.0;
      c9_d_accumMatrix[c9_i21].im = 0.0;
    }

    c9_i22 = (int32_T)((c9_lenE + 32257.0) / 32258.0);
    emlrtForLoopVectorCheckR2021a(1.0, 32258.0, c9_lenE, mxDOUBLE_CLASS, c9_i22,
      &c9_nf_emlrtRTEI, (emlrtConstCTX)c9_sp);
    c9_emxInit_real_T1(chartInstance, c9_sp, &c9_Ex_chunk, 1, &c9_db_emlrtRTEI);
    c9_emxInit_real_T1(chartInstance, c9_sp, &c9_Ey_chunk, 1, &c9_eb_emlrtRTEI);
    c9_emxInit_real_T1(chartInstance, c9_sp, &c9_idxE_chunk, 1, &c9_fb_emlrtRTEI);
    c9_emxInit_real32_T(chartInstance, c9_sp, &c9_xc, 2, &c9_gb_emlrtRTEI);
    c9_emxInit_real32_T(chartInstance, c9_sp, &c9_yc, 2, &c9_hb_emlrtRTEI);
    c9_emxInit_creal_T(chartInstance, c9_sp, &c9_w, 2, &c9_ib_emlrtRTEI);
    c9_emxInit_boolean_T(chartInstance, c9_sp, &c9_inside, 2, &c9_jb_emlrtRTEI);
    c9_emxInit_int32_T(chartInstance, c9_sp, &c9_xckeep, 1, &c9_kb_emlrtRTEI);
    c9_emxInit_int32_T(chartInstance, c9_sp, &c9_yckeep, 1, &c9_lb_emlrtRTEI);
    c9_emxInit_creal_T1(chartInstance, c9_sp, &c9_wkeep, 1, &c9_mb_emlrtRTEI);
    c9_emxInit_real_T(chartInstance, c9_sp, &c9_r1, 2, &c9_nb_emlrtRTEI);
    for (c9_b_i = 0; c9_b_i < c9_i22; c9_b_i++) {
      c9_c_i = (real_T)c9_b_i * 32258.0 + 1.0;
      c9_c_varargin_2 = c9_lenE;
      c9_c_y = c9_c_varargin_2;
      c9_d_y = c9_c_y;
      c9_e_y = c9_d_y;
      c9_d_b = c9_e_y;
      c9_f_y = c9_d_b;
      c9_g_y = c9_f_y;
      c9_minval = c9_g_y;
      c9_st.site = &c9_u_emlrtRSI;
      c9_e_a = c9_c_i;
      c9_b_d = c9_minval;
      c9_b_st.site = &c9_fb_emlrtRSI;
      c9_f_a = c9_e_a;
      c9_e_b = c9_b_d;
      if (c9_e_b < c9_f_a) {
        c9_r1->size[0] = 1;
        c9_r1->size[1] = 0;
      } else {
        c9_g_x = c9_f_a;
        c9_h_x = c9_g_x;
        c9_h_x = muDoubleScalarFloor(c9_h_x);
        if (c9_h_x == c9_f_a) {
          c9_i23 = c9_r1->size[0] * c9_r1->size[1];
          c9_r1->size[0] = 1;
          c9_r1->size[1] = (int32_T)(c9_e_b - c9_f_a) + 1;
          c9_emxEnsureCapacity_real_T(chartInstance, &c9_b_st, c9_r1, c9_i23,
            &c9_p_emlrtRTEI);
          c9_g_loop_ub = (int32_T)(c9_e_b - c9_f_a);
          for (c9_i26 = 0; c9_i26 <= c9_g_loop_ub; c9_i26++) {
            c9_r1->data[c9_i26] = c9_f_a + (real_T)c9_i26;
          }
        } else {
          c9_c_st.site = &c9_gb_emlrtRSI;
          c9_g_a = c9_f_a;
          c9_f_b = c9_e_b;
          c9_h_a = c9_g_a;
          c9_g_b = c9_f_b;
          c9_a1 = c9_h_a;
          c9_i_x = (c9_g_b - c9_h_a) + 0.5;
          c9_ndbl = c9_i_x;
          c9_ndbl = muDoubleScalarFloor(c9_ndbl);
          c9_apnd = c9_h_a + c9_ndbl;
          c9_cdiff = c9_apnd - c9_g_b;
          c9_i_a = c9_h_a;
          c9_h_b = c9_g_b;
          c9_j_x = c9_i_a;
          c9_k_x = c9_j_x;
          c9_l_x = c9_k_x;
          c9_h_y = muDoubleScalarAbs(c9_l_x);
          c9_m_x = c9_h_b;
          c9_n_x = c9_m_x;
          c9_o_x = c9_n_x;
          c9_i_y = muDoubleScalarAbs(c9_o_x);
          c9_c = muDoubleScalarMax(c9_h_y, c9_i_y);
          c9_thresh = 4.4408920985006262E-16 * c9_c;
          c9_p_x = c9_cdiff;
          c9_q_x = c9_p_x;
          c9_r_x = c9_q_x;
          c9_j_y = muDoubleScalarAbs(c9_r_x);
          if (c9_j_y < c9_thresh) {
            c9_ndbl++;
            c9_b1 = c9_g_b;
          } else if (c9_cdiff > 0.0) {
            c9_b1 = c9_h_a + (c9_ndbl - 1.0);
          } else {
            c9_ndbl++;
            c9_b1 = c9_apnd;
          }

          if (c9_ndbl >= 0.0) {
            c9_n = (int32_T)muDoubleScalarFloor(c9_ndbl);
          } else {
            c9_n = 0;
          }

          c9_i40 = c9_r1->size[0] * c9_r1->size[1];
          c9_r1->size[0] = 1;
          c9_r1->size[1] = c9_n;
          c9_emxEnsureCapacity_real_T(chartInstance, &c9_c_st, c9_r1, c9_i40,
            &c9_ab_emlrtRTEI);
          if (c9_n > 0) {
            c9_r1->data[0] = c9_a1;
            if (c9_n > 1) {
              c9_r1->data[c9_n - 1] = c9_b1;
              c9_nm1 = c9_n - 1;
              c9_j_a = c9_nm1;
              c9_nm1d2 = (uint16_T)((uint32_T)(uint16_T)c9_j_a >> 1);
              c9_i46 = c9_nm1d2 - 2;
              c9_d_st.site = &c9_hb_emlrtRSI;
              c9_i_b = c9_i46 + 1;
              c9_j_b = c9_i_b;
              if (c9_j_b < 1) {
                c9_overflow = false;
              } else {
                c9_overflow = (c9_j_b > 2147483646);
              }

              if (c9_overflow) {
                c9_e_st.site = &c9_ib_emlrtRSI;
                c9_check_forloop_overflow_error(chartInstance, &c9_e_st);
              }

              for (c9_g_k = 0; c9_g_k <= c9_i46; c9_g_k++) {
                c9_h_k = c9_g_k + 1;
                c9_kd = (real_T)c9_h_k;
                c9_r1->data[c9_h_k] = c9_a1 + c9_kd;
                c9_r1->data[(c9_n - c9_h_k) - 1] = c9_b1 - c9_kd;
              }

              c9_k_b = c9_nm1d2;
              c9_k_y = c9_k_b << 1;
              if (c9_k_y == c9_nm1) {
                c9_r1->data[c9_nm1d2] = (c9_a1 + c9_b1) / 2.0;
              } else {
                c9_kd = (real_T)c9_nm1d2;
                c9_r1->data[c9_nm1d2] = c9_a1 + c9_kd;
                c9_r1->data[c9_nm1d2 + 1] = c9_b1 - c9_kd;
              }
            }
          }
        }
      }

      c9_sizeChunk = (real_T)c9_r1->size[1];
      c9_i24 = c9_Ex_chunk->size[0];
      c9_Ex_chunk->size[0] = (int32_T)c9_sizeChunk;
      c9_st.site = &c9_ig_emlrtRSI;
      c9_emxEnsureCapacity_real_T1(chartInstance, &c9_st, c9_Ex_chunk, c9_i24,
        &c9_q_emlrtRTEI);
      c9_i25 = c9_Ey_chunk->size[0];
      c9_Ey_chunk->size[0] = (int32_T)c9_sizeChunk;
      c9_st.site = &c9_hg_emlrtRSI;
      c9_emxEnsureCapacity_real_T1(chartInstance, &c9_st, c9_Ey_chunk, c9_i25,
        &c9_r_emlrtRTEI);
      c9_i27 = c9_idxE_chunk->size[0];
      c9_idxE_chunk->size[0] = (int32_T)c9_sizeChunk;
      c9_st.site = &c9_gg_emlrtRSI;
      c9_emxEnsureCapacity_real_T1(chartInstance, &c9_st, c9_idxE_chunk, c9_i27,
        &c9_s_emlrtRTEI);
      c9_idxEdge = (int32_T)c9_c_i;
      c9_i28 = (int32_T)c9_sizeChunk - 1;
      for (c9_b_idx = 0; c9_b_idx <= c9_i28; c9_b_idx++) {
        c9_c_idx = (real_T)c9_b_idx + 1.0;
        c9_i30 = c9_Ex->size[0];
        if ((c9_idxEdge < 1) || (c9_idxEdge > c9_i30)) {
          emlrtDynamicBoundsCheckR2012b(c9_idxEdge, 1, c9_i30, &c9_q_emlrtBCI,
            (emlrtConstCTX)c9_sp);
        }

        c9_i31 = c9_Ex_chunk->size[0];
        c9_i32 = (int32_T)c9_c_idx;
        if ((c9_i32 < 1) || (c9_i32 > c9_i31)) {
          emlrtDynamicBoundsCheckR2012b(c9_i32, 1, c9_i31, &c9_r_emlrtBCI,
            (emlrtConstCTX)c9_sp);
        }

        c9_Ex_chunk->data[c9_i32 - 1] = c9_Ex->data[c9_idxEdge - 1];
        c9_i34 = c9_Ey->size[0];
        if ((c9_idxEdge < 1) || (c9_idxEdge > c9_i34)) {
          emlrtDynamicBoundsCheckR2012b(c9_idxEdge, 1, c9_i34, &c9_s_emlrtBCI,
            (emlrtConstCTX)c9_sp);
        }

        c9_i36 = c9_Ey_chunk->size[0];
        c9_i37 = (int32_T)c9_c_idx;
        if ((c9_i37 < 1) || (c9_i37 > c9_i36)) {
          emlrtDynamicBoundsCheckR2012b(c9_i37, 1, c9_i36, &c9_t_emlrtBCI,
            (emlrtConstCTX)c9_sp);
        }

        c9_Ey_chunk->data[c9_i37 - 1] = c9_Ey->data[c9_idxEdge - 1];
        c9_i39 = c9_idxE->size[0];
        if ((c9_idxEdge < 1) || (c9_idxEdge > c9_i39)) {
          emlrtDynamicBoundsCheckR2012b(c9_idxEdge, 1, c9_i39, &c9_u_emlrtBCI,
            (emlrtConstCTX)c9_sp);
        }

        c9_i41 = c9_idxE_chunk->size[0];
        c9_i42 = (int32_T)c9_c_idx;
        if ((c9_i42 < 1) || (c9_i42 > c9_i41)) {
          emlrtDynamicBoundsCheckR2012b(c9_i42, 1, c9_i41, &c9_v_emlrtBCI,
            (emlrtConstCTX)c9_sp);
        }

        c9_idxE_chunk->data[c9_i42 - 1] = c9_idxE->data[c9_idxEdge - 1];
        c9_idxEdge++;
      }

      c9_dim1 = (real_T)c9_idxE_chunk->size[0];
      c9_i29 = c9_xc->size[0] * c9_xc->size[1];
      c9_xc->size[0] = (int32_T)c9_dim1;
      c9_xc->size[1] = 31;
      c9_st.site = &c9_kg_emlrtRSI;
      c9_emxEnsureCapacity_real32_T(chartInstance, &c9_st, c9_xc, c9_i29,
        &c9_t_emlrtRTEI);
      c9_i33 = c9_yc->size[0] * c9_yc->size[1];
      c9_yc->size[0] = (int32_T)c9_dim1;
      c9_yc->size[1] = 31;
      c9_st.site = &c9_jg_emlrtRSI;
      c9_emxEnsureCapacity_real32_T(chartInstance, &c9_st, c9_yc, c9_i33,
        &c9_u_emlrtRTEI);
      c9_i35 = c9_w->size[0] * c9_w->size[1];
      c9_w->size[0] = (int32_T)c9_dim1;
      c9_w->size[1] = 31;
      c9_st.site = &c9_lg_emlrtRSI;
      c9_emxEnsureCapacity_creal_T(chartInstance, &c9_st, c9_w, c9_i35,
        &c9_v_emlrtRTEI);
      c9_i38 = c9_inside->size[0] * c9_inside->size[1];
      c9_inside->size[0] = (int32_T)c9_dim1;
      c9_inside->size[1] = 31;
      c9_st.site = &c9_eg_emlrtRSI;
      c9_emxEnsureCapacity_boolean_T(chartInstance, &c9_st, c9_inside, c9_i38,
        &c9_w_emlrtRTEI);
      c9_rows_to_keep_size[0] = (int32_T)c9_dim1;
      c9_h_loop_ub = (int32_T)c9_dim1 - 1;
      for (c9_i43 = 0; c9_i43 <= c9_h_loop_ub; c9_i43++) {
        c9_rows_to_keep_data[c9_i43] = false;
      }

      for (c9_idx2 = 0; c9_idx2 < 31; c9_idx2++) {
        c9_b_idx2 = (real_T)c9_idx2 + 1.0;
        c9_i45 = (int32_T)c9_dim1 - 1;
        for (c9_idx1 = 0; c9_idx1 <= c9_i45; c9_idx1++) {
          c9_b_idx1 = (real_T)c9_idx1 + 1.0;
          c9_i48 = c9_idxE_chunk->size[0];
          c9_i49 = (int32_T)c9_b_idx1;
          if ((c9_i49 < 1) || (c9_i49 > c9_i48)) {
            emlrtDynamicBoundsCheckR2012b(c9_i49, 1, c9_i48, &c9_w_emlrtBCI,
              (emlrtConstCTX)c9_sp);
          }

          c9_s_x = chartInstance->c9_Gx[(int32_T)c9_idxE_chunk->data[c9_i49 - 1]
            - 1];
          c9_i51 = c9_idxE_chunk->size[0];
          c9_i52 = (int32_T)c9_b_idx1;
          if ((c9_i52 < 1) || (c9_i52 > c9_i51)) {
            emlrtDynamicBoundsCheckR2012b(c9_i52, 1, c9_i51, &c9_x_emlrtBCI,
              (emlrtConstCTX)c9_sp);
          }

          c9_l_y = c9_b_gradientImg[(int32_T)c9_idxE_chunk->data[c9_i52 - 1] - 1];
          c9_t_x = c9_s_x;
          c9_m_y = c9_l_y;
          c9_b_z = c9_t_x / c9_m_y;
          c9_k_a = -(15.0 + 0.5 * (real_T)((int32_T)c9_b_idx2 - 1));
          c9_l_b = c9_b_z;
          c9_n_y = (real32_T)c9_k_a * c9_l_b;
          c9_i56 = c9_Ex_chunk->size[0];
          c9_i57 = (int32_T)c9_b_idx1;
          if ((c9_i57 < 1) || (c9_i57 > c9_i56)) {
            emlrtDynamicBoundsCheckR2012b(c9_i57, 1, c9_i56, &c9_y_emlrtBCI,
              (emlrtConstCTX)c9_sp);
          }

          c9_u_x = (real32_T)c9_Ex_chunk->data[c9_i57 - 1] + c9_n_y;
          c9_v_x = c9_u_x;
          c9_v_x = muSingleScalarRound(c9_v_x);
          c9_i60 = c9_xc->size[0];
          c9_i62 = (int32_T)c9_b_idx1;
          if ((c9_i62 < 1) || (c9_i62 > c9_i60)) {
            emlrtDynamicBoundsCheckR2012b(c9_i62, 1, c9_i60, &c9_cb_emlrtBCI,
              (emlrtConstCTX)c9_sp);
          }

          c9_xc->data[(c9_i62 + c9_xc->size[0] * ((int32_T)c9_b_idx2 - 1)) - 1] =
            c9_v_x;
          c9_i67 = c9_idxE_chunk->size[0];
          c9_i69 = (int32_T)c9_b_idx1;
          if ((c9_i69 < 1) || (c9_i69 > c9_i67)) {
            emlrtDynamicBoundsCheckR2012b(c9_i69, 1, c9_i67, &c9_db_emlrtBCI,
              (emlrtConstCTX)c9_sp);
          }

          c9_w_x = chartInstance->c9_Gy[(int32_T)c9_idxE_chunk->data[c9_i69 - 1]
            - 1];
          c9_i72 = c9_idxE_chunk->size[0];
          c9_i75 = (int32_T)c9_b_idx1;
          if ((c9_i75 < 1) || (c9_i75 > c9_i72)) {
            emlrtDynamicBoundsCheckR2012b(c9_i75, 1, c9_i72, &c9_gb_emlrtBCI,
              (emlrtConstCTX)c9_sp);
          }

          c9_o_y = c9_b_gradientImg[(int32_T)c9_idxE_chunk->data[c9_i75 - 1] - 1];
          c9_x_x = c9_w_x;
          c9_p_y = c9_o_y;
          c9_c_z = c9_x_x / c9_p_y;
          c9_l_a = -(15.0 + 0.5 * (real_T)((int32_T)c9_b_idx2 - 1));
          c9_o_b = c9_c_z;
          c9_q_y = (real32_T)c9_l_a * c9_o_b;
          c9_i82 = c9_Ey_chunk->size[0];
          c9_i84 = (int32_T)c9_b_idx1;
          if ((c9_i84 < 1) || (c9_i84 > c9_i82)) {
            emlrtDynamicBoundsCheckR2012b(c9_i84, 1, c9_i82, &c9_ub_emlrtBCI,
              (emlrtConstCTX)c9_sp);
          }

          c9_y_x = (real32_T)c9_Ey_chunk->data[c9_i84 - 1] + c9_q_y;
          c9_ab_x = c9_y_x;
          c9_ab_x = muSingleScalarRound(c9_ab_x);
          c9_i89 = c9_yc->size[0];
          c9_i90 = (int32_T)c9_b_idx1;
          if ((c9_i90 < 1) || (c9_i90 > c9_i89)) {
            emlrtDynamicBoundsCheckR2012b(c9_i90, 1, c9_i89, &c9_vb_emlrtBCI,
              (emlrtConstCTX)c9_sp);
          }

          c9_yc->data[(c9_i90 + c9_yc->size[0] * ((int32_T)c9_b_idx2 - 1)) - 1] =
            c9_ab_x;
          c9_i94 = c9_w->size[0];
          c9_i95 = (int32_T)c9_b_idx1;
          if ((c9_i95 < 1) || (c9_i95 > c9_i94)) {
            emlrtDynamicBoundsCheckR2012b(c9_i95, 1, c9_i94, &c9_wb_emlrtBCI,
              (emlrtConstCTX)c9_sp);
          }

          c9_w->data[(c9_i95 + c9_w->size[0] * ((int32_T)c9_b_idx2 - 1)) - 1].re
            = c9_w0[(int32_T)c9_b_idx2 - 1].re;
          c9_i97 = c9_w->size[0];
          c9_i99 = (int32_T)c9_b_idx1;
          if ((c9_i99 < 1) || (c9_i99 > c9_i97)) {
            emlrtDynamicBoundsCheckR2012b(c9_i99, 1, c9_i97, &c9_wb_emlrtBCI,
              (emlrtConstCTX)c9_sp);
          }

          c9_w->data[(c9_i99 + c9_w->size[0] * ((int32_T)c9_b_idx2 - 1)) - 1].im
            = c9_w0[(int32_T)c9_b_idx2 - 1].im;
          c9_i101 = c9_xc->size[0];
          c9_i102 = (int32_T)c9_b_idx1;
          if ((c9_i102 < 1) || (c9_i102 > c9_i101)) {
            emlrtDynamicBoundsCheckR2012b(c9_i102, 1, c9_i101, &c9_xb_emlrtBCI,
              (emlrtConstCTX)c9_sp);
          }

          c9_p_b = (c9_xc->data[(c9_i102 + c9_xc->size[0] * ((int32_T)c9_b_idx2
                      - 1)) - 1] >= 1.0F);
          c9_i105 = c9_xc->size[0];
          c9_i106 = (int32_T)c9_b_idx1;
          if ((c9_i106 < 1) || (c9_i106 > c9_i105)) {
            emlrtDynamicBoundsCheckR2012b(c9_i106, 1, c9_i105, &c9_yb_emlrtBCI,
              (emlrtConstCTX)c9_sp);
          }

          c9_b_b1 = (c9_xc->data[(c9_i106 + c9_xc->size[0] * ((int32_T)c9_b_idx2
            - 1)) - 1] <= 160.0F);
          c9_b2 = (c9_p_b && c9_b_b1);
          c9_i109 = c9_yc->size[0];
          c9_i110 = (int32_T)c9_b_idx1;
          if ((c9_i110 < 1) || (c9_i110 > c9_i109)) {
            emlrtDynamicBoundsCheckR2012b(c9_i110, 1, c9_i109, &c9_ac_emlrtBCI,
              (emlrtConstCTX)c9_sp);
          }

          c9_b3 = (c9_yc->data[(c9_i110 + c9_yc->size[0] * ((int32_T)c9_b_idx2 -
                     1)) - 1] >= 1.0F);
          c9_b4 = (c9_b2 && c9_b3);
          c9_i111 = c9_yc->size[0];
          c9_i112 = (int32_T)c9_b_idx1;
          if ((c9_i112 < 1) || (c9_i112 > c9_i111)) {
            emlrtDynamicBoundsCheckR2012b(c9_i112, 1, c9_i111, &c9_bc_emlrtBCI,
              (emlrtConstCTX)c9_sp);
          }

          c9_b5 = (c9_yc->data[(c9_i112 + c9_yc->size[0] * ((int32_T)c9_b_idx2 -
                     1)) - 1] <= 120.0F);
          c9_i113 = c9_inside->size[0];
          c9_i114 = (int32_T)c9_b_idx1;
          if ((c9_i114 < 1) || (c9_i114 > c9_i113)) {
            emlrtDynamicBoundsCheckR2012b(c9_i114, 1, c9_i113, &c9_cc_emlrtBCI,
              (emlrtConstCTX)c9_sp);
          }

          c9_inside->data[(c9_i114 + c9_inside->size[0] * ((int32_T)c9_b_idx2 -
            1)) - 1] = (c9_b4 && c9_b5);
          c9_i115 = c9_inside->size[0];
          c9_i116 = (int32_T)c9_b_idx1;
          if ((c9_i116 < 1) || (c9_i116 > c9_i115)) {
            emlrtDynamicBoundsCheckR2012b(c9_i116, 1, c9_i115, &c9_dc_emlrtBCI,
              (emlrtConstCTX)c9_sp);
          }

          if (c9_inside->data[(c9_i116 + c9_inside->size[0] * ((int32_T)
                c9_b_idx2 - 1)) - 1]) {
            c9_i117 = (int32_T)c9_b_idx1;
            if ((c9_i117 < 1) || (c9_i117 > c9_rows_to_keep_size[0])) {
              emlrtDynamicBoundsCheckR2012b(c9_i117, 1, c9_rows_to_keep_size[0],
                &c9_ec_emlrtBCI, (emlrtConstCTX)c9_sp);
            }

            c9_rows_to_keep_data[c9_i117 - 1] = true;
          }
        }
      }

      c9_i44 = c9_xckeep->size[0];
      c9_xckeep->size[0] = c9_xc->size[0] * 31;
      c9_st.site = &c9_rg_emlrtRSI;
      c9_emxEnsureCapacity_int32_T(chartInstance, &c9_st, c9_xckeep, c9_i44,
        &c9_y_emlrtRTEI);
      c9_i47 = c9_yckeep->size[0];
      c9_yckeep->size[0] = c9_yc->size[0] * 31;
      c9_st.site = &c9_qg_emlrtRSI;
      c9_emxEnsureCapacity_int32_T(chartInstance, &c9_st, c9_yckeep, c9_i47,
        &c9_bb_emlrtRTEI);
      c9_i50 = c9_wkeep->size[0];
      c9_wkeep->size[0] = c9_w->size[0] * 31;
      c9_st.site = &c9_sg_emlrtRSI;
      c9_emxEnsureCapacity_creal_T1(chartInstance, &c9_st, c9_wkeep, c9_i50,
        &c9_cb_emlrtRTEI);
      c9_idxkeep = 0;
      for (c9_c_idx2 = 0; c9_c_idx2 < 31; c9_c_idx2++) {
        c9_b_idx2 = (real_T)c9_c_idx2 + 1.0;
        c9_i53 = (int32_T)c9_dim1 - 1;
        for (c9_c_idx1 = 0; c9_c_idx1 <= c9_i53; c9_c_idx1++) {
          c9_b_idx1 = (real_T)c9_c_idx1 + 1.0;
          c9_i55 = (int32_T)c9_b_idx1;
          if ((c9_i55 < 1) || (c9_i55 > c9_rows_to_keep_size[0])) {
            emlrtDynamicBoundsCheckR2012b(c9_i55, 1, c9_rows_to_keep_size[0],
              &c9_ab_emlrtBCI, (emlrtConstCTX)c9_sp);
          }

          if (c9_rows_to_keep_data[c9_i55 - 1]) {
            c9_i58 = c9_inside->size[0];
            c9_i59 = (int32_T)c9_b_idx1;
            if ((c9_i59 < 1) || (c9_i59 > c9_i58)) {
              emlrtDynamicBoundsCheckR2012b(c9_i59, 1, c9_i58, &c9_bb_emlrtBCI,
                (emlrtConstCTX)c9_sp);
            }

            if (c9_inside->data[(c9_i59 + c9_inside->size[0] * ((int32_T)
                  c9_b_idx2 - 1)) - 1]) {
              c9_idxkeep++;
              c9_i64 = c9_xc->size[0];
              c9_i65 = (int32_T)c9_b_idx1;
              if ((c9_i65 < 1) || (c9_i65 > c9_i64)) {
                emlrtDynamicBoundsCheckR2012b(c9_i65, 1, c9_i64, &c9_eb_emlrtBCI,
                  (emlrtConstCTX)c9_sp);
              }

              c9_i68 = c9_xckeep->size[0];
              if ((c9_idxkeep < 1) || (c9_idxkeep > c9_i68)) {
                emlrtDynamicBoundsCheckR2012b(c9_idxkeep, 1, c9_i68,
                  &c9_fb_emlrtBCI, (emlrtConstCTX)c9_sp);
              }

              c9_xckeep->data[c9_idxkeep - 1] = (int32_T)c9_xc->data[(c9_i65 +
                c9_xc->size[0] * ((int32_T)c9_b_idx2 - 1)) - 1];
              c9_i71 = c9_yc->size[0];
              c9_i74 = (int32_T)c9_b_idx1;
              if ((c9_i74 < 1) || (c9_i74 > c9_i71)) {
                emlrtDynamicBoundsCheckR2012b(c9_i74, 1, c9_i71, &c9_hb_emlrtBCI,
                  (emlrtConstCTX)c9_sp);
              }

              c9_i77 = c9_yckeep->size[0];
              if ((c9_idxkeep < 1) || (c9_idxkeep > c9_i77)) {
                emlrtDynamicBoundsCheckR2012b(c9_idxkeep, 1, c9_i77,
                  &c9_ib_emlrtBCI, (emlrtConstCTX)c9_sp);
              }

              c9_yckeep->data[c9_idxkeep - 1] = (int32_T)c9_yc->data[(c9_i74 +
                c9_yc->size[0] * ((int32_T)c9_b_idx2 - 1)) - 1];
              c9_i79 = c9_wkeep->size[0];
              if ((c9_idxkeep < 1) || (c9_idxkeep > c9_i79)) {
                emlrtDynamicBoundsCheckR2012b(c9_idxkeep, 1, c9_i79,
                  &c9_kb_emlrtBCI, (emlrtConstCTX)c9_sp);
              }

              c9_i81 = c9_w->size[0];
              c9_i83 = (int32_T)c9_b_idx1;
              if ((c9_i83 < 1) || (c9_i83 > c9_i81)) {
                emlrtDynamicBoundsCheckR2012b(c9_i83, 1, c9_i81, &c9_jb_emlrtBCI,
                  (emlrtConstCTX)c9_sp);
              }

              c9_wkeep->data[c9_idxkeep - 1].re = c9_w->data[(c9_i83 +
                c9_w->size[0] * ((int32_T)c9_b_idx2 - 1)) - 1].re;
              c9_i87 = c9_w->size[0];
              c9_i88 = (int32_T)c9_b_idx1;
              if ((c9_i88 < 1) || (c9_i88 > c9_i87)) {
                emlrtDynamicBoundsCheckR2012b(c9_i88, 1, c9_i87, &c9_jb_emlrtBCI,
                  (emlrtConstCTX)c9_sp);
              }

              c9_i92 = c9_wkeep->size[0];
              if ((c9_idxkeep < 1) || (c9_idxkeep > c9_i92)) {
                emlrtDynamicBoundsCheckR2012b(c9_idxkeep, 1, c9_i92,
                  &c9_kb_emlrtBCI, (emlrtConstCTX)c9_sp);
              }

              c9_wkeep->data[c9_idxkeep - 1].im = c9_w->data[(c9_i88 +
                c9_w->size[0] * ((int32_T)c9_b_idx2 - 1)) - 1].im;
            }
          }
        }
      }

      c9_st.site = &c9_v_emlrtRSI;
      c9_szxc = c9_idxkeep;
      for (c9_i54 = 0; c9_i54 < 19200; c9_i54++) {
        chartInstance->c9_out[c9_i54].re = 0.0;
        chartInstance->c9_out[c9_i54].im = 0.0;
      }

      c9_b_st.site = &c9_jb_emlrtRSI;
      c9_m_b = c9_szxc;
      c9_n_b = c9_m_b;
      if (c9_n_b < 1) {
        c9_b_overflow = false;
      } else {
        c9_b_overflow = (c9_n_b > 2147483646);
      }

      if (c9_b_overflow) {
        c9_c_st.site = &c9_ib_emlrtRSI;
        c9_check_forloop_overflow_error(chartInstance, &c9_c_st);
      }

      for (c9_d_idx = 0; c9_d_idx < c9_szxc; c9_d_idx++) {
        c9_e_idx = c9_d_idx + 1;
        c9_i63 = c9_yckeep->size[0];
        if ((c9_e_idx < 1) || (c9_e_idx > c9_i63)) {
          emlrtDynamicBoundsCheckR2012b(c9_e_idx, 1, c9_i63, &c9_rb_emlrtBCI,
            &c9_st);
        }

        c9_i66 = c9_yckeep->data[c9_e_idx - 1];
        if ((c9_i66 < 1) || (c9_i66 > 120)) {
          emlrtDynamicBoundsCheckR2012b(c9_i66, 1, 120, &c9_qb_emlrtBCI, &c9_st);
        }

        c9_i70 = c9_xckeep->size[0];
        if ((c9_e_idx < 1) || (c9_e_idx > c9_i70)) {
          emlrtDynamicBoundsCheckR2012b(c9_e_idx, 1, c9_i70, &c9_tb_emlrtBCI,
            &c9_st);
        }

        c9_i73 = c9_xckeep->data[c9_e_idx - 1];
        if ((c9_i73 < 1) || (c9_i73 > 160)) {
          emlrtDynamicBoundsCheckR2012b(c9_i73, 1, 160, &c9_sb_emlrtBCI, &c9_st);
        }

        c9_i76 = c9_yckeep->size[0];
        if ((c9_e_idx < 1) || (c9_e_idx > c9_i76)) {
          emlrtDynamicBoundsCheckR2012b(c9_e_idx, 1, c9_i76, &c9_mb_emlrtBCI,
            &c9_st);
        }

        c9_i78 = c9_yckeep->data[c9_e_idx - 1];
        if ((c9_i78 < 1) || (c9_i78 > 120)) {
          emlrtDynamicBoundsCheckR2012b(c9_i78, 1, 120, &c9_lb_emlrtBCI, &c9_st);
        }

        c9_i80 = c9_xckeep->size[0];
        if ((c9_e_idx < 1) || (c9_e_idx > c9_i80)) {
          emlrtDynamicBoundsCheckR2012b(c9_e_idx, 1, c9_i80, &c9_ob_emlrtBCI,
            &c9_st);
        }

        c9_i85 = c9_xckeep->data[c9_e_idx - 1];
        if ((c9_i85 < 1) || (c9_i85 > 160)) {
          emlrtDynamicBoundsCheckR2012b(c9_i85, 1, 160, &c9_nb_emlrtBCI, &c9_st);
        }

        c9_i86 = c9_wkeep->size[0];
        if ((c9_e_idx < 1) || (c9_e_idx > c9_i86)) {
          emlrtDynamicBoundsCheckR2012b(c9_e_idx, 1, c9_i86, &c9_pb_emlrtBCI,
            &c9_st);
        }

        chartInstance->c9_out[(c9_i66 + 120 * (c9_i73 - 1)) - 1].re =
          chartInstance->c9_out[(c9_i78 + 120 * (c9_i85 - 1)) - 1].re +
          c9_wkeep->data[c9_e_idx - 1].re;
        c9_i91 = c9_yckeep->size[0];
        if ((c9_e_idx < 1) || (c9_e_idx > c9_i91)) {
          emlrtDynamicBoundsCheckR2012b(c9_e_idx, 1, c9_i91, &c9_mb_emlrtBCI,
            &c9_st);
        }

        c9_i93 = c9_yckeep->data[c9_e_idx - 1];
        if ((c9_i93 < 1) || (c9_i93 > 120)) {
          emlrtDynamicBoundsCheckR2012b(c9_i93, 1, 120, &c9_lb_emlrtBCI, &c9_st);
        }

        c9_i96 = c9_xckeep->size[0];
        if ((c9_e_idx < 1) || (c9_e_idx > c9_i96)) {
          emlrtDynamicBoundsCheckR2012b(c9_e_idx, 1, c9_i96, &c9_ob_emlrtBCI,
            &c9_st);
        }

        c9_i98 = c9_xckeep->data[c9_e_idx - 1];
        if ((c9_i98 < 1) || (c9_i98 > 160)) {
          emlrtDynamicBoundsCheckR2012b(c9_i98, 1, 160, &c9_nb_emlrtBCI, &c9_st);
        }

        c9_i100 = c9_wkeep->size[0];
        if ((c9_e_idx < 1) || (c9_e_idx > c9_i100)) {
          emlrtDynamicBoundsCheckR2012b(c9_e_idx, 1, c9_i100, &c9_pb_emlrtBCI,
            &c9_st);
        }

        c9_i103 = c9_yckeep->size[0];
        if ((c9_e_idx < 1) || (c9_e_idx > c9_i103)) {
          emlrtDynamicBoundsCheckR2012b(c9_e_idx, 1, c9_i103, &c9_rb_emlrtBCI,
            &c9_st);
        }

        c9_i104 = c9_yckeep->data[c9_e_idx - 1];
        if ((c9_i104 < 1) || (c9_i104 > 120)) {
          emlrtDynamicBoundsCheckR2012b(c9_i104, 1, 120, &c9_qb_emlrtBCI, &c9_st);
        }

        c9_i107 = c9_xckeep->size[0];
        if ((c9_e_idx < 1) || (c9_e_idx > c9_i107)) {
          emlrtDynamicBoundsCheckR2012b(c9_e_idx, 1, c9_i107, &c9_tb_emlrtBCI,
            &c9_st);
        }

        c9_i108 = c9_xckeep->data[c9_e_idx - 1];
        if ((c9_i108 < 1) || (c9_i108 > 160)) {
          emlrtDynamicBoundsCheckR2012b(c9_i108, 1, 160, &c9_sb_emlrtBCI, &c9_st);
        }

        chartInstance->c9_out[(c9_i104 + 120 * (c9_i108 - 1)) - 1].im =
          chartInstance->c9_out[(c9_i93 + 120 * (c9_i98 - 1)) - 1].im +
          c9_wkeep->data[c9_e_idx - 1].im;
      }

      for (c9_i61 = 0; c9_i61 < 19200; c9_i61++) {
        c9_d_accumMatrix[c9_i61].re += chartInstance->c9_out[c9_i61].re;
        c9_d_accumMatrix[c9_i61].im += chartInstance->c9_out[c9_i61].im;
      }
    }

    c9_emxFree_real_T(chartInstance, &c9_Ex);
    c9_emxFree_real_T(chartInstance, &c9_Ey);
    c9_emxFree_real_T(chartInstance, &c9_r1);
    c9_emxFree_creal_T(chartInstance, &c9_wkeep);
    c9_emxFree_int32_T(chartInstance, &c9_yckeep);
    c9_emxFree_int32_T(chartInstance, &c9_xckeep);
    c9_emxFree_boolean_T(chartInstance, &c9_inside);
    c9_emxFree_creal_T(chartInstance, &c9_w);
    c9_emxFree_real32_T(chartInstance, &c9_yc);
    c9_emxFree_real32_T(chartInstance, &c9_xc);
    c9_emxFree_real_T(chartInstance, &c9_idxE_chunk);
    c9_emxFree_real_T(chartInstance, &c9_Ey_chunk);
    c9_emxFree_real_T(chartInstance, &c9_Ex_chunk);
    c9_emxFree_real_T(chartInstance, &c9_idxE);
  }
}

static void c9_eml_find(SFc9_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c9_sp, boolean_T c9_x[19200], c9_emxArray_int32_T *c9_i,
  c9_emxArray_int32_T *c9_j)
{
  emlrtStack c9_b_st;
  emlrtStack c9_st;
  int32_T c9_b_iv[2];
  int32_T c9_iv1[2];
  int32_T c9_iv2[2];
  int32_T c9_b_i;
  int32_T c9_i1;
  int32_T c9_i2;
  int32_T c9_i3;
  int32_T c9_i4;
  int32_T c9_i5;
  int32_T c9_i6;
  int32_T c9_idx;
  int32_T c9_ii;
  int32_T c9_jj;
  boolean_T c9_b;
  boolean_T c9_b1;
  boolean_T c9_b2;
  boolean_T c9_exitg1;
  boolean_T c9_guard1 = false;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_st.site = &c9_y_emlrtRSI;
  c9_b_st.prev = &c9_st;
  c9_b_st.tls = c9_st.tls;
  c9_idx = 0;
  c9_b_i = c9_i->size[0];
  c9_i->size[0] = 19200;
  c9_emxEnsureCapacity_int32_T(chartInstance, &c9_st, c9_i, c9_b_i,
    &c9_qb_emlrtRTEI);
  c9_i1 = c9_j->size[0];
  c9_j->size[0] = 19200;
  c9_emxEnsureCapacity_int32_T(chartInstance, &c9_st, c9_j, c9_i1,
    &c9_rb_emlrtRTEI);
  c9_ii = 1;
  c9_jj = 1;
  c9_exitg1 = false;
  while ((!c9_exitg1) && (c9_jj <= 160)) {
    c9_guard1 = false;
    if (c9_x[(c9_ii + 120 * (c9_jj - 1)) - 1]) {
      c9_idx++;
      c9_i->data[c9_idx - 1] = c9_ii;
      c9_j->data[c9_idx - 1] = c9_jj;
      if (c9_idx >= 19200) {
        c9_exitg1 = true;
      } else {
        c9_guard1 = true;
      }
    } else {
      c9_guard1 = true;
    }

    if (c9_guard1) {
      c9_ii++;
      if (c9_ii > 120) {
        c9_ii = 1;
        c9_jj++;
      }
    }
  }

  c9_b = (c9_idx < 1);
  if (c9_b) {
    c9_i2 = 0;
  } else {
    c9_i2 = c9_idx;
  }

  c9_b_iv[0] = 1;
  c9_b_iv[1] = c9_i2;
  c9_b_st.site = &c9_cb_emlrtRSI;
  c9_indexShapeCheck(chartInstance, &c9_b_st, 19200, c9_b_iv);
  c9_i3 = c9_i->size[0];
  c9_i->size[0] = c9_i2;
  c9_emxEnsureCapacity_int32_T(chartInstance, &c9_st, c9_i, c9_i3,
    &c9_sb_emlrtRTEI);
  c9_b1 = (c9_idx < 1);
  if (c9_b1) {
    c9_i4 = 0;
  } else {
    c9_i4 = c9_idx;
  }

  c9_iv1[0] = 1;
  c9_iv1[1] = c9_i4;
  c9_b_st.site = &c9_bb_emlrtRSI;
  c9_indexShapeCheck(chartInstance, &c9_b_st, 19200, c9_iv1);
  c9_i5 = c9_j->size[0];
  c9_j->size[0] = c9_i4;
  c9_emxEnsureCapacity_int32_T(chartInstance, &c9_st, c9_j, c9_i5,
    &c9_tb_emlrtRTEI);
  c9_b2 = (c9_idx < 1);
  if (c9_b2) {
    c9_i6 = 0;
  } else {
    c9_i6 = c9_idx;
  }

  c9_iv2[0] = 1;
  c9_iv2[1] = c9_i6;
  c9_b_st.site = &c9_ab_emlrtRSI;
  c9_indexShapeCheck(chartInstance, &c9_b_st, 19200, c9_iv2);
}

static void c9_indexShapeCheck(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, int32_T c9_matrixSize, int32_T
  c9_indexSize[2])
{
  static char_T c9_b_cv[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'F', 'E', ':', 'P',
    'o', 't', 'e', 'n', 't', 'i', 'a', 'l', 'V', 'e', 'c', 't', 'o', 'r', 'V',
    'e', 'c', 't', 'o', 'r' };

  emlrtStack c9_st;
  const mxArray *c9_b_y = NULL;
  const mxArray *c9_c_y = NULL;
  int32_T c9_size1;
  boolean_T c9_b;
  boolean_T c9_b_b;
  boolean_T c9_b_c;
  boolean_T c9_c;
  boolean_T c9_nonSingletonDimFound;
  (void)chartInstance;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_size1 = c9_matrixSize;
  if (c9_size1 != 1) {
    c9_b = false;
  } else {
    c9_b = true;
  }

  if (c9_b) {
    c9_nonSingletonDimFound = false;
    if (c9_indexSize[1] != 1) {
      c9_nonSingletonDimFound = true;
    }

    c9_b_b = c9_nonSingletonDimFound;
    if (c9_b_b) {
      c9_c = true;
    } else {
      c9_c = false;
    }
  } else {
    c9_c = false;
  }

  c9_st.site = &c9_db_emlrtRSI;
  c9_b_c = c9_c;
  if (c9_b_c) {
    c9_b_y = NULL;
    sf_mex_assign(&c9_b_y, sf_mex_create("y", c9_b_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c9_c_y = NULL;
    sf_mex_assign(&c9_c_y, sf_mex_create("y", c9_b_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    sf_mex_call(&c9_st, &c9_b_emlrtMCI, "error", 0U, 2U, 14, c9_b_y, 14,
                sf_mex_call(&c9_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c9_st, NULL, "message", 1U, 1U, 14, c9_c_y)));
  }
}

static boolean_T c9_allinrange(SFc9_flightControlSystemInstanceStruct
  *chartInstance, c9_emxArray_real_T *c9_x, int32_T c9_hi)
{
  real_T c9_b_k;
  real_T c9_d;
  int32_T c9_exitg1;
  int32_T c9_i;
  int32_T c9_k;
  boolean_T c9_b;
  boolean_T c9_p;
  (void)chartInstance;
  c9_d = (real_T)c9_x->size[0];
  c9_i = (int32_T)c9_d - 1;
  c9_k = 0;
  do {
    c9_exitg1 = 0;
    if (c9_k <= c9_i) {
      c9_b_k = (real_T)c9_k + 1.0;
      if ((c9_x->data[(int32_T)c9_b_k - 1] >= 1.0) && (c9_x->data[(int32_T)
           c9_b_k - 1] <= (real_T)c9_hi)) {
        c9_b = true;
      } else {
        c9_b = false;
      }

      if (!c9_b) {
        c9_p = false;
        c9_exitg1 = 1;
      } else {
        c9_k++;
      }
    } else {
      c9_p = true;
      c9_exitg1 = 1;
    }
  } while (c9_exitg1 == 0);

  return c9_p;
}

static void c9_eml_sub2ind(SFc9_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c9_sp, c9_emxArray_real_T *c9_varargin_1, c9_emxArray_real_T
  *c9_b_varargin_2, c9_emxArray_int32_T *c9_idx)
{
  static char_T c9_b_cv1[34] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'u',
    'b', '2', 'i', 'n', 'd', ':', 'S', 'u', 'b', 's', 'c', 'r', 'i', 'p', 't',
    'V', 'e', 'c', 't', 'o', 'r', 'S', 'i', 'z', 'e' };

  static char_T c9_b_cv[30] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'u', 'b',
    '2', 'i', 'n', 'd', ':', 'I', 'n', 'd', 'e', 'x', 'O', 'u', 't', 'O', 'f',
    'R', 'a', 'n', 'g', 'e' };

  c9_emxArray_int32_T *c9_b;
  emlrtStack c9_st;
  const mxArray *c9_b_y = NULL;
  const mxArray *c9_c_y = NULL;
  const mxArray *c9_d_y = NULL;
  const mxArray *c9_e_y = NULL;
  const mxArray *c9_f_y = NULL;
  const mxArray *c9_g_y = NULL;
  real_T c9_b_varargin_1[2];
  real_T c9_c_varargin_2[2];
  real_T c9_b_k;
  real_T c9_x1;
  real_T c9_x2;
  int32_T c9_b_loop_ub;
  int32_T c9_c_loop_ub;
  int32_T c9_d_loop_ub;
  int32_T c9_i;
  int32_T c9_i1;
  int32_T c9_i2;
  int32_T c9_i3;
  int32_T c9_i4;
  int32_T c9_i5;
  int32_T c9_k;
  int32_T c9_loop_ub;
  boolean_T c9_b_p;
  boolean_T c9_c_p;
  boolean_T c9_exitg1;
  boolean_T c9_p;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  if (!c9_allinrange(chartInstance, c9_varargin_1, 120)) {
    c9_b_y = NULL;
    sf_mex_assign(&c9_b_y, sf_mex_create("y", c9_b_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c9_c_y = NULL;
    sf_mex_assign(&c9_c_y, sf_mex_create("y", c9_b_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    sf_mex_call(c9_sp, &c9_c_emlrtMCI, "error", 0U, 2U, 14, c9_b_y, 14,
                sf_mex_call(c9_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c9_sp, NULL, "message", 1U, 1U, 14, c9_c_y)));
  }

  c9_b_varargin_1[0] = (real_T)c9_varargin_1->size[0];
  c9_b_varargin_1[1] = 1.0;
  c9_c_varargin_2[0] = (real_T)c9_b_varargin_2->size[0];
  c9_c_varargin_2[1] = 1.0;
  c9_p = false;
  c9_b_p = true;
  c9_k = 0;
  c9_exitg1 = false;
  while ((!c9_exitg1) && (c9_k < 2)) {
    c9_b_k = (real_T)c9_k + 1.0;
    c9_x1 = c9_b_varargin_1[(int32_T)c9_b_k - 1];
    c9_x2 = c9_c_varargin_2[(int32_T)c9_b_k - 1];
    c9_c_p = (c9_x1 == c9_x2);
    if (!c9_c_p) {
      c9_b_p = false;
      c9_exitg1 = true;
    } else {
      c9_k++;
    }
  }

  if (c9_b_p) {
    c9_p = true;
  }

  if (!c9_p) {
    c9_d_y = NULL;
    sf_mex_assign(&c9_d_y, sf_mex_create("y", c9_b_cv1, 10, 0U, 1U, 0U, 2, 1, 34),
                  false);
    c9_f_y = NULL;
    sf_mex_assign(&c9_f_y, sf_mex_create("y", c9_b_cv1, 10, 0U, 1U, 0U, 2, 1, 34),
                  false);
    sf_mex_call(c9_sp, &c9_d_emlrtMCI, "error", 0U, 2U, 14, c9_d_y, 14,
                sf_mex_call(c9_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c9_sp, NULL, "message", 1U, 1U, 14, c9_f_y)));
  }

  if (!c9_allinrange(chartInstance, c9_b_varargin_2, 160)) {
    c9_e_y = NULL;
    sf_mex_assign(&c9_e_y, sf_mex_create("y", c9_b_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c9_g_y = NULL;
    sf_mex_assign(&c9_g_y, sf_mex_create("y", c9_b_cv, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    sf_mex_call(c9_sp, &c9_c_emlrtMCI, "error", 0U, 2U, 14, c9_e_y, 14,
                sf_mex_call(c9_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c9_sp, NULL, "message", 1U, 1U, 14, c9_g_y)));
  }

  c9_i = c9_idx->size[0];
  c9_idx->size[0] = c9_varargin_1->size[0];
  c9_st.site = &c9_pg_emlrtRSI;
  c9_emxEnsureCapacity_int32_T(chartInstance, &c9_st, c9_idx, c9_i,
    &c9_ub_emlrtRTEI);
  c9_loop_ub = c9_varargin_1->size[0] - 1;
  for (c9_i1 = 0; c9_i1 <= c9_loop_ub; c9_i1++) {
    c9_idx->data[c9_i1] = (int32_T)c9_varargin_1->data[c9_i1];
  }

  c9_emxInit_int32_T(chartInstance, c9_sp, &c9_b, 1, &c9_vb_emlrtRTEI);
  c9_i2 = c9_b->size[0];
  c9_b->size[0] = c9_b_varargin_2->size[0];
  c9_st.site = &c9_og_emlrtRSI;
  c9_emxEnsureCapacity_int32_T(chartInstance, &c9_st, c9_b, c9_i2,
    &c9_vb_emlrtRTEI);
  c9_b_loop_ub = c9_b_varargin_2->size[0] - 1;
  for (c9_i3 = 0; c9_i3 <= c9_b_loop_ub; c9_i3++) {
    c9_b->data[c9_i3] = (int32_T)c9_b_varargin_2->data[c9_i3] - 1;
  }

  c9_c_loop_ub = c9_b->size[0] - 1;
  for (c9_i4 = 0; c9_i4 <= c9_c_loop_ub; c9_i4++) {
    c9_b->data[c9_i4] *= 120;
  }

  c9_d_loop_ub = c9_idx->size[0] - 1;
  for (c9_i5 = 0; c9_i5 <= c9_d_loop_ub; c9_i5++) {
    c9_idx->data[c9_i5] += c9_b->data[c9_i5];
  }

  c9_emxFree_int32_T(chartInstance, &c9_b);
}

static void c9_check_forloop_overflow_error
  (SFc9_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c9_sp)
{
  static char_T c9_b_cv[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o', 'p',
    '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  static char_T c9_b_cv1[5] = { 'i', 'n', 't', '3', '2' };

  const mxArray *c9_b_y = NULL;
  const mxArray *c9_c_y = NULL;
  const mxArray *c9_d_y = NULL;
  (void)chartInstance;
  c9_b_y = NULL;
  sf_mex_assign(&c9_b_y, sf_mex_create("y", c9_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c9_c_y = NULL;
  sf_mex_assign(&c9_c_y, sf_mex_create("y", c9_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c9_d_y = NULL;
  sf_mex_assign(&c9_d_y, sf_mex_create("y", c9_b_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                false);
  sf_mex_call(c9_sp, &c9_emlrtMCI, "error", 0U, 2U, 14, c9_b_y, 14, sf_mex_call
              (c9_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call(c9_sp, NULL,
    "message", 1U, 2U, 14, c9_c_y, 14, c9_d_y)));
}

static boolean_T c9_any(SFc9_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c9_sp, creal_T c9_x[19200])
{
  static creal_T c9_dc = { 0.0,        /* re */
    0.0                                /* im */
  };

  c9_emxArray_creal_T *c9_b_x;
  creal_T c9_d_x;
  real_T c9_b_k;
  int32_T c9_i;
  int32_T c9_i1;
  int32_T c9_k;
  boolean_T c9_b;
  boolean_T c9_b1;
  boolean_T c9_b2;
  boolean_T c9_b_b;
  boolean_T c9_b_y;
  boolean_T c9_c_x;
  boolean_T c9_exitg1;
  c9_emxInit_creal_T1(chartInstance, c9_sp, &c9_b_x, 1, &c9_i_emlrtRTEI);
  c9_i = c9_b_x->size[0];
  c9_b_x->size[0] = 19200;
  c9_emxEnsureCapacity_creal_T1(chartInstance, c9_sp, c9_b_x, c9_i,
    &c9_i_emlrtRTEI);
  for (c9_i1 = 0; c9_i1 < 19200; c9_i1++) {
    c9_b_x->data[c9_i1] = c9_x[c9_i1];
  }

  c9_b_y = false;
  c9_k = 0;
  c9_exitg1 = false;
  while ((!c9_exitg1) && (c9_k < 19200)) {
    c9_b_k = (real_T)c9_k + 1.0;
    c9_c_x = ((c9_b_x->data[(int32_T)c9_b_k - 1].re == c9_dc.re) &&
              (c9_b_x->data[(int32_T)c9_b_k - 1].im == c9_dc.im));
    if (c9_c_x) {
      c9_b = true;
    } else {
      c9_d_x = c9_b_x->data[(int32_T)c9_b_k - 1];
      c9_b1 = muDoubleScalarIsNaN(c9_d_x.re);
      c9_b2 = muDoubleScalarIsNaN(c9_d_x.im);
      c9_b_b = (c9_b1 || c9_b2);
      if (c9_b_b) {
        c9_b = true;
      } else {
        c9_b = false;
      }
    }

    if (!c9_b) {
      c9_b_y = true;
      c9_exitg1 = true;
    } else {
      c9_k++;
    }
  }

  c9_emxFree_creal_T(chartInstance, &c9_b_x);
  return c9_b_y;
}

static void c9_medfilt2(SFc9_flightControlSystemInstanceStruct *chartInstance,
  real_T c9_varargin_1[19200], real_T c9_b[19200])
{
  static int32_T c9_offsets[25] = { -250, -249, -248, -247, -246, -126, -125,
    -124, -123, -122, -2, -1, 0, 1, 2, 122, 123, 124, 125, 126, 246, 247, 248,
    249, 250 };

  real_T c9_domainSizeT[2];
  real_T c9_sizeB[2];
  real_T c9_startIdxT[2];
  real_T c9_c_i;
  real_T c9_c_j;
  real_T c9_d_a;
  real_T c9_e_a;
  real_T c9_f_a;
  real_T c9_g_a;
  int32_T c9_b_c;
  int32_T c9_b_i;
  int32_T c9_b_j;
  int32_T c9_c;
  int32_T c9_c_c;
  int32_T c9_d_c;
  int32_T c9_d_i;
  int32_T c9_d_j;
  int32_T c9_e_i;
  int32_T c9_e_j;
  int32_T c9_f_i;
  int32_T c9_f_j;
  int32_T c9_g_i;
  int32_T c9_i;
  int32_T c9_i1;
  int32_T c9_i2;
  int32_T c9_j;
  for (c9_j = 0; c9_j < 2; c9_j++) {
    c9_c_j = (real_T)c9_j + 1.0;
    for (c9_i = 0; c9_i < 124; c9_i++) {
      c9_c_i = (real_T)c9_i + 1.0;
      chartInstance->c9_Apad[((int32_T)c9_c_i + 124 * ((int32_T)c9_c_j - 1)) - 1]
        = 0.0;
    }
  }

  for (c9_b_j = 0; c9_b_j < 2; c9_b_j++) {
    for (c9_b_i = 0; c9_b_i < 124; c9_b_i++) {
      c9_c_i = (real_T)c9_b_i + 1.0;
      chartInstance->c9_Apad[((int32_T)c9_c_i + 124 * (c9_b_j + 162)) - 1] = 0.0;
    }
  }

  for (c9_d_j = 0; c9_d_j < 160; c9_d_j++) {
    c9_c_j = (real_T)c9_d_j + 1.0;
    for (c9_d_i = 0; c9_d_i < 2; c9_d_i++) {
      c9_c_i = (real_T)c9_d_i + 1.0;
      c9_d_a = c9_c_j;
      c9_c = (int32_T)c9_d_a;
      chartInstance->c9_Apad[((int32_T)c9_c_i + 124 * (c9_c + 1)) - 1] = 0.0;
    }
  }

  for (c9_e_j = 0; c9_e_j < 160; c9_e_j++) {
    c9_c_j = (real_T)c9_e_j + 1.0;
    for (c9_e_i = 0; c9_e_i < 2; c9_e_i++) {
      c9_e_a = c9_c_j;
      c9_b_c = (int32_T)c9_e_a;
      chartInstance->c9_Apad[(c9_e_i + 124 * (c9_b_c + 1)) + 122] = 0.0;
    }
  }

  for (c9_f_j = 0; c9_f_j < 160; c9_f_j++) {
    c9_c_j = (real_T)c9_f_j + 1.0;
    for (c9_g_i = 0; c9_g_i < 120; c9_g_i++) {
      c9_c_i = (real_T)c9_g_i + 1.0;
      c9_f_a = c9_c_i;
      c9_c_c = (int32_T)c9_f_a;
      c9_g_a = c9_c_j;
      c9_d_c = (int32_T)c9_g_a;
      chartInstance->c9_Apad[(c9_c_c + 124 * (c9_d_c + 1)) + 1] = c9_varargin_1
        [((int32_T)c9_c_i + 120 * ((int32_T)c9_c_j - 1)) - 1];
    }
  }

  for (c9_f_i = 0; c9_f_i < 2; c9_f_i++) {
    c9_domainSizeT[c9_f_i] = 5.0;
  }

  for (c9_i1 = 0; c9_i1 < 2; c9_i1++) {
    c9_startIdxT[c9_i1] = 2.0;
  }

  for (c9_i2 = 0; c9_i2 < 2; c9_i2++) {
    c9_sizeB[c9_i2] = 120.0 + 40.0 * (real_T)c9_i2;
  }

  ordfilt2_real64(&chartInstance->c9_Apad[0], 124.0, &c9_startIdxT[0],
                  &c9_offsets[0], 25.0, &c9_domainSizeT[0], 12.0, &c9_b[0],
                  &c9_sizeB[0], true);
}

static void c9_chcenters(SFc9_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c9_sp, creal_T c9_varargin_1[19200], c9_emxArray_real_T
  *c9_centers, c9_emxArray_real_T *c9_metric)
{
  c9_emxArray_int32_T *c9_iidx;
  c9_emxArray_int32_T *c9_r1;
  c9_emxArray_real_T *c9_b_varargin_2;
  c9_emxArray_real_T *c9_c_centers;
  c9_emxArray_real_T *c9_d_x;
  c9_emxArray_real_T *c9_ndx;
  c9_emxArray_real_T *c9_r;
  c9_emxArray_real_T *c9_sortIdx;
  c9_emxArray_sOA5t73y81YtFHGIDxk0fK *c9_b_s;
  emlrtStack c9_b_st;
  emlrtStack c9_c_st;
  emlrtStack c9_st;
  creal_T c9_x;
  real_T c9_imSizeT[2];
  real_T c9_b;
  real_T c9_b_idx;
  real_T c9_b_x;
  real_T c9_b_y;
  real_T c9_c_accumMatrixRe;
  real_T c9_c_x;
  real_T c9_d;
  real_T c9_d1;
  real_T c9_d_a;
  real_T c9_d_k;
  real_T c9_x1;
  real_T c9_x2;
  int32_T c9_b_iv[2];
  int32_T c9_iv1[2];
  int32_T c9_tmp_data[2];
  int32_T c9_b_sortIdx[1];
  int32_T c9_b_centers;
  int32_T c9_b_k;
  int32_T c9_b_loop_ub;
  int32_T c9_c_idx;
  int32_T c9_c_k;
  int32_T c9_c_loop_ub;
  int32_T c9_d_loop_ub;
  int32_T c9_e_loop_ub;
  int32_T c9_f_loop_ub;
  int32_T c9_g_loop_ub;
  int32_T c9_h_loop_ub;
  int32_T c9_i;
  int32_T c9_i1;
  int32_T c9_i10;
  int32_T c9_i11;
  int32_T c9_i12;
  int32_T c9_i13;
  int32_T c9_i14;
  int32_T c9_i15;
  int32_T c9_i16;
  int32_T c9_i17;
  int32_T c9_i18;
  int32_T c9_i19;
  int32_T c9_i2;
  int32_T c9_i20;
  int32_T c9_i21;
  int32_T c9_i22;
  int32_T c9_i23;
  int32_T c9_i24;
  int32_T c9_i25;
  int32_T c9_i26;
  int32_T c9_i27;
  int32_T c9_i28;
  int32_T c9_i29;
  int32_T c9_i3;
  int32_T c9_i30;
  int32_T c9_i31;
  int32_T c9_i32;
  int32_T c9_i33;
  int32_T c9_i34;
  int32_T c9_i35;
  int32_T c9_i36;
  int32_T c9_i37;
  int32_T c9_i38;
  int32_T c9_i39;
  int32_T c9_i4;
  int32_T c9_i40;
  int32_T c9_i41;
  int32_T c9_i42;
  int32_T c9_i43;
  int32_T c9_i44;
  int32_T c9_i45;
  int32_T c9_i46;
  int32_T c9_i47;
  int32_T c9_i48;
  int32_T c9_i49;
  int32_T c9_i5;
  int32_T c9_i6;
  int32_T c9_i7;
  int32_T c9_i8;
  int32_T c9_i9;
  int32_T c9_i_loop_ub;
  int32_T c9_idx;
  int32_T c9_j_loop_ub;
  int32_T c9_k;
  int32_T c9_k_loop_ub;
  int32_T c9_l_loop_ub;
  int32_T c9_loop_ub;
  boolean_T c9_bw[19200];
  boolean_T c9_x_data[19200];
  boolean_T c9_b_b;
  boolean_T c9_c_b;
  boolean_T c9_d_b;
  boolean_T c9_exitg1;
  boolean_T c9_flat;
  boolean_T c9_guard1 = false;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_b_st.prev = &c9_st;
  c9_b_st.tls = c9_st.tls;
  c9_c_st.prev = &c9_b_st;
  c9_c_st.tls = c9_b_st.tls;
  c9_centers->size[0] = 0;
  c9_centers->size[1] = 0;
  c9_metric->size[0] = 0;
  c9_metric->size[1] = 0;
  for (c9_k = 0; c9_k < 19200; c9_k++) {
    c9_b_k = c9_k;
    c9_x = c9_varargin_1[c9_b_k];
    c9_x1 = c9_x.re;
    c9_x2 = c9_x.im;
    c9_d_a = c9_x1;
    c9_b = c9_x2;
    c9_b_y = muDoubleScalarHypot(c9_d_a, c9_b);
    chartInstance->c9_accumMatrixRe[c9_b_k] = c9_b_y;
  }

  c9_c_accumMatrixRe = chartInstance->c9_accumMatrixRe[0];
  for (c9_i = 0; c9_i < 19200; c9_i++) {
    c9_bw[c9_i] = (chartInstance->c9_accumMatrixRe[c9_i] == c9_c_accumMatrixRe);
  }

  for (c9_i1 = 0; c9_i1 < 19200; c9_i1++) {
    c9_x_data[c9_i1] = c9_bw[c9_i1];
  }

  c9_flat = true;
  c9_c_k = 0;
  c9_exitg1 = false;
  while ((!c9_exitg1) && (c9_c_k < 19200)) {
    c9_d_k = (real_T)c9_c_k + 1.0;
    if (!c9_x_data[(int32_T)c9_d_k - 1]) {
      c9_flat = false;
      c9_exitg1 = true;
    } else {
      c9_c_k++;
    }
  }

  if (!c9_flat) {
    c9_st.site = &c9_nb_emlrtRSI;
    c9_medfilt2(chartInstance, chartInstance->c9_accumMatrixRe,
                chartInstance->c9_Hd);
    c9_st.site = &c9_ob_emlrtRSI;
    c9_b_st.site = &c9_ub_emlrtRSI;
    for (c9_i2 = 0; c9_i2 < 19200; c9_i2++) {
      chartInstance->c9_marker[c9_i2] = chartInstance->c9_Hd[c9_i2] -
        0.069999999999999937;
    }

    c9_c_st.site = &c9_vb_emlrtRSI;
    c9_validateattributes(chartInstance, &c9_c_st, chartInstance->c9_marker);
    c9_c_st.site = &c9_wb_emlrtRSI;
    c9_validateattributes(chartInstance, &c9_c_st, chartInstance->c9_Hd);
    for (c9_i3 = 0; c9_i3 < 19200; c9_i3++) {
      chartInstance->c9_mask[c9_i3] = chartInstance->c9_Hd[c9_i3];
    }

    for (c9_i4 = 0; c9_i4 < 19200; c9_i4++) {
      chartInstance->c9_Hd[c9_i4] = chartInstance->c9_marker[c9_i4];
    }

    for (c9_i5 = 0; c9_i5 < 2; c9_i5++) {
      c9_imSizeT[c9_i5] = 120.0 + 40.0 * (real_T)c9_i5;
    }

    ippreconstruct_real64(&chartInstance->c9_Hd[0], &chartInstance->c9_mask[0],
                          &c9_imSizeT[0], 2.0);
    c9_st.site = &c9_pb_emlrtRSI;
    c9_imregionalmax(chartInstance, &c9_st, chartInstance->c9_Hd, c9_bw);
    c9_emxInit_sOA5t73y81YtFHGIDxk0fKF(chartInstance, c9_sp, &c9_b_s, 1,
      &c9_jc_emlrtRTEI);
    c9_st.site = &c9_qb_emlrtRSI;
    c9_regionprops(chartInstance, &c9_st, c9_bw, chartInstance->c9_accumMatrixRe,
                   c9_b_s);
    if (c9_b_s->size[0] != 0) {
      c9_i6 = c9_centers->size[0] * c9_centers->size[1];
      c9_centers->size[0] = c9_b_s->size[0];
      c9_centers->size[1] = 2;
      c9_st.site = &c9_dg_emlrtRSI;
      c9_emxEnsureCapacity_real_T(chartInstance, &c9_st, c9_centers, c9_i6,
        &c9_wb_emlrtRTEI);
      c9_d = (real_T)c9_b_s->size[0];
      c9_i7 = (int32_T)c9_d - 1;
      for (c9_idx = 0; c9_idx <= c9_i7; c9_idx++) {
        c9_b_idx = (real_T)c9_idx + 1.0;
        c9_i9 = c9_centers->size[0];
        c9_i10 = (int32_T)c9_b_idx;
        if ((c9_i10 < 1) || (c9_i10 > c9_i9)) {
          emlrtDynamicBoundsCheckR2012b(c9_i10, 1, c9_i9, &c9_fc_emlrtBCI,
            (emlrtConstCTX)c9_sp);
        }

        c9_i11 = c9_i10;
        for (c9_i12 = 0; c9_i12 < 2; c9_i12++) {
          c9_tmp_data[c9_i12] = c9_i12;
        }

        for (c9_i15 = 0; c9_i15 < 2; c9_i15++) {
          c9_b_iv[c9_i15] = 1 + c9_i15;
        }

        for (c9_i16 = 0; c9_i16 < 2; c9_i16++) {
          c9_iv1[c9_i16] = 1 + c9_i16;
        }

        emlrtSubAssignSizeCheckR2012b(&c9_b_iv[0], 2, &c9_iv1[0], 2,
          &c9_emlrtECI, (void *)c9_sp);
        c9_i18 = c9_i11 - 1;
        for (c9_i19 = 0; c9_i19 < 2; c9_i19++) {
          c9_i23 = c9_b_s->size[0];
          c9_i24 = (int32_T)c9_b_idx;
          if ((c9_i24 < 1) || (c9_i24 > c9_i23)) {
            emlrtDynamicBoundsCheckR2012b(c9_i24, 1, c9_i23, &c9_hc_emlrtBCI,
              (emlrtConstCTX)c9_sp);
          }

          c9_centers->data[c9_i18 + c9_centers->size[0] * c9_tmp_data[c9_i19]] =
            c9_b_s->data[c9_i24 - 1].WeightedCentroid[c9_i19];
        }
      }

      c9_d1 = (real_T)c9_centers->size[0];
      c9_i8 = (int32_T)-((-1.0 - c9_d1) + 1.0);
      emlrtForLoopVectorCheckR2021a(c9_d1, -1.0, 1.0, mxDOUBLE_CLASS, c9_i8,
        &c9_of_emlrtRTEI, (emlrtConstCTX)c9_sp);
      c9_emxInit_real_T(chartInstance, c9_sp, &c9_r, 2, &c9_ac_emlrtRTEI);
      for (c9_c_idx = 0; c9_c_idx < c9_i8; c9_c_idx++) {
        c9_b_idx = c9_d1 - (real_T)c9_c_idx;
        c9_i13 = c9_centers->size[0];
        c9_i14 = (int32_T)c9_b_idx;
        if ((c9_i14 < 1) || (c9_i14 > c9_i13)) {
          emlrtDynamicBoundsCheckR2012b(c9_i14, 1, c9_i13, &c9_gc_emlrtBCI,
            (emlrtConstCTX)c9_sp);
        }

        c9_b_x = c9_centers->data[c9_i14 - 1];
        c9_c_b = muDoubleScalarIsNaN(c9_b_x);
        c9_guard1 = false;
        if (c9_c_b) {
          c9_guard1 = true;
        } else {
          c9_i20 = c9_centers->size[0];
          c9_i22 = (int32_T)c9_b_idx;
          if ((c9_i22 < 1) || (c9_i22 > c9_i20)) {
            emlrtDynamicBoundsCheckR2012b(c9_i22, 1, c9_i20, &c9_ic_emlrtBCI,
              (emlrtConstCTX)c9_sp);
          }

          c9_c_x = c9_centers->data[(c9_i22 + c9_centers->size[0]) - 1];
          c9_d_b = muDoubleScalarIsNaN(c9_c_x);
          if (c9_d_b) {
            c9_guard1 = true;
          }
        }

        if (c9_guard1) {
          c9_i25 = c9_r->size[0] * c9_r->size[1];
          c9_r->size[0] = c9_centers->size[0];
          c9_r->size[1] = c9_centers->size[1];
          c9_st.site = &c9_rb_emlrtRSI;
          c9_emxEnsureCapacity_real_T(chartInstance, &c9_st, c9_r, c9_i25,
            &c9_ac_emlrtRTEI);
          c9_b_loop_ub = c9_centers->size[0] * c9_centers->size[1] - 1;
          for (c9_i27 = 0; c9_i27 <= c9_b_loop_ub; c9_i27++) {
            c9_r->data[c9_i27] = c9_centers->data[c9_i27];
          }

          c9_st.site = &c9_rb_emlrtRSI;
          c9_b_nullAssignment(chartInstance, &c9_st, c9_r, (int32_T)c9_b_idx);
          c9_i29 = c9_centers->size[0] * c9_centers->size[1];
          c9_centers->size[0] = c9_r->size[0];
          c9_centers->size[1] = 2;
          c9_st.site = &c9_rb_emlrtRSI;
          c9_emxEnsureCapacity_real_T(chartInstance, &c9_st, c9_centers, c9_i29,
            &c9_ac_emlrtRTEI);
          c9_d_loop_ub = c9_r->size[0] * c9_r->size[1] - 1;
          for (c9_i31 = 0; c9_i31 <= c9_d_loop_ub; c9_i31++) {
            c9_centers->data[c9_i31] = c9_r->data[c9_i31];
          }
        }
      }

      c9_emxFree_real_T(chartInstance, &c9_r);
      c9_b_b = (c9_centers->size[0] == 0);
      if (!c9_b_b) {
        c9_emxInit_real_T1(chartInstance, c9_sp, &c9_ndx, 1, &c9_lc_emlrtRTEI);
        c9_st.site = &c9_sb_emlrtRSI;
        c9_i17 = c9_ndx->size[0];
        c9_ndx->size[0] = c9_centers->size[0];
        c9_b_st.site = &c9_sb_emlrtRSI;
        c9_emxEnsureCapacity_real_T1(chartInstance, &c9_b_st, c9_ndx, c9_i17,
          &c9_yb_emlrtRTEI);
        c9_loop_ub = c9_centers->size[0] - 1;
        for (c9_i21 = 0; c9_i21 <= c9_loop_ub; c9_i21++) {
          c9_ndx->data[c9_i21] = c9_centers->data[c9_i21 + c9_centers->size[0]];
        }

        c9_b_st.site = &c9_sb_emlrtRSI;
        c9_b_round(chartInstance, &c9_b_st, c9_ndx);
        c9_emxInit_real_T1(chartInstance, &c9_st, &c9_b_varargin_2, 1,
                           &c9_bc_emlrtRTEI);
        c9_i26 = c9_b_varargin_2->size[0];
        c9_b_varargin_2->size[0] = c9_centers->size[0];
        c9_b_st.site = &c9_sb_emlrtRSI;
        c9_emxEnsureCapacity_real_T1(chartInstance, &c9_b_st, c9_b_varargin_2,
          c9_i26, &c9_bc_emlrtRTEI);
        c9_c_loop_ub = c9_centers->size[0] - 1;
        for (c9_i28 = 0; c9_i28 <= c9_c_loop_ub; c9_i28++) {
          c9_b_varargin_2->data[c9_i28] = c9_centers->data[c9_i28];
        }

        c9_b_st.site = &c9_sb_emlrtRSI;
        c9_b_round(chartInstance, &c9_b_st, c9_b_varargin_2);
        c9_emxInit_int32_T(chartInstance, &c9_st, &c9_r1, 1, &c9_pb_emlrtRTEI);
        c9_b_st.site = &c9_eb_emlrtRSI;
        c9_eml_sub2ind(chartInstance, &c9_b_st, c9_ndx, c9_b_varargin_2, c9_r1);
        c9_i30 = c9_ndx->size[0];
        c9_ndx->size[0] = c9_r1->size[0];
        c9_emxEnsureCapacity_real_T1(chartInstance, &c9_st, c9_ndx, c9_i30,
          &c9_n_emlrtRTEI);
        c9_e_loop_ub = c9_r1->size[0] - 1;
        for (c9_i32 = 0; c9_i32 <= c9_e_loop_ub; c9_i32++) {
          c9_ndx->data[c9_i32] = (real_T)c9_r1->data[c9_i32];
        }

        c9_emxFree_int32_T(chartInstance, &c9_r1);
        c9_i33 = c9_b_varargin_2->size[0];
        c9_b_varargin_2->size[0] = c9_ndx->size[0];
        c9_st.site = &c9_sb_emlrtRSI;
        c9_emxEnsureCapacity_real_T1(chartInstance, &c9_st, c9_b_varargin_2,
          c9_i33, &c9_cc_emlrtRTEI);
        c9_f_loop_ub = c9_ndx->size[0] - 1;
        for (c9_i34 = 0; c9_i34 <= c9_f_loop_ub; c9_i34++) {
          c9_i35 = (int32_T)c9_ndx->data[c9_i34];
          if ((c9_i35 < 1) || (c9_i35 > 19200)) {
            emlrtDynamicBoundsCheckR2012b(c9_i35, 1, 19200, &c9_jc_emlrtBCI,
              (emlrtConstCTX)c9_sp);
          }

          c9_b_varargin_2->data[c9_i34] = chartInstance->c9_Hd[c9_i35 - 1];
        }

        c9_emxFree_real_T(chartInstance, &c9_ndx);
        c9_i36 = c9_metric->size[0] * c9_metric->size[1];
        c9_metric->size[0] = c9_b_varargin_2->size[0];
        c9_metric->size[1] = 1;
        c9_st.site = &c9_sb_emlrtRSI;
        c9_emxEnsureCapacity_real_T(chartInstance, &c9_st, c9_metric, c9_i36,
          &c9_dc_emlrtRTEI);
        c9_g_loop_ub = c9_b_varargin_2->size[0] - 1;
        for (c9_i37 = 0; c9_i37 <= c9_g_loop_ub; c9_i37++) {
          c9_metric->data[c9_i37] = c9_b_varargin_2->data[c9_i37];
        }

        c9_emxFree_real_T(chartInstance, &c9_b_varargin_2);
        c9_st.site = &c9_tb_emlrtRSI;
        c9_emxInit_real_T(chartInstance, &c9_st, &c9_d_x, 2, &c9_ec_emlrtRTEI);
        c9_i38 = c9_d_x->size[0] * c9_d_x->size[1];
        c9_d_x->size[0] = c9_metric->size[0];
        c9_d_x->size[1] = c9_metric->size[1];
        c9_b_st.site = &c9_tb_emlrtRSI;
        c9_emxEnsureCapacity_real_T(chartInstance, &c9_b_st, c9_d_x, c9_i38,
          &c9_ec_emlrtRTEI);
        c9_h_loop_ub = c9_metric->size[0] * c9_metric->size[1] - 1;
        for (c9_i39 = 0; c9_i39 <= c9_h_loop_ub; c9_i39++) {
          c9_d_x->data[c9_i39] = c9_metric->data[c9_i39];
        }

        c9_emxInit_int32_T1(chartInstance, &c9_st, &c9_iidx, 2, &c9_kc_emlrtRTEI);
        c9_b_st.site = &c9_ke_emlrtRSI;
        c9_b_sort(chartInstance, &c9_b_st, c9_d_x, c9_iidx);
        c9_emxInit_real_T(chartInstance, &c9_st, &c9_sortIdx, 2,
                          &c9_kc_emlrtRTEI);
        c9_i40 = c9_sortIdx->size[0] * c9_sortIdx->size[1];
        c9_sortIdx->size[0] = c9_iidx->size[0];
        c9_sortIdx->size[1] = 1;
        c9_emxEnsureCapacity_real_T(chartInstance, &c9_st, c9_sortIdx, c9_i40,
          &c9_fc_emlrtRTEI);
        c9_i_loop_ub = c9_iidx->size[0] * c9_iidx->size[1] - 1;
        for (c9_i41 = 0; c9_i41 <= c9_i_loop_ub; c9_i41++) {
          c9_sortIdx->data[c9_i41] = (real_T)c9_iidx->data[c9_i41];
        }

        c9_emxFree_int32_T(chartInstance, &c9_iidx);
        c9_i42 = c9_metric->size[0] * c9_metric->size[1];
        c9_metric->size[0] = c9_d_x->size[0];
        c9_metric->size[1] = 1;
        c9_st.site = &c9_tb_emlrtRSI;
        c9_emxEnsureCapacity_real_T(chartInstance, &c9_st, c9_metric, c9_i42,
          &c9_gc_emlrtRTEI);
        c9_j_loop_ub = c9_d_x->size[0] * c9_d_x->size[1] - 1;
        for (c9_i43 = 0; c9_i43 <= c9_j_loop_ub; c9_i43++) {
          c9_metric->data[c9_i43] = c9_d_x->data[c9_i43];
        }

        c9_emxFree_real_T(chartInstance, &c9_d_x);
        c9_b_centers = c9_centers->size[0];
        c9_b_sortIdx[0] = c9_sortIdx->size[0];
        c9_emxInit_real_T(chartInstance, c9_sp, &c9_c_centers, 2,
                          &c9_hc_emlrtRTEI);
        c9_i44 = c9_c_centers->size[0] * c9_c_centers->size[1];
        c9_c_centers->size[0] = c9_b_sortIdx[0];
        c9_c_centers->size[1] = 2;
        c9_st.site = &c9_cg_emlrtRSI;
        c9_emxEnsureCapacity_real_T(chartInstance, &c9_st, c9_c_centers, c9_i44,
          &c9_hc_emlrtRTEI);
        for (c9_i45 = 0; c9_i45 < 2; c9_i45++) {
          c9_k_loop_ub = c9_b_sortIdx[0] - 1;
          for (c9_i47 = 0; c9_i47 <= c9_k_loop_ub; c9_i47++) {
            c9_i48 = (int32_T)c9_sortIdx->data[c9_i47];
            if ((c9_i48 < 1) || (c9_i48 > c9_b_centers)) {
              emlrtDynamicBoundsCheckR2012b(c9_i48, 1, c9_b_centers,
                &c9_kc_emlrtBCI, (emlrtConstCTX)c9_sp);
            }

            c9_c_centers->data[c9_i47 + c9_c_centers->size[0] * c9_i45] =
              c9_centers->data[(c9_i48 + c9_centers->size[0] * c9_i45) - 1];
          }
        }

        c9_emxFree_real_T(chartInstance, &c9_sortIdx);
        c9_i46 = c9_centers->size[0] * c9_centers->size[1];
        c9_centers->size[0] = c9_c_centers->size[0];
        c9_centers->size[1] = c9_c_centers->size[1];
        c9_st.site = &c9_cg_emlrtRSI;
        c9_emxEnsureCapacity_real_T(chartInstance, &c9_st, c9_centers, c9_i46,
          &c9_ic_emlrtRTEI);
        c9_l_loop_ub = c9_c_centers->size[0] * c9_c_centers->size[1] - 1;
        for (c9_i49 = 0; c9_i49 <= c9_l_loop_ub; c9_i49++) {
          c9_centers->data[c9_i49] = c9_c_centers->data[c9_i49];
        }

        c9_emxFree_real_T(chartInstance, &c9_c_centers);
      }
    }

    c9_emxFree_sOA5t73y81YtFHGIDxk0fKF(chartInstance, &c9_b_s);
  }
}

static void c9_validateattributes(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, real_T c9_d_a[19200])
{
  static char_T c9_b_cv[35] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'm', 'r',
    'e', 'c', 'o', 'n', 's', 't', 'r', 'u', 'c', 't', ':', 'e', 'x', 'p', 'e',
    'c', 't', 'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T c9_b_cv1[5] = { 'i', 'n', 'p', 'u', 't' };

  emlrtStack c9_st;
  const mxArray *c9_b_y = NULL;
  const mxArray *c9_c_y = NULL;
  const mxArray *c9_d_y = NULL;
  real_T c9_b_k;
  real_T c9_b_x;
  real_T c9_x;
  int32_T c9_k;
  boolean_T c9_b;
  boolean_T c9_b_b;
  boolean_T c9_b_p;
  boolean_T c9_exitg1;
  boolean_T c9_p;
  (void)chartInstance;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_st.site = &c9_yb_emlrtRSI;
  c9_p = true;
  c9_k = 0;
  c9_exitg1 = false;
  while ((!c9_exitg1) && (c9_k < 19200)) {
    c9_b_k = (real_T)c9_k + 1.0;
    c9_x = c9_d_a[(int32_T)c9_b_k - 1];
    c9_b_x = c9_x;
    c9_b_b = muDoubleScalarIsNaN(c9_b_x);
    c9_b_p = !c9_b_b;
    if (c9_b_p) {
      c9_k++;
    } else {
      c9_p = false;
      c9_exitg1 = true;
    }
  }

  if (c9_p) {
    c9_b = true;
  } else {
    c9_b = false;
  }

  if (!c9_b) {
    c9_b_y = NULL;
    sf_mex_assign(&c9_b_y, sf_mex_create("y", c9_b_cv, 10, 0U, 1U, 0U, 2, 1, 35),
                  false);
    c9_c_y = NULL;
    sf_mex_assign(&c9_c_y, sf_mex_create("y", c9_cv, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c9_d_y = NULL;
    sf_mex_assign(&c9_d_y, sf_mex_create("y", c9_b_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c9_st, &c9_e_emlrtMCI, "error", 0U, 2U, 14, c9_b_y, 14,
                sf_mex_call(&c9_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c9_st, NULL, "message", 1U, 2U, 14, c9_c_y, 14, c9_d_y)));
  }
}

static void c9_imregionalmax(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, real_T c9_varargin_1[19200],
  boolean_T c9_BW[19200])
{
  static char_T c9_b_cv[35] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'm', 'r',
    'e', 'g', 'i', 'o', 'n', 'a', 'l', 'm', 'a', 'x', ':', 'e', 'x', 'p', 'e',
    'c', 't', 'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T c9_cv2[19] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o', 'l',
    'o', 'g', 'i', 'c', 'a', 'l', 'n', 'a', 'n' };

  static char_T c9_b_cv1[18] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm',
    'b', 'e', 'r', ' ', '1', ',', ' ', 'I', ',' };

  emlrtStack c9_b_st;
  emlrtStack c9_st;
  const mxArray *c9_b_y = NULL;
  const mxArray *c9_c_y = NULL;
  const mxArray *c9_d_y = NULL;
  const mxArray *c9_e_y = NULL;
  const mxArray *c9_f_y = NULL;
  real_T c9_connSizeT[2];
  real_T c9_imSizeT[2];
  real_T c9_b_k;
  real_T c9_b_x;
  real_T c9_c_x;
  real_T c9_d_k;
  real_T c9_x;
  int32_T c9_c_k;
  int32_T c9_i;
  int32_T c9_i1;
  int32_T c9_i2;
  int32_T c9_k;
  boolean_T c9_conn[9];
  boolean_T c9_b;
  boolean_T c9_b_b;
  boolean_T c9_b_p;
  boolean_T c9_c_b;
  boolean_T c9_exitg1;
  boolean_T c9_p;
  (void)chartInstance;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_b_st.prev = &c9_st;
  c9_b_st.tls = c9_st.tls;
  c9_st.site = &c9_ac_emlrtRSI;
  c9_b_st.site = &c9_yb_emlrtRSI;
  c9_p = true;
  c9_k = 0;
  c9_exitg1 = false;
  while ((!c9_exitg1) && (c9_k < 19200)) {
    c9_b_k = (real_T)c9_k + 1.0;
    c9_x = c9_varargin_1[(int32_T)c9_b_k - 1];
    c9_b_x = c9_x;
    c9_b_b = muDoubleScalarIsNaN(c9_b_x);
    c9_b_p = !c9_b_b;
    if (c9_b_p) {
      c9_k++;
    } else {
      c9_p = false;
      c9_exitg1 = true;
    }
  }

  if (c9_p) {
    c9_b = true;
  } else {
    c9_b = false;
  }

  if (!c9_b) {
    c9_b_y = NULL;
    sf_mex_assign(&c9_b_y, sf_mex_create("y", c9_b_cv, 10, 0U, 1U, 0U, 2, 1, 35),
                  false);
    c9_c_y = NULL;
    sf_mex_assign(&c9_c_y, sf_mex_create("y", c9_cv, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c9_d_y = NULL;
    sf_mex_assign(&c9_d_y, sf_mex_create("y", c9_b_cv1, 10, 0U, 1U, 0U, 2, 1, 18),
                  false);
    sf_mex_call(&c9_b_st, &c9_e_emlrtMCI, "error", 0U, 2U, 14, c9_b_y, 14,
                sf_mex_call(&c9_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c9_b_st, NULL, "message", 1U, 2U, 14, c9_c_y, 14, c9_d_y)));
  }

  c9_st.site = &c9_bc_emlrtRSI;
  for (c9_c_k = 0; c9_c_k < 19200; c9_c_k++) {
    c9_d_k = (real_T)c9_c_k + 1.0;
    c9_c_x = c9_varargin_1[(int32_T)c9_d_k - 1];
    c9_c_b = muDoubleScalarIsNaN(c9_c_x);
    if (c9_c_b) {
      c9_e_y = NULL;
      sf_mex_assign(&c9_e_y, sf_mex_create("y", c9_cv2, 10, 0U, 1U, 0U, 2, 1, 19),
                    false);
      c9_f_y = NULL;
      sf_mex_assign(&c9_f_y, sf_mex_create("y", c9_cv2, 10, 0U, 1U, 0U, 2, 1, 19),
                    false);
      sf_mex_call(&c9_st, &c9_f_emlrtMCI, "error", 0U, 2U, 14, c9_e_y, 14,
                  sf_mex_call(&c9_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (&c9_st, NULL, "message", 1U, 1U, 14, c9_f_y)));
    }
  }

  c9_st.site = &c9_cc_emlrtRSI;
  for (c9_i = 0; c9_i < 9; c9_i++) {
    c9_conn[c9_i] = true;
  }

  for (c9_i1 = 0; c9_i1 < 2; c9_i1++) {
    c9_imSizeT[c9_i1] = 120.0 + 40.0 * (real_T)c9_i1;
  }

  for (c9_i2 = 0; c9_i2 < 2; c9_i2++) {
    c9_connSizeT[c9_i2] = 3.0;
  }

  imregionalmax_real64(&c9_varargin_1[0], &c9_BW[0], 2.0, &c9_imSizeT[0],
                       &c9_conn[0], 2.0, &c9_connSizeT[0]);
}

static void c9_regionprops(SFc9_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c9_sp, boolean_T c9_varargin_1[19200], real_T
  c9_b_varargin_2[19200], c9_emxArray_sOA5t73y81YtFHGIDxk0fK *c9_outstats)
{
  static char_T c9_b_cv[31] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'r', 'e', 'g',
    'i', 'o', 'n', 'p', 'r', 'o', 'p', 's', ':', 's', 'i', 'z', 'e', 'M', 'i',
    's', 'm', 'a', 't', 'c', 'h' };

  static char_T c9_b_cv1[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm',
    'a', 'x', 's', 'i', 'z', 'e' };

  static char_T c9_cv2[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm', 'a',
    'x', 's', 'i', 'z', 'e' };

  c9_emxArray_boolean_T *c9_tile;
  c9_emxArray_int32_T *c9_b_regionLengths;
  c9_emxArray_int32_T *c9_idxCount;
  c9_emxArray_int32_T *c9_regionLengths;
  c9_emxArray_real_T *c9_regionIndices;
  c9_emxArray_s_R6Og1x0kmqQXSF9Pwa49 *c9_stats;
  c9_sHtk0WM4OMtyqkehwQYcq2 c9_statsAlreadyComputed;
  c9_sOA5t73y81YtFHGIDxk0fKF c9_b_s;
  c9_s_R6Og1x0kmqQXSF9Pwa49FD c9_statsOneObj;
  c9_s_vX9LV7M75v5ZNol5H5URkE c9_CC;
  emlrtStack c9_b_st;
  emlrtStack c9_c_st;
  emlrtStack c9_d_st;
  emlrtStack c9_st;
  const mxArray *c9_b_y = NULL;
  const mxArray *c9_c_y = NULL;
  const mxArray *c9_d_y = NULL;
  const mxArray *c9_e_y = NULL;
  real_T c9_imageSize[2];
  real_T c9_b_k;
  real_T c9_b_numObjs;
  real_T c9_b_vIdx;
  real_T c9_c_numObjs;
  real_T c9_c_varargin_1;
  real_T c9_d;
  real_T c9_d1;
  real_T c9_d_k;
  real_T c9_d_numObjs;
  real_T c9_d_varargin_1;
  real_T c9_e_numObjs;
  real_T c9_f_k;
  real_T c9_numObjs;
  real_T c9_x1;
  real_T c9_x2;
  int32_T c9_b_outsize[2];
  int32_T c9_outsize[2];
  int32_T c9_b_loop_ub;
  int32_T c9_c_k;
  int32_T c9_c_loop_ub;
  int32_T c9_d_loop_ub;
  int32_T c9_dim;
  int32_T c9_e_k;
  int32_T c9_e_loop_ub;
  int32_T c9_f_loop_ub;
  int32_T c9_g_loop_ub;
  int32_T c9_h_loop_ub;
  int32_T c9_i;
  int32_T c9_i1;
  int32_T c9_i10;
  int32_T c9_i11;
  int32_T c9_i12;
  int32_T c9_i13;
  int32_T c9_i14;
  int32_T c9_i15;
  int32_T c9_i16;
  int32_T c9_i17;
  int32_T c9_i18;
  int32_T c9_i19;
  int32_T c9_i2;
  int32_T c9_i20;
  int32_T c9_i21;
  int32_T c9_i22;
  int32_T c9_i23;
  int32_T c9_i24;
  int32_T c9_i25;
  int32_T c9_i26;
  int32_T c9_i27;
  int32_T c9_i28;
  int32_T c9_i29;
  int32_T c9_i3;
  int32_T c9_i30;
  int32_T c9_i31;
  int32_T c9_i32;
  int32_T c9_i33;
  int32_T c9_i34;
  int32_T c9_i35;
  int32_T c9_i36;
  int32_T c9_i37;
  int32_T c9_i38;
  int32_T c9_i39;
  int32_T c9_i4;
  int32_T c9_i40;
  int32_T c9_i41;
  int32_T c9_i42;
  int32_T c9_i43;
  int32_T c9_i44;
  int32_T c9_i45;
  int32_T c9_i46;
  int32_T c9_i47;
  int32_T c9_i48;
  int32_T c9_i49;
  int32_T c9_i5;
  int32_T c9_i50;
  int32_T c9_i51;
  int32_T c9_i52;
  int32_T c9_i53;
  int32_T c9_i6;
  int32_T c9_i7;
  int32_T c9_i8;
  int32_T c9_i9;
  int32_T c9_i_loop_ub;
  int32_T c9_k;
  int32_T c9_loop_ub;
  int32_T c9_vIdx;
  boolean_T c9_b_varargin_1[19200];
  boolean_T c9_b;
  boolean_T c9_b_p;
  boolean_T c9_c_p;
  boolean_T c9_exitg1;
  boolean_T c9_p;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_b_st.prev = &c9_st;
  c9_b_st.tls = c9_st.tls;
  c9_c_st.prev = &c9_b_st;
  c9_c_st.tls = c9_b_st.tls;
  c9_d_st.prev = &c9_c_st;
  c9_d_st.tls = c9_c_st.tls;
  c9_emxInitStruct_s_vX9LV7M75v5ZNol(chartInstance, c9_sp, &c9_CC,
    &c9_uc_emlrtRTEI);
  c9_st.site = &c9_dc_emlrtRSI;
  for (c9_i = 0; c9_i < 19200; c9_i++) {
    c9_b_varargin_1[c9_i] = c9_varargin_1[c9_i];
  }

  c9_bwconncomp(chartInstance, &c9_st, c9_b_varargin_1, &c9_CC);
  for (c9_i1 = 0; c9_i1 < 2; c9_i1++) {
    c9_imageSize[c9_i1] = c9_CC.ImageSize[c9_i1];
  }

  c9_numObjs = c9_CC.NumObjects;
  c9_st.site = &c9_ec_emlrtRSI;
  c9_b_numObjs = c9_numObjs;
  c9_p = false;
  c9_b_p = true;
  c9_k = 0;
  c9_exitg1 = false;
  while ((!c9_exitg1) && (c9_k < 2)) {
    c9_b_k = (real_T)c9_k + 1.0;
    c9_x1 = c9_imageSize[(int32_T)c9_b_k - 1];
    c9_x2 = 120.0 + 40.0 * (real_T)((int32_T)c9_b_k - 1);
    c9_c_p = (c9_x1 == c9_x2);
    if (!c9_c_p) {
      c9_b_p = false;
      c9_exitg1 = true;
    } else {
      c9_k++;
    }
  }

  if (c9_b_p) {
    c9_p = true;
  }

  if (!c9_p) {
    c9_b_y = NULL;
    sf_mex_assign(&c9_b_y, sf_mex_create("y", c9_b_cv, 10, 0U, 1U, 0U, 2, 1, 31),
                  false);
    c9_c_y = NULL;
    sf_mex_assign(&c9_c_y, sf_mex_create("y", c9_b_cv, 10, 0U, 1U, 0U, 2, 1, 31),
                  false);
    sf_mex_call(&c9_st, &c9_g_emlrtMCI, "error", 0U, 2U, 14, c9_b_y, 14,
                sf_mex_call(&c9_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c9_st, NULL, "message", 1U, 1U, 14, c9_c_y)));
  }

  c9_b_st.site = &c9_od_emlrtRSI;
  c9_c_numObjs = c9_b_numObjs;
  c9_c_st.site = &c9_pd_emlrtRSI;
  c9_c_varargin_1 = c9_c_numObjs;
  c9_d_st.site = &c9_qd_emlrtRSI;
  c9_assertValidSizeArg(chartInstance, &c9_d_st, c9_c_varargin_1);
  c9_emxInit_boolean_T1(chartInstance, &c9_c_st, &c9_tile, 1, &c9_mc_emlrtRTEI);
  c9_i2 = c9_tile->size[0];
  c9_tile->size[0] = (int32_T)c9_c_varargin_1;
  c9_emxEnsureCapacity_boolean_T1(chartInstance, &c9_c_st, c9_tile, c9_i2,
    &c9_mc_emlrtRTEI);
  c9_loop_ub = (int32_T)c9_c_varargin_1 - 1;
  for (c9_i3 = 0; c9_i3 <= c9_loop_ub; c9_i3++) {
    c9_tile->data[c9_i3] = false;
  }

  c9_outsize[0] = c9_tile->size[0];
  if (!((real_T)c9_outsize[0] == (real_T)c9_tile->size[0])) {
    c9_d_y = NULL;
    sf_mex_assign(&c9_d_y, sf_mex_create("y", c9_b_cv1, 10, 0U, 1U, 0U, 2, 1, 15),
                  false);
    sf_mex_call(&c9_c_st, &c9_h_emlrtMCI, "error", 0U, 1U, 14, c9_d_y);
  }

  for (c9_i4 = 0; c9_i4 < 2; c9_i4++) {
    c9_b_s.WeightedCentroid[c9_i4] = 0.0;
  }

  c9_i5 = c9_outstats->size[0];
  c9_outstats->size[0] = c9_outsize[0];
  c9_emxEnsureCapacity_sOA5t73y81YtF(chartInstance, &c9_c_st, c9_outstats, c9_i5,
    &c9_nc_emlrtRTEI);
  c9_b_loop_ub = c9_outsize[0] - 1;
  for (c9_i6 = 0; c9_i6 <= c9_b_loop_ub; c9_i6++) {
    c9_outstats->data[c9_i6] = c9_b_s;
  }

  c9_st.site = &c9_fc_emlrtRSI;
  c9_d_numObjs = c9_numObjs;
  c9_statsAlreadyComputed.Area = false;
  c9_emxInitStruct_s_R6Og1x0kmqQXSF9(chartInstance, &c9_st, &c9_statsOneObj,
    &c9_wc_emlrtRTEI);
  c9_statsOneObj.Area = 0.0;
  c9_statsAlreadyComputed.Centroid = false;
  for (c9_i7 = 0; c9_i7 < 2; c9_i7++) {
    c9_statsOneObj.Centroid[c9_i7] = 0.0;
  }

  c9_statsAlreadyComputed.BoundingBox = false;
  for (c9_i8 = 0; c9_i8 < 4; c9_i8++) {
    c9_statsOneObj.BoundingBox[c9_i8] = 0.0;
  }

  c9_statsAlreadyComputed.MajorAxisLength = false;
  c9_statsOneObj.MajorAxisLength = 0.0;
  c9_statsAlreadyComputed.MinorAxisLength = false;
  c9_statsOneObj.MinorAxisLength = 0.0;
  c9_statsAlreadyComputed.Eccentricity = false;
  c9_statsOneObj.Eccentricity = 0.0;
  c9_statsAlreadyComputed.Orientation = false;
  c9_statsOneObj.Orientation = 0.0;
  c9_statsAlreadyComputed.Image = false;
  c9_statsOneObj.Image.size[0] = 0;
  c9_statsOneObj.Image.size[1] = 0;
  c9_statsAlreadyComputed.FilledImage = false;
  c9_statsOneObj.FilledImage.size[0] = 0;
  c9_statsOneObj.FilledImage.size[1] = 0;
  c9_statsAlreadyComputed.FilledArea = false;
  c9_statsOneObj.FilledArea = 0.0;
  c9_statsAlreadyComputed.EulerNumber = false;
  c9_statsOneObj.EulerNumber = 0.0;
  c9_statsAlreadyComputed.Extrema = false;
  for (c9_i9 = 0; c9_i9 < 16; c9_i9++) {
    c9_statsOneObj.Extrema[c9_i9] = 0.0;
  }

  c9_statsAlreadyComputed.EquivDiameter = false;
  c9_statsOneObj.EquivDiameter = 0.0;
  c9_statsAlreadyComputed.Extent = false;
  c9_statsOneObj.Extent = 0.0;
  c9_statsOneObj.PixelIdxList->size[0] = 0;
  c9_statsAlreadyComputed.PixelList = false;
  c9_statsOneObj.PixelList->size[0] = 0;
  c9_statsOneObj.PixelList->size[1] = 2;
  c9_statsAlreadyComputed.Perimeter = false;
  c9_statsOneObj.Perimeter = 0.0;
  c9_statsAlreadyComputed.Circularity = false;
  c9_statsOneObj.Circularity = 0.0;
  c9_statsAlreadyComputed.PixelValues = false;
  c9_statsOneObj.PixelValues->size[0] = 0;
  c9_statsAlreadyComputed.WeightedCentroid = false;
  for (c9_i10 = 0; c9_i10 < 2; c9_i10++) {
    c9_statsOneObj.WeightedCentroid[c9_i10] = 0.0;
  }

  c9_statsAlreadyComputed.MeanIntensity = false;
  c9_statsOneObj.MeanIntensity = 0.0;
  c9_statsAlreadyComputed.MinIntensity = false;
  c9_statsOneObj.MinIntensity = 0.0;
  c9_statsAlreadyComputed.MaxIntensity = false;
  c9_statsOneObj.MaxIntensity = 0.0;
  c9_statsAlreadyComputed.SubarrayIdx = false;
  c9_statsOneObj.SubarrayIdx.size[0] = 1;
  c9_statsOneObj.SubarrayIdx.size[1] = 0;
  for (c9_i11 = 0; c9_i11 < 2; c9_i11++) {
    c9_statsOneObj.SubarrayIdxLengths[c9_i11] = 0.0;
  }

  c9_b_st.site = &c9_rd_emlrtRSI;
  c9_d_varargin_1 = c9_d_numObjs;
  c9_c_st.site = &c9_qd_emlrtRSI;
  c9_assertValidSizeArg(chartInstance, &c9_c_st, c9_d_varargin_1);
  c9_i12 = c9_tile->size[0];
  c9_tile->size[0] = (int32_T)c9_d_varargin_1;
  c9_emxEnsureCapacity_boolean_T1(chartInstance, &c9_b_st, c9_tile, c9_i12,
    &c9_mc_emlrtRTEI);
  c9_c_loop_ub = (int32_T)c9_d_varargin_1 - 1;
  for (c9_i13 = 0; c9_i13 <= c9_c_loop_ub; c9_i13++) {
    c9_tile->data[c9_i13] = false;
  }

  c9_b_outsize[0] = c9_tile->size[0];
  if (!((real_T)c9_b_outsize[0] == (real_T)c9_tile->size[0])) {
    c9_e_y = NULL;
    sf_mex_assign(&c9_e_y, sf_mex_create("y", c9_cv2, 10, 0U, 1U, 0U, 2, 1, 15),
                  false);
    sf_mex_call(&c9_b_st, &c9_h_emlrtMCI, "error", 0U, 1U, 14, c9_e_y);
  }

  c9_emxFree_boolean_T(chartInstance, &c9_tile);
  c9_emxInit_s_R6Og1x0kmqQXSF9Pwa49F(chartInstance, &c9_b_st, &c9_stats, 1,
    &c9_vc_emlrtRTEI);
  c9_i14 = c9_stats->size[0];
  c9_stats->size[0] = c9_b_outsize[0];
  c9_emxEnsureCapacity_s_R6Og1x0kmqQ(chartInstance, &c9_b_st, c9_stats, c9_i14,
    &c9_oc_emlrtRTEI);
  c9_d_loop_ub = c9_b_outsize[0] - 1;
  for (c9_i15 = 0; c9_i15 <= c9_d_loop_ub; c9_i15++) {
    c9_emxCopyStruct_s_R6Og1x0kmqQXSF9(chartInstance, &c9_b_st, &c9_stats->
      data[c9_i15], &c9_statsOneObj, &c9_oc_emlrtRTEI);
  }

  c9_emxFreeStruct_s_R6Og1x0kmqQXSF9(chartInstance, &c9_statsOneObj);
  c9_st.site = &c9_gc_emlrtRSI;
  c9_e_numObjs = c9_numObjs;
  c9_statsAlreadyComputed.PixelIdxList = true;
  if (c9_e_numObjs != 0.0) {
    c9_emxInit_real_T1(chartInstance, &c9_st, &c9_regionIndices, 1,
                       &c9_yc_emlrtRTEI);
    c9_i16 = c9_regionIndices->size[0];
    c9_regionIndices->size[0] = c9_CC.RegionIndices->size[0];
    c9_emxEnsureCapacity_real_T1(chartInstance, &c9_st, c9_regionIndices, c9_i16,
      &c9_pc_emlrtRTEI);
    c9_e_loop_ub = c9_CC.RegionIndices->size[0] - 1;
    for (c9_i18 = 0; c9_i18 <= c9_e_loop_ub; c9_i18++) {
      c9_regionIndices->data[c9_i18] = c9_CC.RegionIndices->data[c9_i18];
    }

    c9_emxInit_int32_T(chartInstance, &c9_st, &c9_regionLengths, 1,
                       &c9_xc_emlrtRTEI);
    c9_i20 = c9_regionLengths->size[0];
    c9_regionLengths->size[0] = c9_CC.RegionLengths->size[0];
    c9_emxEnsureCapacity_int32_T(chartInstance, &c9_st, c9_regionLengths, c9_i20,
      &c9_qc_emlrtRTEI);
    c9_f_loop_ub = c9_CC.RegionLengths->size[0] - 1;
    for (c9_i22 = 0; c9_i22 <= c9_f_loop_ub; c9_i22++) {
      c9_regionLengths->data[c9_i22] = c9_CC.RegionLengths->data[c9_i22];
    }

    c9_b_st.site = &c9_sd_emlrtRSI;
    c9_c_st.site = &c9_id_emlrtRSI;
    c9_dim = 2;
    if ((real_T)c9_regionLengths->size[0] != 1.0) {
      c9_dim = 1;
    }

    c9_emxInit_int32_T(chartInstance, &c9_c_st, &c9_b_regionLengths, 1,
                       &c9_rc_emlrtRTEI);
    c9_i26 = c9_b_regionLengths->size[0];
    c9_b_regionLengths->size[0] = c9_regionLengths->size[0];
    c9_emxEnsureCapacity_int32_T(chartInstance, &c9_c_st, c9_b_regionLengths,
      c9_i26, &c9_rc_emlrtRTEI);
    c9_g_loop_ub = c9_regionLengths->size[0] - 1;
    for (c9_i29 = 0; c9_i29 <= c9_g_loop_ub; c9_i29++) {
      c9_b_regionLengths->data[c9_i29] = c9_regionLengths->data[c9_i29];
    }

    c9_d_st.site = &c9_jd_emlrtRSI;
    c9_useConstantDim(chartInstance, &c9_d_st, c9_b_regionLengths, c9_dim,
                      c9_regionLengths);
    c9_emxFree_int32_T(chartInstance, &c9_b_regionLengths);
    c9_emxInit_int32_T(chartInstance, &c9_st, &c9_idxCount, 1, &c9_ad_emlrtRTEI);
    c9_i33 = c9_idxCount->size[0];
    c9_idxCount->size[0] = 1 + c9_regionLengths->size[0];
    c9_emxEnsureCapacity_int32_T(chartInstance, &c9_st, c9_idxCount, c9_i33,
      &c9_sc_emlrtRTEI);
    c9_idxCount->data[0] = 0;
    c9_h_loop_ub = c9_regionLengths->size[0] - 1;
    for (c9_i35 = 0; c9_i35 <= c9_h_loop_ub; c9_i35++) {
      c9_idxCount->data[c9_i35 + 1] = c9_regionLengths->data[c9_i35];
    }

    c9_emxFree_int32_T(chartInstance, &c9_regionLengths);
    c9_d1 = (real_T)c9_stats->size[0];
    c9_i36 = (int32_T)c9_d1 - 1;
    for (c9_e_k = 0; c9_e_k <= c9_i36; c9_e_k++) {
      c9_f_k = (real_T)c9_e_k + 1.0;
      c9_i37 = c9_idxCount->size[0];
      c9_i38 = (int32_T)c9_f_k;
      if ((c9_i38 < 1) || (c9_i38 > c9_i37)) {
        emlrtDynamicBoundsCheckR2012b(c9_i38, 1, c9_i37, &c9_rc_emlrtBCI, &c9_st);
      }

      c9_i39 = c9_idxCount->data[c9_i38 - 1] + 1;
      c9_i40 = c9_idxCount->size[0];
      c9_i41 = (int32_T)(c9_f_k + 1.0);
      if ((c9_i41 < 1) || (c9_i41 > c9_i40)) {
        emlrtDynamicBoundsCheckR2012b(c9_i41, 1, c9_i40, &c9_sc_emlrtBCI, &c9_st);
      }

      c9_i42 = c9_idxCount->data[c9_i41 - 1];
      c9_b = (c9_i39 > c9_i42);
      if (c9_b) {
        c9_i44 = 0;
        c9_i45 = -1;
      } else {
        c9_i43 = c9_regionIndices->size[0];
        if ((c9_i39 < 1) || (c9_i39 > c9_i43)) {
          emlrtDynamicBoundsCheckR2012b(c9_i39, 1, c9_i43, &c9_mc_emlrtBCI,
            &c9_st);
        }

        c9_i44 = c9_i39 - 1;
        c9_i47 = c9_regionIndices->size[0];
        if ((c9_i42 < 1) || (c9_i42 > c9_i47)) {
          emlrtDynamicBoundsCheckR2012b(c9_i42, 1, c9_i47, &c9_lc_emlrtBCI,
            &c9_st);
        }

        c9_i45 = c9_i42 - 1;
      }

      c9_i46 = c9_stats->size[0];
      c9_i48 = (int32_T)c9_f_k;
      if ((c9_i48 < 1) || (c9_i48 > c9_i46)) {
        emlrtDynamicBoundsCheckR2012b(c9_i48, 1, c9_i46, &c9_tc_emlrtBCI, &c9_st);
      }

      c9_i49 = c9_i48 - 1;
      c9_i50 = c9_stats->data[c9_i49].PixelIdxList->size[0];
      c9_stats->data[c9_i49].PixelIdxList->size[0] = (c9_i45 - c9_i44) + 1;
      c9_emxEnsureCapacity_real_T1(chartInstance, &c9_st, c9_stats->data[c9_i49]
        .PixelIdxList, c9_i50, &c9_tc_emlrtRTEI);
      c9_i_loop_ub = c9_i45 - c9_i44;
      for (c9_i51 = 0; c9_i51 <= c9_i_loop_ub; c9_i51++) {
        c9_i52 = c9_stats->size[0];
        c9_i53 = (int32_T)c9_f_k;
        if ((c9_i53 < 1) || (c9_i53 > c9_i52)) {
          emlrtDynamicBoundsCheckR2012b(c9_i53, 1, c9_i52, &c9_tc_emlrtBCI,
            &c9_st);
        }

        c9_stats->data[c9_i53 - 1].PixelIdxList->data[c9_i51] =
          c9_regionIndices->data[c9_i44 + c9_i51];
      }
    }

    c9_emxFree_int32_T(chartInstance, &c9_idxCount);
    c9_emxFree_real_T(chartInstance, &c9_regionIndices);
  }

  c9_emxFreeStruct_s_vX9LV7M75v5ZNol(chartInstance, &c9_CC);
  c9_st.site = &c9_hc_emlrtRSI;
  for (c9_i17 = 0; c9_i17 < 19200; c9_i17++) {
    chartInstance->c9_varargin_2[c9_i17] = c9_b_varargin_2[c9_i17];
  }

  c9_b_ComputeWeightedCentroid(chartInstance, &c9_st,
    chartInstance->c9_varargin_2, c9_stats, &c9_statsAlreadyComputed);
  c9_st.site = &c9_ic_emlrtRSI;
  c9_d = (real_T)c9_stats->size[0];
  c9_i19 = (int32_T)c9_d - 1;
  for (c9_c_k = 0; c9_c_k <= c9_i19; c9_c_k++) {
    c9_d_k = (real_T)c9_c_k + 1.0;
    c9_i21 = c9_stats->size[0];
    c9_i23 = (int32_T)c9_d_k;
    if ((c9_i23 < 1) || (c9_i23 > c9_i21)) {
      emlrtDynamicBoundsCheckR2012b(c9_i23, 1, c9_i21, &c9_nc_emlrtBCI, &c9_st);
    }

    c9_i24 = c9_outstats->size[0];
    c9_i25 = (int32_T)c9_d_k;
    if ((c9_i25 < 1) || (c9_i25 > c9_i24)) {
      emlrtDynamicBoundsCheckR2012b(c9_i25, 1, c9_i24, &c9_oc_emlrtBCI, &c9_st);
    }

    for (c9_vIdx = 0; c9_vIdx < 2; c9_vIdx++) {
      c9_b_vIdx = (real_T)c9_vIdx + 1.0;
      c9_i27 = c9_stats->size[0];
      c9_i28 = (int32_T)c9_d_k;
      if ((c9_i28 < 1) || (c9_i28 > c9_i27)) {
        emlrtDynamicBoundsCheckR2012b(c9_i28, 1, c9_i27, &c9_qc_emlrtBCI, &c9_st);
      }

      c9_i30 = c9_i28 - 1;
      c9_i31 = c9_outstats->size[0];
      c9_i32 = (int32_T)c9_d_k;
      if ((c9_i32 < 1) || (c9_i32 > c9_i31)) {
        emlrtDynamicBoundsCheckR2012b(c9_i32, 1, c9_i31, &c9_pc_emlrtBCI, &c9_st);
      }

      c9_i34 = c9_i32 - 1;
      c9_outstats->data[c9_i34].WeightedCentroid[(int32_T)c9_b_vIdx - 1] =
        c9_stats->data[c9_i30].WeightedCentroid[(int32_T)c9_b_vIdx - 1];
    }
  }

  c9_emxFree_s_R6Og1x0kmqQXSF9Pwa49F(chartInstance, &c9_stats);
}

static void c9_bwconncomp(SFc9_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c9_sp, boolean_T c9_varargin_1[19200],
  c9_s_vX9LV7M75v5ZNol5H5URkE *c9_CC)
{
  c9_emxArray_int32_T *c9_b_x;
  c9_emxArray_int32_T *c9_endRow;
  c9_emxArray_int32_T *c9_idxCount;
  c9_emxArray_int32_T *c9_labelsRenumbered;
  c9_emxArray_int32_T *c9_regionLengths;
  c9_emxArray_int32_T *c9_startCol;
  c9_emxArray_int32_T *c9_startRow;
  c9_emxArray_int32_T *c9_x;
  c9_emxArray_real_T *c9_pixelIdxList;
  emlrtStack c9_b_st;
  emlrtStack c9_c_st;
  emlrtStack c9_d_st;
  emlrtStack c9_e_st;
  emlrtStack c9_f_st;
  emlrtStack c9_g_st;
  emlrtStack c9_st;
  real_T c9_b_col;
  real_T c9_b_k;
  real_T c9_b_s;
  real_T c9_b_y;
  real_T c9_d;
  real_T c9_d1;
  real_T c9_d_col;
  real_T c9_numComponents;
  int32_T c9_b_iv[1];
  int32_T c9_b;
  int32_T c9_b_b;
  int32_T c9_b_c;
  int32_T c9_b_loop_ub;
  int32_T c9_b_node;
  int32_T c9_b_p;
  int32_T c9_b_root_k;
  int32_T c9_b_root_p;
  int32_T c9_b_vlen;
  int32_T c9_c;
  int32_T c9_c_b;
  int32_T c9_c_col;
  int32_T c9_c_k;
  int32_T c9_c_loop_ub;
  int32_T c9_c_p;
  int32_T c9_c_vlen;
  int32_T c9_col;
  int32_T c9_column_offset;
  int32_T c9_currentColumn;
  int32_T c9_d_a;
  int32_T c9_d_b;
  int32_T c9_d_k;
  int32_T c9_d_loop_ub;
  int32_T c9_d_vlen;
  int32_T c9_dim;
  int32_T c9_e_a;
  int32_T c9_e_b;
  int32_T c9_e_k;
  int32_T c9_e_loop_ub;
  int32_T c9_exitg1;
  int32_T c9_f_a;
  int32_T c9_f_b;
  int32_T c9_f_k;
  int32_T c9_f_loop_ub;
  int32_T c9_firstRunOnPreviousColumn;
  int32_T c9_firstRunOnThisColumn;
  int32_T c9_g_a;
  int32_T c9_g_b;
  int32_T c9_g_k;
  int32_T c9_g_loop_ub;
  int32_T c9_h_a;
  int32_T c9_h_b;
  int32_T c9_h_k;
  int32_T c9_i;
  int32_T c9_i1;
  int32_T c9_i10;
  int32_T c9_i11;
  int32_T c9_i12;
  int32_T c9_i13;
  int32_T c9_i14;
  int32_T c9_i15;
  int32_T c9_i16;
  int32_T c9_i17;
  int32_T c9_i18;
  int32_T c9_i19;
  int32_T c9_i2;
  int32_T c9_i20;
  int32_T c9_i21;
  int32_T c9_i22;
  int32_T c9_i23;
  int32_T c9_i24;
  int32_T c9_i25;
  int32_T c9_i26;
  int32_T c9_i27;
  int32_T c9_i28;
  int32_T c9_i29;
  int32_T c9_i3;
  int32_T c9_i30;
  int32_T c9_i31;
  int32_T c9_i32;
  int32_T c9_i33;
  int32_T c9_i34;
  int32_T c9_i35;
  int32_T c9_i36;
  int32_T c9_i37;
  int32_T c9_i38;
  int32_T c9_i39;
  int32_T c9_i4;
  int32_T c9_i40;
  int32_T c9_i41;
  int32_T c9_i42;
  int32_T c9_i43;
  int32_T c9_i44;
  int32_T c9_i45;
  int32_T c9_i46;
  int32_T c9_i47;
  int32_T c9_i48;
  int32_T c9_i49;
  int32_T c9_i5;
  int32_T c9_i50;
  int32_T c9_i51;
  int32_T c9_i52;
  int32_T c9_i53;
  int32_T c9_i54;
  int32_T c9_i55;
  int32_T c9_i56;
  int32_T c9_i57;
  int32_T c9_i58;
  int32_T c9_i59;
  int32_T c9_i6;
  int32_T c9_i60;
  int32_T c9_i61;
  int32_T c9_i62;
  int32_T c9_i63;
  int32_T c9_i64;
  int32_T c9_i65;
  int32_T c9_i66;
  int32_T c9_i67;
  int32_T c9_i68;
  int32_T c9_i69;
  int32_T c9_i7;
  int32_T c9_i70;
  int32_T c9_i71;
  int32_T c9_i72;
  int32_T c9_i73;
  int32_T c9_i74;
  int32_T c9_i75;
  int32_T c9_i76;
  int32_T c9_i77;
  int32_T c9_i8;
  int32_T c9_i9;
  int32_T c9_i_a;
  int32_T c9_i_k;
  int32_T c9_ib;
  int32_T c9_idx;
  int32_T c9_inb;
  int32_T c9_k;
  int32_T c9_lastRunOnPreviousColumn;
  int32_T c9_lidx;
  int32_T c9_loop_ub;
  int32_T c9_nextLabel;
  int32_T c9_nfb;
  int32_T c9_nleft;
  int32_T c9_node;
  int32_T c9_numRuns;
  int32_T c9_p;
  int32_T c9_root_k;
  int32_T c9_root_p;
  int32_T c9_row;
  int32_T c9_rowidx;
  int32_T c9_runCounter;
  int32_T c9_vlen;
  boolean_T c9_b_overflow;
  boolean_T c9_c_overflow;
  boolean_T c9_d_overflow;
  boolean_T c9_overflow;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_st.site = &c9_pc_emlrtRSI;
  c9_b_st.prev = &c9_st;
  c9_b_st.tls = c9_st.tls;
  c9_c_st.prev = &c9_b_st;
  c9_c_st.tls = c9_b_st.tls;
  c9_d_st.prev = &c9_c_st;
  c9_d_st.tls = c9_c_st.tls;
  c9_e_st.prev = &c9_d_st;
  c9_e_st.tls = c9_d_st.tls;
  c9_f_st.prev = &c9_e_st;
  c9_f_st.tls = c9_e_st.tls;
  c9_g_st.prev = &c9_f_st;
  c9_g_st.tls = c9_f_st.tls;
  c9_numRuns = 0;
  for (c9_col = 0; c9_col < 160; c9_col++) {
    c9_b_col = (real_T)c9_col + 1.0;
    if (c9_varargin_1[120 * ((int32_T)c9_b_col - 1)]) {
      c9_numRuns++;
    }

    for (c9_k = 0; c9_k < 119; c9_k++) {
      c9_b_k = (real_T)c9_k + 2.0;
      if (c9_varargin_1[((int32_T)c9_b_k + 120 * ((int32_T)c9_b_col - 1)) - 1] &&
          (!c9_varargin_1[((int32_T)(c9_b_k - 1.0) + 120 * ((int32_T)c9_b_col -
             1)) - 1])) {
        c9_numRuns++;
      }
    }
  }

  c9_emxInit_int32_T(chartInstance, &c9_st, &c9_regionLengths, 1,
                     &c9_od_emlrtRTEI);
  c9_emxInit_int32_T(chartInstance, &c9_st, &c9_startRow, 1, &c9_qd_emlrtRTEI);
  c9_emxInit_int32_T(chartInstance, &c9_st, &c9_endRow, 1, &c9_rd_emlrtRTEI);
  c9_emxInit_int32_T(chartInstance, &c9_st, &c9_startCol, 1, &c9_sd_emlrtRTEI);
  if (c9_numRuns == 0) {
    c9_startRow->size[0] = 0;
    c9_endRow->size[0] = 0;
    c9_startCol->size[0] = 0;
    c9_regionLengths->size[0] = 0;
    c9_numRuns = 0;
  } else {
    c9_i = c9_startRow->size[0];
    c9_d = (real_T)c9_numRuns;
    if (!(c9_d >= 0.0)) {
      emlrtNonNegativeCheckR2012b(c9_d, &c9_emlrtDCI, &c9_st);
    }

    c9_startRow->size[0] = (int32_T)muDoubleScalarFloor(c9_d);
    c9_emxEnsureCapacity_int32_T(chartInstance, &c9_st, c9_startRow, c9_i,
      &c9_bd_emlrtRTEI);
    c9_i1 = c9_endRow->size[0];
    c9_endRow->size[0] = c9_numRuns;
    c9_emxEnsureCapacity_int32_T(chartInstance, &c9_st, c9_endRow, c9_i1,
      &c9_cd_emlrtRTEI);
    c9_i4 = c9_startCol->size[0];
    c9_startCol->size[0] = c9_numRuns;
    c9_emxEnsureCapacity_int32_T(chartInstance, &c9_st, c9_startCol, c9_i4,
      &c9_dd_emlrtRTEI);
    c9_b_st.site = &c9_qc_emlrtRSI;
    c9_runCounter = 1;
    for (c9_c_col = 0; c9_c_col < 160; c9_c_col++) {
      c9_d_col = (real_T)c9_c_col + 1.0;
      c9_row = 1;
      while (c9_row <= 120) {
        while ((c9_row <= 120) && (!c9_varargin_1[(c9_row + 120 * ((int32_T)
                  c9_d_col - 1)) - 1])) {
          c9_row++;
        }

        if ((c9_row <= 120) && c9_varargin_1[(c9_row + 120 * ((int32_T)c9_d_col
              - 1)) - 1]) {
          c9_i8 = c9_startCol->size[0];
          if ((c9_runCounter < 1) || (c9_runCounter > c9_i8)) {
            emlrtDynamicBoundsCheckR2012b(c9_runCounter, 1, c9_i8,
              &c9_uc_emlrtBCI, &c9_b_st);
          }

          c9_startCol->data[c9_runCounter - 1] = (int32_T)c9_d_col;
          c9_i11 = c9_startRow->size[0];
          if ((c9_runCounter < 1) || (c9_runCounter > c9_i11)) {
            emlrtDynamicBoundsCheckR2012b(c9_runCounter, 1, c9_i11,
              &c9_wc_emlrtBCI, &c9_b_st);
          }

          c9_startRow->data[c9_runCounter - 1] = c9_row;
          while ((c9_row <= 120) && c9_varargin_1[(c9_row + 120 * ((int32_T)
                   c9_d_col - 1)) - 1]) {
            c9_row++;
          }

          c9_i17 = c9_endRow->size[0];
          if ((c9_runCounter < 1) || (c9_runCounter > c9_i17)) {
            emlrtDynamicBoundsCheckR2012b(c9_runCounter, 1, c9_i17,
              &c9_bd_emlrtBCI, &c9_b_st);
          }

          c9_endRow->data[c9_runCounter - 1] = c9_row - 1;
          c9_runCounter++;
        }
      }
    }

    c9_i6 = c9_regionLengths->size[0];
    c9_regionLengths->size[0] = c9_numRuns;
    c9_emxEnsureCapacity_int32_T(chartInstance, &c9_st, c9_regionLengths, c9_i6,
      &c9_ed_emlrtRTEI);
    c9_loop_ub = c9_numRuns - 1;
    for (c9_i7 = 0; c9_i7 <= c9_loop_ub; c9_i7++) {
      c9_regionLengths->data[c9_i7] = 0;
    }

    c9_d_k = 1;
    c9_currentColumn = 2;
    c9_nextLabel = 1;
    c9_firstRunOnPreviousColumn = -1;
    c9_lastRunOnPreviousColumn = 0;
    c9_firstRunOnThisColumn = 1;
    while (c9_d_k <= c9_numRuns) {
      c9_i14 = c9_startCol->size[0];
      if ((c9_d_k < 1) || (c9_d_k > c9_i14)) {
        emlrtDynamicBoundsCheckR2012b(c9_d_k, 1, c9_i14, &c9_vc_emlrtBCI, &c9_st);
      }

      if (c9_startCol->data[c9_d_k - 1] == c9_currentColumn) {
        c9_firstRunOnPreviousColumn = c9_firstRunOnThisColumn;
        c9_firstRunOnThisColumn = c9_d_k;
        c9_lastRunOnPreviousColumn = c9_d_k;
        c9_i21 = c9_startCol->size[0];
        if ((c9_d_k < 1) || (c9_d_k > c9_i21)) {
          emlrtDynamicBoundsCheckR2012b(c9_d_k, 1, c9_i21, &c9_ad_emlrtBCI,
            &c9_st);
        }

        c9_currentColumn = c9_startCol->data[c9_d_k - 1] + 1;
      } else {
        c9_i19 = c9_startCol->size[0];
        if ((c9_d_k < 1) || (c9_d_k > c9_i19)) {
          emlrtDynamicBoundsCheckR2012b(c9_d_k, 1, c9_i19, &c9_xc_emlrtBCI,
            &c9_st);
        }

        if (c9_startCol->data[c9_d_k - 1] > c9_currentColumn) {
          c9_firstRunOnPreviousColumn = -1;
          c9_lastRunOnPreviousColumn = 0;
          c9_firstRunOnThisColumn = c9_d_k;
          c9_i22 = c9_startCol->size[0];
          if ((c9_d_k < 1) || (c9_d_k > c9_i22)) {
            emlrtDynamicBoundsCheckR2012b(c9_d_k, 1, c9_i22, &c9_cd_emlrtBCI,
              &c9_st);
          }

          c9_currentColumn = c9_startCol->data[c9_d_k - 1] + 1;
        }
      }

      if (c9_firstRunOnPreviousColumn >= 0) {
        for (c9_p = c9_firstRunOnPreviousColumn; c9_p <
             c9_lastRunOnPreviousColumn; c9_p++) {
          c9_i24 = c9_endRow->size[0];
          if ((c9_d_k < 1) || (c9_d_k > c9_i24)) {
            emlrtDynamicBoundsCheckR2012b(c9_d_k, 1, c9_i24, &c9_jd_emlrtBCI,
              &c9_st);
          }

          c9_i27 = c9_startRow->size[0];
          if ((c9_p < 1) || (c9_p > c9_i27)) {
            emlrtDynamicBoundsCheckR2012b(c9_p, 1, c9_i27, &c9_kd_emlrtBCI,
              &c9_st);
          }

          if (c9_endRow->data[c9_d_k - 1] >= c9_startRow->data[c9_p - 1] - 1) {
            c9_i29 = c9_startRow->size[0];
            if ((c9_d_k < 1) || (c9_d_k > c9_i29)) {
              emlrtDynamicBoundsCheckR2012b(c9_d_k, 1, c9_i29, &c9_ld_emlrtBCI,
                &c9_st);
            }

            c9_i31 = c9_endRow->size[0];
            if ((c9_p < 1) || (c9_p > c9_i31)) {
              emlrtDynamicBoundsCheckR2012b(c9_p, 1, c9_i31, &c9_md_emlrtBCI,
                &c9_st);
            }

            if (c9_startRow->data[c9_d_k - 1] <= c9_endRow->data[c9_p - 1] + 1)
            {
              c9_i33 = c9_regionLengths->size[0];
              if ((c9_d_k < 1) || (c9_d_k > c9_i33)) {
                emlrtDynamicBoundsCheckR2012b(c9_d_k, 1, c9_i33, &c9_nd_emlrtBCI,
                  &c9_st);
              }

              if (c9_regionLengths->data[c9_d_k - 1] == 0) {
                c9_i37 = c9_regionLengths->size[0];
                if ((c9_p < 1) || (c9_p > c9_i37)) {
                  emlrtDynamicBoundsCheckR2012b(c9_p, 1, c9_i37, &c9_qd_emlrtBCI,
                    &c9_st);
                }

                c9_i39 = c9_regionLengths->size[0];
                if ((c9_d_k < 1) || (c9_d_k > c9_i39)) {
                  emlrtDynamicBoundsCheckR2012b(c9_d_k, 1, c9_i39,
                    &c9_rd_emlrtBCI, &c9_st);
                }

                c9_regionLengths->data[c9_d_k - 1] = c9_regionLengths->data[c9_p
                  - 1];
                c9_nextLabel++;
              } else {
                c9_i36 = c9_regionLengths->size[0];
                if ((c9_d_k < 1) || (c9_d_k > c9_i36)) {
                  emlrtDynamicBoundsCheckR2012b(c9_d_k, 1, c9_i36,
                    &c9_od_emlrtBCI, &c9_st);
                }

                c9_i38 = c9_regionLengths->size[0];
                if ((c9_p < 1) || (c9_p > c9_i38)) {
                  emlrtDynamicBoundsCheckR2012b(c9_p, 1, c9_i38, &c9_pd_emlrtBCI,
                    &c9_st);
                }

                if (c9_regionLengths->data[c9_d_k - 1] != c9_regionLengths->
                    data[c9_p - 1]) {
                  c9_b_st.site = &c9_rc_emlrtRSI;
                  c9_g_k = c9_d_k;
                  c9_b_p = c9_p;
                  c9_c_st.site = &c9_sc_emlrtRSI;
                  c9_node = c9_g_k;
                  c9_root_k = c9_node;
                  do {
                    c9_exitg1 = 0;
                    c9_i42 = c9_regionLengths->size[0];
                    if ((c9_root_k < 1) || (c9_root_k > c9_i42)) {
                      emlrtDynamicBoundsCheckR2012b(c9_root_k, 1, c9_i42,
                        &c9_xd_emlrtBCI, &c9_c_st);
                    }

                    if (c9_root_k != c9_regionLengths->data[c9_root_k - 1]) {
                      c9_i44 = c9_regionLengths->size[0];
                      c9_i45 = c9_regionLengths->size[0];
                      if ((c9_root_k < 1) || (c9_root_k > c9_i45)) {
                        emlrtDynamicBoundsCheckR2012b(c9_root_k, 1, c9_i45,
                          &c9_ae_emlrtBCI, &c9_c_st);
                      }

                      c9_i47 = c9_regionLengths->data[c9_root_k - 1];
                      if ((c9_i47 < 1) || (c9_i47 > c9_i44)) {
                        emlrtDynamicBoundsCheckR2012b(c9_i47, 1, c9_i44,
                          &c9_yd_emlrtBCI, &c9_c_st);
                      }

                      c9_i48 = c9_regionLengths->size[0];
                      if ((c9_root_k < 1) || (c9_root_k > c9_i48)) {
                        emlrtDynamicBoundsCheckR2012b(c9_root_k, 1, c9_i48,
                          &c9_be_emlrtBCI, &c9_c_st);
                      }

                      c9_regionLengths->data[c9_root_k - 1] =
                        c9_regionLengths->data[c9_i47 - 1];
                      c9_i51 = c9_regionLengths->size[0];
                      if ((c9_root_k < 1) || (c9_root_k > c9_i51)) {
                        emlrtDynamicBoundsCheckR2012b(c9_root_k, 1, c9_i51,
                          &c9_ce_emlrtBCI, &c9_c_st);
                      }

                      c9_root_k = c9_regionLengths->data[c9_root_k - 1];
                    } else {
                      c9_exitg1 = 1;
                    }
                  } while (c9_exitg1 == 0);

                  c9_c_st.site = &c9_tc_emlrtRSI;
                  c9_b_node = c9_b_p;
                  c9_root_p = c9_b_node;
                  do {
                    c9_exitg1 = 0;
                    c9_i50 = c9_regionLengths->size[0];
                    if ((c9_root_p < 1) || (c9_root_p > c9_i50)) {
                      emlrtDynamicBoundsCheckR2012b(c9_root_p, 1, c9_i50,
                        &c9_xd_emlrtBCI, &c9_c_st);
                    }

                    if (c9_root_p != c9_regionLengths->data[c9_root_p - 1]) {
                      c9_i52 = c9_regionLengths->size[0];
                      c9_i53 = c9_regionLengths->size[0];
                      if ((c9_root_p < 1) || (c9_root_p > c9_i53)) {
                        emlrtDynamicBoundsCheckR2012b(c9_root_p, 1, c9_i53,
                          &c9_ae_emlrtBCI, &c9_c_st);
                      }

                      c9_i55 = c9_regionLengths->data[c9_root_p - 1];
                      if ((c9_i55 < 1) || (c9_i55 > c9_i52)) {
                        emlrtDynamicBoundsCheckR2012b(c9_i55, 1, c9_i52,
                          &c9_yd_emlrtBCI, &c9_c_st);
                      }

                      c9_i56 = c9_regionLengths->size[0];
                      if ((c9_root_p < 1) || (c9_root_p > c9_i56)) {
                        emlrtDynamicBoundsCheckR2012b(c9_root_p, 1, c9_i56,
                          &c9_be_emlrtBCI, &c9_c_st);
                      }

                      c9_regionLengths->data[c9_root_p - 1] =
                        c9_regionLengths->data[c9_i55 - 1];
                      c9_i59 = c9_regionLengths->size[0];
                      if ((c9_root_p < 1) || (c9_root_p > c9_i59)) {
                        emlrtDynamicBoundsCheckR2012b(c9_root_p, 1, c9_i59,
                          &c9_ce_emlrtBCI, &c9_c_st);
                      }

                      c9_root_p = c9_regionLengths->data[c9_root_p - 1];
                    } else {
                      c9_exitg1 = 1;
                    }
                  } while (c9_exitg1 == 0);

                  if (c9_root_k != c9_root_p) {
                    c9_c_st.site = &c9_uc_emlrtRSI;
                    c9_b_root_k = c9_root_k;
                    c9_b_root_p = c9_root_p;
                    c9_h_k = c9_g_k;
                    c9_c_p = c9_b_p;
                    if (c9_b_root_p < c9_b_root_k) {
                      c9_i58 = c9_regionLengths->size[0];
                      if ((c9_b_root_k < 1) || (c9_b_root_k > c9_i58)) {
                        emlrtDynamicBoundsCheckR2012b(c9_b_root_k, 1, c9_i58,
                          &c9_ee_emlrtBCI, &c9_c_st);
                      }

                      c9_regionLengths->data[c9_b_root_k - 1] = c9_b_root_p;
                      c9_i61 = c9_regionLengths->size[0];
                      if ((c9_h_k < 1) || (c9_h_k > c9_i61)) {
                        emlrtDynamicBoundsCheckR2012b(c9_h_k, 1, c9_i61,
                          &c9_ge_emlrtBCI, &c9_c_st);
                      }

                      c9_regionLengths->data[c9_h_k - 1] = c9_b_root_p;
                    } else {
                      c9_i57 = c9_regionLengths->size[0];
                      if ((c9_b_root_p < 1) || (c9_b_root_p > c9_i57)) {
                        emlrtDynamicBoundsCheckR2012b(c9_b_root_p, 1, c9_i57,
                          &c9_de_emlrtBCI, &c9_c_st);
                      }

                      c9_regionLengths->data[c9_b_root_p - 1] = c9_b_root_k;
                      c9_i60 = c9_regionLengths->size[0];
                      if ((c9_c_p < 1) || (c9_c_p > c9_i60)) {
                        emlrtDynamicBoundsCheckR2012b(c9_c_p, 1, c9_i60,
                          &c9_fe_emlrtBCI, &c9_c_st);
                      }

                      c9_regionLengths->data[c9_c_p - 1] = c9_b_root_k;
                    }
                  }
                }
              }
            }
          }
        }
      }

      c9_i23 = c9_regionLengths->size[0];
      if ((c9_d_k < 1) || (c9_d_k > c9_i23)) {
        emlrtDynamicBoundsCheckR2012b(c9_d_k, 1, c9_i23, &c9_hd_emlrtBCI, &c9_st);
      }

      if (c9_regionLengths->data[c9_d_k - 1] == 0) {
        c9_i26 = c9_regionLengths->size[0];
        if ((c9_d_k < 1) || (c9_d_k > c9_i26)) {
          emlrtDynamicBoundsCheckR2012b(c9_d_k, 1, c9_i26, &c9_id_emlrtBCI,
            &c9_st);
        }

        c9_regionLengths->data[c9_d_k - 1] = c9_nextLabel;
        c9_nextLabel++;
      }

      c9_d_k++;
    }
  }

  if (c9_numRuns == 0) {
    c9_CC->Connectivity = 8.0;
    for (c9_i3 = 0; c9_i3 < 2; c9_i3++) {
      c9_CC->ImageSize[c9_i3] = 120.0 + 40.0 * (real_T)c9_i3;
    }

    c9_CC->NumObjects = 0.0;
    c9_CC->RegionIndices->size[0] = 0;
    c9_i5 = c9_CC->RegionLengths->size[0];
    c9_CC->RegionLengths->size[0] = 1;
    c9_emxEnsureCapacity_int32_T(chartInstance, c9_sp, c9_CC->RegionLengths,
      c9_i5, &c9_gd_emlrtRTEI);
    c9_CC->RegionLengths->data[0] = 0;
  } else {
    c9_emxInit_int32_T(chartInstance, c9_sp, &c9_labelsRenumbered, 1,
                       &c9_pd_emlrtRTEI);
    c9_i2 = c9_labelsRenumbered->size[0];
    c9_labelsRenumbered->size[0] = c9_regionLengths->size[0];
    c9_st.site = &c9_ng_emlrtRSI;
    c9_emxEnsureCapacity_int32_T(chartInstance, &c9_st, c9_labelsRenumbered,
      c9_i2, &c9_fd_emlrtRTEI);
    c9_numComponents = 0.0;
    c9_st.site = &c9_oc_emlrtRSI;
    c9_b = c9_numRuns;
    c9_b_b = c9_b;
    if (c9_b_b < 1) {
      c9_overflow = false;
    } else {
      c9_overflow = (c9_b_b > 2147483646);
    }

    if (c9_overflow) {
      c9_b_st.site = &c9_ib_emlrtRSI;
      c9_check_forloop_overflow_error(chartInstance, &c9_b_st);
    }

    for (c9_c_k = 0; c9_c_k < c9_numRuns; c9_c_k++) {
      c9_e_k = c9_c_k + 1;
      c9_i10 = c9_regionLengths->size[0];
      if ((c9_e_k < 1) || (c9_e_k > c9_i10)) {
        emlrtDynamicBoundsCheckR2012b(c9_e_k, 1, c9_i10, &c9_yc_emlrtBCI,
          (emlrtConstCTX)c9_sp);
      }

      if (c9_regionLengths->data[c9_e_k - 1] == c9_e_k) {
        c9_numComponents++;
        c9_i13 = c9_labelsRenumbered->size[0];
        if ((c9_e_k < 1) || (c9_e_k > c9_i13)) {
          emlrtDynamicBoundsCheckR2012b(c9_e_k, 1, c9_i13, &c9_gd_emlrtBCI,
            (emlrtConstCTX)c9_sp);
        }

        c9_labelsRenumbered->data[c9_e_k - 1] = (int32_T)c9_numComponents;
      }

      c9_i12 = c9_labelsRenumbered->size[0];
      c9_i15 = c9_regionLengths->size[0];
      if ((c9_e_k < 1) || (c9_e_k > c9_i15)) {
        emlrtDynamicBoundsCheckR2012b(c9_e_k, 1, c9_i15, &c9_ed_emlrtBCI,
          (emlrtConstCTX)c9_sp);
      }

      c9_i18 = c9_regionLengths->data[c9_e_k - 1];
      if ((c9_i18 < 1) || (c9_i18 > c9_i12)) {
        emlrtDynamicBoundsCheckR2012b(c9_i18, 1, c9_i12, &c9_dd_emlrtBCI,
          (emlrtConstCTX)c9_sp);
      }

      c9_i20 = c9_labelsRenumbered->size[0];
      if ((c9_e_k < 1) || (c9_e_k > c9_i20)) {
        emlrtDynamicBoundsCheckR2012b(c9_e_k, 1, c9_i20, &c9_fd_emlrtBCI,
          (emlrtConstCTX)c9_sp);
      }

      c9_labelsRenumbered->data[c9_e_k - 1] = c9_labelsRenumbered->data[c9_i18 -
        1];
    }

    c9_i9 = c9_regionLengths->size[0];
    if (c9_numComponents != (real_T)(int32_T)muDoubleScalarFloor
        (c9_numComponents)) {
      emlrtIntegerCheckR2012b(c9_numComponents, &c9_b_emlrtDCI, (emlrtConstCTX)
        c9_sp);
    }

    c9_regionLengths->size[0] = (int32_T)c9_numComponents;
    c9_st.site = &c9_mg_emlrtRSI;
    c9_emxEnsureCapacity_int32_T(chartInstance, &c9_st, c9_regionLengths, c9_i9,
      &c9_hd_emlrtRTEI);
    if (c9_numComponents != (real_T)(int32_T)muDoubleScalarFloor
        (c9_numComponents)) {
      emlrtIntegerCheckR2012b(c9_numComponents, &c9_b_emlrtDCI, (emlrtConstCTX)
        c9_sp);
    }

    c9_b_loop_ub = (int32_T)c9_numComponents - 1;
    for (c9_i16 = 0; c9_i16 <= c9_b_loop_ub; c9_i16++) {
      c9_regionLengths->data[c9_i16] = 0;
    }

    c9_st.site = &c9_nc_emlrtRSI;
    c9_c_b = c9_numRuns;
    c9_d_b = c9_c_b;
    if (c9_d_b < 1) {
      c9_b_overflow = false;
    } else {
      c9_b_overflow = (c9_d_b > 2147483646);
    }

    if (c9_b_overflow) {
      c9_b_st.site = &c9_ib_emlrtRSI;
      c9_check_forloop_overflow_error(chartInstance, &c9_b_st);
    }

    for (c9_f_k = 0; c9_f_k < c9_numRuns; c9_f_k++) {
      c9_e_k = c9_f_k + 1;
      c9_i25 = c9_labelsRenumbered->size[0];
      if ((c9_e_k < 1) || (c9_e_k > c9_i25)) {
        emlrtDynamicBoundsCheckR2012b(c9_e_k, 1, c9_i25, &c9_sd_emlrtBCI,
          (emlrtConstCTX)c9_sp);
      }

      c9_idx = c9_labelsRenumbered->data[c9_e_k - 1];
      c9_i28 = c9_regionLengths->size[0];
      if ((c9_idx < 1) || (c9_idx > c9_i28)) {
        emlrtDynamicBoundsCheckR2012b(c9_idx, 1, c9_i28, &c9_td_emlrtBCI,
          (emlrtConstCTX)c9_sp);
      }

      c9_i30 = c9_endRow->size[0];
      if ((c9_e_k < 1) || (c9_e_k > c9_i30)) {
        emlrtDynamicBoundsCheckR2012b(c9_e_k, 1, c9_i30, &c9_ud_emlrtBCI,
          (emlrtConstCTX)c9_sp);
      }

      c9_i32 = c9_startRow->size[0];
      if ((c9_e_k < 1) || (c9_e_k > c9_i32)) {
        emlrtDynamicBoundsCheckR2012b(c9_e_k, 1, c9_i32, &c9_vd_emlrtBCI,
          (emlrtConstCTX)c9_sp);
      }

      c9_i34 = c9_regionLengths->size[0];
      if ((c9_idx < 1) || (c9_idx > c9_i34)) {
        emlrtDynamicBoundsCheckR2012b(c9_idx, 1, c9_i34, &c9_wd_emlrtBCI,
          (emlrtConstCTX)c9_sp);
      }

      c9_regionLengths->data[c9_idx - 1] = ((c9_regionLengths->data[c9_idx - 1]
        + c9_endRow->data[c9_e_k - 1]) - c9_startRow->data[c9_e_k - 1]) + 1;
    }

    c9_st.site = &c9_mc_emlrtRSI;
    c9_b_st.site = &c9_vc_emlrtRSI;
    c9_c_st.site = &c9_wc_emlrtRSI;
    c9_vlen = c9_regionLengths->size[0];
    c9_d_st.site = &c9_xc_emlrtRSI;
    c9_b_vlen = c9_vlen;
    if ((c9_regionLengths->size[0] == 0) || (c9_b_vlen == 0)) {
      c9_b_y = 0.0;
    } else {
      c9_e_st.site = &c9_yc_emlrtRSI;
      c9_c_vlen = c9_b_vlen;
      c9_f_st.site = &c9_ad_emlrtRSI;
      c9_d_vlen = c9_c_vlen;
      if (c9_d_vlen < 4096) {
        c9_g_st.site = &c9_bd_emlrtRSI;
        c9_b_y = c9_sumColumnB(chartInstance, &c9_g_st, c9_regionLengths,
          c9_d_vlen);
      } else {
        c9_d_a = c9_d_vlen;
        c9_nfb = (int32_T)((uint32_T)c9_d_a >> 12);
        c9_inb = c9_nfb << 12;
        c9_lidx = c9_inb;
        c9_nleft = c9_d_vlen - c9_inb;
        c9_b_s = c9_sumColumnB4(chartInstance, c9_regionLengths, 1);
        for (c9_ib = 2; c9_ib <= c9_nfb; c9_ib++) {
          c9_b_s += c9_sumColumnB4(chartInstance, c9_regionLengths, 1 + ((c9_ib
            - 1) << 12));
        }

        if (c9_nleft > 0) {
          c9_g_st.site = &c9_cd_emlrtRSI;
          c9_b_s += c9_b_sumColumnB(chartInstance, &c9_g_st, c9_regionLengths,
            c9_nleft, c9_lidx + 1);
        }

        c9_b_y = c9_b_s;
      }
    }

    if (!(c9_b_y >= 0.0)) {
      emlrtNonNegativeCheckR2012b(c9_b_y, &c9_d_emlrtDCI, (emlrtConstCTX)c9_sp);
    }

    c9_d1 = c9_b_y;
    if (c9_d1 != (real_T)(int32_T)muDoubleScalarFloor(c9_d1)) {
      emlrtIntegerCheckR2012b(c9_d1, &c9_c_emlrtDCI, (emlrtConstCTX)c9_sp);
    }

    c9_b_iv[0] = (int32_T)c9_d1;
    c9_emxInit_real_T1(chartInstance, c9_sp, &c9_pixelIdxList, 1,
                       &c9_nd_emlrtRTEI);
    c9_i35 = c9_pixelIdxList->size[0];
    c9_pixelIdxList->size[0] = c9_b_iv[0];
    c9_st.site = &c9_mc_emlrtRSI;
    c9_emxEnsureCapacity_real_T1(chartInstance, &c9_st, c9_pixelIdxList, c9_i35,
      &c9_id_emlrtRTEI);
    c9_emxInit_int32_T(chartInstance, c9_sp, &c9_x, 1, &c9_jd_emlrtRTEI);
    c9_st.site = &c9_lc_emlrtRSI;
    c9_i40 = c9_x->size[0];
    c9_x->size[0] = c9_regionLengths->size[0];
    c9_b_st.site = &c9_lc_emlrtRSI;
    c9_emxEnsureCapacity_int32_T(chartInstance, &c9_b_st, c9_x, c9_i40,
      &c9_jd_emlrtRTEI);
    c9_c_loop_ub = c9_regionLengths->size[0] - 1;
    for (c9_i41 = 0; c9_i41 <= c9_c_loop_ub; c9_i41++) {
      c9_x->data[c9_i41] = c9_regionLengths->data[c9_i41];
    }

    c9_b_st.site = &c9_id_emlrtRSI;
    c9_dim = 2;
    if ((real_T)c9_x->size[0] != 1.0) {
      c9_dim = 1;
    }

    c9_emxInit_int32_T(chartInstance, &c9_b_st, &c9_b_x, 1, &c9_rc_emlrtRTEI);
    c9_i43 = c9_b_x->size[0];
    c9_b_x->size[0] = c9_x->size[0];
    c9_emxEnsureCapacity_int32_T(chartInstance, &c9_b_st, c9_b_x, c9_i43,
      &c9_rc_emlrtRTEI);
    c9_d_loop_ub = c9_x->size[0] - 1;
    for (c9_i46 = 0; c9_i46 <= c9_d_loop_ub; c9_i46++) {
      c9_b_x->data[c9_i46] = c9_x->data[c9_i46];
    }

    c9_c_st.site = &c9_jd_emlrtRSI;
    c9_useConstantDim(chartInstance, &c9_c_st, c9_b_x, c9_dim, c9_x);
    c9_emxFree_int32_T(chartInstance, &c9_b_x);
    c9_emxInit_int32_T(chartInstance, c9_sp, &c9_idxCount, 1, &c9_kd_emlrtRTEI);
    c9_i49 = c9_idxCount->size[0];
    c9_idxCount->size[0] = 1 + c9_x->size[0];
    c9_st.site = &c9_lc_emlrtRSI;
    c9_emxEnsureCapacity_int32_T(chartInstance, &c9_st, c9_idxCount, c9_i49,
      &c9_kd_emlrtRTEI);
    c9_idxCount->data[0] = 0;
    c9_e_loop_ub = c9_x->size[0] - 1;
    for (c9_i54 = 0; c9_i54 <= c9_e_loop_ub; c9_i54++) {
      c9_idxCount->data[c9_i54 + 1] = c9_x->data[c9_i54];
    }

    c9_emxFree_int32_T(chartInstance, &c9_x);
    c9_st.site = &c9_kc_emlrtRSI;
    c9_e_b = c9_numRuns;
    c9_f_b = c9_e_b;
    if (c9_f_b < 1) {
      c9_c_overflow = false;
    } else {
      c9_c_overflow = (c9_f_b > 2147483646);
    }

    if (c9_c_overflow) {
      c9_b_st.site = &c9_ib_emlrtRSI;
      c9_check_forloop_overflow_error(chartInstance, &c9_b_st);
    }

    for (c9_i_k = 0; c9_i_k < c9_numRuns; c9_i_k++) {
      c9_e_k = c9_i_k + 1;
      c9_i62 = c9_startCol->size[0];
      if ((c9_e_k < 1) || (c9_e_k > c9_i62)) {
        emlrtDynamicBoundsCheckR2012b(c9_e_k, 1, c9_i62, &c9_he_emlrtBCI,
          (emlrtConstCTX)c9_sp);
      }

      c9_e_a = c9_startCol->data[c9_e_k - 1] - 1;
      c9_c = c9_e_a;
      c9_f_a = c9_c;
      c9_column_offset = c9_f_a * 120;
      c9_i65 = c9_labelsRenumbered->size[0];
      if ((c9_e_k < 1) || (c9_e_k > c9_i65)) {
        emlrtDynamicBoundsCheckR2012b(c9_e_k, 1, c9_i65, &c9_ie_emlrtBCI,
          (emlrtConstCTX)c9_sp);
      }

      c9_idx = c9_labelsRenumbered->data[c9_e_k - 1];
      c9_i67 = c9_startRow->size[0];
      if ((c9_e_k < 1) || (c9_e_k > c9_i67)) {
        emlrtDynamicBoundsCheckR2012b(c9_e_k, 1, c9_i67, &c9_je_emlrtBCI,
          (emlrtConstCTX)c9_sp);
      }

      c9_i69 = c9_startRow->data[c9_e_k - 1];
      c9_i70 = c9_endRow->size[0];
      if ((c9_e_k < 1) || (c9_e_k > c9_i70)) {
        emlrtDynamicBoundsCheckR2012b(c9_e_k, 1, c9_i70, &c9_ke_emlrtBCI,
          (emlrtConstCTX)c9_sp);
      }

      c9_i72 = c9_endRow->data[c9_e_k - 1];
      c9_st.site = &c9_jc_emlrtRSI;
      c9_g_a = c9_i69;
      c9_g_b = c9_i72;
      c9_h_a = c9_g_a;
      c9_h_b = c9_g_b;
      if (c9_h_a > c9_h_b) {
        c9_d_overflow = false;
      } else {
        c9_d_overflow = (c9_h_b > 2147483646);
      }

      if (c9_d_overflow) {
        c9_b_st.site = &c9_ib_emlrtRSI;
        c9_check_forloop_overflow_error(chartInstance, &c9_b_st);
      }

      for (c9_rowidx = c9_i69; c9_rowidx <= c9_i72; c9_rowidx++) {
        c9_i73 = c9_idxCount->size[0];
        if ((c9_idx < 1) || (c9_idx > c9_i73)) {
          emlrtDynamicBoundsCheckR2012b(c9_idx, 1, c9_i73, &c9_le_emlrtBCI,
            (emlrtConstCTX)c9_sp);
        }

        c9_i_a = c9_idxCount->data[c9_idx - 1] + 1;
        c9_b_c = c9_i_a;
        c9_i74 = c9_idxCount->size[0];
        if ((c9_idx < 1) || (c9_idx > c9_i74)) {
          emlrtDynamicBoundsCheckR2012b(c9_idx, 1, c9_i74, &c9_me_emlrtBCI,
            (emlrtConstCTX)c9_sp);
        }

        c9_idxCount->data[c9_idx - 1] = c9_b_c;
        c9_i75 = c9_pixelIdxList->size[0];
        c9_i76 = c9_idxCount->size[0];
        if ((c9_idx < 1) || (c9_idx > c9_i76)) {
          emlrtDynamicBoundsCheckR2012b(c9_idx, 1, c9_i76, &c9_oe_emlrtBCI,
            (emlrtConstCTX)c9_sp);
        }

        c9_i77 = c9_idxCount->data[c9_idx - 1];
        if ((c9_i77 < 1) || (c9_i77 > c9_i75)) {
          emlrtDynamicBoundsCheckR2012b(c9_i77, 1, c9_i75, &c9_ne_emlrtBCI,
            (emlrtConstCTX)c9_sp);
        }

        c9_pixelIdxList->data[c9_i77 - 1] = (real_T)(c9_rowidx +
          c9_column_offset);
      }
    }

    c9_emxFree_int32_T(chartInstance, &c9_idxCount);
    c9_emxFree_int32_T(chartInstance, &c9_labelsRenumbered);
    c9_CC->Connectivity = 8.0;
    for (c9_i63 = 0; c9_i63 < 2; c9_i63++) {
      c9_CC->ImageSize[c9_i63] = 120.0 + 40.0 * (real_T)c9_i63;
    }

    c9_CC->NumObjects = c9_numComponents;
    c9_i64 = c9_CC->RegionIndices->size[0];
    c9_CC->RegionIndices->size[0] = c9_pixelIdxList->size[0];
    c9_emxEnsureCapacity_real_T1(chartInstance, c9_sp, c9_CC->RegionIndices,
      c9_i64, &c9_ld_emlrtRTEI);
    c9_f_loop_ub = c9_pixelIdxList->size[0] - 1;
    for (c9_i66 = 0; c9_i66 <= c9_f_loop_ub; c9_i66++) {
      c9_CC->RegionIndices->data[c9_i66] = c9_pixelIdxList->data[c9_i66];
    }

    c9_emxFree_real_T(chartInstance, &c9_pixelIdxList);
    c9_i68 = c9_CC->RegionLengths->size[0];
    c9_CC->RegionLengths->size[0] = c9_regionLengths->size[0];
    c9_emxEnsureCapacity_int32_T(chartInstance, c9_sp, c9_CC->RegionLengths,
      c9_i68, &c9_md_emlrtRTEI);
    c9_g_loop_ub = c9_regionLengths->size[0] - 1;
    for (c9_i71 = 0; c9_i71 <= c9_g_loop_ub; c9_i71++) {
      c9_CC->RegionLengths->data[c9_i71] = c9_regionLengths->data[c9_i71];
    }
  }

  c9_emxFree_int32_T(chartInstance, &c9_startCol);
  c9_emxFree_int32_T(chartInstance, &c9_endRow);
  c9_emxFree_int32_T(chartInstance, &c9_startRow);
  c9_emxFree_int32_T(chartInstance, &c9_regionLengths);
}

static real_T c9_sumColumnB(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_int32_T *c9_x, int32_T
  c9_vlen)
{
  emlrtStack c9_b_st;
  emlrtStack c9_c_st;
  emlrtStack c9_st;
  real_T c9_b_y;
  real_T c9_c_y;
  real_T c9_d_y;
  int32_T c9_b;
  int32_T c9_b_b;
  int32_T c9_b_k;
  int32_T c9_b_vlen;
  int32_T c9_b_vstart;
  int32_T c9_c_b;
  int32_T c9_c_k;
  int32_T c9_c_vlen;
  int32_T c9_d_a;
  int32_T c9_d_b;
  int32_T c9_d_k;
  int32_T c9_e_k;
  int32_T c9_f_k;
  int32_T c9_g_k;
  int32_T c9_h_k;
  int32_T c9_i;
  int32_T c9_i1;
  int32_T c9_i_k;
  int32_T c9_inb;
  int32_T c9_k;
  int32_T c9_lidx;
  int32_T c9_nfb;
  int32_T c9_nleft;
  int32_T c9_vstart;
  boolean_T c9_b_overflow;
  boolean_T c9_overflow;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_b_st.prev = &c9_st;
  c9_b_st.tls = c9_st.tls;
  c9_c_st.prev = &c9_b_st;
  c9_c_st.tls = c9_b_st.tls;
  if (c9_vlen <= 1024) {
    c9_st.site = &c9_dd_emlrtRSI;
    c9_b_vlen = c9_vlen - 1;
    c9_b_y = (real_T)c9_x->data[0];
    c9_i = c9_b_vlen;
    c9_b_st.site = &c9_hd_emlrtRSI;
    c9_b = c9_i;
    c9_b_b = c9_b;
    if (c9_b_b < 1) {
      c9_overflow = false;
    } else {
      c9_overflow = (c9_b_b > 2147483646);
    }

    if (c9_overflow) {
      c9_c_st.site = &c9_ib_emlrtRSI;
      c9_check_forloop_overflow_error(chartInstance, &c9_c_st);
    }

    for (c9_d_k = 0; c9_d_k < c9_i; c9_d_k++) {
      c9_f_k = c9_d_k;
      c9_b_y += (real_T)c9_x->data[c9_f_k + 1];
    }
  } else {
    c9_d_a = c9_vlen;
    c9_nfb = (int32_T)((uint32_T)c9_d_a >> 10);
    c9_inb = c9_nfb << 10;
    c9_st.site = &c9_ed_emlrtRSI;
    c9_b_y = (real_T)c9_x->data[0];
    c9_b_st.site = &c9_hd_emlrtRSI;
    for (c9_k = 0; c9_k < 1023; c9_k++) {
      c9_c_k = c9_k;
      c9_b_y += (real_T)c9_x->data[c9_c_k + 1];
    }

    for (c9_b_k = 2; c9_b_k <= c9_nfb; c9_b_k++) {
      c9_st.site = &c9_fd_emlrtRSI;
      c9_vstart = (c9_b_k - 1) << 10;
      c9_c_y = (real_T)c9_x->data[c9_vstart];
      c9_b_st.site = &c9_hd_emlrtRSI;
      for (c9_e_k = 0; c9_e_k < 1023; c9_e_k++) {
        c9_g_k = c9_e_k;
        c9_c_y += (real_T)c9_x->data[(c9_vstart + c9_g_k) + 1];
      }

      c9_b_y += c9_c_y;
    }

    if (c9_vlen > c9_inb) {
      c9_nleft = c9_vlen - c9_inb;
      c9_lidx = c9_inb;
      c9_st.site = &c9_gd_emlrtRSI;
      c9_c_vlen = c9_nleft - 1;
      c9_b_vstart = c9_lidx;
      c9_d_y = (real_T)c9_x->data[c9_b_vstart];
      c9_i1 = c9_c_vlen;
      c9_b_st.site = &c9_hd_emlrtRSI;
      c9_c_b = c9_i1;
      c9_d_b = c9_c_b;
      if (c9_d_b < 1) {
        c9_b_overflow = false;
      } else {
        c9_b_overflow = (c9_d_b > 2147483646);
      }

      if (c9_b_overflow) {
        c9_c_st.site = &c9_ib_emlrtRSI;
        c9_check_forloop_overflow_error(chartInstance, &c9_c_st);
      }

      for (c9_h_k = 0; c9_h_k < c9_i1; c9_h_k++) {
        c9_i_k = c9_h_k;
        c9_d_y += (real_T)c9_x->data[(c9_b_vstart + c9_i_k) + 1];
      }

      c9_b_y += c9_d_y;
    }
  }

  return c9_b_y;
}

static real_T c9_sumColumnB4(SFc9_flightControlSystemInstanceStruct
  *chartInstance, c9_emxArray_int32_T *c9_x, int32_T c9_vstart)
{
  real_T c9_psum1;
  real_T c9_psum2;
  real_T c9_psum3;
  real_T c9_psum4;
  int32_T c9_b_k;
  int32_T c9_i2;
  int32_T c9_i3;
  int32_T c9_i4;
  int32_T c9_k;
  (void)chartInstance;
  c9_i2 = c9_vstart + 1023;
  c9_i3 = c9_vstart + 2047;
  c9_i4 = c9_vstart + 3071;
  c9_psum1 = (real_T)c9_x->data[c9_vstart - 1];
  c9_psum2 = (real_T)c9_x->data[c9_i2];
  c9_psum3 = (real_T)c9_x->data[c9_i3];
  c9_psum4 = (real_T)c9_x->data[c9_i4];
  for (c9_k = 0; c9_k < 1023; c9_k++) {
    c9_b_k = c9_k + 1;
    c9_psum1 += (real_T)c9_x->data[(c9_vstart + c9_b_k) - 1];
    c9_psum2 += (real_T)c9_x->data[c9_i2 + c9_b_k];
    c9_psum3 += (real_T)c9_x->data[c9_i3 + c9_b_k];
    c9_psum4 += (real_T)c9_x->data[c9_i4 + c9_b_k];
  }

  return (c9_psum1 + c9_psum2) + (c9_psum3 + c9_psum4);
}

static real_T c9_b_sumColumnB(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_int32_T *c9_x, int32_T
  c9_vlen, int32_T c9_vstart)
{
  emlrtStack c9_b_st;
  emlrtStack c9_c_st;
  emlrtStack c9_st;
  real_T c9_b_y;
  real_T c9_c_y;
  real_T c9_d_y;
  int32_T c9_b;
  int32_T c9_b_b;
  int32_T c9_b_k;
  int32_T c9_b_vlen;
  int32_T c9_b_vstart;
  int32_T c9_c_b;
  int32_T c9_c_k;
  int32_T c9_c_vlen;
  int32_T c9_c_vstart;
  int32_T c9_d_a;
  int32_T c9_d_b;
  int32_T c9_d_k;
  int32_T c9_d_vstart;
  int32_T c9_e_k;
  int32_T c9_e_vstart;
  int32_T c9_f_k;
  int32_T c9_g_k;
  int32_T c9_h_k;
  int32_T c9_i;
  int32_T c9_i1;
  int32_T c9_i_k;
  int32_T c9_inb;
  int32_T c9_k;
  int32_T c9_lidx;
  int32_T c9_nfb;
  int32_T c9_nleft;
  boolean_T c9_b_overflow;
  boolean_T c9_overflow;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_b_st.prev = &c9_st;
  c9_b_st.tls = c9_st.tls;
  c9_c_st.prev = &c9_b_st;
  c9_c_st.tls = c9_b_st.tls;
  if (c9_vlen <= 1024) {
    c9_st.site = &c9_dd_emlrtRSI;
    c9_b_vlen = c9_vlen - 1;
    c9_b_vstart = c9_vstart - 1;
    c9_b_y = (real_T)c9_x->data[c9_b_vstart];
    c9_i = c9_b_vlen;
    c9_b_st.site = &c9_hd_emlrtRSI;
    c9_b = c9_i;
    c9_b_b = c9_b;
    if (c9_b_b < 1) {
      c9_overflow = false;
    } else {
      c9_overflow = (c9_b_b > 2147483646);
    }

    if (c9_overflow) {
      c9_c_st.site = &c9_ib_emlrtRSI;
      c9_check_forloop_overflow_error(chartInstance, &c9_c_st);
    }

    for (c9_d_k = 0; c9_d_k < c9_i; c9_d_k++) {
      c9_f_k = c9_d_k;
      c9_b_y += (real_T)c9_x->data[(c9_b_vstart + c9_f_k) + 1];
    }
  } else {
    c9_d_a = c9_vlen;
    c9_nfb = (int32_T)((uint32_T)c9_d_a >> 10);
    c9_inb = c9_nfb << 10;
    c9_st.site = &c9_ed_emlrtRSI;
    c9_c_vstart = c9_vstart - 1;
    c9_b_y = (real_T)c9_x->data[c9_c_vstart];
    c9_b_st.site = &c9_hd_emlrtRSI;
    for (c9_k = 0; c9_k < 1023; c9_k++) {
      c9_c_k = c9_k;
      c9_b_y += (real_T)c9_x->data[(c9_c_vstart + c9_c_k) + 1];
    }

    for (c9_b_k = 2; c9_b_k <= c9_nfb; c9_b_k++) {
      c9_st.site = &c9_fd_emlrtRSI;
      c9_d_vstart = (c9_vstart + ((c9_b_k - 1) << 10)) - 1;
      c9_c_y = (real_T)c9_x->data[c9_d_vstart];
      c9_b_st.site = &c9_hd_emlrtRSI;
      for (c9_e_k = 0; c9_e_k < 1023; c9_e_k++) {
        c9_g_k = c9_e_k;
        c9_c_y += (real_T)c9_x->data[(c9_d_vstart + c9_g_k) + 1];
      }

      c9_b_y += c9_c_y;
    }

    if (c9_vlen > c9_inb) {
      c9_nleft = c9_vlen - c9_inb;
      c9_lidx = c9_vstart + c9_inb;
      c9_st.site = &c9_gd_emlrtRSI;
      c9_c_vlen = c9_nleft - 1;
      c9_e_vstart = c9_lidx - 1;
      c9_d_y = (real_T)c9_x->data[c9_e_vstart];
      c9_i1 = c9_c_vlen;
      c9_b_st.site = &c9_hd_emlrtRSI;
      c9_c_b = c9_i1;
      c9_d_b = c9_c_b;
      if (c9_d_b < 1) {
        c9_b_overflow = false;
      } else {
        c9_b_overflow = (c9_d_b > 2147483646);
      }

      if (c9_b_overflow) {
        c9_c_st.site = &c9_ib_emlrtRSI;
        c9_check_forloop_overflow_error(chartInstance, &c9_c_st);
      }

      for (c9_h_k = 0; c9_h_k < c9_i1; c9_h_k++) {
        c9_i_k = c9_h_k;
        c9_d_y += (real_T)c9_x->data[(c9_e_vstart + c9_i_k) + 1];
      }

      c9_b_y += c9_d_y;
    }
  }

  return c9_b_y;
}

static void c9_useConstantDim(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_int32_T *c9_b_varargin_2,
  int32_T c9_varargin_3, c9_emxArray_int32_T *c9_varargout_1)
{
  emlrtStack c9_b_st;
  emlrtStack c9_c_st;
  emlrtStack c9_d_st;
  emlrtStack c9_e_st;
  emlrtStack c9_st;
  int32_T c9_b;
  int32_T c9_b_b;
  int32_T c9_b_k;
  int32_T c9_b_loop_ub;
  int32_T c9_i;
  int32_T c9_i1;
  int32_T c9_i2;
  int32_T c9_i3;
  int32_T c9_i4;
  int32_T c9_k;
  int32_T c9_loop_ub;
  int32_T c9_nx;
  boolean_T c9_overflow;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_b_st.prev = &c9_st;
  c9_b_st.tls = c9_st.tls;
  c9_c_st.prev = &c9_b_st;
  c9_c_st.tls = c9_b_st.tls;
  c9_d_st.prev = &c9_c_st;
  c9_d_st.tls = c9_c_st.tls;
  c9_e_st.prev = &c9_d_st;
  c9_e_st.tls = c9_d_st.tls;
  if (c9_varargin_3 == 1) {
    c9_st.site = &c9_kd_emlrtRSI;
    c9_i1 = c9_varargout_1->size[0];
    c9_varargout_1->size[0] = c9_b_varargin_2->size[0];
    c9_emxEnsureCapacity_int32_T(chartInstance, &c9_st, c9_varargout_1, c9_i1,
      &c9_td_emlrtRTEI);
    c9_b_loop_ub = c9_b_varargin_2->size[0] - 1;
    for (c9_i3 = 0; c9_i3 <= c9_b_loop_ub; c9_i3++) {
      c9_varargout_1->data[c9_i3] = c9_b_varargin_2->data[c9_i3];
    }

    c9_b_st.site = &c9_ld_emlrtRSI;
    if (c9_varargout_1->size[0] != 0) {
      c9_c_st.site = &c9_md_emlrtRSI;
      c9_nx = c9_varargout_1->size[0] - 1;
      if (!((real_T)c9_varargout_1->size[0] == 1.0)) {
        c9_i4 = c9_nx;
        c9_d_st.site = &c9_nd_emlrtRSI;
        c9_b = c9_i4;
        c9_b_b = c9_b;
        if (c9_b_b < 1) {
          c9_overflow = false;
        } else {
          c9_overflow = (c9_b_b > 2147483646);
        }

        if (c9_overflow) {
          c9_e_st.site = &c9_ib_emlrtRSI;
          c9_check_forloop_overflow_error(chartInstance, &c9_e_st);
        }

        for (c9_k = 0; c9_k < c9_i4; c9_k++) {
          c9_b_k = c9_k;
          c9_varargout_1->data[c9_b_k + 1] += c9_varargout_1->data[c9_b_k];
        }
      }
    }
  } else {
    c9_i = c9_varargout_1->size[0];
    c9_varargout_1->size[0] = c9_b_varargin_2->size[0];
    c9_emxEnsureCapacity_int32_T(chartInstance, c9_sp, c9_varargout_1, c9_i,
      &c9_td_emlrtRTEI);
    c9_loop_ub = c9_b_varargin_2->size[0] - 1;
    for (c9_i2 = 0; c9_i2 <= c9_loop_ub; c9_i2++) {
      c9_varargout_1->data[c9_i2] = c9_b_varargin_2->data[c9_i2];
    }
  }
}

static void c9_assertValidSizeArg(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, real_T c9_varargin_1)
{
  static char_T c9_b_cv[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I', 'n',
    'p', 'u', 't' };

  static char_T c9_b_cv1[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  const mxArray *c9_b_y = NULL;
  const mxArray *c9_c_y = NULL;
  const mxArray *c9_d_y = NULL;
  const mxArray *c9_e_y = NULL;
  const mxArray *c9_f_y = NULL;
  const mxArray *c9_g_y = NULL;
  real_T c9_arg;
  real_T c9_b_arg;
  real_T c9_b_varargin_1;
  real_T c9_n;
  real_T c9_x;
  int32_T c9_b_u;
  int32_T c9_u;
  boolean_T c9_b;
  boolean_T c9_b_b;
  boolean_T c9_b_p;
  boolean_T c9_p;
  (void)chartInstance;
  c9_arg = c9_varargin_1;
  if (c9_arg != c9_arg) {
    c9_p = false;
  } else {
    c9_x = c9_arg;
    c9_b = muDoubleScalarIsInf(c9_x);
    if (c9_b) {
      c9_p = false;
    } else {
      c9_p = true;
    }
  }

  if (c9_p) {
    c9_b_arg = c9_varargin_1;
    if (c9_b_arg > 2.147483647E+9) {
      c9_b_p = false;
    } else {
      c9_b_p = true;
    }

    if (c9_b_p) {
      c9_b_b = true;
    } else {
      c9_b_b = false;
    }
  } else {
    c9_b_b = false;
  }

  if (!c9_b_b) {
    c9_b_y = NULL;
    sf_mex_assign(&c9_b_y, sf_mex_create("y", c9_b_cv, 10, 0U, 1U, 0U, 2, 1, 28),
                  false);
    c9_c_y = NULL;
    sf_mex_assign(&c9_c_y, sf_mex_create("y", c9_b_cv, 10, 0U, 1U, 0U, 2, 1, 28),
                  false);
    c9_u = MIN_int32_T;
    c9_d_y = NULL;
    sf_mex_assign(&c9_d_y, sf_mex_create("y", &c9_u, 6, 0U, 0U, 0U, 0), false);
    c9_b_u = MAX_int32_T;
    c9_g_y = NULL;
    sf_mex_assign(&c9_g_y, sf_mex_create("y", &c9_b_u, 6, 0U, 0U, 0U, 0), false);
    sf_mex_call(c9_sp, &c9_i_emlrtMCI, "error", 0U, 2U, 14, c9_b_y, 14,
                sf_mex_call(c9_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c9_sp, NULL, "message", 1U, 3U, 14, c9_c_y, 14, c9_d_y, 14, c9_g_y)));
  }

  c9_b_varargin_1 = c9_varargin_1;
  if (c9_b_varargin_1 <= 0.0) {
    c9_n = 0.0;
  } else {
    c9_n = c9_b_varargin_1;
  }

  if (!(c9_n <= 2.147483647E+9)) {
    c9_e_y = NULL;
    sf_mex_assign(&c9_e_y, sf_mex_create("y", c9_b_cv1, 10, 0U, 1U, 0U, 2, 1, 21),
                  false);
    c9_f_y = NULL;
    sf_mex_assign(&c9_f_y, sf_mex_create("y", c9_b_cv1, 10, 0U, 1U, 0U, 2, 1, 21),
                  false);
    sf_mex_call(c9_sp, &c9_j_emlrtMCI, "error", 0U, 2U, 14, c9_e_y, 14,
                sf_mex_call(c9_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c9_sp, NULL, "message", 1U, 1U, 14, c9_f_y)));
  }
}

static void c9_ComputeWeightedCentroid(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, real_T c9_b_I[19200],
  c9_emxArray_s_R6Og1x0kmqQXSF9Pwa49 *c9_stats, c9_sHtk0WM4OMtyqkehwQYcq2
  c9_statsAlreadyComputed, c9_emxArray_s_R6Og1x0kmqQXSF9Pwa49 *c9_b_stats,
  c9_sHtk0WM4OMtyqkehwQYcq2 *c9_b_statsAlreadyComputed)
{
  real_T c9_c_I[19200];
  int32_T c9_i;
  int32_T c9_i1;
  int32_T c9_i2;
  int32_T c9_loop_ub;
  c9_i = c9_b_stats->size[0];
  c9_b_stats->size[0] = c9_stats->size[0];
  c9_emxEnsureCapacity_s_R6Og1x0kmqQ(chartInstance, c9_sp, c9_b_stats, c9_i,
    &c9_ud_emlrtRTEI);
  c9_loop_ub = c9_stats->size[0] - 1;
  for (c9_i1 = 0; c9_i1 <= c9_loop_ub; c9_i1++) {
    c9_emxCopyStruct_s_R6Og1x0kmqQXSF9(chartInstance, c9_sp, &c9_b_stats->
      data[c9_i1], &c9_stats->data[c9_i1], &c9_ud_emlrtRTEI);
  }

  *c9_b_statsAlreadyComputed = c9_statsAlreadyComputed;
  for (c9_i2 = 0; c9_i2 < 19200; c9_i2++) {
    c9_c_I[c9_i2] = c9_b_I[c9_i2];
  }

  c9_b_ComputeWeightedCentroid(chartInstance, c9_sp, c9_c_I, c9_b_stats,
    c9_b_statsAlreadyComputed);
}

static real_T c9_sum(SFc9_flightControlSystemInstanceStruct *chartInstance,
                     const emlrtStack *c9_sp, c9_emxArray_real_T *c9_x)
{
  static char_T c9_b_cv[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
    'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  emlrtStack c9_b_st;
  emlrtStack c9_c_st;
  emlrtStack c9_d_st;
  emlrtStack c9_e_st;
  emlrtStack c9_f_st;
  emlrtStack c9_st;
  const mxArray *c9_c_y = NULL;
  const mxArray *c9_d_y = NULL;
  real_T c9_b_s;
  real_T c9_b_y;
  int32_T c9_b_vlen;
  int32_T c9_c_vlen;
  int32_T c9_d_a;
  int32_T c9_d_vlen;
  int32_T c9_ib;
  int32_T c9_inb;
  int32_T c9_lidx;
  int32_T c9_nfb;
  int32_T c9_nleft;
  int32_T c9_vlen;
  boolean_T c9_b;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_b_st.prev = &c9_st;
  c9_b_st.tls = c9_st.tls;
  c9_c_st.prev = &c9_b_st;
  c9_c_st.tls = c9_b_st.tls;
  c9_d_st.prev = &c9_c_st;
  c9_d_st.tls = c9_c_st.tls;
  c9_e_st.prev = &c9_d_st;
  c9_e_st.tls = c9_d_st.tls;
  c9_f_st.prev = &c9_e_st;
  c9_f_st.tls = c9_e_st.tls;
  c9_st.site = &c9_vc_emlrtRSI;
  if ((c9_x->size[0] == 1) || ((real_T)c9_x->size[0] != 1.0)) {
    c9_b = true;
  } else {
    c9_b = false;
  }

  if (!c9_b) {
    c9_c_y = NULL;
    sf_mex_assign(&c9_c_y, sf_mex_create("y", c9_b_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    c9_d_y = NULL;
    sf_mex_assign(&c9_d_y, sf_mex_create("y", c9_b_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    sf_mex_call(&c9_st, &c9_m_emlrtMCI, "error", 0U, 2U, 14, c9_c_y, 14,
                sf_mex_call(&c9_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c9_st, NULL, "message", 1U, 1U, 14, c9_d_y)));
  }

  c9_b_st.site = &c9_wc_emlrtRSI;
  c9_vlen = c9_x->size[0];
  c9_c_st.site = &c9_xc_emlrtRSI;
  c9_b_vlen = c9_vlen;
  if ((c9_x->size[0] == 0) || (c9_b_vlen == 0)) {
    c9_b_y = 0.0;
  } else {
    c9_d_st.site = &c9_yc_emlrtRSI;
    c9_c_vlen = c9_b_vlen;
    c9_e_st.site = &c9_ad_emlrtRSI;
    c9_d_vlen = c9_c_vlen;
    if (c9_d_vlen < 4096) {
      c9_f_st.site = &c9_bd_emlrtRSI;
      c9_b_y = c9_c_sumColumnB(chartInstance, &c9_f_st, c9_x, c9_d_vlen);
    } else {
      c9_d_a = c9_d_vlen;
      c9_nfb = (int32_T)((uint32_T)c9_d_a >> 12);
      c9_inb = c9_nfb << 12;
      c9_lidx = c9_inb;
      c9_nleft = c9_d_vlen - c9_inb;
      c9_b_s = c9_b_sumColumnB4(chartInstance, c9_x, 1);
      for (c9_ib = 2; c9_ib <= c9_nfb; c9_ib++) {
        c9_b_s += c9_b_sumColumnB4(chartInstance, c9_x, 1 + ((c9_ib - 1) << 12));
      }

      if (c9_nleft > 0) {
        c9_f_st.site = &c9_cd_emlrtRSI;
        c9_b_s += c9_d_sumColumnB(chartInstance, &c9_f_st, c9_x, c9_nleft,
          c9_lidx + 1);
      }

      c9_b_y = c9_b_s;
    }
  }

  return c9_b_y;
}

static real_T c9_c_sumColumnB(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_real_T *c9_x, int32_T
  c9_vlen)
{
  emlrtStack c9_b_st;
  emlrtStack c9_c_st;
  emlrtStack c9_st;
  real_T c9_b_y;
  real_T c9_c_y;
  real_T c9_d_y;
  int32_T c9_b;
  int32_T c9_b_b;
  int32_T c9_b_k;
  int32_T c9_b_vlen;
  int32_T c9_b_vstart;
  int32_T c9_c_b;
  int32_T c9_c_k;
  int32_T c9_c_vlen;
  int32_T c9_d_a;
  int32_T c9_d_b;
  int32_T c9_d_k;
  int32_T c9_e_k;
  int32_T c9_f_k;
  int32_T c9_g_k;
  int32_T c9_h_k;
  int32_T c9_i;
  int32_T c9_i1;
  int32_T c9_i_k;
  int32_T c9_inb;
  int32_T c9_k;
  int32_T c9_lidx;
  int32_T c9_nfb;
  int32_T c9_nleft;
  int32_T c9_vstart;
  boolean_T c9_b_overflow;
  boolean_T c9_overflow;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_b_st.prev = &c9_st;
  c9_b_st.tls = c9_st.tls;
  c9_c_st.prev = &c9_b_st;
  c9_c_st.tls = c9_b_st.tls;
  if (c9_vlen <= 1024) {
    c9_st.site = &c9_dd_emlrtRSI;
    c9_b_vlen = c9_vlen - 1;
    c9_b_y = c9_x->data[0];
    c9_i = c9_b_vlen;
    c9_b_st.site = &c9_hd_emlrtRSI;
    c9_b = c9_i;
    c9_b_b = c9_b;
    if (c9_b_b < 1) {
      c9_overflow = false;
    } else {
      c9_overflow = (c9_b_b > 2147483646);
    }

    if (c9_overflow) {
      c9_c_st.site = &c9_ib_emlrtRSI;
      c9_check_forloop_overflow_error(chartInstance, &c9_c_st);
    }

    for (c9_d_k = 0; c9_d_k < c9_i; c9_d_k++) {
      c9_f_k = c9_d_k;
      c9_b_y += c9_x->data[c9_f_k + 1];
    }
  } else {
    c9_d_a = c9_vlen;
    c9_nfb = (int32_T)((uint32_T)c9_d_a >> 10);
    c9_inb = c9_nfb << 10;
    c9_st.site = &c9_ed_emlrtRSI;
    c9_b_y = c9_x->data[0];
    c9_b_st.site = &c9_hd_emlrtRSI;
    for (c9_k = 0; c9_k < 1023; c9_k++) {
      c9_c_k = c9_k;
      c9_b_y += c9_x->data[c9_c_k + 1];
    }

    for (c9_b_k = 2; c9_b_k <= c9_nfb; c9_b_k++) {
      c9_st.site = &c9_fd_emlrtRSI;
      c9_vstart = (c9_b_k - 1) << 10;
      c9_c_y = c9_x->data[c9_vstart];
      c9_b_st.site = &c9_hd_emlrtRSI;
      for (c9_e_k = 0; c9_e_k < 1023; c9_e_k++) {
        c9_g_k = c9_e_k;
        c9_c_y += c9_x->data[(c9_vstart + c9_g_k) + 1];
      }

      c9_b_y += c9_c_y;
    }

    if (c9_vlen > c9_inb) {
      c9_nleft = c9_vlen - c9_inb;
      c9_lidx = c9_inb;
      c9_st.site = &c9_gd_emlrtRSI;
      c9_c_vlen = c9_nleft - 1;
      c9_b_vstart = c9_lidx;
      c9_d_y = c9_x->data[c9_b_vstart];
      c9_i1 = c9_c_vlen;
      c9_b_st.site = &c9_hd_emlrtRSI;
      c9_c_b = c9_i1;
      c9_d_b = c9_c_b;
      if (c9_d_b < 1) {
        c9_b_overflow = false;
      } else {
        c9_b_overflow = (c9_d_b > 2147483646);
      }

      if (c9_b_overflow) {
        c9_c_st.site = &c9_ib_emlrtRSI;
        c9_check_forloop_overflow_error(chartInstance, &c9_c_st);
      }

      for (c9_h_k = 0; c9_h_k < c9_i1; c9_h_k++) {
        c9_i_k = c9_h_k;
        c9_d_y += c9_x->data[(c9_b_vstart + c9_i_k) + 1];
      }

      c9_b_y += c9_d_y;
    }
  }

  return c9_b_y;
}

static real_T c9_b_sumColumnB4(SFc9_flightControlSystemInstanceStruct
  *chartInstance, c9_emxArray_real_T *c9_x, int32_T c9_vstart)
{
  real_T c9_psum1;
  real_T c9_psum2;
  real_T c9_psum3;
  real_T c9_psum4;
  int32_T c9_b_k;
  int32_T c9_i2;
  int32_T c9_i3;
  int32_T c9_i4;
  int32_T c9_k;
  (void)chartInstance;
  c9_i2 = c9_vstart + 1023;
  c9_i3 = c9_vstart + 2047;
  c9_i4 = c9_vstart + 3071;
  c9_psum1 = c9_x->data[c9_vstart - 1];
  c9_psum2 = c9_x->data[c9_i2];
  c9_psum3 = c9_x->data[c9_i3];
  c9_psum4 = c9_x->data[c9_i4];
  for (c9_k = 0; c9_k < 1023; c9_k++) {
    c9_b_k = c9_k + 1;
    c9_psum1 += c9_x->data[(c9_vstart + c9_b_k) - 1];
    c9_psum2 += c9_x->data[c9_i2 + c9_b_k];
    c9_psum3 += c9_x->data[c9_i3 + c9_b_k];
    c9_psum4 += c9_x->data[c9_i4 + c9_b_k];
  }

  return (c9_psum1 + c9_psum2) + (c9_psum3 + c9_psum4);
}

static real_T c9_d_sumColumnB(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_real_T *c9_x, int32_T
  c9_vlen, int32_T c9_vstart)
{
  emlrtStack c9_b_st;
  emlrtStack c9_c_st;
  emlrtStack c9_st;
  real_T c9_b_y;
  real_T c9_c_y;
  real_T c9_d_y;
  int32_T c9_b;
  int32_T c9_b_b;
  int32_T c9_b_k;
  int32_T c9_b_vlen;
  int32_T c9_b_vstart;
  int32_T c9_c_b;
  int32_T c9_c_k;
  int32_T c9_c_vlen;
  int32_T c9_c_vstart;
  int32_T c9_d_a;
  int32_T c9_d_b;
  int32_T c9_d_k;
  int32_T c9_d_vstart;
  int32_T c9_e_k;
  int32_T c9_e_vstart;
  int32_T c9_f_k;
  int32_T c9_g_k;
  int32_T c9_h_k;
  int32_T c9_i;
  int32_T c9_i1;
  int32_T c9_i_k;
  int32_T c9_inb;
  int32_T c9_k;
  int32_T c9_lidx;
  int32_T c9_nfb;
  int32_T c9_nleft;
  boolean_T c9_b_overflow;
  boolean_T c9_overflow;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_b_st.prev = &c9_st;
  c9_b_st.tls = c9_st.tls;
  c9_c_st.prev = &c9_b_st;
  c9_c_st.tls = c9_b_st.tls;
  if (c9_vlen <= 1024) {
    c9_st.site = &c9_dd_emlrtRSI;
    c9_b_vlen = c9_vlen - 1;
    c9_b_vstart = c9_vstart - 1;
    c9_b_y = c9_x->data[c9_b_vstart];
    c9_i = c9_b_vlen;
    c9_b_st.site = &c9_hd_emlrtRSI;
    c9_b = c9_i;
    c9_b_b = c9_b;
    if (c9_b_b < 1) {
      c9_overflow = false;
    } else {
      c9_overflow = (c9_b_b > 2147483646);
    }

    if (c9_overflow) {
      c9_c_st.site = &c9_ib_emlrtRSI;
      c9_check_forloop_overflow_error(chartInstance, &c9_c_st);
    }

    for (c9_d_k = 0; c9_d_k < c9_i; c9_d_k++) {
      c9_f_k = c9_d_k;
      c9_b_y += c9_x->data[(c9_b_vstart + c9_f_k) + 1];
    }
  } else {
    c9_d_a = c9_vlen;
    c9_nfb = (int32_T)((uint32_T)c9_d_a >> 10);
    c9_inb = c9_nfb << 10;
    c9_st.site = &c9_ed_emlrtRSI;
    c9_c_vstart = c9_vstart - 1;
    c9_b_y = c9_x->data[c9_c_vstart];
    c9_b_st.site = &c9_hd_emlrtRSI;
    for (c9_k = 0; c9_k < 1023; c9_k++) {
      c9_c_k = c9_k;
      c9_b_y += c9_x->data[(c9_c_vstart + c9_c_k) + 1];
    }

    for (c9_b_k = 2; c9_b_k <= c9_nfb; c9_b_k++) {
      c9_st.site = &c9_fd_emlrtRSI;
      c9_d_vstart = (c9_vstart + ((c9_b_k - 1) << 10)) - 1;
      c9_c_y = c9_x->data[c9_d_vstart];
      c9_b_st.site = &c9_hd_emlrtRSI;
      for (c9_e_k = 0; c9_e_k < 1023; c9_e_k++) {
        c9_g_k = c9_e_k;
        c9_c_y += c9_x->data[(c9_d_vstart + c9_g_k) + 1];
      }

      c9_b_y += c9_c_y;
    }

    if (c9_vlen > c9_inb) {
      c9_nleft = c9_vlen - c9_inb;
      c9_lidx = c9_vstart + c9_inb;
      c9_st.site = &c9_gd_emlrtRSI;
      c9_c_vlen = c9_nleft - 1;
      c9_e_vstart = c9_lidx - 1;
      c9_d_y = c9_x->data[c9_e_vstart];
      c9_i1 = c9_c_vlen;
      c9_b_st.site = &c9_hd_emlrtRSI;
      c9_c_b = c9_i1;
      c9_d_b = c9_c_b;
      if (c9_d_b < 1) {
        c9_b_overflow = false;
      } else {
        c9_b_overflow = (c9_d_b > 2147483646);
      }

      if (c9_b_overflow) {
        c9_c_st.site = &c9_ib_emlrtRSI;
        c9_check_forloop_overflow_error(chartInstance, &c9_c_st);
      }

      for (c9_h_k = 0; c9_h_k < c9_i1; c9_h_k++) {
        c9_i_k = c9_h_k;
        c9_d_y += c9_x->data[(c9_e_vstart + c9_i_k) + 1];
      }

      c9_b_y += c9_d_y;
    }
  }

  return c9_b_y;
}

static void c9_nullAssignment(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_real_T *c9_x, int32_T
  c9_idx, c9_emxArray_real_T *c9_b_x)
{
  int32_T c9_i;
  int32_T c9_i1;
  int32_T c9_loop_ub;
  c9_i = c9_b_x->size[0] * c9_b_x->size[1];
  c9_b_x->size[0] = c9_x->size[0];
  c9_b_x->size[1] = 2;
  c9_emxEnsureCapacity_real_T(chartInstance, c9_sp, c9_b_x, c9_i,
    &c9_vd_emlrtRTEI);
  c9_loop_ub = c9_x->size[0] * c9_x->size[1] - 1;
  for (c9_i1 = 0; c9_i1 <= c9_loop_ub; c9_i1++) {
    c9_b_x->data[c9_i1] = c9_x->data[c9_i1];
  }

  c9_b_nullAssignment(chartInstance, c9_sp, c9_b_x, c9_idx);
}

static void c9_round(SFc9_flightControlSystemInstanceStruct *chartInstance,
                     const emlrtStack *c9_sp, c9_emxArray_real_T *c9_x,
                     c9_emxArray_real_T *c9_b_x)
{
  int32_T c9_i;
  int32_T c9_i1;
  int32_T c9_loop_ub;
  c9_i = c9_b_x->size[0];
  c9_b_x->size[0] = c9_x->size[0];
  c9_emxEnsureCapacity_real_T1(chartInstance, c9_sp, c9_b_x, c9_i,
    &c9_wd_emlrtRTEI);
  c9_loop_ub = c9_x->size[0] - 1;
  for (c9_i1 = 0; c9_i1 <= c9_loop_ub; c9_i1++) {
    c9_b_x->data[c9_i1] = c9_x->data[c9_i1];
  }

  c9_b_round(chartInstance, c9_sp, c9_b_x);
}

static void c9_sort(SFc9_flightControlSystemInstanceStruct *chartInstance, const
                    emlrtStack *c9_sp, c9_emxArray_real_T *c9_x,
                    c9_emxArray_real_T *c9_b_x, c9_emxArray_int32_T *c9_idx)
{
  int32_T c9_i;
  int32_T c9_i1;
  int32_T c9_loop_ub;
  c9_i = c9_b_x->size[0] * c9_b_x->size[1];
  c9_b_x->size[0] = c9_x->size[0];
  c9_b_x->size[1] = 1;
  c9_emxEnsureCapacity_real_T(chartInstance, c9_sp, c9_b_x, c9_i,
    &c9_xd_emlrtRTEI);
  c9_loop_ub = c9_x->size[0] * c9_x->size[1] - 1;
  for (c9_i1 = 0; c9_i1 <= c9_loop_ub; c9_i1++) {
    c9_b_x->data[c9_i1] = c9_x->data[c9_i1];
  }

  c9_b_sort(chartInstance, c9_sp, c9_b_x, c9_idx);
}

static void c9_merge_pow2_block(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_int32_T *c9_idx,
  c9_emxArray_real_T *c9_x, int32_T c9_offset, c9_emxArray_int32_T *c9_b_idx,
  c9_emxArray_real_T *c9_b_x)
{
  int32_T c9_b_loop_ub;
  int32_T c9_i;
  int32_T c9_i1;
  int32_T c9_i2;
  int32_T c9_i3;
  int32_T c9_loop_ub;
  c9_i = c9_b_idx->size[0] * c9_b_idx->size[1];
  c9_b_idx->size[0] = c9_idx->size[0];
  c9_b_idx->size[1] = 1;
  c9_emxEnsureCapacity_int32_T1(chartInstance, c9_sp, c9_b_idx, c9_i,
    &c9_yd_emlrtRTEI);
  c9_loop_ub = c9_idx->size[0] * c9_idx->size[1] - 1;
  for (c9_i1 = 0; c9_i1 <= c9_loop_ub; c9_i1++) {
    c9_b_idx->data[c9_i1] = c9_idx->data[c9_i1];
  }

  c9_i2 = c9_b_x->size[0] * c9_b_x->size[1];
  c9_b_x->size[0] = c9_x->size[0];
  c9_b_x->size[1] = 1;
  c9_emxEnsureCapacity_real_T(chartInstance, c9_sp, c9_b_x, c9_i2,
    &c9_yd_emlrtRTEI);
  c9_b_loop_ub = c9_x->size[0] * c9_x->size[1] - 1;
  for (c9_i3 = 0; c9_i3 <= c9_b_loop_ub; c9_i3++) {
    c9_b_x->data[c9_i3] = c9_x->data[c9_i3];
  }

  c9_b_merge_pow2_block(chartInstance, c9_sp, c9_b_idx, c9_b_x, c9_offset);
}

static void c9_merge_block(SFc9_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c9_sp, c9_emxArray_int32_T *c9_idx, c9_emxArray_real_T *c9_x,
  int32_T c9_offset, int32_T c9_n, int32_T c9_preSortLevel, c9_emxArray_int32_T *
  c9_iwork, c9_emxArray_real_T *c9_xwork, c9_emxArray_int32_T *c9_b_idx,
  c9_emxArray_real_T *c9_b_x, c9_emxArray_int32_T *c9_b_iwork,
  c9_emxArray_real_T *c9_b_xwork)
{
  int32_T c9_b_loop_ub;
  int32_T c9_c_loop_ub;
  int32_T c9_d_loop_ub;
  int32_T c9_i;
  int32_T c9_i1;
  int32_T c9_i2;
  int32_T c9_i3;
  int32_T c9_i4;
  int32_T c9_i5;
  int32_T c9_i6;
  int32_T c9_i7;
  int32_T c9_loop_ub;
  c9_i = c9_b_idx->size[0] * c9_b_idx->size[1];
  c9_b_idx->size[0] = c9_idx->size[0];
  c9_b_idx->size[1] = 1;
  c9_emxEnsureCapacity_int32_T1(chartInstance, c9_sp, c9_b_idx, c9_i,
    &c9_ae_emlrtRTEI);
  c9_loop_ub = c9_idx->size[0] * c9_idx->size[1] - 1;
  for (c9_i1 = 0; c9_i1 <= c9_loop_ub; c9_i1++) {
    c9_b_idx->data[c9_i1] = c9_idx->data[c9_i1];
  }

  c9_i2 = c9_b_x->size[0] * c9_b_x->size[1];
  c9_b_x->size[0] = c9_x->size[0];
  c9_b_x->size[1] = 1;
  c9_emxEnsureCapacity_real_T(chartInstance, c9_sp, c9_b_x, c9_i2,
    &c9_ae_emlrtRTEI);
  c9_b_loop_ub = c9_x->size[0] * c9_x->size[1] - 1;
  for (c9_i3 = 0; c9_i3 <= c9_b_loop_ub; c9_i3++) {
    c9_b_x->data[c9_i3] = c9_x->data[c9_i3];
  }

  c9_i4 = c9_b_iwork->size[0];
  c9_b_iwork->size[0] = c9_iwork->size[0];
  c9_emxEnsureCapacity_int32_T(chartInstance, c9_sp, c9_b_iwork, c9_i4,
    &c9_ae_emlrtRTEI);
  c9_c_loop_ub = c9_iwork->size[0] - 1;
  for (c9_i5 = 0; c9_i5 <= c9_c_loop_ub; c9_i5++) {
    c9_b_iwork->data[c9_i5] = c9_iwork->data[c9_i5];
  }

  c9_i6 = c9_b_xwork->size[0];
  c9_b_xwork->size[0] = c9_xwork->size[0];
  c9_emxEnsureCapacity_real_T1(chartInstance, c9_sp, c9_b_xwork, c9_i6,
    &c9_ae_emlrtRTEI);
  c9_d_loop_ub = c9_xwork->size[0] - 1;
  for (c9_i7 = 0; c9_i7 <= c9_d_loop_ub; c9_i7++) {
    c9_b_xwork->data[c9_i7] = c9_xwork->data[c9_i7];
  }

  c9_b_merge_block(chartInstance, c9_sp, c9_b_idx, c9_b_x, c9_offset, c9_n,
                   c9_preSortLevel, c9_b_iwork, c9_b_xwork);
}

static void c9_merge(SFc9_flightControlSystemInstanceStruct *chartInstance,
                     const emlrtStack *c9_sp, c9_emxArray_int32_T *c9_idx,
                     c9_emxArray_real_T *c9_x, int32_T c9_offset, int32_T c9_np,
                     int32_T c9_nq, c9_emxArray_int32_T *c9_iwork,
                     c9_emxArray_real_T *c9_xwork, c9_emxArray_int32_T *c9_b_idx,
                     c9_emxArray_real_T *c9_b_x, c9_emxArray_int32_T *c9_b_iwork,
                     c9_emxArray_real_T *c9_b_xwork)
{
  int32_T c9_b_loop_ub;
  int32_T c9_c_loop_ub;
  int32_T c9_d_loop_ub;
  int32_T c9_i;
  int32_T c9_i1;
  int32_T c9_i2;
  int32_T c9_i3;
  int32_T c9_i4;
  int32_T c9_i5;
  int32_T c9_i6;
  int32_T c9_i7;
  int32_T c9_loop_ub;
  c9_i = c9_b_idx->size[0] * c9_b_idx->size[1];
  c9_b_idx->size[0] = c9_idx->size[0];
  c9_b_idx->size[1] = 1;
  c9_emxEnsureCapacity_int32_T1(chartInstance, c9_sp, c9_b_idx, c9_i,
    &c9_be_emlrtRTEI);
  c9_loop_ub = c9_idx->size[0] * c9_idx->size[1] - 1;
  for (c9_i1 = 0; c9_i1 <= c9_loop_ub; c9_i1++) {
    c9_b_idx->data[c9_i1] = c9_idx->data[c9_i1];
  }

  c9_i2 = c9_b_x->size[0] * c9_b_x->size[1];
  c9_b_x->size[0] = c9_x->size[0];
  c9_b_x->size[1] = 1;
  c9_emxEnsureCapacity_real_T(chartInstance, c9_sp, c9_b_x, c9_i2,
    &c9_be_emlrtRTEI);
  c9_b_loop_ub = c9_x->size[0] * c9_x->size[1] - 1;
  for (c9_i3 = 0; c9_i3 <= c9_b_loop_ub; c9_i3++) {
    c9_b_x->data[c9_i3] = c9_x->data[c9_i3];
  }

  c9_i4 = c9_b_iwork->size[0];
  c9_b_iwork->size[0] = c9_iwork->size[0];
  c9_emxEnsureCapacity_int32_T(chartInstance, c9_sp, c9_b_iwork, c9_i4,
    &c9_be_emlrtRTEI);
  c9_c_loop_ub = c9_iwork->size[0] - 1;
  for (c9_i5 = 0; c9_i5 <= c9_c_loop_ub; c9_i5++) {
    c9_b_iwork->data[c9_i5] = c9_iwork->data[c9_i5];
  }

  c9_i6 = c9_b_xwork->size[0];
  c9_b_xwork->size[0] = c9_xwork->size[0];
  c9_emxEnsureCapacity_real_T1(chartInstance, c9_sp, c9_b_xwork, c9_i6,
    &c9_be_emlrtRTEI);
  c9_d_loop_ub = c9_xwork->size[0] - 1;
  for (c9_i7 = 0; c9_i7 <= c9_d_loop_ub; c9_i7++) {
    c9_b_xwork->data[c9_i7] = c9_xwork->data[c9_i7];
  }

  c9_b_merge(chartInstance, c9_sp, c9_b_idx, c9_b_x, c9_offset, c9_np, c9_nq,
             c9_b_iwork, c9_b_xwork);
}

static void c9_b_eml_find(SFc9_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c9_sp, c9_emxArray_boolean_T *c9_x, c9_emxArray_int32_T
  *c9_i)
{
  emlrtStack c9_b_st;
  emlrtStack c9_c_st;
  emlrtStack c9_st;
  const mxArray *c9_b_y = NULL;
  const mxArray *c9_c_y = NULL;
  int32_T c9_b_iv[2];
  int32_T c9_b;
  int32_T c9_b_b;
  int32_T c9_b_i;
  int32_T c9_b_ii;
  int32_T c9_b_nx;
  int32_T c9_i1;
  int32_T c9_i2;
  int32_T c9_idx;
  int32_T c9_ii;
  int32_T c9_k;
  int32_T c9_nx;
  boolean_T c9_c_b;
  boolean_T c9_exitg1;
  boolean_T c9_overflow;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_b_st.prev = &c9_st;
  c9_b_st.tls = c9_st.tls;
  c9_c_st.prev = &c9_b_st;
  c9_c_st.tls = c9_b_st.tls;
  c9_nx = c9_x->size[0] * c9_x->size[1];
  c9_st.site = &c9_kf_emlrtRSI;
  c9_k = c9_nx;
  c9_b_nx = c9_nx;
  c9_idx = 0;
  c9_b_i = c9_i->size[0];
  c9_i->size[0] = c9_k;
  c9_emxEnsureCapacity_int32_T(chartInstance, &c9_st, c9_i, c9_b_i,
    &c9_ce_emlrtRTEI);
  c9_b_st.site = &c9_lf_emlrtRSI;
  c9_b = c9_b_nx;
  c9_b_b = c9_b;
  if (c9_b_b < 1) {
    c9_overflow = false;
  } else {
    c9_overflow = (c9_b_b > 2147483646);
  }

  if (c9_overflow) {
    c9_c_st.site = &c9_ib_emlrtRSI;
    c9_check_forloop_overflow_error(chartInstance, &c9_c_st);
  }

  c9_ii = 1;
  c9_exitg1 = false;
  while ((!c9_exitg1) && (c9_ii - 1 <= c9_b_nx - 1)) {
    c9_b_ii = c9_ii;
    if (c9_x->data[c9_b_ii - 1]) {
      c9_idx++;
      c9_i->data[c9_idx - 1] = c9_b_ii;
      if (c9_idx >= c9_k) {
        c9_exitg1 = true;
      } else {
        c9_ii++;
      }
    } else {
      c9_ii++;
    }
  }

  if (!(c9_idx <= c9_k)) {
    c9_b_y = NULL;
    sf_mex_assign(&c9_b_y, sf_mex_create("y", c9_cv1, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c9_c_y = NULL;
    sf_mex_assign(&c9_c_y, sf_mex_create("y", c9_cv1, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    sf_mex_call(&c9_st, &c9_q_emlrtMCI, "error", 0U, 2U, 14, c9_b_y, 14,
                sf_mex_call(&c9_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c9_st, NULL, "message", 1U, 1U, 14, c9_c_y)));
  }

  if (c9_k == 1) {
    if (c9_idx == 0) {
      c9_i->size[0] = 0;
    }
  } else {
    c9_c_b = (c9_idx < 1);
    if (c9_c_b) {
      c9_i1 = 0;
    } else {
      c9_i1 = c9_idx;
    }

    c9_b_iv[0] = 1;
    c9_b_iv[1] = c9_i1;
    c9_b_st.site = &c9_mf_emlrtRSI;
    c9_indexShapeCheck(chartInstance, &c9_b_st, c9_i->size[0], c9_b_iv);
    c9_i2 = c9_i->size[0];
    c9_i->size[0] = c9_i1;
    c9_emxEnsureCapacity_int32_T(chartInstance, &c9_st, c9_i, c9_i2,
      &c9_de_emlrtRTEI);
  }
}

static void c9_chradiiphcode(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_real_T *c9_varargin_1,
  creal_T c9_b_varargin_2[19200], c9_emxArray_real_T *c9_r_estimated)
{
  static char_T c9_b_cv1[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'P', 'o', 's', 'i', 't', 'i', 'v', 'e' };

  static char_T c9_cv4[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T c9_cv7[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'i', 'n', 'c', 'o', 'r', 'r', 'e', 'c',
    't', 'N', 'u', 'm', 'c', 'o', 'l', 's' };

  static char_T c9_cv9[38] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'i', 'm', 'f',
    'i', 'n', 'd', 'c', 'i', 'r', 'c', 'l', 'e', 's', ':', 'o', 'u', 't', 'O',
    'f', 'B', 'o', 'u', 'n', 'd', 'C', 'e', 'n', 't', 'e', 'r', 's' };

  static char_T c9_b_cv[37] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'h', 'r',
    'a', 'd', 'i', 'i', 'p', 'h', 'c', 'o', 'd', 'e', ':', 'e', 'x', 'p', 'e',
    'c', 't', 'e', 'd', 'P', 'o', 's', 'i', 't', 'i', 'v', 'e' };

  static char_T c9_cv3[37] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'h', 'r',
    'a', 'd', 'i', 'i', 'p', 'h', 'c', 'o', 'd', 'e', ':', 'e', 'x', 'p', 'e',
    'c', 't', 'e', 'd', 'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T c9_cv5[37] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'h', 'r',
    'a', 'd', 'i', 'i', 'p', 'h', 'c', 'o', 'd', 'e', ':', 'i', 'n', 'c', 'o',
    'r', 'r', 'e', 'c', 't', 'N', 'u', 'm', 'c', 'o', 'l', 's' };

  static char_T c9_cv2[24] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm', 'b',
    'e', 'r', ' ', '1', ',', ' ', 'c', 'e', 'n', 't', 'e', 'r', 's', ',' };

  static char_T c9_cv6[24] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm', 'b',
    'e', 'r', ' ', '1', ',', ' ', 'c', 'e', 'n', 't', 'e', 'r', 's', ',' };

  static char_T c9_cv8[24] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm', 'b',
    'e', 'r', ' ', '1', ',', ' ', 'c', 'e', 'n', 't', 'e', 'r', 's', ',' };

  c9_emxArray_boolean_T *c9_b_varargin_1;
  c9_emxArray_boolean_T *c9_c_varargin_1;
  c9_emxArray_creal_T *c9_b_x;
  c9_emxArray_int32_T *c9_r;
  c9_emxArray_real_T *c9_c_varargin_2;
  c9_emxArray_real_T *c9_ndx;
  emlrtStack c9_b_st;
  emlrtStack c9_c_st;
  emlrtStack c9_d_st;
  emlrtStack c9_st;
  const mxArray *c9_b_y = NULL;
  const mxArray *c9_c_y = NULL;
  const mxArray *c9_d_y = NULL;
  const mxArray *c9_e_y = NULL;
  const mxArray *c9_f_y = NULL;
  const mxArray *c9_g_y = NULL;
  const mxArray *c9_h_y = NULL;
  const mxArray *c9_i_y = NULL;
  const mxArray *c9_j_y = NULL;
  const mxArray *c9_k_y = NULL;
  const mxArray *c9_l_y = NULL;
  const mxArray *c9_m_y = NULL;
  creal_T c9_c_x;
  real_T c9_dv[2];
  real_T c9_b_k;
  real_T c9_d;
  real_T c9_d_x;
  real_T c9_e_x;
  real_T c9_f_x;
  real_T c9_n_y;
  real_T c9_o_y;
  real_T c9_u;
  real_T c9_x;
  int32_T c9_b_b;
  int32_T c9_b_loop_ub;
  int32_T c9_b_nx;
  int32_T c9_c_b;
  int32_T c9_c_k;
  int32_T c9_c_loop_ub;
  int32_T c9_d_b;
  int32_T c9_d_k;
  int32_T c9_d_loop_ub;
  int32_T c9_e_b;
  int32_T c9_e_k;
  int32_T c9_e_loop_ub;
  int32_T c9_f_k;
  int32_T c9_f_loop_ub;
  int32_T c9_g_loop_ub;
  int32_T c9_h_loop_ub;
  int32_T c9_i;
  int32_T c9_i1;
  int32_T c9_i10;
  int32_T c9_i11;
  int32_T c9_i12;
  int32_T c9_i13;
  int32_T c9_i14;
  int32_T c9_i15;
  int32_T c9_i16;
  int32_T c9_i17;
  int32_T c9_i18;
  int32_T c9_i19;
  int32_T c9_i2;
  int32_T c9_i20;
  int32_T c9_i21;
  int32_T c9_i22;
  int32_T c9_i23;
  int32_T c9_i24;
  int32_T c9_i25;
  int32_T c9_i26;
  int32_T c9_i3;
  int32_T c9_i4;
  int32_T c9_i5;
  int32_T c9_i6;
  int32_T c9_i7;
  int32_T c9_i8;
  int32_T c9_i9;
  int32_T c9_i_loop_ub;
  int32_T c9_k;
  int32_T c9_loop_ub;
  int32_T c9_nx;
  boolean_T c9_b;
  boolean_T c9_b1;
  boolean_T c9_b2;
  boolean_T c9_b3;
  boolean_T c9_b_overflow;
  boolean_T c9_b_p;
  boolean_T c9_exitg1;
  boolean_T c9_overflow;
  boolean_T c9_p;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_b_st.prev = &c9_st;
  c9_b_st.tls = c9_st.tls;
  c9_c_st.prev = &c9_b_st;
  c9_c_st.tls = c9_b_st.tls;
  c9_d_st.prev = &c9_c_st;
  c9_d_st.tls = c9_c_st.tls;
  c9_st.site = &c9_of_emlrtRSI;
  c9_b_st.site = &c9_rf_emlrtRSI;
  c9_c_st.site = &c9_tf_emlrtRSI;
  c9_d_st.site = &c9_yb_emlrtRSI;
  c9_p = true;
  c9_d = (real_T)(c9_varargin_1->size[0] * c9_varargin_1->size[1]);
  c9_i = (int32_T)c9_d - 1;
  c9_k = 0;
  c9_exitg1 = false;
  while ((!c9_exitg1) && (c9_k <= c9_i)) {
    c9_b_k = (real_T)c9_k + 1.0;
    c9_x = c9_varargin_1->data[(int32_T)c9_b_k - 1];
    c9_b_p = !(c9_x <= 0.0);
    if (c9_b_p) {
      c9_k++;
    } else {
      c9_p = false;
      c9_exitg1 = true;
    }
  }

  if (c9_p) {
    c9_b = true;
  } else {
    c9_b = false;
  }

  if (!c9_b) {
    c9_b_y = NULL;
    sf_mex_assign(&c9_b_y, sf_mex_create("y", c9_b_cv, 10, 0U, 1U, 0U, 2, 1, 37),
                  false);
    c9_c_y = NULL;
    sf_mex_assign(&c9_c_y, sf_mex_create("y", c9_b_cv1, 10, 0U, 1U, 0U, 2, 1, 48),
                  false);
    c9_d_y = NULL;
    sf_mex_assign(&c9_d_y, sf_mex_create("y", c9_cv2, 10, 0U, 1U, 0U, 2, 1, 24),
                  false);
    sf_mex_call(&c9_d_st, &c9_r_emlrtMCI, "error", 0U, 2U, 14, c9_b_y, 14,
                sf_mex_call(&c9_d_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c9_d_st, NULL, "message", 1U, 2U, 14, c9_c_y, 14, c9_d_y)));
  }

  c9_d_st.site = &c9_yb_emlrtRSI;
  c9_b1 = (c9_varargin_1->size[0] == 0);
  c9_b2 = (c9_varargin_1->size[1] == 0);
  if (!((!c9_b1) && (!c9_b2))) {
    c9_e_y = NULL;
    sf_mex_assign(&c9_e_y, sf_mex_create("y", c9_cv3, 10, 0U, 1U, 0U, 2, 1, 37),
                  false);
    c9_f_y = NULL;
    sf_mex_assign(&c9_f_y, sf_mex_create("y", c9_cv4, 10, 0U, 1U, 0U, 2, 1, 48),
                  false);
    c9_h_y = NULL;
    sf_mex_assign(&c9_h_y, sf_mex_create("y", c9_cv6, 10, 0U, 1U, 0U, 2, 1, 24),
                  false);
    sf_mex_call(&c9_d_st, &c9_s_emlrtMCI, "error", 0U, 2U, 14, c9_e_y, 14,
                sf_mex_call(&c9_d_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c9_d_st, NULL, "message", 1U, 2U, 14, c9_f_y, 14, c9_h_y)));
  }

  c9_d_st.site = &c9_yb_emlrtRSI;
  if (!((real_T)c9_varargin_1->size[1] == 2.0)) {
    c9_g_y = NULL;
    sf_mex_assign(&c9_g_y, sf_mex_create("y", c9_cv5, 10, 0U, 1U, 0U, 2, 1, 37),
                  false);
    c9_i_y = NULL;
    sf_mex_assign(&c9_i_y, sf_mex_create("y", c9_cv7, 10, 0U, 1U, 0U, 2, 1, 48),
                  false);
    c9_j_y = NULL;
    sf_mex_assign(&c9_j_y, sf_mex_create("y", c9_cv8, 10, 0U, 1U, 0U, 2, 1, 24),
                  false);
    c9_u = 2.0;
    c9_k_y = NULL;
    sf_mex_assign(&c9_k_y, sf_mex_create("y", &c9_u, 0, 0U, 0U, 0U, 0), false);
    sf_mex_call(&c9_d_st, &c9_t_emlrtMCI, "error", 0U, 2U, 14, c9_g_y, 14,
                sf_mex_call(&c9_d_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c9_d_st, NULL, "message", 1U, 3U, 14, c9_i_y, 14, c9_j_y, 14, c9_k_y)));
  }

  c9_b_st.site = &c9_sf_emlrtRSI;
  c9_i1 = c9_varargin_1->size[1];
  c9_i2 = 1;
  if ((c9_i2 < 1) || (c9_i2 > c9_i1)) {
    emlrtDynamicBoundsCheckR2012b(c9_i2, 1, c9_i1, &c9_re_emlrtBCI, &c9_b_st);
  }

  c9_emxInit_boolean_T1(chartInstance, &c9_b_st, &c9_b_varargin_1, 1,
                        &c9_ee_emlrtRTEI);
  c9_i3 = c9_b_varargin_1->size[0];
  c9_b_varargin_1->size[0] = c9_varargin_1->size[0];
  c9_emxEnsureCapacity_boolean_T1(chartInstance, &c9_b_st, c9_b_varargin_1,
    c9_i3, &c9_ee_emlrtRTEI);
  c9_loop_ub = c9_varargin_1->size[0] - 1;
  for (c9_i4 = 0; c9_i4 <= c9_loop_ub; c9_i4++) {
    c9_b_varargin_1->data[c9_i4] = (c9_varargin_1->data[c9_i4] <= 160.0);
  }

  c9_emxInit_boolean_T1(chartInstance, &c9_b_st, &c9_c_varargin_1, 1,
                        &c9_fe_emlrtRTEI);
  c9_c_st.site = &c9_uf_emlrtRSI;
  if (c9_all(chartInstance, &c9_c_st, c9_b_varargin_1)) {
    c9_i5 = c9_varargin_1->size[1];
    c9_i6 = 2;
    if ((c9_i6 < 1) || (c9_i6 > c9_i5)) {
      emlrtDynamicBoundsCheckR2012b(c9_i6, 1, c9_i5, &c9_se_emlrtBCI, &c9_b_st);
    }

    c9_i7 = c9_c_varargin_1->size[0];
    c9_c_varargin_1->size[0] = c9_varargin_1->size[0];
    c9_emxEnsureCapacity_boolean_T1(chartInstance, &c9_b_st, c9_c_varargin_1,
      c9_i7, &c9_fe_emlrtRTEI);
    c9_b_loop_ub = c9_varargin_1->size[0] - 1;
    for (c9_i10 = 0; c9_i10 <= c9_b_loop_ub; c9_i10++) {
      c9_c_varargin_1->data[c9_i10] = (c9_varargin_1->data[c9_i10 +
        c9_varargin_1->size[0]] <= 120.0);
    }

    c9_c_st.site = &c9_vf_emlrtRSI;
    if (c9_all(chartInstance, &c9_c_st, c9_c_varargin_1)) {
      c9_b3 = true;
    } else {
      c9_b3 = false;
    }
  } else {
    c9_b3 = false;
  }

  c9_emxFree_boolean_T(chartInstance, &c9_c_varargin_1);
  c9_emxFree_boolean_T(chartInstance, &c9_b_varargin_1);
  if (!c9_b3) {
    c9_l_y = NULL;
    sf_mex_assign(&c9_l_y, sf_mex_create("y", c9_cv9, 10, 0U, 1U, 0U, 2, 1, 38),
                  false);
    c9_m_y = NULL;
    sf_mex_assign(&c9_m_y, sf_mex_create("y", c9_cv9, 10, 0U, 1U, 0U, 2, 1, 38),
                  false);
    sf_mex_call(&c9_b_st, &c9_u_emlrtMCI, "error", 0U, 2U, 14, c9_l_y, 14,
                sf_mex_call(&c9_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c9_b_st, NULL, "message", 1U, 1U, 14, c9_m_y)));
  }

  c9_i8 = c9_varargin_1->size[1];
  c9_i9 = 2;
  if ((c9_i9 < 1) || (c9_i9 > c9_i8)) {
    emlrtDynamicBoundsCheckR2012b(c9_i9, 1, c9_i8, &c9_pe_emlrtBCI,
      (emlrtConstCTX)c9_sp);
  }

  c9_i11 = c9_varargin_1->size[1];
  c9_i12 = 1;
  if ((c9_i12 < 1) || (c9_i12 > c9_i11)) {
    emlrtDynamicBoundsCheckR2012b(c9_i12, 1, c9_i11, &c9_qe_emlrtBCI,
      (emlrtConstCTX)c9_sp);
  }

  c9_emxInit_real_T1(chartInstance, c9_sp, &c9_ndx, 1, &c9_ke_emlrtRTEI);
  c9_st.site = &c9_pf_emlrtRSI;
  c9_i13 = c9_ndx->size[0];
  c9_ndx->size[0] = c9_varargin_1->size[0];
  c9_b_st.site = &c9_pf_emlrtRSI;
  c9_emxEnsureCapacity_real_T1(chartInstance, &c9_b_st, c9_ndx, c9_i13,
    &c9_ge_emlrtRTEI);
  c9_c_loop_ub = c9_varargin_1->size[0] - 1;
  for (c9_i14 = 0; c9_i14 <= c9_c_loop_ub; c9_i14++) {
    c9_ndx->data[c9_i14] = c9_varargin_1->data[c9_i14 + c9_varargin_1->size[0]];
  }

  c9_b_st.site = &c9_pf_emlrtRSI;
  c9_b_round(chartInstance, &c9_b_st, c9_ndx);
  c9_emxInit_real_T1(chartInstance, &c9_st, &c9_c_varargin_2, 1,
                     &c9_he_emlrtRTEI);
  c9_i15 = c9_c_varargin_2->size[0];
  c9_c_varargin_2->size[0] = c9_varargin_1->size[0];
  c9_b_st.site = &c9_pf_emlrtRSI;
  c9_emxEnsureCapacity_real_T1(chartInstance, &c9_b_st, c9_c_varargin_2, c9_i15,
    &c9_he_emlrtRTEI);
  c9_d_loop_ub = c9_varargin_1->size[0] - 1;
  for (c9_i16 = 0; c9_i16 <= c9_d_loop_ub; c9_i16++) {
    c9_c_varargin_2->data[c9_i16] = c9_varargin_1->data[c9_i16];
  }

  c9_b_st.site = &c9_pf_emlrtRSI;
  c9_b_round(chartInstance, &c9_b_st, c9_c_varargin_2);
  c9_emxInit_int32_T(chartInstance, &c9_st, &c9_r, 1, &c9_pb_emlrtRTEI);
  c9_b_st.site = &c9_eb_emlrtRSI;
  c9_eml_sub2ind(chartInstance, &c9_b_st, c9_ndx, c9_c_varargin_2, c9_r);
  c9_emxFree_real_T(chartInstance, &c9_c_varargin_2);
  c9_i17 = c9_ndx->size[0];
  c9_ndx->size[0] = c9_r->size[0];
  c9_emxEnsureCapacity_real_T1(chartInstance, &c9_st, c9_ndx, c9_i17,
    &c9_n_emlrtRTEI);
  c9_e_loop_ub = c9_r->size[0] - 1;
  for (c9_i18 = 0; c9_i18 <= c9_e_loop_ub; c9_i18++) {
    c9_ndx->data[c9_i18] = (real_T)c9_r->data[c9_i18];
  }

  c9_emxFree_int32_T(chartInstance, &c9_r);
  c9_st.site = &c9_pf_emlrtRSI;
  c9_emxInit_creal_T1(chartInstance, &c9_st, &c9_b_x, 1, &c9_ie_emlrtRTEI);
  c9_i19 = c9_b_x->size[0];
  c9_b_x->size[0] = c9_ndx->size[0];
  c9_b_st.site = &c9_pf_emlrtRSI;
  c9_emxEnsureCapacity_creal_T1(chartInstance, &c9_b_st, c9_b_x, c9_i19,
    &c9_ie_emlrtRTEI);
  c9_f_loop_ub = c9_ndx->size[0] - 1;
  for (c9_i20 = 0; c9_i20 <= c9_f_loop_ub; c9_i20++) {
    c9_i21 = (int32_T)c9_ndx->data[c9_i20];
    if ((c9_i21 < 1) || (c9_i21 > 19200)) {
      emlrtDynamicBoundsCheckR2012b(c9_i21, 1, 19200, &c9_te_emlrtBCI, &c9_st);
    }

    c9_b_x->data[c9_i20].re = c9_b_varargin_2[c9_i21 - 1].re;
    c9_i23 = (int32_T)c9_ndx->data[c9_i20];
    if ((c9_i23 < 1) || (c9_i23 > 19200)) {
      emlrtDynamicBoundsCheckR2012b(c9_i23, 1, 19200, &c9_te_emlrtBCI, &c9_st);
    }

    c9_b_x->data[c9_i20].im = c9_b_varargin_2[c9_i23 - 1].im;
  }

  c9_emxFree_real_T(chartInstance, &c9_ndx);
  c9_b_st.site = &c9_yf_emlrtRSI;
  c9_nx = c9_b_x->size[0];
  c9_dv[0] = (real_T)c9_b_x->size[0];
  c9_i22 = c9_r_estimated->size[0];
  c9_r_estimated->size[0] = (int32_T)c9_dv[0];
  c9_emxEnsureCapacity_real_T1(chartInstance, &c9_b_st, c9_r_estimated, c9_i22,
    &c9_je_emlrtRTEI);
  c9_c_st.site = &c9_ag_emlrtRSI;
  c9_b_b = c9_nx;
  c9_c_b = c9_b_b;
  if (c9_c_b < 1) {
    c9_overflow = false;
  } else {
    c9_overflow = (c9_c_b > 2147483646);
  }

  if (c9_overflow) {
    c9_d_st.site = &c9_ib_emlrtRSI;
    c9_check_forloop_overflow_error(chartInstance, &c9_d_st);
  }

  for (c9_c_k = 0; c9_c_k < c9_nx; c9_c_k++) {
    c9_d_k = c9_c_k;
    c9_c_x = c9_b_x->data[c9_d_k];
    c9_n_y = c9_c_x.im;
    c9_d_x = c9_c_x.re;
    c9_o_y = muDoubleScalarAtan2(c9_n_y, c9_d_x);
    c9_r_estimated->data[c9_d_k] = c9_o_y;
  }

  c9_emxFree_creal_T(chartInstance, &c9_b_x);
  c9_g_loop_ub = c9_r_estimated->size[0] - 1;
  for (c9_i24 = 0; c9_i24 <= c9_g_loop_ub; c9_i24++) {
    c9_r_estimated->data[c9_i24] = (c9_r_estimated->data[c9_i24] +
      3.1415926535897931) / 6.2831853071795862;
  }

  c9_h_loop_ub = c9_r_estimated->size[0] - 1;
  for (c9_i25 = 0; c9_i25 <= c9_h_loop_ub; c9_i25++) {
    c9_r_estimated->data[c9_i25] *= 0.6931471805599454;
  }

  c9_st.site = &c9_qf_emlrtRSI;
  c9_i_loop_ub = c9_r_estimated->size[0] - 1;
  for (c9_i26 = 0; c9_i26 <= c9_i_loop_ub; c9_i26++) {
    c9_r_estimated->data[c9_i26] += 2.70805020110221;
  }

  c9_b_st.site = &c9_bg_emlrtRSI;
  c9_b_nx = c9_r_estimated->size[0];
  c9_c_st.site = &c9_je_emlrtRSI;
  c9_d_b = c9_b_nx;
  c9_e_b = c9_d_b;
  if (c9_e_b < 1) {
    c9_b_overflow = false;
  } else {
    c9_b_overflow = (c9_e_b > 2147483646);
  }

  if (c9_b_overflow) {
    c9_d_st.site = &c9_ib_emlrtRSI;
    c9_check_forloop_overflow_error(chartInstance, &c9_d_st);
  }

  for (c9_e_k = 0; c9_e_k < c9_b_nx; c9_e_k++) {
    c9_f_k = c9_e_k;
    c9_e_x = c9_r_estimated->data[c9_f_k];
    c9_f_x = c9_e_x;
    c9_f_x = muDoubleScalarExp(c9_f_x);
    c9_r_estimated->data[c9_f_k] = c9_f_x;
  }
}

static boolean_T c9_all(SFc9_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c9_sp, c9_emxArray_boolean_T *c9_x)
{
  static char_T c9_b_cv[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 'l', 'l', '_', 'o', 'r', '_',
    'a', 'n', 'y', '_', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
    'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  emlrtStack c9_b_st;
  emlrtStack c9_c_st;
  emlrtStack c9_st;
  const mxArray *c9_c_y = NULL;
  const mxArray *c9_d_y = NULL;
  real_T c9_d_a;
  real_T c9_vlen;
  int32_T c9_b_b;
  int32_T c9_c;
  int32_T c9_c_b;
  int32_T c9_d_b;
  int32_T c9_e_a;
  int32_T c9_f_a;
  int32_T c9_i2;
  int32_T c9_ix;
  int32_T c9_vspread;
  boolean_T c9_b;
  boolean_T c9_b_y;
  boolean_T c9_exitg1;
  boolean_T c9_overflow;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_b_st.prev = &c9_st;
  c9_b_st.tls = c9_st.tls;
  c9_c_st.prev = &c9_b_st;
  c9_c_st.tls = c9_b_st.tls;
  c9_st.site = &c9_wf_emlrtRSI;
  if ((c9_x->size[0] == 1) || ((real_T)c9_x->size[0] != 1.0)) {
    c9_b = true;
  } else {
    c9_b = false;
  }

  if (!c9_b) {
    c9_c_y = NULL;
    sf_mex_assign(&c9_c_y, sf_mex_create("y", c9_b_cv, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c9_d_y = NULL;
    sf_mex_assign(&c9_d_y, sf_mex_create("y", c9_b_cv, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    sf_mex_call(&c9_st, &c9_v_emlrtMCI, "error", 0U, 2U, 14, c9_c_y, 14,
                sf_mex_call(&c9_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c9_st, NULL, "message", 1U, 1U, 14, c9_d_y)));
  }

  c9_b_y = true;
  c9_vlen = (real_T)c9_x->size[0];
  c9_d_a = c9_vlen;
  c9_c = (int32_T)c9_d_a;
  c9_e_a = c9_c - 1;
  c9_vspread = c9_e_a;
  c9_b_b = c9_vspread;
  c9_i2 = c9_b_b;
  c9_f_a = c9_i2 + 1;
  c9_i2 = c9_f_a;
  c9_b_st.site = &c9_xf_emlrtRSI;
  c9_c_b = c9_i2;
  c9_d_b = c9_c_b;
  if (c9_d_b < 1) {
    c9_overflow = false;
  } else {
    c9_overflow = (c9_d_b > 2147483646);
  }

  if (c9_overflow) {
    c9_c_st.site = &c9_ib_emlrtRSI;
    c9_check_forloop_overflow_error(chartInstance, &c9_c_st);
  }

  c9_ix = 0;
  c9_exitg1 = false;
  while ((!c9_exitg1) && (c9_ix + 1 <= c9_i2)) {
    if (!c9_x->data[c9_ix]) {
      c9_b_y = false;
      c9_exitg1 = true;
    } else {
      c9_ix++;
    }
  }

  return c9_b_y;
}

static void c9_b_chcenters(SFc9_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c9_sp, creal_T c9_varargin_1[19200], c9_emxArray_real_T
  *c9_centers, c9_emxArray_real_T *c9_metric)
{
  c9_emxArray_int32_T *c9_iidx;
  c9_emxArray_int32_T *c9_r1;
  c9_emxArray_real_T *c9_b_varargin_2;
  c9_emxArray_real_T *c9_c_centers;
  c9_emxArray_real_T *c9_d_x;
  c9_emxArray_real_T *c9_ndx;
  c9_emxArray_real_T *c9_r;
  c9_emxArray_real_T *c9_sortIdx;
  c9_emxArray_sOA5t73y81YtFHGIDxk0fK *c9_b_s;
  emlrtStack c9_b_st;
  emlrtStack c9_c_st;
  emlrtStack c9_st;
  creal_T c9_x;
  real_T c9_imSizeT[2];
  real_T c9_b;
  real_T c9_b_idx;
  real_T c9_b_x;
  real_T c9_b_y;
  real_T c9_c_accumMatrixRe;
  real_T c9_c_x;
  real_T c9_d;
  real_T c9_d1;
  real_T c9_d_a;
  real_T c9_d_k;
  real_T c9_x1;
  real_T c9_x2;
  int32_T c9_b_iv[2];
  int32_T c9_iv1[2];
  int32_T c9_tmp_data[2];
  int32_T c9_b_sortIdx[1];
  int32_T c9_b_centers;
  int32_T c9_b_k;
  int32_T c9_b_loop_ub;
  int32_T c9_c_idx;
  int32_T c9_c_k;
  int32_T c9_c_loop_ub;
  int32_T c9_d_loop_ub;
  int32_T c9_e_loop_ub;
  int32_T c9_f_loop_ub;
  int32_T c9_g_loop_ub;
  int32_T c9_h_loop_ub;
  int32_T c9_i;
  int32_T c9_i1;
  int32_T c9_i10;
  int32_T c9_i11;
  int32_T c9_i12;
  int32_T c9_i13;
  int32_T c9_i14;
  int32_T c9_i15;
  int32_T c9_i16;
  int32_T c9_i17;
  int32_T c9_i18;
  int32_T c9_i19;
  int32_T c9_i2;
  int32_T c9_i20;
  int32_T c9_i21;
  int32_T c9_i22;
  int32_T c9_i23;
  int32_T c9_i24;
  int32_T c9_i25;
  int32_T c9_i26;
  int32_T c9_i27;
  int32_T c9_i28;
  int32_T c9_i29;
  int32_T c9_i3;
  int32_T c9_i30;
  int32_T c9_i31;
  int32_T c9_i32;
  int32_T c9_i33;
  int32_T c9_i34;
  int32_T c9_i35;
  int32_T c9_i36;
  int32_T c9_i37;
  int32_T c9_i38;
  int32_T c9_i39;
  int32_T c9_i4;
  int32_T c9_i40;
  int32_T c9_i41;
  int32_T c9_i42;
  int32_T c9_i43;
  int32_T c9_i44;
  int32_T c9_i45;
  int32_T c9_i46;
  int32_T c9_i47;
  int32_T c9_i48;
  int32_T c9_i49;
  int32_T c9_i5;
  int32_T c9_i6;
  int32_T c9_i7;
  int32_T c9_i8;
  int32_T c9_i9;
  int32_T c9_i_loop_ub;
  int32_T c9_idx;
  int32_T c9_j_loop_ub;
  int32_T c9_k;
  int32_T c9_k_loop_ub;
  int32_T c9_l_loop_ub;
  int32_T c9_loop_ub;
  boolean_T c9_bw[19200];
  boolean_T c9_x_data[19200];
  boolean_T c9_b_b;
  boolean_T c9_c_b;
  boolean_T c9_d_b;
  boolean_T c9_exitg1;
  boolean_T c9_flat;
  boolean_T c9_guard1 = false;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_b_st.prev = &c9_st;
  c9_b_st.tls = c9_st.tls;
  c9_c_st.prev = &c9_b_st;
  c9_c_st.tls = c9_b_st.tls;
  c9_centers->size[0] = 0;
  c9_centers->size[1] = 0;
  c9_metric->size[0] = 0;
  c9_metric->size[1] = 0;
  for (c9_k = 0; c9_k < 19200; c9_k++) {
    c9_b_k = c9_k;
    c9_x = c9_varargin_1[c9_b_k];
    c9_x1 = c9_x.re;
    c9_x2 = c9_x.im;
    c9_d_a = c9_x1;
    c9_b = c9_x2;
    c9_b_y = muDoubleScalarHypot(c9_d_a, c9_b);
    chartInstance->c9_b_accumMatrixRe[c9_b_k] = c9_b_y;
  }

  c9_c_accumMatrixRe = chartInstance->c9_b_accumMatrixRe[0];
  for (c9_i = 0; c9_i < 19200; c9_i++) {
    c9_bw[c9_i] = (chartInstance->c9_b_accumMatrixRe[c9_i] == c9_c_accumMatrixRe);
  }

  for (c9_i1 = 0; c9_i1 < 19200; c9_i1++) {
    c9_x_data[c9_i1] = c9_bw[c9_i1];
  }

  c9_flat = true;
  c9_c_k = 0;
  c9_exitg1 = false;
  while ((!c9_exitg1) && (c9_c_k < 19200)) {
    c9_d_k = (real_T)c9_c_k + 1.0;
    if (!c9_x_data[(int32_T)c9_d_k - 1]) {
      c9_flat = false;
      c9_exitg1 = true;
    } else {
      c9_c_k++;
    }
  }

  if (!c9_flat) {
    c9_st.site = &c9_nb_emlrtRSI;
    c9_medfilt2(chartInstance, chartInstance->c9_b_accumMatrixRe,
                chartInstance->c9_b_Hd);
    c9_st.site = &c9_ob_emlrtRSI;
    c9_b_st.site = &c9_ub_emlrtRSI;
    for (c9_i2 = 0; c9_i2 < 19200; c9_i2++) {
      chartInstance->c9_b_marker[c9_i2] = chartInstance->c9_b_Hd[c9_i2] -
        0.064999999999999933;
    }

    c9_c_st.site = &c9_vb_emlrtRSI;
    c9_validateattributes(chartInstance, &c9_c_st, chartInstance->c9_b_marker);
    c9_c_st.site = &c9_wb_emlrtRSI;
    c9_validateattributes(chartInstance, &c9_c_st, chartInstance->c9_b_Hd);
    for (c9_i3 = 0; c9_i3 < 19200; c9_i3++) {
      chartInstance->c9_b_mask[c9_i3] = chartInstance->c9_b_Hd[c9_i3];
    }

    for (c9_i4 = 0; c9_i4 < 19200; c9_i4++) {
      chartInstance->c9_b_Hd[c9_i4] = chartInstance->c9_b_marker[c9_i4];
    }

    for (c9_i5 = 0; c9_i5 < 2; c9_i5++) {
      c9_imSizeT[c9_i5] = 120.0 + 40.0 * (real_T)c9_i5;
    }

    ippreconstruct_real64(&chartInstance->c9_b_Hd[0], &chartInstance->c9_b_mask
                          [0], &c9_imSizeT[0], 2.0);
    c9_st.site = &c9_pb_emlrtRSI;
    c9_imregionalmax(chartInstance, &c9_st, chartInstance->c9_b_Hd, c9_bw);
    c9_emxInit_sOA5t73y81YtFHGIDxk0fKF(chartInstance, c9_sp, &c9_b_s, 1,
      &c9_jc_emlrtRTEI);
    c9_st.site = &c9_qb_emlrtRSI;
    c9_regionprops(chartInstance, &c9_st, c9_bw,
                   chartInstance->c9_b_accumMatrixRe, c9_b_s);
    if (c9_b_s->size[0] != 0) {
      c9_i6 = c9_centers->size[0] * c9_centers->size[1];
      c9_centers->size[0] = c9_b_s->size[0];
      c9_centers->size[1] = 2;
      c9_st.site = &c9_dg_emlrtRSI;
      c9_emxEnsureCapacity_real_T(chartInstance, &c9_st, c9_centers, c9_i6,
        &c9_wb_emlrtRTEI);
      c9_d = (real_T)c9_b_s->size[0];
      c9_i7 = (int32_T)c9_d - 1;
      for (c9_idx = 0; c9_idx <= c9_i7; c9_idx++) {
        c9_b_idx = (real_T)c9_idx + 1.0;
        c9_i9 = c9_centers->size[0];
        c9_i10 = (int32_T)c9_b_idx;
        if ((c9_i10 < 1) || (c9_i10 > c9_i9)) {
          emlrtDynamicBoundsCheckR2012b(c9_i10, 1, c9_i9, &c9_fc_emlrtBCI,
            (emlrtConstCTX)c9_sp);
        }

        c9_i11 = c9_i10;
        for (c9_i12 = 0; c9_i12 < 2; c9_i12++) {
          c9_tmp_data[c9_i12] = c9_i12;
        }

        for (c9_i15 = 0; c9_i15 < 2; c9_i15++) {
          c9_b_iv[c9_i15] = 1 + c9_i15;
        }

        for (c9_i16 = 0; c9_i16 < 2; c9_i16++) {
          c9_iv1[c9_i16] = 1 + c9_i16;
        }

        emlrtSubAssignSizeCheckR2012b(&c9_b_iv[0], 2, &c9_iv1[0], 2,
          &c9_emlrtECI, (void *)c9_sp);
        c9_i18 = c9_i11 - 1;
        for (c9_i19 = 0; c9_i19 < 2; c9_i19++) {
          c9_i23 = c9_b_s->size[0];
          c9_i24 = (int32_T)c9_b_idx;
          if ((c9_i24 < 1) || (c9_i24 > c9_i23)) {
            emlrtDynamicBoundsCheckR2012b(c9_i24, 1, c9_i23, &c9_hc_emlrtBCI,
              (emlrtConstCTX)c9_sp);
          }

          c9_centers->data[c9_i18 + c9_centers->size[0] * c9_tmp_data[c9_i19]] =
            c9_b_s->data[c9_i24 - 1].WeightedCentroid[c9_i19];
        }
      }

      c9_d1 = (real_T)c9_centers->size[0];
      c9_i8 = (int32_T)-((-1.0 - c9_d1) + 1.0);
      emlrtForLoopVectorCheckR2021a(c9_d1, -1.0, 1.0, mxDOUBLE_CLASS, c9_i8,
        &c9_of_emlrtRTEI, (emlrtConstCTX)c9_sp);
      c9_emxInit_real_T(chartInstance, c9_sp, &c9_r, 2, &c9_ac_emlrtRTEI);
      for (c9_c_idx = 0; c9_c_idx < c9_i8; c9_c_idx++) {
        c9_b_idx = c9_d1 - (real_T)c9_c_idx;
        c9_i13 = c9_centers->size[0];
        c9_i14 = (int32_T)c9_b_idx;
        if ((c9_i14 < 1) || (c9_i14 > c9_i13)) {
          emlrtDynamicBoundsCheckR2012b(c9_i14, 1, c9_i13, &c9_gc_emlrtBCI,
            (emlrtConstCTX)c9_sp);
        }

        c9_b_x = c9_centers->data[c9_i14 - 1];
        c9_c_b = muDoubleScalarIsNaN(c9_b_x);
        c9_guard1 = false;
        if (c9_c_b) {
          c9_guard1 = true;
        } else {
          c9_i20 = c9_centers->size[0];
          c9_i22 = (int32_T)c9_b_idx;
          if ((c9_i22 < 1) || (c9_i22 > c9_i20)) {
            emlrtDynamicBoundsCheckR2012b(c9_i22, 1, c9_i20, &c9_ic_emlrtBCI,
              (emlrtConstCTX)c9_sp);
          }

          c9_c_x = c9_centers->data[(c9_i22 + c9_centers->size[0]) - 1];
          c9_d_b = muDoubleScalarIsNaN(c9_c_x);
          if (c9_d_b) {
            c9_guard1 = true;
          }
        }

        if (c9_guard1) {
          c9_i25 = c9_r->size[0] * c9_r->size[1];
          c9_r->size[0] = c9_centers->size[0];
          c9_r->size[1] = c9_centers->size[1];
          c9_st.site = &c9_rb_emlrtRSI;
          c9_emxEnsureCapacity_real_T(chartInstance, &c9_st, c9_r, c9_i25,
            &c9_ac_emlrtRTEI);
          c9_b_loop_ub = c9_centers->size[0] * c9_centers->size[1] - 1;
          for (c9_i27 = 0; c9_i27 <= c9_b_loop_ub; c9_i27++) {
            c9_r->data[c9_i27] = c9_centers->data[c9_i27];
          }

          c9_st.site = &c9_rb_emlrtRSI;
          c9_b_nullAssignment(chartInstance, &c9_st, c9_r, (int32_T)c9_b_idx);
          c9_i29 = c9_centers->size[0] * c9_centers->size[1];
          c9_centers->size[0] = c9_r->size[0];
          c9_centers->size[1] = 2;
          c9_st.site = &c9_rb_emlrtRSI;
          c9_emxEnsureCapacity_real_T(chartInstance, &c9_st, c9_centers, c9_i29,
            &c9_ac_emlrtRTEI);
          c9_d_loop_ub = c9_r->size[0] * c9_r->size[1] - 1;
          for (c9_i31 = 0; c9_i31 <= c9_d_loop_ub; c9_i31++) {
            c9_centers->data[c9_i31] = c9_r->data[c9_i31];
          }
        }
      }

      c9_emxFree_real_T(chartInstance, &c9_r);
      c9_b_b = (c9_centers->size[0] == 0);
      if (!c9_b_b) {
        c9_emxInit_real_T1(chartInstance, c9_sp, &c9_ndx, 1, &c9_lc_emlrtRTEI);
        c9_st.site = &c9_sb_emlrtRSI;
        c9_i17 = c9_ndx->size[0];
        c9_ndx->size[0] = c9_centers->size[0];
        c9_b_st.site = &c9_sb_emlrtRSI;
        c9_emxEnsureCapacity_real_T1(chartInstance, &c9_b_st, c9_ndx, c9_i17,
          &c9_yb_emlrtRTEI);
        c9_loop_ub = c9_centers->size[0] - 1;
        for (c9_i21 = 0; c9_i21 <= c9_loop_ub; c9_i21++) {
          c9_ndx->data[c9_i21] = c9_centers->data[c9_i21 + c9_centers->size[0]];
        }

        c9_b_st.site = &c9_sb_emlrtRSI;
        c9_b_round(chartInstance, &c9_b_st, c9_ndx);
        c9_emxInit_real_T1(chartInstance, &c9_st, &c9_b_varargin_2, 1,
                           &c9_bc_emlrtRTEI);
        c9_i26 = c9_b_varargin_2->size[0];
        c9_b_varargin_2->size[0] = c9_centers->size[0];
        c9_b_st.site = &c9_sb_emlrtRSI;
        c9_emxEnsureCapacity_real_T1(chartInstance, &c9_b_st, c9_b_varargin_2,
          c9_i26, &c9_bc_emlrtRTEI);
        c9_c_loop_ub = c9_centers->size[0] - 1;
        for (c9_i28 = 0; c9_i28 <= c9_c_loop_ub; c9_i28++) {
          c9_b_varargin_2->data[c9_i28] = c9_centers->data[c9_i28];
        }

        c9_b_st.site = &c9_sb_emlrtRSI;
        c9_b_round(chartInstance, &c9_b_st, c9_b_varargin_2);
        c9_emxInit_int32_T(chartInstance, &c9_st, &c9_r1, 1, &c9_pb_emlrtRTEI);
        c9_b_st.site = &c9_eb_emlrtRSI;
        c9_eml_sub2ind(chartInstance, &c9_b_st, c9_ndx, c9_b_varargin_2, c9_r1);
        c9_i30 = c9_ndx->size[0];
        c9_ndx->size[0] = c9_r1->size[0];
        c9_emxEnsureCapacity_real_T1(chartInstance, &c9_st, c9_ndx, c9_i30,
          &c9_n_emlrtRTEI);
        c9_e_loop_ub = c9_r1->size[0] - 1;
        for (c9_i32 = 0; c9_i32 <= c9_e_loop_ub; c9_i32++) {
          c9_ndx->data[c9_i32] = (real_T)c9_r1->data[c9_i32];
        }

        c9_emxFree_int32_T(chartInstance, &c9_r1);
        c9_i33 = c9_b_varargin_2->size[0];
        c9_b_varargin_2->size[0] = c9_ndx->size[0];
        c9_st.site = &c9_sb_emlrtRSI;
        c9_emxEnsureCapacity_real_T1(chartInstance, &c9_st, c9_b_varargin_2,
          c9_i33, &c9_cc_emlrtRTEI);
        c9_f_loop_ub = c9_ndx->size[0] - 1;
        for (c9_i34 = 0; c9_i34 <= c9_f_loop_ub; c9_i34++) {
          c9_i35 = (int32_T)c9_ndx->data[c9_i34];
          if ((c9_i35 < 1) || (c9_i35 > 19200)) {
            emlrtDynamicBoundsCheckR2012b(c9_i35, 1, 19200, &c9_jc_emlrtBCI,
              (emlrtConstCTX)c9_sp);
          }

          c9_b_varargin_2->data[c9_i34] = chartInstance->c9_b_Hd[c9_i35 - 1];
        }

        c9_emxFree_real_T(chartInstance, &c9_ndx);
        c9_i36 = c9_metric->size[0] * c9_metric->size[1];
        c9_metric->size[0] = c9_b_varargin_2->size[0];
        c9_metric->size[1] = 1;
        c9_st.site = &c9_sb_emlrtRSI;
        c9_emxEnsureCapacity_real_T(chartInstance, &c9_st, c9_metric, c9_i36,
          &c9_dc_emlrtRTEI);
        c9_g_loop_ub = c9_b_varargin_2->size[0] - 1;
        for (c9_i37 = 0; c9_i37 <= c9_g_loop_ub; c9_i37++) {
          c9_metric->data[c9_i37] = c9_b_varargin_2->data[c9_i37];
        }

        c9_emxFree_real_T(chartInstance, &c9_b_varargin_2);
        c9_st.site = &c9_tb_emlrtRSI;
        c9_emxInit_real_T(chartInstance, &c9_st, &c9_d_x, 2, &c9_ec_emlrtRTEI);
        c9_i38 = c9_d_x->size[0] * c9_d_x->size[1];
        c9_d_x->size[0] = c9_metric->size[0];
        c9_d_x->size[1] = c9_metric->size[1];
        c9_b_st.site = &c9_tb_emlrtRSI;
        c9_emxEnsureCapacity_real_T(chartInstance, &c9_b_st, c9_d_x, c9_i38,
          &c9_ec_emlrtRTEI);
        c9_h_loop_ub = c9_metric->size[0] * c9_metric->size[1] - 1;
        for (c9_i39 = 0; c9_i39 <= c9_h_loop_ub; c9_i39++) {
          c9_d_x->data[c9_i39] = c9_metric->data[c9_i39];
        }

        c9_emxInit_int32_T1(chartInstance, &c9_st, &c9_iidx, 2, &c9_kc_emlrtRTEI);
        c9_b_st.site = &c9_ke_emlrtRSI;
        c9_b_sort(chartInstance, &c9_b_st, c9_d_x, c9_iidx);
        c9_emxInit_real_T(chartInstance, &c9_st, &c9_sortIdx, 2,
                          &c9_kc_emlrtRTEI);
        c9_i40 = c9_sortIdx->size[0] * c9_sortIdx->size[1];
        c9_sortIdx->size[0] = c9_iidx->size[0];
        c9_sortIdx->size[1] = 1;
        c9_emxEnsureCapacity_real_T(chartInstance, &c9_st, c9_sortIdx, c9_i40,
          &c9_fc_emlrtRTEI);
        c9_i_loop_ub = c9_iidx->size[0] * c9_iidx->size[1] - 1;
        for (c9_i41 = 0; c9_i41 <= c9_i_loop_ub; c9_i41++) {
          c9_sortIdx->data[c9_i41] = (real_T)c9_iidx->data[c9_i41];
        }

        c9_emxFree_int32_T(chartInstance, &c9_iidx);
        c9_i42 = c9_metric->size[0] * c9_metric->size[1];
        c9_metric->size[0] = c9_d_x->size[0];
        c9_metric->size[1] = 1;
        c9_st.site = &c9_tb_emlrtRSI;
        c9_emxEnsureCapacity_real_T(chartInstance, &c9_st, c9_metric, c9_i42,
          &c9_gc_emlrtRTEI);
        c9_j_loop_ub = c9_d_x->size[0] * c9_d_x->size[1] - 1;
        for (c9_i43 = 0; c9_i43 <= c9_j_loop_ub; c9_i43++) {
          c9_metric->data[c9_i43] = c9_d_x->data[c9_i43];
        }

        c9_emxFree_real_T(chartInstance, &c9_d_x);
        c9_b_centers = c9_centers->size[0];
        c9_b_sortIdx[0] = c9_sortIdx->size[0];
        c9_emxInit_real_T(chartInstance, c9_sp, &c9_c_centers, 2,
                          &c9_hc_emlrtRTEI);
        c9_i44 = c9_c_centers->size[0] * c9_c_centers->size[1];
        c9_c_centers->size[0] = c9_b_sortIdx[0];
        c9_c_centers->size[1] = 2;
        c9_st.site = &c9_cg_emlrtRSI;
        c9_emxEnsureCapacity_real_T(chartInstance, &c9_st, c9_c_centers, c9_i44,
          &c9_hc_emlrtRTEI);
        for (c9_i45 = 0; c9_i45 < 2; c9_i45++) {
          c9_k_loop_ub = c9_b_sortIdx[0] - 1;
          for (c9_i47 = 0; c9_i47 <= c9_k_loop_ub; c9_i47++) {
            c9_i48 = (int32_T)c9_sortIdx->data[c9_i47];
            if ((c9_i48 < 1) || (c9_i48 > c9_b_centers)) {
              emlrtDynamicBoundsCheckR2012b(c9_i48, 1, c9_b_centers,
                &c9_kc_emlrtBCI, (emlrtConstCTX)c9_sp);
            }

            c9_c_centers->data[c9_i47 + c9_c_centers->size[0] * c9_i45] =
              c9_centers->data[(c9_i48 + c9_centers->size[0] * c9_i45) - 1];
          }
        }

        c9_emxFree_real_T(chartInstance, &c9_sortIdx);
        c9_i46 = c9_centers->size[0] * c9_centers->size[1];
        c9_centers->size[0] = c9_c_centers->size[0];
        c9_centers->size[1] = c9_c_centers->size[1];
        c9_st.site = &c9_cg_emlrtRSI;
        c9_emxEnsureCapacity_real_T(chartInstance, &c9_st, c9_centers, c9_i46,
          &c9_ic_emlrtRTEI);
        c9_l_loop_ub = c9_c_centers->size[0] * c9_c_centers->size[1] - 1;
        for (c9_i49 = 0; c9_i49 <= c9_l_loop_ub; c9_i49++) {
          c9_centers->data[c9_i49] = c9_c_centers->data[c9_i49];
        }

        c9_emxFree_real_T(chartInstance, &c9_c_centers);
      }
    }

    c9_emxFree_sOA5t73y81YtFHGIDxk0fKF(chartInstance, &c9_b_s);
  }
}

static void c9_emlrt_marshallIn(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c9_b_Red_Comp, const char_T *c9_identifier,
  boolean_T c9_b_y[19200])
{
  emlrtMsgIdentifier c9_thisId;
  c9_thisId.fIdentifier = (const char_T *)c9_identifier;
  c9_thisId.fParent = NULL;
  c9_thisId.bParentIsCell = false;
  c9_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c9_b_Red_Comp), &c9_thisId,
                        c9_b_y);
  sf_mex_destroy(&c9_b_Red_Comp);
}

static void c9_b_emlrt_marshallIn(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId,
  boolean_T c9_b_y[19200])
{
  int32_T c9_i;
  boolean_T c9_bv[19200];
  (void)chartInstance;
  sf_mex_import(c9_parentId, sf_mex_dup(c9_u), c9_bv, 1, 11, 0U, 1, 0U, 2, 120,
                160);
  for (c9_i = 0; c9_i < 19200; c9_i++) {
    c9_b_y[c9_i] = c9_bv[c9_i];
  }

  sf_mex_destroy(&c9_u);
}

static void c9_c_emlrt_marshallIn(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c9_b_direct, const char_T *c9_identifier,
  real_T c9_b_y[2])
{
  emlrtMsgIdentifier c9_thisId;
  c9_thisId.fIdentifier = (const char_T *)c9_identifier;
  c9_thisId.fParent = NULL;
  c9_thisId.bParentIsCell = false;
  c9_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c9_b_direct), &c9_thisId,
                        c9_b_y);
  sf_mex_destroy(&c9_b_direct);
}

static void c9_d_emlrt_marshallIn(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId,
  real_T c9_b_y[2])
{
  real_T c9_dv[2];
  int32_T c9_i;
  (void)chartInstance;
  sf_mex_import(c9_parentId, sf_mex_dup(c9_u), c9_dv, 1, 0, 0U, 1, 0U, 2, 1, 2);
  for (c9_i = 0; c9_i < 2; c9_i++) {
    c9_b_y[c9_i] = c9_dv[c9_i];
  }

  sf_mex_destroy(&c9_u);
}

static real_T c9_e_emlrt_marshallIn(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c9_b_land, const char_T *c9_identifier)
{
  emlrtMsgIdentifier c9_thisId;
  real_T c9_b_y;
  c9_thisId.fIdentifier = (const char_T *)c9_identifier;
  c9_thisId.fParent = NULL;
  c9_thisId.bParentIsCell = false;
  c9_b_y = c9_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c9_b_land),
    &c9_thisId);
  sf_mex_destroy(&c9_b_land);
  return c9_b_y;
}

static real_T c9_f_emlrt_marshallIn(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId)
{
  real_T c9_b_y;
  real_T c9_d;
  (void)chartInstance;
  sf_mex_import(c9_parentId, sf_mex_dup(c9_u), &c9_d, 1, 0, 0U, 0, 0U, 0);
  c9_b_y = c9_d;
  sf_mex_destroy(&c9_u);
  return c9_b_y;
}

static boolean_T c9_g_emlrt_marshallIn(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c9_b_y, const char_T *c9_identifier)
{
  emlrtMsgIdentifier c9_thisId;
  boolean_T c9_c_y;
  c9_thisId.fIdentifier = (const char_T *)c9_identifier;
  c9_thisId.fParent = NULL;
  c9_thisId.bParentIsCell = false;
  c9_c_y = c9_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c9_b_y), &c9_thisId);
  sf_mex_destroy(&c9_b_y);
  return c9_c_y;
}

static boolean_T c9_h_emlrt_marshallIn(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId)
{
  boolean_T c9_b;
  boolean_T c9_b_y;
  (void)chartInstance;
  sf_mex_import(c9_parentId, sf_mex_dup(c9_u), &c9_b, 1, 11, 0U, 0, 0U, 0);
  c9_b_y = c9_b;
  sf_mex_destroy(&c9_u);
  return c9_b_y;
}

static boolean_T c9_i_emlrt_marshallIn(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c9_b_flag_threshold, const char_T
  *c9_identifier, boolean_T *c9_svPtr)
{
  emlrtMsgIdentifier c9_thisId;
  boolean_T c9_b_y;
  c9_thisId.fIdentifier = (const char_T *)c9_identifier;
  c9_thisId.fParent = NULL;
  c9_thisId.bParentIsCell = false;
  c9_b_y = c9_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c9_b_flag_threshold),
    &c9_thisId, c9_svPtr);
  sf_mex_destroy(&c9_b_flag_threshold);
  return c9_b_y;
}

static boolean_T c9_j_emlrt_marshallIn(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId,
  boolean_T *c9_svPtr)
{
  boolean_T c9_b;
  boolean_T c9_b_y;
  (void)chartInstance;
  if (mxIsEmpty(c9_u)) {
    *c9_svPtr = false;
  } else {
    *c9_svPtr = true;
    sf_mex_import(c9_parentId, sf_mex_dup(c9_u), &c9_b, 1, 11, 0U, 0, 0U, 0);
    c9_b_y = c9_b;
  }

  sf_mex_destroy(&c9_u);
  return c9_b_y;
}

static uint8_T c9_k_emlrt_marshallIn(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c9_b_is_active_c9_flightControlSystem, const
  char_T *c9_identifier)
{
  emlrtMsgIdentifier c9_thisId;
  uint8_T c9_b_y;
  c9_thisId.fIdentifier = (const char_T *)c9_identifier;
  c9_thisId.fParent = NULL;
  c9_thisId.bParentIsCell = false;
  c9_b_y = c9_l_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c9_b_is_active_c9_flightControlSystem), &c9_thisId);
  sf_mex_destroy(&c9_b_is_active_c9_flightControlSystem);
  return c9_b_y;
}

static uint8_T c9_l_emlrt_marshallIn(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c9_u, const emlrtMsgIdentifier *c9_parentId)
{
  uint8_T c9_b_u;
  uint8_T c9_b_y;
  (void)chartInstance;
  sf_mex_import(c9_parentId, sf_mex_dup(c9_u), &c9_b_u, 1, 3, 0U, 0, 0U, 0);
  c9_b_y = c9_b_u;
  sf_mex_destroy(&c9_u);
  return c9_b_y;
}

static void c9_slStringInitializeDynamicBuffers
  (SFc9_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c9_chart_data_browse_helper(SFc9_flightControlSystemInstanceStruct
  *chartInstance, int32_T c9_ssIdNumber, const mxArray **c9_mxData, uint8_T
  *c9_isValueTooBig)
{
  real_T c9_d;
  boolean_T c9_b;
  *c9_mxData = NULL;
  *c9_mxData = NULL;
  *c9_isValueTooBig = 0U;
  switch (c9_ssIdNumber) {
   case 8U:
    c9_d = *chartInstance->c9_land;
    sf_mex_assign(c9_mxData, sf_mex_create("mxData", &c9_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 7U:
    sf_mex_assign(c9_mxData, sf_mex_create("mxData", *chartInstance->c9_direct,
      0, 0U, 1U, 0U, 2, 1, 2), false);
    break;

   case 4U:
    sf_mex_assign(c9_mxData, sf_mex_create("mxData", *chartInstance->c9_I, 3, 0U,
      1U, 0U, 3, 120, 160, 3), false);
    break;

   case 5U:
    c9_b = *chartInstance->c9_y;
    sf_mex_assign(c9_mxData, sf_mex_create("mxData", &c9_b, 11, 0U, 0U, 0U, 0),
                  false);
    break;

   case 9U:
    sf_mex_assign(c9_mxData, sf_mex_create("mxData", *chartInstance->c9_Red_Comp,
      11, 0U, 1U, 0U, 2, 120, 160), false);
    break;
  }
}

static void c9_b_ComputeWeightedCentroid(SFc9_flightControlSystemInstanceStruct *
  chartInstance, const emlrtStack *c9_sp, real_T c9_b_I[19200],
  c9_emxArray_s_R6Og1x0kmqQXSF9Pwa49 *c9_stats, c9_sHtk0WM4OMtyqkehwQYcq2
  *c9_statsAlreadyComputed)
{
  static char_T c9_b_cv[39] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'a', 't',
    'e', 'n', 'a', 't', 'e', ':', 'm', 'a', 't', 'r', 'i', 'x', 'D', 'i', 'm',
    'e', 'n', 's', 'i', 'o', 'n', 'M', 'i', 's', 'm', 'a', 't', 'c', 'h' };

  c9_cell_wrap_37 c9_reshapes[2];
  c9_emxArray_int32_T *c9_idx;
  c9_emxArray_int32_T *c9_varargout_4;
  c9_emxArray_int32_T *c9_vk;
  c9_emxArray_real_T *c9_Intensity;
  c9_emxArray_real_T *c9_j;
  c9_emxArray_real_T *c9_r;
  c9_emxArray_real_T *c9_r1;
  c9_emxArray_real_T *c9_r2;
  emlrtStack c9_b_st;
  emlrtStack c9_c_st;
  emlrtStack c9_d_st;
  emlrtStack c9_st;
  const mxArray *c9_b_y = NULL;
  const mxArray *c9_c_y = NULL;
  const mxArray *c9_d_y = NULL;
  const mxArray *c9_e_y = NULL;
  real_T c9_wc[2];
  real_T c9_M;
  real_T c9_b_k;
  real_T c9_b_n;
  real_T c9_c_idx;
  real_T c9_d;
  real_T c9_d1;
  real_T c9_d2;
  real_T c9_d3;
  real_T c9_d_k;
  real_T c9_f_k;
  real_T c9_sumIntensity;
  int32_T c9_sizes[2];
  int32_T c9_ab_loop_ub;
  int32_T c9_b_idx;
  int32_T c9_b_loop_ub;
  int32_T c9_bb_loop_ub;
  int32_T c9_c_k;
  int32_T c9_c_loop_ub;
  int32_T c9_c_n;
  int32_T c9_cb_loop_ub;
  int32_T c9_d_loop_ub;
  int32_T c9_db_loop_ub;
  int32_T c9_e_k;
  int32_T c9_e_loop_ub;
  int32_T c9_eb_loop_ub;
  int32_T c9_expected;
  int32_T c9_f_loop_ub;
  int32_T c9_fb_loop_ub;
  int32_T c9_g_loop_ub;
  int32_T c9_gb_loop_ub;
  int32_T c9_h_loop_ub;
  int32_T c9_hb_loop_ub;
  int32_T c9_i;
  int32_T c9_i1;
  int32_T c9_i10;
  int32_T c9_i100;
  int32_T c9_i101;
  int32_T c9_i102;
  int32_T c9_i103;
  int32_T c9_i104;
  int32_T c9_i105;
  int32_T c9_i106;
  int32_T c9_i107;
  int32_T c9_i108;
  int32_T c9_i109;
  int32_T c9_i11;
  int32_T c9_i110;
  int32_T c9_i111;
  int32_T c9_i112;
  int32_T c9_i113;
  int32_T c9_i114;
  int32_T c9_i115;
  int32_T c9_i116;
  int32_T c9_i117;
  int32_T c9_i118;
  int32_T c9_i119;
  int32_T c9_i12;
  int32_T c9_i120;
  int32_T c9_i121;
  int32_T c9_i122;
  int32_T c9_i123;
  int32_T c9_i124;
  int32_T c9_i125;
  int32_T c9_i126;
  int32_T c9_i127;
  int32_T c9_i128;
  int32_T c9_i129;
  int32_T c9_i13;
  int32_T c9_i130;
  int32_T c9_i131;
  int32_T c9_i132;
  int32_T c9_i133;
  int32_T c9_i134;
  int32_T c9_i135;
  int32_T c9_i136;
  int32_T c9_i137;
  int32_T c9_i138;
  int32_T c9_i139;
  int32_T c9_i14;
  int32_T c9_i140;
  int32_T c9_i141;
  int32_T c9_i142;
  int32_T c9_i143;
  int32_T c9_i144;
  int32_T c9_i145;
  int32_T c9_i146;
  int32_T c9_i147;
  int32_T c9_i148;
  int32_T c9_i149;
  int32_T c9_i15;
  int32_T c9_i150;
  int32_T c9_i151;
  int32_T c9_i152;
  int32_T c9_i153;
  int32_T c9_i16;
  int32_T c9_i17;
  int32_T c9_i18;
  int32_T c9_i19;
  int32_T c9_i2;
  int32_T c9_i20;
  int32_T c9_i21;
  int32_T c9_i22;
  int32_T c9_i23;
  int32_T c9_i24;
  int32_T c9_i25;
  int32_T c9_i26;
  int32_T c9_i27;
  int32_T c9_i28;
  int32_T c9_i29;
  int32_T c9_i3;
  int32_T c9_i30;
  int32_T c9_i31;
  int32_T c9_i32;
  int32_T c9_i33;
  int32_T c9_i34;
  int32_T c9_i35;
  int32_T c9_i36;
  int32_T c9_i37;
  int32_T c9_i38;
  int32_T c9_i39;
  int32_T c9_i4;
  int32_T c9_i40;
  int32_T c9_i41;
  int32_T c9_i42;
  int32_T c9_i43;
  int32_T c9_i44;
  int32_T c9_i45;
  int32_T c9_i46;
  int32_T c9_i47;
  int32_T c9_i48;
  int32_T c9_i49;
  int32_T c9_i5;
  int32_T c9_i50;
  int32_T c9_i51;
  int32_T c9_i52;
  int32_T c9_i53;
  int32_T c9_i54;
  int32_T c9_i55;
  int32_T c9_i56;
  int32_T c9_i57;
  int32_T c9_i58;
  int32_T c9_i59;
  int32_T c9_i6;
  int32_T c9_i60;
  int32_T c9_i61;
  int32_T c9_i62;
  int32_T c9_i63;
  int32_T c9_i64;
  int32_T c9_i65;
  int32_T c9_i66;
  int32_T c9_i67;
  int32_T c9_i68;
  int32_T c9_i69;
  int32_T c9_i7;
  int32_T c9_i70;
  int32_T c9_i71;
  int32_T c9_i72;
  int32_T c9_i73;
  int32_T c9_i74;
  int32_T c9_i75;
  int32_T c9_i76;
  int32_T c9_i77;
  int32_T c9_i78;
  int32_T c9_i79;
  int32_T c9_i8;
  int32_T c9_i80;
  int32_T c9_i81;
  int32_T c9_i82;
  int32_T c9_i83;
  int32_T c9_i84;
  int32_T c9_i85;
  int32_T c9_i86;
  int32_T c9_i87;
  int32_T c9_i88;
  int32_T c9_i89;
  int32_T c9_i9;
  int32_T c9_i90;
  int32_T c9_i91;
  int32_T c9_i92;
  int32_T c9_i93;
  int32_T c9_i94;
  int32_T c9_i95;
  int32_T c9_i96;
  int32_T c9_i97;
  int32_T c9_i98;
  int32_T c9_i99;
  int32_T c9_i_loop_ub;
  int32_T c9_j_loop_ub;
  int32_T c9_k;
  int32_T c9_k_loop_ub;
  int32_T c9_l_loop_ub;
  int32_T c9_loop_ub;
  int32_T c9_m_loop_ub;
  int32_T c9_n;
  int32_T c9_n_loop_ub;
  int32_T c9_o_loop_ub;
  int32_T c9_p_loop_ub;
  int32_T c9_q_loop_ub;
  int32_T c9_r_loop_ub;
  int32_T c9_result;
  int32_T c9_s_loop_ub;
  int32_T c9_t_loop_ub;
  int32_T c9_u_loop_ub;
  int32_T c9_v_loop_ub;
  int32_T c9_w_loop_ub;
  int32_T c9_x_loop_ub;
  int32_T c9_y_loop_ub;
  boolean_T c9_b;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_b_st.prev = &c9_st;
  c9_b_st.tls = c9_st.tls;
  c9_c_st.prev = &c9_b_st;
  c9_c_st.tls = c9_b_st.tls;
  c9_d_st.prev = &c9_c_st;
  c9_d_st.tls = c9_c_st.tls;
  c9_statsAlreadyComputed->WeightedCentroid = true;
  c9_st.site = &c9_wd_emlrtRSI;
  c9_statsAlreadyComputed->PixelList = true;
  c9_d = (real_T)c9_stats->size[0];
  c9_i = (int32_T)c9_d - 1;
  c9_emxInit_real_T1(chartInstance, &c9_st, &c9_Intensity, 1, &c9_pe_emlrtRTEI);
  c9_emxInit_real_T1(chartInstance, &c9_st, &c9_j, 1, &c9_cf_emlrtRTEI);
  c9_emxInit_real_T1(chartInstance, &c9_st, &c9_r, 1, &c9_ud_emlrtRTEI);
  c9_emxInit_int32_T(chartInstance, &c9_st, &c9_varargout_4, 1, &c9_ud_emlrtRTEI);
  c9_emxInitMatrix_cell_wrap_37(chartInstance, &c9_st, c9_reshapes,
    &c9_df_emlrtRTEI);
  c9_emxInit_int32_T(chartInstance, &c9_st, &c9_idx, 1, &c9_qe_emlrtRTEI);
  c9_emxInit_int32_T(chartInstance, &c9_st, &c9_vk, 1, &c9_te_emlrtRTEI);
  for (c9_k = 0; c9_k <= c9_i; c9_k++) {
    c9_b_k = (real_T)c9_k + 1.0;
    c9_i1 = c9_r->size[0];
    c9_i2 = c9_stats->size[0];
    c9_i3 = (int32_T)c9_b_k;
    if ((c9_i3 < 1) || (c9_i3 > c9_i2)) {
      emlrtDynamicBoundsCheckR2012b(c9_i3, 1, c9_i2, &c9_gf_emlrtBCI, &c9_st);
    }

    c9_r->size[0] = c9_stats->data[c9_i3 - 1].PixelIdxList->size[0];
    c9_emxEnsureCapacity_real_T1(chartInstance, &c9_st, c9_r, c9_i1,
      &c9_le_emlrtRTEI);
    c9_i6 = c9_stats->size[0];
    c9_i8 = (int32_T)c9_b_k;
    if ((c9_i8 < 1) || (c9_i8 > c9_i6)) {
      emlrtDynamicBoundsCheckR2012b(c9_i8, 1, c9_i6, &c9_gf_emlrtBCI, &c9_st);
    }

    c9_loop_ub = c9_stats->data[c9_i8 - 1].PixelIdxList->size[0] - 1;
    for (c9_i11 = 0; c9_i11 <= c9_loop_ub; c9_i11++) {
      c9_i13 = c9_stats->size[0];
      c9_i16 = (int32_T)c9_b_k;
      if ((c9_i16 < 1) || (c9_i16 > c9_i13)) {
        emlrtDynamicBoundsCheckR2012b(c9_i16, 1, c9_i13, &c9_gf_emlrtBCI, &c9_st);
      }

      c9_r->data[c9_i11] = c9_stats->data[c9_i16 - 1].PixelIdxList->data[c9_i11];
    }

    if (c9_r->size[0] != 0) {
      c9_b_st.site = &c9_yd_emlrtRSI;
      c9_i18 = c9_Intensity->size[0];
      c9_i20 = c9_stats->size[0];
      c9_i22 = (int32_T)c9_b_k;
      if ((c9_i22 < 1) || (c9_i22 > c9_i20)) {
        emlrtDynamicBoundsCheckR2012b(c9_i22, 1, c9_i20, &c9_if_emlrtBCI,
          &c9_b_st);
      }

      c9_Intensity->size[0] = c9_stats->data[c9_i22 - 1].PixelIdxList->size[0];
      c9_emxEnsureCapacity_real_T1(chartInstance, &c9_b_st, c9_Intensity, c9_i18,
        &c9_ne_emlrtRTEI);
      c9_i32 = c9_stats->size[0];
      c9_i33 = (int32_T)c9_b_k;
      if ((c9_i33 < 1) || (c9_i33 > c9_i32)) {
        emlrtDynamicBoundsCheckR2012b(c9_i33, 1, c9_i32, &c9_if_emlrtBCI,
          &c9_b_st);
      }

      c9_c_loop_ub = c9_stats->data[c9_i33 - 1].PixelIdxList->size[0] - 1;
      for (c9_i40 = 0; c9_i40 <= c9_c_loop_ub; c9_i40++) {
        c9_i44 = c9_stats->size[0];
        c9_i47 = (int32_T)c9_b_k;
        if ((c9_i47 < 1) || (c9_i47 > c9_i44)) {
          emlrtDynamicBoundsCheckR2012b(c9_i47, 1, c9_i44, &c9_if_emlrtBCI,
            &c9_b_st);
        }

        c9_Intensity->data[c9_i40] = c9_stats->data[c9_i47 - 1]
          .PixelIdxList->data[c9_i40];
      }

      c9_c_st.site = &c9_ae_emlrtRSI;
      c9_i46 = c9_idx->size[0];
      c9_idx->size[0] = c9_Intensity->size[0];
      c9_emxEnsureCapacity_int32_T(chartInstance, &c9_c_st, c9_idx, c9_i46,
        &c9_qe_emlrtRTEI);
      c9_e_loop_ub = c9_Intensity->size[0] - 1;
      for (c9_i56 = 0; c9_i56 <= c9_e_loop_ub; c9_i56++) {
        c9_idx->data[c9_i56] = (int32_T)c9_Intensity->data[c9_i56];
      }

      c9_f_loop_ub = c9_idx->size[0] - 1;
      for (c9_i58 = 0; c9_i58 <= c9_f_loop_ub; c9_i58++) {
        c9_idx->data[c9_i58]--;
      }

      c9_i61 = c9_vk->size[0];
      c9_vk->size[0] = c9_idx->size[0];
      c9_emxEnsureCapacity_int32_T(chartInstance, &c9_c_st, c9_vk, c9_i61,
        &c9_te_emlrtRTEI);
      c9_h_loop_ub = c9_idx->size[0] - 1;
      for (c9_i67 = 0; c9_i67 <= c9_h_loop_ub; c9_i67++) {
        c9_vk->data[c9_i67] = c9_div_nzp_s32(chartInstance, c9_idx->data[c9_i67],
          120, 0, 1U, 0, 0);
      }

      c9_i73 = c9_varargout_4->size[0];
      c9_varargout_4->size[0] = c9_vk->size[0];
      c9_emxEnsureCapacity_int32_T(chartInstance, &c9_c_st, c9_varargout_4,
        c9_i73, &c9_ve_emlrtRTEI);
      c9_j_loop_ub = c9_vk->size[0] - 1;
      for (c9_i75 = 0; c9_i75 <= c9_j_loop_ub; c9_i75++) {
        c9_varargout_4->data[c9_i75] = c9_vk->data[c9_i75] + 1;
      }

      c9_l_loop_ub = c9_vk->size[0] - 1;
      for (c9_i79 = 0; c9_i79 <= c9_l_loop_ub; c9_i79++) {
        c9_vk->data[c9_i79] *= 120;
      }

      c9_m_loop_ub = c9_idx->size[0] - 1;
      for (c9_i83 = 0; c9_i83 <= c9_m_loop_ub; c9_i83++) {
        c9_idx->data[c9_i83] -= c9_vk->data[c9_i83];
      }

      c9_o_loop_ub = c9_idx->size[0] - 1;
      for (c9_i86 = 0; c9_i86 <= c9_o_loop_ub; c9_i86++) {
        c9_idx->data[c9_i86]++;
      }

      c9_i89 = c9_Intensity->size[0];
      c9_Intensity->size[0] = c9_idx->size[0];
      c9_emxEnsureCapacity_real_T1(chartInstance, &c9_b_st, c9_Intensity, c9_i89,
        &c9_we_emlrtRTEI);
      c9_r_loop_ub = c9_idx->size[0] - 1;
      for (c9_i95 = 0; c9_i95 <= c9_r_loop_ub; c9_i95++) {
        c9_Intensity->data[c9_i95] = (real_T)c9_idx->data[c9_i95];
      }

      c9_i96 = c9_j->size[0];
      c9_j->size[0] = c9_varargout_4->size[0];
      c9_emxEnsureCapacity_real_T1(chartInstance, &c9_b_st, c9_j, c9_i96,
        &c9_we_emlrtRTEI);
      c9_v_loop_ub = c9_varargout_4->size[0] - 1;
      for (c9_i100 = 0; c9_i100 <= c9_v_loop_ub; c9_i100++) {
        c9_j->data[c9_i100] = (real_T)c9_varargout_4->data[c9_i100];
      }

      c9_b_st.site = &c9_xd_emlrtRSI;
      c9_c_st.site = &c9_be_emlrtRSI;
      c9_result = c9_j->size[0];
      c9_sizes[0] = c9_result;
      c9_d_st.site = &c9_ce_emlrtRSI;
      c9_expected = c9_sizes[0];
      if (c9_j->size[0] == c9_expected) {
        c9_b = true;
      } else {
        c9_b = false;
      }

      if (!c9_b) {
        c9_b_y = NULL;
        sf_mex_assign(&c9_b_y, sf_mex_create("y", c9_b_cv, 10, 0U, 1U, 0U, 2, 1,
          39), false);
        c9_c_y = NULL;
        sf_mex_assign(&c9_c_y, sf_mex_create("y", c9_b_cv, 10, 0U, 1U, 0U, 2, 1,
          39), false);
        sf_mex_call(&c9_d_st, &c9_l_emlrtMCI, "error", 0U, 2U, 14, c9_b_y, 14,
                    sf_mex_call(&c9_d_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c9_d_st, NULL, "message", 1U, 1U, 14, c9_c_y)));
      }

      if (c9_Intensity->size[0] == c9_expected) {
        c9_b = true;
      } else {
        c9_b = false;
      }

      if (!c9_b) {
        c9_d_y = NULL;
        sf_mex_assign(&c9_d_y, sf_mex_create("y", c9_b_cv, 10, 0U, 1U, 0U, 2, 1,
          39), false);
        c9_e_y = NULL;
        sf_mex_assign(&c9_e_y, sf_mex_create("y", c9_b_cv, 10, 0U, 1U, 0U, 2, 1,
          39), false);
        sf_mex_call(&c9_d_st, &c9_l_emlrtMCI, "error", 0U, 2U, 14, c9_d_y, 14,
                    sf_mex_call(&c9_d_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c9_d_st, NULL, "message", 1U, 1U, 14, c9_e_y)));
      }

      c9_i112 = c9_reshapes[0].f1->size[0];
      c9_reshapes[0].f1->size[0] = c9_j->size[0];
      c9_emxEnsureCapacity_real_T1(chartInstance, &c9_c_st, c9_reshapes[0].f1,
        c9_i112, &c9_ye_emlrtRTEI);
      c9_bb_loop_ub = c9_j->size[0] - 1;
      for (c9_i114 = 0; c9_i114 <= c9_bb_loop_ub; c9_i114++) {
        c9_reshapes[0].f1->data[c9_i114] = c9_j->data[c9_i114];
      }

      c9_i116 = c9_reshapes[1].f1->size[0];
      c9_reshapes[1].f1->size[0] = c9_Intensity->size[0];
      c9_emxEnsureCapacity_real_T1(chartInstance, &c9_c_st, c9_reshapes[1].f1,
        c9_i116, &c9_ye_emlrtRTEI);
      c9_cb_loop_ub = c9_Intensity->size[0] - 1;
      for (c9_i118 = 0; c9_i118 <= c9_cb_loop_ub; c9_i118++) {
        c9_reshapes[1].f1->data[c9_i118] = c9_Intensity->data[c9_i118];
      }

      c9_i120 = c9_Intensity->size[0];
      c9_Intensity->size[0] = c9_reshapes[0].f1->size[0];
      c9_emxEnsureCapacity_real_T1(chartInstance, &c9_c_st, c9_Intensity,
        c9_i120, &c9_af_emlrtRTEI);
      c9_eb_loop_ub = c9_reshapes[0].f1->size[0] - 1;
      for (c9_i124 = 0; c9_i124 <= c9_eb_loop_ub; c9_i124++) {
        c9_Intensity->data[c9_i124] = c9_reshapes[0].f1->data[c9_i124];
      }

      c9_i126 = c9_j->size[0];
      c9_j->size[0] = c9_reshapes[1].f1->size[0];
      c9_emxEnsureCapacity_real_T1(chartInstance, &c9_c_st, c9_j, c9_i126,
        &c9_af_emlrtRTEI);
      c9_fb_loop_ub = c9_reshapes[1].f1->size[0] - 1;
      for (c9_i129 = 0; c9_i129 <= c9_fb_loop_ub; c9_i129++) {
        c9_j->data[c9_i129] = c9_reshapes[1].f1->data[c9_i129];
      }

      c9_i132 = c9_stats->size[0];
      c9_i133 = (int32_T)c9_b_k;
      if ((c9_i133 < 1) || (c9_i133 > c9_i132)) {
        emlrtDynamicBoundsCheckR2012b(c9_i133, 1, c9_i132, &c9_ff_emlrtBCI,
          &c9_c_st);
      }

      c9_i135 = c9_i133 - 1;
      c9_i136 = c9_stats->data[c9_i135].PixelList->size[0] * c9_stats->
        data[c9_i135].PixelList->size[1];
      c9_stats->data[c9_i135].PixelList->size[0] = c9_Intensity->size[0];
      c9_i139 = c9_stats->size[0];
      c9_i140 = (int32_T)c9_b_k;
      if ((c9_i140 < 1) || (c9_i140 > c9_i139)) {
        emlrtDynamicBoundsCheckR2012b(c9_i140, 1, c9_i139, &c9_ff_emlrtBCI,
          &c9_c_st);
      }

      c9_i143 = c9_i140 - 1;
      c9_stats->data[c9_i143].PixelList->size[1] = 2;
      c9_emxEnsureCapacity_real_T(chartInstance, &c9_c_st, c9_stats->
        data[c9_i143].PixelList, c9_i136, &c9_bf_emlrtRTEI);
      c9_gb_loop_ub = c9_Intensity->size[0] - 1;
      for (c9_i144 = 0; c9_i144 <= c9_gb_loop_ub; c9_i144++) {
        c9_i145 = c9_stats->size[0];
        c9_i147 = (int32_T)c9_b_k;
        if ((c9_i147 < 1) || (c9_i147 > c9_i145)) {
          emlrtDynamicBoundsCheckR2012b(c9_i147, 1, c9_i145, &c9_ff_emlrtBCI,
            &c9_c_st);
        }

        c9_i150 = c9_stats->size[0];
        c9_i151 = (int32_T)c9_b_k;
        if ((c9_i151 < 1) || (c9_i151 > c9_i150)) {
          emlrtDynamicBoundsCheckR2012b(c9_i151, 1, c9_i150, &c9_ff_emlrtBCI,
            &c9_c_st);
        }

        c9_stats->data[c9_i147 - 1].PixelList->data[c9_i144] =
          c9_Intensity->data[c9_i144];
      }

      c9_hb_loop_ub = c9_j->size[0] - 1;
      for (c9_i146 = 0; c9_i146 <= c9_hb_loop_ub; c9_i146++) {
        c9_i148 = c9_stats->size[0];
        c9_i149 = (int32_T)c9_b_k;
        if ((c9_i149 < 1) || (c9_i149 > c9_i148)) {
          emlrtDynamicBoundsCheckR2012b(c9_i149, 1, c9_i148, &c9_ff_emlrtBCI,
            &c9_c_st);
        }

        c9_i152 = c9_stats->size[0];
        c9_i153 = (int32_T)c9_b_k;
        if ((c9_i153 < 1) || (c9_i153 > c9_i152)) {
          emlrtDynamicBoundsCheckR2012b(c9_i153, 1, c9_i152, &c9_ff_emlrtBCI,
            &c9_c_st);
        }

        c9_stats->data[c9_i149 - 1].PixelList->data[c9_i146 + c9_stats->
          data[c9_i153 - 1].PixelList->size[0]] = c9_j->data[c9_i146];
      }
    } else {
      c9_i15 = c9_stats->size[0];
      c9_i17 = (int32_T)c9_b_k;
      if ((c9_i17 < 1) || (c9_i17 > c9_i15)) {
        emlrtDynamicBoundsCheckR2012b(c9_i17, 1, c9_i15, &c9_xe_emlrtBCI, &c9_st);
      }

      c9_i25 = c9_i17 - 1;
      c9_stats->data[c9_i25].PixelList->size[0] = 0;
      c9_i27 = c9_stats->size[0];
      c9_i30 = (int32_T)c9_b_k;
      if ((c9_i30 < 1) || (c9_i30 > c9_i27)) {
        emlrtDynamicBoundsCheckR2012b(c9_i30, 1, c9_i27, &c9_xe_emlrtBCI, &c9_st);
      }

      c9_i35 = c9_i30 - 1;
      c9_i38 = c9_stats->data[c9_i35].PixelList->size[0] * c9_stats->data[c9_i35]
        .PixelList->size[1];
      c9_stats->data[c9_i35].PixelList->size[1] = 2;
      c9_emxEnsureCapacity_real_T(chartInstance, &c9_st, c9_stats->data[c9_i35].
        PixelList, c9_i38, &c9_oe_emlrtRTEI);
      c9_i41 = c9_stats->size[0];
      c9_i43 = (int32_T)c9_b_k;
      if ((c9_i43 < 1) || (c9_i43 > c9_i41)) {
        emlrtDynamicBoundsCheckR2012b(c9_i43, 1, c9_i41, &c9_xe_emlrtBCI, &c9_st);
      }

      c9_i52 = c9_stats->size[0];
      c9_i54 = (int32_T)c9_b_k;
      if ((c9_i54 < 1) || (c9_i54 > c9_i52)) {
        emlrtDynamicBoundsCheckR2012b(c9_i54, 1, c9_i52, &c9_xe_emlrtBCI, &c9_st);
      }
    }
  }

  c9_emxFreeMatrix_cell_wrap_37(chartInstance, c9_reshapes);
  c9_st.site = &c9_vd_emlrtRSI;
  c9_statsAlreadyComputed->PixelValues = true;
  c9_d1 = (real_T)c9_stats->size[0];
  c9_i4 = (int32_T)c9_d1 - 1;
  for (c9_c_k = 0; c9_c_k <= c9_i4; c9_c_k++) {
    c9_d_k = (real_T)c9_c_k + 1.0;
    c9_i5 = c9_r->size[0];
    c9_i7 = c9_stats->size[0];
    c9_i9 = (int32_T)c9_d_k;
    if ((c9_i9 < 1) || (c9_i9 > c9_i7)) {
      emlrtDynamicBoundsCheckR2012b(c9_i9, 1, c9_i7, &c9_hf_emlrtBCI, &c9_st);
    }

    c9_r->size[0] = c9_stats->data[c9_i9 - 1].PixelIdxList->size[0];
    c9_emxEnsureCapacity_real_T1(chartInstance, &c9_st, c9_r, c9_i5,
      &c9_me_emlrtRTEI);
    c9_i12 = c9_stats->size[0];
    c9_i14 = (int32_T)c9_d_k;
    if ((c9_i14 < 1) || (c9_i14 > c9_i12)) {
      emlrtDynamicBoundsCheckR2012b(c9_i14, 1, c9_i12, &c9_hf_emlrtBCI, &c9_st);
    }

    c9_b_loop_ub = c9_stats->data[c9_i14 - 1].PixelIdxList->size[0] - 1;
    for (c9_i24 = 0; c9_i24 <= c9_b_loop_ub; c9_i24++) {
      c9_i26 = c9_stats->size[0];
      c9_i29 = (int32_T)c9_d_k;
      if ((c9_i29 < 1) || (c9_i29 > c9_i26)) {
        emlrtDynamicBoundsCheckR2012b(c9_i29, 1, c9_i26, &c9_hf_emlrtBCI, &c9_st);
      }

      c9_r->data[c9_i24] = c9_stats->data[c9_i29 - 1].PixelIdxList->data[c9_i24];
    }

    c9_wc[0] = (real_T)c9_r->size[0];
    c9_i28 = c9_stats->size[0];
    c9_i31 = (int32_T)c9_d_k;
    if ((c9_i31 < 1) || (c9_i31 > c9_i28)) {
      emlrtDynamicBoundsCheckR2012b(c9_i31, 1, c9_i28, &c9_we_emlrtBCI, &c9_st);
    }

    c9_i37 = c9_i31;
    c9_i39 = c9_stats->data[c9_i37 - 1].PixelValues->size[0];
    c9_stats->data[c9_i37 - 1].PixelValues->size[0] = (int32_T)c9_wc[0];
    c9_emxEnsureCapacity_real_T1(chartInstance, &c9_st, c9_stats->data[c9_i37 -
      1].PixelValues, c9_i39, &c9_re_emlrtRTEI);
    c9_b_st.site = &c9_de_emlrtRSI;
    c9_i45 = c9_Intensity->size[0];
    c9_i49 = c9_stats->size[0];
    c9_i51 = (int32_T)c9_d_k;
    if ((c9_i51 < 1) || (c9_i51 > c9_i49)) {
      emlrtDynamicBoundsCheckR2012b(c9_i51, 1, c9_i49, &c9_lf_emlrtBCI, &c9_b_st);
    }

    c9_Intensity->size[0] = c9_stats->data[c9_i51 - 1].PixelIdxList->size[0];
    c9_emxEnsureCapacity_real_T1(chartInstance, &c9_b_st, c9_Intensity, c9_i45,
      &c9_se_emlrtRTEI);
    c9_i57 = c9_stats->size[0];
    c9_i59 = (int32_T)c9_d_k;
    if ((c9_i59 < 1) || (c9_i59 > c9_i57)) {
      emlrtDynamicBoundsCheckR2012b(c9_i59, 1, c9_i57, &c9_lf_emlrtBCI, &c9_b_st);
    }

    c9_g_loop_ub = c9_stats->data[c9_i59 - 1].PixelIdxList->size[0] - 1;
    for (c9_i66 = 0; c9_i66 <= c9_g_loop_ub; c9_i66++) {
      c9_i69 = c9_stats->size[0];
      c9_i72 = (int32_T)c9_d_k;
      if ((c9_i72 < 1) || (c9_i72 > c9_i69)) {
        emlrtDynamicBoundsCheckR2012b(c9_i72, 1, c9_i69, &c9_lf_emlrtBCI,
          &c9_b_st);
      }

      c9_Intensity->data[c9_i66] = c9_stats->data[c9_i72 - 1].PixelIdxList->
        data[c9_i66];
    }

    c9_c_st.site = &c9_ae_emlrtRSI;
    c9_i71 = c9_idx->size[0];
    c9_idx->size[0] = c9_Intensity->size[0];
    c9_emxEnsureCapacity_int32_T(chartInstance, &c9_c_st, c9_idx, c9_i71,
      &c9_qe_emlrtRTEI);
    c9_i_loop_ub = c9_Intensity->size[0] - 1;
    for (c9_i74 = 0; c9_i74 <= c9_i_loop_ub; c9_i74++) {
      c9_idx->data[c9_i74] = (int32_T)c9_Intensity->data[c9_i74];
    }

    c9_k_loop_ub = c9_idx->size[0] - 1;
    for (c9_i78 = 0; c9_i78 <= c9_k_loop_ub; c9_i78++) {
      c9_idx->data[c9_i78]--;
    }

    c9_i81 = c9_vk->size[0];
    c9_vk->size[0] = c9_idx->size[0];
    c9_emxEnsureCapacity_int32_T(chartInstance, &c9_c_st, c9_vk, c9_i81,
      &c9_te_emlrtRTEI);
    c9_n_loop_ub = c9_idx->size[0] - 1;
    for (c9_i85 = 0; c9_i85 <= c9_n_loop_ub; c9_i85++) {
      c9_vk->data[c9_i85] = c9_div_nzp_s32(chartInstance, c9_idx->data[c9_i85],
        120, 0, 1U, 0, 0);
    }

    c9_i88 = c9_varargout_4->size[0];
    c9_varargout_4->size[0] = c9_vk->size[0];
    c9_emxEnsureCapacity_int32_T(chartInstance, &c9_c_st, c9_varargout_4, c9_i88,
      &c9_ve_emlrtRTEI);
    c9_q_loop_ub = c9_vk->size[0] - 1;
    for (c9_i94 = 0; c9_i94 <= c9_q_loop_ub; c9_i94++) {
      c9_varargout_4->data[c9_i94] = c9_vk->data[c9_i94] + 1;
    }

    c9_s_loop_ub = c9_vk->size[0] - 1;
    for (c9_i97 = 0; c9_i97 <= c9_s_loop_ub; c9_i97++) {
      c9_vk->data[c9_i97] *= 120;
    }

    c9_u_loop_ub = c9_idx->size[0] - 1;
    for (c9_i99 = 0; c9_i99 <= c9_u_loop_ub; c9_i99++) {
      c9_idx->data[c9_i99] -= c9_vk->data[c9_i99];
    }

    c9_w_loop_ub = c9_idx->size[0] - 1;
    for (c9_i103 = 0; c9_i103 <= c9_w_loop_ub; c9_i103++) {
      c9_idx->data[c9_i103]++;
    }

    c9_i104 = c9_j->size[0];
    c9_j->size[0] = c9_idx->size[0];
    c9_emxEnsureCapacity_real_T1(chartInstance, &c9_b_st, c9_j, c9_i104,
      &c9_we_emlrtRTEI);
    c9_x_loop_ub = c9_idx->size[0] - 1;
    for (c9_i106 = 0; c9_i106 <= c9_x_loop_ub; c9_i106++) {
      c9_j->data[c9_i106] = (real_T)c9_idx->data[c9_i106];
    }

    c9_i108 = c9_Intensity->size[0];
    c9_Intensity->size[0] = c9_varargout_4->size[0];
    c9_emxEnsureCapacity_real_T1(chartInstance, &c9_b_st, c9_Intensity, c9_i108,
      &c9_we_emlrtRTEI);
    c9_ab_loop_ub = c9_varargout_4->size[0] - 1;
    for (c9_i109 = 0; c9_i109 <= c9_ab_loop_ub; c9_i109++) {
      c9_Intensity->data[c9_i109] = (real_T)c9_varargout_4->data[c9_i109];
    }

    c9_i110 = c9_r->size[0];
    c9_i111 = c9_stats->size[0];
    c9_i113 = (int32_T)c9_d_k;
    if ((c9_i113 < 1) || (c9_i113 > c9_i111)) {
      emlrtDynamicBoundsCheckR2012b(c9_i113, 1, c9_i111, &c9_mf_emlrtBCI, &c9_st);
    }

    c9_r->size[0] = c9_stats->data[c9_i113 - 1].PixelValues->size[0];
    c9_emxEnsureCapacity_real_T1(chartInstance, &c9_st, c9_r, c9_i110,
      &c9_xe_emlrtRTEI);
    c9_i115 = c9_stats->size[0];
    c9_i117 = (int32_T)c9_d_k;
    if ((c9_i117 < 1) || (c9_i117 > c9_i115)) {
      emlrtDynamicBoundsCheckR2012b(c9_i117, 1, c9_i115, &c9_mf_emlrtBCI, &c9_st);
    }

    c9_db_loop_ub = c9_stats->data[c9_i117 - 1].PixelValues->size[0] - 1;
    for (c9_i119 = 0; c9_i119 <= c9_db_loop_ub; c9_i119++) {
      c9_i121 = c9_stats->size[0];
      c9_i123 = (int32_T)c9_d_k;
      if ((c9_i123 < 1) || (c9_i123 > c9_i121)) {
        emlrtDynamicBoundsCheckR2012b(c9_i123, 1, c9_i121, &c9_mf_emlrtBCI,
          &c9_st);
      }

      c9_r->data[c9_i119] = c9_stats->data[c9_i123 - 1].PixelValues->
        data[c9_i119];
    }

    c9_d3 = (real_T)c9_r->size[0];
    c9_i122 = (int32_T)c9_d3 - 1;
    for (c9_b_idx = 0; c9_b_idx <= c9_i122; c9_b_idx++) {
      c9_c_idx = (real_T)c9_b_idx + 1.0;
      c9_i125 = c9_stats->size[0];
      c9_i127 = (int32_T)c9_d_k;
      if ((c9_i127 < 1) || (c9_i127 > c9_i125)) {
        emlrtDynamicBoundsCheckR2012b(c9_i127, 1, c9_i125, &c9_ve_emlrtBCI,
          &c9_st);
      }

      c9_i128 = c9_i127 - 1;
      c9_i130 = c9_j->size[0];
      c9_i131 = (int32_T)c9_c_idx;
      if ((c9_i131 < 1) || (c9_i131 > c9_i130)) {
        emlrtDynamicBoundsCheckR2012b(c9_i131, 1, c9_i130, &c9_cf_emlrtBCI,
          &c9_st);
      }

      c9_i134 = (int32_T)c9_j->data[c9_i131 - 1];
      if ((c9_i134 < 1) || (c9_i134 > 120)) {
        emlrtDynamicBoundsCheckR2012b(c9_i134, 1, 120, &c9_bf_emlrtBCI, &c9_st);
      }

      c9_i137 = c9_Intensity->size[0];
      c9_i138 = (int32_T)c9_c_idx;
      if ((c9_i138 < 1) || (c9_i138 > c9_i137)) {
        emlrtDynamicBoundsCheckR2012b(c9_i138, 1, c9_i137, &c9_df_emlrtBCI,
          &c9_st);
      }

      c9_i141 = c9_stats->data[c9_i128].PixelValues->size[0];
      c9_i142 = (int32_T)c9_c_idx;
      if ((c9_i142 < 1) || (c9_i142 > c9_i141)) {
        emlrtDynamicBoundsCheckR2012b(c9_i142, 1, c9_i141, &c9_ef_emlrtBCI,
          &c9_st);
      }

      c9_stats->data[c9_i128].PixelValues->data[c9_i142 - 1] = c9_b_I[(c9_i134 +
        120 * ((int32_T)c9_Intensity->data[c9_i138 - 1] - 1)) - 1];
    }
  }

  c9_emxFree_int32_T(chartInstance, &c9_vk);
  c9_emxFree_int32_T(chartInstance, &c9_idx);
  c9_emxFree_int32_T(chartInstance, &c9_varargout_4);
  c9_emxFree_real_T(chartInstance, &c9_j);
  c9_d2 = (real_T)c9_stats->size[0];
  c9_i10 = (int32_T)c9_d2 - 1;
  c9_emxInit_real_T(chartInstance, c9_sp, &c9_r1, 2, &c9_ud_emlrtRTEI);
  c9_emxInit_real_T1(chartInstance, c9_sp, &c9_r2, 1, &c9_ue_emlrtRTEI);
  for (c9_e_k = 0; c9_e_k <= c9_i10; c9_e_k++) {
    c9_f_k = (real_T)c9_e_k + 1.0;
    c9_i19 = c9_Intensity->size[0];
    c9_i21 = c9_stats->size[0];
    c9_i23 = (int32_T)c9_f_k;
    if ((c9_i23 < 1) || (c9_i23 > c9_i21)) {
      emlrtDynamicBoundsCheckR2012b(c9_i23, 1, c9_i21, &c9_jf_emlrtBCI,
        (emlrtConstCTX)c9_sp);
    }

    c9_Intensity->size[0] = c9_stats->data[c9_i23 - 1].PixelValues->size[0];
    c9_st.site = &c9_fg_emlrtRSI;
    c9_emxEnsureCapacity_real_T1(chartInstance, &c9_st, c9_Intensity, c9_i19,
      &c9_pe_emlrtRTEI);
    c9_i34 = c9_stats->size[0];
    c9_i36 = (int32_T)c9_f_k;
    if ((c9_i36 < 1) || (c9_i36 > c9_i34)) {
      emlrtDynamicBoundsCheckR2012b(c9_i36, 1, c9_i34, &c9_jf_emlrtBCI,
        (emlrtConstCTX)c9_sp);
    }

    c9_d_loop_ub = c9_stats->data[c9_i36 - 1].PixelValues->size[0] - 1;
    for (c9_i42 = 0; c9_i42 <= c9_d_loop_ub; c9_i42++) {
      c9_i48 = c9_stats->size[0];
      c9_i50 = (int32_T)c9_f_k;
      if ((c9_i50 < 1) || (c9_i50 > c9_i48)) {
        emlrtDynamicBoundsCheckR2012b(c9_i50, 1, c9_i48, &c9_kf_emlrtBCI,
          (emlrtConstCTX)c9_sp);
      }

      c9_Intensity->data[c9_i42] = c9_stats->data[c9_i50 - 1].PixelValues->
        data[c9_i42];
    }

    c9_st.site = &c9_ud_emlrtRSI;
    c9_sumIntensity = c9_sum(chartInstance, &c9_st, c9_Intensity);
    c9_i53 = c9_stats->size[0];
    c9_i55 = (int32_T)c9_f_k;
    if ((c9_i55 < 1) || (c9_i55 > c9_i53)) {
      emlrtDynamicBoundsCheckR2012b(c9_i55, 1, c9_i53, &c9_ue_emlrtBCI,
        (emlrtConstCTX)c9_sp);
    }

    for (c9_n = 0; c9_n < 2; c9_n++) {
      c9_b_n = (real_T)c9_n + 1.0;
      c9_i62 = c9_stats->size[0];
      c9_i64 = (int32_T)c9_f_k;
      if ((c9_i64 < 1) || (c9_i64 > c9_i62)) {
        emlrtDynamicBoundsCheckR2012b(c9_i64, 1, c9_i62, &c9_ye_emlrtBCI,
          (emlrtConstCTX)c9_sp);
      }

      c9_i68 = c9_i64 - 1;
      c9_i70 = c9_r1->size[0] * c9_r1->size[1];
      c9_r1->size[0] = c9_stats->data[c9_i68].PixelList->size[0];
      c9_r1->size[1] = 2;
      c9_st.site = &c9_td_emlrtRSI;
      c9_emxEnsureCapacity_real_T(chartInstance, &c9_st, c9_r1, c9_i70,
        &c9_ue_emlrtRTEI);
      c9_i76 = c9_stats->size[0];
      c9_i77 = (int32_T)c9_f_k;
      if ((c9_i77 < 1) || (c9_i77 > c9_i76)) {
        emlrtDynamicBoundsCheckR2012b(c9_i77, 1, c9_i76, &c9_ye_emlrtBCI,
          (emlrtConstCTX)c9_sp);
      }

      c9_i80 = c9_i77 - 1;
      c9_i82 = c9_stats->size[0];
      c9_i84 = (int32_T)c9_f_k;
      if ((c9_i84 < 1) || (c9_i84 > c9_i82)) {
        emlrtDynamicBoundsCheckR2012b(c9_i84, 1, c9_i82, &c9_ye_emlrtBCI,
          (emlrtConstCTX)c9_sp);
      }

      c9_i87 = c9_i84 - 1;
      c9_p_loop_ub = c9_stats->data[c9_i80].PixelList->size[0] * c9_stats->
        data[c9_i87].PixelList->size[1] - 1;
      for (c9_i90 = 0; c9_i90 <= c9_p_loop_ub; c9_i90++) {
        c9_i91 = c9_stats->size[0];
        c9_i93 = (int32_T)c9_f_k;
        if ((c9_i93 < 1) || (c9_i93 > c9_i91)) {
          emlrtDynamicBoundsCheckR2012b(c9_i93, 1, c9_i91, &c9_ye_emlrtBCI,
            (emlrtConstCTX)c9_sp);
        }

        c9_r1->data[c9_i90] = c9_stats->data[c9_i93 - 1].PixelList->data[c9_i90];
      }

      c9_c_n = (int32_T)c9_b_n - 1;
      c9_i92 = c9_r->size[0];
      c9_r->size[0] = c9_r1->size[0];
      c9_st.site = &c9_td_emlrtRSI;
      c9_emxEnsureCapacity_real_T1(chartInstance, &c9_st, c9_r, c9_i92,
        &c9_ue_emlrtRTEI);
      c9_t_loop_ub = c9_r1->size[0] - 1;
      for (c9_i98 = 0; c9_i98 <= c9_t_loop_ub; c9_i98++) {
        c9_r->data[c9_i98] = c9_r1->data[c9_i98 + c9_r1->size[0] * c9_c_n];
      }

      c9_i101 = c9_r->size[0];
      c9_i102 = c9_Intensity->size[0];
      if ((c9_i101 != c9_i102) && ((c9_i101 != 1) && (c9_i102 != 1))) {
        emlrtDimSizeImpxCheckR2021b(c9_i101, c9_i102, &c9_b_emlrtECI,
          (emlrtConstCTX)c9_sp);
      }

      if (c9_r->size[0] == c9_Intensity->size[0]) {
        c9_i105 = c9_r2->size[0];
        c9_r2->size[0] = c9_r->size[0];
        c9_st.site = &c9_td_emlrtRSI;
        c9_emxEnsureCapacity_real_T1(chartInstance, &c9_st, c9_r2, c9_i105,
          &c9_ue_emlrtRTEI);
        c9_y_loop_ub = c9_r->size[0] - 1;
        for (c9_i107 = 0; c9_i107 <= c9_y_loop_ub; c9_i107++) {
          c9_r2->data[c9_i107] = c9_r->data[c9_i107] * c9_Intensity->
            data[c9_i107];
        }

        c9_st.site = &c9_td_emlrtRSI;
        c9_M = c9_sum(chartInstance, &c9_st, c9_r2);
      } else {
        c9_st.site = &c9_td_emlrtRSI;
        c9_M = c9_binary_expand_op(chartInstance, &c9_st, c9_td_emlrtRSI, c9_r,
          c9_Intensity);
      }

      c9_wc[(int32_T)c9_b_n - 1] = c9_M / c9_sumIntensity;
    }

    for (c9_i60 = 0; c9_i60 < 2; c9_i60++) {
      c9_i63 = c9_stats->size[0];
      c9_i65 = (int32_T)c9_f_k;
      if ((c9_i65 < 1) || (c9_i65 > c9_i63)) {
        emlrtDynamicBoundsCheckR2012b(c9_i65, 1, c9_i63, &c9_af_emlrtBCI,
          (emlrtConstCTX)c9_sp);
      }

      c9_stats->data[c9_i65 - 1].WeightedCentroid[c9_i60] = c9_wc[c9_i60];
    }
  }

  c9_emxFree_real_T(chartInstance, &c9_r2);
  c9_emxFree_real_T(chartInstance, &c9_r);
  c9_emxFree_real_T(chartInstance, &c9_r1);
  c9_emxFree_real_T(chartInstance, &c9_Intensity);
}

static void c9_b_nullAssignment(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_real_T *c9_x, int32_T
  c9_idx)
{
  static char_T c9_b_cv[25] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'u', 'b',
    's', 'd', 'e', 'l', 'd', 'i', 'm', 'm', 'i', 's', 'm', 'a', 't', 'c', 'h' };

  c9_emxArray_real_T *c9_b_x;
  emlrtStack c9_b_st;
  emlrtStack c9_c_st;
  emlrtStack c9_st;
  const mxArray *c9_b_y = NULL;
  const mxArray *c9_c_y = NULL;
  const mxArray *c9_d_y = NULL;
  const mxArray *c9_e_y = NULL;
  int32_T c9_b_b;
  int32_T c9_b_i;
  int32_T c9_b_idx;
  int32_T c9_b_j;
  int32_T c9_b_loop_ub;
  int32_T c9_c_b;
  int32_T c9_c_idx;
  int32_T c9_c_x;
  int32_T c9_d_a;
  int32_T c9_d_idx;
  int32_T c9_d_x;
  int32_T c9_e_a;
  int32_T c9_i;
  int32_T c9_i1;
  int32_T c9_i2;
  int32_T c9_i3;
  int32_T c9_i4;
  int32_T c9_i5;
  int32_T c9_j;
  int32_T c9_loop_ub;
  int32_T c9_n;
  int32_T c9_nrows;
  int32_T c9_nrowx;
  boolean_T c9_b;
  boolean_T c9_overflow;
  boolean_T c9_p;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_b_st.prev = &c9_st;
  c9_b_st.tls = c9_st.tls;
  c9_c_st.prev = &c9_b_st;
  c9_c_st.tls = c9_b_st.tls;
  c9_st.site = &c9_ee_emlrtRSI;
  c9_emxInit_real_T(chartInstance, &c9_st, &c9_b_x, 2, &c9_ef_emlrtRTEI);
  c9_i = c9_b_x->size[0] * c9_b_x->size[1];
  c9_b_x->size[0] = c9_x->size[0];
  c9_b_x->size[1] = 2;
  c9_b_st.site = &c9_ee_emlrtRSI;
  c9_emxEnsureCapacity_real_T(chartInstance, &c9_b_st, c9_b_x, c9_i,
    &c9_ef_emlrtRTEI);
  c9_loop_ub = c9_x->size[0] * c9_x->size[1] - 1;
  for (c9_i1 = 0; c9_i1 <= c9_loop_ub; c9_i1++) {
    c9_b_x->data[c9_i1] = c9_x->data[c9_i1];
  }

  c9_b_idx = c9_idx;
  c9_c_idx = c9_b_idx;
  c9_n = c9_b_x->size[0];
  c9_emxFree_real_T(chartInstance, &c9_b_x);
  c9_p = true;
  if (c9_c_idx > c9_n) {
    c9_p = false;
  } else {
    c9_c_x = c9_c_idx;
    c9_d_x = c9_c_x;
    if (c9_c_idx != c9_d_x) {
      c9_p = false;
    }
  }

  if (!c9_p) {
    c9_b_y = NULL;
    sf_mex_assign(&c9_b_y, sf_mex_create("y", c9_b_cv, 10, 0U, 1U, 0U, 2, 1, 25),
                  false);
    c9_c_y = NULL;
    sf_mex_assign(&c9_c_y, sf_mex_create("y", c9_b_cv, 10, 0U, 1U, 0U, 2, 1, 25),
                  false);
    sf_mex_call(&c9_st, &c9_n_emlrtMCI, "error", 0U, 2U, 14, c9_b_y, 14,
                sf_mex_call(&c9_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c9_st, NULL, "message", 1U, 1U, 14, c9_c_y)));
  }

  c9_st.site = &c9_fe_emlrtRSI;
  c9_d_idx = c9_idx;
  c9_nrowx = c9_x->size[0];
  c9_nrows = c9_nrowx - 1;
  c9_b_st.site = &c9_ge_emlrtRSI;
  for (c9_j = 0; c9_j < 2; c9_j++) {
    c9_b_j = c9_j;
    c9_b_st.site = &c9_he_emlrtRSI;
    c9_d_a = c9_d_idx;
    c9_b_b = c9_nrows;
    c9_e_a = c9_d_a;
    c9_c_b = c9_b_b;
    if (c9_e_a > c9_c_b) {
      c9_overflow = false;
    } else {
      c9_overflow = (c9_c_b > 2147483646);
    }

    if (c9_overflow) {
      c9_c_st.site = &c9_ib_emlrtRSI;
      c9_check_forloop_overflow_error(chartInstance, &c9_c_st);
    }

    for (c9_b_i = c9_d_idx; c9_b_i <= c9_nrows; c9_b_i++) {
      c9_x->data[(c9_b_i + c9_x->size[0] * c9_b_j) - 1] = c9_x->data[c9_b_i +
        c9_x->size[0] * c9_b_j];
    }
  }

  if (!(c9_nrows <= c9_nrowx)) {
    c9_d_y = NULL;
    sf_mex_assign(&c9_d_y, sf_mex_create("y", c9_cv1, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    c9_e_y = NULL;
    sf_mex_assign(&c9_e_y, sf_mex_create("y", c9_cv1, 10, 0U, 1U, 0U, 2, 1, 30),
                  false);
    sf_mex_call(&c9_st, &c9_o_emlrtMCI, "error", 0U, 2U, 14, c9_d_y, 14,
                sf_mex_call(&c9_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c9_st, NULL, "message", 1U, 1U, 14, c9_e_y)));
  }

  c9_b = (c9_nrows < 1);
  if (c9_b) {
    c9_i2 = -1;
  } else {
    c9_i2 = c9_nrows - 1;
  }

  for (c9_i3 = 0; c9_i3 < 2; c9_i3++) {
    c9_b_loop_ub = c9_i2;
    for (c9_i5 = 0; c9_i5 <= c9_b_loop_ub; c9_i5++) {
      c9_x->data[c9_i5 + (c9_i2 + 1) * c9_i3] = c9_x->data[c9_i5 + c9_x->size[0]
        * c9_i3];
    }
  }

  c9_i4 = c9_x->size[0] * c9_x->size[1];
  c9_x->size[0] = c9_i2 + 1;
  c9_x->size[1] = 2;
  c9_emxEnsureCapacity_real_T(chartInstance, &c9_st, c9_x, c9_i4,
    &c9_ff_emlrtRTEI);
}

static void c9_b_round(SFc9_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c9_sp, c9_emxArray_real_T *c9_x)
{
  emlrtStack c9_b_st;
  emlrtStack c9_c_st;
  emlrtStack c9_st;
  real_T c9_b_x;
  real_T c9_c_x;
  int32_T c9_b;
  int32_T c9_b_b;
  int32_T c9_b_k;
  int32_T c9_k;
  int32_T c9_nx;
  boolean_T c9_overflow;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_st.site = &c9_ie_emlrtRSI;
  c9_b_st.prev = &c9_st;
  c9_b_st.tls = c9_st.tls;
  c9_c_st.prev = &c9_b_st;
  c9_c_st.tls = c9_b_st.tls;
  c9_nx = c9_x->size[0];
  c9_b_st.site = &c9_je_emlrtRSI;
  c9_b = c9_nx;
  c9_b_b = c9_b;
  if (c9_b_b < 1) {
    c9_overflow = false;
  } else {
    c9_overflow = (c9_b_b > 2147483646);
  }

  if (c9_overflow) {
    c9_c_st.site = &c9_ib_emlrtRSI;
    c9_check_forloop_overflow_error(chartInstance, &c9_c_st);
  }

  for (c9_k = 0; c9_k < c9_nx; c9_k++) {
    c9_b_k = c9_k;
    c9_b_x = c9_x->data[c9_b_k];
    c9_c_x = c9_b_x;
    c9_c_x = muDoubleScalarRound(c9_c_x);
    c9_x->data[c9_b_k] = c9_c_x;
  }
}

static void c9_b_sort(SFc9_flightControlSystemInstanceStruct *chartInstance,
                      const emlrtStack *c9_sp, c9_emxArray_real_T *c9_x,
                      c9_emxArray_int32_T *c9_idx)
{
  c9_emxArray_int32_T *c9_iwork;
  c9_emxArray_real_T *c9_xwork;
  emlrtStack c9_b_st;
  emlrtStack c9_c_st;
  emlrtStack c9_d_st;
  emlrtStack c9_e_st;
  emlrtStack c9_st;
  real_T c9_x4[4];
  real_T c9_dv[2];
  real_T c9_b_x;
  int32_T c9_idx4[4];
  int32_T c9_perm[4];
  int32_T c9_b_iv[1];
  int32_T c9_b_iwork[1];
  int32_T c9_b_xwork[1];
  int32_T c9_b_b;
  int32_T c9_b_i1;
  int32_T c9_b_i2;
  int32_T c9_b_i3;
  int32_T c9_b_i4;
  int32_T c9_b_k;
  int32_T c9_b_loop_ub;
  int32_T c9_b_n;
  int32_T c9_b_nNaNs;
  int32_T c9_b_nNonNaN;
  int32_T c9_c_b;
  int32_T c9_c_k;
  int32_T c9_c_loop_ub;
  int32_T c9_c_n;
  int32_T c9_d_k;
  int32_T c9_e_b;
  int32_T c9_e_k;
  int32_T c9_f_b;
  int32_T c9_f_k;
  int32_T c9_g_b;
  int32_T c9_g_k;
  int32_T c9_h_b;
  int32_T c9_h_k;
  int32_T c9_i;
  int32_T c9_i1;
  int32_T c9_i10;
  int32_T c9_i11;
  int32_T c9_i12;
  int32_T c9_i13;
  int32_T c9_i14;
  int32_T c9_i2;
  int32_T c9_i3;
  int32_T c9_i4;
  int32_T c9_i5;
  int32_T c9_i6;
  int32_T c9_i7;
  int32_T c9_i8;
  int32_T c9_i9;
  int32_T c9_i_b;
  int32_T c9_i_k;
  int32_T c9_ib;
  int32_T c9_itmp;
  int32_T c9_j_b;
  int32_T c9_k;
  int32_T c9_k_b;
  int32_T c9_l_b;
  int32_T c9_loop_ub;
  int32_T c9_m;
  int32_T c9_m_b;
  int32_T c9_n;
  int32_T c9_nBlocks;
  int32_T c9_nLastBlock;
  int32_T c9_nNaNs;
  int32_T c9_nNonNaN;
  int32_T c9_n_b;
  int32_T c9_o_b;
  int32_T c9_p_b;
  int32_T c9_preSortLevel;
  int32_T c9_quartetOffset;
  int32_T c9_tailOffset;
  int32_T c9_wOffset;
  boolean_T c9_b;
  boolean_T c9_b_overflow;
  boolean_T c9_c_overflow;
  boolean_T c9_d_b;
  boolean_T c9_d_overflow;
  boolean_T c9_e_overflow;
  boolean_T c9_f_overflow;
  boolean_T c9_overflow;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_st.site = &c9_le_emlrtRSI;
  c9_b_st.prev = &c9_st;
  c9_b_st.tls = c9_st.tls;
  c9_c_st.prev = &c9_b_st;
  c9_c_st.tls = c9_b_st.tls;
  c9_d_st.prev = &c9_c_st;
  c9_d_st.tls = c9_c_st.tls;
  c9_e_st.prev = &c9_d_st;
  c9_e_st.tls = c9_d_st.tls;
  for (c9_i = 0; c9_i < 2; c9_i++) {
    c9_dv[c9_i] = (real_T)c9_x->size[c9_i];
  }

  c9_i1 = c9_idx->size[0] * c9_idx->size[1];
  c9_idx->size[0] = (int32_T)c9_dv[0];
  c9_idx->size[1] = 1;
  c9_emxEnsureCapacity_int32_T1(chartInstance, &c9_st, c9_idx, c9_i1,
    &c9_gf_emlrtRTEI);
  c9_loop_ub = (int32_T)c9_dv[0] - 1;
  for (c9_i2 = 0; c9_i2 <= c9_loop_ub; c9_i2++) {
    c9_idx->data[c9_i2] = 0;
  }

  c9_b = (c9_x->size[0] == 0);
  if (!c9_b) {
    c9_b_st.site = &c9_me_emlrtRSI;
    c9_emxInit_int32_T(chartInstance, &c9_st, &c9_iwork, 1, &c9_if_emlrtRTEI);
    c9_emxInit_real_T1(chartInstance, &c9_st, &c9_xwork, 1, &c9_lf_emlrtRTEI);
    for (c9_k = 0; c9_k < 1; c9_k++) {
      c9_b_st.site = &c9_ne_emlrtRSI;
      c9_n = c9_x->size[0];
      c9_c_st.site = &c9_oe_emlrtRSI;
      c9_b_n = c9_x->size[0];
      for (c9_i3 = 0; c9_i3 < 4; c9_i3++) {
        c9_x4[c9_i3] = 0.0;
      }

      for (c9_i4 = 0; c9_i4 < 4; c9_i4++) {
        c9_idx4[c9_i4] = 0;
      }

      c9_i5 = c9_iwork->size[0];
      c9_iwork->size[0] = c9_idx->size[0];
      c9_emxEnsureCapacity_int32_T(chartInstance, &c9_c_st, c9_iwork, c9_i5,
        &c9_hf_emlrtRTEI);
      c9_b_iv[0] = c9_iwork->size[0];
      c9_i6 = c9_iwork->size[0];
      c9_iwork->size[0] = c9_b_iv[0];
      c9_emxEnsureCapacity_int32_T(chartInstance, &c9_c_st, c9_iwork, c9_i6,
        &c9_if_emlrtRTEI);
      c9_b_iwork[0] = c9_iwork->size[0];
      c9_i7 = c9_iwork->size[0];
      c9_iwork->size[0] = c9_b_iwork[0];
      c9_emxEnsureCapacity_int32_T(chartInstance, &c9_c_st, c9_iwork, c9_i7,
        &c9_jf_emlrtRTEI);
      c9_b_loop_ub = c9_b_iwork[0] - 1;
      for (c9_i8 = 0; c9_i8 <= c9_b_loop_ub; c9_i8++) {
        c9_iwork->data[c9_i8] = 0;
      }

      c9_dv[0] = (real_T)c9_x->size[0];
      c9_i9 = c9_xwork->size[0];
      c9_xwork->size[0] = (int32_T)c9_dv[0];
      c9_emxEnsureCapacity_real_T1(chartInstance, &c9_c_st, c9_xwork, c9_i9,
        &c9_kf_emlrtRTEI);
      c9_b_iv[0] = c9_xwork->size[0];
      c9_i10 = c9_xwork->size[0];
      c9_xwork->size[0] = c9_b_iv[0];
      c9_emxEnsureCapacity_real_T1(chartInstance, &c9_c_st, c9_xwork, c9_i10,
        &c9_lf_emlrtRTEI);
      c9_b_xwork[0] = c9_xwork->size[0];
      c9_i11 = c9_xwork->size[0];
      c9_xwork->size[0] = c9_b_xwork[0];
      c9_emxEnsureCapacity_real_T1(chartInstance, &c9_c_st, c9_xwork, c9_i11,
        &c9_mf_emlrtRTEI);
      c9_c_loop_ub = c9_b_xwork[0] - 1;
      for (c9_i12 = 0; c9_i12 <= c9_c_loop_ub; c9_i12++) {
        c9_xwork->data[c9_i12] = 0.0;
      }

      c9_nNaNs = 0;
      c9_ib = 0;
      c9_d_st.site = &c9_ue_emlrtRSI;
      c9_b_b = c9_b_n;
      c9_c_b = c9_b_b;
      if (c9_c_b < 1) {
        c9_overflow = false;
      } else {
        c9_overflow = (c9_c_b > 2147483646);
      }

      if (c9_overflow) {
        c9_e_st.site = &c9_ib_emlrtRSI;
        c9_check_forloop_overflow_error(chartInstance, &c9_e_st);
      }

      for (c9_b_k = 0; c9_b_k < c9_b_n; c9_b_k++) {
        c9_c_k = c9_b_k;
        c9_b_x = c9_x->data[c9_c_k];
        c9_d_b = muDoubleScalarIsNaN(c9_b_x);
        if (c9_d_b) {
          c9_idx->data[(c9_b_n - c9_nNaNs) - 1] = c9_c_k + 1;
          c9_xwork->data[(c9_b_n - c9_nNaNs) - 1] = c9_x->data[c9_c_k];
          c9_nNaNs++;
        } else {
          c9_ib++;
          c9_idx4[c9_ib - 1] = c9_c_k + 1;
          c9_x4[c9_ib - 1] = c9_x->data[c9_c_k];
          if (c9_ib == 4) {
            c9_quartetOffset = c9_c_k - c9_nNaNs;
            if (c9_x4[0] >= c9_x4[1]) {
              c9_b_i1 = 1;
              c9_b_i2 = 2;
            } else {
              c9_b_i1 = 2;
              c9_b_i2 = 1;
            }

            if (c9_x4[2] >= c9_x4[3]) {
              c9_b_i3 = 3;
              c9_b_i4 = 4;
            } else {
              c9_b_i3 = 4;
              c9_b_i4 = 3;
            }

            if (c9_x4[c9_b_i1 - 1] >= c9_x4[c9_b_i3 - 1]) {
              if (c9_x4[c9_b_i2 - 1] >= c9_x4[c9_b_i3 - 1]) {
                c9_perm[0] = c9_b_i1;
                c9_perm[1] = c9_b_i2;
                c9_perm[2] = c9_b_i3;
                c9_perm[3] = c9_b_i4;
              } else if (c9_x4[c9_b_i2 - 1] >= c9_x4[c9_b_i4 - 1]) {
                c9_perm[0] = c9_b_i1;
                c9_perm[1] = c9_b_i3;
                c9_perm[2] = c9_b_i2;
                c9_perm[3] = c9_b_i4;
              } else {
                c9_perm[0] = c9_b_i1;
                c9_perm[1] = c9_b_i3;
                c9_perm[2] = c9_b_i4;
                c9_perm[3] = c9_b_i2;
              }
            } else if (c9_x4[c9_b_i1 - 1] >= c9_x4[c9_b_i4 - 1]) {
              if (c9_x4[c9_b_i2 - 1] >= c9_x4[c9_b_i4 - 1]) {
                c9_perm[0] = c9_b_i3;
                c9_perm[1] = c9_b_i1;
                c9_perm[2] = c9_b_i2;
                c9_perm[3] = c9_b_i4;
              } else {
                c9_perm[0] = c9_b_i3;
                c9_perm[1] = c9_b_i1;
                c9_perm[2] = c9_b_i4;
                c9_perm[3] = c9_b_i2;
              }
            } else {
              c9_perm[0] = c9_b_i3;
              c9_perm[1] = c9_b_i4;
              c9_perm[2] = c9_b_i1;
              c9_perm[3] = c9_b_i2;
            }

            c9_idx->data[c9_quartetOffset - 3] = c9_idx4[c9_perm[0] - 1];
            c9_idx->data[c9_quartetOffset - 2] = c9_idx4[c9_perm[1] - 1];
            c9_idx->data[c9_quartetOffset - 1] = c9_idx4[c9_perm[2] - 1];
            c9_idx->data[c9_quartetOffset] = c9_idx4[c9_perm[3] - 1];
            c9_x->data[c9_quartetOffset - 3] = c9_x4[c9_perm[0] - 1];
            c9_x->data[c9_quartetOffset - 2] = c9_x4[c9_perm[1] - 1];
            c9_x->data[c9_quartetOffset - 1] = c9_x4[c9_perm[2] - 1];
            c9_x->data[c9_quartetOffset] = c9_x4[c9_perm[3] - 1];
            c9_ib = 0;
          }
        }
      }

      c9_wOffset = (c9_b_n - c9_nNaNs) - 1;
      if (c9_ib > 0) {
        c9_c_n = c9_ib;
        for (c9_i13 = 0; c9_i13 < 4; c9_i13++) {
          c9_perm[c9_i13] = 0;
        }

        if (c9_c_n == 1) {
          c9_perm[0] = 1;
        } else if (c9_c_n == 2) {
          if (c9_x4[0] >= c9_x4[1]) {
            c9_perm[0] = 1;
            c9_perm[1] = 2;
          } else {
            c9_perm[0] = 2;
            c9_perm[1] = 1;
          }
        } else if (c9_x4[0] >= c9_x4[1]) {
          if (c9_x4[1] >= c9_x4[2]) {
            c9_perm[0] = 1;
            c9_perm[1] = 2;
            c9_perm[2] = 3;
          } else if (c9_x4[0] >= c9_x4[2]) {
            c9_perm[0] = 1;
            c9_perm[1] = 3;
            c9_perm[2] = 2;
          } else {
            c9_perm[0] = 3;
            c9_perm[1] = 1;
            c9_perm[2] = 2;
          }
        } else if (c9_x4[0] >= c9_x4[2]) {
          c9_perm[0] = 2;
          c9_perm[1] = 1;
          c9_perm[2] = 3;
        } else if (c9_x4[1] >= c9_x4[2]) {
          c9_perm[0] = 2;
          c9_perm[1] = 3;
          c9_perm[2] = 1;
        } else {
          c9_perm[0] = 3;
          c9_perm[1] = 2;
          c9_perm[2] = 1;
        }

        c9_d_st.site = &c9_ve_emlrtRSI;
        c9_g_b = c9_ib;
        c9_h_b = c9_g_b;
        if (c9_h_b < 1) {
          c9_c_overflow = false;
        } else {
          c9_c_overflow = (c9_h_b > 2147483646);
        }

        if (c9_c_overflow) {
          c9_e_st.site = &c9_ib_emlrtRSI;
          c9_check_forloop_overflow_error(chartInstance, &c9_e_st);
        }

        c9_i14 = (uint8_T)c9_ib - 1;
        for (c9_e_k = 0; c9_e_k <= c9_i14; c9_e_k++) {
          c9_c_k = c9_e_k;
          c9_idx->data[((c9_wOffset - c9_ib) + c9_c_k) + 1] =
            c9_idx4[c9_perm[c9_c_k] - 1];
          c9_x->data[((c9_wOffset - c9_ib) + c9_c_k) + 1] = c9_x4[c9_perm[c9_c_k]
            - 1];
        }
      }

      c9_m = c9_nNaNs >> 1;
      c9_d_st.site = &c9_we_emlrtRSI;
      c9_e_b = c9_m;
      c9_f_b = c9_e_b;
      if (c9_f_b < 1) {
        c9_b_overflow = false;
      } else {
        c9_b_overflow = (c9_f_b > 2147483646);
      }

      if (c9_b_overflow) {
        c9_e_st.site = &c9_ib_emlrtRSI;
        c9_check_forloop_overflow_error(chartInstance, &c9_e_st);
      }

      for (c9_d_k = 0; c9_d_k < c9_m; c9_d_k++) {
        c9_c_k = c9_d_k + 1;
        c9_itmp = c9_idx->data[c9_wOffset + c9_c_k];
        c9_idx->data[c9_wOffset + c9_c_k] = c9_idx->data[c9_b_n - c9_c_k];
        c9_idx->data[c9_b_n - c9_c_k] = c9_itmp;
        c9_x->data[c9_wOffset + c9_c_k] = c9_xwork->data[c9_b_n - c9_c_k];
        c9_x->data[c9_b_n - c9_c_k] = c9_xwork->data[c9_wOffset + c9_c_k];
      }

      if ((c9_nNaNs & 1) != 0) {
        c9_x->data[(c9_wOffset + c9_m) + 1] = c9_xwork->data[(c9_wOffset + c9_m)
          + 1];
      }

      c9_nNonNaN = c9_n - c9_nNaNs;
      c9_preSortLevel = 2;
      if (c9_nNonNaN > 1) {
        if (c9_n >= 256) {
          c9_nBlocks = c9_nNonNaN >> 8;
          if (c9_nBlocks > 0) {
            c9_c_st.site = &c9_pe_emlrtRSI;
            c9_i_b = c9_nBlocks;
            c9_j_b = c9_i_b;
            if (c9_j_b < 1) {
              c9_d_overflow = false;
            } else {
              c9_d_overflow = (c9_j_b > 2147483646);
            }

            if (c9_d_overflow) {
              c9_d_st.site = &c9_ib_emlrtRSI;
              c9_check_forloop_overflow_error(chartInstance, &c9_d_st);
            }

            for (c9_m_b = 0; c9_m_b < c9_nBlocks; c9_m_b++) {
              c9_n_b = c9_m_b;
              c9_c_st.site = &c9_qe_emlrtRSI;
              c9_b_merge_pow2_block(chartInstance, &c9_c_st, c9_idx, c9_x,
                                    c9_n_b << 8);
            }

            c9_tailOffset = c9_nBlocks << 8;
            c9_nLastBlock = c9_nNonNaN - c9_tailOffset;
            if (c9_nLastBlock > 0) {
              c9_c_st.site = &c9_re_emlrtRSI;
              c9_b_merge_block(chartInstance, &c9_c_st, c9_idx, c9_x,
                               c9_tailOffset, c9_nLastBlock, 2, c9_iwork,
                               c9_xwork);
            }

            c9_preSortLevel = 8;
          }
        }

        c9_c_st.site = &c9_se_emlrtRSI;
        c9_b_merge_block(chartInstance, &c9_c_st, c9_idx, c9_x, 0, c9_nNonNaN,
                         c9_preSortLevel, c9_iwork, c9_xwork);
      }

      if ((c9_nNaNs > 0) && (c9_nNonNaN > 0)) {
        c9_c_st.site = &c9_te_emlrtRSI;
        c9_b_nNonNaN = c9_nNonNaN - 1;
        c9_b_nNaNs = c9_nNaNs - 1;
        c9_d_st.site = &c9_hf_emlrtRSI;
        c9_k_b = c9_b_nNaNs + 1;
        c9_l_b = c9_k_b;
        if (c9_l_b < 1) {
          c9_e_overflow = false;
        } else {
          c9_e_overflow = (c9_l_b > 2147483646);
        }

        if (c9_e_overflow) {
          c9_e_st.site = &c9_ib_emlrtRSI;
          c9_check_forloop_overflow_error(chartInstance, &c9_e_st);
        }

        for (c9_f_k = 0; c9_f_k <= c9_b_nNaNs; c9_f_k++) {
          c9_h_k = c9_f_k;
          c9_xwork->data[c9_h_k] = c9_x->data[(c9_b_nNonNaN + c9_h_k) + 1];
          c9_iwork->data[c9_h_k] = c9_idx->data[(c9_b_nNonNaN + c9_h_k) + 1];
        }

        for (c9_g_k = c9_b_nNonNaN + 1; c9_g_k >= 1; c9_g_k--) {
          c9_x->data[c9_b_nNaNs + c9_g_k] = c9_x->data[c9_g_k - 1];
          c9_idx->data[c9_b_nNaNs + c9_g_k] = c9_idx->data[c9_g_k - 1];
        }

        c9_d_st.site = &c9_if_emlrtRSI;
        c9_o_b = c9_b_nNaNs + 1;
        c9_p_b = c9_o_b;
        if (c9_p_b < 1) {
          c9_f_overflow = false;
        } else {
          c9_f_overflow = (c9_p_b > 2147483646);
        }

        if (c9_f_overflow) {
          c9_e_st.site = &c9_ib_emlrtRSI;
          c9_check_forloop_overflow_error(chartInstance, &c9_e_st);
        }

        for (c9_i_k = 0; c9_i_k <= c9_b_nNaNs; c9_i_k++) {
          c9_h_k = c9_i_k;
          c9_x->data[c9_h_k] = c9_xwork->data[c9_h_k];
          c9_idx->data[c9_h_k] = c9_iwork->data[c9_h_k];
        }
      }
    }

    c9_emxFree_real_T(chartInstance, &c9_xwork);
    c9_emxFree_int32_T(chartInstance, &c9_iwork);
  }
}

static void c9_b_merge_pow2_block(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_int32_T *c9_idx,
  c9_emxArray_real_T *c9_x, int32_T c9_offset)
{
  emlrtStack c9_b_st;
  emlrtStack c9_st;
  real_T c9_xwork[256];
  int32_T c9_iwork[256];
  int32_T c9_b;
  int32_T c9_bLen;
  int32_T c9_bLen2;
  int32_T c9_b_b;
  int32_T c9_b_j;
  int32_T c9_b_k;
  int32_T c9_blockOffset;
  int32_T c9_c_b;
  int32_T c9_c_j;
  int32_T c9_d_a;
  int32_T c9_d_b;
  int32_T c9_e_a;
  int32_T c9_e_b;
  int32_T c9_exitg1;
  int32_T c9_f_b;
  int32_T c9_g_b;
  int32_T c9_i;
  int32_T c9_i1;
  int32_T c9_iout;
  int32_T c9_j;
  int32_T c9_k;
  int32_T c9_nPairs;
  int32_T c9_offset1;
  int32_T c9_p;
  int32_T c9_q;
  boolean_T c9_b_overflow;
  boolean_T c9_c_overflow;
  boolean_T c9_overflow;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_b_st.prev = &c9_st;
  c9_b_st.tls = c9_st.tls;
  for (c9_b = 0; c9_b < 6; c9_b++) {
    c9_bLen = 1 << (c9_b + 2);
    c9_bLen2 = c9_bLen << 1;
    c9_nPairs = 256 >> (c9_b + 3);
    c9_st.site = &c9_xe_emlrtRSI;
    c9_b_b = c9_nPairs;
    c9_c_b = c9_b_b;
    if (c9_c_b < 1) {
      c9_overflow = false;
    } else {
      c9_overflow = (c9_c_b > 2147483646);
    }

    if (c9_overflow) {
      c9_b_st.site = &c9_ib_emlrtRSI;
      c9_check_forloop_overflow_error(chartInstance, &c9_b_st);
    }

    c9_i = (uint8_T)c9_nPairs - 1;
    for (c9_k = 0; c9_k <= c9_i; c9_k++) {
      c9_b_k = c9_k;
      c9_blockOffset = (c9_offset + c9_b_k * c9_bLen2) - 1;
      c9_st.site = &c9_ye_emlrtRSI;
      c9_d_b = c9_bLen2;
      c9_e_b = c9_d_b;
      if (c9_e_b < 1) {
        c9_b_overflow = false;
      } else {
        c9_b_overflow = (c9_e_b > 2147483646);
      }

      if (c9_b_overflow) {
        c9_b_st.site = &c9_ib_emlrtRSI;
        c9_check_forloop_overflow_error(chartInstance, &c9_b_st);
      }

      c9_i1 = (uint16_T)c9_bLen2 - 1;
      for (c9_j = 0; c9_j <= c9_i1; c9_j++) {
        c9_b_j = c9_j;
        c9_iwork[c9_b_j] = c9_idx->data[(c9_blockOffset + c9_b_j) + 1];
        c9_xwork[c9_b_j] = c9_x->data[(c9_blockOffset + c9_b_j) + 1];
      }

      c9_p = 0;
      c9_q = c9_bLen;
      c9_iout = c9_blockOffset;
      do {
        c9_exitg1 = 0;
        c9_iout++;
        if (c9_xwork[c9_p] >= c9_xwork[c9_q]) {
          c9_idx->data[c9_iout] = c9_iwork[c9_p];
          c9_x->data[c9_iout] = c9_xwork[c9_p];
          if (c9_p + 1 < c9_bLen) {
            c9_p++;
          } else {
            c9_exitg1 = 1;
          }
        } else {
          c9_idx->data[c9_iout] = c9_iwork[c9_q];
          c9_x->data[c9_iout] = c9_xwork[c9_q];
          if (c9_q + 1 < c9_bLen2) {
            c9_q++;
          } else {
            c9_offset1 = c9_iout - c9_p;
            c9_st.site = &c9_af_emlrtRSI;
            c9_d_a = c9_p + 1;
            c9_f_b = c9_bLen;
            c9_e_a = c9_d_a;
            c9_g_b = c9_f_b;
            if (c9_e_a > c9_g_b) {
              c9_c_overflow = false;
            } else {
              c9_c_overflow = (c9_g_b > 2147483646);
            }

            if (c9_c_overflow) {
              c9_b_st.site = &c9_ib_emlrtRSI;
              c9_check_forloop_overflow_error(chartInstance, &c9_b_st);
            }

            for (c9_c_j = c9_p + 1; c9_c_j <= c9_bLen; c9_c_j++) {
              c9_idx->data[c9_offset1 + c9_c_j] = c9_iwork[c9_c_j - 1];
              c9_x->data[c9_offset1 + c9_c_j] = c9_xwork[c9_c_j - 1];
            }

            c9_exitg1 = 1;
          }
        }
      } while (c9_exitg1 == 0);
    }
  }
}

static void c9_b_merge_block(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_int32_T *c9_idx,
  c9_emxArray_real_T *c9_x, int32_T c9_offset, int32_T c9_n, int32_T
  c9_preSortLevel, c9_emxArray_int32_T *c9_iwork, c9_emxArray_real_T *c9_xwork)
{
  emlrtStack c9_b_st;
  emlrtStack c9_st;
  int32_T c9_b;
  int32_T c9_bLen;
  int32_T c9_bLen2;
  int32_T c9_b_b;
  int32_T c9_b_k;
  int32_T c9_k;
  int32_T c9_nBlocks;
  int32_T c9_nPairs;
  int32_T c9_nTail;
  int32_T c9_tailOffset;
  boolean_T c9_overflow;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_b_st.prev = &c9_st;
  c9_b_st.tls = c9_st.tls;
  c9_nBlocks = c9_n >> c9_preSortLevel;
  c9_bLen = 1 << c9_preSortLevel;
  while (c9_nBlocks > 1) {
    if ((c9_nBlocks & 1) != 0) {
      c9_nBlocks--;
      c9_tailOffset = c9_bLen * c9_nBlocks;
      c9_nTail = c9_n - c9_tailOffset;
      if (c9_nTail > c9_bLen) {
        c9_st.site = &c9_bf_emlrtRSI;
        c9_b_merge(chartInstance, &c9_st, c9_idx, c9_x, c9_offset +
                   c9_tailOffset, c9_bLen, c9_nTail - c9_bLen, c9_iwork,
                   c9_xwork);
      }
    }

    c9_bLen2 = c9_bLen << 1;
    c9_nPairs = c9_nBlocks >> 1;
    c9_st.site = &c9_cf_emlrtRSI;
    c9_b = c9_nPairs;
    c9_b_b = c9_b;
    if (c9_b_b < 1) {
      c9_overflow = false;
    } else {
      c9_overflow = (c9_b_b > 2147483646);
    }

    if (c9_overflow) {
      c9_b_st.site = &c9_ib_emlrtRSI;
      c9_check_forloop_overflow_error(chartInstance, &c9_b_st);
    }

    for (c9_k = 0; c9_k < c9_nPairs; c9_k++) {
      c9_b_k = c9_k;
      c9_st.site = &c9_df_emlrtRSI;
      c9_b_merge(chartInstance, &c9_st, c9_idx, c9_x, c9_offset + c9_b_k *
                 c9_bLen2, c9_bLen, c9_bLen, c9_iwork, c9_xwork);
    }

    c9_bLen = c9_bLen2;
    c9_nBlocks = c9_nPairs;
  }

  if (c9_n > c9_bLen) {
    c9_st.site = &c9_ef_emlrtRSI;
    c9_b_merge(chartInstance, &c9_st, c9_idx, c9_x, c9_offset, c9_bLen, c9_n -
               c9_bLen, c9_iwork, c9_xwork);
  }
}

static void c9_b_merge(SFc9_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c9_sp, c9_emxArray_int32_T *c9_idx, c9_emxArray_real_T *c9_x,
  int32_T c9_offset, int32_T c9_np, int32_T c9_nq, c9_emxArray_int32_T *c9_iwork,
  c9_emxArray_real_T *c9_xwork)
{
  emlrtStack c9_b_st;
  emlrtStack c9_st;
  int32_T c9_b;
  int32_T c9_b_b;
  int32_T c9_b_j;
  int32_T c9_c_b;
  int32_T c9_c_j;
  int32_T c9_d_a;
  int32_T c9_d_b;
  int32_T c9_e_a;
  int32_T c9_exitg1;
  int32_T c9_iout;
  int32_T c9_j;
  int32_T c9_n;
  int32_T c9_offset1;
  int32_T c9_p;
  int32_T c9_q;
  int32_T c9_qend;
  boolean_T c9_b_overflow;
  boolean_T c9_overflow;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_b_st.prev = &c9_st;
  c9_b_st.tls = c9_st.tls;
  if (c9_nq != 0) {
    c9_n = c9_np + c9_nq;
    c9_st.site = &c9_gf_emlrtRSI;
    c9_b = c9_n;
    c9_b_b = c9_b;
    if (c9_b_b < 1) {
      c9_overflow = false;
    } else {
      c9_overflow = (c9_b_b > 2147483646);
    }

    if (c9_overflow) {
      c9_b_st.site = &c9_ib_emlrtRSI;
      c9_check_forloop_overflow_error(chartInstance, &c9_b_st);
    }

    for (c9_j = 0; c9_j < c9_n; c9_j++) {
      c9_b_j = c9_j;
      c9_iwork->data[c9_b_j] = c9_idx->data[c9_offset + c9_b_j];
      c9_xwork->data[c9_b_j] = c9_x->data[c9_offset + c9_b_j];
    }

    c9_p = 0;
    c9_q = c9_np;
    c9_qend = c9_np + c9_nq;
    c9_iout = c9_offset - 1;
    do {
      c9_exitg1 = 0;
      c9_iout++;
      if (c9_xwork->data[c9_p] >= c9_xwork->data[c9_q]) {
        c9_idx->data[c9_iout] = c9_iwork->data[c9_p];
        c9_x->data[c9_iout] = c9_xwork->data[c9_p];
        if (c9_p + 1 < c9_np) {
          c9_p++;
        } else {
          c9_exitg1 = 1;
        }
      } else {
        c9_idx->data[c9_iout] = c9_iwork->data[c9_q];
        c9_x->data[c9_iout] = c9_xwork->data[c9_q];
        if (c9_q + 1 < c9_qend) {
          c9_q++;
        } else {
          c9_offset1 = c9_iout - c9_p;
          c9_st.site = &c9_ff_emlrtRSI;
          c9_d_a = c9_p + 1;
          c9_c_b = c9_np;
          c9_e_a = c9_d_a;
          c9_d_b = c9_c_b;
          if (c9_e_a > c9_d_b) {
            c9_b_overflow = false;
          } else {
            c9_b_overflow = (c9_d_b > 2147483646);
          }

          if (c9_b_overflow) {
            c9_b_st.site = &c9_ib_emlrtRSI;
            c9_check_forloop_overflow_error(chartInstance, &c9_b_st);
          }

          for (c9_c_j = c9_p + 1; c9_c_j <= c9_np; c9_c_j++) {
            c9_idx->data[c9_offset1 + c9_c_j] = c9_iwork->data[c9_c_j - 1];
            c9_x->data[c9_offset1 + c9_c_j] = c9_xwork->data[c9_c_j - 1];
          }

          c9_exitg1 = 1;
        }
      }
    } while (c9_exitg1 == 0);
  }
}

static real_T c9_binary_expand_op(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, emlrtRSInfo c9_in1,
  c9_emxArray_real_T *c9_in2, c9_emxArray_real_T *c9_in3)
{
  c9_emxArray_real_T *c9_b_in2;
  emlrtStack c9_st;
  real_T c9_out1;
  int32_T c9_aux_0_0;
  int32_T c9_aux_1_0;
  int32_T c9_i;
  int32_T c9_i1;
  int32_T c9_i2;
  int32_T c9_loop_ub;
  int32_T c9_stride_0_0;
  int32_T c9_stride_1_0;
  c9_st.prev = c9_sp;
  c9_st.tls = c9_sp->tls;
  c9_emxInit_real_T1(chartInstance, c9_sp, &c9_b_in2, 1, &c9_ue_emlrtRTEI);
  c9_i = c9_b_in2->size[0];
  if (c9_in3->size[0] == 1) {
    c9_b_in2->size[0] = c9_in2->size[0];
  } else {
    c9_b_in2->size[0] = c9_in3->size[0];
  }

  c9_st.site = &c9_td_emlrtRSI;
  c9_emxEnsureCapacity_real_T1(chartInstance, &c9_st, c9_b_in2, c9_i,
    &c9_ue_emlrtRTEI);
  c9_stride_0_0 = (c9_in2->size[0] != 1);
  c9_stride_1_0 = (c9_in3->size[0] != 1);
  c9_aux_0_0 = 0;
  c9_aux_1_0 = 0;
  if (c9_in3->size[0] == 1) {
    c9_i1 = c9_in2->size[0];
  } else {
    c9_i1 = c9_in3->size[0];
  }

  c9_loop_ub = c9_i1 - 1;
  for (c9_i2 = 0; c9_i2 <= c9_loop_ub; c9_i2++) {
    c9_b_in2->data[c9_i2] = c9_in2->data[c9_aux_0_0] * c9_in3->data[c9_aux_1_0];
    c9_aux_1_0 += c9_stride_1_0;
    c9_aux_0_0 += c9_stride_0_0;
  }

  c9_st.site = &c9_in1;
  c9_out1 = c9_sum(chartInstance, &c9_st, c9_b_in2);
  c9_emxFree_real_T(chartInstance, &c9_b_in2);
  return c9_out1;
}

static void c9_emxEnsureCapacity_real_T(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_real_T *c9_emxArray,
  int32_T c9_oldNumel, const emlrtRTEInfo *c9_srcLocation)
{
  int32_T c9_i;
  int32_T c9_newCapacity;
  int32_T c9_newNumel;
  void *c9_newData;
  (void)chartInstance;
  if (c9_oldNumel < 0) {
    c9_oldNumel = 0;
  }

  c9_newNumel = 1;
  for (c9_i = 0; c9_i < c9_emxArray->numDimensions; c9_i++) {
    c9_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c9_newNumel,
      (size_t)(uint32_T)c9_emxArray->size[c9_i], c9_srcLocation, (void *)c9_sp);
  }

  if (c9_newNumel > c9_emxArray->allocatedSize) {
    c9_newCapacity = c9_emxArray->allocatedSize;
    if (c9_newCapacity < 16) {
      c9_newCapacity = 16;
    }

    while (c9_newCapacity < c9_newNumel) {
      if (c9_newCapacity > 1073741823) {
        c9_newCapacity = MAX_int32_T;
      } else {
        c9_newCapacity <<= 1;
      }
    }

    c9_newData = emlrtCallocMex((uint32_T)c9_newCapacity, sizeof(real_T));
    if (c9_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c9_srcLocation, (void *)c9_sp);
    }

    if (c9_emxArray->data != NULL) {
      memcpy(c9_newData, c9_emxArray->data, sizeof(real_T) * (uint32_T)
             c9_oldNumel);
      if (c9_emxArray->canFreeData) {
        emlrtFreeMex(c9_emxArray->data);
      }
    }

    c9_emxArray->data = (real_T *)c9_newData;
    c9_emxArray->allocatedSize = c9_newCapacity;
    c9_emxArray->canFreeData = true;
  }
}

static void c9_emxEnsureCapacity_boolean_T
  (SFc9_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c9_sp, c9_emxArray_boolean_T *c9_emxArray, int32_T c9_oldNumel, const
   emlrtRTEInfo *c9_srcLocation)
{
  int32_T c9_i;
  int32_T c9_newCapacity;
  int32_T c9_newNumel;
  void *c9_newData;
  (void)chartInstance;
  if (c9_oldNumel < 0) {
    c9_oldNumel = 0;
  }

  c9_newNumel = 1;
  for (c9_i = 0; c9_i < c9_emxArray->numDimensions; c9_i++) {
    c9_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c9_newNumel,
      (size_t)(uint32_T)c9_emxArray->size[c9_i], c9_srcLocation, (void *)c9_sp);
  }

  if (c9_newNumel > c9_emxArray->allocatedSize) {
    c9_newCapacity = c9_emxArray->allocatedSize;
    if (c9_newCapacity < 16) {
      c9_newCapacity = 16;
    }

    while (c9_newCapacity < c9_newNumel) {
      if (c9_newCapacity > 1073741823) {
        c9_newCapacity = MAX_int32_T;
      } else {
        c9_newCapacity <<= 1;
      }
    }

    c9_newData = emlrtCallocMex((uint32_T)c9_newCapacity, sizeof(boolean_T));
    if (c9_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c9_srcLocation, (void *)c9_sp);
    }

    if (c9_emxArray->data != NULL) {
      memcpy(c9_newData, c9_emxArray->data, sizeof(boolean_T) * (uint32_T)
             c9_oldNumel);
      if (c9_emxArray->canFreeData) {
        emlrtFreeMex(c9_emxArray->data);
      }
    }

    c9_emxArray->data = (boolean_T *)c9_newData;
    c9_emxArray->allocatedSize = c9_newCapacity;
    c9_emxArray->canFreeData = true;
  }
}

static void c9_emxEnsureCapacity_real_T1(SFc9_flightControlSystemInstanceStruct *
  chartInstance, const emlrtStack *c9_sp, c9_emxArray_real_T *c9_emxArray,
  int32_T c9_oldNumel, const emlrtRTEInfo *c9_srcLocation)
{
  int32_T c9_i;
  int32_T c9_newCapacity;
  int32_T c9_newNumel;
  void *c9_newData;
  (void)chartInstance;
  if (c9_oldNumel < 0) {
    c9_oldNumel = 0;
  }

  c9_newNumel = 1;
  for (c9_i = 0; c9_i < c9_emxArray->numDimensions; c9_i++) {
    c9_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c9_newNumel,
      (size_t)(uint32_T)c9_emxArray->size[c9_i], c9_srcLocation, (void *)c9_sp);
  }

  if (c9_newNumel > c9_emxArray->allocatedSize) {
    c9_newCapacity = c9_emxArray->allocatedSize;
    if (c9_newCapacity < 16) {
      c9_newCapacity = 16;
    }

    while (c9_newCapacity < c9_newNumel) {
      if (c9_newCapacity > 1073741823) {
        c9_newCapacity = MAX_int32_T;
      } else {
        c9_newCapacity <<= 1;
      }
    }

    c9_newData = emlrtCallocMex((uint32_T)c9_newCapacity, sizeof(real_T));
    if (c9_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c9_srcLocation, (void *)c9_sp);
    }

    if (c9_emxArray->data != NULL) {
      memcpy(c9_newData, c9_emxArray->data, sizeof(real_T) * (uint32_T)
             c9_oldNumel);
      if (c9_emxArray->canFreeData) {
        emlrtFreeMex(c9_emxArray->data);
      }
    }

    c9_emxArray->data = (real_T *)c9_newData;
    c9_emxArray->allocatedSize = c9_newCapacity;
    c9_emxArray->canFreeData = true;
  }
}

static void c9_emxInit_real_T(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_real_T **c9_pEmxArray,
  int32_T c9_numDimensions, const emlrtRTEInfo *c9_srcLocation)
{
  c9_emxArray_real_T *c9_emxArray;
  int32_T c9_i;
  (void)chartInstance;
  *c9_pEmxArray = (c9_emxArray_real_T *)emlrtMallocMex(sizeof(c9_emxArray_real_T));
  if ((void *)*c9_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c9_srcLocation, (void *)c9_sp);
  }

  c9_emxArray = *c9_pEmxArray;
  c9_emxArray->data = (real_T *)NULL;
  c9_emxArray->numDimensions = c9_numDimensions;
  c9_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c9_numDimensions);
  if ((void *)c9_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c9_srcLocation, (void *)c9_sp);
  }

  c9_emxArray->allocatedSize = 0;
  c9_emxArray->canFreeData = true;
  for (c9_i = 0; c9_i < c9_numDimensions; c9_i++) {
    c9_emxArray->size[c9_i] = 0;
  }
}

static void c9_emxInit_real_T1(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_real_T **c9_pEmxArray,
  int32_T c9_numDimensions, const emlrtRTEInfo *c9_srcLocation)
{
  c9_emxArray_real_T *c9_emxArray;
  int32_T c9_i;
  (void)chartInstance;
  *c9_pEmxArray = (c9_emxArray_real_T *)emlrtMallocMex(sizeof(c9_emxArray_real_T));
  if ((void *)*c9_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c9_srcLocation, (void *)c9_sp);
  }

  c9_emxArray = *c9_pEmxArray;
  c9_emxArray->data = (real_T *)NULL;
  c9_emxArray->numDimensions = c9_numDimensions;
  c9_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c9_numDimensions);
  if ((void *)c9_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c9_srcLocation, (void *)c9_sp);
  }

  c9_emxArray->allocatedSize = 0;
  c9_emxArray->canFreeData = true;
  for (c9_i = 0; c9_i < c9_numDimensions; c9_i++) {
    c9_emxArray->size[c9_i] = 0;
  }
}

static void c9_emxInit_boolean_T(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_boolean_T **c9_pEmxArray,
  int32_T c9_numDimensions, const emlrtRTEInfo *c9_srcLocation)
{
  c9_emxArray_boolean_T *c9_emxArray;
  int32_T c9_i;
  (void)chartInstance;
  *c9_pEmxArray = (c9_emxArray_boolean_T *)emlrtMallocMex(sizeof
    (c9_emxArray_boolean_T));
  if ((void *)*c9_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c9_srcLocation, (void *)c9_sp);
  }

  c9_emxArray = *c9_pEmxArray;
  c9_emxArray->data = (boolean_T *)NULL;
  c9_emxArray->numDimensions = c9_numDimensions;
  c9_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c9_numDimensions);
  if ((void *)c9_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c9_srcLocation, (void *)c9_sp);
  }

  c9_emxArray->allocatedSize = 0;
  c9_emxArray->canFreeData = true;
  for (c9_i = 0; c9_i < c9_numDimensions; c9_i++) {
    c9_emxArray->size[c9_i] = 0;
  }
}

static void c9_emxInit_int32_T(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_int32_T **c9_pEmxArray,
  int32_T c9_numDimensions, const emlrtRTEInfo *c9_srcLocation)
{
  c9_emxArray_int32_T *c9_emxArray;
  int32_T c9_i;
  (void)chartInstance;
  *c9_pEmxArray = (c9_emxArray_int32_T *)emlrtMallocMex(sizeof
    (c9_emxArray_int32_T));
  if ((void *)*c9_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c9_srcLocation, (void *)c9_sp);
  }

  c9_emxArray = *c9_pEmxArray;
  c9_emxArray->data = (int32_T *)NULL;
  c9_emxArray->numDimensions = c9_numDimensions;
  c9_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c9_numDimensions);
  if ((void *)c9_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c9_srcLocation, (void *)c9_sp);
  }

  c9_emxArray->allocatedSize = 0;
  c9_emxArray->canFreeData = true;
  for (c9_i = 0; c9_i < c9_numDimensions; c9_i++) {
    c9_emxArray->size[c9_i] = 0;
  }
}

static void c9_emxFree_real_T(SFc9_flightControlSystemInstanceStruct
  *chartInstance, c9_emxArray_real_T **c9_pEmxArray)
{
  (void)chartInstance;
  if (*c9_pEmxArray != (c9_emxArray_real_T *)NULL) {
    if (((*c9_pEmxArray)->data != (real_T *)NULL) && (*c9_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c9_pEmxArray)->data);
    }

    emlrtFreeMex((*c9_pEmxArray)->size);
    emlrtFreeMex(*c9_pEmxArray);
    *c9_pEmxArray = (c9_emxArray_real_T *)NULL;
  }
}

static void c9_emxFree_boolean_T(SFc9_flightControlSystemInstanceStruct
  *chartInstance, c9_emxArray_boolean_T **c9_pEmxArray)
{
  (void)chartInstance;
  if (*c9_pEmxArray != (c9_emxArray_boolean_T *)NULL) {
    if (((*c9_pEmxArray)->data != (boolean_T *)NULL) && (*c9_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c9_pEmxArray)->data);
    }

    emlrtFreeMex((*c9_pEmxArray)->size);
    emlrtFreeMex(*c9_pEmxArray);
    *c9_pEmxArray = (c9_emxArray_boolean_T *)NULL;
  }
}

static void c9_emxFree_int32_T(SFc9_flightControlSystemInstanceStruct
  *chartInstance, c9_emxArray_int32_T **c9_pEmxArray)
{
  (void)chartInstance;
  if (*c9_pEmxArray != (c9_emxArray_int32_T *)NULL) {
    if (((*c9_pEmxArray)->data != (int32_T *)NULL) && (*c9_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c9_pEmxArray)->data);
    }

    emlrtFreeMex((*c9_pEmxArray)->size);
    emlrtFreeMex(*c9_pEmxArray);
    *c9_pEmxArray = (c9_emxArray_int32_T *)NULL;
  }
}

static void c9_emxEnsureCapacity_real32_T(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_real32_T *c9_emxArray,
  int32_T c9_oldNumel, const emlrtRTEInfo *c9_srcLocation)
{
  int32_T c9_i;
  int32_T c9_newCapacity;
  int32_T c9_newNumel;
  void *c9_newData;
  (void)chartInstance;
  if (c9_oldNumel < 0) {
    c9_oldNumel = 0;
  }

  c9_newNumel = 1;
  for (c9_i = 0; c9_i < c9_emxArray->numDimensions; c9_i++) {
    c9_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c9_newNumel,
      (size_t)(uint32_T)c9_emxArray->size[c9_i], c9_srcLocation, (void *)c9_sp);
  }

  if (c9_newNumel > c9_emxArray->allocatedSize) {
    c9_newCapacity = c9_emxArray->allocatedSize;
    if (c9_newCapacity < 16) {
      c9_newCapacity = 16;
    }

    while (c9_newCapacity < c9_newNumel) {
      if (c9_newCapacity > 1073741823) {
        c9_newCapacity = MAX_int32_T;
      } else {
        c9_newCapacity <<= 1;
      }
    }

    c9_newData = emlrtCallocMex((uint32_T)c9_newCapacity, sizeof(real32_T));
    if (c9_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c9_srcLocation, (void *)c9_sp);
    }

    if (c9_emxArray->data != NULL) {
      memcpy(c9_newData, c9_emxArray->data, sizeof(real32_T) * (uint32_T)
             c9_oldNumel);
      if (c9_emxArray->canFreeData) {
        emlrtFreeMex(c9_emxArray->data);
      }
    }

    c9_emxArray->data = (real32_T *)c9_newData;
    c9_emxArray->allocatedSize = c9_newCapacity;
    c9_emxArray->canFreeData = true;
  }
}

static void c9_emxEnsureCapacity_creal_T(SFc9_flightControlSystemInstanceStruct *
  chartInstance, const emlrtStack *c9_sp, c9_emxArray_creal_T *c9_emxArray,
  int32_T c9_oldNumel, const emlrtRTEInfo *c9_srcLocation)
{
  int32_T c9_i;
  int32_T c9_newCapacity;
  int32_T c9_newNumel;
  void *c9_newData;
  (void)chartInstance;
  if (c9_oldNumel < 0) {
    c9_oldNumel = 0;
  }

  c9_newNumel = 1;
  for (c9_i = 0; c9_i < c9_emxArray->numDimensions; c9_i++) {
    c9_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c9_newNumel,
      (size_t)(uint32_T)c9_emxArray->size[c9_i], c9_srcLocation, (void *)c9_sp);
  }

  if (c9_newNumel > c9_emxArray->allocatedSize) {
    c9_newCapacity = c9_emxArray->allocatedSize;
    if (c9_newCapacity < 16) {
      c9_newCapacity = 16;
    }

    while (c9_newCapacity < c9_newNumel) {
      if (c9_newCapacity > 1073741823) {
        c9_newCapacity = MAX_int32_T;
      } else {
        c9_newCapacity <<= 1;
      }
    }

    c9_newData = emlrtCallocMex((uint32_T)c9_newCapacity, sizeof(creal_T));
    if (c9_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c9_srcLocation, (void *)c9_sp);
    }

    if (c9_emxArray->data != NULL) {
      memcpy(c9_newData, c9_emxArray->data, sizeof(creal_T) * (uint32_T)
             c9_oldNumel);
      if (c9_emxArray->canFreeData) {
        emlrtFreeMex(c9_emxArray->data);
      }
    }

    c9_emxArray->data = (creal_T *)c9_newData;
    c9_emxArray->allocatedSize = c9_newCapacity;
    c9_emxArray->canFreeData = true;
  }
}

static void c9_emxEnsureCapacity_int32_T(SFc9_flightControlSystemInstanceStruct *
  chartInstance, const emlrtStack *c9_sp, c9_emxArray_int32_T *c9_emxArray,
  int32_T c9_oldNumel, const emlrtRTEInfo *c9_srcLocation)
{
  int32_T c9_i;
  int32_T c9_newCapacity;
  int32_T c9_newNumel;
  void *c9_newData;
  (void)chartInstance;
  if (c9_oldNumel < 0) {
    c9_oldNumel = 0;
  }

  c9_newNumel = 1;
  for (c9_i = 0; c9_i < c9_emxArray->numDimensions; c9_i++) {
    c9_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c9_newNumel,
      (size_t)(uint32_T)c9_emxArray->size[c9_i], c9_srcLocation, (void *)c9_sp);
  }

  if (c9_newNumel > c9_emxArray->allocatedSize) {
    c9_newCapacity = c9_emxArray->allocatedSize;
    if (c9_newCapacity < 16) {
      c9_newCapacity = 16;
    }

    while (c9_newCapacity < c9_newNumel) {
      if (c9_newCapacity > 1073741823) {
        c9_newCapacity = MAX_int32_T;
      } else {
        c9_newCapacity <<= 1;
      }
    }

    c9_newData = emlrtCallocMex((uint32_T)c9_newCapacity, sizeof(int32_T));
    if (c9_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c9_srcLocation, (void *)c9_sp);
    }

    if (c9_emxArray->data != NULL) {
      memcpy(c9_newData, c9_emxArray->data, sizeof(int32_T) * (uint32_T)
             c9_oldNumel);
      if (c9_emxArray->canFreeData) {
        emlrtFreeMex(c9_emxArray->data);
      }
    }

    c9_emxArray->data = (int32_T *)c9_newData;
    c9_emxArray->allocatedSize = c9_newCapacity;
    c9_emxArray->canFreeData = true;
  }
}

static void c9_emxEnsureCapacity_creal_T1(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_creal_T *c9_emxArray,
  int32_T c9_oldNumel, const emlrtRTEInfo *c9_srcLocation)
{
  int32_T c9_i;
  int32_T c9_newCapacity;
  int32_T c9_newNumel;
  void *c9_newData;
  (void)chartInstance;
  if (c9_oldNumel < 0) {
    c9_oldNumel = 0;
  }

  c9_newNumel = 1;
  for (c9_i = 0; c9_i < c9_emxArray->numDimensions; c9_i++) {
    c9_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c9_newNumel,
      (size_t)(uint32_T)c9_emxArray->size[c9_i], c9_srcLocation, (void *)c9_sp);
  }

  if (c9_newNumel > c9_emxArray->allocatedSize) {
    c9_newCapacity = c9_emxArray->allocatedSize;
    if (c9_newCapacity < 16) {
      c9_newCapacity = 16;
    }

    while (c9_newCapacity < c9_newNumel) {
      if (c9_newCapacity > 1073741823) {
        c9_newCapacity = MAX_int32_T;
      } else {
        c9_newCapacity <<= 1;
      }
    }

    c9_newData = emlrtCallocMex((uint32_T)c9_newCapacity, sizeof(creal_T));
    if (c9_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c9_srcLocation, (void *)c9_sp);
    }

    if (c9_emxArray->data != NULL) {
      memcpy(c9_newData, c9_emxArray->data, sizeof(creal_T) * (uint32_T)
             c9_oldNumel);
      if (c9_emxArray->canFreeData) {
        emlrtFreeMex(c9_emxArray->data);
      }
    }

    c9_emxArray->data = (creal_T *)c9_newData;
    c9_emxArray->allocatedSize = c9_newCapacity;
    c9_emxArray->canFreeData = true;
  }
}

static void c9_emxInit_real32_T(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_real32_T **c9_pEmxArray,
  int32_T c9_numDimensions, const emlrtRTEInfo *c9_srcLocation)
{
  c9_emxArray_real32_T *c9_emxArray;
  int32_T c9_i;
  (void)chartInstance;
  *c9_pEmxArray = (c9_emxArray_real32_T *)emlrtMallocMex(sizeof
    (c9_emxArray_real32_T));
  if ((void *)*c9_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c9_srcLocation, (void *)c9_sp);
  }

  c9_emxArray = *c9_pEmxArray;
  c9_emxArray->data = (real32_T *)NULL;
  c9_emxArray->numDimensions = c9_numDimensions;
  c9_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c9_numDimensions);
  if ((void *)c9_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c9_srcLocation, (void *)c9_sp);
  }

  c9_emxArray->allocatedSize = 0;
  c9_emxArray->canFreeData = true;
  for (c9_i = 0; c9_i < c9_numDimensions; c9_i++) {
    c9_emxArray->size[c9_i] = 0;
  }
}

static void c9_emxInit_creal_T(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_creal_T **c9_pEmxArray,
  int32_T c9_numDimensions, const emlrtRTEInfo *c9_srcLocation)
{
  c9_emxArray_creal_T *c9_emxArray;
  int32_T c9_i;
  (void)chartInstance;
  *c9_pEmxArray = (c9_emxArray_creal_T *)emlrtMallocMex(sizeof
    (c9_emxArray_creal_T));
  if ((void *)*c9_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c9_srcLocation, (void *)c9_sp);
  }

  c9_emxArray = *c9_pEmxArray;
  c9_emxArray->data = (creal_T *)NULL;
  c9_emxArray->numDimensions = c9_numDimensions;
  c9_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c9_numDimensions);
  if ((void *)c9_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c9_srcLocation, (void *)c9_sp);
  }

  c9_emxArray->allocatedSize = 0;
  c9_emxArray->canFreeData = true;
  for (c9_i = 0; c9_i < c9_numDimensions; c9_i++) {
    c9_emxArray->size[c9_i] = 0;
  }
}

static void c9_emxInit_creal_T1(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_creal_T **c9_pEmxArray,
  int32_T c9_numDimensions, const emlrtRTEInfo *c9_srcLocation)
{
  c9_emxArray_creal_T *c9_emxArray;
  int32_T c9_i;
  (void)chartInstance;
  *c9_pEmxArray = (c9_emxArray_creal_T *)emlrtMallocMex(sizeof
    (c9_emxArray_creal_T));
  if ((void *)*c9_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c9_srcLocation, (void *)c9_sp);
  }

  c9_emxArray = *c9_pEmxArray;
  c9_emxArray->data = (creal_T *)NULL;
  c9_emxArray->numDimensions = c9_numDimensions;
  c9_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c9_numDimensions);
  if ((void *)c9_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c9_srcLocation, (void *)c9_sp);
  }

  c9_emxArray->allocatedSize = 0;
  c9_emxArray->canFreeData = true;
  for (c9_i = 0; c9_i < c9_numDimensions; c9_i++) {
    c9_emxArray->size[c9_i] = 0;
  }
}

static void c9_emxFree_real32_T(SFc9_flightControlSystemInstanceStruct
  *chartInstance, c9_emxArray_real32_T **c9_pEmxArray)
{
  (void)chartInstance;
  if (*c9_pEmxArray != (c9_emxArray_real32_T *)NULL) {
    if (((*c9_pEmxArray)->data != (real32_T *)NULL) && (*c9_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c9_pEmxArray)->data);
    }

    emlrtFreeMex((*c9_pEmxArray)->size);
    emlrtFreeMex(*c9_pEmxArray);
    *c9_pEmxArray = (c9_emxArray_real32_T *)NULL;
  }
}

static void c9_emxFree_creal_T(SFc9_flightControlSystemInstanceStruct
  *chartInstance, c9_emxArray_creal_T **c9_pEmxArray)
{
  (void)chartInstance;
  if (*c9_pEmxArray != (c9_emxArray_creal_T *)NULL) {
    if (((*c9_pEmxArray)->data != (creal_T *)NULL) && (*c9_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c9_pEmxArray)->data);
    }

    emlrtFreeMex((*c9_pEmxArray)->size);
    emlrtFreeMex(*c9_pEmxArray);
    *c9_pEmxArray = (c9_emxArray_creal_T *)NULL;
  }
}

static void c9_emxInit_sOA5t73y81YtFHGIDxk0fKF
  (SFc9_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c9_sp, c9_emxArray_sOA5t73y81YtFHGIDxk0fK **c9_pEmxArray, int32_T
   c9_numDimensions, const emlrtRTEInfo *c9_srcLocation)
{
  c9_emxArray_sOA5t73y81YtFHGIDxk0fK *c9_emxArray;
  int32_T c9_i;
  (void)chartInstance;
  *c9_pEmxArray = (c9_emxArray_sOA5t73y81YtFHGIDxk0fK *)emlrtMallocMex(sizeof
    (c9_emxArray_sOA5t73y81YtFHGIDxk0fK));
  if ((void *)*c9_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c9_srcLocation, (void *)c9_sp);
  }

  c9_emxArray = *c9_pEmxArray;
  c9_emxArray->data = (c9_sOA5t73y81YtFHGIDxk0fKF *)NULL;
  c9_emxArray->numDimensions = c9_numDimensions;
  c9_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c9_numDimensions);
  if ((void *)c9_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c9_srcLocation, (void *)c9_sp);
  }

  c9_emxArray->allocatedSize = 0;
  c9_emxArray->canFreeData = true;
  for (c9_i = 0; c9_i < c9_numDimensions; c9_i++) {
    c9_emxArray->size[c9_i] = 0;
  }
}

static void c9_emxInit_int32_T1(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_int32_T **c9_pEmxArray,
  int32_T c9_numDimensions, const emlrtRTEInfo *c9_srcLocation)
{
  c9_emxArray_int32_T *c9_emxArray;
  int32_T c9_i;
  (void)chartInstance;
  *c9_pEmxArray = (c9_emxArray_int32_T *)emlrtMallocMex(sizeof
    (c9_emxArray_int32_T));
  if ((void *)*c9_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c9_srcLocation, (void *)c9_sp);
  }

  c9_emxArray = *c9_pEmxArray;
  c9_emxArray->data = (int32_T *)NULL;
  c9_emxArray->numDimensions = c9_numDimensions;
  c9_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c9_numDimensions);
  if ((void *)c9_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c9_srcLocation, (void *)c9_sp);
  }

  c9_emxArray->allocatedSize = 0;
  c9_emxArray->canFreeData = true;
  for (c9_i = 0; c9_i < c9_numDimensions; c9_i++) {
    c9_emxArray->size[c9_i] = 0;
  }
}

static void c9_emxFree_sOA5t73y81YtFHGIDxk0fKF
  (SFc9_flightControlSystemInstanceStruct *chartInstance,
   c9_emxArray_sOA5t73y81YtFHGIDxk0fK **c9_pEmxArray)
{
  (void)chartInstance;
  if (*c9_pEmxArray != (c9_emxArray_sOA5t73y81YtFHGIDxk0fK *)NULL) {
    if (((*c9_pEmxArray)->data != (c9_sOA5t73y81YtFHGIDxk0fKF *)NULL) &&
        (*c9_pEmxArray)->canFreeData) {
      emlrtFreeMex((*c9_pEmxArray)->data);
    }

    emlrtFreeMex((*c9_pEmxArray)->size);
    emlrtFreeMex(*c9_pEmxArray);
    *c9_pEmxArray = (c9_emxArray_sOA5t73y81YtFHGIDxk0fK *)NULL;
  }
}

static void c9_emxEnsureCapacity_boolean_T1
  (SFc9_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c9_sp, c9_emxArray_boolean_T *c9_emxArray, int32_T c9_oldNumel, const
   emlrtRTEInfo *c9_srcLocation)
{
  int32_T c9_i;
  int32_T c9_newCapacity;
  int32_T c9_newNumel;
  void *c9_newData;
  (void)chartInstance;
  if (c9_oldNumel < 0) {
    c9_oldNumel = 0;
  }

  c9_newNumel = 1;
  for (c9_i = 0; c9_i < c9_emxArray->numDimensions; c9_i++) {
    c9_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c9_newNumel,
      (size_t)(uint32_T)c9_emxArray->size[c9_i], c9_srcLocation, (void *)c9_sp);
  }

  if (c9_newNumel > c9_emxArray->allocatedSize) {
    c9_newCapacity = c9_emxArray->allocatedSize;
    if (c9_newCapacity < 16) {
      c9_newCapacity = 16;
    }

    while (c9_newCapacity < c9_newNumel) {
      if (c9_newCapacity > 1073741823) {
        c9_newCapacity = MAX_int32_T;
      } else {
        c9_newCapacity <<= 1;
      }
    }

    c9_newData = emlrtCallocMex((uint32_T)c9_newCapacity, sizeof(boolean_T));
    if (c9_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c9_srcLocation, (void *)c9_sp);
    }

    if (c9_emxArray->data != NULL) {
      memcpy(c9_newData, c9_emxArray->data, sizeof(boolean_T) * (uint32_T)
             c9_oldNumel);
      if (c9_emxArray->canFreeData) {
        emlrtFreeMex(c9_emxArray->data);
      }
    }

    c9_emxArray->data = (boolean_T *)c9_newData;
    c9_emxArray->allocatedSize = c9_newCapacity;
    c9_emxArray->canFreeData = true;
  }
}

static void c9_emxEnsureCapacity_sOA5t73y81YtF
  (SFc9_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c9_sp, c9_emxArray_sOA5t73y81YtFHGIDxk0fK *c9_emxArray, int32_T c9_oldNumel,
   const emlrtRTEInfo *c9_srcLocation)
{
  int32_T c9_i;
  int32_T c9_newCapacity;
  int32_T c9_newNumel;
  void *c9_newData;
  (void)chartInstance;
  if (c9_oldNumel < 0) {
    c9_oldNumel = 0;
  }

  c9_newNumel = 1;
  for (c9_i = 0; c9_i < c9_emxArray->numDimensions; c9_i++) {
    c9_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c9_newNumel,
      (size_t)(uint32_T)c9_emxArray->size[c9_i], c9_srcLocation, (void *)c9_sp);
  }

  if (c9_newNumel > c9_emxArray->allocatedSize) {
    c9_newCapacity = c9_emxArray->allocatedSize;
    if (c9_newCapacity < 16) {
      c9_newCapacity = 16;
    }

    while (c9_newCapacity < c9_newNumel) {
      if (c9_newCapacity > 1073741823) {
        c9_newCapacity = MAX_int32_T;
      } else {
        c9_newCapacity <<= 1;
      }
    }

    c9_newData = emlrtCallocMex((uint32_T)c9_newCapacity, sizeof
      (c9_sOA5t73y81YtFHGIDxk0fKF));
    if (c9_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c9_srcLocation, (void *)c9_sp);
    }

    if (c9_emxArray->data != NULL) {
      memcpy(c9_newData, c9_emxArray->data, sizeof(c9_sOA5t73y81YtFHGIDxk0fKF) *
             (uint32_T)c9_oldNumel);
      if (c9_emxArray->canFreeData) {
        emlrtFreeMex(c9_emxArray->data);
      }
    }

    c9_emxArray->data = (c9_sOA5t73y81YtFHGIDxk0fKF *)c9_newData;
    c9_emxArray->allocatedSize = c9_newCapacity;
    c9_emxArray->canFreeData = true;
  }
}

static void c9_emxFreeStruct_s_R6Og1x0kmqQXSF9
  (SFc9_flightControlSystemInstanceStruct *chartInstance,
   c9_s_R6Og1x0kmqQXSF9Pwa49FD *c9_pStruct)
{
  c9_emxFree_real_T(chartInstance, &c9_pStruct->PixelIdxList);
  c9_emxFree_real_T(chartInstance, &c9_pStruct->PixelList);
  c9_emxFree_real_T(chartInstance, &c9_pStruct->PixelValues);
}

static void c9_emxTrim_s_R6Og1x0kmqQXSF9Pwa49F
  (SFc9_flightControlSystemInstanceStruct *chartInstance,
   c9_emxArray_s_R6Og1x0kmqQXSF9Pwa49 *c9_emxArray, int32_T c9_fromIndex,
   int32_T c9_toIndex)
{
  int32_T c9_i;
  for (c9_i = c9_fromIndex; c9_i < c9_toIndex; c9_i++) {
    c9_emxFreeStruct_s_R6Og1x0kmqQXSF9(chartInstance, &c9_emxArray->data[c9_i]);
  }
}

static void c9_emxInitStruct_s_R6Og1x0kmqQXSF9
  (SFc9_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c9_sp, c9_s_R6Og1x0kmqQXSF9Pwa49FD *c9_pStruct, const emlrtRTEInfo
   *c9_srcLocation)
{
  c9_pStruct->Image.size[0] = 0;
  c9_pStruct->Image.size[1] = 0;
  c9_pStruct->FilledImage.size[0] = 0;
  c9_pStruct->FilledImage.size[1] = 0;
  c9_emxInit_real_T1(chartInstance, c9_sp, &c9_pStruct->PixelIdxList, 1,
                     c9_srcLocation);
  c9_emxInit_real_T(chartInstance, c9_sp, &c9_pStruct->PixelList, 2,
                    c9_srcLocation);
  c9_emxInit_real_T1(chartInstance, c9_sp, &c9_pStruct->PixelValues, 1,
                     c9_srcLocation);
  c9_pStruct->SubarrayIdx.size[0] = 0;
  c9_pStruct->SubarrayIdx.size[1] = 0;
}

static void c9_emxExpand_s_R6Og1x0kmqQXSF9Pwa4
  (SFc9_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c9_sp, c9_emxArray_s_R6Og1x0kmqQXSF9Pwa49 *c9_emxArray, int32_T c9_fromIndex,
   int32_T c9_toIndex, const emlrtRTEInfo *c9_srcLocation)
{
  int32_T c9_i;
  for (c9_i = c9_fromIndex; c9_i < c9_toIndex; c9_i++) {
    c9_emxInitStruct_s_R6Og1x0kmqQXSF9(chartInstance, c9_sp, &c9_emxArray->
      data[c9_i], c9_srcLocation);
  }
}

static void c9_emxEnsureCapacity_s_R6Og1x0kmqQ
  (SFc9_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c9_sp, c9_emxArray_s_R6Og1x0kmqQXSF9Pwa49 *c9_emxArray, int32_T c9_oldNumel,
   const emlrtRTEInfo *c9_srcLocation)
{
  int32_T c9_i;
  int32_T c9_newCapacity;
  int32_T c9_newNumel;
  void *c9_newData;
  if (c9_oldNumel < 0) {
    c9_oldNumel = 0;
  }

  c9_newNumel = 1;
  for (c9_i = 0; c9_i < c9_emxArray->numDimensions; c9_i++) {
    c9_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c9_newNumel,
      (size_t)(uint32_T)c9_emxArray->size[c9_i], c9_srcLocation, (void *)c9_sp);
  }

  if (c9_newNumel > c9_emxArray->allocatedSize) {
    c9_newCapacity = c9_emxArray->allocatedSize;
    if (c9_newCapacity < 16) {
      c9_newCapacity = 16;
    }

    while (c9_newCapacity < c9_newNumel) {
      if (c9_newCapacity > 1073741823) {
        c9_newCapacity = MAX_int32_T;
      } else {
        c9_newCapacity <<= 1;
      }
    }

    c9_newData = emlrtCallocMex((uint32_T)c9_newCapacity, sizeof
      (c9_s_R6Og1x0kmqQXSF9Pwa49FD));
    if (c9_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c9_srcLocation, (void *)c9_sp);
    }

    if (c9_emxArray->data != NULL) {
      memcpy(c9_newData, c9_emxArray->data, sizeof(c9_s_R6Og1x0kmqQXSF9Pwa49FD) *
             (uint32_T)c9_oldNumel);
      if (c9_emxArray->canFreeData) {
        emlrtFreeMex(c9_emxArray->data);
      }
    }

    c9_emxArray->data = (c9_s_R6Og1x0kmqQXSF9Pwa49FD *)c9_newData;
    c9_emxArray->allocatedSize = c9_newCapacity;
    c9_emxArray->canFreeData = true;
  }

  if (c9_oldNumel > c9_newNumel) {
    c9_emxTrim_s_R6Og1x0kmqQXSF9Pwa49F(chartInstance, c9_emxArray, c9_newNumel,
      c9_oldNumel);
  } else if (c9_oldNumel < c9_newNumel) {
    c9_emxExpand_s_R6Og1x0kmqQXSF9Pwa4(chartInstance, c9_sp, c9_emxArray,
      c9_oldNumel, c9_newNumel, c9_srcLocation);
  }
}

static void c9_emxCopyStruct_s_R6Og1x0kmqQXSF9
  (SFc9_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c9_sp, c9_s_R6Og1x0kmqQXSF9Pwa49FD *c9_dst, const
   c9_s_R6Og1x0kmqQXSF9Pwa49FD *c9_src, const emlrtRTEInfo *c9_srcLocation)
{
  c9_dst->Area = c9_src->Area;
  c9_emxCopyMatrix_real_T(chartInstance, c9_dst->Centroid, c9_src->Centroid);
  c9_emxCopyMatrix_real_T1(chartInstance, c9_dst->BoundingBox,
    c9_src->BoundingBox);
  c9_dst->MajorAxisLength = c9_src->MajorAxisLength;
  c9_dst->MinorAxisLength = c9_src->MinorAxisLength;
  c9_dst->Eccentricity = c9_src->Eccentricity;
  c9_dst->Orientation = c9_src->Orientation;
  c9_emxCopy_boolean_T_0x0(chartInstance, &c9_dst->Image, &c9_src->Image);
  c9_emxCopy_boolean_T_0x0(chartInstance, &c9_dst->FilledImage,
    &c9_src->FilledImage);
  c9_dst->FilledArea = c9_src->FilledArea;
  c9_dst->EulerNumber = c9_src->EulerNumber;
  c9_emxCopyMatrix_real_T2(chartInstance, c9_dst->Extrema, c9_src->Extrema);
  c9_dst->EquivDiameter = c9_src->EquivDiameter;
  c9_dst->Extent = c9_src->Extent;
  c9_emxCopy_real_T(chartInstance, c9_sp, &c9_dst->PixelIdxList,
                    &c9_src->PixelIdxList, c9_srcLocation);
  c9_emxCopy_real_T1(chartInstance, c9_sp, &c9_dst->PixelList,
                     &c9_src->PixelList, c9_srcLocation);
  c9_dst->Perimeter = c9_src->Perimeter;
  c9_dst->Circularity = c9_src->Circularity;
  c9_emxCopy_real_T(chartInstance, c9_sp, &c9_dst->PixelValues,
                    &c9_src->PixelValues, c9_srcLocation);
  c9_emxCopyMatrix_real_T(chartInstance, c9_dst->WeightedCentroid,
    c9_src->WeightedCentroid);
  c9_dst->MeanIntensity = c9_src->MeanIntensity;
  c9_dst->MinIntensity = c9_src->MinIntensity;
  c9_dst->MaxIntensity = c9_src->MaxIntensity;
  c9_emxCopy_real_T_1x0(chartInstance, &c9_dst->SubarrayIdx,
                        &c9_src->SubarrayIdx);
  c9_emxCopyMatrix_real_T(chartInstance, c9_dst->SubarrayIdxLengths,
    c9_src->SubarrayIdxLengths);
}

static void c9_emxCopyMatrix_real_T(SFc9_flightControlSystemInstanceStruct
  *chartInstance, real_T c9_dst[2], const real_T c9_src[2])
{
  int32_T c9_i;
  (void)chartInstance;
  for (c9_i = 0; c9_i < 2; c9_i++) {
    c9_dst[c9_i] = c9_src[c9_i];
  }
}

static void c9_emxCopyMatrix_real_T1(SFc9_flightControlSystemInstanceStruct
  *chartInstance, real_T c9_dst[4], const real_T c9_src[4])
{
  int32_T c9_i;
  (void)chartInstance;
  for (c9_i = 0; c9_i < 4; c9_i++) {
    c9_dst[c9_i] = c9_src[c9_i];
  }
}

static void c9_emxCopy_boolean_T_0x0(SFc9_flightControlSystemInstanceStruct
  *chartInstance, c9_emxArray_boolean_T_0x0 *c9_dst, const
  c9_emxArray_boolean_T_0x0 *c9_src)
{
  int32_T c9_i;
  (void)chartInstance;
  for (c9_i = 0; c9_i < 2; c9_i++) {
    c9_dst->size[c9_i] = c9_src->size[c9_i];
  }
}

static void c9_emxCopyMatrix_real_T2(SFc9_flightControlSystemInstanceStruct
  *chartInstance, real_T c9_dst[16], const real_T c9_src[16])
{
  int32_T c9_i;
  (void)chartInstance;
  for (c9_i = 0; c9_i < 16; c9_i++) {
    c9_dst[c9_i] = c9_src[c9_i];
  }
}

static void c9_emxCopy_real_T(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_real_T **c9_dst,
  c9_emxArray_real_T * const *c9_src, const emlrtRTEInfo *c9_srcLocation)
{
  int32_T c9_i;
  int32_T c9_numElDst;
  int32_T c9_numElSrc;
  c9_numElDst = 1;
  c9_numElSrc = 1;
  for (c9_i = 0; c9_i < (*c9_dst)->numDimensions; c9_i++) {
    c9_numElDst *= (*c9_dst)->size[c9_i];
    c9_numElSrc *= (*c9_src)->size[c9_i];
  }

  for (c9_i = 0; c9_i < (*c9_dst)->numDimensions; c9_i++) {
    (*c9_dst)->size[c9_i] = (*c9_src)->size[c9_i];
  }

  c9_emxEnsureCapacity_real_T1(chartInstance, c9_sp, *c9_dst, c9_numElDst,
    c9_srcLocation);
  for (c9_i = 0; c9_i < c9_numElSrc; c9_i++) {
    (*c9_dst)->data[c9_i] = (*c9_src)->data[c9_i];
  }
}

static void c9_emxCopy_real_T1(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_real_T **c9_dst,
  c9_emxArray_real_T * const *c9_src, const emlrtRTEInfo *c9_srcLocation)
{
  int32_T c9_i;
  int32_T c9_numElDst;
  int32_T c9_numElSrc;
  c9_numElDst = 1;
  c9_numElSrc = 1;
  for (c9_i = 0; c9_i < (*c9_dst)->numDimensions; c9_i++) {
    c9_numElDst *= (*c9_dst)->size[c9_i];
    c9_numElSrc *= (*c9_src)->size[c9_i];
  }

  for (c9_i = 0; c9_i < (*c9_dst)->numDimensions; c9_i++) {
    (*c9_dst)->size[c9_i] = (*c9_src)->size[c9_i];
  }

  c9_emxEnsureCapacity_real_T(chartInstance, c9_sp, *c9_dst, c9_numElDst,
    c9_srcLocation);
  for (c9_i = 0; c9_i < c9_numElSrc; c9_i++) {
    (*c9_dst)->data[c9_i] = (*c9_src)->data[c9_i];
  }
}

static void c9_emxCopy_real_T_1x0(SFc9_flightControlSystemInstanceStruct
  *chartInstance, c9_emxArray_real_T_1x0 *c9_dst, const c9_emxArray_real_T_1x0
  *c9_src)
{
  int32_T c9_i;
  (void)chartInstance;
  for (c9_i = 0; c9_i < 2; c9_i++) {
    c9_dst->size[c9_i] = c9_src->size[c9_i];
  }
}

static void c9_emxInitStruct_s_vX9LV7M75v5ZNol
  (SFc9_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c9_sp, c9_s_vX9LV7M75v5ZNol5H5URkE *c9_pStruct, const emlrtRTEInfo
   *c9_srcLocation)
{
  c9_emxInit_real_T1(chartInstance, c9_sp, &c9_pStruct->RegionIndices, 1,
                     c9_srcLocation);
  c9_emxInit_int32_T(chartInstance, c9_sp, &c9_pStruct->RegionLengths, 1,
                     c9_srcLocation);
}

static void c9_emxInit_s_R6Og1x0kmqQXSF9Pwa49F
  (SFc9_flightControlSystemInstanceStruct *chartInstance, const emlrtStack
   *c9_sp, c9_emxArray_s_R6Og1x0kmqQXSF9Pwa49 **c9_pEmxArray, int32_T
   c9_numDimensions, const emlrtRTEInfo *c9_srcLocation)
{
  c9_emxArray_s_R6Og1x0kmqQXSF9Pwa49 *c9_emxArray;
  int32_T c9_i;
  (void)chartInstance;
  *c9_pEmxArray = (c9_emxArray_s_R6Og1x0kmqQXSF9Pwa49 *)emlrtMallocMex(sizeof
    (c9_emxArray_s_R6Og1x0kmqQXSF9Pwa49));
  if ((void *)*c9_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c9_srcLocation, (void *)c9_sp);
  }

  c9_emxArray = *c9_pEmxArray;
  c9_emxArray->data = (c9_s_R6Og1x0kmqQXSF9Pwa49FD *)NULL;
  c9_emxArray->numDimensions = c9_numDimensions;
  c9_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c9_numDimensions);
  if ((void *)c9_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c9_srcLocation, (void *)c9_sp);
  }

  c9_emxArray->allocatedSize = 0;
  c9_emxArray->canFreeData = true;
  for (c9_i = 0; c9_i < c9_numDimensions; c9_i++) {
    c9_emxArray->size[c9_i] = 0;
  }
}

static void c9_emxInit_boolean_T1(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_boolean_T **c9_pEmxArray,
  int32_T c9_numDimensions, const emlrtRTEInfo *c9_srcLocation)
{
  c9_emxArray_boolean_T *c9_emxArray;
  int32_T c9_i;
  (void)chartInstance;
  *c9_pEmxArray = (c9_emxArray_boolean_T *)emlrtMallocMex(sizeof
    (c9_emxArray_boolean_T));
  if ((void *)*c9_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c9_srcLocation, (void *)c9_sp);
  }

  c9_emxArray = *c9_pEmxArray;
  c9_emxArray->data = (boolean_T *)NULL;
  c9_emxArray->numDimensions = c9_numDimensions;
  c9_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c9_numDimensions);
  if ((void *)c9_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c9_srcLocation, (void *)c9_sp);
  }

  c9_emxArray->allocatedSize = 0;
  c9_emxArray->canFreeData = true;
  for (c9_i = 0; c9_i < c9_numDimensions; c9_i++) {
    c9_emxArray->size[c9_i] = 0;
  }
}

static void c9_emxFreeStruct_s_vX9LV7M75v5ZNol
  (SFc9_flightControlSystemInstanceStruct *chartInstance,
   c9_s_vX9LV7M75v5ZNol5H5URkE *c9_pStruct)
{
  c9_emxFree_real_T(chartInstance, &c9_pStruct->RegionIndices);
  c9_emxFree_int32_T(chartInstance, &c9_pStruct->RegionLengths);
}

static void c9_emxFree_s_R6Og1x0kmqQXSF9Pwa49F
  (SFc9_flightControlSystemInstanceStruct *chartInstance,
   c9_emxArray_s_R6Og1x0kmqQXSF9Pwa49 **c9_pEmxArray)
{
  int32_T c9_b_i;
  int32_T c9_i;
  int32_T c9_numEl;
  if (*c9_pEmxArray != (c9_emxArray_s_R6Og1x0kmqQXSF9Pwa49 *)NULL) {
    if ((*c9_pEmxArray)->data != (c9_s_R6Og1x0kmqQXSF9Pwa49FD *)NULL) {
      c9_numEl = 1;
      for (c9_i = 0; c9_i < (*c9_pEmxArray)->numDimensions; c9_i++) {
        c9_numEl *= (*c9_pEmxArray)->size[c9_i];
      }

      for (c9_b_i = 0; c9_b_i < c9_numEl; c9_b_i++) {
        c9_emxFreeStruct_s_R6Og1x0kmqQXSF9(chartInstance, &(*c9_pEmxArray)->
          data[c9_b_i]);
      }

      if ((*c9_pEmxArray)->canFreeData) {
        emlrtFreeMex((*c9_pEmxArray)->data);
      }
    }

    emlrtFreeMex((*c9_pEmxArray)->size);
    emlrtFreeMex(*c9_pEmxArray);
    *c9_pEmxArray = (c9_emxArray_s_R6Og1x0kmqQXSF9Pwa49 *)NULL;
  }
}

static void c9_emxEnsureCapacity_int32_T1(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_emxArray_int32_T *c9_emxArray,
  int32_T c9_oldNumel, const emlrtRTEInfo *c9_srcLocation)
{
  int32_T c9_i;
  int32_T c9_newCapacity;
  int32_T c9_newNumel;
  void *c9_newData;
  (void)chartInstance;
  if (c9_oldNumel < 0) {
    c9_oldNumel = 0;
  }

  c9_newNumel = 1;
  for (c9_i = 0; c9_i < c9_emxArray->numDimensions; c9_i++) {
    c9_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c9_newNumel,
      (size_t)(uint32_T)c9_emxArray->size[c9_i], c9_srcLocation, (void *)c9_sp);
  }

  if (c9_newNumel > c9_emxArray->allocatedSize) {
    c9_newCapacity = c9_emxArray->allocatedSize;
    if (c9_newCapacity < 16) {
      c9_newCapacity = 16;
    }

    while (c9_newCapacity < c9_newNumel) {
      if (c9_newCapacity > 1073741823) {
        c9_newCapacity = MAX_int32_T;
      } else {
        c9_newCapacity <<= 1;
      }
    }

    c9_newData = emlrtCallocMex((uint32_T)c9_newCapacity, sizeof(int32_T));
    if (c9_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c9_srcLocation, (void *)c9_sp);
    }

    if (c9_emxArray->data != NULL) {
      memcpy(c9_newData, c9_emxArray->data, sizeof(int32_T) * (uint32_T)
             c9_oldNumel);
      if (c9_emxArray->canFreeData) {
        emlrtFreeMex(c9_emxArray->data);
      }
    }

    c9_emxArray->data = (int32_T *)c9_newData;
    c9_emxArray->allocatedSize = c9_newCapacity;
    c9_emxArray->canFreeData = true;
  }
}

static void c9_emxInitMatrix_cell_wrap_37(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_cell_wrap_37 c9_pMatrix[2], const
  emlrtRTEInfo *c9_srcLocation)
{
  int32_T c9_i;
  for (c9_i = 0; c9_i < 2; c9_i++) {
    c9_emxInitStruct_cell_wrap_37(chartInstance, c9_sp, &c9_pMatrix[c9_i],
      c9_srcLocation);
  }
}

static void c9_emxInitStruct_cell_wrap_37(SFc9_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c9_sp, c9_cell_wrap_37 *c9_pStruct, const
  emlrtRTEInfo *c9_srcLocation)
{
  c9_emxInit_real_T1(chartInstance, c9_sp, &c9_pStruct->f1, 1, c9_srcLocation);
}

static void c9_emxFreeMatrix_cell_wrap_37(SFc9_flightControlSystemInstanceStruct
  *chartInstance, c9_cell_wrap_37 c9_pMatrix[2])
{
  int32_T c9_i;
  for (c9_i = 0; c9_i < 2; c9_i++) {
    c9_emxFreeStruct_cell_wrap_37(chartInstance, &c9_pMatrix[c9_i]);
  }
}

static void c9_emxFreeStruct_cell_wrap_37(SFc9_flightControlSystemInstanceStruct
  *chartInstance, c9_cell_wrap_37 *c9_pStruct)
{
  c9_emxFree_real_T(chartInstance, &c9_pStruct->f1);
}

static int32_T c9_div_nzp_s32(SFc9_flightControlSystemInstanceStruct
  *chartInstance, int32_T c9_numerator, int32_T c9_denominator, int32_T
  c9_EMLOvCount_src_loc, uint32_T c9_ssid_src_loc, int32_T c9_offset_src_loc,
  int32_T c9_length_src_loc)
{
  int32_T c9_quotient;
  uint32_T c9_absDenominator;
  uint32_T c9_absNumerator;
  uint32_T c9_tempAbsQuotient;
  boolean_T c9_quotientNeedsNegation;
  (void)chartInstance;
  (void)c9_EMLOvCount_src_loc;
  (void)c9_ssid_src_loc;
  (void)c9_offset_src_loc;
  (void)c9_length_src_loc;
  if (c9_numerator < 0) {
    c9_absNumerator = ~(uint32_T)c9_numerator + 1U;
  } else {
    c9_absNumerator = (uint32_T)c9_numerator;
  }

  if (c9_denominator < 0) {
    c9_absDenominator = ~(uint32_T)c9_denominator + 1U;
  } else {
    c9_absDenominator = (uint32_T)c9_denominator;
  }

  c9_quotientNeedsNegation = ((c9_numerator < 0) != (c9_denominator < 0));
  c9_tempAbsQuotient = c9_absNumerator / c9_absDenominator;
  if (c9_quotientNeedsNegation) {
    c9_quotient = -(int32_T)c9_tempAbsQuotient;
  } else {
    c9_quotient = (int32_T)c9_tempAbsQuotient;
  }

  return c9_quotient;
}

static int32_T c9__s32_add__(SFc9_flightControlSystemInstanceStruct
  *chartInstance, int32_T c9_b, int32_T c9_c, int32_T c9_EMLOvCount_src_loc,
  uint32_T c9_ssid_src_loc, int32_T c9_offset_src_loc, int32_T c9_length_src_loc)
{
  int32_T c9_d_a;
  (void)c9_EMLOvCount_src_loc;
  c9_d_a = c9_b + c9_c;
  if (((c9_d_a ^ c9_b) & (c9_d_a ^ c9_c)) < 0) {
    sf_data_overflow_error(chartInstance->S, c9_ssid_src_loc, c9_offset_src_loc,
      c9_length_src_loc);
  }

  return c9_d_a;
}

static int32_T c9__s32_minus__(SFc9_flightControlSystemInstanceStruct
  *chartInstance, int32_T c9_b, int32_T c9_c, int32_T c9_EMLOvCount_src_loc,
  uint32_T c9_ssid_src_loc, int32_T c9_offset_src_loc, int32_T c9_length_src_loc)
{
  int32_T c9_d_a;
  (void)c9_EMLOvCount_src_loc;
  c9_d_a = c9_b - c9_c;
  if (((c9_b ^ c9_d_a) & (c9_b ^ c9_c)) < 0) {
    sf_data_overflow_error(chartInstance->S, c9_ssid_src_loc, c9_offset_src_loc,
      c9_length_src_loc);
  }

  return c9_d_a;
}

static int32_T c9__s32_s64_(SFc9_flightControlSystemInstanceStruct
  *chartInstance, int64_T c9_b, int32_T c9_EMLOvCount_src_loc, uint32_T
  c9_ssid_src_loc, int32_T c9_offset_src_loc, int32_T c9_length_src_loc)
{
  int32_T c9_d_a;
  (void)c9_EMLOvCount_src_loc;
  c9_d_a = (int32_T)c9_b;
  if ((int64_T)c9_d_a != c9_b) {
    sf_data_overflow_error(chartInstance->S, c9_ssid_src_loc, c9_offset_src_loc,
      c9_length_src_loc);
  }

  return c9_d_a;
}

static void init_dsm_address_info(SFc9_flightControlSystemInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc9_flightControlSystemInstanceStruct
  *chartInstance)
{
  chartInstance->c9_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c9_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c9_land = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c9_direct = (real_T (*)[2])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c9_I = (uint8_T (*)[57600])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c9_y = (boolean_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c9_Red_Comp = (boolean_T (*)[19200])
    ssGetOutputPortSignal_wrapper(chartInstance->S, 4);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c9_flightControlSystem_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3002793775U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3504930364U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(259347701U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(473792807U);
}

mxArray *sf_c9_flightControlSystem_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,5);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.IppfilterBuildable"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "images.internal.coder.buildable.ImfilterBuildable"));
  mxSetCell(mxcell3p, 2, mxCreateString(
             "images.internal.coder.buildable.Ordfilt2Buildable"));
  mxSetCell(mxcell3p, 3, mxCreateString(
             "images.internal.coder.buildable.IppreconstructBuildable"));
  mxSetCell(mxcell3p, 4, mxCreateString(
             "images.internal.coder.buildable.ImregionalmaxBuildable"));
  return(mxcell3p);
}

mxArray *sf_c9_flightControlSystem_jit_fallback_info(void)
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

mxArray *sf_c9_flightControlSystem_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c9_flightControlSystem(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiB+wcrAwAakOYCYiQECWKF8RgaIHCNcnAUurgDEJZUFqSDx4qJkzxQgnZeYC+Y"
    "nllZ45qXlg823YECYz4bFfEYk8zmh4hDwwZ4y/UoO6PpZsOjnQNIvAOUHpabEO+fnFvBBxQfWHz"
    "JE+YMNzR8gfkpmUWpyCcT9A+8PBbA/DAj4gwXFHywMOYl5KYPD/SJEuZ8Rxf2MDJUM1Ap/AQfK9"
    "EPsdyDgfj60dATip+UkpseXZBSlFmfk56RAxC4w4C83GNHKDSakdJrDkMlQgMU92PzDhOYfAZhn"
    "GrwcwPSBAKqEC+Xxo0AVdwQQiB8FtPgB8TOL4xOTSzLLUuOTLePTcjLTM0qc8/NKivJzgiuLS1J"
    "zYf4DAAVsOns="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c9_flightControlSystem_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "suaQuKeRo212cIJIFopV25D";
}

static void sf_opaque_initialize_c9_flightControlSystem(void *chartInstanceVar)
{
  initialize_params_c9_flightControlSystem
    ((SFc9_flightControlSystemInstanceStruct*) chartInstanceVar);
  initialize_c9_flightControlSystem((SFc9_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c9_flightControlSystem(void *chartInstanceVar)
{
  enable_c9_flightControlSystem((SFc9_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c9_flightControlSystem(void *chartInstanceVar)
{
  disable_c9_flightControlSystem((SFc9_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c9_flightControlSystem(void *chartInstanceVar)
{
  sf_gateway_c9_flightControlSystem((SFc9_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c9_flightControlSystem(SimStruct*
  S)
{
  return get_sim_state_c9_flightControlSystem
    ((SFc9_flightControlSystemInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c9_flightControlSystem(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c9_flightControlSystem((SFc9_flightControlSystemInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c9_flightControlSystem(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc9_flightControlSystemInstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_flightControlSystem_optimization_info();
    }

    mdl_cleanup_runtime_resources_c9_flightControlSystem
      ((SFc9_flightControlSystemInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c9_flightControlSystem(void *chartInstanceVar)
{
  mdl_start_c9_flightControlSystem((SFc9_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c9_flightControlSystem(void
  *chartInstanceVar)
{
  mdl_terminate_c9_flightControlSystem((SFc9_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc9_flightControlSystem((SFc9_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c9_flightControlSystem(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c9_flightControlSystem
      ((SFc9_flightControlSystemInstanceStruct*)sf_get_chart_instance_ptr(S));
    initSimStructsc9_flightControlSystem((SFc9_flightControlSystemInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c9_flightControlSystem_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [24] = {
    "eNrtWU1v40QYnlTZaCuWqgcEQlpExYkDIDaoEkgI2uYDsrQ01GmRuFRT+008ynjGOzNOGsRh/wX",
    "c+AncOXHmxAnxE/YGSBw48o6dZFM3pJ6kq5YPS647tp/3a95Ph5RaBwSPDTwfv0JIBa938Vwj2X",
    "FnvC7NnNn9Mnl/vP7qOUJ8GUAPhJd0u+ycuB0iidpU0UgT90PQCI5AS54YJkVLdGVxLBNdUCB8J",
    "BBLZZz4ahYlnIl+MxG+5aw/D5kfeqFMeLCHBGlwKPjo7/jGiWkjxzpT4JsmQGBCJZNe2OS0t9gK",
    "ygxrIfh9nUTOttJgvCS2quqDhBsWc2icg98S2lC0gr5CX89QAzVz7mZkq6/2JmgZxZxRUdzWIdU",
    "exOgdBo7jAP8eJgatVwjrh1SZPQjpAPQ+66fcpYBC3JnGt8+YoEYqRnkj4jVLraC+bY46HmBIcN",
    "c9Qn33FNB+LJkwjgHhNdHODUHPONThLOk58vXgUWKj4YTBEJTb/nZrcgCK9uBQuMmc7lHjPHXKa",
    "SwVxBoWwQlVuz76robALW9g0GmPojtCB8k4YSE1cUt3FBugb7jmupYN/6VyXRJl3q+XwqZ8GwNw",
    "9qsp36YvapRz7YbtyHgfBsBT/nVq6BLYjL8DWGsWdCR6h802jhkrEQwjYYytSRGw4l45yKHSwvY",
    "pFqkCcBbZMIAAzTwVfUroqjhKtJFRDVNOfX+/IL/L2JYwoLrUh8I1RlGmAQVO/cqRb8C0DSREo5",
    "VMqmVhClkMLgUlupuI+lCqPtrYtZg9tZWNBDc0BD1MzAbSJNdA7z6hPCkoc6R7GD/oHscas6wbX",
    "8Ta+FkK7FM/hMBWTsbhAPMsEii6xdqW/F3UdsDMqA7aVywuGkkJJnQsutZKnVEMx6Iv5FA0lYy8",
    "cee1wK8AMGtQJZjo7WEJV6MmCl9MagWPOml2d21yrJ2p4fTM+sZHILAaWl1t10B9jKqGwBYZBVo",
    "F67EvsYkRmmmDhXqUlfqs7tn+/WPytH8vz+nfX5zp3zfHa/+90y5nvdAmGqMk90ZIO8rovT1D71",
    "6BeWAixyIcuYQjU9zk+voMvjSHL5m55vmtry2Wcw3/K41xOzO453N8yjlcZWyz7e+/e+v3/pNfv",
    "375jfUf//j251X4f1Nxm7c2xuv7k75pmqUHlxJZEX94KecPdq0T+lnyCRzJ6oOq33rYasr4pLpd",
    "T+k9ubNY3kpO3sn9LdurYRCnOUH5rWA8t9k1TbJ5wtJ/d0beyhX2WJ/xJ0J++3A1/Gs7efw8e93",
    "N2cuujyA4tdlx1n9vTo/7hfSo5PSopLXYjqIX4/Dm9NjaycfVPD3KF/QoExy6gtsh/wuF5C9dkL",
    "9ERuS67L+5sxr+cn6cJ/9Gzo/sustp79SECnQoeZDd+4m45bm1GT/lhJF4jjzz9FnL6bM5Uebxw",
    "530+kP7Wuyy+v5sXYsc7Sv2Zyu3P1vprH5KbUcGp/Mr/8Y11FVXHPkfdytwpf+gfkX62mVxZfLs",
    "+ujrxK2qn2u//k9/f1FdJ7n3N2+xHvnrsnPbbdPrF8d+49Xx+oPpd8NayHgw58vF+PE+0O68p/8",
    "S//7T0X6TObKRzo/ZD0xfvLMrKB9pln12mdxuK/s7wfSRAqrnfw+6iXpStO+9l4tvux4yEcihfv",
    "NBdbu6Sn36CwfXPW4=",
    ""
  };

  static char newstr [1669] = "";
  newstr[0] = '\0';
  for (i = 0; i < 24; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c9_flightControlSystem(SimStruct *S)
{
  const char* newstr = sf_c9_flightControlSystem_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(783268405U));
  ssSetChecksum1(S,(4024986609U));
  ssSetChecksum2(S,(153885079U));
  ssSetChecksum3(S,(3600807114U));
}

static void mdlRTW_c9_flightControlSystem(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c9_flightControlSystem(SimStruct *S)
{
  SFc9_flightControlSystemInstanceStruct *chartInstance;
  chartInstance = (SFc9_flightControlSystemInstanceStruct *)utMalloc(sizeof
    (SFc9_flightControlSystemInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc9_flightControlSystemInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  if (ssGetSampleTime(S, 0) == CONTINUOUS_SAMPLE_TIME && ssGetOffsetTime(S, 0) ==
      0 && sfHasContStates(S) &&
      !supportsLegacyBehaviorForPersistentVarInContinuousTime(S)) {
    sf_error_out_about_continuous_sample_time_with_persistent_vars(S);
  }

  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c9_flightControlSystem;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c9_flightControlSystem;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c9_flightControlSystem;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c9_flightControlSystem;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c9_flightControlSystem;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c9_flightControlSystem;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c9_flightControlSystem;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c9_flightControlSystem;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c9_flightControlSystem;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c9_flightControlSystem;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c9_flightControlSystem;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c9_flightControlSystem;
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
    chartInstance->c9_JITStateAnimation,
    chartInstance->c9_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c9_flightControlSystem(chartInstance);
}

void c9_flightControlSystem_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c9_flightControlSystem(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c9_flightControlSystem(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c9_flightControlSystem(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c9_flightControlSystem_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
