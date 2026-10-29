__int64 **__fastcall sub_12260(__int64 **a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 *v21; // rdi
  __int64 *v22; // rbp
  __int64 *v23; // rdi
  struct _Unwind_Exception *v24; // rbp
  char v25; // [rsp+0h] [rbp-38h]
  __int64 *v26; // [rsp+8h] [rbp-30h] BYREF
  __int64 *v27[5]; // [rsp+10h] [rbp-28h] BYREF

  v27[1] = (__int64 *)__readfsqword(0x28u);
  *a1 = nullptr;
  if ( !*(_BYTE *)(a2 + 184) )
    return a1;
  PyW_TryImportModule(&v26, "sys");
  v16 = (int)v26;
  if ( !v26 )
    return a1;
  PyW_TryGetAttrString(v27, v26, "displayhook");
  v21 = v27[0];
  v22 = *a1;
  *a1 = v27[0];
  if ( v21 )
  {
    (*(void (**)(void))(qword_24798 + 1008))();
    if ( !v22 )
      goto LABEL_7;
    goto LABEL_6;
  }
  if ( v22 )
  {
LABEL_6:
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v22);
LABEL_7:
    v23 = v27[0];
    if ( v27[0] )
    {
      if ( *v27[0] <= 0 )
        goto LABEL_16;
      (*(void (**)(void))(qword_24798 + 984))();
    }
  }
  v23 = v26;
  if ( v26 )
  {
    if ( *v26 > 0 )
    {
      (*(void (**)(void))(qword_24798 + 984))();
      return a1;
    }
    sub_6C20((__int64)v26, v16, v17, v18, v19, v20, v25);
LABEL_16:
    v24 = (struct _Unwind_Exception *)sub_6C20((__int64)v23, v16, v17, v18, v19, v20, v25);
    sub_6DF0(v27[0], v16, v2, v3, v4, v5);
    sub_6DF0(v26, v16, v6, v7, v8, v9);
    sub_6DF0(*a1, v16, v10, v11, v12, v13);
    _Unwind_Resume(v24);
  }
  return a1;
}

