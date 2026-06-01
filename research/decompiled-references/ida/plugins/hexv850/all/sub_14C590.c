__int64 __fastcall sub_14C590(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  int *v9; // r14
  char v10; // al
  int v11; // edx
  __int64 v12; // rax
  __int128 v13; // rdi
  unsigned int v14; // r15d
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // r12
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // [rsp+18h] [rbp-A0h] BYREF
  _QWORD v22[4]; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v23[2]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v24[2]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v25[11]; // [rsp+60h] [rbp-58h] BYREF

  v25[3] = __readfsqword(0x28u);
  v21 = a3;
  v7 = sub_307F80(a1, a2, &v21, a4);
  if ( !v7 || *(_BYTE *)v7 != 4 )
    return 0;
  v9 = *(int **)(v7 + 8);
  v10 = *((_BYTE *)v9 + 32);
  if ( v10 == 11 )
  {
    v14 = 40;
    goto LABEL_21;
  }
  v11 = *v9;
  if ( *v9 != 19 || v10 != 4 )
    goto LABEL_7;
  v20 = *((_QWORD *)v9 + 5);
  if ( *(_DWORD *)v20 != 13 )
    return 0;
  if ( (unsigned __int8)sub_11B1C0((char *)(v20 + 48), v22, 1u) && v22[0] == 1 )
  {
    v14 = 41;
    *((_QWORD *)&v13 + 1) = v9 + 12;
    if ( sub_120FA0((unsigned __int8 *)(*((_QWORD *)v9 + 5) + 32LL), (__int64)(v9 + 12), 0) )
      goto LABEL_15;
    return 0;
  }
  v11 = *v9;
LABEL_7:
  if ( v11 != 13 )
    return 0;
  if ( *((_BYTE *)v9 + 32) != 4 )
    return 0;
  v12 = *((_QWORD *)v9 + 5);
  if ( *(_DWORD *)v12 != 24
    || *(_BYTE *)(v12 + 48) != 2
    || ((*(_BYTE *)(*(_QWORD *)(v12 + 56) + 16LL) + 1) & 7) != 0
    || *(_DWORD *)(v12 + 36) != (*(unsigned __int8 *)(*(_QWORD *)(v12 + 56) + 16LL) + 1) >> 3
    || !sub_120FA0((unsigned __int8 *)(v12 + 32), (__int64)(v9 + 12), 0) )
  {
    return 0;
  }
  *((_QWORD *)&v13 + 1) = v9 + 12;
  v14 = 38;
LABEL_15:
  *(_QWORD *)&v13 = a2;
  v21 = a3;
  v15 = sub_124880(v13, (__int64)&v21, 0);
  if ( !v15 )
    return 0;
  if ( *(_DWORD *)v15 != 4 )
    return 0;
  if ( *(_BYTE *)(v15 + 32) != 4 )
    return 0;
  v9 = *(int **)(v15 + 40);
  if ( *((_BYTE *)v9 + 32) != 11 )
    return 0;
LABEL_21:
  if ( *((_BYTE *)v9 + 64) != 8 || *(_DWORD *)(*((_QWORD *)v9 + 9) + 284LL) != 32 )
    return 0;
  v16 = *(_QWORD *)(a4 + 24);
  v23[1] = 0;
  v23[0] = 0xFFFFFFFF00000000LL;
  v24[0] = 0xFFFFFFFF00000000LL;
  v24[1] = 0;
  v25[0] = 0xFFFFFFFF00000000LL;
  v25[1] = 0;
  sub_32ADE0(v22, v16);
  v17 = *((_QWORD *)v9 + 9);
  if ( (get_tinfo_property() & 0xF) == 9 )
  {
    v18 = sub_329070(v14);
    HIDWORD(v22[0]) |= 0x10u;
    LODWORD(v22[0]) = v18;
  }
  else
  {
    if ( (unsigned int)get_tinfo_property() == 2 )
      v14 = sub_329070(v14);
    LODWORD(v22[0]) = v14;
  }
  sub_1205C0((__int64)v23, *(unsigned __int8 **)(v17 + 24));
  sub_1205C0((__int64)v24, (unsigned __int8 *)(*(_QWORD *)(v17 + 24) + 80LL));
  HIDWORD(v25[0]) = 1;
  sub_121720(a4 + 32, (unsigned __int8 *)v22);
  sub_1181E0(a4 + 48);
  v19 = 9;
  if ( *(_DWORD *)(a4 + 68) == 1 )
    v19 = 4;
  *(_DWORD *)a4 = v19;
  sub_1181E0((__int64)v25);
  sub_1181E0((__int64)v24);
  sub_1181E0((__int64)v23);
  return 1;
}

