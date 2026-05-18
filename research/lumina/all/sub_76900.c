void *__fastcall sub_76900(__int64 a1, __int64 a2)
{
  int v3; // eax
  size_t v4; // r12
  void *result; // rax
  size_t v6; // r12
  void *v7; // rax
  const void *v8; // rsi
  void *v9; // rax
  const void *v10; // rsi

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  sub_66360((_QWORD *)a1, a2);
  v3 = *(_DWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 24) = v3;
  v4 = *(_QWORD *)(a2 + 40);
  if ( v4 )
  {
    v7 = (void *)sub_198760(*(_QWORD *)(a2 + 40));
    *(_QWORD *)(a1 + 32) = v7;
    v8 = *(const void **)(a2 + 32);
    *(_QWORD *)(a1 + 48) = v4;
    memcpy(v7, v8, v4);
    *(_QWORD *)(a1 + 40) = v4;
  }
  result = (void *)*(unsigned int *)(a2 + 56);
  *(_QWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 56) = (_DWORD)result;
  v6 = *(_QWORD *)(a2 + 72);
  if ( v6 )
  {
    v9 = (void *)sub_198760(*(_QWORD *)(a2 + 72));
    *(_QWORD *)(a1 + 80) = v6;
    v10 = *(const void **)(a2 + 64);
    *(_QWORD *)(a1 + 64) = v9;
    result = memcpy(v9, v10, v6);
    *(_QWORD *)(a1 + 72) = v6;
  }
  return result;
}
