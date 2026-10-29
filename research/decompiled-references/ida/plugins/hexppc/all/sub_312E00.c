__int64 __fastcall sub_312E00(__int64 *a1, _QWORD *a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rax
  __int64 v5; // r10
  int v6; // edx
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // rax

  v2 = a1[1];
  v3 = a2[1];
  if ( v2 != v3 )
  {
    if ( v3 < v2 )
      return 1;
    return 0xFFFFFFFFLL;
  }
  if ( v2 )
  {
    v5 = *a1;
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      v10 = 16 * v7;
      v11 = (_QWORD *)(*a2 + v10);
      v12 = (_QWORD *)(v5 + v10);
      if ( *v12 < *v11 )
        break;
      if ( *v11 < *v12 )
        return 1;
      v8 = v12[1];
      v9 = v11[1];
      if ( v8 < v9 )
        break;
      if ( v9 < v8 )
        return 1;
      v7 = ++v6;
      if ( v6 >= v2 )
        return 0;
    }
    return 0xFFFFFFFFLL;
  }
  return 0;
}

