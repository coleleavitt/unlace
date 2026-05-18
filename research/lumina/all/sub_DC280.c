const __m128i *__fastcall sub_DC280(__int64 a1, const __m128i *a2, unsigned int a3, __int64 a4)
{
  __m128i *v5; // rbx
  __int64 v7; // rax
  _QWORD *i; // rax
  __int64 v10; // rdi
  unsigned int (__fastcall *v11)(__int64, _QWORD, __int64, __int64 *, _QWORD *); // rax
  const char *v12; // rdi
  size_t v13; // rsi
  __m128i *v14; // rax
  size_t v15; // rdx
  __int64 v16; // rax
  const char *v17; // rbp
  __int64 v18; // rax
  __int64 v19; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v20[5]; // [rsp+10h] [rbp-28h] BYREF

  v20[1] = __readfsqword(0x28u);
  v19 = 0;
  v20[0] = 0;
  if ( !a4 )
    return a2;
  if ( *(_BYTE *)a4 != 0xA7 )
    return a2;
  v7 = *(_QWORD *)(a4 + 64);
  if ( !v7 || *(_BYTE *)(v7 + 63) != 1 )
    return a2;
  for ( i = *(_QWORD **)(v7 + 80); i; i = (_QWORD *)i[5] )
  {
    if ( a1 == *i )
      break;
  }
  v10 = i[2];
  v11 = *(unsigned int (__fastcall **)(__int64, _QWORD, __int64, __int64 *, _QWORD *))(*(_QWORD *)v10 + 144LL);
  if ( !v11 || !v11(v10, a3, a2[3].m128i_i64[1], &v19, v20) )
    return a2;
  v12 = (const char *)a2[3].m128i_i64[1];
  v13 = 73;
  if ( v12 )
    v13 = (strlen(v12) & 0x3FFFFFFF) + 73;
  v14 = (__m128i *)sub_DC1C0(a1, v13);
  v5 = v14;
  if ( !v14 )
    return a2;
  v15 = 1;
  *v14 = _mm_loadu_si128(a2);
  v14[1] = _mm_loadu_si128(a2 + 1);
  v14[2] = _mm_loadu_si128(a2 + 2);
  v14[3] = _mm_loadu_si128(a2 + 3);
  v16 = a2[4].m128i_i64[0];
  v5[3].m128i_i64[1] = (__int64)&v5[4].m128i_i64[1];
  v5[4].m128i_i64[0] = v16;
  v17 = (const char *)a2[3].m128i_i64[1];
  if ( v17 )
    v15 = (strlen(v17) & 0x3FFFFFFF) + 1;
  memcpy(&v5[4].m128i_u64[1], v17, v15);
  v5[1].m128i_i64[1] = v19;
  v18 = v20[0];
  v5->m128i_i32[1] |= 0x10u;
  v5->m128i_i64[1] = v18;
  return v5;
}
