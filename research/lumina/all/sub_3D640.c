const char *__fastcall sub_3D640(_QWORD *a1, __int64 a2)
{
  const char *v2; // rbx
  const char *v3; // r15
  __int64 v5; // r13
  const char *v6; // rsi
  const char *v7; // rbp
  const char *v8; // rdi
  int v9; // eax
  const char *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  const char *v13; // rsi
  const char *v14; // rdi
  const char *v16; // [rsp+0h] [rbp-58h]
  __int64 v18[9]; // [rsp+10h] [rbp-48h] BYREF

  v2 = (const char *)(a1 + 1);
  v3 = (const char *)a1[2];
  v18[1] = __readfsqword(0x28u);
  v16 = (const char *)(a1 + 1);
  if ( !v3 )
  {
    v2 = (const char *)(a1 + 1);
    goto LABEL_19;
  }
  v5 = *(_QWORD *)(a2 + 8);
  while ( 1 )
  {
    v11 = *((_QWORD *)v3 + 5);
    if ( !v5 )
      break;
    v6 = *(const char **)a2;
    v7 = v3;
    v8 = s1;
    if ( v11 )
      goto LABEL_4;
LABEL_5:
    v9 = strcmp(v8, v6);
    v10 = *((const char **)v3 + 2);
    v3 = *((const char **)v3 + 3);
    if ( v9 >= 0 )
    {
      v2 = v7;
      v3 = v10;
    }
    if ( !v3 )
      goto LABEL_14;
  }
  if ( v11 )
  {
LABEL_12:
    v6 = s1;
LABEL_4:
    v8 = *((const char **)v3 + 4);
    v7 = v3;
    goto LABEL_5;
  }
  while ( 1 )
  {
    v12 = *((_QWORD *)v3 + 2);
    if ( !v12 )
      break;
    v2 = v3;
    v3 = *((const char **)v3 + 2);
    if ( *(_QWORD *)(v12 + 40) )
      goto LABEL_12;
  }
  v2 = v3;
LABEL_14:
  if ( v2 == v16 )
    goto LABEL_19;
  if ( *((_QWORD *)v2 + 5) )
  {
    v13 = *((const char **)v2 + 4);
    v14 = s1;
    if ( v5 )
      goto LABEL_17;
LABEL_18:
    if ( strcmp(v14, v13) < 0 )
    {
LABEL_19:
      v18[0] = a2;
      v2 = sub_3D4E0(a1, v2, v18);
    }
  }
  else
  {
    v13 = s1;
    if ( v5 )
    {
LABEL_17:
      v14 = *(const char **)a2;
      goto LABEL_18;
    }
  }
  return v2 + 56;
}
