__int64 __fastcall sub_6CE30(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v3; // r12
  unsigned __int8 v5; // r12
  unsigned __int8 v6; // al
  bool v7; // r14
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  unsigned __int8 v9; // al
  bool v10; // dl
  bool v11; // cc
  bool v12; // al
  char v13; // r12
  char v14; // al
  __int16 v15; // dx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rdi
  int v19; // eax
  __int64 v20; // r14
  int v21; // r15d
  __int64 v22; // rdx
  __int64 *v23; // rax
  int v24; // edx
  int v25; // eax
  __int64 *v26; // [rsp+0h] [rbp-68h] BYREF
  __int128 v27; // [rsp+8h] [rbp-60h]
  char v28; // [rsp+18h] [rbp-50h]
  _DWORD v29[2]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v30; // [rsp+28h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 48) & 0xF) != 0xE )
    return 0;
  v3 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v3 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v1 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, *(_QWORD *)(a1 + 864));
  if ( !(_BYTE)v1 )
    return 0;
  v5 = *(_BYTE *)(v3 + 5);
  v6 = *(_BYTE *)(a1 + 61);
  v7 = v5 <= 0xF9u;
  if ( v6 > 0xF9u )
  {
    if ( v6 >= v5 && v5 > 0xF9u )
      goto LABEL_16;
  }
  else if ( v6 >= v5 || v5 > 0xF9u || *(_BYTE *)(a1 + 8) && v6 == 2 )
  {
    goto LABEL_16;
  }
  v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v8 == sub_6ACC0 )
    return 0;
  v9 = v8(a1, a1 + 56);
  v10 = v7 || v9 < v5;
  v11 = v9 <= 0xF9u;
  v12 = v7 && v9 < v5;
  if ( !v11 )
    v12 = v10;
  if ( v12 )
    return 0;
LABEL_16:
  if ( *(_WORD *)(a1 + 40) != 30 )
    return 0;
  v13 = *(_BYTE *)(a1 + 101);
  if ( v13 != 2 )
    return 0;
  v14 = *(_BYTE *)(a1 + 97);
  if ( v14 != 3 )
  {
    if ( v14 == 4 && *(char *)(a1 + 44) >= 0 && !*(_QWORD *)(a1 + 112) )
    {
      if ( (*(_BYTE *)(a1 + 50) & 4) != 0 || (getinf(3) & 0x1006) == 0x1002 )
        v13 = 7;
      v15 = *(_WORD *)(a1 + 102);
      *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
      *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v15;
      *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = v13;
    }
    return v1;
  }
  if ( *(_BYTE *)(a1 + 129) )
    return v1;
  if ( *(_QWORD *)(a1 + 104) )
  {
    if ( *(char *)(a1 + 44) < 0 )
      return v1;
  }
  else
  {
    v25 = *(_DWORD *)(a1 + 44);
    if ( (v25 & 0xB0) == 0 )
      goto LABEL_33;
    if ( (v25 & 0x80u) != 0 )
      return v1;
  }
  if ( *(_QWORD *)(a1 + 104) != 2 )
    return v1;
  *(_BYTE *)(a1 + 516) = 1;
LABEL_33:
  v16 = *(unsigned __int16 *)(a1 + 102);
  v17 = *(_QWORD *)(a1 + 32);
  v18 = *(_QWORD *)(a1 + 888);
  v26 = 0;
  v29[0] = v16;
  v19 = *(unsigned __int8 *)(a1 + 128);
  v28 = 0;
  v20 = *(_QWORD *)(a1 + 376);
  v29[1] = v19;
  v27 = 0;
  v21 = sub_822F0(v18, &v26, v17, v29);
  if ( v21 == -1 || (unsigned __int8)(v28 - 10) > 1u )
  {
LABEL_40:
    if ( v26 )
    {
      *(_QWORD *)&v27 = 0;
      qfree((__int64)v26);
    }
    return 0;
  }
  v22 = *v26;
  if ( (_QWORD)v27 != 1 )
  {
    v23 = v26 + 3;
    if ( 24LL * (_QWORD)v27 != 24 )
    {
      while ( v22 == *v23 )
      {
        v23 += 3;
        if ( v23 == &v26[3 * (_QWORD)v27] )
          goto LABEL_42;
      }
      goto LABEL_40;
    }
  }
LABEL_42:
  *(_QWORD *)(v20 + 8) = v22;
  sub_82740(*(_QWORD *)(a1 + 888), a1 + 840, &v26);
  if ( (*(_BYTE *)(a1 + 50) & 4) != 0 || (getinf(3) & 0x1006) == 0x1002 )
    v13 = 7;
  v24 = v29[1 - v21];
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v24;
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = v13;
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree((__int64)v26);
  }
  **(_DWORD **)(a1 + 376) = **(_DWORD **)(a1 + 376) & 0xFFFFFBFB | 4;
  *(_BYTE *)(a1 + 515) = 1;
  return v1;
}
