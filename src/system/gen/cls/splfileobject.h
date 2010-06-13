/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#ifndef __GENERATED_cls_splfileobject_h__
#define __GENERATED_cls_splfileobject_h__

#include <cls/splfileinfo.h>
#include <cls/recursiveiterator.h>
#include <cls/traversable.h>
#include <cls/iterator.h>
#include <cls/seekableiterator.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/splfile.php line 120 */
class c_splfileobject : public c_splfileinfo {
  BEGIN_CLASS_MAP(splfileobject)
    PARENT_CLASS(iterator)
    PARENT_CLASS(recursiveiterator)
    PARENT_CLASS(seekableiterator)
    PARENT_CLASS(splfileinfo)
    PARENT_CLASS(traversable)
  END_CLASS_MAP(splfileobject)
  DECLARE_CLASS_COMMON(splfileobject, SplFileObject, splfileinfo)
  DECLARE_INVOKE_EX(splfileobject, splfileinfo)

  // DECLARE_STATIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT_splfileobject 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GET_splfileobject 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_splfileobject 1
  static Variant os_constant(const char *s);

  // DECLARE_INSTANCE_PROP_OPS
  public:
  virtual bool o_exists(CStrRef s, int64 hash,
                        const char *context = NULL) const;
  bool o_existsPrivate(CStrRef s, int64 hash) const;
  virtual void o_get(Array &props) const;
  virtual Variant o_get(CStrRef s, int64 hash, bool error = true,
                        const char *context = NULL);
  Variant o_getPrivate(CStrRef s, int64 hash, bool error = true);
  virtual Variant o_set(CStrRef s, int64 hash, CVarRef v,
                        bool forInit = false,
                        const char *context = NULL);
  Variant o_setPrivate(CStrRef s, int64 hash, CVarRef v, bool forInit);
  virtual Variant &o_lval(CStrRef s, int64 hash,
                          const char *context = NULL);
  Variant &o_lvalPrivate(CStrRef s, int64 hash);

  // DECLARE_INSTANCE_PUBLIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_exists_PUBLIC_splfileobject 1
  #define OMIT_JUMP_TABLE_CLASS_get_PUBLIC_splfileobject 1
  #define OMIT_JUMP_TABLE_CLASS_set_PUBLIC_splfileobject 1
  #define OMIT_JUMP_TABLE_CLASS_lval_PUBLIC_splfileobject 1

  // DECLARE_COMMON_INVOKE
  #define OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_splfileobject 1
  virtual Variant o_invoke(const char *s, CArrRef ps, int64 h,
                           bool f = true);
  virtual Variant o_invoke_few_args(const char *s, int64 h,
                                    int count,
                                    INVOKE_FEW_ARGS_DECL_ARGS);

  public:
  DECLARE_INVOKES_FROM_EVAL
  void init();
  public: void t___construct(Variant v_filename, Variant v_open_mode = "r", Variant v_use_include_path = false, Variant v_context = null);
  public: c_splfileobject *create(Variant v_filename, Variant v_open_mode = "r", Variant v_use_include_path = false, Variant v_context = null);
  public: ObjectData *dynCreate(CArrRef params, bool init = true);
  public: void dynConstruct(CArrRef params);
  public: void dynConstructFromEval(Eval::VariableEnvironment &env, const Eval::FunctionCallExpression *call);
  public: Variant t_current();
  public: bool t_eof();
  public: bool t_fflush();
  public: String t_fgetc();
  public: Variant t_fgetcsv(CVarRef v_delimiter = ",", CVarRef v_enclosure = "\"", CVarRef v_escape = "\\");
  public: String t_fgets();
  public: String t_fgetss(CVarRef v_allowable_tags);
  public: bool t_flock(CVarRef v_operation, Variant v_wouldblock);
  public: int64 t_fpassthru();
  public: Variant t_fscanf(CVarRef v_format);
  public: int64 t_fseek(CVarRef v_offset, CVarRef v_whence);
  public: Variant t_fstat();
  public: int64 t_ftell();
  public: bool t_ftruncate(CVarRef v_size);
  public: int64 t_fwrite(CVarRef v_str, CVarRef v_length);
  public: Variant t_getchildren();
  public: Variant t_getcsvcontrol();
  public: int64 t_getflags();
  public: int64 t_getmaxlinelen();
  public: bool t_haschildren();
  public: int64 t_key();
  public: Variant t_next();
  public: Variant t_rewind();
  public: Variant t_seek(CVarRef v_line_pos);
  public: Variant t_setcsvcontrol(CVarRef v_delimiter = ",", CVarRef v_enclosure = "\"", CVarRef v_escape = "\\");
  public: Variant t_setflags(CVarRef v_flags);
  public: Variant t_setmaxlinelen(CVarRef v_max_len);
  public: bool t_valid();
};

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_splfileobject_h__
