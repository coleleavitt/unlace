__int64 __fastcall sub_8B20(__int64 a1, const void *a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
{
  size_t v8; // rax
  size_t v9; // rax
  size_t v10; // r8
  size_t v11; // rax
  size_t v12; // r8
  __int64 *v13; // rdi
  unsigned __int64 v14; // rbx
  const char *v15; // r8
  const char *v16; // rcx
  const char *v17; // r8
  __int64 v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rdx
  const char *file_ext; // rdi
  unsigned int v24; // ebx
  size_t v26; // rax
  void *v27; // rdi
  size_t v28; // rdx
  void *v29; // rdi
  size_t v30; // rdx
  size_t v32; // [rsp+28h] [rbp-6110h]
  size_t v33; // [rsp+28h] [rbp-6110h]
  size_t v34; // [rsp+28h] [rbp-6110h]
  size_t v35; // [rsp+28h] [rbp-6110h]
  size_t v36; // [rsp+28h] [rbp-6110h]
  size_t n; // [rsp+40h] [rbp-60F8h]
  size_t nb; // [rsp+40h] [rbp-60F8h]
  size_t na; // [rsp+40h] [rbp-60F8h]
  unsigned __int64 v43; // [rsp+50h] [rbp-60E8h] BYREF
  unsigned __int64 *v44; // [rsp+58h] [rbp-60E0h] BYREF
  void *dest; // [rsp+60h] [rbp-60D8h] BYREF
  __int128 v46; // [rsp+68h] [rbp-60D0h]
  void *v47; // [rsp+78h] [rbp-60C0h]
  __int128 v48; // [rsp+80h] [rbp-60B8h]
  void *v49; // [rsp+90h] [rbp-60A8h]
  __int128 v50; // [rsp+98h] [rbp-60A0h]
  int v51; // [rsp+A8h] [rbp-6090h]
  char src[8228]; // [rsp+B4h] [rbp-6084h] BYREF
  __int64 v53; // [rsp+20D8h] [rbp-4060h]
  int v54; // [rsp+20E4h] [rbp-4054h]
  char s[4096]; // [rsp+40F0h] [rbp-2048h] BYREF
  char v56[4104]; // [rsp+50F0h] [rbp-1048h] BYREF
  unsigned __int64 v57; // [rsp+60F8h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  qmakepath();
  v53 = 0;
  v54 = 0;
  strlen(s);
  if ( (unsigned int)qfindfirst() )
  {
LABEL_38:
    v24 = 1;
    goto LABEL_39;
  }
  while ( src[0] == 46 )
  {
LABEL_37:
    if ( (unsigned int)qfindnext() )
      goto LABEL_38;
  }
  qstrncpy();
  dest = nullptr;
  v47 = nullptr;
  v49 = nullptr;
  v51 = 4;
  v46 = 0;
  v48 = 0;
  v50 = 0;
  v8 = strlen(src);
  if ( v8 )
  {
    n = v8;
    v32 = v8 + 1;
    v49 = (void *)qvector_reserve();
    *(_QWORD *)&v50 = v32;
    memmove(v49, src, n);
    *((_BYTE *)v49 + n) = 0;
    v26 = strlen(s);
    v10 = v26;
    if ( !v26 )
      goto LABEL_5;
    v27 = dest;
    v28 = v26 + 1;
    if ( *((_QWORD *)&v46 + 1) >= v26 + 1 )
    {
LABEL_42:
      *(_QWORD *)&v46 = v28;
      v33 = v10;
      memmove(v27, s, v10);
      *((_BYTE *)dest + v33) = 0;
      goto LABEL_6;
    }
LABEL_47:
    nb = v10;
    v35 = v28;
    dest = (void *)qvector_reserve();
    v10 = nb;
    v27 = dest;
    v28 = v35;
    goto LABEL_42;
  }
  v9 = strlen(s);
  v10 = v9;
  if ( v9 )
  {
    v28 = v9 + 1;
    goto LABEL_47;
  }
LABEL_5:
  *(_QWORD *)&v46 = 0;
LABEL_6:
  if ( a2 && (v11 = strlen((const char *)a2), (v12 = v11) != 0) )
  {
    v29 = v47;
    v30 = v11 + 1;
    if ( *((_QWORD *)&v48 + 1) < v11 + 1 )
    {
      na = v11;
      v36 = v11 + 1;
      v47 = (void *)qvector_reserve();
      v12 = na;
      v29 = v47;
      v30 = v36;
    }
    *(_QWORD *)&v48 = v30;
    v34 = v12;
    memmove(v29, a2, v12);
    *((_BYTE *)v47 + v34) = 0;
  }
  else
  {
    *(_QWORD *)&v48 = 0;
  }
  if ( !(unsigned __int8)qisdir() )
  {
    v51 = 4;
    file_ext = (const char *)get_file_ext();
    if ( file_ext && !strcasecmp(file_ext, "svd") )
    {
      sub_7000(*(__int64 **)(a1 + 4280), (const void **)&dest, a3, a4, 4);
      dirtree_link_inode();
    }
    goto LABEL_31;
  }
  v13 = *(__int64 **)(a1 + 4280);
  v51 = 3;
  v14 = sub_7000(v13, (const void **)&dest, a3, a4, 0);
  v15 = s1;
  if ( (_QWORD)v50 )
    v15 = (const char *)v49;
  v16 = s1;
  if ( (_QWORD)v48 )
    v16 = (const char *)v47;
  if ( !(unsigned __int8)sub_7550(a1, (__int64)v56, 4096, (__int64)v16, (__int64)v15, a6) )
    goto LABEL_50;
  dirtree_mkdir();
  v17 = s1;
  if ( (_QWORD)v50 )
    v17 = (const char *)v49;
  v18 = sub_61C0(a1, (__int64)&v43, a5, (const char *)a2, v17);
  if ( v18 == -1 || v14 == v18 )
  {
    v19 = *(_QWORD **)(a1 + 4312);
    if ( v19 )
    {
      v20 = (_QWORD *)(a1 + 4304);
      do
      {
        while ( 1 )
        {
          v21 = v19[2];
          v22 = v19[3];
          if ( v19[4] < v43 )
            break;
          v20 = v19;
          v19 = (_QWORD *)v19[2];
          if ( !v21 )
            goto LABEL_24;
        }
        v19 = (_QWORD *)v19[3];
      }
      while ( v22 );
LABEL_24:
      if ( (_QWORD *)(a1 + 4304) != v20 && v43 >= v20[4] )
        goto LABEL_27;
    }
    else
    {
      v20 = (_QWORD *)(a1 + 4304);
    }
    v44 = &v43;
    v20 = sub_4640((_QWORD *)(a1 + 4296), v20, &v44);
LABEL_27:
    v20[5] = v14;
LABEL_31:
    if ( v49 )
    {
      *(_QWORD *)&v50 = 0;
      qfree();
    }
    if ( v47 )
    {
      *(_QWORD *)&v48 = 0;
      qfree();
    }
    if ( dest )
    {
      *(_QWORD *)&v46 = 0;
      qfree();
    }
    goto LABEL_37;
  }
  sub_7490(a6);
LABEL_50:
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree();
  }
  if ( v47 )
  {
    *(_QWORD *)&v48 = 0;
    qfree();
  }
  if ( dest )
  {
    *(_QWORD *)&v46 = 0;
    qfree();
  }
  v24 = 0;
LABEL_39:
  qfindclose();
  return v24;
}

