unsigned __int64 __fastcall sub_1F510(__int64 a1)
{
  char *v2; // rdi
  DIR *v3; // rbx
  int v4; // ebp
  char v5; // r13
  int v6; // r15d
  int v7; // r8d
  int v8; // r9d
  unsigned __int64 v9; // r14
  struct dirent *v10; // rax
  char v11; // al
  int v12; // r8d
  int v13; // r9d
  char v15; // [rsp+7h] [rbp-59h]
  char *name; // [rsp+8h] [rbp-58h] BYREF
  __int128 v17; // [rsp+10h] [rbp-50h]
  unsigned __int64 v18; // [rsp+20h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v17 = 0;
  name = nullptr;
  sub_BF00((__int64 *)&name);
  v2 = (char *)s;
  if ( (_QWORD)v17 )
    v2 = name;
  v3 = opendir(v2);
  v4 = 0;
  if ( !v3 )
  {
    sub_B0B0((__int64)"Could not open /proc/%d/task", *(_DWORD *)(a1 + 1340));
    if ( !name )
      return v18 - __readfsqword(0x28u);
    goto LABEL_13;
  }
  do
  {
    while ( 1 )
    {
      v5 = 0;
      while ( 1 )
      {
        v10 = readdir(v3);
        if ( !v10 )
          break;
        v6 = (_DWORD)v10 + 19;
        v9 = strtoul(v10->d_name, nullptr, 10);
        if ( v9 )
        {
          sub_32190(a1, (unsigned int)"DBG: %d found %s thread\n", v4, v6, v7, v8);
          v11 = sub_1F480(a1, v9);
          if ( v11 )
          {
            v15 = v11;
            sub_32190(a1, (unsigned int)"DBG: %d collected %s thread\n", v4, v6, v12, v13);
            v5 = v15;
          }
        }
      }
      if ( !v5 )
        break;
      v4 = 0;
      rewinddir(v3);
    }
    ++v4;
    rewinddir(v3);
  }
  while ( v4 != 2 );
  closedir(v3);
  if ( name )
  {
LABEL_13:
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  return v18 - __readfsqword(0x28u);
}

