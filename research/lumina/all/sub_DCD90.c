__int64 *__fastcall sub_DCD90(__int64 a1, char a2, __int64 a3, unsigned __int8 *a4, int a5)
{
  __int64 v5; // r14
  __int64 *v7; // rax
  __int64 *v8; // rbp
  char *v9; // r15
  unsigned __int8 v10; // al

  v5 = *(_QWORD *)a1;
  if ( *(_DWORD *)(a1 + 48) )
    return nullptr;
  v7 = sub_DC1C0(*(_QWORD *)a1, *(unsigned int *)(a3 + 8) + 97LL);
  v8 = v7;
  if ( !v7 )
    return nullptr;
  v9 = (char *)(v7 + 12);
  memcpy(v7 + 12, *(const void **)a3, *(unsigned int *)(a3 + 8));
  sub_C23E0(v9);
  v8[3] = (__int64)v9;
  *(_BYTE *)v8 = a2;
  v8[9] = (__int64)sub_DCD40(v5, a4, a5);
  v10 = *(_BYTE *)(a1 + 292);
  if ( v10 > 1u && v10 != 3 )
    sub_DC5F0((__int64 *)a1, v8[3], (const __m128i *)a3);
  return v8;
}
