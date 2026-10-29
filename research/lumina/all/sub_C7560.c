__int64 __fastcall sub_C7560(__int64 a1, int a2)
{
  __int64 v2; // r13
  __int64 v3; // rbp
  unsigned __int8 *v4; // r14
  int v5; // eax
  __int64 result; // rax
  __int64 v7; // r10

  v2 = a1;
  v3 = a1 + 72LL * (unsigned int)(a2 - 1) + 72;
  do
  {
    while ( 1 )
    {
      v4 = *(unsigned __int8 **)(v2 + 56);
      v5 = 0;
      if ( v4 )
        v5 = strlen(*(const char **)(v2 + 56)) & 0x3FFFFFFF;
      result = sub_C49D0((v5 + (char)*v4) % 23, v4);
      if ( !result )
        break;
      *(_QWORD *)(v2 + 16) = *(_QWORD *)(result + 16);
      *(_QWORD *)(result + 16) = v2;
      v2 += 72;
      if ( v2 == v3 )
        return result;
    }
    *(_QWORD *)(v2 + 16) = 0;
    result = qword_2425A0[v7];
    *(_QWORD *)(v2 + 64) = result;
    qword_2425A0[v7] = v2;
    v2 += 72;
  }
  while ( v2 != v3 );
  return result;
}
