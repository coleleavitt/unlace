__int64 sub_12AE0()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // r12
  size_t v14; // r14
  char *v15; // rdi
  char *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r12
  unsigned __int64 v19; // r14
  const char *v20; // r12
  __int64 plugin_instance; // rax
  __int64 v22; // rax
  __int64 *v23; // r13
  __int64 v24; // rdi
  int v25; // esi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 *v30; // r12
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  struct _Unwind_Exception *v35; // rbx
  __int64 v36; // [rsp+0h] [rbp-1058h]
  char *v37; // [rsp+0h] [rbp-1058h]
  unsigned __int64 v38; // [rsp+8h] [rbp-1050h]
  char v39[4104]; // [rsp+20h] [rbp-1038h] BYREF
  unsigned __int64 v40; // [rsp+1028h] [rbp-30h]

  v40 = __readfsqword(0x28u);
  qmakepath();
  v8 = (*(__int64 (__fastcall **)(const char *, __int64))(qword_24798 + 560))("__main__", 4096);
  v9 = v8;
  if ( v8 )
    v9 = (*(__int64 (__fastcall **)(__int64))(qword_24798 + 696))(v8);
  v10 = qfopen();
  if ( !v10 )
  {
    LODWORD(v9) = 0;
    return (unsigned int)v9;
  }
  v37 = nullptr;
  v38 = 0;
  v11 = qfsize();
  v12 = v11;
  if ( v11 )
  {
    v14 = v11 + 1;
    if ( v11 != -1 )
    {
      v37 = (char *)qvector_reserve();
      memset(v37, 0, v14);
      v38 = v14;
    }
    v15 = (char *)v10;
    v37[v12] = 0;
    v16 = v37;
    v17 = qfread();
    v18 = v17;
    if ( v17 > 0 )
    {
      v19 = v17 + 1;
      if ( v38 < v17 + 1 )
      {
        v37 = (char *)qvector_reserve();
        v15 = &v37[v38];
        v16 = nullptr;
        memset(&v37[v38], 0, v19 - v38);
        v38 = v19;
      }
      else if ( v19 != v38 )
      {
        v38 = v17 + 1;
      }
      v37[v18] = 0;
      v20 = src;
      if ( v38 )
        v20 = v37;
      plugin_instance = get_plugin_instance(v15, v16);
      v22 = (*(__int64 (__fastcall **)(const char *, char *, __int64, _QWORD, __int64))(plugin_instance + 976))(
              v20,
              v39,
              257,
              0,
              0xFFFFFFFFLL);
      v23 = (__int64 *)v22;
      if ( v22 )
      {
        v24 = v22;
        v25 = v9;
        v30 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64, __int64))(qword_24798 + 456))(v22, v9, v9);
        if ( v30 )
        {
          LOBYTE(v9) = (*(__int64 (**)(void))(qword_24798 + 424))() == 0;
          if ( *v30 <= 0 )
            goto LABEL_28;
          v24 = (__int64)v30;
          (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v30);
        }
        else
        {
          LODWORD(v9) = 0;
        }
        if ( *v23 > 0 )
        {
          (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v23);
          goto LABEL_6;
        }
        sub_6C20(v24, v25, v26, v27, v28, v29, (char)v37);
LABEL_28:
        v35 = (struct _Unwind_Exception *)sub_6C20(v24, v25, v31, v32, v33, v34, (char)v37);
        sub_6DF0(v30, v25, v0, v1, v2, v3);
        sub_6DF0(v23, v25, v4, v5, v6, v7);
        if ( v36 )
          qfree();
        qfclose();
        _Unwind_Resume(v35);
      }
    }
  }
  LODWORD(v9) = 0;
LABEL_6:
  if ( v37 )
    qfree();
  qfclose();
  return (unsigned int)v9;
}

