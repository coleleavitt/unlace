__int64 __fastcall sub_1049F0(__int64 a1, _BYTE *a2, _DWORD *a3, __int64 a4)
{
  *a3 = 1;
  if ( *a2 )
  {
    if ( *a2 == 46 )
    {
      sub_104250((unsigned int *)a1, 7, 0, 0);
LABEL_5:
      if ( !*(_BYTE *)(a1 + 32) )
        return sub_104AC0(a1, (unsigned int)(*(_DWORD *)a1 - 1), a2, a3, a4);
      return 0;
    }
    if ( !memcmp(a2, "[0]", 3u) )
    {
      sub_104250((unsigned int *)a1, 6, 0, 0);
      goto LABEL_5;
    }
    return 0;
  }
  sub_104250((unsigned int *)a1, 0, 0, 0);
  if ( *(_BYTE *)(a1 + 32) )
    return 0;
  return *(_QWORD *)(a1 + 8) + 16LL * (unsigned int)(*(_DWORD *)a1 - 1);
}
