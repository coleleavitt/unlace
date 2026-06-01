__int64 __fastcall sub_3958A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        __m128i a9,
        double a10)
{
  __int64 v10; // rbx
  unsigned __int64 v13; // r12
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 *v17; // rdx
  __int64 *v18; // r13
  __int64 *v19; // r15
  __int64 v20; // r14
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+0h] [rbp-78h]
  __int64 v27; // [rsp+8h] [rbp-70h]
  __int64 v28; // [rsp+10h] [rbp-68h] BYREF
  __int64 v29; // [rsp+18h] [rbp-60h]
  __m128i v30; // [rsp+20h] [rbp-58h]
  __int64 v31; // [rsp+30h] [rbp-48h]
  unsigned __int64 v32; // [rsp+38h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  v10 = a1;
  if ( a1 )
  {
    sub_38C200(a1, 7);
    return 1;
  }
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(11, &v28, a3, &callui, a5, a6);
  v13 = v28;
  if ( get_func() )
  {
    v16 = *(_QWORD *)(a3 + 1008);
    v17 = *(__int64 **)(v16 + 40);
    v18 = &v17[*(_QWORD *)(v16 + 48)];
    if ( v17 == v18 )
      goto LABEL_10;
    v19 = *(__int64 **)(v16 + 40);
    while ( 1 )
    {
      v20 = *v19;
      if ( *v19 )
      {
        if ( (unsigned __int8)sub_389B80(*v19, v13) )
          break;
      }
      if ( v18 == ++v19 )
        goto LABEL_10;
    }
    callui(59, *(_QWORD *)(v20 + 16), 1, &callui, v21, v22, v26, v27, v28, v29);
    sub_38B490(v20, 0);
    if ( v13 != sub_38C1A0(v20, v20 + 56, v20 + 80, v20 + 104) )
    {
LABEL_10:
      if ( a2 )
      {
        if ( *(_DWORD *)(a2 + 8) == 27 )
          v10 = *(_QWORD *)a2;
      }
      else
      {
        v10 = 0;
      }
      LODWORD(v29) = 0;
      v31 = -1;
      v28 = 0xFFFFFFFFLL;
      v30 = _mm_unpacklo_epi64((__m128i)v13, (__m128i)v13);
      sub_3948E0(v27, 64, 0, v10, *(double *)v30.m128i_i64, a8, a9, a10);
    }
    return 1;
  }
  v23 = *(_QWORD *)(a3 + 1008);
  v24 = *(_QWORD *)(v23 + 48);
  if ( v24 )
  {
    v25 = *(_QWORD *)(*(_QWORD *)(v23 + 40) + 8 * v24 - 8);
    if ( v25 )
    {
      callui(59, *(_QWORD *)(v25 + 16), 1, &callui, v14, v15, v26, v27, v28, v29);
      return 1;
    }
  }
  sub_3BE840();
  return 0;
}

