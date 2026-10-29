__int64 __fastcall sub_39E7D0(
        __int64 a1,
        __m128 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        double a8,
        __m128i a9,
        double a10)
{
  unsigned __int64 v10; // r12
  __int64 v11; // rbx
  __int64 v13; // rax
  __int64 *v14; // rbp
  __int64 *v15; // r14
  __m128 v16; // xmm0
  __int64 *v17; // rax
  __int64 *v18; // rbx
  __int64 v19; // [rsp+0h] [rbp-58h] BYREF
  int v20; // [rsp+8h] [rbp-50h]
  __m128 v21; // [rsp+10h] [rbp-48h]
  __int64 v22; // [rsp+20h] [rbp-38h]
  unsigned __int64 v23; // [rsp+28h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  *(double *)a2.m128_u64 = ((double (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
                             11,
                             &v19,
                             &callui,
                             a5,
                             a6,
                             a7);
  v10 = v19;
  v11 = sub_389C40(a1, &v19);
  if ( v11 )
    goto LABEL_2;
  if ( !sub_3BE840() )
    return v23 - __readfsqword(0x28u);
  v13 = *(_QWORD *)(a1 + 1008);
  v14 = *(__int64 **)(v13 + 40);
  v15 = &v14[*(_QWORD *)(v13 + 48)];
  if ( v14 != v15 )
  {
    while ( 1 )
    {
      v11 = *v14;
      if ( *v14 )
      {
        if ( (unsigned __int8)sub_389B80(*v14, v10) )
          break;
      }
      if ( v15 == ++v14 )
        goto LABEL_10;
    }
LABEL_2:
    if ( (int)sub_33D190(
                0,
                (__int64)"AUTOHIDE REGISTRY\n"
                         "HIDECANCEL\n"
                         "Copying pseudocode to disassembly listing will destroy\n"
                         "existing anterior and posterior comments.\n"
                         "Do you want to continue?",
                *(double *)a2.m128_u64) > 0 )
    {
      sub_39DF40(v11, a2);
      return sub_38C200(v11, 7);
    }
    return v23 - __readfsqword(0x28u);
  }
LABEL_10:
  if ( (int)sub_33D190(
              0,
              (__int64)"AUTOHIDE REGISTRY\n"
                       "HIDECANCEL\n"
                       "Copying pseudocode to disassembly listing will destroy\n"
                       "existing anterior and posterior comments.\n"
                       "Do you want to continue?",
              *(double *)a2.m128_u64) <= 0 )
    return v23 - __readfsqword(0x28u);
  v16 = (__m128)_mm_unpacklo_epi64((__m128i)v10, (__m128i)v10);
  v20 = 0;
  v19 = 0xFFFFFFFFLL;
  v22 = -1;
  v21 = v16;
  v17 = sub_3948E0((__int64)&v19, 24, 0, 0, *(double *)v16.m128_u64, a8, a9, a10);
  v18 = v17;
  if ( !v17 )
    return v23 - __readfsqword(0x28u);
  sub_39DF40((__int64)v17, v16);
  return sub_389DE0(v18[2]);
}

