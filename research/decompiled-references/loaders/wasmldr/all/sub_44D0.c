__int64 __fastcall sub_44D0(_QWORD *a1, __m128i *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  bool v15; // cc
  __int8 v16; // r13
  bool v17; // r12
  __int64 v18; // rsi
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rsi
  __m128i v21; // xmm0
  __m128i v22; // xmm2
  __int64 v24; // rax
  __int64 v25; // rdi
  int v26; // [rsp+Ch] [rbp-3Ch] BYREF
  unsigned int v27; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v28; // [rsp+14h] [rbp-34h] BYREF
  unsigned __int64 v29; // [rsp+18h] [rbp-30h]

  v29 = __readfsqword(0x28u);
  v4 = a1[1];
  v5 = a1[3];
  v28 = 0;
  v6 = v4 + v5;
  v7 = a1[4] + v4;
  if ( v6 >= v7 || (v8 = sub_E440(v6, v7, &v26)) == 0 )
    sub_3890((__int64)"read_memory: couldn't read flags");
  v9 = a1[3];
  a1[5] = v9;
  a1[3] = v9 + v8;
  set_cmt(v9, "flags", 0);
  v10 = a1[1];
  v11 = v10 + a1[3];
  v12 = a1[4] + v10;
  if ( v11 >= v12 || (v13 = sub_E440(v11, v12, &v27)) == 0 )
    sub_3890((__int64)"read_memory: couldn't read initial count");
  v14 = a1[3];
  v15 = v27 <= 0x10000;
  a1[5] = v14;
  a1[3] = v14 + v13;
  if ( !v15 )
    sub_3890((__int64)"read_memory: invalid initial count");
  set_cmt(v14, "initial count", 0);
  v16 = v26 & 1;
  v17 = (v26 & 2) != 0;
  if ( (v26 & 1) != 0 )
    goto LABEL_9;
  if ( (v26 & 2) != 0 )
    sub_3890((__int64)"read_memory: shared memory must have a max size");
  if ( (v26 & 1) != 0 )
  {
LABEL_9:
    v18 = a1[1];
    v19 = v18 + a1[3];
    v20 = a1[4] + v18;
    if ( v19 >= v20 || (v24 = sub_E440(v19, v20, &v28)) == 0 )
      sub_3890((__int64)"read_memory: couldn't read max count");
    v25 = a1[3];
    a1[5] = v25;
    a1[3] = v25 + v24;
    if ( v28 < v27 )
      sub_3890((__int64)"read_memory: initial count must be <= max count");
    set_cmt(v25, "max", 0);
  }
  v21 = _mm_cvtsi32_si128(v27);
  v22 = _mm_cvtsi32_si128(v28);
  a2[1].m128i_i8[0] = v16;
  a2[1].m128i_i8[1] = v17;
  *a2 = _mm_unpacklo_epi32(_mm_unpacklo_epi32(v21, v22), (__m128i)0LL);
  return 1;
}
