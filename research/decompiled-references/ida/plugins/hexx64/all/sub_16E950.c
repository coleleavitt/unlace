__int64 __fastcall sub_16E950(__int64 a1, double a2)
{
  _DWORD *v3; // rdi
  _DWORD *v5; // rdi
  unsigned int v6; // ebp
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdi
  int v10; // eax

  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL) + 50LL) & 1) == 0 )
    return 0;
  v3 = *(_DWORD **)(a1 + 56);
  if ( !v3
    || (unsigned int)(*v3 - 43) > 1
    || !(unsigned __int8)sub_154780((__int64)(v3 + 8)) && !(unsigned __int8)sub_154780(*(_QWORD *)(a1 + 56) + 48LL) )
  {
    return 0;
  }
  v5 = *(_DWORD **)(a1 + 56);
  if ( *v5 == 43 )
  {
    sub_11D5A0((__int64)v5);
    v10 = *(_DWORD *)(a1 + 24);
    BYTE1(v10) &= ~2u;
    LOBYTE(v10) = v10 | 0x80;
    *(_DWORD *)(a1 + 24) = v10;
    v6 = *(_DWORD *)(a1 + 72) + 1;
  }
  else
  {
    v6 = v5[18];
    sub_11D5A0((__int64)v5);
    **(_DWORD **)(a1 + 56) = 55;
    v7 = *(_QWORD *)(a1 + 56);
    *(_BYTE *)(v7 + 32) = 7;
    *(_DWORD *)(v7 + 40) = v6;
  }
  sub_6B2C0(a1, v6, a2);
  **(_DWORD **)(a1 + 64) |= 0x400u;
  v8 = *(_DWORD *)(a1 + 24);
  v9 = *(_QWORD *)(a1 + 64);
  BYTE1(v8) &= ~2u;
  LOBYTE(v8) = v8 | 0x80;
  *(_DWORD *)(a1 + 24) = v8;
  sub_66FA0(v9, 1);
  return 1;
}

