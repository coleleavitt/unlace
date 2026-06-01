time_t __fastcall sub_10B60(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 *v8; // rbp
  _QWORD *v9; // r13
  __int64 *v10; // rdi
  const char *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 **v17; // r12
  __int64 plugin_instance; // rax
  __int64 v19; // rsi
  time_t *v20; // rbp
  time_t result; // rax
  __int64 v22; // rax
  struct _Unwind_Exception *v23; // rbx
  char v24; // [rsp+0h] [rbp-28h]

  v6 = *(_QWORD *)(a1 + 8);
  if ( !v6 )
  {
    v7 = qword_24798;
    *(_BYTE *)(a1 + 34) = 1;
    if ( *(_BYTE *)(v7 + 1153) )
      goto LABEL_11;
    v8 = (__int64 *)(*(__int64 (__fastcall **)(const char *))(v7 + 568))("sys");
    if ( !v8 )
      goto LABEL_11;
    v9 = (_QWORD *)operator new(8u);
    v10 = v8;
    v11 = "gettrace";
    v12 = (*(__int64 (__fastcall **)(__int64 *, const char *, _QWORD))(qword_24798 + 736))(v8, "gettrace", 0);
    v17 = *(__int64 ***)(a1 + 40);
    *v9 = v12;
    *(_QWORD *)(a1 + 40) = v9;
    if ( v17 )
    {
      v10 = *v17;
      if ( *v17 )
      {
        if ( *v10 <= 0 )
          goto LABEL_16;
        (*(void (**)(void))(qword_24798 + 984))();
      }
      LODWORD(v11) = 8;
      v10 = (__int64 *)v17;
      operator delete(v17, 8u);
    }
    if ( *v8 > 0 )
    {
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v8);
LABEL_11:
      plugin_instance = get_plugin_instance();
      (*(void (__fastcall **)(__int64 (__fastcall *)(), _QWORD))(plugin_instance + 488))(sub_10990, 0);
      v6 = *(_QWORD *)(a1 + 8);
      goto LABEL_12;
    }
    sub_6C20((__int64)v10, (int)v11, v13, v14, v15, v16, v24);
LABEL_16:
    v23 = (struct _Unwind_Exception *)sub_6C20((__int64)v10, (int)v11, v13, v14, v15, v16, v24);
    sub_6DF0(v8, (int)v11, v1, v2, v3, v4);
    _Unwind_Resume(v23);
  }
LABEL_12:
  v19 = *(_QWORD *)a1;
  if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v6 + 1) )
  {
    v22 = qvector_reserve();
    v6 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)a1 = v22;
    v19 = v22;
  }
  v20 = (time_t *)(v19 + 8 * v6);
  result = time(nullptr);
  *v20 = result;
  ++*(_QWORD *)(a1 + 8);
  return result;
}

