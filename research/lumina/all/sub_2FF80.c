unsigned __int64 __fastcall sub_2FF80(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  __int64 v7; // r12
  const char *v8; // rsi
  const char *v9; // rsi
  __int64 v10; // rax
  void **p_ptr; // rsi
  const char *v12; // rdi
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  void *v18; // r12
  char v19; // al
  int v20; // eax
  const void *v21; // rbp
  void *v22; // rdi
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  int v31; // [rsp-10h] [rbp-78h]
  __int64 v32; // [rsp-8h] [rbp-70h]
  void *v33; // [rsp+0h] [rbp-68h] BYREF
  __int128 v34; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-48h] BYREF
  __int128 v36; // [rsp+28h] [rbp-40h]
  unsigned __int64 v37; // [rsp+38h] [rbp-30h]

  v37 = __readfsqword(0x28u);
  if ( (unsigned __int64)xmmword_2426F0 > 1 )
  {
    v18 = qword_2426E8;
    sub_16B870((unsigned int)"Loading configuration file \"%s\"\n", (_DWORD)qword_2426E8, a3, a4, a5, a6);
    sub_16E9A0("configuration", v18, 17);
    v19 = sub_BA1B0(v18, 0, (int)&dest);
    a4 = v31;
    if ( !v19 )
    {
      v20 = sub_18FA20(v18, v32);
      sub_2C700(v20);
      sub_16E8E0(-1, (char)"Couldn't open configuration file \"%s\": %s\n");
    }
  }
  v7 = xmmword_2426A8;
  if ( (unsigned __int64)xmmword_2426A8 > 1 )
  {
    v21 = (const void *)qword_2426A0;
    v22 = dest;
    if ( *((_QWORD *)&xmmword_241AC8 + 1) < (unsigned __int64)xmmword_2426A8 )
    {
      dest = (void *)sub_1987B0(&dest, dest, xmmword_2426A8, 1);
      v22 = dest;
    }
    *(_QWORD *)&xmmword_241AC8 = v7;
    memmove(v22, v21, v7 - 1);
    *((char *)dest + v7 - 1) = 0;
    sub_16B870((unsigned int)"Using command line-provided connection string.\n", (_DWORD)v21, v23, v24, v25, v26);
  }
  else if ( (unsigned __int64)xmmword_241AC8 <= 1 )
  {
    if ( (unsigned __int8)sub_19AD90("LUMINA_CONNSTR") )
      sub_16B870((unsigned int)"Using envvar-provided connection string\n", (unsigned int)&dest, v27, v28, v29, v30);
  }
  else
  {
    v8 = s1;
    if ( (_QWORD)xmmword_2426F0 )
      LODWORD(v8) = (_DWORD)qword_2426E8;
    sub_16B870(
      (unsigned int)"Using connection string provided in configuration file \"%s\".\n",
      (_DWORD)v8,
      a3,
      a4,
      a5,
      a6);
  }
  v33 = nullptr;
  v34 = 0;
  v9 = s1;
  if ( (_QWORD)xmmword_241AC8 )
    v9 = (const char *)dest;
  if ( !(unsigned __int8)sub_C1030(a1 + 208, v9, &v33)
    || (v10 = sub_C08F0(a1 + 208), !*(_QWORD *)(v10 + 8))
    || strcmp(*(const char **)v10, "mysql") )
  {
    sub_16E8E0(
      -1,
      (char)"Bad connection string (%s): %s\n"
            "Connection string examples:\n"
            "  mysql;Server=127.0.0.1;Database=database;Uid=username;Pwd=password;\n");
  }
  p_ptr = &ptr;
  ptr = nullptr;
  v36 = 0;
  if ( (unsigned __int8)sub_19AD90("LUMINA_RECV_HELO_TIMEOUT") )
  {
    v12 = s1;
    if ( (_QWORD)v36 )
      v12 = (const char *)ptr;
    dword_241AF0 = strtol(v12, nullptr, 10);
    p_ptr = (void **)(unsigned int)dword_241AF0;
    sub_16B870((unsigned int)"Using envvar-provided LUMINA_RECV_HELO_TIMEOUT=%d\n", dword_241AF0, v13, v14, v15, v16);
  }
  sub_16EB70(a1, p_ptr);
  if ( ptr )
  {
    *(_QWORD *)&v36 = 0;
    j__free(ptr);
  }
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    j__free(v33);
  }
  return v37 - __readfsqword(0x28u);
}
