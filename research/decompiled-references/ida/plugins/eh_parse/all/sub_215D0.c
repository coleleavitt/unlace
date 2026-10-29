__int64 __fastcall sub_215D0(__int64 a1)
{
  unsigned __int64 v3; // rcx
  __int64 v4; // rax
  unsigned __int64 v5; // rsi
  int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int16 v13; // dx
  __int64 v14; // [rsp+8h] [rbp-120h] BYREF
  _BYTE v15[4]; // [rsp+10h] [rbp-118h] BYREF
  unsigned __int16 v16; // [rsp+14h] [rbp-114h]
  __int16 v17; // [rsp+6Ch] [rbp-BCh]
  unsigned int v18; // [rsp+A0h] [rbp-88h]
  unsigned int v19; // [rsp+A4h] [rbp-84h]
  unsigned __int64 v20; // [rsp+108h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 64) = 1;
  if ( (unsigned int)getinf(5) != 11 )
    return 0;
  netnode_check(&v14, "$ PE header", 0, 0);
  if ( (unsigned __int64)netnode_valobj(v14, v15, 248) <= 0x97 )
    return 0;
  if ( !v18 )
    return 0;
  v3 = v19;
  if ( v18 >= v18 + v19 )
    return 0;
  v4 = v16;
  *(_QWORD *)(a1 + 24) = 8;
  if ( (unsigned __int16)v4 <= 0x1F2u )
  {
    if ( (unsigned __int16)v4 > 0x1EFu )
    {
      if ( v17 == 9 || v17 == 14 )
      {
LABEL_22:
        v5 = 8;
        v6 = 1;
        goto LABEL_14;
      }
    }
    else
    {
      if ( (unsigned __int16)v4 > 0x1C4u )
        return 0;
      if ( (unsigned __int16)v4 > 0x1A1u )
      {
        LOWORD(v4) = v4 - 418;
        switch ( v4 )
        {
          case 0LL:
          case 1LL:
          case 2LL:
          case 4LL:
          case 6LL:
          case 30LL:
          case 32LL:
            goto LABEL_22;
          case 34LL:
            v5 = 8;
            v6 = 2;
            goto LABEL_14;
          default:
            return 0;
        }
      }
      if ( (unsigned __int16)v4 > 0x169u )
      {
        if ( (_WORD)v4 != 388 )
          return 0;
      }
      else if ( (unsigned __int16)v4 <= 0x161u )
      {
        return 0;
      }
    }
    goto LABEL_13;
  }
  if ( (_WORD)v4 == 0x8664 )
  {
    *(_QWORD *)(a1 + 24) = 12;
    v5 = 12;
    v6 = 3;
    goto LABEL_14;
  }
  if ( (unsigned __int16)v4 <= 0x8664u )
  {
    LOBYTE(v13) = v4;
    HIBYTE(v13) = BYTE1(v4) & 0xFE;
    if ( v13 != 614 && (_WORD)v4 != 1126 )
      return 0;
LABEL_13:
    *(_QWORD *)(a1 + 24) = 20;
    v5 = 20;
    v6 = 4;
    goto LABEL_14;
  }
  v5 = 8;
  v6 = 5;
  if ( (_WORD)v4 != 0xAA64 )
    return 0;
LABEL_14:
  *(_QWORD *)(a1 + 48) = v3;
  if ( v3 % v5 || v3 < v5 )
    return 0;
  if ( (unsigned int)getinf(5) == 11 )
  {
    v7 = sub_21300();
    *(_QWORD *)(a1 + 32) = v7;
    if ( v7 != -1 )
      goto LABEL_18;
    return 0;
  }
  *(_QWORD *)(a1 + 32) = 0;
  v7 = 0;
LABEL_18:
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 16LL) & (v7 + v18);
  *(_QWORD *)(a1 + 40) = v8;
  v9 = getseg(v8);
  v10 = *(_QWORD *)(a1 + 48);
  if ( v9 )
  {
    v11 = *(_QWORD *)(a1 + 40);
    v12 = *(_QWORD *)(v9 + 8);
    if ( v12 < v11 + v10 )
    {
      v10 = v12 - v11;
      *(_QWORD *)(a1 + 48) = v12 - v11;
    }
  }
  *(_DWORD *)(a1 + 60) = v6;
  *(_DWORD *)(a1 + 56) = v10 / *(_QWORD *)(a1 + 24);
  return 1;
}

