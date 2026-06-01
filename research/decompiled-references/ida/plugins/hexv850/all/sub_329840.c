__int64 __fastcall sub_329840(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  char v8; // dl
  __m128i v9; // kr00_16
  __int64 *v10; // r13
  unsigned int v11; // [rsp+Ch] [rbp-6Ch]
  __int64 v12; // [rsp+18h] [rbp-60h] BYREF
  __m128i v13; // [rsp+20h] [rbp-58h] BYREF
  __int64 v14; // [rsp+30h] [rbp-48h] BYREF
  __int128 v15; // [rsp+38h] [rbp-40h]
  unsigned __int64 v16; // [rsp+48h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 4) == -1 || !(unsigned __int8)sub_3297A0(a2, &v12) )
    return 0;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD **)(a1 + 48);
  v6 = *(_QWORD *)(v4 + 1440) + v12;
  v7 = *(_QWORD *)(v4 + 1496);
  v13.m128i_i64[1] = *(int *)(a2 + 4);
  v13.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 16LL) & v6;
  v8 = sub_3125B0(v5, &v13, 0);
  result = 0;
  if ( v8 )
  {
    v9 = v13;
    v14 = 0;
    v10 = *(__int64 **)(a1 + 48);
    v15 = 0;
    if ( (unsigned __int64)(v13.m128i_i64[0] + v13.m128i_i64[1] - 1) >= v13.m128i_i64[0] )
    {
      v14 = qvector_reserve();
      *(__m128i *)(v14 + 16 * v15) = _mm_unpacklo_epi64((__m128i)v9.m128i_u64[0], (__m128i)v9.m128i_u64[1]);
      *(_QWORD *)&v15 = v15 + 1;
    }
    result = (unsigned __int8)sub_312680(v10, (__int64)&v14) ^ 1u;
    if ( v14 )
    {
      v11 = result;
      *(_QWORD *)&v15 = 0;
      qfree();
      return v11;
    }
  }
  return result;
}

