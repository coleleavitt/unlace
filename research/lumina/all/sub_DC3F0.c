__int64 __fastcall sub_DC3F0(__int64 a1, __int64 a2, int a3)
{
  __int64 *v5; // rcx
  __int64 result; // rax
  char *v7; // rax
  __int64 v8; // r12
  char *v9; // rax
  __int64 v10; // rdx
  const void *v11; // rsi
  char *v12; // rax
  size_t v13; // rdx
  const void *v14; // rsi
  void *v15; // rax

  v5 = sub_DC1C0(a1, 13 * a3);
  result = 7;
  if ( v5 )
  {
    v7 = (char *)memcpy(v5, *(const void **)(a2 + 64), 8LL * *(unsigned __int16 *)(a2 + 96));
    *(_QWORD *)(a2 + 64) = v7;
    v8 = 2LL * a3;
    v9 = (char *)memcpy(&v7[8 * a3], *(const void **)(a2 + 16), 2LL * *(unsigned __int16 *)(a2 + 94) + 2);
    v10 = *(unsigned __int16 *)(a2 + 96);
    v11 = *(const void **)(a2 + 8);
    *(_QWORD *)(a2 + 16) = v9;
    v12 = (char *)memcpy(&v9[v8], v11, 2 * v10);
    v13 = *(unsigned __int16 *)(a2 + 96);
    v14 = *(const void **)(a2 + 56);
    *(_QWORD *)(a2 + 8) = v12;
    v15 = memcpy(&v12[v8], v14, v13);
    *(_BYTE *)(a2 + 99) |= 0x10u;
    *(_QWORD *)(a2 + 56) = v15;
    *(_WORD *)(a2 + 96) = a3;
    return 0;
  }
  return result;
}
