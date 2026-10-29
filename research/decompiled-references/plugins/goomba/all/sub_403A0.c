void *__fastcall sub_403A0(__int64 a1, __int64 a2)
{
  void *result; // rax
  size_t v3; // r12
  void *v4; // rax
  const void *v5; // rsi

  *(_QWORD *)a1 = off_4D788;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  result = *(void **)(a2 + 16);
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = result;
  *(_OWORD *)(a1 + 32) = 0;
  v3 = *(_QWORD *)(a2 + 32);
  if ( v3 )
  {
    v4 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 32));
    *(_QWORD *)(a1 + 40) = v3;
    v5 = *(const void **)(a2 + 24);
    *(_QWORD *)(a1 + 24) = v4;
    result = memcpy(v4, v5, v3);
    *(_QWORD *)(a1 + 32) = v3;
  }
  return result;
}
