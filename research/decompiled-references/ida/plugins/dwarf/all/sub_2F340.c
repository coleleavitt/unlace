__int64 __fastcall sub_2F340(__int64 a1, const char *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r14
  const char *v5; // rdi

  v2 = *(_QWORD *)(a1 + 392);
  if ( (int)v2 <= 0 )
    return 0;
  v3 = *(_QWORD *)(a1 + 384);
  v4 = v3 + 104LL * (unsigned int)(v2 - 1) + 104;
  while ( 1 )
  {
    v5 = src;
    if ( *(_QWORD *)(v3 + 24) )
      v5 = *(const char **)(v3 + 16);
    if ( !strcmp(v5, a2) )
      break;
    v3 += 104;
    if ( v3 == v4 )
      return 0;
  }
  return v3;
}

