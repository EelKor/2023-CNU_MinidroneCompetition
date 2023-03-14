/* Include files */

#include "flightControlSystem_sfun.h"
#include "c4_flightControlSystem.h"
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
static emlrtMCInfo c4_emlrtMCI = { 13, /* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtMCInfo c4_b_emlrtMCI = { 87,/* lineNo */
  33,                                  /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo c4_c_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

static emlrtMCInfo c4_d_emlrtMCI = { 13,/* lineNo */
  37,                                  /* colNo */
  "validateinteger",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validateinteger.m"/* pName */
};

static emlrtMCInfo c4_e_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatenonnegative",               /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnegative.m"/* pName */
};

static emlrtMCInfo c4_f_emlrtMCI = { 454,/* lineNo */
  5,                                   /* colNo */
  "houghpeaks",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pName */
};

static emlrtMCInfo c4_g_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatepositive",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatepositive.m"/* pName */
};

static emlrtMCInfo c4_h_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validateodd",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validateodd.m"/* pName */
};

static emlrtMCInfo c4_i_emlrtMCI = { 474,/* lineNo */
  1,                                   /* colNo */
  "houghpeaks",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pName */
};

static emlrtMCInfo c4_j_emlrtMCI = { 40,/* lineNo */
  15,                                  /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRSInfo c4_emlrtRSI = { 6,  /* lineNo */
  "Image Processing System/MATLAB Function",/* fcnName */
  "#flightControlSystem:2776"          /* pathName */
};

static emlrtRSInfo c4_b_emlrtRSI = { 23,/* lineNo */
  "Image Processing System/MATLAB Function",/* fcnName */
  "#flightControlSystem:2776"          /* pathName */
};

static emlrtRSInfo c4_c_emlrtRSI = { 25,/* lineNo */
  "Image Processing System/MATLAB Function",/* fcnName */
  "#flightControlSystem:2776"          /* pathName */
};

static emlrtRSInfo c4_d_emlrtRSI = { 26,/* lineNo */
  "Image Processing System/MATLAB Function",/* fcnName */
  "#flightControlSystem:2776"          /* pathName */
};

static emlrtRSInfo c4_e_emlrtRSI = { 116,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_f_emlrtRSI = { 132,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_g_emlrtRSI = { 138,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_h_emlrtRSI = { 708,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_i_emlrtRSI = { 709,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_j_emlrtRSI = { 714,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_k_emlrtRSI = { 715,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_l_emlrtRSI = { 106,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c4_m_emlrtRSI = { 110,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c4_n_emlrtRSI = { 854,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c4_o_emlrtRSI = { 928,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c4_p_emlrtRSI = { 1002,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c4_q_emlrtRSI = { 1030,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c4_r_emlrtRSI = { 1042,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c4_s_emlrtRSI = { 724,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_t_emlrtRSI = { 133,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c4_u_emlrtRSI = { 170,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c4_v_emlrtRSI = { 456,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c4_w_emlrtRSI = { 14,/* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo c4_x_emlrtRSI = { 762,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_y_emlrtRSI = { 768,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_ab_emlrtRSI = { 872,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c4_bb_emlrtRSI = { 76,/* lineNo */
  "imreconstruct",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\imreconstruct.m"/* pathName */
};

static emlrtRSInfo c4_cb_emlrtRSI = { 77,/* lineNo */
  "bwmorph",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwmorph.m"/* pathName */
};

static emlrtRSInfo c4_db_emlrtRSI = { 33,/* lineNo */
  "algbwmorph",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\algbwmorph.m"/* pathName */
};

static emlrtRSInfo c4_eb_emlrtRSI = { 322,/* lineNo */
  "algbwmorph",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\algbwmorph.m"/* pathName */
};

static emlrtRSInfo c4_fb_emlrtRSI = { 325,/* lineNo */
  "algbwmorph",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\algbwmorph.m"/* pathName */
};

static emlrtRSInfo c4_gb_emlrtRSI = { 145,/* lineNo */
  "bwlookup",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwlookup.m"/* pathName */
};

static emlrtRSInfo c4_hb_emlrtRSI = { 60,/* lineNo */
  "hough",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\hough.m"/* pathName */
};

static emlrtRSInfo c4_ib_emlrtRSI = { 290,/* lineNo */
  "hough",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\hough.m"/* pathName */
};

static emlrtRSInfo c4_jb_emlrtRSI = { 111,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_kb_emlrtRSI = { 61,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_lb_emlrtRSI = { 274,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_mb_emlrtRSI = { 317,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_nb_emlrtRSI = { 321,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_ob_emlrtRSI = { 324,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_pb_emlrtRSI = { 93,/* lineNo */
  "validateattributes",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo c4_qb_emlrtRSI = { 427,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_rb_emlrtRSI = { 439,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_sb_emlrtRSI = { 474,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_tb_emlrtRSI = { 463,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c4_ub_emlrtRSI = { 19,/* lineNo */
  "ind2sub",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pathName */
};

static emlrtRTEInfo c4_emlrtRTEI = { 739,/* lineNo */
  9,                                   /* colNo */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pName */
};

static emlrtRTEInfo c4_b_emlrtRTEI = { 740,/* lineNo */
  37,                                  /* colNo */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pName */
};

static emlrtRTEInfo c4_c_emlrtRTEI = { 76,/* lineNo */
  9,                                   /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo c4_d_emlrtRTEI = { 740,/* lineNo */
  9,                                   /* colNo */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m"/* pName */
};

static emlrtRTEInfo c4_e_emlrtRTEI = { 191,/* lineNo */
  5,                                   /* colNo */
  "houghpeaks",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pName */
};

static emlrtBCInfo c4_emlrtBCI = { 1,  /* iFirst */
  87,                                  /* iLast */
  301,                                 /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "hough",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\hough.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c4_b_emlrtBCI = { 1,/* iFirst */
  31,                                  /* iLast */
  348,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "hough",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\hough.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c4_c_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  141,                                 /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_d_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  142,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_e_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  762,                                 /* lineNo */
  70,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_f_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  767,                                 /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_g_emlrtBCI = { 1,/* iFirst */
  120,                                 /* iLast */
  100,                                 /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_h_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  100,                                 /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c4_i_emlrtBCI = { 1,/* iFirst */
  5,                                   /* iLast */
  122,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "houghpeaks",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\houghpeaks.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c4_j_emlrtBCI = { 1,/* iFirst */
  87,                                  /* iLast */
  119,                                 /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "houghpeaks",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\houghpeaks.m",/* pName */
  0                                    /* checkKind */
};

static char_T c4_cv[33] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'h', 'o', 'u',
  'g', 'h', 'p', 'e', 'a', 'k', 's', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
  'I', 'n', 't', 'e', 'g', 'e', 'r' };

static char_T c4_cv1[47] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
  'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't', 'r',
  'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'I', 'n',
  't', 'e', 'g', 'e', 'r' };

/* Function Declarations */
static void initialize_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void initialize_params_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void mdl_start_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void mdl_terminate_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void enable_c4_flightControlSystem(SFc4_flightControlSystemInstanceStruct
  *chartInstance);
static void disable_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void sf_gateway_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void ext_mode_exec_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void c4_update_jit_animation_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void c4_do_animation_call_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void set_sim_state_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance, const mxArray *c4_st);
static void initSimStructsc4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void c4_edge(SFc4_flightControlSystemInstanceStruct *chartInstance, const
                    emlrtStack *c4_sp, boolean_T c4_b_varargin_1[19200],
                    boolean_T c4_varargout_1[19200]);
static void c4_warning(SFc4_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c4_sp);
static void c4_houghpeaks(SFc4_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, real_T c4_b_varargin_1[15660], real_T c4_varargin_4,
  real_T c4_peaks_data[], int32_T c4_peaks_size[2]);
static void c4_validateattributes(SFc4_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, real_T c4_d_a[2]);
static real_T c4_sumColumnB(SFc4_flightControlSystemInstanceStruct
  *chartInstance, real_T c4_x[178]);
static void c4_emlrt_marshallIn(SFc4_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c4_b_y, const char_T *c4_identifier, boolean_T
  c4_c_y[961]);
static void c4_b_emlrt_marshallIn(SFc4_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c4_b_u, const emlrtMsgIdentifier *c4_parentId,
  boolean_T c4_b_y[961]);
static uint8_T c4_c_emlrt_marshallIn(SFc4_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c4_b_is_active_c4_flightControlSystem, const
  char_T *c4_identifier);
static uint8_T c4_d_emlrt_marshallIn(SFc4_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c4_b_u, const emlrtMsgIdentifier *c4_parentId);
static void c4_slStringInitializeDynamicBuffers
  (SFc4_flightControlSystemInstanceStruct *chartInstance);
static void c4_chart_data_browse_helper(SFc4_flightControlSystemInstanceStruct
  *chartInstance, int32_T c4_ssIdNumber, const mxArray **c4_mxData, uint8_T
  *c4_isValueTooBig);
static const mxArray *c4_feval(SFc4_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, const mxArray *c4_input0, const
  mxArray *c4_input1);
static void c4_b_feval(SFc4_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1);
static void init_dsm_address_info(SFc4_flightControlSystemInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc4_flightControlSystemInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  emlrtStack c4_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c4_st.tls = chartInstance->c4_fEmlrtCtx;
  emlrtLicenseCheckR2022a(&c4_st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "image_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c4_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c4_is_active_c4_flightControlSystem = 0U;
}

static void initialize_params_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  static const uint32_T c4_decisionTxtEndIdx = 0U;
  static const uint32_T c4_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c4_chart_data_browse_helper);
  chartInstance->c4_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c4_RuntimeVar,
    &chartInstance->c4_IsDebuggerActive,
    &chartInstance->c4_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c4_mlFcnLineNumber, &chartInstance->c4_IsHeatMapPresent, 0);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c4_covrtInstance, 1U, 0U, 1U,
    17U);
  covrtChartInitFcn(chartInstance->c4_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c4_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c4_decisionTxtStartIdx, &c4_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c4_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c4_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 804);
}

static void mdl_cleanup_runtime_resources_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c4_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c4_covrtInstance);
}

static void enable_c4_flightControlSystem(SFc4_flightControlSystemInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  static boolean_T c4_b_lut[512] = { false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, false, true,
    true, true, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, false, true, false, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, false, false, true, false, true,
    true, true, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, true, true,
    true, false, true, true, true, false, false, true, true, false, true, true,
    true, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, true, true, true, true, true, true,
    true, true, false, false, true, false, true, true, true, true, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, true, true, true, false, true, true, true, false,
    false, true, true, false, true, true, true, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, false, true, true, true, true, true, true, true, true,
    true, true, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, false, false,
    true, false, true, true, true, true, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, true, true, true, false, true, true, true, false, false, true, true,
    false, true, true, true, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, false, false, true, false, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, true, true,
    false, true, true, true, false, false, true, true, false, true, true, true };

  static boolean_T c4_lut[512] = { false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, false, true, true, false, false, true,
    true, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, true, false,
    false, true, true, false, false, true, true, false, false, true, true, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, true, true, true, true, true, true,
    true, true, true, false, false, false, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, true, true, true, true, true, true, true, true,
    true, true, false, false, true, true, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, false, false, false, true, false, false, true, true, false, false,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, true, false, false, false, true, false, false, true, true, true, true,
    true, true, true, true, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true };

  c4_emxArray_real_T_5x2 c4_vb_emlrtRSI;
  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T c4_cost[180];
  real_T c4_sint[180];
  real_T c4_tempBin[31];
  real_T c4_sizeIn[2];
  real_T c4_b_j;
  real_T c4_b_k;
  real_T c4_b_x;
  real_T c4_c_x;
  real_T c4_d_j;
  real_T c4_d_x;
  real_T c4_e_i;
  real_T c4_e_k;
  real_T c4_e_x;
  real_T c4_ex;
  real_T c4_f_x;
  real_T c4_g_x;
  real_T c4_maxval;
  real_T c4_myRho;
  real_T c4_tempNum;
  real_T c4_x;
  int32_T c4_nonZeroPixelMatrix[961];
  int32_T c4_rhoIdxVector[87];
  int32_T c4_numNonZeros[31];
  int32_T c4_b_i;
  int32_T c4_b_i1;
  int32_T c4_b_thetaIdx;
  int32_T c4_b_y;
  int32_T c4_c;
  int32_T c4_c_i;
  int32_T c4_c_j;
  int32_T c4_c_k;
  int32_T c4_d_a;
  int32_T c4_d_i;
  int32_T c4_d_k;
  int32_T c4_f_i;
  int32_T c4_i;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_j;
  int32_T c4_k;
  int32_T c4_n;
  int32_T c4_rhoIdx;
  int32_T c4_thetaIdx;
  boolean_T c4_bv[19200];
  boolean_T c4_canny_img[19200];
  boolean_T c4_image_iter1[961];
  boolean_T c4_last_aout[961];
  boolean_T c4_b_p;
  boolean_T c4_c_p;
  boolean_T c4_exitg1;
  boolean_T c4_p;
  boolean_T c4_x1;
  boolean_T c4_x2;
  c4_st.tls = chartInstance->c4_fEmlrtCtx;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  chartInstance->c4_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  for (c4_i = 0; c4_i < 19200; c4_i++) {
    covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 0U, (real_T)
                      (*chartInstance->c4_u)[c4_i]);
  }

  chartInstance->c4_sfEvent = CALL_EVENT;
  covrtEmlFcnEval(chartInstance->c4_covrtInstance, 4U, 0, 0);
  c4_b_st.site = &c4_emlrtRSI;
  for (c4_b_i1 = 0; c4_b_i1 < 19200; c4_b_i1++) {
    c4_bv[c4_b_i1] = (*chartInstance->c4_u)[c4_b_i1];
  }

  c4_edge(chartInstance, &c4_b_st, c4_bv, c4_canny_img);
  c4_i2 = 0;
  c4_i3 = 0;
  for (c4_i4 = 0; c4_i4 < 31; c4_i4++) {
    for (c4_i5 = 0; c4_i5 < 31; c4_i5++) {
      (*chartInstance->c4_y)[c4_i5 + c4_i2] = c4_canny_img[(c4_i5 + c4_i3) +
        7680];
    }

    c4_i2 += 31;
    c4_i3 += 120;
  }

  c4_b_st.site = &c4_b_emlrtRSI;
  c4_c_st.site = &c4_cb_emlrtRSI;
  do {
    for (c4_i6 = 0; c4_i6 < 961; c4_i6++) {
      c4_last_aout[c4_i6] = (*chartInstance->c4_y)[c4_i6];
    }

    c4_d_st.site = &c4_db_emlrtRSI;
    for (c4_i7 = 0; c4_i7 < 2; c4_i7++) {
      c4_sizeIn[c4_i7] = 31.0;
    }

    bwlookup_tbb_boolean(&(*chartInstance->c4_y)[0], &c4_sizeIn[0], 2.0,
                         &c4_lut[0], 512.0, &c4_image_iter1[0]);
    for (c4_i8 = 0; c4_i8 < 2; c4_i8++) {
      c4_sizeIn[c4_i8] = 31.0;
    }

    bwlookup_tbb_boolean(&c4_image_iter1[0], &c4_sizeIn[0], 2.0, &c4_b_lut[0],
                         512.0, &(*chartInstance->c4_y)[0]);
    c4_p = false;
    c4_b_p = true;
    c4_k = 0;
    c4_exitg1 = false;
    while ((!c4_exitg1) && (c4_k < 961)) {
      c4_b_k = (real_T)c4_k + 1.0;
      c4_x1 = c4_last_aout[(int32_T)c4_b_k - 1];
      c4_x2 = (*chartInstance->c4_y)[(int32_T)c4_b_k - 1];
      c4_c_p = ((int32_T)c4_x1 == (int32_T)c4_x2);
      if (!c4_c_p) {
        c4_b_p = false;
        c4_exitg1 = true;
      } else {
        c4_k++;
      }
    }

    if (c4_b_p) {
      c4_p = true;
    }
  } while (!c4_p);

  c4_b_st.site = &c4_c_emlrtRSI;
  c4_c_st.site = &c4_hb_emlrtRSI;
  for (c4_b_i = 0; c4_b_i < 180; c4_b_i++) {
    c4_c_i = c4_b_i;
    c4_x = (-90.0 + (real_T)c4_c_i) * 3.1415926535897931 / 180.0;
    c4_b_x = c4_x;
    c4_b_x = muDoubleScalarCos(c4_b_x);
    c4_cost[c4_c_i] = c4_b_x;
    c4_c_x = (-90.0 + (real_T)c4_c_i) * 3.1415926535897931 / 180.0;
    c4_d_x = c4_c_x;
    c4_d_x = muDoubleScalarSin(c4_d_x);
    c4_sint[c4_c_i] = c4_d_x;
  }

  c4_d_st.site = &c4_ib_emlrtRSI;
  for (c4_j = 0; c4_j < 31; c4_j++) {
    c4_b_j = (real_T)c4_j + 1.0;
    c4_tempNum = 0.0;
    for (c4_d_i = 0; c4_d_i < 31; c4_d_i++) {
      c4_e_i = (real_T)c4_d_i + 1.0;
      if ((*chartInstance->c4_y)[((int32_T)c4_e_i + 31 * ((int32_T)c4_b_j - 1))
          - 1]) {
        c4_tempNum++;
        c4_i12 = (int32_T)c4_tempNum;
        if ((c4_i12 < 1) || (c4_i12 > 31)) {
          emlrtDynamicBoundsCheckR2012b(c4_i12, 1, 31, &c4_b_emlrtBCI, &c4_d_st);
        }

        c4_tempBin[c4_i12 - 1] = c4_e_i;
      }
    }

    c4_numNonZeros[(int32_T)c4_b_j - 1] = (int32_T)c4_tempNum;
    c4_d_k = 0;
    c4_exitg1 = false;
    while ((!c4_exitg1) && (c4_d_k < 31)) {
      c4_e_k = (real_T)c4_d_k + 1.0;
      if (c4_e_k > c4_tempNum) {
        c4_exitg1 = true;
      } else {
        c4_nonZeroPixelMatrix[((int32_T)c4_e_k + 31 * ((int32_T)c4_b_j - 1)) - 1]
          = (int32_T)c4_tempBin[(int32_T)c4_e_k - 1];
        c4_d_k++;
      }
    }
  }

  for (c4_thetaIdx = 0; c4_thetaIdx < 180; c4_thetaIdx++) {
    c4_b_thetaIdx = c4_thetaIdx;
    for (c4_i10 = 0; c4_i10 < 87; c4_i10++) {
      c4_rhoIdxVector[c4_i10] = 0;
    }

    for (c4_c_j = 0; c4_c_j < 31; c4_c_j++) {
      c4_d_j = (real_T)c4_c_j + 1.0;
      c4_i13 = c4_numNonZeros[(int32_T)c4_d_j - 1];
      c4_i14 = (uint8_T)c4_i13 - 1;
      for (c4_f_i = 0; c4_f_i <= c4_i14; c4_f_i++) {
        c4_c_i = c4_f_i;
        c4_n = c4_nonZeroPixelMatrix[c4_c_i + 31 * ((int32_T)c4_d_j - 1)];
        c4_myRho = (c4_d_j - 1.0) * c4_cost[c4_b_thetaIdx] + ((real_T)c4_n - 1.0)
          * c4_sint[c4_b_thetaIdx];
        c4_g_x = c4_myRho - -43.0;
        c4_b_y = (int32_T)(c4_g_x + 0.5) + 1;
        c4_rhoIdx = c4_b_y;
        c4_d_a = c4_rhoIdxVector[c4_rhoIdx - 1] + 1;
        c4_c = c4_d_a;
        if ((c4_rhoIdx < 1) || (c4_rhoIdx > 87)) {
          emlrtDynamicBoundsCheckR2012b(c4_rhoIdx, 1, 87, &c4_emlrtBCI, &c4_c_st);
        }

        c4_rhoIdxVector[c4_rhoIdx - 1] = c4_c;
      }
    }

    for (c4_i11 = 0; c4_i11 < 87; c4_i11++) {
      chartInstance->c4_H[c4_i11 + 87 * c4_b_thetaIdx] = (real_T)
        c4_rhoIdxVector[c4_i11];
    }
  }

  for (c4_i9 = 0; c4_i9 < 15660; c4_i9++) {
    chartInstance->c4_varargin_1[c4_i9] = chartInstance->c4_H[c4_i9];
  }

  c4_ex = chartInstance->c4_varargin_1[0];
  for (c4_c_k = 0; c4_c_k < 15659; c4_c_k++) {
    if (c4_ex < chartInstance->c4_varargin_1[c4_c_k + 1]) {
      c4_ex = chartInstance->c4_varargin_1[c4_c_k + 1];
    }
  }

  c4_maxval = c4_ex;
  c4_e_x = 0.3 * c4_maxval;
  c4_f_x = c4_e_x;
  c4_f_x = muDoubleScalarCeil(c4_f_x);
  c4_b_st.site = &c4_d_emlrtRSI;
  c4_houghpeaks(chartInstance, &c4_b_st, chartInstance->c4_H, c4_f_x,
                c4_vb_emlrtRSI.data, c4_vb_emlrtRSI.size);
  c4_do_animation_call_c4_flightControlSystem(chartInstance);
  for (c4_i15 = 0; c4_i15 < 961; c4_i15++) {
    covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 1U, (real_T)
                      (*chartInstance->c4_y)[c4_i15]);
  }
}

static void ext_mode_exec_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c4_update_jit_animation_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c4_do_animation_call_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_st;
  c4_st = NULL;
  c4_st = NULL;
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_createcellmatrix(2, 1), false);
  c4_c_y = NULL;
  sf_mex_assign(&c4_c_y, sf_mex_create("y", *chartInstance->c4_y, 11, 0U, 1U, 0U,
    2, 31, 31), false);
  sf_mex_setcell(c4_b_y, 0, c4_c_y);
  c4_d_y = NULL;
  sf_mex_assign(&c4_d_y, sf_mex_create("y",
    &chartInstance->c4_is_active_c4_flightControlSystem, 3, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c4_b_y, 1, c4_d_y);
  sf_mex_assign(&c4_st, c4_b_y, false);
  return c4_st;
}

static void set_sim_state_c4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance, const mxArray *c4_st)
{
  const mxArray *c4_b_u;
  int32_T c4_i;
  boolean_T c4_bv[961];
  chartInstance->c4_doneDoubleBufferReInit = true;
  c4_b_u = sf_mex_dup(c4_st);
  c4_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_b_u, 0)), "y",
                      c4_bv);
  for (c4_i = 0; c4_i < 961; c4_i++) {
    (*chartInstance->c4_y)[c4_i] = c4_bv[c4_i];
  }

  chartInstance->c4_is_active_c4_flightControlSystem = c4_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c4_b_u, 1)),
     "is_active_c4_flightControlSystem");
  sf_mex_destroy(&c4_b_u);
  sf_mex_destroy(&c4_st);
}

static void initSimStructsc4_flightControlSystem
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

const mxArray *sf_c4_flightControlSystem_get_eml_resolved_functions_info(void)
{
  const mxArray *c4_nameCaptureInfo = NULL;
  c4_nameCaptureInfo = NULL;
  sf_mex_assign(&c4_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c4_nameCaptureInfo;
}

static void c4_edge(SFc4_flightControlSystemInstanceStruct *chartInstance, const
                    emlrtStack *c4_sp, boolean_T c4_b_varargin_1[19200],
                    boolean_T c4_varargout_1[19200])
{
  static real_T c4_b_kernel[13] = { 0.0020299751839417137, 0.0102182810143517,
    0.058116735860084034, 0.19634433732941292, 0.37823877042972087,
    0.35505190018248872, 0.0, -0.35505190018248872, -0.37823877042972087,
    -0.19634433732941292, -0.058116735860084034, -0.0102182810143517,
    -0.0020299751839417137 };

  static real_T c4_c_kernel[13] = { 3.4813359214923059E-5,
    0.00054457256285105158, 0.0051667606200595222, 0.029732654490475543,
    0.10377716120747747, 0.21969625200024598, 0.28209557151935094,
    0.21969625200024598, 0.10377716120747747, 0.029732654490475543,
    0.0051667606200595222, 0.00054457256285105158, 3.4813359214923059E-5 };

  static real_T c4_d_kernel[13] = { 0.0020299751839417137, 0.0102182810143517,
    0.058116735860084034, 0.19634433732941292, 0.37823877042972087,
    0.35505190018248872, 0.0, -0.35505190018248872, -0.37823877042972087,
    -0.19634433732941292, -0.058116735860084034, -0.0102182810143517,
    -0.0020299751839417137 };

  static real_T c4_kernel[13] = { 3.4813359214923059E-5, 0.00054457256285105158,
    0.0051667606200595222, 0.029732654490475543, 0.10377716120747747,
    0.21969625200024598, 0.28209557151935094, 0.21969625200024598,
    0.10377716120747747, 0.029732654490475543, 0.0051667606200595222,
    0.00054457256285105158, 3.4813359214923059E-5 };

  static real_T c4_nonZeroKernel[12] = { 0.0020299751839417137,
    0.0102182810143517, 0.058116735860084034, 0.19634433732941292,
    0.37823877042972087, 0.35505190018248872, -0.35505190018248872,
    -0.37823877042972087, -0.19634433732941292, -0.058116735860084034,
    -0.0102182810143517, -0.0020299751839417137 };

  static int32_T c4_b_idxA[344] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13,
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

  static int32_T c4_idxA[320] = { 1, 1, 1, 1, 1, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9,
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

  static boolean_T c4_b_conn[13] = { true, true, true, true, true, true, false,
    true, true, true, true, true, true };

  static boolean_T c4_c_conn[13] = { true, true, true, true, true, true, false,
    true, true, true, true, true, true };

  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_st;
  real_T c4_counts[64];
  real_T c4_connDimsT[2];
  real_T c4_outSizeT[2];
  real_T c4_padSizeT[2];
  real_T c4_startT[2];
  real_T c4_b_data[1];
  real_T c4_highThresh_data[1];
  real_T c4_lowThresh_data[1];
  real_T c4_b_idx;
  real_T c4_b_j;
  real_T c4_b_lowThresh;
  real_T c4_d_i;
  real_T c4_d_j;
  real_T c4_f_j;
  real_T c4_g_i;
  real_T c4_h_j;
  real_T c4_highThresh;
  real_T c4_highThreshTemp;
  real_T c4_j_i;
  real_T c4_lowThresh;
  real_T c4_m_i;
  real_T c4_o_i;
  real_T c4_out;
  real_T c4_sum;
  int32_T c4_highThresh_size[1];
  int32_T c4_lowThresh_size[1];
  int32_T c4_b_c;
  int32_T c4_b_i;
  int32_T c4_b_i1;
  int32_T c4_c;
  int32_T c4_c_i;
  int32_T c4_c_j;
  int32_T c4_e_i;
  int32_T c4_e_j;
  int32_T c4_f_i;
  int32_T c4_g_j;
  int32_T c4_h_i;
  int32_T c4_i;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i14;
  int32_T c4_i15;
  int32_T c4_i16;
  int32_T c4_i17;
  int32_T c4_i18;
  int32_T c4_i19;
  int32_T c4_i2;
  int32_T c4_i20;
  int32_T c4_i21;
  int32_T c4_i22;
  int32_T c4_i23;
  int32_T c4_i24;
  int32_T c4_i25;
  int32_T c4_i26;
  int32_T c4_i27;
  int32_T c4_i28;
  int32_T c4_i29;
  int32_T c4_i3;
  int32_T c4_i30;
  int32_T c4_i31;
  int32_T c4_i32;
  int32_T c4_i33;
  int32_T c4_i34;
  int32_T c4_i35;
  int32_T c4_i36;
  int32_T c4_i37;
  int32_T c4_i38;
  int32_T c4_i39;
  int32_T c4_i4;
  int32_T c4_i40;
  int32_T c4_i41;
  int32_T c4_i42;
  int32_T c4_i43;
  int32_T c4_i44;
  int32_T c4_i45;
  int32_T c4_i46;
  int32_T c4_i47;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_i_i;
  int32_T c4_idx;
  int32_T c4_j;
  int32_T c4_k_i;
  int32_T c4_l_i;
  int32_T c4_loop_ub;
  int32_T c4_n_i;
  real32_T c4_b_i2[19200];
  real32_T c4_b;
  real32_T c4_b_b;
  real32_T c4_b_r;
  real32_T c4_b_x;
  real32_T c4_b_x1;
  real32_T c4_b_x2;
  real32_T c4_b_y;
  real32_T c4_c_b;
  real32_T c4_c_varargin_1;
  real32_T c4_c_x;
  real32_T c4_c_y;
  real32_T c4_d_a;
  real32_T c4_d_b;
  real32_T c4_d_idx;
  real32_T c4_d_x;
  real32_T c4_d_y;
  real32_T c4_e_a;
  real32_T c4_e_x;
  real32_T c4_e_y;
  real32_T c4_f_a;
  real32_T c4_f_x;
  real32_T c4_f_y;
  real32_T c4_g_a;
  real32_T c4_g_b;
  real32_T c4_g_x;
  real32_T c4_g_y;
  real32_T c4_h_a;
  real32_T c4_h_x;
  real32_T c4_h_y;
  real32_T c4_i_a;
  real32_T c4_i_x;
  real32_T c4_i_y;
  real32_T c4_j_a;
  real32_T c4_j_x;
  real32_T c4_j_y;
  real32_T c4_k_x;
  real32_T c4_k_y;
  real32_T c4_l_y;
  real32_T c4_magmax;
  real32_T c4_r;
  real32_T c4_varargin_2;
  real32_T c4_x;
  real32_T c4_x1;
  real32_T c4_x2;
  int8_T c4_c_idx;
  boolean_T c4_E[19200];
  boolean_T c4_conn[13];
  boolean_T c4_b_modeFlag;
  boolean_T c4_b_tooBig;
  boolean_T c4_c_modeFlag;
  boolean_T c4_c_tooBig;
  boolean_T c4_d_modeFlag;
  boolean_T c4_d_tooBig;
  boolean_T c4_e_b;
  boolean_T c4_e_modeFlag;
  boolean_T c4_f_b;
  boolean_T c4_f_modeFlag;
  boolean_T c4_g_modeFlag;
  boolean_T c4_h_modeFlag;
  boolean_T c4_i_modeFlag;
  boolean_T c4_j_modeFlag;
  boolean_T c4_k_modeFlag;
  boolean_T c4_l_modeFlag;
  boolean_T c4_modeFlag;
  boolean_T c4_nanFlag;
  boolean_T c4_tooBig;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  for (c4_i = 0; c4_i < 19200; c4_i++) {
    chartInstance->c4_c_a[c4_i] = (real32_T)c4_b_varargin_1[c4_i];
  }

  c4_st.site = &c4_e_emlrtRSI;
  c4_b_st.site = &c4_h_emlrtRSI;
  c4_c_st.site = &c4_l_emlrtRSI;
  c4_d_st.site = &c4_n_emlrtRSI;
  for (c4_j = 0; c4_j < 160; c4_j++) {
    c4_b_j = (real_T)c4_j + 1.0;
    for (c4_b_i = 0; c4_b_i < 132; c4_b_i++) {
      c4_d_i = (real_T)c4_b_i + 1.0;
      if ((c4_idxA[(int32_T)c4_d_i - 1] < 1) || (c4_idxA[(int32_T)c4_d_i - 1] >
           120)) {
        emlrtDynamicBoundsCheckR2012b(c4_idxA[(int32_T)c4_d_i - 1], 1, 120,
          &c4_g_emlrtBCI, &c4_d_st);
      }

      c4_b_i1 = c4_idxA[(int32_T)c4_b_j + 159];
      if ((c4_b_i1 < 1) || (c4_b_i1 > 160)) {
        emlrtDynamicBoundsCheckR2012b(c4_b_i1, 1, 160, &c4_h_emlrtBCI, &c4_d_st);
      }

      chartInstance->c4_a[((int32_T)c4_d_i + 132 * ((int32_T)c4_b_j - 1)) - 1] =
        chartInstance->c4_c_a[(c4_idxA[(int32_T)c4_d_i - 1] + 120 * (c4_b_i1 - 1))
        - 1];
    }
  }

  c4_c_st.site = &c4_m_emlrtRSI;
  c4_d_st.site = &c4_o_emlrtRSI;
  c4_tooBig = true;
  for (c4_c_i = 0; c4_c_i < 2; c4_c_i++) {
    c4_tooBig = false;
  }

  if (!c4_tooBig) {
    c4_modeFlag = true;
  } else {
    c4_modeFlag = false;
  }

  if (c4_modeFlag) {
    c4_b_modeFlag = true;
  } else {
    c4_b_modeFlag = false;
  }

  c4_c_modeFlag = c4_b_modeFlag;
  if (c4_c_modeFlag) {
    for (c4_i3 = 0; c4_i3 < 2; c4_i3++) {
      c4_padSizeT[c4_i3] = 132.0 + 28.0 * (real_T)c4_i3;
    }

    for (c4_i5 = 0; c4_i5 < 2; c4_i5++) {
      c4_outSizeT[c4_i5] = 120.0 + 40.0 * (real_T)c4_i5;
    }

    for (c4_i7 = 0; c4_i7 < 2; c4_i7++) {
      c4_connDimsT[c4_i7] = 13.0 + -12.0 * (real_T)c4_i7;
    }

    ippfilter_real32(&chartInstance->c4_a[0], &chartInstance->c4_i1[0],
                     &c4_outSizeT[0], 2.0, &c4_padSizeT[0], &c4_kernel[0],
                     &c4_connDimsT[0], true);
  } else {
    for (c4_i2 = 0; c4_i2 < 13; c4_i2++) {
      c4_conn[c4_i2] = true;
    }

    for (c4_i4 = 0; c4_i4 < 2; c4_i4++) {
      c4_padSizeT[c4_i4] = 132.0 + 28.0 * (real_T)c4_i4;
    }

    for (c4_i6 = 0; c4_i6 < 2; c4_i6++) {
      c4_outSizeT[c4_i6] = 120.0 + 40.0 * (real_T)c4_i6;
    }

    for (c4_i8 = 0; c4_i8 < 2; c4_i8++) {
      c4_connDimsT[c4_i8] = 13.0 + -12.0 * (real_T)c4_i8;
    }

    for (c4_i9 = 0; c4_i9 < 2; c4_i9++) {
      c4_startT[c4_i9] = 6.0 + -6.0 * (real_T)c4_i9;
    }

    imfilter_real32(&chartInstance->c4_a[0], &chartInstance->c4_i1[0], 2.0,
                    &c4_outSizeT[0], 2.0, &c4_padSizeT[0], &c4_kernel[0], 13.0,
                    &c4_conn[0], 2.0, &c4_connDimsT[0], &c4_startT[0], 2.0, true,
                    true);
  }

  c4_b_st.site = &c4_i_emlrtRSI;
  c4_c_st.site = &c4_l_emlrtRSI;
  c4_d_st.site = &c4_n_emlrtRSI;
  for (c4_c_j = 0; c4_c_j < 172; c4_c_j++) {
    c4_d_j = (real_T)c4_c_j + 1.0;
    for (c4_e_i = 0; c4_e_i < 120; c4_e_i++) {
      c4_g_i = (real_T)c4_e_i + 1.0;
      if ((c4_b_idxA[(int32_T)c4_g_i - 1] < 1) || (c4_b_idxA[(int32_T)c4_g_i - 1]
           > 120)) {
        emlrtDynamicBoundsCheckR2012b(c4_b_idxA[(int32_T)c4_g_i - 1], 1, 120,
          &c4_g_emlrtBCI, &c4_d_st);
      }

      c4_i10 = c4_b_idxA[(int32_T)c4_d_j + 171];
      if ((c4_i10 < 1) || (c4_i10 > 160)) {
        emlrtDynamicBoundsCheckR2012b(c4_i10, 1, 160, &c4_h_emlrtBCI, &c4_d_st);
      }

      chartInstance->c4_b_a[((int32_T)c4_g_i + 120 * ((int32_T)c4_d_j - 1)) - 1]
        = chartInstance->c4_i1[(c4_b_idxA[(int32_T)c4_g_i - 1] + 120 * (c4_i10 -
        1)) - 1];
    }
  }

  c4_c_st.site = &c4_m_emlrtRSI;
  c4_d_st.site = &c4_o_emlrtRSI;
  c4_b_tooBig = true;
  for (c4_f_i = 0; c4_f_i < 2; c4_f_i++) {
    c4_b_tooBig = false;
  }

  if (!c4_b_tooBig) {
    c4_d_modeFlag = true;
  } else {
    c4_d_modeFlag = false;
  }

  if (c4_d_modeFlag) {
    c4_e_modeFlag = true;
  } else {
    c4_e_modeFlag = false;
  }

  c4_f_modeFlag = c4_e_modeFlag;
  if (c4_f_modeFlag) {
    for (c4_i12 = 0; c4_i12 < 2; c4_i12++) {
      c4_padSizeT[c4_i12] = 120.0 + 52.0 * (real_T)c4_i12;
    }

    for (c4_i14 = 0; c4_i14 < 2; c4_i14++) {
      c4_outSizeT[c4_i14] = 120.0 + 40.0 * (real_T)c4_i14;
    }

    for (c4_i16 = 0; c4_i16 < 2; c4_i16++) {
      c4_connDimsT[c4_i16] = 1.0 + 12.0 * (real_T)c4_i16;
    }

    ippfilter_real32(&chartInstance->c4_b_a[0], &chartInstance->c4_i1[0],
                     &c4_outSizeT[0], 2.0, &c4_padSizeT[0], &c4_b_kernel[0],
                     &c4_connDimsT[0], true);
  } else {
    for (c4_i11 = 0; c4_i11 < 2; c4_i11++) {
      c4_padSizeT[c4_i11] = 120.0 + 52.0 * (real_T)c4_i11;
    }

    for (c4_i13 = 0; c4_i13 < 2; c4_i13++) {
      c4_outSizeT[c4_i13] = 120.0 + 40.0 * (real_T)c4_i13;
    }

    for (c4_i15 = 0; c4_i15 < 2; c4_i15++) {
      c4_connDimsT[c4_i15] = 1.0 + 12.0 * (real_T)c4_i15;
    }

    for (c4_i17 = 0; c4_i17 < 2; c4_i17++) {
      c4_startT[c4_i17] = 6.0 * (real_T)c4_i17;
    }

    imfilter_real32(&chartInstance->c4_b_a[0], &chartInstance->c4_i1[0], 2.0,
                    &c4_outSizeT[0], 2.0, &c4_padSizeT[0], &c4_nonZeroKernel[0],
                    12.0, &c4_b_conn[0], 2.0, &c4_connDimsT[0], &c4_startT[0],
                    2.0, true, true);
  }

  c4_b_st.site = &c4_j_emlrtRSI;
  c4_c_st.site = &c4_l_emlrtRSI;
  c4_d_st.site = &c4_n_emlrtRSI;
  for (c4_e_j = 0; c4_e_j < 172; c4_e_j++) {
    c4_f_j = (real_T)c4_e_j + 1.0;
    for (c4_h_i = 0; c4_h_i < 120; c4_h_i++) {
      c4_j_i = (real_T)c4_h_i + 1.0;
      if ((c4_b_idxA[(int32_T)c4_j_i - 1] < 1) || (c4_b_idxA[(int32_T)c4_j_i - 1]
           > 120)) {
        emlrtDynamicBoundsCheckR2012b(c4_b_idxA[(int32_T)c4_j_i - 1], 1, 120,
          &c4_g_emlrtBCI, &c4_d_st);
      }

      c4_i18 = c4_b_idxA[(int32_T)c4_f_j + 171];
      if ((c4_i18 < 1) || (c4_i18 > 160)) {
        emlrtDynamicBoundsCheckR2012b(c4_i18, 1, 160, &c4_h_emlrtBCI, &c4_d_st);
      }

      chartInstance->c4_b_a[((int32_T)c4_j_i + 120 * ((int32_T)c4_f_j - 1)) - 1]
        = chartInstance->c4_c_a[(c4_b_idxA[(int32_T)c4_j_i - 1] + 120 * (c4_i18
        - 1)) - 1];
    }
  }

  c4_c_st.site = &c4_m_emlrtRSI;
  c4_d_st.site = &c4_o_emlrtRSI;
  c4_c_tooBig = true;
  for (c4_i_i = 0; c4_i_i < 2; c4_i_i++) {
    c4_c_tooBig = false;
  }

  if (!c4_c_tooBig) {
    c4_g_modeFlag = true;
  } else {
    c4_g_modeFlag = false;
  }

  if (c4_g_modeFlag) {
    c4_h_modeFlag = true;
  } else {
    c4_h_modeFlag = false;
  }

  c4_i_modeFlag = c4_h_modeFlag;
  if (c4_i_modeFlag) {
    for (c4_i20 = 0; c4_i20 < 2; c4_i20++) {
      c4_padSizeT[c4_i20] = 120.0 + 52.0 * (real_T)c4_i20;
    }

    for (c4_i22 = 0; c4_i22 < 2; c4_i22++) {
      c4_outSizeT[c4_i22] = 120.0 + 40.0 * (real_T)c4_i22;
    }

    for (c4_i24 = 0; c4_i24 < 2; c4_i24++) {
      c4_connDimsT[c4_i24] = 1.0 + 12.0 * (real_T)c4_i24;
    }

    ippfilter_real32(&chartInstance->c4_b_a[0], &c4_b_i2[0], &c4_outSizeT[0],
                     2.0, &c4_padSizeT[0], &c4_c_kernel[0], &c4_connDimsT[0],
                     true);
  } else {
    for (c4_i19 = 0; c4_i19 < 13; c4_i19++) {
      c4_conn[c4_i19] = true;
    }

    for (c4_i21 = 0; c4_i21 < 2; c4_i21++) {
      c4_padSizeT[c4_i21] = 120.0 + 52.0 * (real_T)c4_i21;
    }

    for (c4_i23 = 0; c4_i23 < 2; c4_i23++) {
      c4_outSizeT[c4_i23] = 120.0 + 40.0 * (real_T)c4_i23;
    }

    for (c4_i25 = 0; c4_i25 < 2; c4_i25++) {
      c4_connDimsT[c4_i25] = 1.0 + 12.0 * (real_T)c4_i25;
    }

    for (c4_i26 = 0; c4_i26 < 2; c4_i26++) {
      c4_startT[c4_i26] = 6.0 * (real_T)c4_i26;
    }

    imfilter_real32(&chartInstance->c4_b_a[0], &c4_b_i2[0], 2.0, &c4_outSizeT[0],
                    2.0, &c4_padSizeT[0], &c4_kernel[0], 13.0, &c4_conn[0], 2.0,
                    &c4_connDimsT[0], &c4_startT[0], 2.0, true, true);
  }

  c4_b_st.site = &c4_k_emlrtRSI;
  c4_c_st.site = &c4_l_emlrtRSI;
  c4_d_st.site = &c4_n_emlrtRSI;
  for (c4_g_j = 0; c4_g_j < 160; c4_g_j++) {
    c4_h_j = (real_T)c4_g_j + 1.0;
    for (c4_k_i = 0; c4_k_i < 132; c4_k_i++) {
      c4_m_i = (real_T)c4_k_i + 1.0;
      if ((c4_idxA[(int32_T)c4_m_i - 1] < 1) || (c4_idxA[(int32_T)c4_m_i - 1] >
           120)) {
        emlrtDynamicBoundsCheckR2012b(c4_idxA[(int32_T)c4_m_i - 1], 1, 120,
          &c4_g_emlrtBCI, &c4_d_st);
      }

      c4_i27 = c4_idxA[(int32_T)c4_h_j + 159];
      if ((c4_i27 < 1) || (c4_i27 > 160)) {
        emlrtDynamicBoundsCheckR2012b(c4_i27, 1, 160, &c4_h_emlrtBCI, &c4_d_st);
      }

      chartInstance->c4_a[((int32_T)c4_m_i + 132 * ((int32_T)c4_h_j - 1)) - 1] =
        c4_b_i2[(c4_idxA[(int32_T)c4_m_i - 1] + 120 * (c4_i27 - 1)) - 1];
    }
  }

  c4_c_st.site = &c4_m_emlrtRSI;
  c4_d_st.site = &c4_o_emlrtRSI;
  c4_d_tooBig = true;
  for (c4_l_i = 0; c4_l_i < 2; c4_l_i++) {
    c4_d_tooBig = false;
  }

  if (!c4_d_tooBig) {
    c4_j_modeFlag = true;
  } else {
    c4_j_modeFlag = false;
  }

  if (c4_j_modeFlag) {
    c4_k_modeFlag = true;
  } else {
    c4_k_modeFlag = false;
  }

  c4_l_modeFlag = c4_k_modeFlag;
  if (c4_l_modeFlag) {
    for (c4_i29 = 0; c4_i29 < 2; c4_i29++) {
      c4_padSizeT[c4_i29] = 132.0 + 28.0 * (real_T)c4_i29;
    }

    for (c4_i31 = 0; c4_i31 < 2; c4_i31++) {
      c4_outSizeT[c4_i31] = 120.0 + 40.0 * (real_T)c4_i31;
    }

    for (c4_i33 = 0; c4_i33 < 2; c4_i33++) {
      c4_connDimsT[c4_i33] = 13.0 + -12.0 * (real_T)c4_i33;
    }

    ippfilter_real32(&chartInstance->c4_a[0], &c4_b_i2[0], &c4_outSizeT[0], 2.0,
                     &c4_padSizeT[0], &c4_d_kernel[0], &c4_connDimsT[0], true);
  } else {
    for (c4_i28 = 0; c4_i28 < 2; c4_i28++) {
      c4_padSizeT[c4_i28] = 132.0 + 28.0 * (real_T)c4_i28;
    }

    for (c4_i30 = 0; c4_i30 < 2; c4_i30++) {
      c4_outSizeT[c4_i30] = 120.0 + 40.0 * (real_T)c4_i30;
    }

    for (c4_i32 = 0; c4_i32 < 2; c4_i32++) {
      c4_connDimsT[c4_i32] = 13.0 + -12.0 * (real_T)c4_i32;
    }

    for (c4_i34 = 0; c4_i34 < 2; c4_i34++) {
      c4_startT[c4_i34] = 6.0 + -6.0 * (real_T)c4_i34;
    }

    imfilter_real32(&chartInstance->c4_a[0], &c4_b_i2[0], 2.0, &c4_outSizeT[0],
                    2.0, &c4_padSizeT[0], &c4_nonZeroKernel[0], 12.0,
                    &c4_c_conn[0], 2.0, &c4_connDimsT[0], &c4_startT[0], 2.0,
                    true, true);
  }

  c4_x = chartInstance->c4_i1[0];
  c4_b_y = c4_b_i2[0];
  c4_d_a = c4_x;
  c4_b = c4_b_y;
  c4_b_x = c4_d_a;
  c4_c_y = c4_b;
  c4_x1 = c4_b_x;
  c4_x2 = c4_c_y;
  c4_e_a = c4_x1;
  c4_b_b = c4_x2;
  c4_r = muSingleScalarHypot(c4_e_a, c4_b_b);
  chartInstance->c4_c_a[0] = c4_r;
  c4_magmax = chartInstance->c4_c_a[0];
  for (c4_idx = 0; c4_idx < 19199; c4_idx++) {
    c4_b_idx = (real_T)c4_idx + 2.0;
    c4_c_x = chartInstance->c4_i1[(int32_T)c4_b_idx - 1];
    c4_f_y = c4_b_i2[(int32_T)c4_b_idx - 1];
    c4_f_a = c4_c_x;
    c4_c_b = c4_f_y;
    c4_d_x = c4_f_a;
    c4_g_y = c4_c_b;
    c4_b_x1 = c4_d_x;
    c4_b_x2 = c4_g_y;
    c4_g_a = c4_b_x1;
    c4_d_b = c4_b_x2;
    c4_b_r = muSingleScalarHypot(c4_g_a, c4_d_b);
    chartInstance->c4_c_a[(int32_T)c4_b_idx - 1] = c4_b_r;
    c4_c_varargin_1 = chartInstance->c4_c_a[(int32_T)c4_b_idx - 1];
    c4_varargin_2 = c4_magmax;
    c4_f_x = c4_c_varargin_1;
    c4_h_y = c4_varargin_2;
    c4_g_x = c4_f_x;
    c4_i_y = c4_h_y;
    c4_h_x = c4_g_x;
    c4_j_y = c4_i_y;
    c4_h_a = c4_h_x;
    c4_g_b = c4_j_y;
    c4_j_x = c4_h_a;
    c4_k_y = c4_g_b;
    c4_k_x = c4_j_x;
    c4_l_y = c4_k_y;
    c4_magmax = muSingleScalarMax(c4_k_x, c4_l_y);
  }

  if (c4_magmax > 0.0F) {
    c4_d_y = c4_magmax;
    c4_e_y = c4_d_y;
    for (c4_i35 = 0; c4_i35 < 19200; c4_i35++) {
      chartInstance->c4_c_a[c4_i35] /= c4_e_y;
    }
  }

  c4_st.site = &c4_f_emlrtRSI;
  c4_b_st.site = &c4_s_emlrtRSI;
  c4_c_st.site = &c4_t_emlrtRSI;
  c4_d_st.site = &c4_u_emlrtRSI;
  c4_out = 1.0;
  getnumcores(&c4_out);
  for (c4_i36 = 0; c4_i36 < 64; c4_i36++) {
    c4_counts[c4_i36] = 0.0;
  }

  c4_nanFlag = false;
  for (c4_n_i = 0; c4_n_i < 19200; c4_n_i++) {
    c4_o_i = (real_T)c4_n_i + 1.0;
    c4_e_x = chartInstance->c4_c_a[(int32_T)c4_o_i - 1];
    c4_e_b = muSingleScalarIsNaN(c4_e_x);
    if (c4_e_b) {
      c4_nanFlag = true;
      c4_d_idx = 0.0F;
    } else {
      c4_d_idx = chartInstance->c4_c_a[(int32_T)c4_o_i - 1] * 63.0F + 0.5F;
    }

    if (c4_d_idx > 63.0F) {
      c4_counts[63]++;
    } else {
      c4_i_x = chartInstance->c4_c_a[(int32_T)c4_o_i - 1];
      c4_f_b = muSingleScalarIsInf(c4_i_x);
      if (c4_f_b) {
        c4_counts[63]++;
      } else {
        c4_i_a = c4_d_idx;
        c4_c = (int32_T)c4_i_a;
        c4_j_a = c4_d_idx;
        c4_b_c = (int32_T)c4_j_a;
        c4_counts[c4_c] = c4_counts[c4_b_c] + 1.0;
      }
    }
  }

  if (c4_nanFlag) {
    c4_d_st.site = &c4_v_emlrtRSI;
    c4_warning(chartInstance, &c4_d_st);
  }

  c4_sum = 0.0;
  c4_c_idx = 1;
  while ((!(c4_sum > 13440.0)) && ((real_T)c4_c_idx <= 64.0)) {
    c4_sum += c4_counts[c4_c_idx - 1];
    c4_i38 = c4_c_idx + 1;
    if (c4_i38 > 127) {
      c4_i38 = 127;
    } else if (c4_i38 < -128) {
      c4_i38 = -128;
    }

    c4_c_idx = (int8_T)c4_i38;
  }

  c4_i37 = c4_c_idx - 1;
  if (c4_i37 > 127) {
    c4_i37 = 127;
  } else if (c4_i37 < -128) {
    c4_i37 = -128;
  }

  c4_highThreshTemp = (real_T)(int8_T)c4_i37 / 64.0;
  if (((real_T)c4_c_idx > 64.0) && (!(c4_sum > 13440.0))) {
    c4_highThresh_size[0] = 0;
    c4_lowThresh_size[0] = 0;
  } else {
    c4_highThresh_size[0] = 1;
    c4_highThresh_data[0] = c4_highThreshTemp;
    c4_loop_ub = c4_highThresh_size[0] - 1;
    for (c4_i39 = 0; c4_i39 <= c4_loop_ub; c4_i39++) {
      c4_b_data[c4_i39] = c4_highThresh_data[c4_i39];
    }

    c4_b_data[0] *= 0.4;
    c4_lowThresh_size[0] = 1;
    c4_lowThresh_data[0] = c4_b_data[0];
  }

  c4_st.site = &c4_g_emlrtRSI;
  c4_i40 = 1;
  if ((c4_i40 < 1) || (c4_i40 > c4_lowThresh_size[0])) {
    emlrtDynamicBoundsCheckR2012b(c4_i40, 1, c4_lowThresh_size[0],
      &c4_e_emlrtBCI, &c4_st);
  }

  c4_b_st.site = &c4_x_emlrtRSI;
  c4_lowThresh = c4_lowThresh_data[0];
  c4_c_st.site = &c4_ab_emlrtRSI;
  c4_b_lowThresh = c4_lowThresh;
  for (c4_i41 = 0; c4_i41 < 19200; c4_i41++) {
    c4_E[c4_i41] = false;
  }

  for (c4_i42 = 0; c4_i42 < 2; c4_i42++) {
    c4_connDimsT[c4_i42] = 120.0 + 40.0 * (real_T)c4_i42;
  }

  cannythresholding_real32_tbb(&chartInstance->c4_i1[0], &c4_b_i2[0],
    &chartInstance->c4_c_a[0], &c4_connDimsT[0], c4_b_lowThresh, &c4_E[0]);
  c4_i43 = 1;
  if ((c4_i43 < 1) || (c4_i43 > c4_highThresh_size[0])) {
    emlrtDynamicBoundsCheckR2012b(c4_i43, 1, c4_highThresh_size[0],
      &c4_f_emlrtBCI, &c4_st);
  }

  c4_highThresh = c4_highThresh_data[0];
  for (c4_i44 = 0; c4_i44 < 19200; c4_i44++) {
    c4_varargout_1[c4_i44] = ((real_T)chartInstance->c4_c_a[c4_i44] >
      c4_highThresh);
  }

  c4_b_st.site = &c4_y_emlrtRSI;
  c4_c_st.site = &c4_bb_emlrtRSI;
  for (c4_i45 = 0; c4_i45 < 2; c4_i45++) {
    c4_connDimsT[c4_i45] = 120.0 + 40.0 * (real_T)c4_i45;
  }

  ippreconstruct_uint8((uint8_T *)&c4_varargout_1[0], (uint8_T *)&c4_E[0],
                       &c4_connDimsT[0], 2.0);
  c4_i46 = 1;
  if ((c4_i46 < 1) || (c4_i46 > c4_lowThresh_size[0])) {
    emlrtDynamicBoundsCheckR2012b(c4_i46, 1, c4_lowThresh_size[0],
      &c4_c_emlrtBCI, (emlrtConstCTX)c4_sp);
  }

  c4_i47 = 1;
  if ((c4_i47 < 1) || (c4_i47 > c4_highThresh_size[0])) {
    emlrtDynamicBoundsCheckR2012b(c4_i47, 1, c4_highThresh_size[0],
      &c4_d_emlrtBCI, (emlrtConstCTX)c4_sp);
  }
}

static void c4_warning(SFc4_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c4_sp)
{
  static char_T c4_msgID[27] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'i', 'm',
    'h', 'i', 's', 't', 'c', ':', 'i', 'n', 'p', 'u', 't', 'H', 'a', 's', 'N',
    'a', 'N', 's' };

  static char_T c4_b_cv[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T c4_b_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c4_c_y = NULL;
  sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c4_d_y = NULL;
  sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_msgID, 10, 0U, 1U, 0U, 2, 1, 27),
                false);
  c4_st.site = &c4_w_emlrtRSI;
  c4_b_feval(chartInstance, &c4_st, c4_b_y, c4_feval(chartInstance, &c4_st,
              c4_c_y, c4_d_y));
}

static void c4_houghpeaks(SFc4_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, real_T c4_b_varargin_1[15660], real_T c4_varargin_4,
  real_T c4_peaks_data[], int32_T c4_peaks_size[2])
{
  static char_T c4_cv2[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e' };

  static char_T c4_cv4[43] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'h', 'o', 'u',
    'g', 'h', 'p', 'e', 'a', 'k', 's', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd',
    'T', 'h', 'e', 't', 'a', 'V', 'e', 'c', 't', 'o', 'r', 'S', 'p', 'a', 'c',
    'i', 'n', 'g' };

  static char_T c4_b_cv1[37] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'h', 'o',
    'u', 'g', 'h', 'p', 'e', 'a', 'k', 's', ':', 'e', 'x', 'p', 'e', 'c', 't',
    'e', 'd', 'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e' };

  static char_T c4_b_cv[18] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm', 'b',
    'e', 'r', ' ', '1', ',', ' ', 'H', ',' };

  static char_T c4_cv3[9] = { 'T', 'h', 'r', 'e', 's', 'h', 'o', 'l', 'd' };

  emlrtStack c4_b_st;
  emlrtStack c4_c_st;
  emlrtStack c4_d_st;
  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_g_y = NULL;
  const mxArray *c4_j_y = NULL;
  const mxArray *c4_k_y = NULL;
  real_T c4_c_varargin_1[15660];
  real_T c4_y1[179];
  real_T c4_b_y1[178];
  real_T c4_peakCoordinates[10];
  real_T c4_dv[2];
  real_T c4_b_ex;
  real_T c4_b_k;
  real_T c4_b_ndx;
  real_T c4_b_threshold;
  real_T c4_b_tmp1;
  real_T c4_b_tmp2;
  real_T c4_b_varargin_2;
  real_T c4_b_varargin_4;
  real_T c4_b_work;
  real_T c4_b_x;
  real_T c4_c_ex;
  real_T c4_c_threshold;
  real_T c4_c_varargin_2;
  real_T c4_c_x;
  real_T c4_d_a;
  real_T c4_d_x;
  real_T c4_e_a;
  real_T c4_e_idx;
  real_T c4_e_x;
  real_T c4_ex;
  real_T c4_f_a;
  real_T c4_f_x;
  real_T c4_g_x;
  real_T c4_h_x;
  real_T c4_h_y;
  real_T c4_iPeak;
  real_T c4_i_x;
  real_T c4_i_y;
  real_T c4_jPeak;
  real_T c4_j_x;
  real_T c4_k_x;
  real_T c4_l_x;
  real_T c4_l_y;
  real_T c4_m_x;
  real_T c4_m_y;
  real_T c4_maxTheta;
  real_T c4_minTheta;
  real_T c4_ndx;
  real_T c4_thetaResolution;
  real_T c4_threshold;
  real_T c4_tmp1;
  real_T c4_tmp2;
  real_T c4_varargin_2;
  real_T c4_work;
  real_T c4_x;
  int32_T c4_b_i1;
  int32_T c4_b_iPeak;
  int32_T c4_b_idx;
  int32_T c4_b_ixLead;
  int32_T c4_b_iyLead;
  int32_T c4_b_jPeak;
  int32_T c4_b_m;
  int32_T c4_c_idx;
  int32_T c4_c_k;
  int32_T c4_d_idx;
  int32_T c4_d_k;
  int32_T c4_e_k;
  int32_T c4_f_idx;
  int32_T c4_g_a;
  int32_T c4_i;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_idx;
  int32_T c4_iindx;
  int32_T c4_ixLead;
  int32_T c4_iyLead;
  int32_T c4_k;
  int32_T c4_loop_ub;
  int32_T c4_m;
  int32_T c4_peakIdx;
  int32_T c4_rho;
  int32_T c4_rhoMax;
  int32_T c4_rhoMin;
  int32_T c4_rhoToRemove;
  int32_T c4_theta;
  int32_T c4_thetaMax;
  int32_T c4_thetaMin;
  int32_T c4_thetaToRemove;
  int32_T c4_v1;
  int32_T c4_varargout_3;
  int32_T c4_varargout_4;
  int32_T c4_vk;
  boolean_T c4_b;
  boolean_T c4_b1;
  boolean_T c4_b_p;
  boolean_T c4_c_p;
  boolean_T c4_d_p;
  boolean_T c4_e_p;
  boolean_T c4_exitg1;
  boolean_T c4_isDone;
  boolean_T c4_isThetaAntisymmetric;
  boolean_T c4_p;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  c4_c_st.prev = &c4_b_st;
  c4_c_st.tls = c4_b_st.tls;
  c4_d_st.prev = &c4_c_st;
  c4_d_st.tls = c4_c_st.tls;
  c4_st.site = &c4_kb_emlrtRSI;
  c4_b_varargin_4 = c4_varargin_4;
  c4_b_st.site = &c4_lb_emlrtRSI;
  c4_c_st.site = &c4_pb_emlrtRSI;
  c4_c_st.site = &c4_pb_emlrtRSI;
  c4_p = true;
  c4_k = 0;
  c4_exitg1 = false;
  while ((!c4_exitg1) && (c4_k < 15660)) {
    c4_b_k = (real_T)c4_k + 1.0;
    c4_x = c4_b_varargin_1[(int32_T)c4_b_k - 1];
    c4_b_x = c4_x;
    c4_c_x = c4_b_x;
    if (c4_c_x == c4_x) {
      c4_b_p = true;
    } else {
      c4_b_p = false;
    }

    c4_c_p = c4_b_p;
    if (c4_c_p) {
      c4_k++;
    } else {
      c4_p = false;
      c4_exitg1 = true;
    }
  }

  if (c4_p) {
    c4_b = true;
  } else {
    c4_b = false;
  }

  if (!c4_b) {
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv, 10, 0U, 1U, 0U, 2, 1, 33),
                  false);
    c4_c_y = NULL;
    sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_cv1, 10, 0U, 1U, 0U, 2, 1, 47),
                  false);
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 18),
                  false);
    sf_mex_call(&c4_c_st, &c4_d_emlrtMCI, "error", 0U, 2U, 14, c4_b_y, 14,
                sf_mex_call(&c4_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_c_st, NULL, "message", 1U, 2U, 14, c4_c_y, 14, c4_d_y)));
  }

  c4_varargin_2 = c4_b_varargin_4;
  c4_b_varargin_2 = c4_varargin_2;
  c4_c_varargin_2 = c4_b_varargin_2;
  c4_threshold = c4_c_varargin_2;
  c4_b_threshold = c4_threshold;
  c4_b_st.site = &c4_mb_emlrtRSI;
  c4_c_threshold = c4_threshold;
  c4_c_st.site = &c4_qb_emlrtRSI;
  c4_d_a = c4_c_threshold;
  c4_d_st.site = &c4_pb_emlrtRSI;
  c4_e_a = c4_d_a;
  c4_f_a = c4_e_a;
  c4_d_p = true;
  c4_d_x = c4_f_a;
  c4_e_p = !(c4_d_x < 0.0);
  if (!c4_e_p) {
    c4_d_p = false;
  }

  if (c4_d_p) {
    c4_b1 = true;
  } else {
    c4_b1 = false;
  }

  if (!c4_b1) {
    c4_e_y = NULL;
    sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 37),
                  false);
    c4_f_y = NULL;
    sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                  false);
    c4_g_y = NULL;
    sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_cv3, 10, 0U, 1U, 0U, 2, 1, 9),
                  false);
    sf_mex_call(&c4_d_st, &c4_e_emlrtMCI, "error", 0U, 2U, 14, c4_e_y, 14,
                sf_mex_call(&c4_d_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_d_st, NULL, "message", 1U, 2U, 14, c4_f_y, 14, c4_g_y)));
  }

  c4_b_st.site = &c4_nb_emlrtRSI;
  for (c4_i = 0; c4_i < 2; c4_i++) {
    c4_dv[c4_i] = 3.0 + 2.0 * (real_T)c4_i;
  }

  c4_c_st.site = &c4_rb_emlrtRSI;
  c4_validateattributes(chartInstance, &c4_c_st, c4_dv);
  c4_b_st.site = &c4_ob_emlrtRSI;
  c4_c_st.site = &c4_tb_emlrtRSI;
  c4_d_st.site = &c4_pb_emlrtRSI;
  c4_ixLead = 1;
  c4_iyLead = 0;
  c4_work = -90.0;
  for (c4_m = 0; c4_m < 179; c4_m++) {
    c4_tmp1 = -90.0 + (real_T)c4_ixLead;
    c4_tmp2 = c4_work;
    c4_work = c4_tmp1;
    c4_tmp1 -= c4_tmp2;
    c4_ixLead++;
    c4_y1[c4_iyLead] = c4_tmp1;
    c4_iyLead++;
  }

  c4_c_st.site = &c4_sb_emlrtRSI;
  c4_b_ixLead = 1;
  c4_b_iyLead = 0;
  c4_b_work = c4_y1[0];
  for (c4_b_m = 0; c4_b_m < 178; c4_b_m++) {
    c4_b_tmp1 = c4_y1[c4_b_ixLead];
    c4_b_tmp2 = c4_b_work;
    c4_b_work = c4_b_tmp1;
    c4_b_tmp1 -= c4_b_tmp2;
    c4_b_ixLead++;
    c4_b_y1[c4_b_iyLead] = c4_b_tmp1;
    c4_b_iyLead++;
  }

  c4_h_y = c4_sumColumnB(chartInstance, c4_b_y1);
  c4_e_x = c4_h_y;
  c4_f_x = c4_e_x;
  c4_g_x = c4_f_x;
  c4_i_y = muDoubleScalarAbs(c4_g_x);
  if (c4_i_y > 1.4901161193847656E-8) {
    c4_j_y = NULL;
    sf_mex_assign(&c4_j_y, sf_mex_create("y", c4_cv4, 10, 0U, 1U, 0U, 2, 1, 43),
                  false);
    c4_k_y = NULL;
    sf_mex_assign(&c4_k_y, sf_mex_create("y", c4_cv4, 10, 0U, 1U, 0U, 2, 1, 43),
                  false);
    sf_mex_call(&c4_b_st, &c4_i_emlrtMCI, "error", 0U, 2U, 14, c4_j_y, 14,
                sf_mex_call(&c4_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_b_st, NULL, "message", 1U, 1U, 14, c4_k_y)));
  }

  c4_isDone = false;
  for (c4_b_i1 = 0; c4_b_i1 < 15660; c4_b_i1++) {
    chartInstance->c4_hnew[c4_b_i1] = c4_b_varargin_1[c4_b_i1];
  }

  c4_peakIdx = 0;
  c4_ex = -90.0;
  for (c4_c_k = 0; c4_c_k < 179; c4_c_k++) {
    if (c4_ex > -90.0 + (real_T)(c4_c_k + 1)) {
      c4_ex = -90.0 + (real_T)(c4_c_k + 1);
    }
  }

  c4_minTheta = c4_ex;
  c4_b_ex = -90.0;
  for (c4_d_k = 0; c4_d_k < 179; c4_d_k++) {
    if (c4_b_ex < -90.0 + (real_T)(c4_d_k + 1)) {
      c4_b_ex = -90.0 + (real_T)(c4_d_k + 1);
    }
  }

  c4_maxTheta = c4_b_ex;
  c4_h_x = c4_maxTheta - c4_minTheta;
  c4_i_x = c4_h_x;
  c4_j_x = c4_i_x;
  c4_l_y = muDoubleScalarAbs(c4_j_x);
  c4_thetaResolution = c4_l_y / 179.0;
  c4_k_x = c4_minTheta + c4_thetaResolution * 5.0;
  c4_l_x = c4_k_x;
  c4_m_x = c4_l_x;
  c4_m_y = muDoubleScalarAbs(c4_m_x);
  c4_isThetaAntisymmetric = (c4_m_y <= c4_maxTheta);
  while (!c4_isDone) {
    for (c4_i2 = 0; c4_i2 < 15660; c4_i2++) {
      c4_c_varargin_1[c4_i2] = chartInstance->c4_hnew[c4_i2];
    }

    c4_c_ex = c4_c_varargin_1[0];
    c4_idx = 1;
    for (c4_e_k = 0; c4_e_k < 15659; c4_e_k++) {
      if (c4_c_ex < c4_c_varargin_1[c4_e_k + 1]) {
        c4_c_ex = c4_c_varargin_1[c4_e_k + 1];
        c4_idx = c4_e_k + 2;
      }
    }

    c4_b_idx = c4_idx;
    c4_c_idx = c4_b_idx;
    c4_d_idx = c4_c_idx;
    c4_iindx = c4_d_idx;
    c4_e_idx = (real_T)c4_iindx;
    c4_st.site = &c4_jb_emlrtRSI;
    c4_ndx = c4_e_idx;
    c4_b_st.site = &c4_ub_emlrtRSI;
    c4_b_ndx = c4_ndx;
    c4_f_idx = (int32_T)c4_b_ndx - 1;
    c4_v1 = c4_f_idx;
    c4_g_a = c4_v1;
    c4_vk = (int32_T)((uint32_T)(uint16_T)c4_g_a / 87U);
    c4_varargout_4 = c4_vk;
    c4_v1 = (c4_v1 - c4_vk * 87) + 1;
    c4_varargout_3 = c4_v1;
    c4_iPeak = (real_T)c4_varargout_3;
    c4_jPeak = (real_T)(c4_varargout_4 + 1);
    c4_b_iPeak = (int32_T)c4_iPeak;
    c4_b_jPeak = (int32_T)c4_jPeak;
    if ((c4_b_iPeak < 1) || (c4_b_iPeak > 87)) {
      emlrtDynamicBoundsCheckR2012b(c4_b_iPeak, 1, 87, &c4_j_emlrtBCI,
        (emlrtConstCTX)c4_sp);
    }

    if (chartInstance->c4_hnew[(c4_b_iPeak + 87 * (c4_b_jPeak - 1)) - 1] >=
        c4_b_threshold) {
      c4_peakIdx++;
      if ((c4_peakIdx < 1) || (c4_peakIdx > 5)) {
        emlrtDynamicBoundsCheckR2012b(c4_peakIdx, 1, 5, &c4_i_emlrtBCI,
          (emlrtConstCTX)c4_sp);
      }

      c4_peakCoordinates[c4_peakIdx - 1] = (real_T)c4_b_iPeak;
      c4_peakCoordinates[c4_peakIdx + 4] = (real_T)c4_b_jPeak;
      c4_rhoMin = c4_b_iPeak - 1;
      c4_rhoMax = c4_b_iPeak + 1;
      c4_thetaMin = c4_b_jPeak;
      c4_thetaMax = c4_b_jPeak;
      if (c4_rhoMin < 1) {
        c4_rhoMin = 1;
      }

      if (c4_rhoMax > 87) {
        c4_rhoMax = 87;
      }

      for (c4_theta = c4_thetaMin - 2; c4_theta <= c4_thetaMax + 2; c4_theta++)
      {
        for (c4_rho = c4_rhoMin; c4_rho <= c4_rhoMax; c4_rho++) {
          c4_rhoToRemove = c4_rho;
          c4_thetaToRemove = c4_theta;
          if (c4_isThetaAntisymmetric) {
            if (c4_theta > 180) {
              c4_rhoToRemove = 88 - c4_rho;
              c4_thetaToRemove = c4_theta - 180;
            } else if (c4_theta < 1) {
              c4_rhoToRemove = 88 - c4_rho;
              c4_thetaToRemove = c4_theta + 180;
            }
          }

          if ((c4_thetaToRemove > 180) || (c4_thetaToRemove < 1)) {
          } else {
            chartInstance->c4_hnew[(c4_rhoToRemove + 87 * (c4_thetaToRemove - 1))
              - 1] = 0.0;
          }
        }
      }

      c4_isDone = (c4_peakIdx == 5);
    } else {
      c4_isDone = true;
    }
  }

  if (c4_peakIdx == 0) {
    c4_peaks_size[0] = 0;
    c4_peaks_size[1] = 0;
  } else {
    c4_peaks_size[0] = c4_peakIdx;
    c4_peaks_size[1] = 2;
    for (c4_i3 = 0; c4_i3 < 2; c4_i3++) {
      c4_loop_ub = c4_peakIdx - 1;
      for (c4_i4 = 0; c4_i4 <= c4_loop_ub; c4_i4++) {
        c4_peaks_data[c4_i4 + c4_peaks_size[0] * c4_i3] =
          c4_peakCoordinates[c4_i4 + 5 * c4_i3];
      }
    }
  }
}

static void c4_validateattributes(SFc4_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, real_T c4_d_a[2])
{
  static char_T c4_cv2[43] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'O', 'd', 'd' };

  static char_T c4_b_cv1[29] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'h', 'o',
    'u', 'g', 'h', 'p', 'e', 'a', 'k', 's', ':', 'e', 'x', 'p', 'e', 'c', 't',
    'e', 'd', 'O', 'd', 'd' };

  static char_T c4_b_cv[9] = { 'N', 'H', 'o', 'o', 'd', 'S', 'i', 'z', 'e' };

  static char_T c4_cv3[9] = { 'N', 'H', 'o', 'o', 'd', 'S', 'i', 'z', 'e' };

  emlrtStack c4_st;
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_f_y = NULL;
  const mxArray *c4_g_y = NULL;
  real_T c4_b_k;
  real_T c4_b_x;
  real_T c4_c_x;
  real_T c4_d_k;
  real_T c4_d_x;
  real_T c4_e_a;
  real_T c4_e_x;
  real_T c4_f_x;
  real_T c4_g_x;
  real_T c4_r;
  real_T c4_x;
  int32_T c4_c_k;
  int32_T c4_k;
  boolean_T c4_b;
  boolean_T c4_b1;
  boolean_T c4_b_p;
  boolean_T c4_c_p;
  boolean_T c4_d_p;
  boolean_T c4_e_p;
  boolean_T c4_exitg1;
  boolean_T c4_p;
  boolean_T c4_rEQ0;
  (void)chartInstance;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_st.site = &c4_pb_emlrtRSI;
  c4_st.site = &c4_pb_emlrtRSI;
  c4_p = true;
  c4_k = 0;
  c4_exitg1 = false;
  while ((!c4_exitg1) && (c4_k < 2)) {
    c4_b_k = (real_T)c4_k + 1.0;
    c4_x = c4_d_a[(int32_T)c4_b_k - 1];
    c4_b_x = c4_x;
    c4_c_x = c4_b_x;
    if (c4_c_x == c4_x) {
      c4_b_p = true;
    } else {
      c4_b_p = false;
    }

    c4_d_p = c4_b_p;
    if (c4_d_p) {
      c4_k++;
    } else {
      c4_p = false;
      c4_exitg1 = true;
    }
  }

  if (c4_p) {
    c4_b = true;
  } else {
    c4_b = false;
  }

  if (!c4_b) {
    c4_b_y = NULL;
    sf_mex_assign(&c4_b_y, sf_mex_create("y", c4_cv, 10, 0U, 1U, 0U, 2, 1, 33),
                  false);
    c4_c_y = NULL;
    sf_mex_assign(&c4_c_y, sf_mex_create("y", c4_cv1, 10, 0U, 1U, 0U, 2, 1, 47),
                  false);
    c4_d_y = NULL;
    sf_mex_assign(&c4_d_y, sf_mex_create("y", c4_b_cv, 10, 0U, 1U, 0U, 2, 1, 9),
                  false);
    sf_mex_call(&c4_st, &c4_d_emlrtMCI, "error", 0U, 2U, 14, c4_b_y, 14,
                sf_mex_call(&c4_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_st, NULL, "message", 1U, 2U, 14, c4_c_y, 14, c4_d_y)));
  }

  c4_st.site = &c4_pb_emlrtRSI;
  c4_st.site = &c4_pb_emlrtRSI;
  c4_c_p = true;
  c4_c_k = 0;
  c4_exitg1 = false;
  while ((!c4_exitg1) && (c4_c_k < 2)) {
    c4_d_k = (real_T)c4_c_k + 1.0;
    c4_d_x = c4_d_a[(int32_T)c4_d_k - 1];
    c4_e_x = c4_d_x;
    c4_e_a = c4_e_x;
    c4_f_x = c4_e_a;
    c4_g_x = c4_f_x;
    c4_r = muDoubleScalarRem(c4_g_x, 2.0);
    c4_rEQ0 = (c4_r == 0.0);
    if (c4_rEQ0) {
      c4_r = 0.0;
    }

    c4_e_p = (c4_r == 1.0);
    if (c4_e_p) {
      c4_c_k++;
    } else {
      c4_c_p = false;
      c4_exitg1 = true;
    }
  }

  if (c4_c_p) {
    c4_b1 = true;
  } else {
    c4_b1 = false;
  }

  if (!c4_b1) {
    c4_e_y = NULL;
    sf_mex_assign(&c4_e_y, sf_mex_create("y", c4_b_cv1, 10, 0U, 1U, 0U, 2, 1, 29),
                  false);
    c4_f_y = NULL;
    sf_mex_assign(&c4_f_y, sf_mex_create("y", c4_cv2, 10, 0U, 1U, 0U, 2, 1, 43),
                  false);
    c4_g_y = NULL;
    sf_mex_assign(&c4_g_y, sf_mex_create("y", c4_cv3, 10, 0U, 1U, 0U, 2, 1, 9),
                  false);
    sf_mex_call(&c4_st, &c4_h_emlrtMCI, "error", 0U, 2U, 14, c4_e_y, 14,
                sf_mex_call(&c4_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c4_st, NULL, "message", 1U, 2U, 14, c4_f_y, 14, c4_g_y)));
  }
}

static real_T c4_sumColumnB(SFc4_flightControlSystemInstanceStruct
  *chartInstance, real_T c4_x[178])
{
  real_T c4_b_y;
  int32_T c4_b_k;
  int32_T c4_k;
  (void)chartInstance;
  c4_b_y = c4_x[0];
  for (c4_k = 0; c4_k < 177; c4_k++) {
    c4_b_k = c4_k;
    c4_b_y += c4_x[c4_b_k + 1];
  }

  return c4_b_y;
}

static void c4_emlrt_marshallIn(SFc4_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c4_b_y, const char_T *c4_identifier, boolean_T
  c4_c_y[961])
{
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = (const char_T *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_y), &c4_thisId, c4_c_y);
  sf_mex_destroy(&c4_b_y);
}

static void c4_b_emlrt_marshallIn(SFc4_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c4_b_u, const emlrtMsgIdentifier *c4_parentId,
  boolean_T c4_b_y[961])
{
  int32_T c4_i;
  boolean_T c4_bv[961];
  (void)chartInstance;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_b_u), c4_bv, 1, 11, 0U, 1, 0U, 2, 31,
                31);
  for (c4_i = 0; c4_i < 961; c4_i++) {
    c4_b_y[c4_i] = c4_bv[c4_i];
  }

  sf_mex_destroy(&c4_b_u);
}

static uint8_T c4_c_emlrt_marshallIn(SFc4_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c4_b_is_active_c4_flightControlSystem, const
  char_T *c4_identifier)
{
  emlrtMsgIdentifier c4_thisId;
  uint8_T c4_b_y;
  c4_thisId.fIdentifier = (const char_T *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_b_y = c4_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c4_b_is_active_c4_flightControlSystem), &c4_thisId);
  sf_mex_destroy(&c4_b_is_active_c4_flightControlSystem);
  return c4_b_y;
}

static uint8_T c4_d_emlrt_marshallIn(SFc4_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c4_b_u, const emlrtMsgIdentifier *c4_parentId)
{
  uint8_T c4_b_y;
  uint8_T c4_c_u;
  (void)chartInstance;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_b_u), &c4_c_u, 1, 3, 0U, 0, 0U, 0);
  c4_b_y = c4_c_u;
  sf_mex_destroy(&c4_b_u);
  return c4_b_y;
}

static void c4_slStringInitializeDynamicBuffers
  (SFc4_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c4_chart_data_browse_helper(SFc4_flightControlSystemInstanceStruct
  *chartInstance, int32_T c4_ssIdNumber, const mxArray **c4_mxData, uint8_T
  *c4_isValueTooBig)
{
  *c4_mxData = NULL;
  *c4_mxData = NULL;
  *c4_isValueTooBig = 0U;
  switch (c4_ssIdNumber) {
   case 4U:
    sf_mex_assign(c4_mxData, sf_mex_create("mxData", *chartInstance->c4_u, 11,
      0U, 1U, 0U, 2, 120, 160), false);
    break;

   case 5U:
    sf_mex_assign(c4_mxData, sf_mex_create("mxData", *chartInstance->c4_y, 11,
      0U, 1U, 0U, 2, 31, 31), false);
    break;
  }
}

static const mxArray *c4_feval(SFc4_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c4_sp, const mxArray *c4_input0, const
  mxArray *c4_input1)
{
  const mxArray *c4_m = NULL;
  (void)chartInstance;
  c4_m = NULL;
  sf_mex_assign(&c4_m, sf_mex_call(c4_sp, NULL, "feval", 1U, 2U, 14, sf_mex_dup
    (c4_input0), 14, sf_mex_dup(c4_input1)), false);
  sf_mex_destroy(&c4_input0);
  sf_mex_destroy(&c4_input1);
  return c4_m;
}

static void c4_b_feval(SFc4_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c4_sp, const mxArray *c4_input0, const mxArray *c4_input1)
{
  (void)chartInstance;
  sf_mex_call(c4_sp, NULL, "feval", 0U, 2U, 14, sf_mex_dup(c4_input0), 14,
              sf_mex_dup(c4_input1));
  sf_mex_destroy(&c4_input0);
  sf_mex_destroy(&c4_input1);
}

static void init_dsm_address_info(SFc4_flightControlSystemInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc4_flightControlSystemInstanceStruct
  *chartInstance)
{
  chartInstance->c4_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c4_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c4_u = (boolean_T (*)[19200])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c4_y = (boolean_T (*)[961])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c4_flightControlSystem_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(964137796U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3277231375U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1002213446U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(374771201U);
}

mxArray *sf_c4_flightControlSystem_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,6);
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
  mxSetCell(mxcell3p, 5, mxCreateString(
             "images.internal.coder.buildable.Bwlookup_tbb_Buildable"));
  return(mxcell3p);
}

mxArray *sf_c4_flightControlSystem_jit_fallback_info(void)
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

mxArray *sf_c4_flightControlSystem_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c4_flightControlSystem(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiD+wcjAwAakOYCYiQECWKF8RqgYI1ycBS6uAMQllQWpIPHiomTPFCCdl5gL5ie"
    "WVnjmpeWDzbdgQJjPhsV8RiTzOaHiEPDBnjL9Ig4g/QZI+lkI6BcAsiqh4QILH/LtV3CgTD/E/g"
    "AC7ldAcT+En1kcn5hcklmWGp9sEp+Wk5meUeKcn1dSlJ8TXFlckpoL8x8AZrwcuA=="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c4_flightControlSystem_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sz7WymnYuVYTXUY8S862oJC";
}

static void sf_opaque_initialize_c4_flightControlSystem(void *chartInstanceVar)
{
  initialize_params_c4_flightControlSystem
    ((SFc4_flightControlSystemInstanceStruct*) chartInstanceVar);
  initialize_c4_flightControlSystem((SFc4_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c4_flightControlSystem(void *chartInstanceVar)
{
  enable_c4_flightControlSystem((SFc4_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c4_flightControlSystem(void *chartInstanceVar)
{
  disable_c4_flightControlSystem((SFc4_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c4_flightControlSystem(void *chartInstanceVar)
{
  sf_gateway_c4_flightControlSystem((SFc4_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c4_flightControlSystem(SimStruct*
  S)
{
  return get_sim_state_c4_flightControlSystem
    ((SFc4_flightControlSystemInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c4_flightControlSystem(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c4_flightControlSystem((SFc4_flightControlSystemInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c4_flightControlSystem(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc4_flightControlSystemInstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_flightControlSystem_optimization_info();
    }

    mdl_cleanup_runtime_resources_c4_flightControlSystem
      ((SFc4_flightControlSystemInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c4_flightControlSystem(void *chartInstanceVar)
{
  mdl_start_c4_flightControlSystem((SFc4_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c4_flightControlSystem(void
  *chartInstanceVar)
{
  mdl_terminate_c4_flightControlSystem((SFc4_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc4_flightControlSystem((SFc4_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c4_flightControlSystem(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c4_flightControlSystem
      ((SFc4_flightControlSystemInstanceStruct*)sf_get_chart_instance_ptr(S));
    initSimStructsc4_flightControlSystem((SFc4_flightControlSystemInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c4_flightControlSystem_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [22] = {
    "eNrtWE1v40QYnlSlYrVQ9QCskJC2Ry5ICFbQlRC0zccS1G6jddqlXKqp/SYeZTzjnY+kWfEj+AF",
    "ob0j8Bf4Jd+6IA0h75B3byUZuSDwJlF2EJccZ28/7Ne+nSa19TPDYxvO7dwnZwuvreG6Q/HitWN",
    "dmzvz+JvmsWH97m5BQRtAHEdhej10Rv0PYpEMVTTTxPwRN4BFoya1hUrRFT1bHMtEDBSJEAqlUx",
    "ouvZonlTAxaVoSOs34cszAOYml5dIgEaXQi+Piv+KbWdJBjgykITQsgMrGSth+3OO0vtoIyo3oM",
    "4UDbxNtWGkxgU6eqPrbcsJRD8wrCttCGohX0En0DQw3UzZWfkZ2+OpigZZJyRkV1W8dUB5Cidxg",
    "4TSP8PbEGrVcJG8ZUmUOI6RD0ERtk3KWAStyZxrcvmaBGKkZ5M+F1R62ivh2OOh5jSHDfPUJ9Dx",
    "XQQSqZMJ4BEbTQzk1BLzk04NL2PfkG8MS6aDhjMALlt7+9uhyCon04EX4yZ3vUvMqcchpLFbGGJ",
    "XBG1UGIvqsh8ssbGHQ6oOiO0EUyXljITNzWXcWG6Bu+ua7twn+lXGeT3Pv1StiMb3MI3n415dsK",
    "RZ1yrv2wXZkewRB4xr9BDV0Bm/P3AGvNoq5E73DZxjNjWcEwEgpsXYqIVffKYQmVFbaHWKQqwFn",
    "iwgAiNPNU9CmhZXFktZFJHVNO4+ioIr/r2LYwoHo0hMo1RlGmAQXO/MqTb8S0CyREo5VMpmVlCn",
    "kMrgQlumdFYyTVAG3sW8xe2MpFgh8aoj4mZgNZkmuid59RbivKnOg+xg+6x6nGLOvHF7EuflYCh",
    "zSMIXKVk3E4xjyLBKpusXYl/wC1HTIzboAOFUurRpLFhI5F11mpO07hVAyEHImWkklQdF4L/AoA",
    "swZVgon+IZZwNW6h8NWkVvCkm2V33ybH2ZkaTi+dbzwAgdXQ6eq6BhpiVDUFtsgo0DrYgD3FJkZ",
    "opg0W6nFe6vO65/r3L8mL/n1zTv/+zkz/vlOsw3sXPc76sUs0RkkejJF2ktP7cIbeGxXmgYkci3",
    "DkGo5McZPr+zP42hy+ZOZa5ndrY7GcG/ivVuD2Z3BvlvhslnBbhc3O7zz64ftfnz375aff9dsP5",
    "R/r8P9xw2/e2i7W7036pmmWHl5LZFX84U7JH9xaP/308TgR5/bsvPv16flesPfJR/KrekbveW2x",
    "vBsleSf3d12vhkGc5QQVtqNibnNravN5wtHfm5F3a4k9bs34EyG/fbEe/q398j5uLsHv4L9xyW9",
    "X57+7vx4+599ZIv9uab93s979groMDRfzM8H23xBnvjhyw7hXRc7/7fLP61elzt00jtwwbl39fO",
    "v3q/7+orpBSu/vvMR6lK+r9nEvm14/E78+626x/nz6HaEeMx7NmWSKxzhs9OY9/Y/493NP+036y",
    "qazX/HB+ZuPDwTlYxxd8tGwuN1R7rvh9JECqufPh/9GPSFz5oR5fdXtUny79YiJSI70B/fv3V+r",
    "Pv0JGoIfxg==",
    ""
  };

  static char newstr [1513] = "";
  newstr[0] = '\0';
  for (i = 0; i < 22; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c4_flightControlSystem(SimStruct *S)
{
  const char* newstr = sf_c4_flightControlSystem_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(2773620569U));
  ssSetChecksum1(S,(2661215900U));
  ssSetChecksum2(S,(1945418211U));
  ssSetChecksum3(S,(4117712405U));
}

static void mdlRTW_c4_flightControlSystem(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c4_flightControlSystem(SimStruct *S)
{
  SFc4_flightControlSystemInstanceStruct *chartInstance;
  chartInstance = (SFc4_flightControlSystemInstanceStruct *)utMalloc(sizeof
    (SFc4_flightControlSystemInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc4_flightControlSystemInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c4_flightControlSystem;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c4_flightControlSystem;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c4_flightControlSystem;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c4_flightControlSystem;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c4_flightControlSystem;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c4_flightControlSystem;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c4_flightControlSystem;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c4_flightControlSystem;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c4_flightControlSystem;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c4_flightControlSystem;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c4_flightControlSystem;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c4_flightControlSystem;
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
    chartInstance->c4_JITStateAnimation,
    chartInstance->c4_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c4_flightControlSystem(chartInstance);
}

void c4_flightControlSystem_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c4_flightControlSystem(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c4_flightControlSystem(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c4_flightControlSystem(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c4_flightControlSystem_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
