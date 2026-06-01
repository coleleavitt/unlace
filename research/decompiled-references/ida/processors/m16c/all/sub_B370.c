__int64 __fastcall sub_B370(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax
  char v6; // r14
  char v7; // bl
  unsigned __int8 v8; // cl
  char v9; // di
  char v10; // di

  result = insn_get_next_byte();
  v6 = (unsigned __int8)result >> 4;
  if ( (((unsigned __int8)result >> 4) & 8) != 0 )
  {
    v7 = result;
    result = insn_get_next_byte();
    v8 = result & 0xF;
    v9 = (unsigned __int8)result >> 4;
    switch ( v6 & 7 )
    {
      case 0:
        if ( v8 >> 1 != 7 )
          goto LABEL_10;
        result = (2 * v9) & 6 | (unsigned int)(result & 1);
        if ( (result & 0xFFFFFFFD) != 1 || *(_DWORD *)(a1 + 4328) == 5 )
        {
          result = *((unsigned int *)qword_1ADC0 + (int)result);
          *a3 = result;
        }
        else
        {
          *a3 = -1;
        }
        break;
      case 1:
        if ( v8 >> 1 != 7 )
          goto LABEL_10;
        if ( (result & 1) == 0 )
        {
          v10 = ((unsigned __int8)result >> 4) & 3;
          switch ( v10 )
          {
            case 1:
              *a3 = 64;
              break;
            case 2:
              *a3 = 167;
              break;
            case 0:
              *a3 = 62;
              break;
          }
        }
        break;
      case 2:
        if ( *(_DWORD *)(a1 + 4328) != 5 )
          goto LABEL_5;
        if ( (v7 & 1) == 0 )
          goto LABEL_6;
        if ( v8 != 15 )
          goto LABEL_18;
        result = *((unsigned int *)qword_1ADA0 + (((unsigned __int8)result >> 4) & 3));
        *a3 = result;
        break;
      case 3:
LABEL_5:
        if ( (v7 & 1) != 0 )
        {
LABEL_18:
          result = *((unsigned int *)qword_1AD40 + (result & 0xF));
          if ( (unsigned int)(result - 69) > 1 )
            goto LABEL_8;
        }
        else
        {
LABEL_6:
          if ( v8 != 14 )
          {
            result = *((unsigned int *)qword_1AD40 + (result & 0xF));
            goto LABEL_8;
          }
          result = *((unsigned int *)qword_1AD80 + ((2 * v9) & 6 | v6 & 1u));
          *a3 = result;
        }
        break;
      case 5:
        result = *((unsigned int *)qword_1ADE0 + (v7 & 1 | ((unsigned __int8)result >> 2) & 0xEu));
        *a3 = result;
        break;
      default:
LABEL_10:
        result = *((unsigned int *)qword_1AD40 + (result & 0xF));
        if ( (unsigned int)(result - 69) > 1 || (v7 & 1) == 0 )
LABEL_8:
          *a3 = result;
        break;
    }
  }
  return result;
}

