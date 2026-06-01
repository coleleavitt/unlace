unsigned __int64 __fastcall sub_2F860(__int64 a1, __int64 *a2)
{
  int i; // r13d
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // rbp
  const char *v7; // rdi
  size_t v8; // rax
  size_t v9; // rbp
  size_t v11; // r12
  void *v12; // rdi
  __int64 v13; // rax
  char s2[1032]; // [rsp+10h] [rbp-448h] BYREF
  unsigned __int64 v15; // [rsp+418h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  for ( i = 0; ; ++i )
  {
    qsnprintf(s2, 1024, "%s%u", "_anon_", i);
    v4 = *(_QWORD *)(a1 + 392);
    if ( (int)v4 <= 0 )
      break;
    v5 = *(_QWORD *)(a1 + 384);
    v6 = v5 + 104LL * (unsigned int)(v4 - 1) + 104;
    while ( 1 )
    {
      v7 = src;
      if ( *(_QWORD *)(v5 + 24) )
        v7 = *(const char **)(v5 + 16);
      if ( !strcmp(v7, s2) )
        break;
      v5 += 104;
      if ( v5 == v6 )
        goto LABEL_10;
    }
    if ( !v5 )
      break;
  }
LABEL_10:
  v8 = strlen(s2);
  v9 = v8;
  if ( v8 )
  {
    v11 = v8 + 1;
    v12 = (void *)*a2;
    if ( a2[2] < v8 + 1 )
    {
      v13 = qvector_reserve(a2, *a2, v11, 1);
      *a2 = v13;
      v12 = (void *)v13;
    }
    a2[1] = v11;
    memmove(v12, s2, v9);
    *(_BYTE *)(*a2 + v9) = 0;
  }
  else
  {
    a2[1] = 0;
  }
  return v15 - __readfsqword(0x28u);
}
