__int64 __fastcall sub_330E20(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx

  v2 = *(_QWORD *)(a1 + 48);
  if ( !v2 )
    return 0xFFFFFFFFLL;
  v3 = 0;
  while ( a2 != v2 )
  {
    v2 = *(_QWORD *)(v2 + 8);
    ++v3;
    if ( !v2 )
      return 0xFFFFFFFFLL;
  }
  return v3;
}

