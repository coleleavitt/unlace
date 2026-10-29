__int64 __fastcall sub_855C0(__int64 a1, signed int a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx

  if ( (unsigned int)a2 > 0x63 )
    return 0xFFFFFFFFLL;
  v2 = *(_QWORD *)(a1 + 24LL * a2 + 16);
  v3 = v2 + 32LL * *(_QWORD *)(a1 + 24LL * a2 + 24);
  if ( v2 == v3 )
    return 0xFFFFFFFFLL;
  while ( *(_WORD *)v2 != 0xFFFF && *(_WORD *)(a1 + 8) != *(_WORD *)v2 )
  {
    v2 += 32;
    if ( v3 == v2 )
      return 0xFFFFFFFFLL;
  }
  if ( !v2 )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(v2 + 4);
}

