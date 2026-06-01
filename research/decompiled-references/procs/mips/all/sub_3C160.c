__int64 __fastcall sub_3C160(__int64 a1, const char *a2)
{
  char *v2; // rax
  const char *v3; // r12
  char *v4; // rbx
  void *v5; // rax
  size_t v6; // rbx
  bool v7; // al
  const char **v8; // rbx
  unsigned int v9; // ebp
  __int64 v10; // rbx
  unsigned int v11; // r12d
  __int64 v12; // r13
  __int64 v13; // rbp
  __int64 *v14; // rax
  __int64 v15; // rdi
  size_t v17; // rbx
  char *v18; // r14
  __int64 v19; // rbp
  char *v20; // r13
  int v21; // r12d
  __int64 v22; // rax
  const char *v23; // rsi
  char *v24; // r15
  const char *v25; // rdx
  __int64 v27; // [rsp+10h] [rbp-88h]
  __int64 v28; // [rsp+18h] [rbp-80h]
  void *dest; // [rsp+20h] [rbp-78h] BYREF
  __int128 v30; // [rsp+28h] [rbp-70h]
  __int64 v31; // [rsp+40h] [rbp-58h] BYREF
  __int128 v32; // [rsp+48h] [rbp-50h]
  unsigned __int64 v33; // [rsp+58h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  v30 = 0;
  dest = nullptr;
  v31 = 0;
  v32 = 0;
  v2 = strchr(a2, 45);
  v3 = v2;
  if ( v2 )
  {
    v4 = v2;
    v5 = nullptr;
    v6 = v4 - a2;
    if ( v6 != -1 )
    {
      v5 = (void *)qvector_reserve(&dest, 0, v6 + 1, 1);
      dest = v5;
    }
    *(_QWORD *)&v30 = v6 + 1;
    *((_BYTE *)v5 + v6) = 0;
    memmove(dest, a2, v6);
    sub_3BC70(&v31, v3 + 1, 45);
    goto LABEL_5;
  }
  if ( !a2 )
  {
    v7 = 1;
    goto LABEL_6;
  }
  v17 = strlen(a2);
  v7 = 1;
  if ( v17 )
  {
    dest = (void *)qvector_reserve(&dest, 0, v17 + 1, 1);
    *(_QWORD *)&v30 = v17 + 1;
    memmove(dest, a2, v17);
    *((_BYTE *)dest + v17) = 0;
LABEL_5:
    v3 = (const char *)dest;
    v7 = (_QWORD)v30 == 0;
  }
LABEL_6:
  v8 = (const char **)&off_73540;
  if ( v7 )
    v3 = byte_51ACD;
  v9 = 0;
  while ( strcasecmp(*v8, v3) )
  {
    ++v9;
    v8 += 4;
    if ( v9 == 6 )
    {
      sub_3AC20((__int64)"ABI name %s is unknown, ignored\n", a2);
      v10 = v31;
      v11 = 0;
      goto LABEL_12;
    }
  }
  v10 = v31;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) == 8 || ((__int64)(&off_73540)[4 * v9 + 1] & 1) == 0 )
  {
    *(_DWORD *)(a1 + 120) = v9;
    *(_DWORD *)(a1 + 256) = 0;
    v27 = v10 + 24 * v32;
    if ( v27 == v10 )
    {
      v11 = 1;
    }
    else
    {
      v28 = (int)v9;
      v18 = (&off_73540)[4 * (int)v9 + 3];
      while ( 1 )
      {
        v19 = *(_QWORD *)(v10 + 8);
        if ( v18 )
          break;
LABEL_39:
        v25 = byte_51ACD;
        if ( v19 )
          v25 = *(const char **)v10;
        sub_3AC20((__int64)"ABI name %s contains the unsupported option %s, ignored\n", a2, v25);
        v10 += 24;
        if ( v27 == v10 )
          goto LABEL_42;
      }
      v20 = (&off_73540)[4 * v28 + 2];
      while ( 1 )
      {
        v21 = 0;
        v22 = 0;
        while ( 1 )
        {
          v23 = byte_51ACD;
          if ( v19 )
            v23 = *(const char **)v10;
          v24 = &v20[24 * v22];
          if ( !strcasecmp(*(const char **)v24, v23) )
            break;
          v22 = ++v21;
          if ( v21 >= (unsigned __int64)v18 )
            goto LABEL_39;
        }
        v10 += 24;
        *(_DWORD *)(a1 + 256) |= *((_DWORD *)v24 + 2);
        if ( v27 == v10 )
          break;
        v19 = *(_QWORD *)(v10 + 8);
      }
LABEL_42:
      v10 = v31;
      v11 = 1;
    }
  }
  else
  {
    v11 = 0;
  }
LABEL_12:
  if ( v10 )
  {
    v12 = v32;
    if ( (_QWORD)v32 )
    {
      v13 = 0;
      do
      {
        v14 = (__int64 *)(v10 + 24 * v13);
        v15 = *v14;
        if ( *v14 )
        {
          v14[1] = 0;
          qfree(v15);
          v10 = v31;
        }
        ++v13;
      }
      while ( v12 != v13 );
    }
    *(_QWORD *)&v32 = 0;
    qfree(v10);
  }
  if ( dest )
  {
    *(_QWORD *)&v30 = 0;
    qfree(dest);
  }
  return v11;
}
