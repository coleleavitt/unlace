__int64 __fastcall sub_28420(__int64 a1, __int64 a2, _QWORD *a3)
{
  int tinfo_property; // edx
  __int64 result; // rax
  __int64 v6; // rdx

  tinfo_property = get_tinfo_property(*a3, 7);
  result = 1;
  if ( *(_DWORD *)(a1 + 16) != tinfo_property )
  {
    v6 = get_tinfo_property(*a3, 288);
    result = 0xFFFFFFFFLL;
    if ( v6 )
    {
      *(_DWORD *)(a1 + 8) |= 2u;
      return 0;
    }
  }
  return result;
}
