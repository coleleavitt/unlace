void __fastcall sub_188A70(_QWORD *a1, _QWORD *a2, __int64 *a3)
{
  _QWORD *v3; // rbp
  const char *v5; // rsi
  const char *v6; // rdi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rax
  _QWORD *i; // r15
  const char *v14; // rsi
  const char *v15; // rdi
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v19; // [rsp+8h] [rbp-60h]
  __int64 v20; // [rsp+10h] [rbp-58h]
  __int64 v21; // [rsp+18h] [rbp-50h]
  __int64 v22; // [rsp+20h] [rbp-48h]

  if ( a1 != a2 )
  {
    v3 = a1 + 1;
    if ( a2 != a1 + 1 )
    {
      while ( 1 )
      {
        v8 = *a3;
        v19 = *v3;
        v10 = 40LL * *v3;
        v11 = *a3 + 40LL * *a1;
        v12 = *a3 + v10;
        v9 = *(_QWORD *)(v12 + 8);
        if ( !*(_QWORD *)(v11 + 8) )
          break;
        v5 = *(const char **)v11;
        v6 = s1;
        if ( v9 )
          goto LABEL_5;
LABEL_6:
        v21 = *(_QWORD *)(v12 + 8);
        v20 = *a3;
        v22 = *a1;
        v7 = strcmp(v6, v5);
        v8 = v20;
        v9 = v21;
        if ( v7 >= 0 )
        {
LABEL_12:
          for ( i = v3; ; --i )
          {
            v16 = *(i - 1);
            v17 = v8 + 40 * v16;
            if ( *(_QWORD *)(v17 + 8) )
            {
              v14 = *(const char **)v17;
              v15 = s1;
              if ( !v9 )
                goto LABEL_14;
              goto LABEL_19;
            }
            if ( !v9 )
              break;
            v14 = s1;
LABEL_19:
            v15 = *(const char **)(v8 + v10);
LABEL_14:
            if ( strcmp(v15, v14) >= 0 )
              break;
            *i = v16;
            v8 = *a3;
            v9 = *(_QWORD *)(*a3 + v10 + 8);
          }
          ++v3;
          *i = v19;
          if ( a2 == v3 )
            return;
        }
        else
        {
          if ( (char *)v3 - (char *)a1 <= 8 )
          {
            if ( (char *)v3 - (char *)a1 == 8 )
              *v3 = v22;
          }
          else
          {
            memmove(a1 + 1, a1, (char *)v3 - (char *)a1);
          }
          ++v3;
          *a1 = v19;
          if ( a2 == v3 )
            return;
        }
      }
      v5 = s1;
      if ( !v9 )
        goto LABEL_12;
LABEL_5:
      v6 = *(const char **)v12;
      goto LABEL_6;
    }
  }
}
