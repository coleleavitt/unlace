__int64 __fastcall sub_47FF0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rbx
  const char *v5; // rbp
  __int64 v6; // r12
  const char **v7; // r15
  __int64 v8; // r14
  const char *v9; // rdi
  char *v10; // rdi
  __int64 v11; // rax
  char *v12; // rdi
  __int64 v13; // r12
  __int64 v14; // rbx
  char *v15; // rbp
  void *v16; // rdi
  char *v18; // r12
  size_t v19; // rax
  size_t v20; // r15
  void *v21; // r12
  size_t v22; // rbx
  void *v23; // rax
  __int64 v24; // [rsp+0h] [rbp-B8h]
  char *v25; // [rsp+8h] [rbp-B0h]
  size_t v26; // [rsp+8h] [rbp-B0h]
  void *v28; // [rsp+20h] [rbp-98h] BYREF
  __int128 v29; // [rsp+28h] [rbp-90h]
  void *src; // [rsp+40h] [rbp-78h] BYREF
  __int64 v31; // [rsp+48h] [rbp-70h]
  void *ptr; // [rsp+60h] [rbp-58h] BYREF
  __int128 v33; // [rsp+68h] [rbp-50h]
  unsigned __int64 v34; // [rsp+78h] [rbp-40h]

  v2 = a2[1];
  v34 = __readfsqword(0x28u);
  v3 = *a2;
  v28 = nullptr;
  v29 = 0;
  v4 = v3 + 24;
  v24 = v3 + 40 * v2;
  if ( v3 != v24 )
  {
    if ( *(_QWORD *)(v3 + 8) )
      goto LABEL_3;
LABEL_15:
    v5 = s1;
LABEL_5:
    v6 = v29;
    v25 = (char *)v28;
    if ( (_QWORD)v29 )
    {
      v7 = (const char **)v28;
      v8 = 0;
      while ( 1 )
      {
        v9 = s1;
        if ( v7[1] )
          v9 = *v7;
        if ( !strcmp(v9, v5) )
          break;
        ++v8;
        v7 += 5;
        if ( v6 == v8 )
          goto LABEL_30;
      }
      v10 = (char *)(v7 + 3);
    }
    else
    {
LABEL_30:
      if ( *((_QWORD *)&v29 + 1) < (unsigned __int64)(v6 + 1) )
      {
        v25 = (char *)sub_1987B0(&v28, v25, v6 + 1, 40);
        v6 = v29;
        v28 = v25;
      }
      v18 = &v25[40 * v6];
      *(_QWORD *)v18 = 0;
      *(_OWORD *)(v18 + 8) = 0;
      *((_DWORD *)v18 + 6) = 0;
      *(_QWORD *)&v29 = v29 + 1;
      *((_QWORD *)v18 + 4) = 0;
      if ( v5 && (v19 = strlen(v5), (v20 = v19) != 0) )
      {
        v26 = v19 + 1;
        v23 = (void *)sub_1987B0(v18, *(_QWORD *)v18, v19 + 1, 1);
        *(_QWORD *)v18 = v23;
        *((_QWORD *)v18 + 1) = v26;
        memmove(v23, v5, v20);
        *(_BYTE *)(*(_QWORD *)v18 + v20) = 0;
      }
      else
      {
        *((_QWORD *)v18 + 1) = 0;
      }
      v10 = v18 + 24;
    }
    sub_189F30(v10, v4);
    while ( 1 )
    {
      v11 = v4 + 40;
      if ( v24 == v4 + 16 )
        break;
      v4 += 40;
      if ( !*(_QWORD *)(v11 - 16) )
        goto LABEL_15;
LABEL_3:
      v5 = *(const char **)(v4 - 24);
      if ( strcmp(v5, "signature") && strcmp(v5, "header") )
        goto LABEL_5;
    }
  }
  sub_47D20((__int64)&src, (__int64)&v28);
  if ( v31 )
  {
    v21 = src;
    ptr = nullptr;
    v33 = 0;
    v22 = v31 - 1;
    if ( v31 != 1 )
    {
      ptr = (void *)sub_1987B0(&ptr, 0, v31 - 1, 1);
      memset((char *)ptr + v33, 0, v22 - v33);
      *(_QWORD *)&v33 = v22;
      memcpy(ptr, v21, v22);
    }
  }
  else
  {
    ptr = nullptr;
    v33 = 0;
  }
  sub_47E90(a1, (__int64)&ptr);
  if ( ptr )
  {
    *(_QWORD *)&v33 = 0;
    j__free(ptr);
  }
  if ( src )
  {
    v31 = 0;
    j__free(src);
  }
  v12 = (char *)v28;
  if ( v28 )
  {
    v13 = v29;
    if ( (_QWORD)v29 )
    {
      v14 = 0;
      do
      {
        v15 = &v12[40 * v14];
        sub_189C20(v15 + 24);
        v16 = *(void **)v15;
        if ( *(_QWORD *)v15 )
        {
          *((_QWORD *)v15 + 1) = 0;
          j__free(v16);
        }
        ++v14;
        v12 = (char *)v28;
      }
      while ( v13 != v14 );
    }
    *(_QWORD *)&v29 = 0;
    j__free(v12);
  }
  return a1;
}
