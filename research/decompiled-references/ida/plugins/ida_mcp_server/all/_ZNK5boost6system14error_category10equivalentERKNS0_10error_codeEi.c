char __fastcall boost::system::error_category::equivalent(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  bool v4; // zf
  __int64 v5; // rdx

  v3 = *(_QWORD *)(a2 + 16);
  if ( v3 )
  {
    v4 = v3 == 1;
    LOBYTE(v3) = 0;
    if ( v4 )
    {
      if ( *(_QWORD *)(a1 + 8) == 0xB2AB117A257EDFD2LL )
        LOBYTE(v3) = *(_DWORD *)a2 + 1000 * (*(_QWORD *)(a2 + 8) % 0x1FFFF7uLL) == a3;
    }
    else if ( a3 == *(_DWORD *)a2 )
    {
      v5 = *(_QWORD *)(a2 + 8);
      v3 = *(_QWORD *)(v5 + 8);
      if ( v3 )
        LOBYTE(v3) = *(_QWORD *)(a1 + 8) == v3;
      else
        LOBYTE(v3) = a1 == v5;
    }
  }
  else if ( !a3 )
  {
    LOBYTE(v3) = *(_QWORD *)(a1 + 8) == 0xB2AB117A257EDFD1LL;
  }
  return v3;
}

