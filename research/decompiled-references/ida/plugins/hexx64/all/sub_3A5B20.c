__int64 *__fastcall sub_3A5B20(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 *v8; // rax
  __int64 v9; // r13
  __int64 v10; // rdx
  void *v12; // rax
  const void *v13; // rsi

  v4 = operator new(0x60u);
  *(_DWORD *)(v4 + 8) = 1;
  v7 = v4;
  *(_QWORD *)v4 = &off_4E7098;
  v8 = *(__int64 **)a3;
  *(_QWORD *)(v7 + 16) = a2;
  v9 = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(v7 + 32) = v8;
  *(_QWORD *)(v7 + 40) = 0;
  *(_OWORD *)(v7 + 48) = 0;
  if ( v9 )
  {
    v12 = (void *)qalloc_or_throw(16 * v9, a2, v5, v6);
    *(_QWORD *)(v7 + 40) = v12;
    v13 = *(const void **)(a3 + 8);
    *(_QWORD *)(v7 + 56) = v9;
    memcpy(v12, v13, 16 * v9);
    *(_QWORD *)(v7 + 48) = v9;
    v8 = *(__int64 **)(v7 + 32);
  }
  v10 = -1;
  if ( v8 )
    v10 = *v8;
  *(_QWORD *)(v7 + 24) = v10;
  *(_BYTE *)(v7 + 64) = 0;
  *a1 = v7;
  return a1;
}

