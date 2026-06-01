unsigned __int64 sub_119D0()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // r12
  int v9; // ebx
  const char *v10; // rdi
  __int64 v11; // rax
  const char *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rdi
  struct _Unwind_Exception *v19; // rbx
  char v20; // [rsp+0h] [rbp-88h]
  __int64 *v21; // [rsp+8h] [rbp-80h] BYREF
  char v22; // [rsp+10h] [rbp-78h]
  __int128 v23; // [rsp+18h] [rbp-70h]
  __int64 v24; // [rsp+28h] [rbp-60h]
  __int64 v25; // [rsp+30h] [rbp-58h]
  __int64 v26; // [rsp+38h] [rbp-50h]
  int v27; // [rsp+40h] [rbp-48h]
  unsigned __int64 v28; // [rsp+48h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v8 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(qword_24798 + 600))(0);
  if ( find_idc_gvar() )
  {
    v22 = 2;
    v9 = 1;
    v24 = 0;
    v25 = 48;
    v26 = 0;
    v27 = 0;
    v23 = 0;
    while ( !(unsigned int)get_idcv_attr() )
    {
      v10 = src;
      if ( *((_QWORD *)&v23 + 1) )
        v10 = (const char *)v23;
      v11 = (*(__int64 (__fastcall **)(const char *))(qword_24798 + 952))(v10);
      (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(qword_24798 + 592))(v8, v9, v11);
      qsnprintf();
      ++v9;
    }
    free_idcv();
  }
  v12 = "idc";
  PyW_TryImportModule(&v21, "idc");
  v17 = v21;
  if ( v21 )
  {
    v12 = "ARGV";
    (*(void (__fastcall **)(__int64 *, const char *, __int64 *))(qword_24798 + 800))(v21, "ARGV", v8);
    v17 = v21;
    if ( v21 )
    {
      if ( *v21 <= 0 )
        goto LABEL_17;
      (*(void (**)(void))(qword_24798 + 984))();
    }
  }
  if ( v8 )
  {
    if ( *v8 > 0 )
    {
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v8);
      return v28 - __readfsqword(0x28u);
    }
    sub_6C20((__int64)v17, (int)v12, v13, v14, v15, v16, v20);
LABEL_17:
    v19 = (struct _Unwind_Exception *)sub_6C20((__int64)v17, (int)v12, v13, v14, v15, v16, v20);
    sub_6DF0(v21, (int)v12, v0, v1, v2, v3);
    sub_6DF0(v8, (int)v12, v4, v5, v6, v7);
    _Unwind_Resume(v19);
  }
  return v28 - __readfsqword(0x28u);
}

