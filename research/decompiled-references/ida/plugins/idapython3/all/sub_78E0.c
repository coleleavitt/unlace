__int64 *__fastcall sub_78E0(__int64 *a1, int a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  char *v7; // rsi
  __int64 v8; // rax
  __int64 *v9; // rbp
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _Unwind_Exception *v16; // rbx
  char v17; // [rsp+0h] [rbp-18h]

  if ( qword_24778 )
  {
    v7 = off_23BF0[a2];
    v8 = (*(__int64 (__fastcall **)(__int64, char *))(qword_24798 + 760))(qword_24778, v7);
    *a1 = v8;
    v9 = (__int64 *)v8;
    if ( v8 )
    {
      v10 = v8;
      (*(void (__fastcall **)(__int64))(qword_24798 + 1008))(v8);
      if ( *v9 <= 0 )
      {
        v16 = (struct _Unwind_Exception *)sub_6C20(v10, (int)v7, v11, v12, v13, v14, v17);
        sub_6DF0(v9, (int)v7, v2, v3, v4, v5);
        _Unwind_Resume(v16);
      }
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v9);
    }
    return a1;
  }
  else
  {
    *a1 = 0;
    return a1;
  }
}

