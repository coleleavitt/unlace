unsigned __int64 __fastcall sub_53ED0(__int64 a1, unsigned __int8 *a2)
{
  int v2; // eax
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __m128i v6; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-10h]

  v2 = *a2;
  v7 = __readfsqword(0x28u);
  if ( (char)v2 > 74 )
  {
    v4 = (unsigned int)(v2 - 76);
    if ( (unsigned __int8)v4 <= 0x28u )
    {
      v5 = 0x18108808001LL;
      if ( _bittest64(&v5, v4) )
      {
LABEL_4:
        *(_QWORD *)(a1 + 8) = *((_QWORD *)a2 + 1);
      }
      else if ( (_BYTE)v4 == 14 )
      {
        *(_QWORD *)(a1 + 8) = a2[8];
      }
      else if ( (_BYTE)v4 == 7 )
      {
        *(_QWORD *)(a1 + 8) = *((__int16 *)a2 + 4);
      }
    }
  }
  else if ( (char)v2 > 65 )
  {
    switch ( (char)v2 )
    {
      case 'B':
        *(_QWORD *)(a1 + 8) = (char)a2[8];
        return v7 - __readfsqword(0x28u);
      case 'C':
        *(_QWORD *)(a1 + 8) = *((unsigned __int16 *)a2 + 4);
        return v7 - __readfsqword(0x28u);
      case 'D':
        if ( (unsigned int)ieee_realcvt() == 1 )
          goto LABEL_16;
        return v7 - __readfsqword(0x28u);
      case 'F':
        if ( (unsigned int)ieee_realcvt() == 1 )
LABEL_16:
          *(__m128i *)(a1 + 8) = _mm_load_si128(&v6);
        break;
      case 'I':
        *(_QWORD *)(a1 + 8) = *((int *)a2 + 2);
        break;
      case 'J':
        goto LABEL_4;
      default:
        return v7 - __readfsqword(0x28u);
    }
  }
  return v7 - __readfsqword(0x28u);
}

