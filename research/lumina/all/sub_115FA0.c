__int64 __fastcall sub_115FA0(__int64 a1, __int64 a2, __int64 a3)
{
  if ( a1 )
  {
    while ( a3 == a1 || (_DWORD)a2 && (_DWORD)a2 != *(_DWORD *)(a1 + 80) )
    {
      a1 = *(_QWORD *)(a1 + 40);
      if ( !a1 )
        goto LABEL_6;
    }
    return sub_115F20(a1, a2, a3);
  }
  else
  {
LABEL_6:
    if ( a3 )
      *(_BYTE *)(a3 + 1) &= ~0x20u;
    return 0;
  }
}
