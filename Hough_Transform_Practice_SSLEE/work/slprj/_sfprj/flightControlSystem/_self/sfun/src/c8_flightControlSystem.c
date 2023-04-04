/* Include files */

#include "flightControlSystem_sfun.h"
#include "c8_flightControlSystem.h"
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
static emlrtMCInfo c8_emlrtMCI = { 13, /* lineNo */
  13,                                  /* colNo */
  "toLogicalCheck",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\toLogicalCheck.m"/* pName */
};

static emlrtRSInfo c8_emlrtRSI = { 3,  /* lineNo */
  "Image Processing System/Hough Line Detecting/MATLAB Function3",/* fcnName */
  "#flightControlSystem:2994"          /* pathName */
};

static emlrtRSInfo c8_b_emlrtRSI = { 4,/* lineNo */
  "Image Processing System/Hough Line Detecting/MATLAB Function3",/* fcnName */
  "#flightControlSystem:2994"          /* pathName */
};

static emlrtRSInfo c8_c_emlrtRSI = { 5,/* lineNo */
  "Image Processing System/Hough Line Detecting/MATLAB Function3",/* fcnName */
  "#flightControlSystem:2994"          /* pathName */
};

static emlrtRSInfo c8_d_emlrtRSI = { 6,/* lineNo */
  "Image Processing System/Hough Line Detecting/MATLAB Function3",/* fcnName */
  "#flightControlSystem:2994"          /* pathName */
};

static emlrtRSInfo c8_e_emlrtRSI = { 77,/* lineNo */
  "bwmorph",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwmorph.m"/* pathName */
};

static emlrtRSInfo c8_f_emlrtRSI = { 24,/* lineNo */
  "algbwmorph",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\algbwmorph.m"/* pathName */
};

static emlrtRSInfo c8_g_emlrtRSI = { 33,/* lineNo */
  "algbwmorph",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\algbwmorph.m"/* pathName */
};

static emlrtRSInfo c8_h_emlrtRSI = { 256,/* lineNo */
  "algbwmorph",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\algbwmorph.m"/* pathName */
};

static emlrtRSInfo c8_i_emlrtRSI = { 14,/* lineNo */
  "lutskel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\lutskel.m"/* pathName */
};

static emlrtRSInfo c8_j_emlrtRSI = { 15,/* lineNo */
  "lutskel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\lutskel.m"/* pathName */
};

static emlrtRSInfo c8_k_emlrtRSI = { 16,/* lineNo */
  "lutskel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\lutskel.m"/* pathName */
};

static emlrtRSInfo c8_l_emlrtRSI = { 17,/* lineNo */
  "lutskel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\lutskel.m"/* pathName */
};

static emlrtRSInfo c8_m_emlrtRSI = { 18,/* lineNo */
  "lutskel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\lutskel.m"/* pathName */
};

static emlrtRSInfo c8_n_emlrtRSI = { 19,/* lineNo */
  "lutskel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\lutskel.m"/* pathName */
};

static emlrtRSInfo c8_o_emlrtRSI = { 20,/* lineNo */
  "lutskel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\lutskel.m"/* pathName */
};

static emlrtRSInfo c8_p_emlrtRSI = { 21,/* lineNo */
  "lutskel",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\lutskel.m"/* pathName */
};

static emlrtRSInfo c8_q_emlrtRSI = { 145,/* lineNo */
  "bwlookup",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\eml\\bwlookup.m"/* pathName */
};

static emlrtRSInfo c8_r_emlrtRSI = { 267,/* lineNo */
  "algbwmorph",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\algbwmorph.m"/* pathName */
};

static emlrtRSInfo c8_s_emlrtRSI = { 281,/* lineNo */
  "algbwmorph",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\algbwmorph.m"/* pathName */
};

static emlrtRSInfo c8_t_emlrtRSI = { 289,/* lineNo */
  "algbwmorph",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\algbwmorph.m"/* pathName */
};

static emlrtRSInfo c8_u_emlrtRSI = { 295,/* lineNo */
  "algbwmorph",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\algbwmorph.m"/* pathName */
};

static emlrtRSInfo c8_v_emlrtRSI = { 301,/* lineNo */
  "algbwmorph",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\algbwmorph.m"/* pathName */
};

static emlrtRSInfo c8_w_emlrtRSI = { 39,/* lineNo */
  "lutspur",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\lutspur.m"/* pathName */
};

static emlrtRSInfo c8_x_emlrtRSI = { 66,/* lineNo */
  "algbwmorph",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\algbwmorph.m"/* pathName */
};

static emlrtRSInfo c8_y_emlrtRSI = { 69,/* lineNo */
  "algbwmorph",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\algbwmorph.m"/* pathName */
};

static emlrtRSInfo c8_ab_emlrtRSI = { 87,/* lineNo */
  "algbwmorph",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\algbwmorph.m"/* pathName */
};

static emlrtRSInfo c8_bb_emlrtRSI = { 90,/* lineNo */
  "algbwmorph",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\algbwmorph.m"/* pathName */
};

static emlrtRSInfo c8_cb_emlrtRSI = { 93,/* lineNo */
  "algbwmorph",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\algbwmorph.m"/* pathName */
};

static emlrtRSInfo c8_db_emlrtRSI = { 26,/* lineNo */
  "lutbranchpoints",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\lutbranchpoints.m"/* pathName */
};

static emlrtRSInfo c8_eb_emlrtRSI = { 8,/* lineNo */
  "lutdilate",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\lutdilate.m"/* pathName */
};

static emlrtRSInfo c8_fb_emlrtRSI = { 184,/* lineNo */
  "algbwmorph",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\algbwmorph.m"/* pathName */
};

static emlrtRSInfo c8_gb_emlrtRSI = { 185,/* lineNo */
  "algbwmorph",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\algbwmorph.m"/* pathName */
};

static emlrtRSInfo c8_hb_emlrtRSI = { 8,/* lineNo */
  "lutmajority",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\lutmajority.m"/* pathName */
};

static emlrtDCInfo c8_emlrtDCI = { 23, /* lineNo */
  8,                                   /* colNo */
  "lutskel",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\images\\images\\+images\\+internal\\lutskel.m",/* pName */
  1                                    /* checkKind */
};

static char_T c8_cv[19] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o', 'l',
  'o', 'g', 'i', 'c', 'a', 'l', 'n', 'a', 'n' };

/* Function Declarations */
static void initialize_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static void initialize_params_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static void mdl_start_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static void mdl_terminate_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static void enable_c8_flightControlSystem(SFc8_flightControlSystemInstanceStruct
  *chartInstance);
static void disable_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static void sf_gateway_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static void ext_mode_exec_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static void c8_update_jit_animation_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static void c8_do_animation_call_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static void set_sim_state_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance, const mxArray *c8_st);
static void initSimStructsc8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static void c8_bwmorphApplyOnce(SFc8_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, boolean_T c8_b_bw[19200], boolean_T
  c8_c_bw[19200]);
static boolean_T c8_isequal(SFc8_flightControlSystemInstanceStruct
  *chartInstance, boolean_T c8_varargin_1[19200], boolean_T c8_varargin_2[19200]);
static void c8_b_bwmorphApplyOnce(SFc8_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, boolean_T c8_b_bw[19200], boolean_T
  c8_c_bw[19200]);
static boolean_T c8_function_handle_parenReference
  (SFc8_flightControlSystemInstanceStruct *chartInstance, boolean_T
   c8_varargin_1, boolean_T c8_varargin_2);
static void c8_c_bwmorphApplyOnce(SFc8_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, boolean_T c8_b_bw[19200], boolean_T
  c8_c_bw[19200]);
static void c8_emlrt_marshallIn(SFc8_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c8_b_branch, const char_T *c8_identifier,
  boolean_T c8_y[19200]);
static void c8_b_emlrt_marshallIn(SFc8_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c8_u, const emlrtMsgIdentifier *c8_parentId,
  boolean_T c8_y[19200]);
static uint8_T c8_c_emlrt_marshallIn(SFc8_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c8_b_is_active_c8_flightControlSystem, const
  char_T *c8_identifier);
static uint8_T c8_d_emlrt_marshallIn(SFc8_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c8_u, const emlrtMsgIdentifier *c8_parentId);
static void c8_slStringInitializeDynamicBuffers
  (SFc8_flightControlSystemInstanceStruct *chartInstance);
static void c8_chart_data_browse_helper(SFc8_flightControlSystemInstanceStruct
  *chartInstance, int32_T c8_ssIdNumber, const mxArray **c8_mxData, uint8_T
  *c8_isValueTooBig);
static void c8_d_bwmorphApplyOnce(SFc8_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, boolean_T c8_b_bw[19200]);
static void c8_e_bwmorphApplyOnce(SFc8_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, boolean_T c8_b_bw[19200]);
static void c8_f_bwmorphApplyOnce(SFc8_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, boolean_T c8_b_bw[19200]);
static void init_dsm_address_info(SFc8_flightControlSystemInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc8_flightControlSystemInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  emlrtStack c8_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c8_st.tls = chartInstance->c8_fEmlrtCtx;
  emlrtLicenseCheckR2022a(&c8_st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "image_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c8_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c8_is_active_c8_flightControlSystem = 0U;
}

static void initialize_params_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  static const uint32_T c8_decisionTxtEndIdx = 0U;
  static const uint32_T c8_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c8_chart_data_browse_helper);
  chartInstance->c8_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c8_RuntimeVar,
    &chartInstance->c8_IsDebuggerActive,
    &chartInstance->c8_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c8_mlFcnLineNumber, &chartInstance->c8_IsHeatMapPresent, 0);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c8_covrtInstance, 1U, 0U, 1U,
    84U);
  covrtChartInitFcn(chartInstance->c8_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c8_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c8_decisionTxtStartIdx, &c8_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c8_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c8_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 188);
}

static void mdl_cleanup_runtime_resources_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c8_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c8_covrtInstance);
}

static void enable_c8_flightControlSystem(SFc8_flightControlSystemInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  static real_T c8_dv[512] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0,
    1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0,
    1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 1.0,
    0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 1.0,
    0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 };

  static boolean_T c8_lut[512] = { false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, true, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, false, false,
    false, false, false, false, false, true, false, false, false, true, false,
    true, true, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, false, false, false,
    false, false, false, false, true, false, false, false, true, false, true,
    true, true, false, false, false, false, false, false, false, true, false,
    false, false, true, false, true, true, true, false, false, false, true,
    false, true, true, true, false, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, true, false, false, false, false, false, false,
    false, true, false, false, false, true, false, true, true, true, false,
    false, false, false, false, false, false, true, false, false, false, true,
    false, true, true, true, false, false, false, true, false, true, true, true,
    false, true, true, true, true, true, true, true, false, false, false, false,
    false, false, false, true, false, false, false, true, false, true, true,
    true, false, false, false, true, false, true, true, true, false, true, true,
    true, true, true, true, true, false, false, false, true, false, true, true,
    true, false, true, true, true, true, true, true, true, false, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, true, false, false, false, false, false, false,
    false, true, false, false, false, true, false, true, true, true, false,
    false, false, false, false, false, false, true, false, false, false, true,
    false, true, true, true, false, false, false, true, false, true, true, true,
    false, true, true, true, true, true, true, true, false, false, false, false,
    false, false, false, true, false, false, false, true, false, true, true,
    true, false, false, false, true, false, true, true, true, false, true, true,
    true, true, true, true, true, false, false, false, true, false, true, true,
    true, false, true, true, true, true, true, true, true, false, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, true, false, false, false,
    true, false, true, true, true, false, false, false, true, false, true, true,
    true, false, true, true, true, true, true, true, true, false, false, false,
    true, false, true, true, true, false, true, true, true, true, true, true,
    true, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, false, false, false, true, false, true, true,
    true, false, true, true, true, true, true, true, true, false, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    false, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true };

  emlrtStack c8_b_st;
  emlrtStack c8_c_st;
  emlrtStack c8_d_st;
  emlrtStack c8_e_st;
  emlrtStack c8_f_st;
  emlrtStack c8_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c8_b_y = NULL;
  const mxArray *c8_y = NULL;
  real_T c8_sizeIn[2];
  real_T c8_b_iter;
  real_T c8_b_k;
  real_T c8_c_iter;
  real_T c8_iter;
  real_T c8_x;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i10;
  int32_T c8_i11;
  int32_T c8_i2;
  int32_T c8_i3;
  int32_T c8_i4;
  int32_T c8_i5;
  int32_T c8_i6;
  int32_T c8_i7;
  int32_T c8_i8;
  int32_T c8_i9;
  int32_T c8_k;
  boolean_T c8_last_aout[19200];
  boolean_T c8_b;
  boolean_T c8_exitg1;
  c8_st.tls = chartInstance->c8_fEmlrtCtx;
  c8_b_st.prev = &c8_st;
  c8_b_st.tls = c8_st.tls;
  c8_c_st.prev = &c8_b_st;
  c8_c_st.tls = c8_b_st.tls;
  c8_d_st.prev = &c8_c_st;
  c8_d_st.tls = c8_c_st.tls;
  c8_e_st.prev = &c8_d_st;
  c8_e_st.tls = c8_d_st.tls;
  c8_f_st.prev = &c8_e_st;
  c8_f_st.tls = c8_e_st.tls;
  chartInstance->c8_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  for (c8_i = 0; c8_i < 19200; c8_i++) {
    covrtSigUpdateFcn(chartInstance->c8_covrtInstance, 0U, (real_T)
                      (*chartInstance->c8_bw)[c8_i]);
  }

  chartInstance->c8_sfEvent = CALL_EVENT;
  covrtEmlFcnEval(chartInstance->c8_covrtInstance, 4U, 0, 0);
  c8_b_st.site = &c8_emlrtRSI;
  c8_c_st.site = &c8_e_emlrtRSI;
  c8_iter = 0.0;
  for (c8_i1 = 0; c8_i1 < 19200; c8_i1++) {
    (*chartInstance->c8_line)[c8_i1] = (*chartInstance->c8_bw)[c8_i1];
  }

  c8_exitg1 = false;
  while ((!c8_exitg1) && (c8_iter < rtInf)) {
    for (c8_i2 = 0; c8_i2 < 19200; c8_i2++) {
      c8_last_aout[c8_i2] = (*chartInstance->c8_line)[c8_i2];
    }

    c8_d_st.site = &c8_g_emlrtRSI;
    c8_d_bwmorphApplyOnce(chartInstance, &c8_d_st, *chartInstance->c8_line);
    c8_iter++;
    if (c8_isequal(chartInstance, c8_last_aout, *chartInstance->c8_line)) {
      c8_exitg1 = true;
    }
  }

  c8_b_st.site = &c8_b_emlrtRSI;
  c8_c_st.site = &c8_e_emlrtRSI;
  c8_b_iter = 0.0;
  c8_exitg1 = false;
  while ((!c8_exitg1) && (c8_b_iter < rtInf)) {
    for (c8_i3 = 0; c8_i3 < 19200; c8_i3++) {
      c8_last_aout[c8_i3] = (*chartInstance->c8_line)[c8_i3];
    }

    c8_d_st.site = &c8_g_emlrtRSI;
    c8_e_bwmorphApplyOnce(chartInstance, &c8_d_st, *chartInstance->c8_line);
    c8_b_iter++;
    if (c8_isequal(chartInstance, c8_last_aout, *chartInstance->c8_line)) {
      c8_exitg1 = true;
    }
  }

  c8_b_st.site = &c8_c_emlrtRSI;
  c8_c_st.site = &c8_e_emlrtRSI;
  c8_c_iter = 0.0;
  for (c8_i4 = 0; c8_i4 < 19200; c8_i4++) {
    (*chartInstance->c8_branch)[c8_i4] = (*chartInstance->c8_line)[c8_i4];
  }

  c8_exitg1 = false;
  while ((!c8_exitg1) && (c8_c_iter < rtInf)) {
    for (c8_i5 = 0; c8_i5 < 19200; c8_i5++) {
      c8_last_aout[c8_i5] = (*chartInstance->c8_branch)[c8_i5];
    }

    c8_d_st.site = &c8_g_emlrtRSI;
    c8_f_bwmorphApplyOnce(chartInstance, &c8_d_st, *chartInstance->c8_branch);
    c8_c_iter++;
    if (c8_isequal(chartInstance, c8_last_aout, *chartInstance->c8_branch)) {
      c8_exitg1 = true;
    }
  }

  c8_b_st.site = &c8_d_emlrtRSI;
  c8_c_st.site = &c8_e_emlrtRSI;
  c8_d_st.site = &c8_f_emlrtRSI;
  for (c8_i6 = 0; c8_i6 < 19200; c8_i6++) {
    (*chartInstance->c8_major)[c8_i6] = (*chartInstance->c8_line)[c8_i6];
  }

  c8_e_st.site = &c8_fb_emlrtRSI;
  c8_f_st.site = &c8_hb_emlrtRSI;
  for (c8_k = 0; c8_k < 512; c8_k++) {
    c8_b_k = 1.0 + (real_T)c8_k;
    c8_x = c8_dv[(int32_T)c8_b_k - 1];
    c8_b = muDoubleScalarIsNaN(c8_x);
    if (c8_b) {
      c8_y = NULL;
      sf_mex_assign(&c8_y, sf_mex_create("y", c8_cv, 10, 0U, 1U, 0U, 2, 1, 19),
                    false);
      c8_b_y = NULL;
      sf_mex_assign(&c8_b_y, sf_mex_create("y", c8_cv, 10, 0U, 1U, 0U, 2, 1, 19),
                    false);
      sf_mex_call(&c8_f_st, &c8_emlrtMCI, "error", 0U, 2U, 14, c8_y, 14,
                  sf_mex_call(&c8_f_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c8_f_st, NULL, "message", 1U, 1U, 14, c8_b_y)));
    }
  }

  c8_e_st.site = &c8_gb_emlrtRSI;
  c8_f_st.site = &c8_q_emlrtRSI;
  for (c8_i7 = 0; c8_i7 < 19200; c8_i7++) {
    c8_last_aout[c8_i7] = (*chartInstance->c8_major)[c8_i7];
  }

  for (c8_i8 = 0; c8_i8 < 2; c8_i8++) {
    c8_sizeIn[c8_i8] = 120.0 + 40.0 * (real_T)c8_i8;
  }

  bwlookup_tbb_boolean(&c8_last_aout[0], &c8_sizeIn[0], 2.0, &c8_lut[0], 512.0,
                       &(*chartInstance->c8_major)[0]);
  c8_do_animation_call_c8_flightControlSystem(chartInstance);
  for (c8_i9 = 0; c8_i9 < 19200; c8_i9++) {
    covrtSigUpdateFcn(chartInstance->c8_covrtInstance, 1U, (real_T)
                      (*chartInstance->c8_line)[c8_i9]);
  }

  for (c8_i10 = 0; c8_i10 < 19200; c8_i10++) {
    covrtSigUpdateFcn(chartInstance->c8_covrtInstance, 2U, (real_T)
                      (*chartInstance->c8_branch)[c8_i10]);
  }

  for (c8_i11 = 0; c8_i11 < 19200; c8_i11++) {
    covrtSigUpdateFcn(chartInstance->c8_covrtInstance, 3U, (real_T)
                      (*chartInstance->c8_major)[c8_i11]);
  }
}

static void ext_mode_exec_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c8_update_jit_animation_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c8_do_animation_call_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  const mxArray *c8_b_y = NULL;
  const mxArray *c8_c_y = NULL;
  const mxArray *c8_d_y = NULL;
  const mxArray *c8_e_y = NULL;
  const mxArray *c8_st;
  const mxArray *c8_y = NULL;
  c8_st = NULL;
  c8_st = NULL;
  c8_y = NULL;
  sf_mex_assign(&c8_y, sf_mex_createcellmatrix(4, 1), false);
  c8_b_y = NULL;
  sf_mex_assign(&c8_b_y, sf_mex_create("y", *chartInstance->c8_branch, 11, 0U,
    1U, 0U, 2, 120, 160), false);
  sf_mex_setcell(c8_y, 0, c8_b_y);
  c8_c_y = NULL;
  sf_mex_assign(&c8_c_y, sf_mex_create("y", *chartInstance->c8_line, 11, 0U, 1U,
    0U, 2, 120, 160), false);
  sf_mex_setcell(c8_y, 1, c8_c_y);
  c8_d_y = NULL;
  sf_mex_assign(&c8_d_y, sf_mex_create("y", *chartInstance->c8_major, 11, 0U, 1U,
    0U, 2, 120, 160), false);
  sf_mex_setcell(c8_y, 2, c8_d_y);
  c8_e_y = NULL;
  sf_mex_assign(&c8_e_y, sf_mex_create("y",
    &chartInstance->c8_is_active_c8_flightControlSystem, 3, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c8_y, 3, c8_e_y);
  sf_mex_assign(&c8_st, c8_y, false);
  return c8_st;
}

static void set_sim_state_c8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance, const mxArray *c8_st)
{
  const mxArray *c8_u;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i2;
  boolean_T c8_bv[19200];
  boolean_T c8_bv1[19200];
  boolean_T c8_bv2[19200];
  chartInstance->c8_doneDoubleBufferReInit = true;
  c8_u = sf_mex_dup(c8_st);
  c8_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c8_u, 0)),
                      "branch", c8_bv);
  for (c8_i = 0; c8_i < 19200; c8_i++) {
    (*chartInstance->c8_branch)[c8_i] = c8_bv[c8_i];
  }

  c8_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c8_u, 1)), "line",
                      c8_bv1);
  for (c8_i1 = 0; c8_i1 < 19200; c8_i1++) {
    (*chartInstance->c8_line)[c8_i1] = c8_bv1[c8_i1];
  }

  c8_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c8_u, 2)),
                      "major", c8_bv2);
  for (c8_i2 = 0; c8_i2 < 19200; c8_i2++) {
    (*chartInstance->c8_major)[c8_i2] = c8_bv2[c8_i2];
  }

  chartInstance->c8_is_active_c8_flightControlSystem = c8_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c8_u, 3)),
     "is_active_c8_flightControlSystem");
  sf_mex_destroy(&c8_u);
  sf_mex_destroy(&c8_st);
}

static void initSimStructsc8_flightControlSystem
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

const mxArray *sf_c8_flightControlSystem_get_eml_resolved_functions_info(void)
{
  const mxArray *c8_nameCaptureInfo = NULL;
  c8_nameCaptureInfo = NULL;
  sf_mex_assign(&c8_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c8_nameCaptureInfo;
}

static void c8_bwmorphApplyOnce(SFc8_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, boolean_T c8_b_bw[19200], boolean_T
  c8_c_bw[19200])
{
  int32_T c8_i;
  for (c8_i = 0; c8_i < 19200; c8_i++) {
    c8_c_bw[c8_i] = c8_b_bw[c8_i];
  }

  c8_d_bwmorphApplyOnce(chartInstance, c8_sp, c8_c_bw);
}

static boolean_T c8_isequal(SFc8_flightControlSystemInstanceStruct
  *chartInstance, boolean_T c8_varargin_1[19200], boolean_T c8_varargin_2[19200])
{
  real_T c8_b_k;
  int32_T c8_k;
  boolean_T c8_b_p;
  boolean_T c8_c_p;
  boolean_T c8_exitg1;
  boolean_T c8_p;
  boolean_T c8_x1;
  boolean_T c8_x2;
  (void)chartInstance;
  c8_p = false;
  c8_b_p = true;
  c8_k = 0;
  c8_exitg1 = false;
  while ((!c8_exitg1) && (c8_k < 19200)) {
    c8_b_k = 1.0 + (real_T)c8_k;
    c8_x1 = c8_varargin_1[(int32_T)c8_b_k - 1];
    c8_x2 = c8_varargin_2[(int32_T)c8_b_k - 1];
    c8_c_p = ((int32_T)c8_x1 == (int32_T)c8_x2);
    if (!c8_c_p) {
      c8_b_p = false;
      c8_exitg1 = true;
    } else {
      c8_k++;
    }
  }

  if (c8_b_p) {
    c8_p = true;
  }

  return c8_p;
}

static void c8_b_bwmorphApplyOnce(SFc8_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, boolean_T c8_b_bw[19200], boolean_T
  c8_c_bw[19200])
{
  int32_T c8_i;
  for (c8_i = 0; c8_i < 19200; c8_i++) {
    c8_c_bw[c8_i] = c8_b_bw[c8_i];
  }

  c8_e_bwmorphApplyOnce(chartInstance, c8_sp, c8_c_bw);
}

static boolean_T c8_function_handle_parenReference
  (SFc8_flightControlSystemInstanceStruct *chartInstance, boolean_T
   c8_varargin_1, boolean_T c8_varargin_2)
{
  boolean_T c8_a;
  boolean_T c8_b;
  boolean_T c8_b_a;
  boolean_T c8_b_b;
  boolean_T c8_b_varargin_1;
  boolean_T c8_b_varargin_2;
  boolean_T c8_x;
  boolean_T c8_y;
  (void)chartInstance;
  c8_x = c8_varargin_1;
  c8_y = c8_varargin_2;
  c8_b_varargin_1 = c8_x;
  c8_b_varargin_2 = c8_y;
  c8_a = c8_b_varargin_1;
  c8_b = c8_b_varargin_2;
  c8_b_a = c8_a;
  c8_b_b = c8_b;
  return (boolean_T)((int32_T)c8_b_a ^ (int32_T)c8_b_b);
}

static void c8_c_bwmorphApplyOnce(SFc8_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, boolean_T c8_b_bw[19200], boolean_T
  c8_c_bw[19200])
{
  int32_T c8_i;
  for (c8_i = 0; c8_i < 19200; c8_i++) {
    c8_c_bw[c8_i] = c8_b_bw[c8_i];
  }

  c8_f_bwmorphApplyOnce(chartInstance, c8_sp, c8_c_bw);
}

static void c8_emlrt_marshallIn(SFc8_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c8_b_branch, const char_T *c8_identifier,
  boolean_T c8_y[19200])
{
  emlrtMsgIdentifier c8_thisId;
  c8_thisId.fIdentifier = (const char_T *)c8_identifier;
  c8_thisId.fParent = NULL;
  c8_thisId.bParentIsCell = false;
  c8_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c8_b_branch), &c8_thisId, c8_y);
  sf_mex_destroy(&c8_b_branch);
}

static void c8_b_emlrt_marshallIn(SFc8_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c8_u, const emlrtMsgIdentifier *c8_parentId,
  boolean_T c8_y[19200])
{
  int32_T c8_i;
  boolean_T c8_bv[19200];
  (void)chartInstance;
  sf_mex_import(c8_parentId, sf_mex_dup(c8_u), c8_bv, 1, 11, 0U, 1, 0U, 2, 120,
                160);
  for (c8_i = 0; c8_i < 19200; c8_i++) {
    c8_y[c8_i] = c8_bv[c8_i];
  }

  sf_mex_destroy(&c8_u);
}

static uint8_T c8_c_emlrt_marshallIn(SFc8_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c8_b_is_active_c8_flightControlSystem, const
  char_T *c8_identifier)
{
  emlrtMsgIdentifier c8_thisId;
  uint8_T c8_y;
  c8_thisId.fIdentifier = (const char_T *)c8_identifier;
  c8_thisId.fParent = NULL;
  c8_thisId.bParentIsCell = false;
  c8_y = c8_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c8_b_is_active_c8_flightControlSystem), &c8_thisId);
  sf_mex_destroy(&c8_b_is_active_c8_flightControlSystem);
  return c8_y;
}

static uint8_T c8_d_emlrt_marshallIn(SFc8_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c8_u, const emlrtMsgIdentifier *c8_parentId)
{
  uint8_T c8_b_u;
  uint8_T c8_y;
  (void)chartInstance;
  sf_mex_import(c8_parentId, sf_mex_dup(c8_u), &c8_b_u, 1, 3, 0U, 0, 0U, 0);
  c8_y = c8_b_u;
  sf_mex_destroy(&c8_u);
  return c8_y;
}

static void c8_slStringInitializeDynamicBuffers
  (SFc8_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c8_chart_data_browse_helper(SFc8_flightControlSystemInstanceStruct
  *chartInstance, int32_T c8_ssIdNumber, const mxArray **c8_mxData, uint8_T
  *c8_isValueTooBig)
{
  *c8_mxData = NULL;
  *c8_mxData = NULL;
  *c8_isValueTooBig = 0U;
  switch (c8_ssIdNumber) {
   case 4U:
    sf_mex_assign(c8_mxData, sf_mex_create("mxData", *chartInstance->c8_bw, 11,
      0U, 1U, 0U, 2, 120, 160), false);
    break;

   case 5U:
    sf_mex_assign(c8_mxData, sf_mex_create("mxData", *chartInstance->c8_line, 11,
      0U, 1U, 0U, 2, 120, 160), false);
    break;

   case 6U:
    sf_mex_assign(c8_mxData, sf_mex_create("mxData", *chartInstance->c8_branch,
      11, 0U, 1U, 0U, 2, 120, 160), false);
    break;

   case 7U:
    sf_mex_assign(c8_mxData, sf_mex_create("mxData", *chartInstance->c8_major,
      11, 0U, 1U, 0U, 2, 120, 160), false);
    break;
  }
}

static void c8_d_bwmorphApplyOnce(SFc8_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, boolean_T c8_b_bw[19200])
{
  static real_T c8_b_x[512] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 };

  static real_T c8_d_x[512] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 };

  static real_T c8_f_x[512] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 };

  static real_T c8_h_x[512] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 };

  static real_T c8_j_x[512] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 };

  static real_T c8_l_x[512] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0, 1.0, 0.0,
    0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0, 1.0,
    0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 };

  static real_T c8_n_x[512] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0,
    0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 };

  static real_T c8_p_x[512] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 };

  static boolean_T c8_lut1[512] = { false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, false, true, false, true, true, true, true, false, false, false,
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
    true, true, false, true, false, true, true, true, true, false, false, false,
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
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true };

  static boolean_T c8_lut2[512] = { false, false, false, false, false, false,
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
    true, true, true, true, true, true, true, false, false, true, true, true,
    true, true, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, false, false, true, true, true, true, true, true, false, false, false,
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
    true, true, true, true, true, true, true, false, false, true, true, true,
    true, true, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, false, false, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true };

  static boolean_T c8_lut3[512] = { false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, false, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, true, true,
    true, true, true, true, false, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
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
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true };

  static boolean_T c8_lut4[512] = { false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, false, false, true,
    true, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, false, false, true, true, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
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
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true };

  static boolean_T c8_lut5[512] = { false, false, false, false, false, false,
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
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, true, true, true, true, true, true,
    true, false, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, true, true, true, true, true, true, true, false, true,
    true, true, true, true, true, true };

  static boolean_T c8_lut6[512] = { false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, false, false,
    true, true, false, false, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
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
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, false, false,
    true, true, false, false, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
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
    true, true, true, true, true, true };

  static boolean_T c8_lut7[512] = { false, false, false, false, false, false,
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
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    false, true, false, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    false, true, false, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true };

  static boolean_T c8_lut8[512] = { false, false, false, false, false, false,
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
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, true, true,
    false, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, true, true, true, false, true, true, true, true, true,
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
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, true, true,
    false, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, true, true, true, false, true, true, true, true, true,
    true, true, true, true, true, true };

  emlrtStack c8_b_st;
  emlrtStack c8_st;
  const mxArray *c8_b_y = NULL;
  const mxArray *c8_c_y = NULL;
  const mxArray *c8_d_y = NULL;
  const mxArray *c8_e_y = NULL;
  const mxArray *c8_f_y = NULL;
  const mxArray *c8_g_y = NULL;
  const mxArray *c8_h_y = NULL;
  const mxArray *c8_i_y = NULL;
  const mxArray *c8_j_y = NULL;
  const mxArray *c8_k_y = NULL;
  const mxArray *c8_l_y = NULL;
  const mxArray *c8_m_y = NULL;
  const mxArray *c8_n_y = NULL;
  const mxArray *c8_o_y = NULL;
  const mxArray *c8_p_y = NULL;
  const mxArray *c8_y = NULL;
  real_T c8_sizeIn[2];
  real_T c8_b_i;
  real_T c8_b_k;
  real_T c8_c_i;
  real_T c8_c_x;
  real_T c8_d_k;
  real_T c8_e_x;
  real_T c8_f_k;
  real_T c8_g_x;
  real_T c8_h_k;
  real_T c8_i_x;
  real_T c8_j_k;
  real_T c8_k_x;
  real_T c8_l_k;
  real_T c8_m_x;
  real_T c8_n_k;
  real_T c8_o_x;
  real_T c8_p_k;
  real_T c8_x;
  int32_T c8_c_k;
  int32_T c8_d_i;
  int32_T c8_e_k;
  int32_T c8_g_k;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i10;
  int32_T c8_i2;
  int32_T c8_i3;
  int32_T c8_i4;
  int32_T c8_i5;
  int32_T c8_i6;
  int32_T c8_i7;
  int32_T c8_i8;
  int32_T c8_i9;
  int32_T c8_i_k;
  int32_T c8_k;
  int32_T c8_k_k;
  int32_T c8_m_k;
  int32_T c8_o_k;
  boolean_T c8_bwin[19200];
  boolean_T c8_lut[512];
  boolean_T c8_b;
  boolean_T c8_b_b;
  boolean_T c8_c_b;
  boolean_T c8_d_b;
  boolean_T c8_e_b;
  boolean_T c8_f_b;
  boolean_T c8_g_b;
  boolean_T c8_h_b;
  (void)chartInstance;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_b_st.prev = &c8_st;
  c8_b_st.tls = c8_st.tls;
  for (c8_i = 0; c8_i < 8; c8_i++) {
    c8_b_i = 1.0 + (real_T)c8_i;
    c8_st.site = &c8_h_emlrtRSI;
    c8_c_i = c8_b_i;
    c8_b_st.site = &c8_i_emlrtRSI;
    for (c8_k = 0; c8_k < 512; c8_k++) {
      c8_b_k = 1.0 + (real_T)c8_k;
      c8_x = c8_b_x[(int32_T)c8_b_k - 1];
      c8_b = muDoubleScalarIsNaN(c8_x);
      if (c8_b) {
        c8_y = NULL;
        sf_mex_assign(&c8_y, sf_mex_create("y", c8_cv, 10, 0U, 1U, 0U, 2, 1, 19),
                      false);
        c8_b_y = NULL;
        sf_mex_assign(&c8_b_y, sf_mex_create("y", c8_cv, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        sf_mex_call(&c8_b_st, &c8_emlrtMCI, "error", 0U, 2U, 14, c8_y, 14,
                    sf_mex_call(&c8_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c8_b_st, NULL, "message", 1U, 1U, 14, c8_b_y)));
      }
    }

    c8_b_st.site = &c8_j_emlrtRSI;
    for (c8_c_k = 0; c8_c_k < 512; c8_c_k++) {
      c8_d_k = 1.0 + (real_T)c8_c_k;
      c8_c_x = c8_d_x[(int32_T)c8_d_k - 1];
      c8_b_b = muDoubleScalarIsNaN(c8_c_x);
      if (c8_b_b) {
        c8_c_y = NULL;
        sf_mex_assign(&c8_c_y, sf_mex_create("y", c8_cv, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        c8_d_y = NULL;
        sf_mex_assign(&c8_d_y, sf_mex_create("y", c8_cv, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        sf_mex_call(&c8_b_st, &c8_emlrtMCI, "error", 0U, 2U, 14, c8_c_y, 14,
                    sf_mex_call(&c8_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c8_b_st, NULL, "message", 1U, 1U, 14, c8_d_y)));
      }
    }

    c8_b_st.site = &c8_k_emlrtRSI;
    for (c8_e_k = 0; c8_e_k < 512; c8_e_k++) {
      c8_f_k = 1.0 + (real_T)c8_e_k;
      c8_e_x = c8_f_x[(int32_T)c8_f_k - 1];
      c8_c_b = muDoubleScalarIsNaN(c8_e_x);
      if (c8_c_b) {
        c8_e_y = NULL;
        sf_mex_assign(&c8_e_y, sf_mex_create("y", c8_cv, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        c8_f_y = NULL;
        sf_mex_assign(&c8_f_y, sf_mex_create("y", c8_cv, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        sf_mex_call(&c8_b_st, &c8_emlrtMCI, "error", 0U, 2U, 14, c8_e_y, 14,
                    sf_mex_call(&c8_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c8_b_st, NULL, "message", 1U, 1U, 14, c8_f_y)));
      }
    }

    c8_b_st.site = &c8_l_emlrtRSI;
    for (c8_g_k = 0; c8_g_k < 512; c8_g_k++) {
      c8_h_k = 1.0 + (real_T)c8_g_k;
      c8_g_x = c8_h_x[(int32_T)c8_h_k - 1];
      c8_d_b = muDoubleScalarIsNaN(c8_g_x);
      if (c8_d_b) {
        c8_g_y = NULL;
        sf_mex_assign(&c8_g_y, sf_mex_create("y", c8_cv, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        c8_h_y = NULL;
        sf_mex_assign(&c8_h_y, sf_mex_create("y", c8_cv, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        sf_mex_call(&c8_b_st, &c8_emlrtMCI, "error", 0U, 2U, 14, c8_g_y, 14,
                    sf_mex_call(&c8_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c8_b_st, NULL, "message", 1U, 1U, 14, c8_h_y)));
      }
    }

    c8_b_st.site = &c8_m_emlrtRSI;
    for (c8_i_k = 0; c8_i_k < 512; c8_i_k++) {
      c8_j_k = 1.0 + (real_T)c8_i_k;
      c8_i_x = c8_j_x[(int32_T)c8_j_k - 1];
      c8_e_b = muDoubleScalarIsNaN(c8_i_x);
      if (c8_e_b) {
        c8_i_y = NULL;
        sf_mex_assign(&c8_i_y, sf_mex_create("y", c8_cv, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        c8_j_y = NULL;
        sf_mex_assign(&c8_j_y, sf_mex_create("y", c8_cv, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        sf_mex_call(&c8_b_st, &c8_emlrtMCI, "error", 0U, 2U, 14, c8_i_y, 14,
                    sf_mex_call(&c8_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c8_b_st, NULL, "message", 1U, 1U, 14, c8_j_y)));
      }
    }

    c8_b_st.site = &c8_n_emlrtRSI;
    for (c8_k_k = 0; c8_k_k < 512; c8_k_k++) {
      c8_l_k = 1.0 + (real_T)c8_k_k;
      c8_k_x = c8_l_x[(int32_T)c8_l_k - 1];
      c8_f_b = muDoubleScalarIsNaN(c8_k_x);
      if (c8_f_b) {
        c8_k_y = NULL;
        sf_mex_assign(&c8_k_y, sf_mex_create("y", c8_cv, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        c8_l_y = NULL;
        sf_mex_assign(&c8_l_y, sf_mex_create("y", c8_cv, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        sf_mex_call(&c8_b_st, &c8_emlrtMCI, "error", 0U, 2U, 14, c8_k_y, 14,
                    sf_mex_call(&c8_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c8_b_st, NULL, "message", 1U, 1U, 14, c8_l_y)));
      }
    }

    c8_b_st.site = &c8_o_emlrtRSI;
    for (c8_m_k = 0; c8_m_k < 512; c8_m_k++) {
      c8_n_k = 1.0 + (real_T)c8_m_k;
      c8_m_x = c8_n_x[(int32_T)c8_n_k - 1];
      c8_g_b = muDoubleScalarIsNaN(c8_m_x);
      if (c8_g_b) {
        c8_m_y = NULL;
        sf_mex_assign(&c8_m_y, sf_mex_create("y", c8_cv, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        c8_n_y = NULL;
        sf_mex_assign(&c8_n_y, sf_mex_create("y", c8_cv, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        sf_mex_call(&c8_b_st, &c8_emlrtMCI, "error", 0U, 2U, 14, c8_m_y, 14,
                    sf_mex_call(&c8_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c8_b_st, NULL, "message", 1U, 1U, 14, c8_n_y)));
      }
    }

    c8_b_st.site = &c8_p_emlrtRSI;
    for (c8_o_k = 0; c8_o_k < 512; c8_o_k++) {
      c8_p_k = 1.0 + (real_T)c8_o_k;
      c8_o_x = c8_p_x[(int32_T)c8_p_k - 1];
      c8_h_b = muDoubleScalarIsNaN(c8_o_x);
      if (c8_h_b) {
        c8_o_y = NULL;
        sf_mex_assign(&c8_o_y, sf_mex_create("y", c8_cv, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        c8_p_y = NULL;
        sf_mex_assign(&c8_p_y, sf_mex_create("y", c8_cv, 10, 0U, 1U, 0U, 2, 1,
          19), false);
        sf_mex_call(&c8_b_st, &c8_emlrtMCI, "error", 0U, 2U, 14, c8_o_y, 14,
                    sf_mex_call(&c8_b_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c8_b_st, NULL, "message", 1U, 1U, 14, c8_p_y)));
      }
    }

    if (c8_c_i != (real_T)(int32_T)muDoubleScalarFloor(c8_c_i)) {
      emlrtIntegerCheckR2012b(c8_c_i, &c8_emlrtDCI, &c8_st);
    }

    switch ((int32_T)c8_c_i) {
     case 1:
      for (c8_i1 = 0; c8_i1 < 512; c8_i1++) {
        c8_lut[c8_i1] = c8_lut1[c8_i1];
      }
      break;

     case 2:
      for (c8_i2 = 0; c8_i2 < 512; c8_i2++) {
        c8_lut[c8_i2] = c8_lut2[c8_i2];
      }
      break;

     case 3:
      for (c8_i3 = 0; c8_i3 < 512; c8_i3++) {
        c8_lut[c8_i3] = c8_lut3[c8_i3];
      }
      break;

     case 4:
      for (c8_i4 = 0; c8_i4 < 512; c8_i4++) {
        c8_lut[c8_i4] = c8_lut4[c8_i4];
      }
      break;

     case 5:
      for (c8_i5 = 0; c8_i5 < 512; c8_i5++) {
        c8_lut[c8_i5] = c8_lut5[c8_i5];
      }
      break;

     case 6:
      for (c8_i6 = 0; c8_i6 < 512; c8_i6++) {
        c8_lut[c8_i6] = c8_lut6[c8_i6];
      }
      break;

     case 7:
      for (c8_i7 = 0; c8_i7 < 512; c8_i7++) {
        c8_lut[c8_i7] = c8_lut7[c8_i7];
      }
      break;

     case 8:
      for (c8_i8 = 0; c8_i8 < 512; c8_i8++) {
        c8_lut[c8_i8] = c8_lut8[c8_i8];
      }
      break;

     default:
      for (c8_d_i = 0; c8_d_i < 512; c8_d_i++) {
        c8_lut[c8_d_i] = c8_lut1[c8_d_i];
      }
      break;
    }

    c8_st.site = &c8_h_emlrtRSI;
    for (c8_i9 = 0; c8_i9 < 19200; c8_i9++) {
      c8_bwin[c8_i9] = c8_b_bw[c8_i9];
    }

    c8_b_st.site = &c8_q_emlrtRSI;
    for (c8_i10 = 0; c8_i10 < 2; c8_i10++) {
      c8_sizeIn[c8_i10] = 120.0 + 40.0 * (real_T)c8_i10;
    }

    bwlookup_tbb_boolean(&c8_bwin[0], &c8_sizeIn[0], 2.0, &c8_lut[0], 512.0,
                         &c8_b_bw[0]);
  }
}

static void c8_e_bwmorphApplyOnce(SFc8_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, boolean_T c8_b_bw[19200])
{
  static real_T c8_dv[512] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0,
    0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0,
    0.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  static boolean_T c8_lut[512] = { false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, true, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    false, false, false, true, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    true, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, true, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, true, true,
    false, false, false, false, false, false, false, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, false, false, false, true, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    false, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false
  };

  emlrtStack c8_b_st;
  emlrtStack c8_st;
  const mxArray *c8_b_y = NULL;
  const mxArray *c8_c_y = NULL;
  const mxArray *c8_d_y = NULL;
  const mxArray *c8_y = NULL;
  real_T c8_sizeIn[2];
  real_T c8_b_k;
  real_T c8_b_x;
  real_T c8_d_k;
  real_T c8_x;
  int32_T c8_c_k;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i10;
  int32_T c8_i11;
  int32_T c8_i12;
  int32_T c8_i13;
  int32_T c8_i14;
  int32_T c8_i15;
  int32_T c8_i16;
  int32_T c8_i17;
  int32_T c8_i18;
  int32_T c8_i19;
  int32_T c8_i2;
  int32_T c8_i20;
  int32_T c8_i21;
  int32_T c8_i22;
  int32_T c8_i23;
  int32_T c8_i24;
  int32_T c8_i25;
  int32_T c8_i26;
  int32_T c8_i27;
  int32_T c8_i28;
  int32_T c8_i29;
  int32_T c8_i3;
  int32_T c8_i30;
  int32_T c8_i31;
  int32_T c8_i32;
  int32_T c8_i33;
  int32_T c8_i34;
  int32_T c8_i35;
  int32_T c8_i36;
  int32_T c8_i37;
  int32_T c8_i38;
  int32_T c8_i39;
  int32_T c8_i4;
  int32_T c8_i40;
  int32_T c8_i41;
  int32_T c8_i42;
  int32_T c8_i43;
  int32_T c8_i44;
  int32_T c8_i45;
  int32_T c8_i46;
  int32_T c8_i47;
  int32_T c8_i48;
  int32_T c8_i49;
  int32_T c8_i5;
  int32_T c8_i50;
  int32_T c8_i51;
  int32_T c8_i52;
  int32_T c8_i53;
  int32_T c8_i54;
  int32_T c8_i55;
  int32_T c8_i56;
  int32_T c8_i57;
  int32_T c8_i58;
  int32_T c8_i59;
  int32_T c8_i6;
  int32_T c8_i60;
  int32_T c8_i61;
  int32_T c8_i62;
  int32_T c8_i63;
  int32_T c8_i64;
  int32_T c8_i65;
  int32_T c8_i66;
  int32_T c8_i67;
  int32_T c8_i68;
  int32_T c8_i69;
  int32_T c8_i7;
  int32_T c8_i70;
  int32_T c8_i71;
  int32_T c8_i72;
  int32_T c8_i73;
  int32_T c8_i74;
  int32_T c8_i75;
  int32_T c8_i76;
  int32_T c8_i8;
  int32_T c8_i9;
  int32_T c8_k;
  boolean_T c8_bwin[19200];
  boolean_T c8_endPoints[19200];
  boolean_T c8_newEndPoints[19200];
  boolean_T c8_e_y[4800];
  boolean_T c8_t[4800];
  boolean_T c8_b;
  boolean_T c8_b_b;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_b_st.prev = &c8_st;
  c8_b_st.tls = c8_st.tls;
  c8_st.site = &c8_r_emlrtRSI;
  c8_b_st.site = &c8_w_emlrtRSI;
  for (c8_k = 0; c8_k < 512; c8_k++) {
    c8_b_k = 1.0 + (real_T)c8_k;
    c8_x = c8_dv[(int32_T)c8_b_k - 1];
    c8_b = muDoubleScalarIsNaN(c8_x);
    if (c8_b) {
      c8_y = NULL;
      sf_mex_assign(&c8_y, sf_mex_create("y", c8_cv, 10, 0U, 1U, 0U, 2, 1, 19),
                    false);
      c8_b_y = NULL;
      sf_mex_assign(&c8_b_y, sf_mex_create("y", c8_cv, 10, 0U, 1U, 0U, 2, 1, 19),
                    false);
      sf_mex_call(&c8_b_st, &c8_emlrtMCI, "error", 0U, 2U, 14, c8_y, 14,
                  sf_mex_call(&c8_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c8_b_st, NULL, "message", 1U, 1U, 14, c8_b_y)));
    }
  }

  for (c8_i = 0; c8_i < 19200; c8_i++) {
    c8_b_bw[c8_i] = !c8_b_bw[c8_i];
  }

  c8_st.site = &c8_s_emlrtRSI;
  c8_b_st.site = &c8_w_emlrtRSI;
  for (c8_c_k = 0; c8_c_k < 512; c8_c_k++) {
    c8_d_k = 1.0 + (real_T)c8_c_k;
    c8_b_x = c8_dv[(int32_T)c8_d_k - 1];
    c8_b_b = muDoubleScalarIsNaN(c8_b_x);
    if (c8_b_b) {
      c8_c_y = NULL;
      sf_mex_assign(&c8_c_y, sf_mex_create("y", c8_cv, 10, 0U, 1U, 0U, 2, 1, 19),
                    false);
      c8_d_y = NULL;
      sf_mex_assign(&c8_d_y, sf_mex_create("y", c8_cv, 10, 0U, 1U, 0U, 2, 1, 19),
                    false);
      sf_mex_call(&c8_b_st, &c8_emlrtMCI, "error", 0U, 2U, 14, c8_c_y, 14,
                  sf_mex_call(&c8_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c8_b_st, NULL, "message", 1U, 1U, 14, c8_d_y)));
    }
  }

  c8_st.site = &c8_s_emlrtRSI;
  for (c8_i1 = 0; c8_i1 < 19200; c8_i1++) {
    c8_bwin[c8_i1] = c8_b_bw[c8_i1];
  }

  c8_b_st.site = &c8_q_emlrtRSI;
  for (c8_i2 = 0; c8_i2 < 2; c8_i2++) {
    c8_sizeIn[c8_i2] = 120.0 + 40.0 * (real_T)c8_i2;
  }

  bwlookup_tbb_boolean(&c8_bwin[0], &c8_sizeIn[0], 2.0, &c8_lut[0], 512.0,
                       &c8_endPoints[0]);
  c8_i3 = 0;
  c8_i4 = 0;
  for (c8_i5 = 0; c8_i5 < 80; c8_i5++) {
    c8_i7 = 0;
    for (c8_i9 = 0; c8_i9 < 60; c8_i9++) {
      c8_e_y[c8_i9 + c8_i3] = c8_b_bw[c8_i7 + c8_i4];
      c8_i7 += 2;
    }

    c8_i3 += 60;
    c8_i4 += 240;
  }

  c8_i6 = 0;
  c8_i8 = 0;
  for (c8_i10 = 0; c8_i10 < 80; c8_i10++) {
    c8_i12 = 0;
    for (c8_i13 = 0; c8_i13 < 60; c8_i13++) {
      c8_t[c8_i13 + c8_i6] = c8_endPoints[c8_i12 + c8_i8];
      c8_i12 += 2;
    }

    c8_i6 += 60;
    c8_i8 += 240;
  }

  for (c8_i11 = 0; c8_i11 < 4800; c8_i11++) {
    c8_e_y[c8_i11] = c8_function_handle_parenReference(chartInstance,
      c8_e_y[c8_i11], c8_t[c8_i11]);
  }

  c8_i14 = 0;
  c8_i15 = 0;
  for (c8_i16 = 0; c8_i16 < 80; c8_i16++) {
    c8_i17 = 0;
    for (c8_i19 = 0; c8_i19 < 60; c8_i19++) {
      c8_b_bw[c8_i17 + c8_i14] = c8_e_y[c8_i19 + c8_i15];
      c8_i17 += 2;
    }

    c8_i14 += 240;
    c8_i15 += 60;
  }

  c8_st.site = &c8_t_emlrtRSI;
  for (c8_i18 = 0; c8_i18 < 19200; c8_i18++) {
    c8_bwin[c8_i18] = c8_b_bw[c8_i18];
  }

  c8_b_st.site = &c8_q_emlrtRSI;
  for (c8_i20 = 0; c8_i20 < 2; c8_i20++) {
    c8_sizeIn[c8_i20] = 120.0 + 40.0 * (real_T)c8_i20;
  }

  bwlookup_tbb_boolean(&c8_bwin[0], &c8_sizeIn[0], 2.0, &c8_lut[0], 512.0,
                       &c8_newEndPoints[0]);
  for (c8_i21 = 0; c8_i21 < 19200; c8_i21++) {
    c8_newEndPoints[c8_i21] = (c8_endPoints[c8_i21] && c8_newEndPoints[c8_i21]);
  }

  c8_i22 = 0;
  c8_i23 = 0;
  for (c8_i24 = 0; c8_i24 < 80; c8_i24++) {
    c8_i26 = 0;
    for (c8_i28 = 0; c8_i28 < 60; c8_i28++) {
      c8_e_y[c8_i28 + c8_i22] = c8_b_bw[(c8_i26 + c8_i23) + 120];
      c8_i26 += 2;
    }

    c8_i22 += 60;
    c8_i23 += 240;
  }

  c8_i25 = 0;
  c8_i27 = 0;
  for (c8_i29 = 0; c8_i29 < 80; c8_i29++) {
    c8_i31 = 0;
    for (c8_i32 = 0; c8_i32 < 60; c8_i32++) {
      c8_t[c8_i32 + c8_i25] = c8_newEndPoints[(c8_i31 + c8_i27) + 120];
      c8_i31 += 2;
    }

    c8_i25 += 60;
    c8_i27 += 240;
  }

  for (c8_i30 = 0; c8_i30 < 4800; c8_i30++) {
    c8_e_y[c8_i30] = c8_function_handle_parenReference(chartInstance,
      c8_e_y[c8_i30], c8_t[c8_i30]);
  }

  c8_i33 = 0;
  c8_i34 = 0;
  for (c8_i35 = 0; c8_i35 < 80; c8_i35++) {
    c8_i36 = 0;
    for (c8_i38 = 0; c8_i38 < 60; c8_i38++) {
      c8_b_bw[(c8_i36 + c8_i33) + 120] = c8_e_y[c8_i38 + c8_i34];
      c8_i36 += 2;
    }

    c8_i33 += 240;
    c8_i34 += 60;
  }

  c8_st.site = &c8_u_emlrtRSI;
  for (c8_i37 = 0; c8_i37 < 19200; c8_i37++) {
    c8_bwin[c8_i37] = c8_b_bw[c8_i37];
  }

  c8_b_st.site = &c8_q_emlrtRSI;
  for (c8_i39 = 0; c8_i39 < 2; c8_i39++) {
    c8_sizeIn[c8_i39] = 120.0 + 40.0 * (real_T)c8_i39;
  }

  bwlookup_tbb_boolean(&c8_bwin[0], &c8_sizeIn[0], 2.0, &c8_lut[0], 512.0,
                       &c8_newEndPoints[0]);
  for (c8_i40 = 0; c8_i40 < 19200; c8_i40++) {
    c8_newEndPoints[c8_i40] = (c8_endPoints[c8_i40] && c8_newEndPoints[c8_i40]);
  }

  c8_i41 = 0;
  c8_i42 = 0;
  for (c8_i43 = 0; c8_i43 < 80; c8_i43++) {
    c8_i45 = 0;
    for (c8_i47 = 0; c8_i47 < 60; c8_i47++) {
      c8_e_y[c8_i47 + c8_i41] = c8_b_bw[(c8_i45 + c8_i42) + 1];
      c8_i45 += 2;
    }

    c8_i41 += 60;
    c8_i42 += 240;
  }

  c8_i44 = 0;
  c8_i46 = 0;
  for (c8_i48 = 0; c8_i48 < 80; c8_i48++) {
    c8_i50 = 0;
    for (c8_i51 = 0; c8_i51 < 60; c8_i51++) {
      c8_t[c8_i51 + c8_i44] = c8_newEndPoints[(c8_i50 + c8_i46) + 1];
      c8_i50 += 2;
    }

    c8_i44 += 60;
    c8_i46 += 240;
  }

  for (c8_i49 = 0; c8_i49 < 4800; c8_i49++) {
    c8_e_y[c8_i49] = c8_function_handle_parenReference(chartInstance,
      c8_e_y[c8_i49], c8_t[c8_i49]);
  }

  c8_i52 = 0;
  c8_i53 = 0;
  for (c8_i54 = 0; c8_i54 < 80; c8_i54++) {
    c8_i55 = 0;
    for (c8_i57 = 0; c8_i57 < 60; c8_i57++) {
      c8_b_bw[(c8_i55 + c8_i52) + 1] = c8_e_y[c8_i57 + c8_i53];
      c8_i55 += 2;
    }

    c8_i52 += 240;
    c8_i53 += 60;
  }

  c8_st.site = &c8_v_emlrtRSI;
  for (c8_i56 = 0; c8_i56 < 19200; c8_i56++) {
    c8_bwin[c8_i56] = c8_b_bw[c8_i56];
  }

  c8_b_st.site = &c8_q_emlrtRSI;
  for (c8_i58 = 0; c8_i58 < 2; c8_i58++) {
    c8_sizeIn[c8_i58] = 120.0 + 40.0 * (real_T)c8_i58;
  }

  bwlookup_tbb_boolean(&c8_bwin[0], &c8_sizeIn[0], 2.0, &c8_lut[0], 512.0,
                       &c8_newEndPoints[0]);
  for (c8_i59 = 0; c8_i59 < 19200; c8_i59++) {
    c8_newEndPoints[c8_i59] = (c8_endPoints[c8_i59] && c8_newEndPoints[c8_i59]);
  }

  c8_i60 = 0;
  c8_i61 = 0;
  for (c8_i62 = 0; c8_i62 < 80; c8_i62++) {
    c8_i64 = 0;
    for (c8_i66 = 0; c8_i66 < 60; c8_i66++) {
      c8_e_y[c8_i66 + c8_i60] = c8_b_bw[(c8_i64 + c8_i61) + 121];
      c8_i64 += 2;
    }

    c8_i60 += 60;
    c8_i61 += 240;
  }

  c8_i63 = 0;
  c8_i65 = 0;
  for (c8_i67 = 0; c8_i67 < 80; c8_i67++) {
    c8_i69 = 0;
    for (c8_i70 = 0; c8_i70 < 60; c8_i70++) {
      c8_t[c8_i70 + c8_i63] = c8_newEndPoints[(c8_i69 + c8_i65) + 121];
      c8_i69 += 2;
    }

    c8_i63 += 60;
    c8_i65 += 240;
  }

  for (c8_i68 = 0; c8_i68 < 4800; c8_i68++) {
    c8_e_y[c8_i68] = c8_function_handle_parenReference(chartInstance,
      c8_e_y[c8_i68], c8_t[c8_i68]);
  }

  c8_i71 = 0;
  c8_i72 = 0;
  for (c8_i73 = 0; c8_i73 < 80; c8_i73++) {
    c8_i75 = 0;
    for (c8_i76 = 0; c8_i76 < 60; c8_i76++) {
      c8_b_bw[(c8_i75 + c8_i71) + 121] = c8_e_y[c8_i76 + c8_i72];
      c8_i75 += 2;
    }

    c8_i71 += 240;
    c8_i72 += 60;
  }

  for (c8_i74 = 0; c8_i74 < 19200; c8_i74++) {
    c8_b_bw[c8_i74] = !c8_b_bw[c8_i74];
  }
}

static void c8_f_bwmorphApplyOnce(SFc8_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, boolean_T c8_b_bw[19200])
{
  static real_T c8_b_lut[512] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 2.0, 1.0, 1.0,
    1.0, 1.0, 2.0, 1.0, 2.0, 2.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 2.0, 2.0, 2.0, 1.0, 2.0,
    1.0, 1.0, 2.0, 2.0, 3.0, 2.0, 2.0, 2.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 2.0, 2.0, 2.0,
    2.0, 3.0, 2.0, 2.0, 1.0, 1.0, 2.0, 1.0, 2.0, 2.0, 2.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.0, 3.0,
    3.0, 3.0, 2.0, 3.0, 2.0, 2.0, 2.0, 2.0, 3.0, 2.0, 2.0, 2.0, 2.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 2.0, 2.0, 2.0, 2.0, 3.0, 2.0, 2.0, 2.0, 2.0, 3.0, 2.0, 3.0, 3.0, 3.0,
    2.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 2.0, 3.0, 3.0, 3.0, 2.0, 3.0, 2.0, 2.0, 3.0, 3.0, 4.0, 3.0, 3.0,
    3.0, 3.0, 2.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 2.0, 2.0, 2.0, 2.0, 3.0, 2.0, 2.0, 1.0, 1.0, 2.0,
    1.0, 2.0, 2.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.0, 3.0, 3.0, 3.0, 2.0, 3.0, 2.0, 2.0, 2.0,
    2.0, 3.0, 2.0, 2.0, 2.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 2.0, 2.0, 2.0, 2.0, 3.0, 2.0,
    2.0, 2.0, 2.0, 3.0, 2.0, 3.0, 3.0, 3.0, 2.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 2.0, 2.0, 2.0, 1.0,
    2.0, 1.0, 1.0, 2.0, 2.0, 3.0, 2.0, 2.0, 2.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.0, 3.0, 3.0,
    3.0, 3.0, 4.0, 3.0, 3.0, 2.0, 2.0, 3.0, 2.0, 3.0, 3.0, 3.0, 2.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.0,
    3.0, 3.0, 3.0, 2.0, 3.0, 2.0, 2.0, 2.0, 2.0, 3.0, 2.0, 2.0, 2.0, 2.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 2.0, 2.0, 2.0, 2.0, 3.0, 2.0, 2.0, 2.0, 2.0, 3.0, 2.0, 3.0, 3.0,
    3.0, 2.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 2.0, 2.0, 2.0, 1.0, 2.0, 1.0, 1.0, 2.0, 2.0, 3.0, 2.0,
    2.0, 2.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 2.0, 2.0, 2.0, 2.0, 3.0, 2.0, 2.0, 1.0, 1.0,
    2.0, 1.0, 2.0, 2.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 2.0, 2.0, 2.0, 1.0, 2.0, 1.0, 1.0,
    1.0, 1.0, 2.0, 1.0, 1.0, 1.0, 1.0, 0.0 };

  static real_T c8_dv[512] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0,
    0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0,
    1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0,
    1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 1.0,
    0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 };

  static real_T c8_dv1[512] = { 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 };

  static boolean_T c8_c_lut[512] = { false, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true };

  static boolean_T c8_lut[512] = { false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, true, false, false, false, true,
    false, true, true, true, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, true, false, true, true, true, false, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    false, true, true, true, false, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, false, true, true, true, false,
    true, true, true, true, true, true, true, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, true, false, true, true, true,
    false, true, true, true, true, true, true, true, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true };

  emlrtStack c8_b_st;
  emlrtStack c8_st;
  const mxArray *c8_b_y = NULL;
  const mxArray *c8_c_y = NULL;
  const mxArray *c8_d_y = NULL;
  const mxArray *c8_e_y = NULL;
  const mxArray *c8_f_y = NULL;
  const mxArray *c8_g_y = NULL;
  const mxArray *c8_h_y = NULL;
  const mxArray *c8_y = NULL;
  real_T c8_sizeIn[2];
  real_T c8_b_k;
  real_T c8_b_x;
  real_T c8_c_x;
  real_T c8_d_k;
  real_T c8_d_x;
  real_T c8_f_k;
  real_T c8_h_k;
  real_T c8_x;
  int32_T c8_c_k;
  int32_T c8_e_k;
  int32_T c8_g_k;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i10;
  int32_T c8_i11;
  int32_T c8_i12;
  int32_T c8_i13;
  int32_T c8_i14;
  int32_T c8_i15;
  int32_T c8_i16;
  int32_T c8_i17;
  int32_T c8_i2;
  int32_T c8_i3;
  int32_T c8_i4;
  int32_T c8_i5;
  int32_T c8_i6;
  int32_T c8_i7;
  int32_T c8_i8;
  int32_T c8_i9;
  int32_T c8_k;
  boolean_T c8_C[19200];
  boolean_T c8_E[19200];
  boolean_T c8_Vp[19200];
  boolean_T c8_Vq[19200];
  boolean_T c8_b;
  boolean_T c8_b_b;
  boolean_T c8_c_b;
  boolean_T c8_d_b;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_b_st.prev = &c8_st;
  c8_b_st.tls = c8_st.tls;
  c8_st.site = &c8_x_emlrtRSI;
  c8_b_st.site = &c8_db_emlrtRSI;
  for (c8_k = 0; c8_k < 512; c8_k++) {
    c8_b_k = 1.0 + (real_T)c8_k;
    c8_x = c8_dv[(int32_T)c8_b_k - 1];
    c8_b = muDoubleScalarIsNaN(c8_x);
    if (c8_b) {
      c8_y = NULL;
      sf_mex_assign(&c8_y, sf_mex_create("y", c8_cv, 10, 0U, 1U, 0U, 2, 1, 19),
                    false);
      c8_b_y = NULL;
      sf_mex_assign(&c8_b_y, sf_mex_create("y", c8_cv, 10, 0U, 1U, 0U, 2, 1, 19),
                    false);
      sf_mex_call(&c8_b_st, &c8_emlrtMCI, "error", 0U, 2U, 14, c8_y, 14,
                  sf_mex_call(&c8_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c8_b_st, NULL, "message", 1U, 1U, 14, c8_b_y)));
    }
  }

  c8_st.site = &c8_x_emlrtRSI;
  for (c8_i = 0; c8_i < 19200; c8_i++) {
    c8_Vq[c8_i] = c8_b_bw[c8_i];
  }

  c8_b_st.site = &c8_q_emlrtRSI;
  for (c8_i1 = 0; c8_i1 < 2; c8_i1++) {
    c8_sizeIn[c8_i1] = 120.0 + 40.0 * (real_T)c8_i1;
  }

  bwlookup_tbb_boolean(&c8_Vq[0], &c8_sizeIn[0], 2.0, &c8_lut[0], 512.0, &c8_C[0]);
  c8_st.site = &c8_y_emlrtRSI;
  c8_b_st.site = &c8_q_emlrtRSI;
  for (c8_i2 = 0; c8_i2 < 2; c8_i2++) {
    c8_sizeIn[c8_i2] = 120.0 + 40.0 * (real_T)c8_i2;
  }

  bwlookup_tbb_real64(&c8_Vq[0], &c8_sizeIn[0], 2.0, &c8_b_lut[0], 512.0,
                      &chartInstance->c8_B[0]);
  for (c8_i3 = 0; c8_i3 < 19200; c8_i3++) {
    c8_E[c8_i3] = (chartInstance->c8_B[c8_i3] == 1.0);
  }

  for (c8_i4 = 0; c8_i4 < 19200; c8_i4++) {
    chartInstance->c8_FC[c8_i4] = (real_T)!c8_E[c8_i4] * (real_T)c8_C[c8_i4];
  }

  for (c8_i5 = 0; c8_i5 < 19200; c8_i5++) {
    c8_Vp[c8_i5] = (chartInstance->c8_B[c8_i5] == 2.0);
  }

  for (c8_i6 = 0; c8_i6 < 19200; c8_i6++) {
    c8_Vq[c8_i6] = !c8_E[c8_i6];
  }

  for (c8_i7 = 0; c8_i7 < 19200; c8_i7++) {
    c8_Vp[c8_i7] = (c8_Vp[c8_i7] && c8_Vq[c8_i7]);
  }

  for (c8_i8 = 0; c8_i8 < 19200; c8_i8++) {
    c8_Vq[c8_i8] = (chartInstance->c8_B[c8_i8] > 2.0);
  }

  for (c8_i9 = 0; c8_i9 < 19200; c8_i9++) {
    c8_E[c8_i9] = !c8_E[c8_i9];
  }

  for (c8_i10 = 0; c8_i10 < 19200; c8_i10++) {
    c8_Vq[c8_i10] = (c8_Vq[c8_i10] && c8_E[c8_i10]);
  }

  c8_st.site = &c8_ab_emlrtRSI;
  c8_b_st.site = &c8_eb_emlrtRSI;
  for (c8_c_k = 0; c8_c_k < 512; c8_c_k++) {
    c8_d_k = 1.0 + (real_T)c8_c_k;
    c8_b_x = c8_dv1[(int32_T)c8_d_k - 1];
    c8_b_b = muDoubleScalarIsNaN(c8_b_x);
    if (c8_b_b) {
      c8_c_y = NULL;
      sf_mex_assign(&c8_c_y, sf_mex_create("y", c8_cv, 10, 0U, 1U, 0U, 2, 1, 19),
                    false);
      c8_d_y = NULL;
      sf_mex_assign(&c8_d_y, sf_mex_create("y", c8_cv, 10, 0U, 1U, 0U, 2, 1, 19),
                    false);
      sf_mex_call(&c8_b_st, &c8_emlrtMCI, "error", 0U, 2U, 14, c8_c_y, 14,
                  sf_mex_call(&c8_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c8_b_st, NULL, "message", 1U, 1U, 14, c8_d_y)));
    }
  }

  c8_st.site = &c8_ab_emlrtRSI;
  c8_b_st.site = &c8_q_emlrtRSI;
  for (c8_i11 = 0; c8_i11 < 2; c8_i11++) {
    c8_sizeIn[c8_i11] = 120.0 + 40.0 * (real_T)c8_i11;
  }

  bwlookup_tbb_boolean(&c8_Vq[0], &c8_sizeIn[0], 2.0, &c8_c_lut[0], 512.0,
                       &c8_C[0]);
  c8_st.site = &c8_bb_emlrtRSI;
  for (c8_e_k = 0; c8_e_k < 19200; c8_e_k++) {
    c8_f_k = 1.0 + (real_T)c8_e_k;
    c8_c_x = chartInstance->c8_FC[(int32_T)c8_f_k - 1];
    c8_c_b = muDoubleScalarIsNaN(c8_c_x);
    if (c8_c_b) {
      c8_e_y = NULL;
      sf_mex_assign(&c8_e_y, sf_mex_create("y", c8_cv, 10, 0U, 1U, 0U, 2, 1, 19),
                    false);
      c8_f_y = NULL;
      sf_mex_assign(&c8_f_y, sf_mex_create("y", c8_cv, 10, 0U, 1U, 0U, 2, 1, 19),
                    false);
      sf_mex_call(&c8_st, &c8_emlrtMCI, "error", 0U, 2U, 14, c8_e_y, 14,
                  sf_mex_call(&c8_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (&c8_st, NULL, "message", 1U, 1U, 14, c8_f_y)));
    }
  }

  for (c8_i12 = 0; c8_i12 < 19200; c8_i12++) {
    c8_Vq[c8_i12] = (chartInstance->c8_FC[c8_i12] != 0.0);
  }

  for (c8_i13 = 0; c8_i13 < 19200; c8_i13++) {
    c8_Vq[c8_i13] = (c8_Vq[c8_i13] && c8_Vp[c8_i13]);
  }

  for (c8_i14 = 0; c8_i14 < 19200; c8_i14++) {
    c8_Vq[c8_i14] = (c8_Vq[c8_i14] && c8_C[c8_i14]);
  }

  c8_st.site = &c8_cb_emlrtRSI;
  for (c8_g_k = 0; c8_g_k < 19200; c8_g_k++) {
    c8_h_k = 1.0 + (real_T)c8_g_k;
    c8_d_x = chartInstance->c8_FC[(int32_T)c8_h_k - 1];
    c8_d_b = muDoubleScalarIsNaN(c8_d_x);
    if (c8_d_b) {
      c8_g_y = NULL;
      sf_mex_assign(&c8_g_y, sf_mex_create("y", c8_cv, 10, 0U, 1U, 0U, 2, 1, 19),
                    false);
      c8_h_y = NULL;
      sf_mex_assign(&c8_h_y, sf_mex_create("y", c8_cv, 10, 0U, 1U, 0U, 2, 1, 19),
                    false);
      sf_mex_call(&c8_st, &c8_emlrtMCI, "error", 0U, 2U, 14, c8_g_y, 14,
                  sf_mex_call(&c8_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (&c8_st, NULL, "message", 1U, 1U, 14, c8_h_y)));
    }
  }

  for (c8_i15 = 0; c8_i15 < 19200; c8_i15++) {
    c8_b_bw[c8_i15] = (chartInstance->c8_FC[c8_i15] != 0.0);
  }

  for (c8_i16 = 0; c8_i16 < 19200; c8_i16++) {
    c8_Vq[c8_i16] = !c8_Vq[c8_i16];
  }

  for (c8_i17 = 0; c8_i17 < 19200; c8_i17++) {
    c8_b_bw[c8_i17] = (c8_b_bw[c8_i17] && c8_Vq[c8_i17]);
  }
}

static void init_dsm_address_info(SFc8_flightControlSystemInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc8_flightControlSystemInstanceStruct
  *chartInstance)
{
  chartInstance->c8_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c8_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c8_bw = (boolean_T (*)[19200])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c8_line = (boolean_T (*)[19200])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c8_branch = (boolean_T (*)[19200])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c8_major = (boolean_T (*)[19200])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c8_flightControlSystem_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(690884495U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(4021507829U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2240801537U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1854635635U);
}

mxArray *sf_c8_flightControlSystem_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,1);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.Bwlookup_tbb_Buildable"));
  return(mxcell3p);
}

mxArray *sf_c8_flightControlSystem_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("bwlookup_tbb_boolean");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c8_flightControlSystem_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c8_flightControlSystem(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiDuYGZgYAPSHEDMxAABrFA+IxCzQGmIOAtcXAGISyoLUkHixUXJnilAOi8xF8x"
    "PLK3wzEvLB5tvwYAwnw2L+YxI5nNCxSHggz1l+iUc0PWzYNHPhqRfAMpPKkrMS86AhA8snAbOHy"
    "JgfxgQ8AcLij9YGHIy81IHh/tliIoHVrR4APFzE7PyixioFQ8KDpTph9gfQMAfCmj+APEzi+MTk"
    "0syy1Ljky3i03Iy0zNKnPPzSoryc4Iri0tSc2H+AwBNtigq"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c8_flightControlSystem_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "s0f3KMOxziLvS7yaACoyHYC";
}

static void sf_opaque_initialize_c8_flightControlSystem(void *chartInstanceVar)
{
  initialize_params_c8_flightControlSystem
    ((SFc8_flightControlSystemInstanceStruct*) chartInstanceVar);
  initialize_c8_flightControlSystem((SFc8_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c8_flightControlSystem(void *chartInstanceVar)
{
  enable_c8_flightControlSystem((SFc8_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c8_flightControlSystem(void *chartInstanceVar)
{
  disable_c8_flightControlSystem((SFc8_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c8_flightControlSystem(void *chartInstanceVar)
{
  sf_gateway_c8_flightControlSystem((SFc8_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c8_flightControlSystem(SimStruct*
  S)
{
  return get_sim_state_c8_flightControlSystem
    ((SFc8_flightControlSystemInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c8_flightControlSystem(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c8_flightControlSystem((SFc8_flightControlSystemInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c8_flightControlSystem(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc8_flightControlSystemInstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_flightControlSystem_optimization_info();
    }

    mdl_cleanup_runtime_resources_c8_flightControlSystem
      ((SFc8_flightControlSystemInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c8_flightControlSystem(void *chartInstanceVar)
{
  mdl_start_c8_flightControlSystem((SFc8_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c8_flightControlSystem(void
  *chartInstanceVar)
{
  mdl_terminate_c8_flightControlSystem((SFc8_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc8_flightControlSystem((SFc8_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c8_flightControlSystem(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c8_flightControlSystem
      ((SFc8_flightControlSystemInstanceStruct*)sf_get_chart_instance_ptr(S));
    initSimStructsc8_flightControlSystem((SFc8_flightControlSystemInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c8_flightControlSystem_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [23] = {
    "eNrtWU1v40QYnnbTihVL1QMCJFaiEhcuSMuuEHtA0DYfbERLK5wWgYSqif0mHjKe8c5H0qz4AVy",
    "5cuFPcOdXIO0P4MCRGyBx4B3byQY3pJ6ky3YRlhxnbD/v17yfCVlrHxI8tvDceZ2QTby+gOc6yY",
    "+NYr02c+b3a+T9Yv31i4SEMoI+iMD2euyc+B3CJsdU0UQT/0PQBD4FLbk1TIq26MnqWCZ6oECES",
    "CCVynjx1SyxnIlBy4rQcdafxSyMg1haHu0jQRodCT7+J76pNcfIscEUhKYFEJlYSduPW5z2F1tB",
    "mVE9hnCgbeJtKw0msKlTVR9abljKoXkOYVtoQ9EK+hJ9A0MN1M25n5GdvjqYoGWSckZFdVvHVAe",
    "QoncYOEkj/DyyBq1XCRvGVJl9iOkQ9AEbZNylgErcmca3u0xQIxWjvJnwuqNWUd9jjjoeYkhw3z",
    "1CffcV0EEqmTCeARG00M5NQbscGtC1fU++ATy0LhpOGYxA+e1vry6HoGgfjoSfzNkeNc8zp5zGU",
    "kWsYQmcUrUXou9qiPzyBgadDii6I3SQjBcWMhO3dUexIfqGb65ru/BfKtfZJPd+vRQ249scgrdf",
    "Tfm2QlGnnGs/bEemBzAEnvFvUEOXwOb8PcBas6gj0TtctvHMWFYwjIQCW5ciYtW9clhCZYXtEyx",
    "SFeAscWEAEZp5KvqU0GVxZLWRSR1TTuPgoCK/i9i2MKB6NITKNUZRpgEFzvzKk2/EtAskRKOVTK",
    "ZlZQp5DC4FJbpnRWMk1QBt7FvMntjKRYIfGqI+JmYDWZJronefUm4rypzoPsYPuseJxizrxxexL",
    "n6WAoc0jCFylZNxOMQ8iwSqbrF2JX8PtR0yM26ADhVLq0aSxYSORddZqTNO4UQMhByJlpJJUHRe",
    "C/wKALMGVYKJ/j6WcDVuofDVpFbwsJNld98mx9mZGk67zjc+AoHV0OnqugYaYlQ1BbbIKNAq2IA",
    "9wiZGaKYNFupxXurzuuf69wfkSf9em9O/vzLTv28X6/D+WY+zfuwSjVGSB2OkneT07szQu1VhHp",
    "jIsQhHLuDIFDe5vjWDX5vDl8xcy/xuri+Wcx2/rRW43RncSyU+tRJus7DZlz+1/vzt8bdv/vDd9",
    "z//kv7x4yr879f85q2tYn170jdNs/TwQiKr4g+vlvzBrfWd3r2PD4/OH7GDYfDemO7V5fjB5/WM",
    "3jc3FstbK8k7ub/jejUM4iwnqLAdFXObW1ObzxOZPWbk3bzEHjdn/ImQXz9cDf/abhk/z16bJXu",
    "5dVfh6BT/3X+fnR4v75b9sXbJPm3jCrMpXA/5b1fah43SPmxk+fMrqchV7cPO7mr4nP/xJXrslP",
    "TYyWapM+oqJpzNz8xbV5D3fHHkX8Y9L3L+b5enr1+VvmNZ3A3y9Pqcq8Stqp9vP/W8v7+o/pHS+",
    "9vXWI/yddm++rrp9Zj49b1vFOsPpr/r1GPGozmTZfEYh7/evKf/Ef/+3dN+kz6/6exX/AHwxb09",
    "QfkYR8l8VC9uHyv3O+70kQKq58/rz6KekDlz27y+6lYpvt16xEQkR/rtd+6+e3eV+vQXpZgskg=",
    "=",
    ""
  };

  static char newstr [1577] = "";
  newstr[0] = '\0';
  for (i = 0; i < 23; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c8_flightControlSystem(SimStruct *S)
{
  const char* newstr = sf_c8_flightControlSystem_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(4232500573U));
  ssSetChecksum1(S,(596760823U));
  ssSetChecksum2(S,(3835665076U));
  ssSetChecksum3(S,(3220795624U));
}

static void mdlRTW_c8_flightControlSystem(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c8_flightControlSystem(SimStruct *S)
{
  SFc8_flightControlSystemInstanceStruct *chartInstance;
  chartInstance = (SFc8_flightControlSystemInstanceStruct *)utMalloc(sizeof
    (SFc8_flightControlSystemInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc8_flightControlSystemInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c8_flightControlSystem;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c8_flightControlSystem;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c8_flightControlSystem;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c8_flightControlSystem;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c8_flightControlSystem;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c8_flightControlSystem;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c8_flightControlSystem;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c8_flightControlSystem;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c8_flightControlSystem;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c8_flightControlSystem;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c8_flightControlSystem;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c8_flightControlSystem;
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
    chartInstance->c8_JITStateAnimation,
    chartInstance->c8_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c8_flightControlSystem(chartInstance);
}

void c8_flightControlSystem_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c8_flightControlSystem(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c8_flightControlSystem(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c8_flightControlSystem(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c8_flightControlSystem_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
