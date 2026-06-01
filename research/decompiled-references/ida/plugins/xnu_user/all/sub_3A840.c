__int64 __fastcall sub_3A840(
        const char *src,
        _DWORD *a2,
        __int64 (__fastcall *a3)(__m128i *, __int64, const char *, __int64),
        __int64 a4)
{
  size_t v4; // rax
  size_t v5; // r13
  size_t v6; // r12
  size_t v7; // rax
  __int64 v8; // rbx
  size_t v9; // r12
  size_t v10; // r13
  char *v11; // rsi
  char *v12; // r13
  unsigned int v13; // ebx
  char *v14; // r14
  size_t v16; // rax
  size_t v17; // rbx
  unsigned __int64 v18; // r12
  char *v19; // rax
  unsigned __int64 v20; // r15
  char *v21; // rax
  signed __int64 v22; // r13
  unsigned __int64 v23; // r12
  size_t v24; // rbx
  size_t v25; // rdx
  size_t v26; // r15
  char *v27; // r13
  char *v28; // rax
  signed __int64 v29; // r15
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // r13
  __int64 v32; // rdi
  unsigned __int64 v33; // r12
  unsigned __int64 v34; // r13
  size_t v35; // [rsp+10h] [rbp-1090h]
  unsigned __int64 v39; // [rsp+30h] [rbp-1070h]
  char *dest; // [rsp+40h] [rbp-1060h]
  __int128 v41; // [rsp+48h] [rbp-1058h]
  char s[4104]; // [rsp+60h] [rbp-1040h] BYREF
  unsigned __int64 v43; // [rsp+1068h] [rbp-38h]

  v43 = __readfsqword(0x28u);
  dest = nullptr;
  qbasename();
  v41 = 0;
  if ( src )
  {
    v4 = strlen(src);
    v5 = v4 + 1;
    v6 = v4;
    dest = (char *)qvector_reserve();
    *(_QWORD *)&v41 = v5;
    memmove(dest, src, v6);
    dest[v6] = 0;
  }
  qmakepath();
  v7 = strlen(s);
  v8 = v41;
  v9 = v7;
  v10 = v7;
  if ( (_QWORD)v41 )
  {
    v8 = v41 - 1;
    v10 = v7 + v41 - 1;
  }
  v11 = dest;
  if ( v10 != -1 )
  {
    dest = (char *)qvector_reserve();
    v11 = dest;
  }
  v11[v10] = 0;
  memmove(&dest[v8], s, v9);
  v12 = dest;
  v13 = sub_3A030(dest, a2, a3, a4);
  v14 = dest;
  if ( v13 == -1 )
  {
    if ( !src )
      goto LABEL_13;
    v16 = strlen(src);
    v17 = v16;
    if ( !v16 )
      goto LABEL_13;
    v18 = v16 + 1;
    if ( v16 != -1 )
    {
      dest = (char *)qvector_reserve();
      v14 = dest;
    }
    *(_QWORD *)&v41 = v18;
    memmove(v14, src, v17);
    dest[v17] = 0;
    v14 = dest;
    v12 = dest;
    if ( !v18 || (v19 = strrchr(dest, 46)) == nullptr )
    {
LABEL_13:
      v14 = v12;
      v13 = -1;
      goto LABEL_8;
    }
    v39 = v19 - dest;
    if ( v19 - dest == -1 )
    {
LABEL_56:
      v13 = -1;
      goto LABEL_8;
    }
    while ( 1 )
    {
      v20 = v18 - 1;
      if ( v18 - 1 < v39 )
        goto LABEL_56;
      v21 = strchr(&v14[v39], 47);
      if ( !v21 )
        goto LABEL_56;
      v22 = v21 - v14;
      if ( v21 - v14 == -1 )
        goto LABEL_56;
      if ( v22 )
        break;
      if ( !v14 )
      {
        v31 = *((_QWORD *)&v41 + 1);
        v24 = strlen(s);
LABEL_54:
        v23 = v20;
        v26 = v20 + v24;
        goto LABEL_43;
      }
      qfree();
      v23 = 0;
      v24 = strlen(s);
      v41 = 0u;
      v25 = v24 + 1;
      v26 = v24;
LABEL_25:
      v35 = v25;
      dest = (char *)qvector_reserve();
      v25 = v35;
      v14 = dest;
LABEL_26:
      *(_QWORD *)&v41 = v25;
      v14[v26] = 0;
      memmove(&dest[v23], s, v24);
      v27 = dest;
      v13 = sub_3A030(dest, a2, a3, a4);
      v14 = dest;
      if ( v13 != -1 )
        goto LABEL_8;
      if ( v39 )
      {
        v32 = v41;
        v33 = v39 + 1;
        if ( (unsigned __int64)v41 < v39 + 1 )
        {
          if ( *((_QWORD *)&v41 + 1) < v33 )
          {
            dest = (char *)qvector_reserve();
            v32 = v41;
            v14 = dest;
          }
          memset(&v14[v32], 0, v33 - v32);
          *(_QWORD *)&v41 = v39 + 1;
          v27 = dest;
        }
        else if ( v33 != (_QWORD)v41 )
        {
          *(_QWORD *)&v41 = v39 + 1;
        }
        v27[v39] = 0;
        v14 = dest;
      }
      else
      {
        if ( dest )
        {
          v41 = 0u;
          qfree();
          dest = nullptr;
        }
        v14 = nullptr;
      }
      v18 = v41;
      if ( !(_QWORD)v41 )
        goto LABEL_8;
      v28 = strrchr(v14, 47);
      if ( !v28 )
        goto LABEL_8;
      v29 = v28 - v14;
      if ( v28 - v14 == -1 )
        goto LABEL_8;
      if ( v29 )
      {
        v34 = v29 + 1;
        if ( (unsigned __int64)v41 < v29 + 1 )
        {
          if ( *((_QWORD *)&v41 + 1) < v34 )
          {
            dest = (char *)qvector_reserve();
            v18 = v41;
            v14 = dest;
          }
          memset(&v14[v18], 0, v34 - v18);
          *(_QWORD *)&v41 = v29 + 1;
          v28 = &dest[v29];
        }
        else if ( (_QWORD)v41 != v29 + 1 )
        {
          *(_QWORD *)&v41 = v29 + 1;
        }
        *v28 = 0;
        v18 = v41;
        v14 = dest;
        goto LABEL_37;
      }
      if ( v14 )
      {
        v41 = 0u;
        qfree();
        dest = nullptr;
        v18 = 0;
        v14 = nullptr;
LABEL_37:
        if ( !v18 )
          goto LABEL_8;
      }
    }
    v30 = v22 + 1;
    if ( v18 < v22 + 1 )
    {
      if ( *((_QWORD *)&v41 + 1) < v30 )
      {
        dest = (char *)qvector_reserve();
        v18 = v41;
        v14 = dest;
      }
      memset(&v14[v18], 0, v30 - v18);
      *(_QWORD *)&v41 = v22 + 1;
      v21 = &dest[v22];
    }
    else if ( v30 != v18 )
    {
      *(_QWORD *)&v41 = v22 + 1;
    }
    *v21 = 0;
    v23 = v41;
    v14 = dest;
    v31 = *((_QWORD *)&v41 + 1);
    v24 = strlen(s);
    v26 = v24;
    if ( (_QWORD)v41 )
    {
      v20 = v41 - 1;
      goto LABEL_54;
    }
LABEL_43:
    v25 = v26 + 1;
    if ( v31 >= v26 + 1 )
      goto LABEL_26;
    goto LABEL_25;
  }
LABEL_8:
  if ( v14 )
    qfree();
  return v13;
}

