__int64 __fastcall sub_DEA70(__int64 a1, char a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // rdi
  __int64 *v6; // rax
  __int64 v7; // rbx
  size_t v8; // r12
  const void *v9; // rsi
  char *v10; // rdi
  __int64 v11; // rdx
  unsigned __int8 v12; // al
  int v14; // eax
  unsigned __int128 src; // [rsp+0h] [rbp-28h] BYREF

  v5 = *(_QWORD *)a1;
  src = __PAIR128__(a4, a3);
  v6 = sub_DBF10(v5, (unsigned int)a4 + 73LL);
  v7 = (__int64)v6;
  if ( v6 )
  {
    *(_BYTE *)v6 = a2;
    *((_BYTE *)v6 + 1) = 0;
    *((_DWORD *)v6 + 1) = 0x800000;
    *((_BYTE *)v6 + 2) = 0;
    v6[3] = 0;
    v6[2] = 0;
    v6[7] = 0;
    v6[4] = 0;
    v6[8] = 0;
    *((_DWORD *)v6 + 11) = 0;
    v6[1] = (__int64)(v6 + 9);
    v8 = DWORD2(src);
    v9 = (const void *)src;
    *((_WORD *)v6 + 24) = 0;
    memcpy(v6 + 9, v9, v8);
    *(_BYTE *)(v7 + v8 + 72) = 0;
    v10 = *(char **)(v7 + 8);
    *(_DWORD *)(v7 + 52) = src - *(_DWORD *)(a1 + 328);
    v11 = (unsigned __int8)*v10;
    if ( byte_1BEF00[v11] < 0 )
    {
      v14 = 67108928;
      if ( (_BYTE)v11 != 34 )
        v14 = 0x4000000;
      *(_DWORD *)(v7 + 4) |= v14;
      sub_C23E0(v10);
    }
    *(_DWORD *)(v7 + 40) = 1;
    v12 = *(_BYTE *)(a1 + 292);
    if ( v12 > 1u && v12 != 3 )
      sub_DC5F0((__int64 *)a1, v7, (const __m128i *)&src);
  }
  return v7;
}
