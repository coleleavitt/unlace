__int64 *__fastcall try_create_swig_wrapper(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  bool v7; // zf
  const char *v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 *v11; // r12
  __int64 *v12; // rbp
  __int64 *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  struct _Unwind_Exception *v23; // rbp
  char v24; // [rsp-8h] [rbp-48h]
  __int64 *v25; // [rsp+0h] [rbp-40h] BYREF
  const char *v26; // [rsp+8h] [rbp-38h] BYREF
  __int128 v27; // [rsp+10h] [rbp-30h]
  unsigned __int64 v28; // [rsp+20h] [rbp-20h]

  v28 = __readfsqword(0x28u);
  v27 = 0;
  v26 = nullptr;
  sub_14130((__int64 *)&v26);
  v7 = (_QWORD)v27 == 0;
  *a1 = 0;
  v8 = src;
  if ( !v7 )
    v8 = v26;
  v9 = *a2;
  PyW_TryGetAttrString(&v25, *a2, v8);
  if ( v25 )
  {
    set_interruptible_state(0, v9);
    v10 = (*(__int64 (__fastcall **)(__int64 *, const char *, __int64))(qword_24798 + 720))(v25, "(K)", a4);
    v11 = (__int64 *)*a1;
    v12 = (__int64 *)v10;
    *a1 = v10;
    if ( v10 )
    {
      v13 = (__int64 *)v10;
      (*(void (__fastcall **)(__int64))(qword_24798 + 1008))(v10);
      if ( v11 )
      {
        v13 = v11;
        (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v11);
      }
      if ( *v12 <= 0 )
        goto LABEL_18;
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v12);
    }
    else if ( v11 )
    {
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v11);
    }
    set_interruptible_state(1, "(K)");
    v13 = v25;
    if ( !v25 )
      goto LABEL_12;
    if ( *v25 > 0 )
    {
      (*(void (**)(void))(qword_24798 + 984))();
      goto LABEL_12;
    }
    sub_6C20((__int64)v25, (int)"(K)", v18, v19, v20, v21, v24);
LABEL_18:
    v23 = (struct _Unwind_Exception *)sub_6C20((__int64)v13, (int)"(K)", v14, v15, v16, v17, v24);
    if ( v26 )
    {
      *(_QWORD *)&v27 = 0;
      qfree();
    }
    _Unwind_Resume(v23);
  }
LABEL_12:
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree();
  }
  return a1;
}

