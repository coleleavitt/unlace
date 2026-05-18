__int64 __fastcall sub_D0AB0(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // esi

  if ( (*(_QWORD *)a2 & 0x8000000FFLL) == 0xA7 )
  {
    v3 = *(_DWORD *)(a2 + 44);
    result = 1;
    if ( v3 != a1[2] )
      return sub_D08E0((__int64)a1, v3);
  }
  else
  {
    result = 0;
    if ( (*(_DWORD *)(a2 + 4) & 0x804000) == 0 )
      return sub_D09A0(a1, a2);
  }
  return result;
}
