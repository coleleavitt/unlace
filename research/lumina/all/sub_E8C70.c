__int64 __fastcall sub_E8C70(signed int a1, __int64 *a2, __int64 *a3, int a4)
{
  __int64 v4; // rbx
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rcx

  if ( (unsigned int)a1 > 9 )
  {
    sub_E8BB0(
      0x15u,
      "%s at line %d of [%.10s]",
      "misuse",
      22957,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    return 21;
  }
  else
  {
    v4 = a1;
    v7 = xmmword_2424A0;
    if ( byte_1BEE00[a1] )
      v7 = qword_242218;
    if ( v7 )
    {
      xmmword_241500(v7);
      v8 = qword_2424E0[a1];
      v9 = v4 + 10;
      v10 = qword_2424E0[v9];
      *a2 = v8;
      *a3 = v10;
      if ( a4 )
        qword_2424E0[v9] = v8;
      xmmword_241510(v7, a2, v10);
      return 0;
    }
    else
    {
      v12 = qword_2424E0[a1];
      v13 = a1 + 10LL;
      v14 = qword_2424E0[v13];
      *a2 = v12;
      *a3 = v14;
      if ( a4 )
        qword_2424E0[v13] = v12;
      return 0;
    }
  }
}
