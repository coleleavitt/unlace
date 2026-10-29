unsigned __int64 __fastcall sub_12A80(unsigned __int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  void (__fastcall *v5)(__m128i *, __int64, __int64); // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __m128i v8; // xmm0
  __m128i v9; // xmm0
  unsigned __int64 v10; // rbx
  unsigned __int64 *v11; // rdx
  __m128i v12; // xmm0
  int v13; // r14d
  unsigned __int64 i; // rbx
  int v15; // eax
  char *v16; // rax
  bool v17; // zf
  int v20; // [rsp+10h] [rbp-C0h] BYREF
  int v21; // [rsp+14h] [rbp-BCh] BYREF
  unsigned __int64 v22; // [rsp+18h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+20h] [rbp-B0h] BYREF
  __int128 v24; // [rsp+28h] [rbp-A8h] BYREF
  __m128i v25; // [rsp+38h] [rbp-98h]
  __int64 v26; // [rsp+48h] [rbp-88h]
  __m128i v27; // [rsp+50h] [rbp-80h] BYREF
  __m128i v28; // [rsp+60h] [rbp-70h]
  __m128i v29; // [rsp+70h] [rbp-60h] BYREF
  unsigned __int64 *v30; // [rsp+80h] [rbp-50h]
  unsigned __int64 v31; // [rsp+90h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v5 = *(void (__fastcall **)(__m128i *, __int64, __int64))(a3 + 16);
  v20 = -1;
  v22 = 0;
  v26 = a2;
  v28 = 0u;
  v27 = 0;
  if ( v5 )
  {
    v5(&v27, a3, 2);
    v28 = _mm_loadu_si128((const __m128i *)(a3 + 16));
  }
  v25 = 0u;
  v29.m128i_i64[0] = a4;
  v29.m128i_i64[1] = (__int64)&v20;
  v30 = &v22;
  v24 = 0;
  v6 = operator new(0x40u);
  v7 = v26;
  *(_QWORD *)(v6 + 24) = 0;
  *(_OWORD *)(v6 + 8) = 0;
  *(_QWORD *)v6 = v7;
  *(_QWORD *)(v6 + 32) = v28.m128i_i64[1];
  if ( v28.m128i_i64[0] )
  {
    v8 = _mm_loadu_si128(&v27);
    *(_QWORD *)(v6 + 24) = v28.m128i_i64[0];
    *(__m128i *)(v6 + 8) = v8;
    v28 = 0;
  }
  v9 = _mm_loadu_si128(&v29);
  v10 = *a1;
  *(_QWORD *)&v24 = v6;
  v11 = v30;
  *(__m128i *)(v6 + 40) = v9;
  v12 = _mm_loadl_epi64((const __m128i *)&off_2CE40);
  *(_QWORD *)(v6 + 56) = v11;
  v25 = _mm_unpacklo_epi64(v12, (__m128i)(unsigned __int64)sub_11FE0);
  v13 = bitcountr_zero(v10);
  for ( i = v10 >> v13; i; i >>= 1 )
  {
    while ( (i & 1) == 0 )
    {
      ++v13;
      i >>= 1;
    }
    if ( v13 > 31 )
      v15 = -1;
    else
      v15 = v13;
    LODWORD(v23) = v15;
    if ( !v25.m128i_i64[0] )
      std::__throw_bad_function_call();
    if ( ((unsigned int (__fastcall *)(__int128 *, __int64 *))v25.m128i_i64[1])(&v24, &v23) )
      break;
    ++v13;
  }
  if ( v25.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v25.m128i_i64[0])(&v24, &v24, 3);
  if ( v28.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v28.m128i_i64[0])(&v27, &v27, 3);
  if ( v22 > 1 )
  {
    v16 = "-";
    if ( v22 == 2 )
      v16 = (char *)a4;
    (*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a2 + 56LL))(a2, v16, 9);
    v17 = *(_QWORD *)(a3 + 16) == 0;
    v23 = a2;
    v21 = v20;
    if ( v17 )
      std::__throw_bad_function_call();
    (*(void (__fastcall **)(__int64, __int64 *, int *))(a3 + 24))(a3, &v23, &v21);
  }
  return v31 - __readfsqword(0x28u);
}
