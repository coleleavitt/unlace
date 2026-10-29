__int64 __fastcall sub_19E500(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4, double a5)
{
  if ( *(_DWORD *)a4 != 12 )
  {
    if ( !under_debugger )
      sub_383060(0xC9C1u, a5);
    BUG();
  }
  if ( *(_BYTE *)(a4 + 32) == 4 && (unsigned __int8)sub_19E400(a1, a2, *(int **)(a4 + 40)) )
  {
    *a3 = a4 + 48;
  }
  else
  {
    if ( *(_BYTE *)(a4 + 48) != 4 || !(unsigned __int8)sub_19E400(a1, a2, *(int **)(a4 + 56)) )
      return 0;
    *a3 = a4 + 32;
  }
  return 1;
}

