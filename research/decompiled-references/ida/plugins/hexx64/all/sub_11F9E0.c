__int64 __fastcall sub_11F9E0(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // rbx
  unsigned __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rdx
  __m128i v10; // xmm0
  __int64 v11; // rax
  __m128i v12; // [rsp+0h] [rbp-58h] BYREF
  _QWORD *v13; // [rsp+10h] [rbp-48h]
  unsigned __int64 v14; // [rsp+18h] [rbp-40h]
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  a2[1] = a1;
  v3 = *(_QWORD **)(a1 + 520);
  if ( !v3 )
    return 0;
  while ( 1 )
  {
    a2[2] = (__int64)v3;
    v4 = v3[6];
    if ( v4 )
      break;
LABEL_10:
    v3 = (_QWORD *)v3[1];
    if ( !v3 )
      return 0;
  }
  v5 = v3[62];
  v6 = v3[61];
  while ( 1 )
  {
    v13 = v3;
    v14 = v4;
    v10 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
    if ( v3[63] < (unsigned __int64)(v5 + 1) )
    {
      v12 = v10;
      v11 = qvector_reserve((__int64)(v3 + 61), v6, v5 + 1, 8);
      v5 = v3[62];
      v10 = _mm_load_si128(&v12);
      v3[61] = v11;
      v6 = v11;
    }
    *(_QWORD *)(v6 + 8 * v5) = v4;
    ++v3[62];
    v7 = *a2;
    *(__m128i *)(a2 + 3) = v10;
    result = (*(__int64 (__fastcall **)(__int64 *))(v7 + 16))(a2);
    v9 = v3[62];
    if ( (_DWORD)result )
      break;
    if ( !v9 || (v6 = v3[61], v4 != *(_QWORD *)(v6 + 8 * v9 - 8)) )
    {
      if ( !under_debugger )
        sub_383060(0xCD23u, *(double *)v10.m128i_i64);
      goto LABEL_19;
    }
    v5 = v9 - 1;
    v3[62] = v5;
    v4 = *(_QWORD *)(v4 + 8);
    if ( !v4 )
      goto LABEL_10;
  }
  if ( !v9 || v4 != *(_QWORD *)(v3[61] + 8 * v9 - 8) )
  {
    if ( !under_debugger )
      sub_383060(0xCD23u, *(double *)v10.m128i_i64);
LABEL_19:
    BUG();
  }
  v3[62] = v9 - 1;
  return result;
}

