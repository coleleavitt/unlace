unsigned __int64 __fastcall sub_1F86C0(__int64 a1, __m128 a2)
{
  unsigned __int64 result; // rax
  __int64 *v3; // r12
  signed __int64 v4; // rbx
  __int64 *v5; // rbp
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 *v8; // rbx
  __int64 v9; // rdi

  result = *(_QWORD *)(a1 + 64);
  v3 = *(__int64 **)(a1 + 56);
  v4 = 96 * result;
  v5 = &v3[12 * result];
  if ( v3 != v5 )
  {
    v6 = 0xAAAAAAAAAAAAAAABLL * (v4 >> 5);
    if ( v6 )
    {
      _BitScanReverse64(&v7, v6);
      sub_1F7BC0(*(_QWORD *)(a1 + 56), (__int64)v5, 2LL * (int)v7, a2);
      if ( v4 > 1536 )
      {
        v8 = v3 + 192;
        sub_1F30F0(v3, v3 + 192, a2);
        do
        {
          v9 = (__int64)v8;
          v8 += 12;
          result = sub_1F2CC0(v9, *(double *)a2.m128_u64);
        }
        while ( v5 != v8 );
        return result;
      }
    }
    else
    {
      sub_1F7BC0(*(_QWORD *)(a1 + 56), (__int64)v5, -2, a2);
    }
    return sub_1F30F0(v3, v5, a2);
  }
  return result;
}

