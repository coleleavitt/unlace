__int64 __fastcall sub_164D0(_QWORD *a1)
{
  unsigned int v1; // ebx
  const char *plugin_options; // rax
  const char *v4; // rbx
  size_t v5; // rax
  size_t v6; // r15
  size_t v7; // r13
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  const char *v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  const char *v14; // rdx
  const char *v15; // rsi
  __int64 v16; // r13
  __m128i v17; // xmm0
  const char *v18; // rsi
  size_t v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  size_t v22; // rbx
  const char *v23; // rsi
  _QWORD *v24; // r14
  __int64 v25; // rdx
  _QWORD *v26; // r12
  size_t v27; // r15
  void *dest; // [rsp+10h] [rbp-10B0h] BYREF
  __int128 v30; // [rsp+18h] [rbp-10A8h]
  const char *v31; // [rsp+30h] [rbp-1090h] BYREF
  __int128 v32; // [rsp+38h] [rbp-1088h]
  _OWORD *v33; // [rsp+50h] [rbp-1070h] BYREF
  __int128 v34; // [rsp+58h] [rbp-1068h]
  __int128 v35; // [rsp+70h] [rbp-1050h] BYREF
  char s[4104]; // [rsp+80h] [rbp-1040h] BYREF
  unsigned __int64 v37; // [rsp+1088h] [rbp-38h]

  v37 = __readfsqword(0x28u);
  if ( (unsigned int)getinf(5) != 25
    || !(unsigned __int8)netnode_exist(a1 + 13)
    || (unsigned __int64)(netnode_altval(a1[13], 0, 65) - 1) > 1
    || netnode_supval(a1[13], 1, &v35, 16, 83) == -1 )
  {
    return 0;
  }
  plugin_options = (const char *)get_plugin_options("dscu");
  dest = nullptr;
  v4 = plugin_options;
  v30 = 0;
  if ( plugin_options )
  {
    v5 = strlen(plugin_options);
    v6 = v5 + 1;
    v7 = v5;
    dest = (void *)qvector_reserve(&dest, 0, v5 + 1, 1, v8, v9);
    *(_QWORD *)&v30 = v6;
    memmove(dest, v4, v7);
    *((_BYTE *)dest + v7) = 0;
    v10 = a1[13];
    if ( (unsigned __int64)v30 > 1 )
    {
      netnode_supset(v10, 5, dest, 0, 83);
      goto LABEL_10;
    }
  }
  else
  {
    v10 = a1[13];
  }
  if ( netnode_qsupstr(v10, &dest, 5, 83) <= 0 )
  {
    getinf_buf(97, s, 4096);
    netnode_supset(a1[13], 5, s, 0, 83);
    v19 = strlen(s);
    v22 = v19;
    if ( !v19 )
    {
      *(_QWORD *)&v30 = 0;
      v31 = nullptr;
      v32 = 0;
      goto LABEL_33;
    }
    v27 = v19 + 1;
    if ( *((_QWORD *)&v30 + 1) < v19 + 1 )
      dest = (void *)qvector_reserve(&dest, dest, v19 + 1, 1, v20, v21);
    *(_QWORD *)&v30 = v27;
    memmove(dest, s, v22);
    *((_BYTE *)dest + v22) = 0;
  }
LABEL_10:
  v31 = nullptr;
  v32 = 0;
  if ( !(_QWORD)v30 )
  {
LABEL_33:
    v11 = byte_190C8;
    goto LABEL_12;
  }
  v11 = (const char *)dest;
LABEL_12:
  v1 = sub_16180(a1, v11, (__int64 *)&v31);
  if ( (_BYTE)v1 )
  {
    v33 = nullptr;
    v34 = 0;
    v16 = a1[14];
    v33 = (_OWORD *)qvector_reserve(&v33, 0, 16, 1, v12, v13);
    memset((char *)v33 + v34, 0, 16 - v34);
    v17 = _mm_loadu_si128((const __m128i *)(v16 + 104));
    *(_QWORD *)&v34 = 16;
    *v33 = v17;
    if ( (_QWORD)v34 == 16 && v35 - *v33 == 0 )
    {
      v23 = byte_190C8;
      if ( (_QWORD)v30 )
        v23 = (const char *)dest;
      sub_CA10((__int64)"opened %s\n", v23);
      v24 = a1;
      read_config2("dscu", 1, &off_1EA20, 1, 0, 0, 0, a1);
      hook_event_listener(0, v24 + 16, v24, 0);
      hook_event_listener(3, v24 + 19, v24, 0);
      hook_event_listener(1, v24 + 22, v24, 0);
      v26 = a1 + 57;
      do
      {
        if ( (unsigned __int8)callui(127, v26, v25) )
          callui(129, "File/Load file/DYLD Shared Cache Utils/", v26[1]);
        v26 += 8;
      }
      while ( a1 + 121 != v26 );
    }
    else
    {
      v18 = byte_190C8;
      if ( (_QWORD)v30 )
        v18 = (const char *)dest;
      sub_CA10((__int64)"%s: UUID does not match the file in the database\n", v18);
      v1 = 0;
    }
    if ( v33 )
    {
      *(_QWORD *)&v34 = 0;
      qfree(v33);
    }
  }
  else
  {
    v14 = byte_190C8;
    if ( (_QWORD)v32 )
      v14 = v31;
    v15 = byte_190C8;
    if ( (_QWORD)v30 )
      v15 = (const char *)dest;
    sub_CA10((__int64)"failed to open %s: %s\n", v15, v14);
  }
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31);
  }
  if ( dest )
  {
    *(_QWORD *)&v30 = 0;
    qfree(dest);
  }
  return v1;
}

