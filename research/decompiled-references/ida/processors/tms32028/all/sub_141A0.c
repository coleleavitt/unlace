__int64 __fastcall sub_141A0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  int v5; // esi

  if ( *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) )
  {
    if ( sub_12B70(a1) )
      return 0;
    if ( !*(_BYTE *)(*(_QWORD *)(a1 + 864) + 41LL) )
      return 0;
    result = sub_14060(a1);
    if ( !(_BYTE)result )
      return 0;
    v2 = 0;
    if ( *(_QWORD *)(a1 + 432) != -1 )
      v2 = -*(_QWORD *)(*(_QWORD *)(a1 + 376) + 16LL);
    if ( *(_QWORD *)(a1 + 896) == v2 )
    {
      v3 = *(_QWORD *)(a1 + 864);
      if ( (*(_BYTE *)(v3 + 72) & 1) != 0 )
        ++*(_WORD *)(*(_QWORD *)(a1 + 376) + 4LL);
      *(_QWORD *)(*(_QWORD *)(a1 + 376) + 24LL) = *(_QWORD *)(v3 + 64);
      v4 = *(_QWORD *)(a1 + 376);
      v5 = *(unsigned __int16 *)(a1 + 62);
      *(_BYTE *)(v4 + 68) = *(_BYTE *)(a1 + 61);
      *(_DWORD *)(v4 + 64) = v5;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    if ( under_debugger )
      BUG();
    interr();
    return sub_14260(10322);
  }
  return result;
}

