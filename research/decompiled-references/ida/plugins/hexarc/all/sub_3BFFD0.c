__int64 __fastcall sub_3BFFD0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v5; // rax
  unsigned int v6; // edx

  v2 = *(unsigned int *)(a1 + 12);
  if ( (unsigned int)v2 >= *(_DWORD *)(a2 + 64) )
    return 1;
  v3 = *(_QWORD *)(*(_QWORD *)(a2 + 528) + 8 * v2);
  if ( !v3 )
    return 1;
  if ( *(_QWORD *)(v3 + 8) )
    return 0;
  v5 = sub_329800(v3, *(_DWORD *)(a1 + 16));
  v6 = 1;
  if ( v5 )
    LOBYTE(v6) = *(_QWORD *)(v5 + 8) == 0;
  return v6;
}

