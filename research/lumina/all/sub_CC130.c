__int64 (__fastcall *__fastcall sub_CC130(__int64 a1, int a2))()
{
  *(_DWORD *)(a1 + 48) = a2;
  *(_BYTE *)(a1 + 21) = 6;
  if ( a2 )
  {
    *(_QWORD *)(a1 + 272) = sub_C3690;
    return (__int64 (__fastcall *)())sub_C3690;
  }
  else if ( *(_BYTE *)(a1 + 27) )
  {
    *(_QWORD *)(a1 + 272) = sub_10F6E0;
    return sub_10F6E0;
  }
  else
  {
    *(_QWORD *)(a1 + 272) = sub_10F3A0;
    return sub_10F3A0;
  }
}
