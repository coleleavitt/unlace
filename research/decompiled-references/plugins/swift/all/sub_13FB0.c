unsigned __int64 __fastcall sub_13FB0(__int64 a1, __int64 a2)
{
  const char *v2; // rbp
  size_t v4; // rax
  size_t v5; // r12
  size_t v6; // rbx
  const char *v7; // r15
  const char *v8; // rbx
  __int64 v9; // rbp
  char *v10; // r14
  char *v11; // rax
  const char *v12; // r12
  const char *v13; // rsi
  const char *v14; // rdi
  int v15; // eax
  const char *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  const char *v19; // rsi
  const char *v20; // rdi
  const char *v21; // rax
  int v22; // eax
  char *v24; // [rsp+0h] [rbp-80h]
  const char *v25; // [rsp+8h] [rbp-78h]
  char **p_s2; // [rsp+20h] [rbp-60h] BYREF
  char *s2; // [rsp+28h] [rbp-58h] BYREF
  __int128 v29; // [rsp+30h] [rbp-50h]
  unsigned __int64 v30; // [rsp+40h] [rbp-40h]

  v2 = *(const char **)a2;
  v30 = __readfsqword(0x28u);
  v29 = 0;
  s2 = nullptr;
  if ( v2 )
  {
    v4 = strlen(v2);
    v5 = v4 + 1;
    v6 = v4;
    s2 = (char *)qvector_reserve(&s2, 0, v4 + 1, 1);
    *(_QWORD *)&v29 = v5;
    memmove(s2, v2, v6);
    s2[v6] = 0;
  }
  v7 = *(const char **)(a1 + 504);
  v25 = (const char *)(a1 + 496);
  v8 = (const char *)(a1 + 496);
  if ( !v7 )
    goto LABEL_23;
  v9 = v29;
  v10 = s2;
  v11 = (char *)s1;
  v8 = (const char *)(a1 + 496);
  if ( (_QWORD)v29 )
    v11 = s2;
  v24 = v11;
  while ( 1 )
  {
    v17 = *((_QWORD *)v7 + 5);
    if ( !v9 )
      break;
    if ( v17 )
      goto LABEL_16;
    v12 = v7;
    v13 = v10;
    v14 = s1;
LABEL_9:
    v15 = strcmp(v14, v13);
    v16 = *((const char **)v7 + 2);
    v7 = *((const char **)v7 + 3);
    if ( v15 >= 0 )
    {
      v8 = v12;
      v7 = v16;
    }
    if ( !v7 )
      goto LABEL_18;
  }
  if ( v17 )
  {
LABEL_16:
    v14 = *((const char **)v7 + 4);
    v13 = v24;
    v12 = v7;
    goto LABEL_9;
  }
  while ( 1 )
  {
    v18 = *((_QWORD *)v7 + 2);
    if ( !v18 )
      break;
    v8 = v7;
    v7 = *((const char **)v7 + 2);
    if ( *(_QWORD *)(v18 + 40) )
      goto LABEL_16;
  }
  v8 = v7;
LABEL_18:
  if ( v25 == v8 )
    goto LABEL_23;
  if ( *((_QWORD *)v8 + 5) )
  {
    v19 = *((const char **)v8 + 4);
    v20 = s1;
    if ( v9 )
      goto LABEL_21;
LABEL_22:
    if ( strcmp(v20, v19) < 0 )
    {
LABEL_23:
      p_s2 = &s2;
      v21 = sub_13AB0((_QWORD *)(a1 + 488), v8, (__int64 **)&p_s2);
      v10 = s2;
      v8 = v21;
    }
  }
  else
  {
    v19 = s1;
    if ( v9 )
    {
LABEL_21:
      v20 = v10;
      goto LABEL_22;
    }
  }
  if ( v10 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v10);
  }
  *((_DWORD *)v8 + 15) = *(_DWORD *)(a2 + 8);
  v22 = *(_DWORD *)(a2 + 12);
  *((_DWORD *)v8 + 31) = 2;
  *((_DWORD *)v8 + 30) = v22;
  *((_BYTE *)v8 + 128) = *(_BYTE *)(a2 + 16);
  return v30 - __readfsqword(0x28u);
}
