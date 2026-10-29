__int64 __fastcall sub_2B1D00(__int64 a1, __int64 a2, unsigned __int64 a3, double a4)
{
  unsigned __int64 v4; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned __int8 (*v8)(void); // rax
  __int64 v9; // rdi
  bool (__fastcall *v10)(__int64); // rax
  void *v11; // r13
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rbx
  _QWORD *v15; // rbp
  __int64 result; // rax
  __int64 v17; // rdx
  __m128i si128; // xmm0
  __int64 v19; // rdi
  size_t v20; // r12
  __m128i v21[3]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(a1 + 48);
  if ( a3 >= v4 || *(_QWORD *)(a2 + 48) != v4 )
    goto LABEL_13;
  v6 = 56 * a3;
  v7 = 56 * a3 + *(_QWORD *)(a1 + 40);
  v8 = **(unsigned __int8 (***)(void))v7;
  if ( (char *)v8 == (char *)sub_2AD170 )
  {
    if ( *(_QWORD *)(v7 + 8) != *(_QWORD *)(v7 + 40) )
      goto LABEL_13;
  }
  else if ( v8() )
  {
    goto LABEL_13;
  }
  v9 = v6 + *(_QWORD *)(a2 + 40);
  v10 = **(bool (__fastcall ***)(__int64))v9;
  if ( v10 == sub_2AD170 )
  {
    if ( *(_QWORD *)(v9 + 8) != *(_QWORD *)(v9 + 40) )
      goto LABEL_7;
LABEL_13:
    sub_2ADE20(a4);
  }
  if ( !((unsigned __int8 (*)(void))v10)() )
    goto LABEL_13;
LABEL_7:
  v11 = nullptr;
  switch_dbctx();
  v13 = (_QWORD *)(v6 + *(_QWORD *)(a1 + 40));
  v14 = *(_QWORD *)(a2 + 40) + v6;
  v15 = v13;
  result = *(_QWORD *)(v14 + 8);
  v15[1] = result;
  v17 = *(_QWORD *)(v14 + 24);
  si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v17, (__m128i)(unsigned __int64)v17);
  if ( v17 )
  {
    v20 = 4 * v17;
    v21[0] = si128;
    v11 = (void *)qalloc_or_throw(4 * v17, a2, v17, v12);
    result = (__int64)memcpy(v11, *(const void **)(v14 + 16), v20);
    si128 = _mm_load_si128(v21);
  }
  v19 = v15[2];
  if ( v19 )
  {
    v15[3] = 0;
    v21[0] = si128;
    result = qfree(v19);
    si128 = _mm_load_si128(v21);
  }
  v15[2] = v11;
  *(__m128i *)(v15 + 3) = si128;
  return result;
}

