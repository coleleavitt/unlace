__int64 __fastcall sub_1AD80(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int16 v6; // ax
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r14
  __int64 *v9; // rbp
  __int64 *i; // r12
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 *v15; // rsi
  __int64 *v16; // rdi
  size_t v17; // rdx
  __int64 v18; // rax

  *a2 += *a2 < a2[1];
  *(_DWORD *)(a1 + 24) = unpack_dd(a2);
  v6 = unpack_dw(a2, a2[1]);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = v6;
  if ( v7 < v6 )
  {
    v15 = *(__int64 **)a1;
    if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)v6 )
    {
      v18 = qvector_reserve(a1, v15, v6, 32);
      v7 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)a1 = v18;
      v15 = (__int64 *)v18;
    }
    v16 = &v15[4 * v7];
    v17 = 32 * (v8 - v7);
    v7 = v8;
    memset(v16, 0, v17);
    *(_QWORD *)(a1 + 8) = v8;
  }
  else if ( v6 != v7 )
  {
    *(_QWORD *)(a1 + 8) = v6;
    v7 = v6;
  }
  v9 = *(__int64 **)a1;
  for ( i = &v9[4 * v7]; i != v9; *((_DWORD *)v9 - 2) = (unsigned __int16)unpack_dw(a2, a2[1]) )
  {
    if ( (unsigned __int8)is_cvt64() )
    {
      v13 = (unsigned int)a3 + (unsigned int)unpack_dd(a2);
      if ( v13 == 0xFFFFFFFFLL )
        v13 = -1;
    }
    else
    {
      v13 = a3 + unpack_dq(a2, a2[1]);
    }
    *v9 = v13;
    if ( (unsigned __int8)is_cvt64() )
      v11 = (int)unpack_dd(a2);
    else
      v11 = unpack_dq(a2, a2[1]);
    v9[1] = -v11;
    if ( (unsigned __int8)is_cvt64() )
    {
      v12 = (unsigned int)unpack_dd(a2);
      if ( (unsigned int)v12 == 0xFFFFFFFFLL )
        v12 = -1;
    }
    else
    {
      v12 = unpack_dq(a2, a2[1]);
    }
    v9[2] = v12;
    v9 += 4;
  }
  return 1;
}
