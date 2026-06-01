__int64 __fastcall sub_283B00(__int64 a1, __int64 a2, __m128 a3)
{
  int v3; // eax
  __int64 v4; // rbp
  unsigned int v5; // r13d
  unsigned __int64 v6; // r14
  __int64 v7; // rbx
  int v8; // eax
  __int64 v10; // rax

  v3 = *(_DWORD *)(a1 + 24) - 1;
  if ( v3 < 0 )
  {
    return 0;
  }
  else
  {
    v4 = 8LL * v3;
    v5 = 0;
    v6 = 8 * (v3 - (unsigned __int64)(unsigned int)v3);
    while ( 1 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + v4);
      v8 = *(_DWORD *)(v7 + 8);
      if ( v8 > 69 )
        break;
      if ( v8 == 48 )
        return v5;
      v5 |= sub_281F10(
              *(_QWORD *)(*(_QWORD *)(a1 + 16) + v4),
              *(_QWORD *)(a2 + 96),
              0,
              *(_QWORD *)(*(_QWORD *)(a1 + 16) + v4),
              a3);
      sub_2441C0(v7, a2, 0, *(double *)a3.m128_u64);
      if ( v4 == v6 )
        return v5;
      v4 -= 8;
    }
    if ( v8 == 73 )
    {
      v10 = sub_2418B0(*(_QWORD *)(v7 + 24));
      if ( v10 != -1 )
        *(_QWORD *)v7 = v10;
    }
  }
  return v5;
}

