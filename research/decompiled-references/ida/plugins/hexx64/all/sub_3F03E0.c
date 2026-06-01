__int64 __fastcall sub_3F03E0(__int64 a1, __int64 a2, int a3)
{
  if ( *(_DWORD *)(a1 + 84) != 8 || ((a3 - 32) & 0xFFFFFFDF) != 0 || sub_CFF70() <= 0 )
    return 0;
  get_idati();
  create_tinfo();
  return 1;
}

