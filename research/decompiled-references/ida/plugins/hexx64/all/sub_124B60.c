__int64 __fastcall sub_124B60(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        double a7,
        __m128 a8)
{
  __int64 v8; // r15
  bool v12; // al
  __int64 v13; // rdi
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v21; // [rsp+10h] [rbp-68h] BYREF
  __int64 v22; // [rsp+18h] [rbp-60h]
  __int64 v23; // [rsp+20h] [rbp-58h]
  __m128i v24; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  if ( !a3 )
    return 0;
  v8 = *(_QWORD *)(a3 + 16);
  if ( !v8 || v8 == a4 )
    return 0;
  while ( 1 )
  {
    sub_124680((__int64)&v21, a1, v8, a6, a7, a8);
    v12 = sub_64930(&v21, a2);
    v13 = v23;
    if ( v12 )
      break;
    if ( v23 )
    {
      v24.m128i_i64[0] = 0;
      qfree(v23);
    }
    qfree(v21);
    v8 = *(_QWORD *)(v8 + 16);
    if ( !v8 || a4 == v8 )
      return 0;
  }
  if ( a5 )
  {
    v14 = *(_QWORD *)a5;
    v15 = _mm_loadu_si128(&v24);
    *(_QWORD *)a5 = v21;
    v21 = v14;
    v16 = *(_QWORD *)(a5 + 8);
    *(_QWORD *)(a5 + 8) = v22;
    v17 = *(_QWORD *)(a5 + 32);
    v22 = v16;
    v18 = *(_QWORD *)(a5 + 16);
    v24.m128i_i64[1] = v17;
    v23 = v18;
    *(_QWORD *)(a5 + 16) = v13;
    v13 = v18;
    *(__m128i *)(a5 + 24) = v15;
  }
  if ( v13 )
  {
    v24.m128i_i64[0] = 0;
    qfree(v13);
  }
  qfree(v21);
  return v8;
}

