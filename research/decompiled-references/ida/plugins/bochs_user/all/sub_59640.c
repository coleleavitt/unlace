_QWORD *__fastcall sub_59640(__int64 a1, char *a2, char a3)
{
  size_t v3; // rax
  size_t v4; // rbp
  size_t v5; // rbx
  char *v6; // r13
  _QWORD *v7; // r15
  const char *v8; // r14
  _QWORD *v9; // rbx
  _QWORD *v10; // rbp
  const char *v11; // rsi
  const char *v12; // rdi
  int v13; // eax
  _QWORD *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  const char *v17; // rdi
  const char *v18; // rsi
  _QWORD *v20; // [rsp+0h] [rbp-A8h]
  char *s2; // [rsp+20h] [rbp-88h] BYREF
  __int128 v25; // [rsp+28h] [rbp-80h]
  __int64 v26; // [rsp+38h] [rbp-70h]
  __int64 v27; // [rsp+40h] [rbp-68h]
  __int64 v28; // [rsp+48h] [rbp-60h]
  __int64 v29; // [rsp+50h] [rbp-58h]
  __int128 v30; // [rsp+58h] [rbp-50h]
  unsigned __int64 v31; // [rsp+68h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v25 = 0;
  s2 = nullptr;
  if ( a2 )
  {
    v3 = strlen(a2);
    v4 = v3 + 1;
    v5 = v3;
    s2 = (char *)qvector_reserve();
    *(_QWORD *)&v25 = v4;
    memmove(s2, a2, v5);
    s2[v5] = 0;
    v6 = s2;
    v7 = *(_QWORD **)(a1 + 352);
    v20 = (_QWORD *)(a1 + 344);
    if ( !v7 )
      goto LABEL_16;
  }
  else
  {
    v7 = *(_QWORD **)(a1 + 352);
    v6 = nullptr;
    v20 = (_QWORD *)(a1 + 344);
    if ( !v7 )
      goto LABEL_18;
  }
  v8 = s1;
  v9 = v20;
  if ( (_QWORD)v25 )
    v8 = v6;
  while ( 1 )
  {
    v15 = v7[5];
    if ( !(_QWORD)v25 )
      break;
    if ( v15 )
      goto LABEL_15;
    v10 = v7;
    v11 = v6;
    v12 = s1;
LABEL_8:
    v13 = strcmp(v12, v11);
    v14 = (_QWORD *)v7[2];
    v7 = (_QWORD *)v7[3];
    if ( v13 >= 0 )
    {
      v9 = v10;
      v7 = v14;
    }
    if ( !v7 )
      goto LABEL_22;
  }
  if ( v15 )
  {
LABEL_15:
    v12 = (const char *)v7[4];
    v10 = v7;
    v11 = v8;
    goto LABEL_8;
  }
  while ( 1 )
  {
    v16 = v7[2];
    if ( !v16 )
      break;
    v9 = v7;
    v7 = (_QWORD *)v7[2];
    if ( *(_QWORD *)(v16 + 40) )
      goto LABEL_15;
  }
  v9 = v7;
LABEL_22:
  if ( v9 != v20 )
  {
    if ( !v9[5] )
    {
      v17 = v6;
      v18 = s1;
      if ( (_QWORD)v25 )
        goto LABEL_26;
      goto LABEL_27;
    }
    v17 = s1;
    v18 = (const char *)v9[4];
    if ( (_QWORD)v25 )
      v17 = v6;
LABEL_26:
    if ( strcmp(v17, v18) >= 0 )
    {
LABEL_27:
      if ( v6 )
      {
        *(_QWORD *)&v25 = 0;
        qfree();
      }
      return v9 + 7;
    }
  }
LABEL_16:
  if ( v6 )
  {
    *(_QWORD *)&v25 = 0;
    qfree();
  }
LABEL_18:
  if ( !a3 )
    return nullptr;
  v25 = 0xFFFFu;
  s2 = a2;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v9 = sub_59440(a1 + 336, (__int64)&s2);
  if ( v29 )
    qfree();
  return v9 + 7;
}

