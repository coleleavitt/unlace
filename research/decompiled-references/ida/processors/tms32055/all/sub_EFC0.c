char *__fastcall sub_EFC0(__int64 a1, __int64 a2, char *a3, __int64 a4, _BYTE *a5)
{
  char *result; // rax
  char v6; // dl
  char v7; // dl

  result = a3;
  *((_WORD *)a3 + 3) = 0;
  if ( a2 > 95 )
  {
    switch ( a2 >> 2 )
    {
      case 24LL:
        v7 = *a3;
        result[5] = 1;
        *((_WORD *)result + 3) = a2 & 3;
        *a5 = v7;
        result[1] = 8;
        *((_QWORD *)result + 1) = 96;
        return result;
      case 25LL:
        if ( a2 != 103 )
          goto LABEL_5;
        goto LABEL_7;
      case 26LL:
        goto LABEL_5;
      case 27LL:
        goto LABEL_7;
      case 28LL:
        v6 = *a3;
        result[5] = 1;
        *((_WORD *)result + 3) = a2 & 3;
        *a5 = v6;
        result[1] = 8;
        *((_QWORD *)result + 1) = 112;
        return result;
      default:
        if ( a2 == 119 )
        {
LABEL_7:
          *(_WORD *)(a4 + 24) = 0;
          result = nullptr;
        }
        else
        {
LABEL_5:
          a3[1] = 8;
          *((_QWORD *)a3 + 1) = a2;
        }
        break;
    }
  }
  else
  {
    a3[5] = 1;
    *((_WORD *)a3 + 3) = a2 & 0xF;
    *a5 = *a3;
    a3[1] = 8;
    *((_QWORD *)a3 + 1) = a2 & 0x70;
  }
  return result;
}

