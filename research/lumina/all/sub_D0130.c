void __fastcall sub_D0130(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  switch ( (int)a2 )
  {
    case -15:
      sub_C9AE0(a1, (_QWORD *)a3);
      break;
    case -14:
    case -13:
    case -12:
    case -6:
      if ( a3 )
        goto LABEL_8;
      break;
    case -11:
      if ( !*(_QWORD *)(a1 + 760) )
        sub_D00D0(a3);
      break;
    case -10:
      if ( *(_QWORD *)(a1 + 760) )
        sub_C9AA0(a1, a3);
      else
        sub_C9940(a3, a2, a3, a4, a5, a6);
      break;
    case -8:
      if ( !*(_QWORD *)(a1 + 760) )
      {
        if ( a3 )
        {
          if ( (*(_DWORD *)a3)-- == 1 )
            sub_CFCD0((_QWORD *)a3);
        }
      }
      break;
    case -7:
      if ( (*(_BYTE *)(a3 + 4) & 0x10) != 0 )
LABEL_8:
        sub_C9250(a1, (_QWORD *)a3);
      break;
    default:
      return;
  }
}
