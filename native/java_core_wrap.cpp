/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.7
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#define SWIGJAVA


#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__)) 
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__)) 
# else
#   define SWIGUNUSED 
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif 
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED 
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#  ifndef GCC_HASCLASSVISIBILITY
#    define GCC_HASCLASSVISIBILITY
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif 
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif



/* Fix for jlong on some versions of gcc on Windows */
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
  typedef long long __int64;
#endif

/* Fix for jlong on 64-bit x86 Solaris */
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
#endif

#include <jni.h>
#include <stdlib.h>
#include <string.h>


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1, 
  SWIG_JavaIOException, 
  SWIG_JavaRuntimeException, 
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" }
  };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  jenv->ExceptionClear();
  excep = jenv->FindClass(except_ptr->java_exception);
  if (excep)
    jenv->ThrowNew(excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else


#include <string>


#include <stdexcept>


#include <vector>
#include <stdexcept>

SWIGINTERN std::vector< int >::const_reference std_vector_Sl_int_Sg__get(std::vector< int > *self,int i){
                int size = int(self->size());
                if (i>=0 && i<size)
                    return (*self)[i];
                else
                    throw std::out_of_range("vector index out of range");
            }
SWIGINTERN void std_vector_Sl_int_Sg__set(std::vector< int > *self,int i,std::vector< int >::value_type const &val){
                int size = int(self->size());
                if (i>=0 && i<size)
                    (*self)[i] = val;
                else
                    throw std::out_of_range("vector index out of range");
            }
SWIGINTERN std::vector< double >::const_reference std_vector_Sl_double_Sg__get(std::vector< double > *self,int i){
                int size = int(self->size());
                if (i>=0 && i<size)
                    return (*self)[i];
                else
                    throw std::out_of_range("vector index out of range");
            }
SWIGINTERN void std_vector_Sl_double_Sg__set(std::vector< double > *self,int i,std::vector< double >::value_type const &val){
                int size = int(self->size());
                if (i>=0 && i<size)
                    (*self)[i] = val;
                else
                    throw std::out_of_range("vector index out of range");
            }
SWIGINTERN std::vector< std::string >::const_reference std_vector_Sl_std_string_Sg__get(std::vector< std::string > *self,int i){
                int size = int(self->size());
                if (i>=0 && i<size)
                    return (*self)[i];
                else
                    throw std::out_of_range("vector index out of range");
            }
SWIGINTERN void std_vector_Sl_std_string_Sg__set(std::vector< std::string > *self,int i,std::vector< std::string >::value_type const &val){
                int size = int(self->size());
                if (i>=0 && i<size)
                    (*self)[i] = val;
                else
                    throw std::out_of_range("vector index out of range");
            }
SWIGINTERN std::vector< char const * >::const_reference std_vector_Sl_char_SS_const_Sm__Sg__get(std::vector< char const * > *self,int i){
                int size = int(self->size());
                if (i>=0 && i<size)
                    return (*self)[i];
                else
                    throw std::out_of_range("vector index out of range");
            }
SWIGINTERN void std_vector_Sl_char_SS_const_Sm__Sg__set(std::vector< char const * > *self,int i,std::vector< char const * >::value_type const &val){
                int size = int(self->size());
                if (i>=0 && i<size)
                    (*self)[i] = val;
                else
                    throw std::out_of_range("vector index out of range");
            }

#include "../src/Inspector.cpp"


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jlong JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_new_1IntVector_1_1SWIG_10(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  std::vector< int > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (std::vector< int > *)new std::vector< int >();
  *(std::vector< int > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_new_1IntVector_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  std::vector< int >::size_type arg1 ;
  std::vector< int > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (std::vector< int >::size_type)jarg1; 
  result = (std::vector< int > *)new std::vector< int >(arg1);
  *(std::vector< int > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_IntVector_1size(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  std::vector< int > *arg1 = (std::vector< int > *) 0 ;
  std::vector< int >::size_type result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< int > **)&jarg1; 
  result = ((std::vector< int > const *)arg1)->size();
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_IntVector_1capacity(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  std::vector< int > *arg1 = (std::vector< int > *) 0 ;
  std::vector< int >::size_type result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< int > **)&jarg1; 
  result = ((std::vector< int > const *)arg1)->capacity();
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_IntVector_1reserve(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  std::vector< int > *arg1 = (std::vector< int > *) 0 ;
  std::vector< int >::size_type arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< int > **)&jarg1; 
  arg2 = (std::vector< int >::size_type)jarg2; 
  (arg1)->reserve(arg2);
}


SWIGEXPORT jboolean JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_IntVector_1isEmpty(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jboolean jresult = 0 ;
  std::vector< int > *arg1 = (std::vector< int > *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< int > **)&jarg1; 
  result = (bool)((std::vector< int > const *)arg1)->empty();
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_IntVector_1clear(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  std::vector< int > *arg1 = (std::vector< int > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< int > **)&jarg1; 
  (arg1)->clear();
}


SWIGEXPORT void JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_IntVector_1add(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  std::vector< int > *arg1 = (std::vector< int > *) 0 ;
  std::vector< int >::value_type *arg2 = 0 ;
  std::vector< int >::value_type temp2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< int > **)&jarg1; 
  temp2 = (std::vector< int >::value_type)jarg2; 
  arg2 = &temp2; 
  (arg1)->push_back((std::vector< int >::value_type const &)*arg2);
}


SWIGEXPORT jint JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_IntVector_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jint jresult = 0 ;
  std::vector< int > *arg1 = (std::vector< int > *) 0 ;
  int arg2 ;
  std::vector< int >::value_type *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< int > **)&jarg1; 
  arg2 = (int)jarg2; 
  try {
    result = (std::vector< int >::value_type *) &std_vector_Sl_int_Sg__get(arg1,arg2);
  }
  catch(std::out_of_range &_e) {
    SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, (&_e)->what());
    return 0;
  }
  
  jresult = (jint)*result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_IntVector_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3) {
  std::vector< int > *arg1 = (std::vector< int > *) 0 ;
  int arg2 ;
  std::vector< int >::value_type *arg3 = 0 ;
  std::vector< int >::value_type temp3 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< int > **)&jarg1; 
  arg2 = (int)jarg2; 
  temp3 = (std::vector< int >::value_type)jarg3; 
  arg3 = &temp3; 
  try {
    std_vector_Sl_int_Sg__set(arg1,arg2,(int const &)*arg3);
  }
  catch(std::out_of_range &_e) {
    SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, (&_e)->what());
    return ;
  }
  
}


SWIGEXPORT void JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_delete_1IntVector(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  std::vector< int > *arg1 = (std::vector< int > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(std::vector< int > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_new_1DoubleVector_1_1SWIG_10(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  std::vector< double > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (std::vector< double > *)new std::vector< double >();
  *(std::vector< double > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_new_1DoubleVector_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  std::vector< double >::size_type arg1 ;
  std::vector< double > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (std::vector< double >::size_type)jarg1; 
  result = (std::vector< double > *)new std::vector< double >(arg1);
  *(std::vector< double > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_DoubleVector_1size(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  std::vector< double > *arg1 = (std::vector< double > *) 0 ;
  std::vector< double >::size_type result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< double > **)&jarg1; 
  result = ((std::vector< double > const *)arg1)->size();
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_DoubleVector_1capacity(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  std::vector< double > *arg1 = (std::vector< double > *) 0 ;
  std::vector< double >::size_type result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< double > **)&jarg1; 
  result = ((std::vector< double > const *)arg1)->capacity();
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_DoubleVector_1reserve(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  std::vector< double > *arg1 = (std::vector< double > *) 0 ;
  std::vector< double >::size_type arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< double > **)&jarg1; 
  arg2 = (std::vector< double >::size_type)jarg2; 
  (arg1)->reserve(arg2);
}


SWIGEXPORT jboolean JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_DoubleVector_1isEmpty(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jboolean jresult = 0 ;
  std::vector< double > *arg1 = (std::vector< double > *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< double > **)&jarg1; 
  result = (bool)((std::vector< double > const *)arg1)->empty();
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_DoubleVector_1clear(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  std::vector< double > *arg1 = (std::vector< double > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< double > **)&jarg1; 
  (arg1)->clear();
}


SWIGEXPORT void JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_DoubleVector_1add(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jdouble jarg2) {
  std::vector< double > *arg1 = (std::vector< double > *) 0 ;
  std::vector< double >::value_type *arg2 = 0 ;
  std::vector< double >::value_type temp2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< double > **)&jarg1; 
  temp2 = (std::vector< double >::value_type)jarg2; 
  arg2 = &temp2; 
  (arg1)->push_back((std::vector< double >::value_type const &)*arg2);
}


SWIGEXPORT jdouble JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_DoubleVector_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jdouble jresult = 0 ;
  std::vector< double > *arg1 = (std::vector< double > *) 0 ;
  int arg2 ;
  std::vector< double >::value_type *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< double > **)&jarg1; 
  arg2 = (int)jarg2; 
  try {
    result = (std::vector< double >::value_type *) &std_vector_Sl_double_Sg__get(arg1,arg2);
  }
  catch(std::out_of_range &_e) {
    SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, (&_e)->what());
    return 0;
  }
  
  jresult = (jdouble)*result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_DoubleVector_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jdouble jarg3) {
  std::vector< double > *arg1 = (std::vector< double > *) 0 ;
  int arg2 ;
  std::vector< double >::value_type *arg3 = 0 ;
  std::vector< double >::value_type temp3 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< double > **)&jarg1; 
  arg2 = (int)jarg2; 
  temp3 = (std::vector< double >::value_type)jarg3; 
  arg3 = &temp3; 
  try {
    std_vector_Sl_double_Sg__set(arg1,arg2,(double const &)*arg3);
  }
  catch(std::out_of_range &_e) {
    SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, (&_e)->what());
    return ;
  }
  
}


SWIGEXPORT void JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_delete_1DoubleVector(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  std::vector< double > *arg1 = (std::vector< double > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(std::vector< double > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_new_1StringVector_1_1SWIG_10(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  std::vector< std::string > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (std::vector< std::string > *)new std::vector< std::string >();
  *(std::vector< std::string > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_new_1StringVector_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  std::vector< std::string >::size_type arg1 ;
  std::vector< std::string > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (std::vector< std::string >::size_type)jarg1; 
  result = (std::vector< std::string > *)new std::vector< std::string >(arg1);
  *(std::vector< std::string > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_StringVector_1size(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  std::vector< std::string > *arg1 = (std::vector< std::string > *) 0 ;
  std::vector< std::string >::size_type result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::string > **)&jarg1; 
  result = ((std::vector< std::string > const *)arg1)->size();
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_StringVector_1capacity(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  std::vector< std::string > *arg1 = (std::vector< std::string > *) 0 ;
  std::vector< std::string >::size_type result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::string > **)&jarg1; 
  result = ((std::vector< std::string > const *)arg1)->capacity();
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_StringVector_1reserve(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  std::vector< std::string > *arg1 = (std::vector< std::string > *) 0 ;
  std::vector< std::string >::size_type arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::string > **)&jarg1; 
  arg2 = (std::vector< std::string >::size_type)jarg2; 
  (arg1)->reserve(arg2);
}


SWIGEXPORT jboolean JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_StringVector_1isEmpty(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jboolean jresult = 0 ;
  std::vector< std::string > *arg1 = (std::vector< std::string > *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::string > **)&jarg1; 
  result = (bool)((std::vector< std::string > const *)arg1)->empty();
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_StringVector_1clear(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  std::vector< std::string > *arg1 = (std::vector< std::string > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::string > **)&jarg1; 
  (arg1)->clear();
}


SWIGEXPORT void JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_StringVector_1add(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  std::vector< std::string > *arg1 = (std::vector< std::string > *) 0 ;
  std::vector< std::string >::value_type *arg2 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::string > **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return ;
  std::vector< std::string >::value_type arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  (arg1)->push_back((std::vector< std::string >::value_type const &)*arg2);
}


SWIGEXPORT jstring JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_StringVector_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jstring jresult = 0 ;
  std::vector< std::string > *arg1 = (std::vector< std::string > *) 0 ;
  int arg2 ;
  std::vector< std::string >::value_type *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::string > **)&jarg1; 
  arg2 = (int)jarg2; 
  try {
    result = (std::vector< std::string >::value_type *) &std_vector_Sl_std_string_Sg__get(arg1,arg2);
  }
  catch(std::out_of_range &_e) {
    SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, (&_e)->what());
    return 0;
  }
  
  jresult = jenv->NewStringUTF(result->c_str()); 
  return jresult;
}


SWIGEXPORT void JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_StringVector_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jstring jarg3) {
  std::vector< std::string > *arg1 = (std::vector< std::string > *) 0 ;
  int arg2 ;
  std::vector< std::string >::value_type *arg3 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::string > **)&jarg1; 
  arg2 = (int)jarg2; 
  if(!jarg3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  }
  const char *arg3_pstr = (const char *)jenv->GetStringUTFChars(jarg3, 0); 
  if (!arg3_pstr) return ;
  std::vector< std::string >::value_type arg3_str(arg3_pstr);
  arg3 = &arg3_str;
  jenv->ReleaseStringUTFChars(jarg3, arg3_pstr); 
  try {
    std_vector_Sl_std_string_Sg__set(arg1,arg2,(std::string const &)*arg3);
  }
  catch(std::out_of_range &_e) {
    SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, (&_e)->what());
    return ;
  }
  
}


SWIGEXPORT void JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_delete_1StringVector(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  std::vector< std::string > *arg1 = (std::vector< std::string > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(std::vector< std::string > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_new_1ConstCharVector_1_1SWIG_10(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  std::vector< char const * > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (std::vector< char const * > *)new std::vector< char const * >();
  *(std::vector< char const * > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_new_1ConstCharVector_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  std::vector< char const * >::size_type arg1 ;
  std::vector< char const * > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (std::vector< char const * >::size_type)jarg1; 
  result = (std::vector< char const * > *)new std::vector< char const * >(arg1);
  *(std::vector< char const * > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_ConstCharVector_1size(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  std::vector< char const * > *arg1 = (std::vector< char const * > *) 0 ;
  std::vector< char const * >::size_type result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< char const * > **)&jarg1; 
  result = ((std::vector< char const * > const *)arg1)->size();
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_ConstCharVector_1capacity(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  std::vector< char const * > *arg1 = (std::vector< char const * > *) 0 ;
  std::vector< char const * >::size_type result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< char const * > **)&jarg1; 
  result = ((std::vector< char const * > const *)arg1)->capacity();
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_ConstCharVector_1reserve(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  std::vector< char const * > *arg1 = (std::vector< char const * > *) 0 ;
  std::vector< char const * >::size_type arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< char const * > **)&jarg1; 
  arg2 = (std::vector< char const * >::size_type)jarg2; 
  (arg1)->reserve(arg2);
}


SWIGEXPORT jboolean JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_ConstCharVector_1isEmpty(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jboolean jresult = 0 ;
  std::vector< char const * > *arg1 = (std::vector< char const * > *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< char const * > **)&jarg1; 
  result = (bool)((std::vector< char const * > const *)arg1)->empty();
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_ConstCharVector_1clear(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  std::vector< char const * > *arg1 = (std::vector< char const * > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< char const * > **)&jarg1; 
  (arg1)->clear();
}


SWIGEXPORT void JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_ConstCharVector_1add(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  std::vector< char const * > *arg1 = (std::vector< char const * > *) 0 ;
  std::vector< char const * >::value_type *arg2 = 0 ;
  std::vector< char const * >::value_type temp2 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< char const * > **)&jarg1; 
  arg2 = 0;
  if (jarg2) {
    temp2 = (std::vector< char const * >::value_type)jenv->GetStringUTFChars(jarg2, 0);
    if (!temp2) return ;
  }
  arg2 = &temp2;
  (arg1)->push_back((std::vector< char const * >::value_type const &)*arg2);
  if (arg2 && *arg2) jenv->ReleaseStringUTFChars(jarg2, (const char *)*arg2);
}


SWIGEXPORT jstring JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_ConstCharVector_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jstring jresult = 0 ;
  std::vector< char const * > *arg1 = (std::vector< char const * > *) 0 ;
  int arg2 ;
  std::vector< char const * >::value_type *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< char const * > **)&jarg1; 
  arg2 = (int)jarg2; 
  try {
    result = (std::vector< char const * >::value_type *) &std_vector_Sl_char_SS_const_Sm__Sg__get(arg1,arg2);
  }
  catch(std::out_of_range &_e) {
    SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, (&_e)->what());
    return 0;
  }
  
  if (*result) jresult = jenv->NewStringUTF((const char *)*result);
  return jresult;
}


SWIGEXPORT void JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_ConstCharVector_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jstring jarg3) {
  std::vector< char const * > *arg1 = (std::vector< char const * > *) 0 ;
  int arg2 ;
  std::vector< char const * >::value_type *arg3 = 0 ;
  std::vector< char const * >::value_type temp3 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< char const * > **)&jarg1; 
  arg2 = (int)jarg2; 
  arg3 = 0;
  if (jarg3) {
    temp3 = (std::vector< char const * >::value_type)jenv->GetStringUTFChars(jarg3, 0);
    if (!temp3) return ;
  }
  arg3 = &temp3;
  try {
    std_vector_Sl_char_SS_const_Sm__Sg__set(arg1,arg2,(char const *const &)*arg3);
  }
  catch(std::out_of_range &_e) {
    SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, (&_e)->what());
    return ;
  }
  
  if (arg3 && *arg3) jenv->ReleaseStringUTFChars(jarg3, (const char *)*arg3);
}


SWIGEXPORT void JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_delete_1ConstCharVector(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  std::vector< char const * > *arg1 = (std::vector< char const * > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(std::vector< char const * > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jint JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_ObfInspector_1inspector(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  std::vector< std::string > arg1 ;
  std::vector< std::string > *argp1 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  argp1 = *(std::vector< std::string > **)&jarg1; 
  if (!argp1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null std::vector< std::string >");
    return 0;
  }
  arg1 = *argp1; 
  result = (int)ObfInspector::inspector(arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_new_1ObfInspector(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  ObfInspector *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (ObfInspector *)new ObfInspector();
  *(ObfInspector **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_net_osmand_bridge_CoreOsmAndJNI_delete_1ObfInspector(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  ObfInspector *arg1 = (ObfInspector *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(ObfInspector **)&jarg1; 
  delete arg1;
}


#ifdef __cplusplus
}
#endif
