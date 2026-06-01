__int64 __fastcall sub_BC70(__int64 a1, __int64 a2, char a3, unsigned __int8 a4)
{
  unsigned int v4; // edx
  char v5; // di
  int v6; // edx
  __int16 v7; // cx
  __int64 v8; // rcx
  char v10; // cl
  unsigned __int8 v11; // r8
  __int64 result; // rax
  char v13; // dl
  char v14; // cl
  int v15; // eax
  __int16 v16; // ax
  __int64 v17; // r8

  v10 = *(_BYTE *)(a1 + 227);
  v11 = v10 & 3;
  switch ( a3 )
  {
    case 'h':
      result = 0;
      if ( (unsigned __int8)(v10 - 113) <= 6u )
        goto LABEL_15;
      break;
    case 'i':
LABEL_15:
      LOWORD(v17) = *(_BYTE *)(a1 + 227) & 3;
      if ( !*(_DWORD *)(a2 + 28) )
        JUMPOUT(0xAAB1);
      v4 = 0;
      if ( (a4 & 8) == 0 )
      {
        if ( !(_BYTE)v17 )
          JUMPOUT(0xAA68);
        *(_BYTE *)(a2 + 41) = 4;
        v5 = *(_BYTE *)(a2 + 28);
        *(_WORD *)(a2 + 46) = a4 + 32;
        *(_BYTE *)(a2 + 45) = v5 - 1;
        v6 = *(_DWORD *)(a2 + 28);
        if ( v6 == 3 )
          JUMPOUT(0xAAA0);
        v7 = 2 * v17;
        v17 = (unsigned __int8)v17;
        v8 = v7 & 0x1FE;
        if ( v6 == 2 )
          v17 = v8;
        *(_BYTE *)(a2 + 73) |= 0x80u;
        *(_QWORD *)(a2 + 56) = v17;
        v4 = 1;
      }
      result = v4;
      break;
    case 'k':
      if ( v11 | a4 & 0xFD )
        goto LABEL_18;
      result = sub_84D0(a1, a2, a2 + 40, a4 == 0 ? 1048 : 1050);
      break;
    case 'l':
      result = 0;
      if ( (v10 & 0xF0) == 0x70 )
        goto LABEL_6;
      break;
    case 'm':
LABEL_6:
      v13 = 19;
      if ( v11 )
      {
        v13 = 17;
        if ( v11 != 1 )
          v13 = 2 * (v11 == 2) + 16;
      }
      result = 0;
      v14 = a4 & 8;
      if ( (a4 & 8) == 0 )
      {
        v15 = *(_DWORD *)(a2 + 28);
        *(_BYTE *)(a2 + 41) = 3;
        if ( v15 )
          v14 = v15 - 1;
        *(_BYTE *)(a2 + 45) = v14;
        v16 = *(_WORD *)(a1 + 224) > 0xFFFu;
        *(_BYTE *)(a2 + 72) = v13;
        *(_WORD *)(a2 + 46) = a4 + 32 * v16;
        result = 1;
      }
      break;
    case 'n':
      result = 0;
      if ( (v10 & 0xF0) == 0x70 )
        goto LABEL_3;
      break;
    case 'o':
LABEL_3:
      result = 0;
      if ( (a4 & 8) == 0 )
      {
        sub_8440(a1, a2, a2 + 40, v10, 0, a4);
        result = 1;
      }
      break;
    default:
LABEL_18:
      result = 0;
      break;
  }
  return result;
}

