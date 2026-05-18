void __fastcall sub_D8230(__int64 a1, _QWORD *a2)
{
  bool v2; // zf

  if ( a2 )
  {
    if ( a1 && *(_QWORD *)(a1 + 760) || (v2 = *((_DWORD *)a2 + 11) == 1, --*((_DWORD *)a2 + 11), v2) )
      sub_D7FB0(a1, a2);
  }
}
