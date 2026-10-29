void *__fastcall sub_1F1480(__int64 a1, int a2)
{
  __int64 v2; // r13
  __int64 *v3; // r14
  _QWORD *v4; // rbx
  __int64 *v5; // r12
  void *result; // rax
  __int64 v7; // r15
  const char *v8; // rdx
  char *s2; // [rsp+0h] [rbp-48h]
  char *s1; // [rsp+8h] [rbp-40h]

  v2 = 104LL * a2;
  v3 = *(__int64 **)(a1 + 872);
  v4 = (_QWORD *)(v2 + *(_QWORD *)(a1 + 432));
  if ( v3 )
  {
    v5 = (__int64 *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
    if ( !v5 )
      goto LABEL_11;
    if ( (*(_BYTE *)v5 & 2) == 0 )
    {
      v7 = v4[5];
      do
      {
        if ( v5[4] )
        {
          v8 = (const char *)v5[3];
          if ( !v7 )
          {
            if ( !*v8 )
              goto LABEL_10;
LABEL_16:
            v5 = (__int64 *)v5[1];
            continue;
          }
        }
        else
        {
          if ( !v7 )
            goto LABEL_10;
          v8 = ::s1;
        }
        s1 = (char *)v8;
        s2 = (char *)v4[4];
        if ( strcmp(s2, v8) < 0 )
          goto LABEL_16;
        if ( strcmp(s1, s2) >= 0 )
        {
LABEL_10:
          if ( v5 != v3 )
          {
LABEL_11:
            sub_1F10E0((unsigned __int64 **)(a1 + 872), v5);
            v4 = (_QWORD *)(v2 + *(_QWORD *)(a1 + 432));
          }
          break;
        }
        v5 = (__int64 *)v5[2];
      }
      while ( (*(_BYTE *)v5 & 2) == 0 );
    }
  }
  clear_tinfo_t();
  if ( v4[7] )
  {
    v4[8] = 0;
    qfree();
  }
  if ( v4[4] )
  {
    v4[5] = 0;
    qfree();
  }
  cleanup_argloc();
  result = memmove(v4, v4 + 13, *(_QWORD *)(a1 + 432) + 104LL * *(_QWORD *)(a1 + 440) - (_QWORD)v4 - 104);
  --*(_QWORD *)(a1 + 440);
  return result;
}

