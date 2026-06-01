__int64 __fastcall sub_75D0(__int64 a1, __int64 a2, int a3, __int64 *a4, __int64 a5)
{
  unsigned int v8; // ebp
  const char *v10; // r15
  char *v11; // rax
  char *v12; // r14
  size_t v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 *v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // rdi
  __int64 *v20; // rsi
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  const char *v23; // rax
  unsigned __int64 i; // rbx
  void *v25; // rdi
  size_t v26; // rdx
  size_t v28; // [rsp+10h] [rbp-108h]
  size_t v29; // [rsp+10h] [rbp-108h]
  size_t v30; // [rsp+18h] [rbp-100h]
  __int64 v31; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v32; // [rsp+28h] [rbp-F0h] BYREF
  __int64 v33; // [rsp+30h] [rbp-E8h]
  __int128 v34; // [rsp+38h] [rbp-E0h]
  __int64 *v35; // [rsp+50h] [rbp-C8h]
  __int128 v36; // [rsp+58h] [rbp-C0h]
  __int64 v37; // [rsp+70h] [rbp-A8h]
  int v38; // [rsp+78h] [rbp-A0h]
  __int16 v39; // [rsp+7Ch] [rbp-9Ch]
  __int16 v40; // [rsp+7Eh] [rbp-9Ah]
  _QWORD v41[19]; // [rsp+80h] [rbp-98h] BYREF

  v41[11] = __readfsqword(0x28u);
  if ( strncasecmp((const char *)a2, "http", 4u) )
    return 0;
  if ( *(_BYTE *)(((*(_BYTE *)(a2 + 4) & 0xDF) == 83) + a2 + 4) != 58 )
    return 0;
  if ( *(_BYTE *)(((*(_BYTE *)(a2 + 4) & 0xDF) == 83) + a2 + 5) != 47 )
    return 0;
  if ( *(_BYTE *)(((*(_BYTE *)(a2 + 4) & 0xDF) == 83) + a2 + 6) != 47 )
    return 0;
  v10 = (const char *)(((*(_BYTE *)(a2 + 4) & 0xDF) == 83) + a2 + 7);
  v11 = strchr(v10, 47);
  v12 = v11;
  if ( !v11 )
    return 0;
  v33 = 0;
  v34 = 0;
  v13 = v11 - v10;
  if ( v11 != v10 )
  {
    v25 = nullptr;
    v26 = v13 + 1;
    if ( v13 != -1 )
    {
      v30 = v11 - v10;
      v29 = v13 + 1;
      v33 = qvector_reserve();
      v13 = v30;
      v25 = (void *)v33;
      v26 = v29;
    }
    *(_QWORD *)&v34 = v26;
    v28 = v13;
    memmove(v25, v10, v13);
    *(_BYTE *)(v33 + v28) = 0;
  }
  qtmpnam();
  qfileexist();
  v14 = fopenWB();
  *(_QWORD *)(a1 + 8) = v14;
  if ( v14 )
  {
    sub_5990((__int64)"HTTP GET \"%s\" => \"%s\" ", (const char *)a2, (const char *)(a1 + 16));
    v36 = 0;
    v35 = (__int64 *)qvector_reserve();
    *v35 = 0;
    v15 = v36;
    *(_QWORD *)&v36 = v36 + 1;
    if ( !a5 )
    {
LABEL_20:
      v40 = 0;
      memset(v41, 0, 0x58u);
      v37 = 104;
      v39 = -1;
      v38 = a3 | 0x41;
      v23 = s1;
      if ( (_QWORD)v34 )
        v23 = (const char *)v33;
      v41[0] = v23;
      v41[1] = v12;
      v41[2] = v35;
      if ( (int)http_get_file() <= 0 )
      {
        sub_5990((__int64)"FAILED\n", a1);
        qfclose();
        *(_QWORD *)(a1 + 8) = 0;
        v8 = 0;
      }
      else
      {
        sub_5990((__int64)"OK\n", a1);
        qfclose();
        *(_QWORD *)(a1 + 8) = 0;
        v8 = 1;
        if ( !qfilesize() )
        {
          sub_7490(a4);
          v8 = 0;
        }
      }
      for ( i = 0; i < (unsigned __int64)v36; ++i )
        qfree();
      if ( v35 )
      {
        *(_QWORD *)&v36 = 0;
        qfree();
      }
      goto LABEL_29;
    }
    v35[v15] = qstrdup();
    v32 = qstrdup();
    v16 = v32;
    v17 = v35;
    v18 = v36;
    v19 = v36 + 1;
    if ( &v32 < v35 || &v32 >= &v35[*((_QWORD *)&v36 + 1)] )
    {
      if ( *((_QWORD *)&v36 + 1) >= v19 )
        goto LABEL_16;
    }
    else if ( *((_QWORD *)&v36 + 1) >= v19 )
    {
LABEL_16:
      v17[v18] = v16;
      v20 = v35;
      v31 = 0;
      v21 = v36 + 1;
      v22 = v36 + 2;
      *(_QWORD *)&v36 = v36 + 1;
      if ( &v31 >= v35 && &v31 < &v35[*((_QWORD *)&v36 + 1)] )
      {
        if ( *((_QWORD *)&v36 + 1) >= v22 )
          goto LABEL_19;
      }
      else if ( *((_QWORD *)&v36 + 1) >= v22 )
      {
LABEL_19:
        v20[v21] = 0;
        *(_QWORD *)&v36 = v36 + 1;
        goto LABEL_20;
      }
      v35 = (__int64 *)qvector_reserve();
      v20 = v35;
      v21 = v36;
      goto LABEL_19;
    }
    v35 = (__int64 *)qvector_reserve();
    v17 = v35;
    v18 = v36;
    goto LABEL_16;
  }
  qstrerror();
  sub_7490(a4);
  v8 = 0;
LABEL_29:
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree();
  }
  return v8;
}

