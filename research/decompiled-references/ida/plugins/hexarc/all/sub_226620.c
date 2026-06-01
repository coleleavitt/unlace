__int64 __fastcall sub_226620(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 *a6)
{
  if ( (unsigned __int8)*a3 && *(_QWORD *)(a1 + 8) )
  {
    if ( (*(_BYTE *)(a1 + 2) & 4) == 0 )
    {
      get_tinfo_details();
      return 1;
    }
    if ( a6 )
      sub_652F0(a6);
  }
  return 0;
}

