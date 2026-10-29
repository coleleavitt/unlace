_BOOL8 __fastcall sub_F87B0(__int64 a1, __int64 a2, _BYTE *a3, unsigned int a4, unsigned int a5, double a6)
{
  __int64 v11; // [rsp+8h] [rbp-40h]

  while ( 2 )
  {
    if ( (unsigned int)sub_F80F0(a1, (char *)a2, (__int64)a3, a4, a6) )
    {
      switch ( *(_BYTE *)a2 )
      {
        case 0x13:
        case 0x72:
          goto LABEL_6;
        case 0x30:
          if ( a5 )
            return 0;
          v11 = *(_QWORD *)(a2 + 32);
          if ( !(unsigned int)sub_F87B0(a1, *(_QWORD *)(v11 + 8), a3, a4, 1)
            && !(unsigned int)sub_F87B0(a1, *(_QWORD *)(v11 + 32), a3, a4, 1) )
          {
            goto LABEL_6;
          }
          return 1;
        case 0x31:
          if ( !a5 )
            goto LABEL_6;
          if ( (*(_BYTE *)(a2 + 5) & 8) != 0 )
            return 0;
          a2 = *(_QWORD *)(a2 + 16);
          a5 = 1;
          continue;
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x67:
        case 0x68:
        case 0x69:
        case 0x6A:
        case 0x6B:
        case 0x6F:
          a5 = 1;
          goto LABEL_8;
        case 0x66:
        case 0x6C:
        case 0x6D:
        case 0x6E:
LABEL_8:
          if ( !(unsigned int)sub_F87B0(a1, *(_QWORD *)(a2 + 24), a3, a4, a5) )
            goto LABEL_9;
          return 1;
        case 0x71:
        case 0xAD:
        case 0xAE:
        case 0xB5:
LABEL_9:
          a2 = *(_QWORD *)(a2 + 16);
          continue;
        case 0xAF:
          if ( a5 || *(_BYTE *)(a2 + 2) != 45 )
            return 0;
LABEL_6:
          a2 = *(_QWORD *)(a2 + 16);
          a5 = 1;
          continue;
        default:
          return 0;
      }
    }
    return *a3 != 121;
  }
}
