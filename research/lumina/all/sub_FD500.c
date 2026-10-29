__int64 __fastcall sub_FD500(__int64 a1, unsigned int a2, __int64 a3, double a4)
{
  __int64 i; // r12
  __int64 result; // rax
  __int64 v7; // rbx
  int v8; // ebp

  for ( i = a1; *(_BYTE *)i == 44; i = *(_QWORD *)(i + 24) )
    sub_FD500(*(_QWORD *)(i + 16), a2, a3);
  result = *(unsigned int *)(a3 + 20);
  v7 = *(_QWORD *)(a3 + 32);
  if ( (int)result > 0 )
  {
    v8 = 0;
    do
    {
      if ( (*(_BYTE *)(v7 + 18) & 4) == 0 )
      {
        result = sub_F80F0(0, *(char **)v7, i, a2, a4);
        if ( !(_DWORD)result )
          *(_WORD *)(v7 + 18) |= 4u;
      }
      ++v8;
      v7 += 56;
    }
    while ( *(_DWORD *)(a3 + 20) > v8 );
  }
  return result;
}
