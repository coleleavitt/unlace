__int64 __fastcall sub_77FF0(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __int16 v6; // ax

  v6 = *(_WORD *)(a2 + 24);
  if ( v6 == 32 || v6 == 872 )
  {
    if ( (unsigned __int8)sub_30240(*(_QWORD **)(a1 + 16), a2, a2 + 80) )
    {
      *a3 = 0;
      *a4 = 1;
      return 1;
    }
    v6 = *(_WORD *)(a2 + 24);
  }
  if ( v6 != 71 && v6 != 475 || !(unsigned __int8)sub_30240(*(_QWORD **)(a1 + 16), a2, a2 + 120) )
    return 0;
  *a3 = 0;
  *a4 = 2;
  return 1;
}
