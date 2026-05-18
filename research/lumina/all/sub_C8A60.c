__int64 __fastcall sub_C8A60(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  int v3; // ecx
  int v4; // esi
  int v5; // ecx
  int v6; // eax
  int v7; // edx
  bool v8; // cc
  int v9; // eax

  if ( *((_BYTE *)a1 + 40) )
  {
    v2 = *a1;
    result = 0x1A6401072FDFFLL;
    if ( (unsigned __int64)*a1 > 0x1A6401072FDFFLL )
    {
      *((_OWORD *)a1 + 2) = 0;
      *((_BYTE *)a1 + 46) = 1;
      *(_OWORD *)a1 = 0;
      *((_OWORD *)a1 + 1) = 0;
    }
    else
    {
      *((_BYTE *)a1 + 42) = 1;
      v3 = (int)(((double)(int)((v2 + 43200000) / 0x5265C00uLL) - 1867216.25) / 36524.25)
         + (v2 + 43200000) / 0x5265C00uLL
         + 1525
         - (int)(((double)(int)((v2 + 43200000) / 0x5265C00uLL) - 1867216.25) / 36524.25) / 4;
      v4 = (int)(((double)v3 - 122.1) / 365.25);
      v5 = v3 - 36525 * (v4 & 0x7FFFu) / 0x64;
      v6 = (int)((double)v5 / 30.6001);
      v7 = v6 - 13;
      v8 = v6 <= 13;
      *((_DWORD *)a1 + 4) = v5 - (int)((double)v6 * 30.6001);
      v9 = v6 - 1;
      if ( !v8 )
        v9 = v7;
      *((_DWORD *)a1 + 3) = v9;
      result = v4 + (unsigned int)(v9 < 3) - 4716;
      *((_DWORD *)a1 + 2) = result;
    }
  }
  else
  {
    *((_DWORD *)a1 + 4) = 1;
    *((_BYTE *)a1 + 42) = 1;
    a1[1] = 0x1000007D0LL;
    return 0x1000007D0LL;
  }
  return result;
}
