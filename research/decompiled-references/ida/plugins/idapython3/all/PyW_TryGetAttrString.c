__int64 **__fastcall PyW_TryGetAttrString(__int64 **a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v10; // esi
  __int64 v11; // rax
  __int64 *v12; // r12
  __int64 *v13; // rbp
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _Unwind_Exception *v20; // r12
  char v21; // [rsp+0h] [rbp-18h]

  *a1 = nullptr;
  if ( !(*(unsigned int (__fastcall **)(__int64, __int64))(qword_24798 + 768))(a2, a3) )
    return a1;
  v10 = a3;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64))(qword_24798 + 760))(a2, a3);
  v12 = *a1;
  v13 = (__int64 *)v11;
  *a1 = (__int64 *)v11;
  if ( v11 )
  {
    v14 = v11;
    (*(void (__fastcall **)(__int64))(qword_24798 + 1008))(v11);
    if ( v12 )
    {
      v14 = (__int64)v12;
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v12);
    }
    if ( *v13 <= 0 )
    {
      v20 = (struct _Unwind_Exception *)sub_6C20(v14, v10, v15, v16, v17, v18, v21);
      sub_6DF0(*a1, v10, v3, v4, v5, v6);
      _Unwind_Resume(v20);
    }
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v13);
    return a1;
  }
  if ( !v12 )
    return a1;
  (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v12);
  return a1;
}

