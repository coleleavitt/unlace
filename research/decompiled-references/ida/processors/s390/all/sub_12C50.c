__int64 __fastcall sub_12C50(__int64 a1)
{
  __int16 v1; // ax
  __int64 v3; // rbp
  char v4; // al
  __int64 (__fastcall *v5)(__int64, __int64, __int64); // rcx
  char v6; // al
  unsigned __int8 v7; // bp
  unsigned __int8 v8; // al
  bool v9; // r12
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  unsigned __int8 v11; // al
  bool v12; // dl
  bool v13; // cc
  bool v14; // al
  char v15; // al
  __int16 v16; // bp
  char v17; // al
  _QWORD v18[7]; // [rsp+10h] [rbp-38h] BYREF

  v1 = *(_WORD *)(a1 + 40);
  v18[1] = __readfsqword(0x28u);
  if ( v1 != 716 && v1 != 650 || *(_BYTE *)(a1 + 97) != 3 )
    return 0;
  v3 = *(_QWORD *)(a1 + 864);
  v4 = *(_BYTE *)(v3 + 1);
  if ( !v4 )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v5 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL);
  if ( v5 != sub_110E0 )
  {
    v6 = v5(a1, a1 + 56, *(_QWORD *)(a1 + 864));
LABEL_13:
    if ( !v6 )
      return 0;
    goto LABEL_14;
  }
  if ( v4 != *(_BYTE *)(a1 + 57) )
    return 0;
  if ( v4 != 99 )
  {
    if ( v4 == 100 )
    {
      v6 = *(_QWORD *)(a1 + 64) == *(_QWORD *)(v3 + 8);
    }
    else
    {
      if ( v4 != 1 )
        return 0;
      v6 = *(_WORD *)(a1 + 62) == *(_WORD *)(v3 + 6);
    }
    goto LABEL_13;
  }
LABEL_14:
  v7 = *(_BYTE *)(v3 + 5);
  v8 = *(_BYTE *)(a1 + 61);
  v9 = v7 <= 0xF9u;
  if ( v8 > 0xF9u )
  {
    if ( v8 >= v7 && v7 > 0xF9u )
      goto LABEL_23;
  }
  else if ( v8 >= v7 || v7 > 0xF9u || *(_BYTE *)(a1 + 8) && v8 == 2 )
  {
    goto LABEL_23;
  }
  v10 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v10 == sub_11140 )
    return 0;
  v11 = v10(a1, a1 + 56);
  v12 = v9 || v11 < v7;
  v13 = v11 <= 0xF9u;
  v14 = v11 < v7 && v9;
  if ( !v13 )
    v14 = v12;
  if ( v14 )
    return 0;
LABEL_23:
  if ( *(_WORD *)(a1 + 40) != 716 )
    *(_BYTE *)(a1 + 515) = 1;
  v15 = sub_12700(*(_QWORD *)(a1 + 888), a1 + 16, *(unsigned __int16 *)(a1 + 102), 0, v18, 0, 0);
  v16 = *(char *)(a1 + 129);
  if ( !v15 )
  {
    if ( !(unsigned __int8)sub_12700(*(_QWORD *)(a1 + 888), a1 + 16, (char)v16, 0, v18, 0, 0) )
      return 0;
    v16 = *(_WORD *)(a1 + 102);
  }
  v17 = getinf_flag(3, 4);
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v16;
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = v17 == 0 ? 2 : 7;
  *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) = v18[0];
  return 1;
}

