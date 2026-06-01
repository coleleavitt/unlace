__int64 *__fastcall PyW_TryImportModule(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // rax
  __int64 *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _Unwind_Exception *v15; // rbp
  char v16; // [rsp+0h] [rbp-18h]

  v7 = (*(__int64 (__fastcall **)(__int64))(qword_24798 + 568))(a2);
  v8 = (__int64 *)v7;
  if ( v7 )
  {
    *a1 = v7;
    v9 = v7;
    (*(void (__fastcall **)(__int64))(qword_24798 + 1008))(v7);
    if ( *v8 <= 0 )
    {
      v15 = (struct _Unwind_Exception *)sub_6C20(v9, a2, v10, v11, v12, v13, v16);
      sub_6DF0(v8, a2, v2, v3, v4, v5);
      _Unwind_Resume(v15);
    }
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v8);
    return a1;
  }
  else
  {
    if ( (*(__int64 (**)(void))(qword_24798 + 424))() )
      (*(void (**)(void))(qword_24798 + 400))();
    *a1 = 0;
    return a1;
  }
}

