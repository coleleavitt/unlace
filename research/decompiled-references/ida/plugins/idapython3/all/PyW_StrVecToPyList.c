__int64 **__fastcall PyW_StrVecToPyList(__int64 **a1, _QWORD *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *v7; // r12
  __int64 v8; // r13
  __int64 *v9; // rbp
  __int64 i; // rbx
  const char *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _Unwind_Exception *v20; // rbx
  char v21; // [rsp+0h] [rbp-38h]

  v7 = a2;
  v8 = a2[1];
  v9 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(qword_24798 + 600))(v8);
  if ( v8 )
  {
    for ( i = 0; i != v8; ++i )
    {
      a2 = nullptr;
      v11 = src;
      v12 = *v7 + 24 * i;
      v13 = *(_QWORD *)(v12 + 8);
      if ( v13 )
      {
        v11 = *(const char **)v12;
        a2 = (_QWORD *)(v13 - 1);
      }
      v14 = (*(__int64 (__fastcall **)(const char *, _QWORD *))(qword_24798 + 960))(v11, a2);
      LODWORD(a2) = i;
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(qword_24798 + 608))(v9, i, v14);
    }
  }
  *a1 = v9;
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 1008))(v9);
    if ( *v9 <= 0 )
    {
      v20 = (struct _Unwind_Exception *)sub_6C20((__int64)v9, (int)a2, v15, v16, v17, v18, v21);
      sub_6DF0(v9, (int)a2, v2, v3, v4, v5);
      _Unwind_Resume(v20);
    }
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v9);
  }
  return a1;
}

