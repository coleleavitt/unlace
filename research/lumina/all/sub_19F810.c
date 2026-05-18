__int64 __fastcall sub_19F810(char *s2)
{
  unsigned int v1; // ebp
  pthread_mutex_t *v3; // r14
  __int64 v4; // rbp
  __int64 v5; // r13
  char *v6; // r12

  if ( !s2 || !*s2 )
    return 0;
  v1 = 0;
  if ( !strchr(s2, 47) && !strchr(s2, 92) )
  {
    v3 = (pthread_mutex_t *)qword_243A00;
    sub_19A520((pthread_mutex_t *)qword_243A00);
    v4 = qword_2439E0;
    v5 = qword_2439E0 + 8 * xmmword_2439E8;
    if ( v5 == qword_2439E0 )
    {
LABEL_12:
      v6 = (char *)operator new(0x1668u);
      sub_19F1B0(v6, s2, nullptr);
    }
    else
    {
      while ( 1 )
      {
        v6 = *(char **)v4;
        if ( !strcmp((const char *)(*(_QWORD *)v4 + 8LL), s2) )
          break;
        v4 += 8;
        if ( v5 == v4 )
          goto LABEL_12;
      }
    }
    qword_2439F8 = (__int64)v6;
    v1 = 1;
    sub_19A570(v3);
  }
  return v1;
}
