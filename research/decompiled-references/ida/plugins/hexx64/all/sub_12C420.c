char __fastcall sub_12C420(
        unsigned __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __m128i a7)
{
  __int64 v9; // r13
  __int64 v10; // r15
  int v11; // eax
  int v12; // edx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // r12d
  int v19; // r13d
  __int64 v20; // [rsp+8h] [rbp-40h]

  if ( !(a6 | a5) )
  {
    if ( !under_debugger )
      sub_383060(0xCD92u, *(double *)a7.m128i_i64);
    BUG();
  }
  if ( a5 )
    v20 = *(_QWORD *)(a5 + 24);
  else
    v20 = *(_QWORD *)(a6 + 24);
  v9 = *a3;
  v10 = *a4;
  v11 = *(_DWORD *)(*a3 + 4);
  v12 = *(_DWORD *)(*a4 + 4);
  if ( v11 <= v12 )
  {
    if ( v11 < v12 )
    {
      if ( v10 != a2 )
      {
        sub_11CDA0(a2);
        sub_123A40(a2, (unsigned __int8 *)v10, v16, v17);
        v11 = *(_DWORD *)(v9 + 4);
      }
      if ( !(unsigned __int8)sub_12AB50((unsigned int **)a2, a1, v11, 0, a7) )
      {
        v18 = *(_DWORD *)(v9 + 4);
        if ( v18 < *(_DWORD *)(a2 + 4)
          && v18 > 0
          && !(unsigned __int8)sub_1272B0(a2, a1, v18, 0, *(double *)a7.m128i_i64) )
        {
          sub_1207E0((char *)a2, a1, 10, v20, v18, a7);
        }
      }
      *a4 = a2;
      v10 = a2;
    }
  }
  else
  {
    if ( v9 != a2 )
    {
      sub_11CDA0(a2);
      sub_123A40(a2, (unsigned __int8 *)v9, v13, v14);
      v12 = *(_DWORD *)(v10 + 4);
    }
    if ( !(unsigned __int8)sub_12AB50((unsigned int **)a2, a1, v12, 0, a7) )
    {
      v19 = *(_DWORD *)(v10 + 4);
      if ( v19 < *(_DWORD *)(a2 + 4) && v19 > 0 && !(unsigned __int8)sub_1272B0(a2, a1, v19, 0, *(double *)a7.m128i_i64) )
        sub_1207E0((char *)a2, a1, 10, v20, v19, a7);
    }
    *a3 = a2;
    v9 = a2;
  }
  return sub_1255D0((unsigned __int8 *)v9, (__int64)a1, v10, 1, *(double *)a7.m128i_i64);
}

