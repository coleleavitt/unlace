__int64 __fastcall sub_252BA0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ecx
  unsigned int v3; // edx
  __int64 v4; // rbp
  __int64 tinfo_size; // rax

  v2 = *(_DWORD *)(a2 + 8) - 51;
  if ( v2 > 0xF )
  {
    return 0;
  }
  else
  {
    v3 = 1;
    if ( ((1LL << v2) & 0x8241) == 0 )
    {
      v3 = 0;
      if ( *(_DWORD *)(a2 + 8) == 64 )
      {
        v4 = *(_QWORD *)(a1 + 64);
        tinfo_size = get_tinfo_size();
        return (unsigned int)sub_343460(v4, *(_QWORD *)(a2 + 24), tinfo_size) == 0;
      }
    }
  }
  return v3;
}

