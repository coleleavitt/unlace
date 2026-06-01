__int64 __fastcall sub_169380(__int64 a1, double a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rdi

  if ( *(_DWORD *)(a1 + 76) != 4 )
    return 0;
  v4 = *(_QWORD *)(a1 + 56);
  if ( *(_BYTE *)(v4 + 64) != 7 )
    return 0;
  v5 = *(_QWORD *)(a1 + 64);
  v6 = *(unsigned int *)(v4 + 72);
  if ( (unsigned int)v6 >= *(_DWORD *)(v5 + 64) )
    sub_167AF0(a2);
  v7 = *(_QWORD *)(*(_QWORD *)(v5 + 528) + 8 * v6);
  if ( sub_330DE0(v7) != 1 )
    return 0;
  v8 = *(_QWORD *)(v7 + 56);
  if ( *(_DWORD *)v8 != 55 )
    return 0;
  if ( *(_BYTE *)(v8 + 32) != 7 )
    return 0;
  if ( *(_DWORD *)(v8 + 40) != *(_DWORD *)(a1 + 72) + 1 )
    return 0;
  v9 = *(_QWORD *)(a1 + 56);
  if ( (*(_BYTE *)(v9 + 6) & 2) != 0 )
    return 0;
  sub_159B40(v9, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), a1, *(_QWORD *)(a1 + 56), 0, a2);
  sub_11D5A0(*(_QWORD *)(a1 + 56));
  v10 = *(_DWORD *)(a1 + 24);
  v11 = *(_QWORD *)(a1 + 8);
  BYTE1(v10) &= ~2u;
  LOBYTE(v10) = v10 | 0x80;
  *(_DWORD *)(a1 + 24) = v10;
  sub_13B2C0(v11);
  sub_112550(a1, *(_QWORD *)(a1 + 8), v7);
  sub_66FA0(*(_QWORD *)(a1 + 64), 1);
  return 1;
}

