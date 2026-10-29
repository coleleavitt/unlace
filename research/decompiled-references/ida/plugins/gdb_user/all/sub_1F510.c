unsigned __int64 __fastcall sub_1F510(void **a1)
{
  void *v2; // rbx
  __int64 v3; // rax
  size_t v4; // r12
  size_t v5; // r15
  void *v6; // rdi
  __int64 v8; // r14
  char *v9; // rax
  char *v10; // rax
  char *v11; // rax
  char *haystack; // [rsp+30h] [rbp-24C8h] BYREF
  size_t v13; // [rsp+38h] [rbp-24C0h]
  size_t v14; // [rsp+40h] [rbp-24B8h]
  __int64 v15; // [rsp+50h] [rbp-24A8h]
  __int64 v16; // [rsp+A0h] [rbp-2458h]
  __int64 v17; // [rsp+B0h] [rbp-2448h]
  __int64 v18; // [rsp+B8h] [rbp-2440h]
  _BYTE v19[1008]; // [rsp+C0h] [rbp-2438h] BYREF
  char v20[4104]; // [rsp+14B0h] [rbp-1048h] BYREF
  unsigned __int64 v21; // [rsp+24B8h] [rbp-40h]

  v2 = nullptr;
  v21 = __readfsqword(0x28u);
  v3 = sub_F0E0();
  v4 = *(_QWORD *)(v3 + 984);
  if ( !v4 )
    goto LABEL_2;
  v8 = v3;
  v2 = (void *)qalloc_or_throw();
  memcpy(v2, *(const void **)(v8 + 976), v4);
  v9 = strstr((const char *)v2, "%e");
  if ( !v9 || v9 - (_BYTE *)v2 == -1 )
  {
    v5 = v4;
    v10 = strstr((const char *)v2, "%i");
    if ( !v10
      || v10 - (_BYTE *)v2 == -1
      || (dbg_get_input_path(),
          haystack = (char *)v2,
          v13 = v4,
          v14 = v4,
          sub_1BC30((__int64)&haystack, "%i", v20),
          v5 = v13,
          v2 = haystack,
          v4 = v14,
          v13) )
    {
      v11 = strstr((const char *)v2, "%p");
      if ( v11 && v11 - (_BYTE *)v2 != -1 )
      {
        qsnprintf();
        haystack = (char *)v2;
        v13 = v5;
        v14 = v4;
        sub_1BC30((__int64)&haystack, "%p", v20);
        v2 = haystack;
        v4 = v14;
        v5 = v13;
      }
      goto LABEL_3;
    }
LABEL_2:
    v5 = 0;
LABEL_3:
    v6 = *a1;
    a1[1] = (void *)v5;
    *a1 = v2;
    a1[2] = (void *)v4;
    goto LABEL_4;
  }
  get_path();
  qstrncpy();
  qsplitfile();
  if ( haystack )
    *haystack = 0;
  qstrncat();
  v17 = 6712421;
  memset(v19, 0, sizeof(v19));
  v18 = 0;
  v15 = 0;
  v16 = 0;
  set_file_ext();
  idadir();
  qmakepath();
  if ( (unsigned __int8)load_core_module() )
  {
    sub_DB10((__int64)"Bad ELF loader module", v20);
    free_dll();
  }
  else
  {
    sub_DB10((__int64)"Could not load ELF loader module", v20);
  }
  v6 = v2;
LABEL_4:
  if ( v6 )
    qfree();
  return v21 - __readfsqword(0x28u);
}

