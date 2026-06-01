__int64 __fastcall py_customidamemo_t_bind(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 result; // rax
  const char *v15; // rsi
  __int64 *v16; // r13
  __int64 v17; // rax
  const char *v18; // r14
  const char *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdi
  struct _Unwind_Exception *v35; // rbx
  char v36; // [rsp-28h] [rbp-28h]

  result = 0;
  if ( !*(_QWORD *)(a1 + 16) && !*(_QWORD *)(a1 + 24) )
  {
    v15 = "_this";
    v16 = (__int64 *)(*(__int64 (__fastcall **)(__int64, const char *, _QWORD))(qword_24798 + 352))(a1, "$valid$", 0);
    (*(void (__fastcall **)(__int64 *, const char *, __int64 *))(qword_24798 + 800))(a2, "_this", v16);
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 1008))(a2);
      v17 = qword_24798;
      v18 = *(const char **)(a1 + 16);
      v19 = (const char *)a2;
      *(_QWORD *)(a1 + 16) = a2;
      (*(void (__fastcall **)(__int64 *))(v17 + 1008))(a2);
      if ( v18 )
      {
        v19 = v18;
        (*(void (__fastcall **)(const char *))(qword_24798 + 984))(v18);
      }
      if ( *a2 <= 0 )
      {
LABEL_21:
        v35 = (struct _Unwind_Exception *)sub_6C20((__int64)v19, (int)v15, v20, v21, v22, v23, v36);
        sub_6DF0(a2, (int)v15, v3, v4, v5, v6);
        sub_6DF0(v16, (int)v15, v7, v8, v9, v10);
        _Unwind_Resume(v35);
      }
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(a2);
    }
    else
    {
      v34 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0;
      if ( v34 )
        (*(void (**)(void))(qword_24798 + 984))();
    }
    v24 = qword_24798;
    *(_QWORD *)(a1 + 24) = a3;
    v15 = "_OnBind";
    v25 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, const char *, const char *, _QWORD))(v24 + 736))(
                       a2,
                       "_OnBind",
                       "O",
                       *(_QWORD *)(v24 + 1144));
    v19 = (const char *)v25;
    if ( v25 )
    {
      if ( *v25 <= 0 )
      {
LABEL_20:
        sub_6C20((__int64)v19, (int)v15, v26, v27, v28, v29, v36);
        goto LABEL_21;
      }
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v25);
    }
    else if ( (*(__int64 (**)(void))(qword_24798 + 424))() )
    {
      LODWORD(v15) = (_DWORD)a2;
      v19 = "WARNING: Couldn't bind form object at %p:\n";
      sub_7F30((__int64)"WARNING: Couldn't bind form object at %p:\n", a2);
      (*(void (**)(void))(qword_24798 + 432))();
    }
    if ( !v16 )
      return 1;
    if ( *v16 > 0 )
    {
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v16);
      return 1;
    }
    sub_6C20((__int64)v19, (int)v15, v30, v31, v32, v33, v36);
    goto LABEL_20;
  }
  return result;
}

