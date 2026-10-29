__int64 *__fastcall sub_32000(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  size_t v5; // r13
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  size_t v9; // r13
  size_t v10; // r13
  int v11; // eax
  void *v13; // rax
  const void *v14; // rsi
  void *v15; // rax
  const void *v16; // rsi
  void *v17; // rax
  const void *v18; // rsi

  v3 = operator new(0x78u);
  v4 = *(_QWORD *)(a2 + 24);
  v5 = *(_QWORD *)(a2 + 48);
  v6 = v3;
  v7 = *(_QWORD *)(a2 + 16);
  *(_DWORD *)(v6 + 8) = 1;
  *(_QWORD *)(v6 + 24) = v7;
  v8 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(v6 + 16) = v4;
  *(_QWORD *)v6 = &off_7D6B8;
  *(_QWORD *)(v6 + 32) = v8;
  *(_QWORD *)(v6 + 40) = 0;
  *(_OWORD *)(v6 + 48) = 0;
  if ( v5 )
  {
    v13 = (void *)qalloc_or_throw();
    *(_QWORD *)(v6 + 40) = v13;
    v14 = *(const void **)(a2 + 40);
    *(_QWORD *)(v6 + 56) = v5;
    memcpy(v13, v14, v5);
    *(_QWORD *)(v6 + 48) = v5;
  }
  v9 = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(v6 + 64) = 0;
  *(_OWORD *)(v6 + 72) = 0;
  if ( v9 )
  {
    v17 = (void *)qalloc_or_throw();
    *(_QWORD *)(v6 + 64) = v17;
    v18 = *(const void **)(a2 + 64);
    *(_QWORD *)(v6 + 80) = v9;
    memcpy(v17, v18, v9);
    *(_QWORD *)(v6 + 72) = v9;
  }
  v10 = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(v6 + 88) = 0;
  *(_OWORD *)(v6 + 96) = 0;
  if ( v10 )
  {
    v15 = (void *)qalloc_or_throw();
    *(_QWORD *)(v6 + 88) = v15;
    v16 = *(const void **)(a2 + 88);
    *(_QWORD *)(v6 + 104) = v10;
    memcpy(v15, v16, v10);
    *(_QWORD *)(v6 + 96) = v10;
  }
  v11 = *(_DWORD *)(a2 + 112);
  *a1 = v6;
  *(_DWORD *)(v6 + 112) = v11;
  return a1;
}

