__int64 __fastcall sub_F9EB0(__int64 a1, unsigned __int64 a2, unsigned int *a3, __int64 a4, double a5)
{
  int v5; // eax
  __int64 v8; // rax
  unsigned int v9; // r12d
  __int64 v10; // rbp
  __int64 v11; // rbx

  v5 = 0;
  if ( a2 > 1 )
  {
    do
    {
      a2 >>= 1;
      ++v5;
    }
    while ( a2 != 1 );
  }
  v8 = a1 + 104LL * v5;
  v9 = *(_DWORD *)(v8 + 72);
  v10 = *(_QWORD *)(*(_QWORD *)(v8 + 40) + 16LL);
  if ( !v10 )
    return 0;
  while ( !*(_QWORD *)(v10 + 80) || !*(_WORD *)(v10 + 94) )
  {
LABEL_11:
    v10 = *(_QWORD *)(v10 + 40);
    if ( !v10 )
      return 0;
  }
  v11 = 0;
  while ( *(_WORD *)(*(_QWORD *)(v10 + 8) + 2 * v11) != 0xFFFE
       || (unsigned int)sub_F9E50(a4, *(_QWORD *)(*(_QWORD *)(v10 + 80) + 24LL * (int)v11 + 8), v9, a5) )
  {
    if ( *(unsigned __int16 *)(v10 + 94) <= (int)++v11 )
      goto LABEL_11;
  }
  *a3 = v9;
  a3[1] = -2;
  return 1;
}
