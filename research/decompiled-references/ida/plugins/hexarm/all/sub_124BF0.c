_QWORD *__fastcall sub_124BF0(__int64 a1, unsigned __int8 *a2)
{
  int v3; // r14d
  _QWORD *v4; // rax
  __int64 v5; // rsi
  _QWORD *v6; // rbx
  __int64 v7; // r13

  v3 = *(_DWORD *)(a1 + 68);
  v4 = (_QWORD *)j__qalloc_or_throw();
  v5 = *(_QWORD *)(a1 + 24);
  v6 = v4;
  v7 = (__int64)(v4 + 8);
  v4[4] = 0xFFFFFFFF00000000LL;
  v4[5] = 0;
  v4[6] = 0xFFFFFFFF00000000LL;
  v4[7] = 0;
  v4[8] = 0xFFFFFFFF00000000LL;
  v4[9] = 0;
  sub_330C90(v4, v5);
  *((_BYTE *)v6 + 32) = 4;
  v6[5] = a1;
  *((_DWORD *)v6 + 9) = v3;
  if ( a2 != (unsigned __int8 *)v7 )
  {
    sub_11C7E0(v7);
    sub_123480(v7, a2);
  }
  *(_DWORD *)v6 = 4;
  if ( (*((_BYTE *)v6 + 33) & 2) != 0 )
    *((_BYTE *)v6 + 65) |= 2u;
  return v6;
}

