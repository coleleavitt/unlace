__int64 __fastcall sub_283060(__int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // r9
  __int64 v3; // r10
  unsigned int v4; // r8d
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rdi
  int v9; // edx
  __int64 v10; // rax

  v2 = a1[1];
  if ( !v2 )
    return 0xFFFFFFFFLL;
  v3 = *a1;
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    v6 = v3 + 56 * v5;
    v7 = *(_QWORD *)(v6 + 40);
    if ( v7 )
      break;
LABEL_8:
    v5 = (int)++v4;
    if ( (int)v4 >= v2 )
      return 0xFFFFFFFFLL;
  }
  v8 = *(_QWORD *)(v6 + 32);
  v9 = 0;
  v10 = 0;
  while ( *(_QWORD *)(v8 + 8 * v10) != a2 )
  {
    v10 = ++v9;
    if ( v9 >= v7 )
      goto LABEL_8;
  }
  return v4;
}

