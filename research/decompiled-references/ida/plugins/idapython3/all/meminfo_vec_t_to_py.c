__int64 __fastcall meminfo_vec_t_to_py(__int64 **a1)
{
  __int64 v1; // rax
  __int64 *v2; // rbx
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 v5; // rbp
  const char *v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  const char *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v15; // [rsp-8h] [rbp-40h]

  v1 = (*(__int64 (__fastcall **)(__int64 *))(qword_24798 + 600))(a1[1]);
  v2 = *a1;
  v3 = v1;
  v4 = (__int64)&(*a1)[10 * (_QWORD)a1[1]];
  if ( (__int64 *)v4 != *a1 )
  {
    v5 = 0;
    do
    {
      v6 = src;
      v7 = v2[8];
      v8 = *((unsigned __int8 *)v2 + 72);
      if ( v2[6] )
        v6 = (const char *)v2[5];
      v9 = src;
      if ( v2[3] )
        v9 = (const char *)v2[2];
      v10 = v2[1];
      v11 = *v2;
      v15 = *((unsigned __int8 *)v2 + 73);
      v2 += 10;
      v12 = (*(__int64 (__fastcall **)(const char *, __int64, __int64, const char *, const char *, __int64, __int64, __int64))(qword_24798 + 968))(
              "(KKssKII)",
              v11,
              v10,
              v9,
              v6,
              v7,
              v8,
              v15);
      v13 = v5++;
      (*(void (__fastcall **)(__int64, __int64, __int64))(qword_24798 + 608))(v3, v13, v12);
    }
    while ( (__int64 *)v4 != v2 );
  }
  return v3;
}

