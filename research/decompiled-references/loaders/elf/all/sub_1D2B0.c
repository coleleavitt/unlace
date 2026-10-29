__int64 __fastcall sub_1D2B0(__int64 *a1, int a2)
{
  __int64 v2; // rcx
  char v3; // dl
  __int64 v4; // rax
  char v5; // dl
  __int64 result; // rax
  unsigned int v7; // ebp
  char v8; // dl
  int v9; // eax

  v2 = *a1;
  v3 = *((_BYTE *)a1 + 50);
  v4 = a1[2];
  *((_WORD *)a1 + 24) = 0;
  v5 = v3 & 0xF;
  result = a1[1] + v4 - a1[3];
  if ( *(_DWORD *)(*(_QWORD *)(v2 + 16) + 464LL) != 8 )
  {
    v7 = result;
    switch ( v5 )
    {
      case 1:
        goto LABEL_6;
      case 2:
        goto LABEL_7;
      case 3:
        goto LABEL_4;
      case 4:
        goto LABEL_8;
      case 5:
        result = 4;
        *((_WORD *)a1 + 20) = 4;
        goto LABEL_28;
      case 6:
        result = (int)result;
        goto LABEL_19;
      case 7:
        result = (int)result;
        goto LABEL_23;
      case 8:
        result = (int)result;
        goto LABEL_14;
      case 9:
        result = (int)result;
        goto LABEL_16;
      case 10:
        goto LABEL_9;
      default:
        goto LABEL_26;
    }
  }
  v7 = result;
  switch ( v5 )
  {
    case 1:
LABEL_6:
      result = 1;
      goto LABEL_5;
    case 2:
LABEL_7:
      result = 9;
      goto LABEL_5;
    case 3:
LABEL_4:
      result = 7;
      goto LABEL_5;
    case 4:
LABEL_8:
      result = *(unsigned __int16 *)(v2 + 348);
LABEL_5:
      *((_DWORD *)a1 + 11) |= 0x40000000u;
      *((_WORD *)a1 + 20) = result;
      return result;
    case 5:
      *((_WORD *)a1 + 20) = 4;
      result = (unsigned __int64)(result + 0x80000000LL) >> 32;
      if ( result )
        *((_BYTE *)a1 + 48) = 1;
LABEL_28:
      a1[4] = v7;
      return result;
    case 6:
LABEL_19:
      *((_WORD *)a1 + 20) = 4;
      if ( (unsigned __int64)(result + 0x20000000) > 0x21FFFFFF || (v7 & 3) != 0 )
        *((_BYTE *)a1 + 48) = 1;
      *((_BYTE *)a1 + 49) = 1;
      v9 = 67108860;
      goto LABEL_12;
    case 7:
LABEL_23:
      *((_WORD *)a1 + 20) = 4;
      if ( (unsigned __int64)(result + 0x8000) > 0xFFFF || (v7 & 3) != 0 )
        *((_BYTE *)a1 + 48) = 1;
      *((_BYTE *)a1 + 49) = 1;
      v9 = 65532;
      goto LABEL_12;
    case 8:
LABEL_14:
      a1[4] = result;
      *((_WORD *)a1 + 20) = 12;
      return result;
    case 9:
LABEL_16:
      *((_WORD *)a1 + 20) = 1;
      if ( (unsigned __int64)(result + 0x8000) > 0xFFFF || (v7 & 3) != 0 )
        *((_BYTE *)a1 + 48) = 1;
      goto LABEL_10;
    case 10:
LABEL_9:
      *((_WORD *)a1 + 20) = 9;
      *((_BYTE *)a1 + 48) = (v7 & 3) != 0;
LABEL_10:
      v8 = getinf_flag(3, 32);
      v9 = 65532;
      if ( v8 )
      {
        v7 <<= 16;
        v9 = -262144;
      }
LABEL_12:
      result = a2 ^ v9 & (a2 ^ v7);
      a1[4] = result;
      break;
    default:
LABEL_26:
      *((_WORD *)a1 + 20) = -1;
      break;
  }
  return result;
}
