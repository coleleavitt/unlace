int __fastcall sub_30CA0(__int64 a1, char **a2)
{
  char *v3; // r12
  char *v4; // rbx
  char *v5; // rax
  char *v6; // rdx
  unsigned __int64 v7; // rdx
  __int64 v8; // rsi
  char *v9; // r15
  char *v10; // rax
  char *v11; // r12
  char *v12; // rbx
  unsigned __int64 v13; // r12
  __int64 v14; // rax

  v3 = *a2;
  v4 = *a2;
  while ( 1 )
  {
    v5 = strstr(v4, "`anonymous");
    v4 = v5;
    if ( !v5 )
      break;
    LODWORD(v5) = (unsigned __int8)v5[10];
    if ( (_BYTE)v5 != 45 && (_BYTE)v5 != 32 )
      break;
    LODWORD(v5) = strncmp(v4 + 11, "namespace'::", 0xCu);
    if ( (_DWORD)v5 )
      break;
    v6 = a2[1];
    if ( v6 )
    {
      v7 = (unsigned __int64)(v6 - 1);
      v8 = (__int64)v3;
      v9 = (char *)(v4 - v3);
      if ( v4 - v3 < v7 )
      {
        v10 = v9 + 23;
        v11 = (char *)(v4 - v3);
        if ( (unsigned __int64)(v9 + 23) < v7 )
        {
          v13 = v7 - (_QWORD)v10;
          memmove(v4, &v10[v8], v7 - (_QWORD)v10);
          v11 = &v9[v13];
          v8 = (__int64)*a2;
          v12 = v11 + 1;
          if ( a2[2] >= v11 + 1 )
            goto LABEL_10;
        }
        else
        {
          v12 = v9 + 1;
          if ( a2[2] >= v9 + 1 )
            goto LABEL_10;
        }
        v14 = qvector_reserve(a2, v8, v12, 1);
        *a2 = (char *)v14;
        v8 = v14;
LABEL_10:
        a2[1] = v12;
        v11[v8] = 0;
        v3 = *a2;
        v4 = &v9[(_QWORD)*a2];
      }
    }
  }
  return (int)v5;
}

