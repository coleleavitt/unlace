__int64 __fastcall sub_151150(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5, __m128 a6)
{
  _DWORD *v9; // rax
  int *v11; // r14
  char v12; // al
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned int v16; // r15d
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // r12
  int v20; // eax
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v24[4]; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v25[2]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v26[2]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v27[11]; // [rsp+60h] [rbp-58h] BYREF

  v27[3] = __readfsqword(0x28u);
  v23 = a3;
  v9 = sub_30D340(a1, a2, &v23, (int *)a4);
  if ( !v9 || *(_BYTE *)v9 != 4 )
    return 0;
  v11 = *((int **)v9 + 1);
  v12 = *((_BYTE *)v11 + 32);
  if ( v12 == 11 )
  {
    v16 = 40;
    goto LABEL_21;
  }
  v13 = *v11;
  if ( *v11 != 19 || v12 != 4 )
    goto LABEL_7;
  v22 = *((_QWORD *)v11 + 5);
  if ( *(_DWORD *)v22 != 13 )
    return 0;
  if ( (unsigned __int8)sub_11FD80((char *)(v22 + 48), v24, 1) && v24[0] == 1 )
  {
    v16 = 41;
    v15 = (__int64)(v11 + 12);
    if ( sub_125B60((unsigned __int8 *)(*((_QWORD *)v11 + 5) + 32LL), (__int64)(v11 + 12), 0, a5) )
      goto LABEL_15;
    return 0;
  }
  v13 = *v11;
LABEL_7:
  if ( v13 != 13 )
    return 0;
  if ( *((_BYTE *)v11 + 32) != 4 )
    return 0;
  v14 = *((_QWORD *)v11 + 5);
  if ( *(_DWORD *)v14 != 24
    || *(_BYTE *)(v14 + 48) != 2
    || ((*(_BYTE *)(*(_QWORD *)(v14 + 56) + 16LL) + 1) & 7) != 0
    || *(_DWORD *)(v14 + 36) != (*(unsigned __int8 *)(*(_QWORD *)(v14 + 56) + 16LL) + 1) >> 3
    || !sub_125B60((unsigned __int8 *)(v14 + 32), (__int64)(v11 + 12), 0, a5) )
  {
    return 0;
  }
  v15 = (__int64)(v11 + 12);
  v16 = 38;
LABEL_15:
  v23 = a3;
  v17 = sub_129440(a2, v15, (__int64)&v23, 0, a5, a6);
  if ( !v17 )
    return 0;
  if ( *(_DWORD *)v17 != 4 )
    return 0;
  if ( *(_BYTE *)(v17 + 32) != 4 )
    return 0;
  v11 = *(int **)(v17 + 40);
  if ( *((_BYTE *)v11 + 32) != 11 )
    return 0;
LABEL_21:
  if ( *((_BYTE *)v11 + 64) != 8 || *(_DWORD *)(*((_QWORD *)v11 + 9) + 284LL) != 32 )
    return 0;
  v18 = *(_QWORD *)(a4 + 24);
  v25[1] = 0;
  v25[0] = 0xFFFFFFFF00000000LL;
  v26[0] = 0xFFFFFFFF00000000LL;
  v26[1] = 0;
  v27[0] = 0xFFFFFFFF00000000LL;
  v27[1] = 0;
  sub_330970((__int64)v24, v18);
  v19 = *((_QWORD *)v11 + 9);
  if ( (get_tinfo_property() & 0xF) == 9 )
  {
    v20 = sub_32EAF0(v16);
    HIDWORD(v24[0]) |= 0x10u;
    LODWORD(v24[0]) = v20;
  }
  else
  {
    if ( (unsigned int)get_tinfo_property() == 2 )
      v16 = sub_32EAF0(v16);
    LODWORD(v24[0]) = v16;
  }
  sub_125180((unsigned __int8 *)v25, *(unsigned __int8 **)(v19 + 24));
  sub_125180((unsigned __int8 *)v26, (unsigned __int8 *)(*(_QWORD *)(v19 + 24) + 80LL));
  HIDWORD(v27[0]) = 1;
  sub_1262E0(a4 + 32, (unsigned __int8 *)v24, a5);
  sub_11CDA0(a4 + 48);
  v21 = 9;
  if ( *(_DWORD *)(a4 + 68) == 1 )
    v21 = 4;
  *(_DWORD *)a4 = v21;
  sub_11CDA0((__int64)v27);
  sub_11CDA0((__int64)v26);
  sub_11CDA0((__int64)v25);
  return 1;
}

