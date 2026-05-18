__int64 __fastcall sub_115F20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  while ( 1 )
  {
    if ( a1 == a3 || (_DWORD)a2 && *(_DWORD *)(a1 + 80) != (_DWORD)a2 )
      goto LABEL_3;
    if ( (*(_BYTE *)a1 & 0xFD) == 0 )
      break;
    if ( *(char *)(a1 + 84) < 0 )
    {
LABEL_3:
      a1 = *(_QWORD *)(a1 + 40);
      if ( !a1 )
        return 0;
    }
    else
    {
      sub_CCD80(a1);
      a1 = *(_QWORD *)(a1 + 40);
      if ( !a1 )
        return 0;
    }
  }
  if ( (*(_BYTE *)(a1 + 1) & 0x40) == 0 )
  {
    result = sub_115EC0(a1, a2);
    if ( (_DWORD)result )
      return result;
    goto LABEL_3;
  }
  return 2835;
}
