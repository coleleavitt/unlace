__int64 __fastcall sub_EFB90(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v3; // ebx

  if ( !*(_BYTE *)(a1 + 320) )
    return 0;
  v2 = *(_QWORD *)(a1 + 464);
  v3 = 0;
  if ( (int)v2 > 0 )
  {
    while ( *(_DWORD *)sub_139840(a1, v3) != 1 )
    {
      if ( (_DWORD)v2 == ++v3 )
        return 0;
    }
  }
  if ( (_DWORD)v2 == v3 )
    return 0;
  else
    return sub_372620(a1, a2);
}

