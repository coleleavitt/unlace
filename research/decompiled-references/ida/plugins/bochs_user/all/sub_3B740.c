__int64 __fastcall sub_3B740(_QWORD *a1, __int64 a2)
{
  __int64 *v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  __int64 *v5; // r9
  unsigned __int64 v6; // rax
  __int64 v7; // r8

  v2 = (__int64 *)a1[7];
  v3 = a1[3];
  v4 = a1[8];
  v5 = &v2[v4];
  if ( v4 * 8 )
  {
    do
    {
      v6 = a2 + v3;
      v7 = *v2;
      if ( a2 + v3 < v3 )
        v6 = v3;
      if ( v6 < *(_QWORD *)(v7 + 32) )
        return v3;
      ++v2;
      v3 = *(_QWORD *)(v7 + 40);
    }
    while ( v2 != v5 );
  }
  if ( a1[4] >= v3 + a2 )
    return v3;
  return -1;
}

