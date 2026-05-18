__int64 __fastcall sub_178DB0(__int64 a1, const char *a2, unsigned __int8 *a3, char a4)
{
  size_t v7; // rax
  size_t v8; // r15
  size_t v9; // r14
  __int64 v10; // rsi
  char v11; // al
  unsigned int v12; // ebx
  __int64 v13; // rax
  const char *v14; // r15
  const char *v15; // rbp
  __int64 v16; // r12
  const char *v17; // r14
  const char *v18; // rax
  const char *v19; // r13
  const char *v20; // rsi
  const char *v21; // rdi
  int v22; // eax
  const char *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int8 *v26; // rax
  unsigned __int8 *v27; // rsi
  const char *v28; // rsi
  const char *v29; // [rsp+8h] [rbp-120h]
  const char *v30; // [rsp+10h] [rbp-118h]
  _QWORD *v31; // [rsp+18h] [rbp-110h]
  void **p_ptr; // [rsp+28h] [rbp-100h] BYREF
  void *ptr; // [rsp+30h] [rbp-F8h] BYREF
  __int128 v34; // [rsp+38h] [rbp-F0h]
  _QWORD v35[19]; // [rsp+50h] [rbp-D8h] BYREF
  unsigned __int64 v36; // [rsp+E8h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  if ( a1 )
  {
    if ( *(_BYTE *)a1 != 5 )
      return sub_18FA40(1532);
    ptr = nullptr;
    v34 = 0;
    if ( a2 )
    {
      v7 = strlen(a2);
      v8 = v7 + 1;
      v9 = v7;
      ptr = (void *)sub_1987B0(&ptr, 0, v7 + 1, 1);
      *(_QWORD *)&v34 = v8;
      memmove(ptr, a2, v9);
      *((_BYTE *)ptr + v9) = 0;
    }
    if ( a4 )
    {
      sub_177980((__int64)v35, nullptr, 1u);
      v10 = *(_QWORD *)(a1 + 8);
      v11 = sub_178BF0(v35, v10, (const char **)&ptr, a3);
      v12 = 0;
      if ( !v11 )
        v12 = sub_18FA20(v35, v10);
      sub_177AE0((__int64)v35);
      goto LABEL_11;
    }
    v13 = *(_QWORD *)(a1 + 8);
    v14 = *(const char **)(v13 + 16);
    v15 = (const char *)(v13 + 8);
    v31 = (_QWORD *)v13;
    v30 = (const char *)(v13 + 8);
    if ( !v14 )
    {
      v15 = (const char *)(v13 + 8);
      goto LABEL_36;
    }
    v16 = v34;
    v17 = (const char *)ptr;
    v18 = s1;
    if ( (_QWORD)v34 )
      v18 = (const char *)ptr;
    v29 = v18;
    while ( 1 )
    {
      v24 = *((_QWORD *)v14 + 5);
      if ( !v16 )
        break;
      if ( v24 )
        goto LABEL_27;
      v19 = v14;
      v20 = v17;
      v21 = s1;
LABEL_20:
      v22 = strcmp(v21, v20);
      v23 = *((const char **)v14 + 2);
      v14 = *((const char **)v14 + 3);
      if ( v22 >= 0 )
      {
        v15 = v19;
        v14 = v23;
      }
      if ( !v14 )
        goto LABEL_31;
    }
    if ( !v24 )
    {
      while ( 1 )
      {
        v25 = *((_QWORD *)v14 + 2);
        if ( !v25 )
          break;
        v15 = v14;
        v14 = *((const char **)v14 + 2);
        if ( *(_QWORD *)(v25 + 40) )
          goto LABEL_27;
      }
      v15 = v14;
LABEL_31:
      if ( v30 == v15 )
        goto LABEL_36;
      if ( *((_QWORD *)v15 + 5) )
      {
        v28 = *((const char **)v15 + 4);
        if ( !v16 )
          v17 = s1;
LABEL_35:
        if ( strcmp(v17, v28) < 0 )
        {
LABEL_36:
          p_ptr = &ptr;
          v15 = sub_1765B0(v31, v15, (__int64 *)&p_ptr);
        }
      }
      else
      {
        v28 = s1;
        if ( v16 )
          goto LABEL_35;
      }
      sub_176730((unsigned __int8 *)v15 + 56, a3);
      v12 = 0;
LABEL_11:
      if ( ptr )
      {
        *(_QWORD *)&v34 = 0;
        j__free(ptr);
      }
      return v12;
    }
LABEL_27:
    v21 = *((const char **)v14 + 4);
    v20 = v29;
    v19 = v14;
    goto LABEL_20;
  }
  v26 = (unsigned __int8 *)sub_187130(a2);
  if ( v26 )
  {
    v27 = a3;
    v12 = 0;
    sub_176730(v26, v27);
    return v12;
  }
  sub_18FAC0(0, a2);
  return sub_18FA40(1538);
}
