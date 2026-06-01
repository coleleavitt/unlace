__int64 __fastcall sub_3EA8D0(__int64 a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  int v4; // r12d

  v4 = *(_DWORD *)(a4 + 24);
  if ( (v4 & 0x40) == 0 || (v4 & 0x4F) != ((unsigned int)find_custom_refinfo() | 0x40) )
    return 0;
  *a2 = 2;
  *a3 = 10;
  return 1;
}

