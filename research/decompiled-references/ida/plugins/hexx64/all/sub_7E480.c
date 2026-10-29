__int64 __fastcall sub_7E480(unsigned __int64 *a1, _QWORD *a2, __m128 a3)
{
  int v3; // eax
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 i; // r13
  __int64 v11; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __m128i v16; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( *a2 >= a2[1] )
    sub_7A510(*(double *)a3.m128_u64);
  v3 = unpack_dd();
  v4 = v3;
  if ( a2[1] - *a2 < (unsigned __int64)v3 || v3 < 0 )
    return 0;
  v5 = a1[1];
  v6 = *a1;
  if ( v5 != v4 )
  {
    a3.m128_u64[0] = 0;
    v16 = 0;
    if ( v4 >= v5 )
    {
      v7 = a1[2];
      if ( (unsigned __int64)&v16 < v6 || (unsigned __int64)&v16 >= v6 + 16 * v7 )
      {
        if ( v7 < v4 )
        {
          v14 = qvector_reserve((__int64)a1, v6, v4, 16);
          *a1 = v14;
          v6 = v14;
          v5 = a1[1];
        }
        if ( v5 < v4 )
        {
          a3 = (__m128)_mm_load_si128(&v16);
          do
          {
            v8 = v5++;
            *(__m128 *)(v6 + 16 * v8) = a3;
            v6 = *a1;
          }
          while ( v4 != v5 );
        }
      }
      else
      {
        if ( v7 < v4 )
        {
          v15 = qvector_reserve((__int64)a1, v6, v4, 16);
          *a1 = v15;
          v6 = v15;
          v5 = a1[1];
        }
        if ( v5 < v4 )
        {
          a3.m128_u64[0] = 0;
          do
          {
            v13 = v5++;
            *(_OWORD *)(v6 + 16 * v13) = 0;
            v6 = *a1;
          }
          while ( v4 != v5 );
        }
      }
    }
    a1[1] = v4;
  }
  v9 = 0;
  for ( i = v6 + 16 * v4; i != v6; v9 = *(_QWORD *)(v6 - 16) + v11 )
  {
    v6 += 16LL;
    *(_QWORD *)(v6 - 16) = v9 + sub_7CD40((__int64)a2, *(double *)a3.m128_u64);
    v11 = sub_7CD40((__int64)a2, *(double *)a3.m128_u64);
    *(_QWORD *)(v6 - 8) = v11;
  }
  return 1;
}

