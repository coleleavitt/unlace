__int64 __fastcall sub_12CBD0(__int64 a1, unsigned __int64 *a2, char a3, __m128i a4)
{
  __int64 result; // rax
  __int16 v5; // ax
  __int64 v6; // rcx
  _QWORD v7[2]; // [rsp+0h] [rbp-38h] BYREF
  char v8; // [rsp+10h] [rbp-28h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  switch ( *(_DWORD *)a1 )
  {
    case 2:
      v6 = *(unsigned int *)(a1 + 68);
      if ( a3 == *(_BYTE *)(a2[12] + 145) )
        v6 = (unsigned int)-(int)v6;
      sub_12C760(a1 + 48, a2, *(_QWORD *)(a1 + 24), v6, a4);
      goto LABEL_5;
    case 4:
    case 7:
      v5 = 257;
      goto LABEL_4;
    case 0xA:
      if ( !a3 || *(_DWORD *)(a1 + 36) != 2 * *(_DWORD *)(a1 + 68) )
        goto LABEL_2;
      *(_DWORD *)a1 = 11;
      goto LABEL_5;
    case 0xB:
      if ( a3 || *(_DWORD *)(a1 + 36) != 2 * *(_DWORD *)(a1 + 68) )
        goto LABEL_2;
      *(_DWORD *)a1 = 10;
      goto LABEL_5;
    case 0x13:
    case 0x14:
    case 0x15:
      v5 = 273;
LABEL_4:
      v8 = a3;
      v7[0] = &off_4DD908;
      v7[1] = a2;
      if ( !(unsigned __int8)sub_121DB0(a1, (__int64)v7, v5) )
        goto LABEL_2;
LABEL_5:
      sub_15BC70((unsigned int *)a1, a2, 0, 0, nullptr, nullptr, a4, 0);
      result = 1;
      break;
    default:
LABEL_2:
      result = 0;
      break;
  }
  return result;
}

