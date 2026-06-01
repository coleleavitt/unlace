__int64 __fastcall sub_1EB7C0(__int64 a1, __int64 a2, int *a3)
{
  __int64 v5; // rbp
  unsigned __int64 v6; // r12
  __int64 v7; // rdi

  if ( (*(_BYTE *)a1 & 1) == 0 )
    return a2;
  if ( (unsigned __int8)sub_1E96A0((unsigned __int8 *)a1) )
    return a2;
  v5 = 0;
  v6 = 0;
  if ( !*(_QWORD *)(a1 + 440) )
    return a2;
  while ( 1 )
  {
    v7 = v5 + *(_QWORD *)(a1 + 432);
    if ( *(_QWORD *)(v7 + 16) == a2 && !(unsigned int)sub_1BDD50((int *)v7, a3) )
      break;
    ++v6;
    v5 += 104;
    if ( v6 >= *(_QWORD *)(a1 + 440) )
      return a2;
  }
  return a2 + 1;
}

