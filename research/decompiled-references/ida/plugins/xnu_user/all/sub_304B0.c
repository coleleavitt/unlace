void *__fastcall sub_304B0(__int64 a1, __int64 a2)
{
  size_t v3; // r12
  void *result; // rax
  size_t v5; // r12
  size_t v6; // r12
  size_t v7; // r12
  size_t v8; // r12
  void *v9; // rax
  const void *v10; // rsi
  void *v11; // rax
  const void *v12; // rsi
  void *v13; // rax
  const void *v14; // rsi
  void *v15; // rax
  const void *v16; // rsi
  void *v17; // rax
  const void *v18; // rsi

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
  {
    v9 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 16) = v3;
    v10 = *(const void **)a2;
    *(_QWORD *)a1 = v9;
    memcpy(v9, v10, v3);
    *(_QWORD *)(a1 + 8) = v3;
  }
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  result = (void *)*(unsigned int *)(a2 + 32);
  *(_QWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  v5 = *(_QWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 32) = (_DWORD)result;
  if ( v5 )
  {
    v17 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 40) = v17;
    v18 = *(const void **)(a2 + 40);
    *(_QWORD *)(a1 + 56) = v5;
    result = memcpy(v17, v18, v5);
    *(_QWORD *)(a1 + 48) = v5;
  }
  *(_QWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  v6 = *(_QWORD *)(a2 + 72);
  if ( v6 )
  {
    v15 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 64) = v15;
    v16 = *(const void **)(a2 + 64);
    *(_QWORD *)(a1 + 80) = v6;
    result = memcpy(v15, v16, v6);
    *(_QWORD *)(a1 + 72) = v6;
  }
  *(_QWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 96) = 0;
  v7 = *(_QWORD *)(a2 + 96);
  if ( v7 )
  {
    v13 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 88) = v13;
    v14 = *(const void **)(a2 + 88);
    *(_QWORD *)(a1 + 104) = v7;
    result = memcpy(v13, v14, v7);
    *(_QWORD *)(a1 + 96) = v7;
  }
  *(_QWORD *)(a1 + 112) = 0;
  *(_OWORD *)(a1 + 120) = 0;
  v8 = *(_QWORD *)(a2 + 120);
  if ( v8 )
  {
    v11 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 112) = v11;
    v12 = *(const void **)(a2 + 112);
    *(_QWORD *)(a1 + 128) = v8;
    result = memcpy(v11, v12, v8);
    *(_QWORD *)(a1 + 120) = v8;
  }
  return result;
}

