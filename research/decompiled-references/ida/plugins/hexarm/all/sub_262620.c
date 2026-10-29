__int64 __fastcall sub_262620(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // edx

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 == 1 )
    return 1;
  v3 = (unsigned int)(v2 - 16);
  if ( (unsigned int)v3 <= 0x30 )
  {
    v4 = 0x82003FF8003FLL;
    v5 = 1;
    if ( !_bittest64(&v4, v3) )
    {
      v5 = 0;
      if ( (_DWORD)v3 == 48 && (*(_BYTE *)(a1 + 56) & 0x10) != 0 )
      {
        v5 = 1;
        if ( a2 )
          LOBYTE(v5) = *(_DWORD *)(a2 + 8) != 58;
      }
    }
    return v5;
  }
  return 0;
}

