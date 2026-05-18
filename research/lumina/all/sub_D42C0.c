__int64 __fastcall sub_D42C0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx

  v6 = a1;
  if ( *(_BYTE *)(a1 + 103) )
  {
    if ( !*(_DWORD *)(a1 + 220) )
      sub_D4260(a1);
  }
  else if ( a2 != 3082 )
  {
    return a2 & *(_DWORD *)(a1 + 88);
  }
  *(_DWORD *)(v6 + 80) = 7;
  sub_CA220((__int64 *)v6, 7, a3, v6, a5, a6);
  return 7;
}
