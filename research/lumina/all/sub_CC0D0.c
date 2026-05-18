__int64 __fastcall sub_CC0D0(__int64 a1, int a2)
{
  int v2; // edx
  unsigned int v3; // r12d

  while ( 1 )
  {
    v2 = *(unsigned __int8 *)(a1 + 22);
    if ( a2 <= v2 && (_BYTE)v2 != 5 )
      break;
    v3 = sub_CC090(a1, a2);
    if ( v3 != 5 || !(*(unsigned int (__fastcall **)(_QWORD))(a1 + 232))(*(_QWORD *)(a1 + 240)) )
      return v3;
  }
  return 0;
}
