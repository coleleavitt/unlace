__int64 __fastcall sub_2AC940(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int8 (*v7)(void); // rax
  __int64 v8; // rdi
  bool (__fastcall *v9)(__int64); // rax
  void *v10; // r13
  _QWORD *v11; // rax
  __int64 v12; // rbx
  _QWORD *v13; // rbp
  __int64 result; // rax
  unsigned __int64 v15; // rdx
  __m128i si128; // xmm0
  size_t v17; // r12
  __m128i v18[3]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 48);
  if ( a3 >= v3 || *(_QWORD *)(a2 + 48) != v3 )
    goto LABEL_13;
  v5 = 56 * a3;
  v6 = 56 * a3 + *(_QWORD *)(a1 + 40);
  v7 = **(unsigned __int8 (***)(void))v6;
  if ( (char *)v7 == (char *)sub_2A7DB0 )
  {
    if ( *(_QWORD *)(v6 + 8) != *(_QWORD *)(v6 + 40) )
      goto LABEL_13;
  }
  else if ( v7() )
  {
    goto LABEL_13;
  }
  v8 = v5 + *(_QWORD *)(a2 + 40);
  v9 = **(bool (__fastcall ***)(__int64))v8;
  if ( v9 == sub_2A7DB0 )
  {
    if ( *(_QWORD *)(v8 + 8) != *(_QWORD *)(v8 + 40) )
      goto LABEL_7;
LABEL_13:
    sub_2A8A60();
  }
  if ( !((unsigned __int8 (*)(void))v9)() )
    goto LABEL_13;
LABEL_7:
  v10 = nullptr;
  switch_dbctx();
  v11 = (_QWORD *)(v5 + *(_QWORD *)(a1 + 40));
  v12 = *(_QWORD *)(a2 + 40) + v5;
  v13 = v11;
  result = *(_QWORD *)(v12 + 8);
  v13[1] = result;
  v15 = *(_QWORD *)(v12 + 24);
  si128 = _mm_unpacklo_epi64((__m128i)v15, (__m128i)v15);
  if ( v15 )
  {
    v17 = 4 * v15;
    v18[0] = si128;
    v10 = (void *)qalloc_or_throw();
    result = (__int64)memcpy(v10, *(const void **)(v12 + 16), v17);
    si128 = _mm_load_si128(v18);
  }
  if ( v13[2] )
  {
    v13[3] = 0;
    v18[0] = si128;
    result = qfree();
    si128 = _mm_load_si128(v18);
  }
  v13[2] = v10;
  *(__m128i *)(v13 + 3) = si128;
  return result;
}

