__int64 **__fastcall PyW_UvalVecToPyList(__int64 **a1, _QWORD *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // r12
  __int64 v7; // r13
  __int64 *v8; // rbp
  __int64 i; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _Unwind_Exception *v16; // rbx
  char v17; // [rsp+0h] [rbp-38h]

  v6 = a2;
  v7 = a2[1];
  v8 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(qword_24798 + 600))(v7);
  if ( v7 )
  {
    for ( i = 0; i != v7; ++i )
    {
      v10 = (*(__int64 (__fastcall **)(char *, _QWORD))(qword_24798 + 968))("K", *(_QWORD *)(*v6 + 8 * i));
      LODWORD(a2) = i;
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(qword_24798 + 608))(v8, i, v10);
    }
  }
  *a1 = v8;
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 1008))(v8);
    if ( *v8 <= 0 )
    {
      v16 = (struct _Unwind_Exception *)sub_6C20((__int64)v8, (int)a2, v11, v12, v13, v14, v17);
      sub_6DF0(v8, (int)a2, v2, v3, v4, v5);
      _Unwind_Resume(v16);
    }
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v8);
  }
  return a1;
}

