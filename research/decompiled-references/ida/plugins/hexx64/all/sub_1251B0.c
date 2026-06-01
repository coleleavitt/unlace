_QWORD *__fastcall sub_1251B0(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4)
{
  int v5; // r14d
  _QWORD *v6; // rax
  __int64 v7; // rsi
  _QWORD *v8; // rbx
  unsigned __int8 *v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx

  v5 = *(_DWORD *)(a1 + 68);
  v6 = (_QWORD *)j__qalloc_or_throw(80, (__int64)a2, a3, a4);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = v6;
  v9 = (unsigned __int8 *)(v6 + 8);
  v6[4] = 0xFFFFFFFF00000000LL;
  v6[5] = 0;
  v6[6] = 0xFFFFFFFF00000000LL;
  v6[7] = 0;
  v6[8] = 0xFFFFFFFF00000000LL;
  v6[9] = 0;
  sub_330970((__int64)v6, v7);
  *((_BYTE *)v8 + 32) = 4;
  v8[5] = a1;
  *((_DWORD *)v8 + 9) = v5;
  if ( a2 != v9 )
  {
    sub_11CDA0((__int64)v9);
    sub_123A40((__int64)v9, a2, v10, v11);
  }
  *(_DWORD *)v8 = 4;
  if ( (*((_BYTE *)v8 + 33) & 2) != 0 )
    *((_BYTE *)v8 + 65) |= 2u;
  return v8;
}

