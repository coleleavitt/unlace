__int64 __fastcall sub_E37B0(__int64 a1, const char **a2)
{
  _QWORD *v2; // r13
  __int64 v4; // rax
  unsigned __int8 *v5; // rbp
  const char *v6; // rdi
  int v7; // ebx

  v2 = *(_QWORD **)(a1 + 544);
  while ( v2 )
  {
    while ( 1 )
    {
      v4 = v2[2];
      v2 = (_QWORD *)*v2;
      v5 = *(unsigned __int8 **)(v4 + 8);
      if ( a2 )
      {
        v6 = *a2;
        v7 = 0;
        if ( *a2 )
          break;
      }
LABEL_9:
      sub_E36C0(a1, v5, 0, 0, nullptr);
      if ( !v2 )
        return 0;
    }
    while ( strcmp(v6, (const char *)v5) )
    {
      v6 = a2[++v7];
      if ( !v6 )
        goto LABEL_9;
    }
  }
  return 0;
}
