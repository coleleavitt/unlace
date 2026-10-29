unsigned __int64 __fastcall sub_2167E0(__int64 a1)
{
  int v1; // ecx
  __int64 i; // rax
  __int64 v3; // rdx
  int v4; // eax

  v1 = 0;
  for ( i = 0; (unsigned __int64)v1 < *(_QWORD *)(a1 + 440); i = v1 )
  {
    v3 = *(_QWORD *)(a1 + 432) + 104 * i;
    v4 = *(_DWORD *)(v3 + 24);
    if ( !*(_DWORD *)(v3 + 92) )
    {
      v4 &= 0xFFFBFF9F;
      *(_DWORD *)(v3 + 24) = v4;
    }
    if ( (v4 & 0x80u) != 0 )
      *(_DWORD *)(v3 + 24) = v4 & 0xFFFFFFBF;
    ++v1;
  }
  return sub_2B9C00(a1);
}

