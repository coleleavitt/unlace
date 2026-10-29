__int64 __fastcall sub_221120(
        __m128i *a1,
        __int64 a2,
        __m128i *a3,
        unsigned int *a4,
        int a5,
        int a6,
        __m128i a7,
        __m128 a8)
{
  bool v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // r12d
  int v18; // edx
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // r9d
  unsigned __int64 *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // r9d
  __int64 v30[11]; // [rsp+10h] [rbp-58h] BYREF

  v30[3] = __readfsqword(0x28u);
  v12 = a5 != 1;
  if ( a1[4].m128i_i8[0] && a5 != 1 )
  {
    v18 = a1->m128i_i32[2];
    v19 = a1->m128i_u32[1];
    v30[0] = 0;
    v30[1] = 0;
    sub_63E80(v30, v19, v18, *(double *)a7.m128i_i64);
    v22 = (unsigned __int64 *)sub_670E0((_QWORD *)a3[4].m128i_i64[0], v19, v20, v21);
    if ( (unsigned int)sub_141E80(v22, (__int64)v30, nullptr, v23, v24, v25, a7, a8) == 2 )
    {
      qfree(v30[0]);
      return 2;
    }
    qfree(v30[0]);
  }
  v13 = a2;
  v16 = sub_220840(a1, a2, a3, a4, a5, a6, *(double *)a7.m128i_i64, a8);
  if ( (v16 & 1) != 0 && v12 )
  {
    v26 = (unsigned __int64 *)sub_670E0((_QWORD *)a3[4].m128i_i64[0], v13, v14, v15);
    if ( (unsigned int)sub_141E80(v26, a1[1].m128i_i64[0], nullptr, v27, v28, v29, a7, a8) == 2 )
    {
      sub_139250(a3[4].m128i_i64[0]);
      return 2;
    }
  }
  return v16;
}

