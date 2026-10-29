__int64 __fastcall sub_169E0(__int64 a1, __int64 *a2, unsigned int a3, _QWORD *a4)
{
  const char *numbered_type_name; // rax
  const char *v6; // rbx
  char *v7; // rax
  char *v8; // r14
  size_t v10; // rax
  size_t v11; // rbp
  size_t v12; // r15
  char *v13; // rax
  _QWORD *v14; // rbp
  _QWORD *v15; // r12
  char *v16; // rdx
  __int64 v17; // r13
  char *v18; // rax
  _QWORD *v19; // r14
  char *v20; // r12
  char *v21; // rbx
  _QWORD *v22; // r15
  const char *v23; // rsi
  const char *v24; // rdi
  int v25; // eax
  _QWORD *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // r12
  __int64 v30; // r15
  size_t v31; // r13
  size_t v32; // rbp
  __int64 v33; // rsi
  unsigned __int64 v34; // rdx
  __int64 v35; // rax
  const char *v36; // r14
  _QWORD *v37; // r12
  __int64 v38; // rax
  const char *v43; // [rsp+20h] [rbp-78h]
  char *v44; // [rsp+28h] [rbp-70h]
  __int64 named_type_tid; // [rsp+30h] [rbp-68h]
  char *s2; // [rsp+40h] [rbp-58h] BYREF
  __int128 v47; // [rsp+48h] [rbp-50h]
  unsigned __int64 v48; // [rsp+58h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  numbered_type_name = (const char *)get_numbered_type_name(a1, a3);
  if ( !numbered_type_name )
    return 0;
  v6 = numbered_type_name;
  v7 = strchr(numbered_type_name, 58);
  v8 = v7;
  if ( !v7 || v6 == v7 || *v7 != 58 || v7[1] != 58 || v7[2] != 36 )
    return 0;
  s2 = nullptr;
  named_type_tid = get_named_type_tid(v6);
  v47 = 0;
  v10 = strlen(v6);
  v11 = v10 + 1;
  v12 = v10;
  v13 = (char *)qvector_reserve(&s2, 0, v10 + 1, 1);
  *(_QWORD *)&v47 = v11;
  s2 = v13;
  v14 = a4 + 1;
  memmove(v13, v6, v12);
  s2[v12] = 0;
  v15 = (_QWORD *)a4[2];
  v16 = s2;
  if ( !v15 )
    goto LABEL_23;
  v17 = v47;
  v18 = (char *)src;
  v43 = v6;
  v44 = v8;
  v19 = v15;
  v20 = s2;
  if ( (_QWORD)v47 )
    v18 = s2;
  v21 = v18;
  while ( 1 )
  {
    v27 = v19[5];
    if ( !v17 )
      break;
    if ( v27 )
      goto LABEL_21;
    v22 = v19;
    v23 = v20;
    v24 = src;
LABEL_14:
    v25 = strcmp(v24, v23);
    v26 = (_QWORD *)v19[2];
    v19 = (_QWORD *)v19[3];
    if ( v25 >= 0 )
    {
      v14 = v22;
      v19 = v26;
    }
    if ( !v19 )
    {
      v6 = v43;
      v8 = v44;
      v16 = v20;
      goto LABEL_23;
    }
  }
  if ( v27 )
  {
LABEL_21:
    v24 = (const char *)v19[4];
    v22 = v19;
    v23 = v21;
    goto LABEL_14;
  }
  while ( 1 )
  {
    v28 = v19[2];
    if ( !v28 )
      break;
    v14 = v19;
    v19 = (_QWORD *)v19[2];
    if ( *(_QWORD *)(v28 + 40) )
      goto LABEL_21;
  }
  v16 = v20;
  v37 = v19;
  v6 = v43;
  v8 = v44;
  v14 = v37;
LABEL_23:
  if ( v16 )
  {
    *(_QWORD *)&v47 = 0;
    qfree(v16);
  }
  v29 = (_QWORD *)a4[3];
  if ( v29 == v14 )
    return 0;
  v30 = std::_Rb_tree_decrement(v14);
  if ( (_QWORD *)v30 == v29 )
    return 0;
  v31 = v8 - v6;
  while ( 1 )
  {
    v32 = *(_QWORD *)(v30 + 40);
    if ( !v32 )
      break;
    v36 = *(const char **)(v30 + 32);
    if ( !strncmp(v6, v36, v32 - 1) )
      break;
    if ( v32 >= v31 && !memcmp(v6, v36, v31) )
    {
      v30 = std::_Rb_tree_decrement(v30);
      if ( v29 != (_QWORD *)v30 )
        continue;
    }
    return 0;
  }
  if ( get_first_dref_to(named_type_tid) != -1 )
  {
    if ( a2 )
    {
      v33 = *a2;
      v34 = a2[2];
      v35 = a2[1];
      LODWORD(s2) = a3;
      if ( v34 < v35 + 1 )
      {
        v38 = qvector_reserve(a2, v33, v35 + 1, 4);
        *a2 = v38;
        v33 = v38;
        v35 = a2[1];
      }
      *(_DWORD *)(v33 + 4 * v35) = a3;
      ++a2[1];
    }
    return 0;
  }
  del_numbered_type(a1, a3);
  return 1;
}
