__int64 __fastcall sub_124CC0(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        double a7,
        __m128 a8)
{
  __int64 v12; // rbx
  unsigned __int64 *v13; // rdi
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 *v18; // rax
  char v19; // al
  __int64 v22; // [rsp+10h] [rbp-68h] BYREF
  __int64 v23; // [rsp+18h] [rbp-60h]
  unsigned __int64 *v24; // [rsp+20h] [rbp-58h] BYREF
  __m128i v25; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  if ( !a3 || (unsigned __int8)sub_64880(a2) && !a2[3] )
    return 0;
  v12 = *(_QWORD *)(a3 + 16);
  if ( !v12 || v12 == a4 )
    return 0;
  while ( 1 )
  {
    sub_124680((__int64)&v22, a1, v12, a6, a7, a8);
    if ( (unsigned __int8)sub_64780(&v22, a2) )
      break;
    v19 = sub_318470(&v24, (__int64)(a2 + 2));
    v13 = v24;
    if ( v19 )
      goto LABEL_7;
    if ( v24 )
    {
      v25.m128i_i64[0] = 0;
      qfree((__int64)v24);
    }
    qfree(v22);
    v12 = *(_QWORD *)(v12 + 16);
    if ( !v12 || a4 == v12 )
      return 0;
  }
  v13 = v24;
LABEL_7:
  if ( a5 )
  {
    v14 = *(_QWORD *)a5;
    v15 = _mm_loadu_si128(&v25);
    *(_QWORD *)a5 = v22;
    v22 = v14;
    v16 = *(_QWORD *)(a5 + 8);
    *(_QWORD *)(a5 + 8) = v23;
    v17 = *(_QWORD *)(a5 + 32);
    v23 = v16;
    v18 = *(unsigned __int64 **)(a5 + 16);
    v25.m128i_i64[1] = v17;
    v24 = v18;
    *(_QWORD *)(a5 + 16) = v13;
    v13 = v18;
    *(__m128i *)(a5 + 24) = v15;
  }
  if ( v13 )
  {
    v25.m128i_i64[0] = 0;
    qfree((__int64)v13);
  }
  qfree(v22);
  return v12;
}

