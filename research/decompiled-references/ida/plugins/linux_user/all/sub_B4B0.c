__int64 __fastcall sub_B4B0(char *s2, int a2, int a3, const void *a4)
{
  __int64 v6; // rdi
  __int64 module_data; // rax
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64); // rax
  __int64 v11; // rbx
  __int64 result; // rax
  size_t v13; // rbp
  const char *v14; // rsi
  size_t v15; // rax
  size_t v16; // rbp
  __int64 v17; // rbp
  void *v18; // r13
  void *v19; // rax
  __int64 v20; // rax
  __int64 (__fastcall *v21)(__int64); // rax
  __int64 v22; // rbx
  _BYTE *v23; // rdi
  size_t v24; // r14
  const char *v25; // rax
  const char *v26; // rbp
  size_t v27; // rax
  size_t v28; // r12
  size_t v29; // r13
  void *src; // [rsp+0h] [rbp-58h] BYREF
  __int128 v31; // [rsp+8h] [rbp-50h]
  unsigned __int64 v32; // [rsp+18h] [rbp-40h]

  v6 = (unsigned int)dword_48084;
  v32 = __readfsqword(0x28u);
  module_data = get_module_data();
  if ( !module_data )
    goto LABEL_55;
  v9 = module_data;
  v10 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)module_data + 32LL);
  if ( v10 == sub_ABD0 )
  {
    v11 = v9 + 224;
    if ( s2 )
      goto LABEL_4;
LABEL_9:
    src = nullptr;
    v31 = 0;
    v13 = *(_QWORD *)(v11 + 1312);
    if ( v13 )
    {
      *((_QWORD *)&v31 + 1) = *(_QWORD *)(v11 + 1312);
      src = (void *)qalloc_or_throw();
      memcpy(src, *(const void **)(v11 + 1304), v13);
      *(_QWORD *)&v31 = v13;
    }
    while ( 1 )
    {
      if ( !(unsigned int)sub_B180(
                            (__int64)"Linux debugger configuration\n"
                                     "<#Where is the libunwind leave empty if you don't want to use libunwind#Path to lib"
                                     "~u~nwind:q:1024:60::>\n"
                                     "\n",
                            &src) )
      {
        if ( src )
        {
          *(_QWORD *)&v31 = 0;
          qfree();
        }
        return 0;
      }
      if ( (unsigned __int64)v31 <= 1 || sub_25CD0((char *)src) )
        break;
      v14 = s;
      if ( (_QWORD)v31 )
        v14 = (const char *)src;
      sub_AFE0((__int64)"AUTOHIDE NONE\n\"%s\" is not a valid path to libunwind-x86_64.so", v14);
    }
    if ( (void **)(v11 + 1304) != &src )
    {
      v17 = v31;
      if ( (unsigned __int64)v31 < 2 )
      {
        *(_QWORD *)(v11 + 1312) = 0;
      }
      else
      {
        v18 = src;
        v19 = *(void **)(v11 + 1304);
        if ( *(_QWORD *)(v11 + 1320) < (unsigned __int64)v31 )
        {
          v19 = (void *)qvector_reserve();
          *(_QWORD *)(v11 + 1304) = v19;
        }
        *(_QWORD *)(v11 + 1312) = v17;
        memmove(v19, v18, v17 - 1);
        *(_BYTE *)(*(_QWORD *)(v11 + 1304) + v17 - 1) = 0;
      }
    }
    *(_BYTE *)(v11 + 1336) = 1;
    if ( src )
    {
      *(_QWORD *)&v31 = 0;
      qfree();
      return 0;
    }
    return 0;
  }
  v11 = v10(v9);
  if ( !s2 )
    goto LABEL_9;
LABEL_4:
  if ( !*s2 )
  {
    if ( !(unsigned __int8)netnode_inited() )
      return 0;
    netnode_check();
    v20 = get_module_data();
    v6 = v20;
    if ( v20 )
    {
      v21 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 32LL);
      if ( v21 == sub_ABD0 )
        v22 = v6 + 224;
      else
        v22 = ((__int64 (__fastcall *)(__int64, const char *))v21)(v6, "$ local linux options");
      if ( !(unsigned __int8)netnode_exist() )
      {
        v25 = (const char *)sub_25CC0(&src, "$ local linux options");
        v26 = v25;
        if ( v25 && (v27 = strlen(v25), (v28 = v27) != 0) )
        {
          v29 = v27 + 1;
          if ( *(_QWORD *)(v22 + 1320) < v27 + 1 )
            *(_QWORD *)(v22 + 1304) = qvector_reserve();
          *(_QWORD *)(v22 + 1312) = v29;
          memmove(*(void **)(v22 + 1304), v26, v28);
          *(_BYTE *)(*(_QWORD *)(v22 + 1304) + v28) = 0;
          return 0;
        }
        else
        {
          *(_QWORD *)(v22 + 1312) = 0;
          return 0;
        }
      }
      netnode_qsupstr();
      if ( *(_QWORD *)(v22 + 1312) )
      {
        v23 = *(_BYTE **)(v22 + 1304);
        if ( *v23 == 1 && !v23[1] && v23 )
        {
          *(_QWORD *)(v22 + 1312) = 0;
          qfree();
          *(_QWORD *)(v22 + 1304) = 0;
          *(_QWORD *)(v22 + 1320) = 0;
          return 0;
        }
      }
      return 0;
    }
LABEL_55:
    sub_ACB0(v6);
  }
  if ( strcmp("LIBUNWIND_PATH", s2) )
    return 1;
  result = 2;
  if ( a3 == 1 )
  {
    if ( a4 && (v15 = strlen((const char *)a4), (v16 = v15) != 0) )
    {
      v24 = v15 + 1;
      if ( *(_QWORD *)(v11 + 1320) < v15 + 1 )
        *(_QWORD *)(v11 + 1304) = qvector_reserve();
      *(_QWORD *)(v11 + 1312) = v24;
      memmove(*(void **)(v11 + 1304), a4, v16);
      *(_BYTE *)(*(_QWORD *)(v11 + 1304) + v16) = 0;
    }
    else
    {
      *(_QWORD *)(v11 + 1312) = 0;
    }
    if ( a2 == 2 )
    {
      *(_BYTE *)(v11 + 1336) = 1;
      return 0;
    }
    return 0;
  }
  return result;
}

