__int64 __fastcall sub_13B260(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax

  v3 = a1[7];
  if ( !a2 || v3 != a2 )
    return 0;
  if ( *(_DWORD *)v3 == 43 )
    return a1[1];
  if ( *(_DWORD *)v3 != 44 || *(_BYTE *)(v3 + 64) != 7 )
    return 0;
  v4 = a1[8];
  v5 = *(unsigned int *)(v3 + 72);
  if ( (unsigned int)v5 >= *(_DWORD *)(v4 + 64) )
    sub_1346B0(a3);
  return *(_QWORD *)(*(_QWORD *)(v4 + 528) + 8 * v5);
}

