__int64 __fastcall sub_3E9B60(__int64 a1, double a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx

  v2 = *(_QWORD *)(a1 + 4464);
  if ( !v2 )
    sub_3E6800(a2);
  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 4456) + 4 * v2 - 4);
  *(_QWORD *)(a1 + 4464) = v2 - 1;
  return v3;
}

