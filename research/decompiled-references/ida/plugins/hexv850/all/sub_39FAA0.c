__int64 *__fastcall sub_39FAA0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 *v6; // rax
  __int64 v7; // r13
  __int64 v8; // rdx
  void *v10; // rax
  const void *v11; // rsi

  v4 = operator new(0x60u);
  *(_DWORD *)(v4 + 8) = 1;
  v5 = v4;
  *(_QWORD *)v4 = &off_4BAA18;
  v6 = *(__int64 **)a3;
  *(_QWORD *)(v5 + 16) = a2;
  v7 = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(v5 + 32) = v6;
  *(_QWORD *)(v5 + 40) = 0;
  *(_OWORD *)(v5 + 48) = 0;
  if ( v7 )
  {
    v10 = (void *)qalloc_or_throw();
    *(_QWORD *)(v5 + 40) = v10;
    v11 = *(const void **)(a3 + 8);
    *(_QWORD *)(v5 + 56) = v7;
    memcpy(v10, v11, 16 * v7);
    *(_QWORD *)(v5 + 48) = v7;
    v6 = *(__int64 **)(v5 + 32);
  }
  v8 = -1;
  if ( v6 )
    v8 = *v6;
  *(_QWORD *)(v5 + 24) = v8;
  *(_BYTE *)(v5 + 64) = 0;
  *a1 = v5;
  return a1;
}

