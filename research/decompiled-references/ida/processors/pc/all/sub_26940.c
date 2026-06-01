__int64 __fastcall sub_26940(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int *a5,
        __int64 *a6,
        _QWORD *a7)
{
  __int64 func; // r14
  unsigned __int64 *v9; // rax
  bool v10; // r15
  __int64 result; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  int v14; // eax
  int v15; // ecx
  __int64 v16; // rax
  char v17; // al
  bool v21; // [rsp+3Fh] [rbp-1A9h]
  __int128 v22; // [rsp+40h] [rbp-1A8h] BYREF
  __int64 v23; // [rsp+50h] [rbp-198h]
  __int64 v24; // [rsp+58h] [rbp-190h]
  __int64 v25; // [rsp+60h] [rbp-188h]
  _BYTE v26[6]; // [rsp+68h] [rbp-180h] BYREF
  unsigned __int16 v27; // [rsp+6Eh] [rbp-17Ah]
  char v28; // [rsp+91h] [rbp-157h]
  unsigned __int16 v29; // [rsp+96h] [rbp-152h]
  __int64 v30; // [rsp+A0h] [rbp-148h]
  char v31; // [rsp+B0h] [rbp-138h]
  char v32; // [rsp+B1h] [rbp-137h]
  unsigned __int64 v33; // [rsp+1A8h] [rbp-40h] BYREF

  v33 = __readfsqword(0x28u);
  v23 = -1;
  v24 = 0;
  func = get_func();
  v9 = (unsigned __int64 *)v26;
  v25 = 0;
  v22 = -1;
  do
  {
    *(_WORD *)v9 = 0;
    v9 += 5;
    *((_WORD *)v9 - 19) = 0;
    *((_WORD *)v9 - 18) = 0;
    *((_DWORD *)v9 - 2) = 0;
    *((_WORD *)v9 - 17) = 0;
    *((_OWORD *)v9 - 2) = 0;
    *(v9 - 2) = 0;
  }
  while ( &v33 != v9 );
  while ( 1 )
  {
    do
    {
      if ( decode_preceding_insn() == -1 )
        return 0;
      v10 = v21;
    }
    while ( v21 );
    if ( !(unsigned __int8)sub_6B050(func, v23, 0.0) )
      return 0;
    if ( (_WORD)v24 == 92 )
      break;
    if ( (_WORD)v24 == 16 || (_WORD)v24 == 143 )
      return 0;
LABEL_9:
    if ( (unsigned __int8)sub_669F0(a1, &v22, a3, 0.0) )
      return 0;
  }
  if ( v26[1] != 1 || a3 != v27 )
    goto LABEL_9;
  if ( v28 == 4 )
    goto LABEL_17;
  if ( v28 == 2 )
  {
    if ( v31 )
    {
      v12 = v30;
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 )
        v12 = (int)v30;
      if ( !((unsigned __int8)v32 >> 6) )
      {
        v17 = v32 >> 3;
        if ( (v24 & 0x1000000000LL) != 0 && (v25 & 0x200) != 0 )
        {
          v15 = v17 | 8;
          goto LABEL_28;
        }
        v15 = v17;
        if ( v17 != 4 )
          goto LABEL_28;
      }
LABEL_27:
      v15 = -1;
      goto LABEL_28;
    }
    return 0;
  }
  if ( v28 != 3 )
    return 0;
LABEL_17:
  v12 = (int)v30;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) == 8 )
    v12 = v30;
  if ( v31 )
  {
    v15 = v32 & 7;
    if ( (v24 & 0x1000000000LL) == 0 )
      goto LABEL_39;
    if ( (v25 & 0x100) != 0 )
      v15 = v32 & 7 | 8;
    if ( (v25 & 0x200) == 0 )
    {
LABEL_39:
      if ( (v32 & 0x38) == 0x20 )
        goto LABEL_40;
    }
    goto LABEL_27;
  }
  v13 = v29;
  v14 = WORD2(v24) & 0x1018;
  if ( v14 != 4096 && v14 != 8 )
  {
    v15 = v29;
    v10 = v29 == 4;
    goto LABEL_28;
  }
  if ( v29 == 0xFFFF )
  {
    v16 = sub_21490();
    goto LABEL_49;
  }
  if ( v29 > 7u )
LABEL_54:
    sub_21470(v13);
  v16 = v29;
  v15 = dword_94FA0[v29];
  if ( v15 == -1 )
  {
LABEL_49:
    switch ( v16 )
    {
      case 0LL:
      case 2LL:
        v15 = 6;
        goto LABEL_28;
      case 1LL:
      case 3LL:
        v15 = 7;
        goto LABEL_28;
      case 4LL:
      case 5LL:
      case 6LL:
      case 7LL:
        goto LABEL_27;
      default:
        goto LABEL_54;
    }
  }
  if ( v29 <= 3u )
    goto LABEL_27;
LABEL_40:
  v10 = v15 == 4;
LABEL_28:
  result = a4;
  LOBYTE(result) = v10 || v15 == a4;
  if ( !(_BYTE)result )
    return 0;
  if ( a7 )
    *a7 = v12;
  if ( a6 )
    *a6 = v23;
  if ( a5 )
    *a5 = v15;
  return result;
}
