__int64 __fastcall sub_15FC0(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  char *v8; // r15
  size_t v9; // rax
  size_t v10; // r14
  size_t v11; // r13
  _QWORD *v12; // rbp
  __int64 v13; // r13
  const char *v14; // rax
  _QWORD *v15; // r14
  _QWORD *v16; // r12
  const char *v17; // rsi
  const char *v18; // rdi
  int v19; // eax
  _QWORD *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  const char *v23; // rdi
  const char *v24; // rsi
  __int64 v25; // rdx
  char *v26; // r13
  size_t v27; // rax
  size_t v28; // r12
  void *v29; // rdi
  size_t v30; // r14
  __int64 v31; // rax
  const char *v32; // [rsp+8h] [rbp-70h]
  _QWORD *v34; // [rsp+18h] [rbp-60h]
  char *s2; // [rsp+20h] [rbp-58h] BYREF
  __int128 v36; // [rsp+28h] [rbp-50h]
  unsigned __int64 v37; // [rsp+38h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v5 = sub_B9D0(a2);
  if ( !v5 )
    return 0;
  v6 = *(_QWORD *)(v5 + 24);
  if ( *(_DWORD *)(v6 + 8) != 68 )
    return 0;
  v8 = *(char **)(v6 + 24);
  s2 = nullptr;
  v36 = 0;
  if ( v8 )
  {
    v9 = strlen(v8);
    v10 = v9 + 1;
    v11 = v9;
    s2 = (char *)qvector_reserve(&s2, 0, v9 + 1, 1);
    *(_QWORD *)&v36 = v10;
    memmove(s2, v8, v11);
    s2[v11] = 0;
    v12 = *(_QWORD **)(a1 + 2864);
    v34 = (_QWORD *)(a1 + 2856);
    v8 = s2;
    if ( !v12 )
      goto LABEL_27;
  }
  else
  {
    v12 = *(_QWORD **)(a1 + 2864);
    v34 = (_QWORD *)(a1 + 2856);
    if ( !v12 )
      return 0;
  }
  v13 = v36;
  v14 = s1;
  v15 = v34;
  if ( (_QWORD)v36 )
    v14 = v8;
  v32 = v14;
  while ( 1 )
  {
    v21 = v12[5];
    if ( !v13 )
      break;
    if ( v21 )
      goto LABEL_18;
    v16 = v12;
    v17 = v8;
    v18 = s1;
LABEL_11:
    v19 = strcmp(v18, v17);
    v20 = (_QWORD *)v12[2];
    v12 = (_QWORD *)v12[3];
    if ( v19 >= 0 )
    {
      v15 = v16;
      v12 = v20;
    }
    if ( !v12 )
      goto LABEL_22;
  }
  if ( v21 )
  {
LABEL_18:
    v18 = (const char *)v12[4];
    v17 = v32;
    v16 = v12;
    goto LABEL_11;
  }
  while ( 1 )
  {
    v22 = v12[2];
    if ( !v22 )
      break;
    v15 = v12;
    v12 = (_QWORD *)v12[2];
    if ( *(_QWORD *)(v22 + 40) )
      goto LABEL_18;
  }
  v15 = v12;
LABEL_22:
  if ( v34 == v15 )
    goto LABEL_27;
  if ( v15[5] )
  {
    v23 = s1;
    v24 = (const char *)v15[4];
    if ( v13 )
      v23 = v8;
LABEL_26:
    if ( strcmp(v23, v24) < 0 )
    {
LABEL_27:
      if ( v8 )
      {
        *(_QWORD *)&v36 = 0;
        qfree(v8);
      }
      return 0;
    }
  }
  else
  {
    v23 = v8;
    v24 = s1;
    if ( v13 )
      goto LABEL_26;
  }
  if ( v8 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v8);
  }
  v25 = *((int *)v15 + 14);
  v26 = off_8C280[v25];
  if ( v26 && (v27 = strlen(off_8C280[v25]), (v28 = v27) != 0) )
  {
    v29 = (void *)*a3;
    v30 = v27 + 1;
    if ( a3[2] < v27 + 1 )
    {
      v31 = qvector_reserve(a3, *a3, v27 + 1, 1);
      *a3 = v31;
      v29 = (void *)v31;
    }
    a3[1] = v30;
    memmove(v29, v26, v28);
    *(_BYTE *)(*a3 + v28) = 0;
  }
  else
  {
    a3[1] = 0;
  }
  *a4 = 1;
  return 0;
}

