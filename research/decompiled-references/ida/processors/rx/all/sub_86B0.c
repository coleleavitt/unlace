__int64 __fastcall sub_86B0(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  char v3; // dl
  __int64 v4; // rcx
  __int64 v5; // rdx
  bool v6; // zf
  unsigned __int16 v7; // ax
  int v9; // ecx
  int v10; // edx
  int v11; // edx
  __int64 v12; // [rsp+8h] [rbp-30h] BYREF
  __int64 v13; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  if ( !get_func() )
    return v14 - __readfsqword(0x28u);
  v2 = *(_WORD *)(a2 + 24);
  if ( v2 > 0xA4u )
    return v14 - __readfsqword(0x28u);
  if ( v2 <= 0x3Au )
  {
    if ( v2 != 3 )
    {
      if ( v2 != 6 )
        return v14 - __readfsqword(0x28u);
      return add_auto_stkpnt();
    }
LABEL_5:
    if ( *(_BYTE *)(a2 + 41) != 5 )
      return v14 - __readfsqword(0x28u);
    v3 = *(_BYTE *)(a2 + 121);
    v4 = a2 + 120;
    if ( !v3 )
    {
      v3 = *(_BYTE *)(a2 + 81);
      v4 = a2 + 80;
    }
    if ( v3 != 1 || *(_WORD *)(v4 + 6) )
      return v14 - __readfsqword(0x28u);
    v5 = *(_QWORD *)(a2 + 48);
    v6 = v2 == 145;
    v7 = *(_WORD *)(a2 + 86);
    if ( v6 )
      v5 = -*(_QWORD *)(a2 + 48);
    v12 = v5;
    if ( v7 )
    {
      if ( !(unsigned __int8)sub_8580(&v13, *(_QWORD *)(a2 + 16), v7) )
        return v14 - __readfsqword(0x28u);
      v5 = v12 + v13;
      v12 += v13;
    }
  }
  else
  {
    switch ( *(_WORD *)(a2 + 24) )
    {
      case 0x3B:
      case 0x5D:
      case 0x5E:
      case 0x60:
      case 0x61:
      case 0x70:
      case 0x72:
        return add_auto_stkpnt();
      case 0x44:
        if ( *(_BYTE *)(a2 + 81) != 1
          || *(_WORD *)(a2 + 86)
          || *(_BYTE *)(a2 + 41) != 1
          || !(unsigned __int8)sub_8580(&v12, *(_QWORD *)(a2 + 16), *(unsigned __int16 *)(a2 + 46)) )
        {
          return v14 - __readfsqword(0x28u);
        }
        v5 = v12;
        break;
      case 0x5F:
      case 0x62:
      case 0xA3:
      case 0xA4:
        v9 = *(unsigned __int8 *)(a2 + 73) + 1 - *(unsigned __int8 *)(a2 + 46);
        if ( *(_BYTE *)(a2 + 33) == 7 )
        {
          v11 = -8;
          if ( v2 == 163 )
            v11 = 8;
          v5 = v9 * v11;
          v12 = v5;
        }
        else
        {
          if ( v2 == 95 || (v10 = -4, v2 == 163) )
            v10 = 4;
          v5 = v9 * v10;
          v12 = v5;
        }
        break;
      case 0x73:
        if ( *(_BYTE *)(a2 + 81) != 10 )
          return add_auto_stkpnt();
        v5 = 4 * (*(unsigned __int8 *)(a2 + 113) - *(unsigned __int8 *)(a2 + 86)) + 8;
        v12 = v5;
        break;
      case 0x91:
        goto LABEL_5;
      default:
        return v14 - __readfsqword(0x28u);
    }
  }
  if ( !v5 )
    return v14 - __readfsqword(0x28u);
  return add_auto_stkpnt();
}

