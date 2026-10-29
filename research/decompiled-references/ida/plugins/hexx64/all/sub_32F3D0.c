__int64 __fastcall sub_32F3D0(__int64 a1, __int64 a2, double a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  char v9; // dl
  __m128i v10; // kr00_16
  __int64 *v11; // r13
  unsigned int v12; // [rsp+Ch] [rbp-6Ch]
  __int64 v13; // [rsp+18h] [rbp-60h] BYREF
  __m128i v14; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+30h] [rbp-48h] BYREF
  __int128 v16; // [rsp+38h] [rbp-40h]
  unsigned __int64 v17; // [rsp+48h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 4) == -1 || !(unsigned __int8)sub_32F330(a2, &v13, a3) )
    return 0;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD **)(a1 + 48);
  v7 = *(_QWORD *)(v5 + 1440) + v13;
  v8 = *(_QWORD *)(v5 + 1496);
  v14.m128i_i64[1] = *(int *)(a2 + 4);
  v14.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)(v8 + 24) + 16LL) & v7;
  v9 = sub_317E70(v6, &v14, 0);
  result = 0;
  if ( v9 )
  {
    v10 = v14;
    v15 = 0;
    v11 = *(__int64 **)(a1 + 48);
    v16 = 0;
    if ( (unsigned __int64)(v14.m128i_i64[0] + v14.m128i_i64[1] - 1) >= v14.m128i_i64[0] )
    {
      v15 = qvector_reserve((__int64)&v15, 0, 1, 16);
      *(__m128i *)(v15 + 16 * v16) = _mm_unpacklo_epi64((__m128i)v10.m128i_u64[0], (__m128i)v10.m128i_u64[1]);
      *(_QWORD *)&v16 = v16 + 1;
    }
    result = (unsigned __int8)sub_317F40(v11, (__int64)&v15) ^ 1u;
    if ( v15 )
    {
      v12 = result;
      *(_QWORD *)&v16 = 0;
      qfree(v15);
      return v12;
    }
  }
  return result;
}

