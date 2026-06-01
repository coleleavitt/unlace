__int64 __fastcall sub_1F0B80(__int64 a1, __int64 a2, int *a3, double a4)
{
  __int64 v6; // rbp
  unsigned __int64 v7; // r12
  __int64 v8; // rdi

  if ( (*(_BYTE *)a1 & 1) == 0 )
    return a2;
  if ( (unsigned __int8)sub_1EEA60((unsigned __int8 *)a1) )
    return a2;
  v6 = 0;
  v7 = 0;
  if ( !*(_QWORD *)(a1 + 440) )
    return a2;
  while ( 1 )
  {
    v8 = v6 + *(_QWORD *)(a1 + 432);
    if ( *(_QWORD *)(v8 + 16) == a2 && !(unsigned int)sub_1C2AD0((int *)v8, a3, a4) )
      break;
    ++v7;
    v6 += 104;
    if ( v7 >= *(_QWORD *)(a1 + 440) )
      return a2;
  }
  return a2 + 1;
}

