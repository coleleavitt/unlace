__int64 __fastcall sub_11E660(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, _QWORD *, _QWORD, _QWORD),
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v6; // ebx
  __m128i *v7; // rbp
  __int64 v9; // rdi
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9

  v6 = 0;
  if ( !a1 )
    return v6;
  v7 = *(__m128i **)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = v7[1].m128i_i64[1];
    if ( v9 )
      xmmword_241500(v9);
    if ( *(__int64 *)(a1 + 184) > 0 )
    {
      a2 = a1;
      sub_C3DE0((__int64)v7, a1, a3);
      v10 = sub_11E630(a1, a1, v16, v17, v18, v19);
      if ( v7[6].m128i_i8[7] )
        goto LABEL_8;
    }
    else
    {
      v10 = sub_11E630(a1, a2, (__int64)a3, a4, a5, a6);
      if ( v7[6].m128i_i8[7] )
        goto LABEL_8;
    }
    v6 = 0;
    if ( !v10 )
    {
LABEL_9:
      sub_11CB70(v7, a2, v11);
      return v6;
    }
LABEL_8:
    a2 = v10;
    v6 = sub_D42C0((__int64)v7, v10, v11, v12, v13, v14);
    goto LABEL_9;
  }
  sub_E8BB0(0x15u, "API called with finalized prepared statement");
  sub_E8BB0(
    0x15u,
    "%s at line %d of [%.10s]",
    "misuse",
    85859,
    "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
  return 21;
}
