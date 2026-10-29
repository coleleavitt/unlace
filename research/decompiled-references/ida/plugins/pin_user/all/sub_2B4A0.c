__int64 __fastcall sub_2B4A0(__int64 a1)
{
  char **v2; // r12
  void *v3; // rdi
  void *v4; // rdi
  char *v5; // r13
  void *v6; // rax
  void *v7; // rax
  unsigned int v8; // ebx
  _BYTE *v10; // [rsp+0h] [rbp-468h]
  char file[1032]; // [rsp+20h] [rbp-448h] BYREF
  unsigned __int64 v12; // [rsp+428h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  v10 = nullptr;
  if ( (unsigned __int8)qgetenv() )
  {
    if ( (*(_DWORD *)debug & 0x100000) != 0 )
      sub_BC00((__int64)"TLS: using OpenSSL library path override \"%s\"\n", s);
    v10 = (_BYTE *)qvector_reserve();
    *v10 = 47;
    v10[1] = 0;
  }
  v2 = off_39400;
  while ( 1 )
  {
    v3 = *(void **)(a1 + 32);
    if ( v3 )
      dlclose(v3);
    v4 = *(void **)(a1 + 24);
    *(_QWORD *)(a1 + 32) = 0;
    if ( v4 )
      dlclose(v4);
    *(_QWORD *)(a1 + 24) = 0;
    v5 = *v2;
    qstrncpy();
    qstrncat();
    qstrncat();
    qstrncat();
    v6 = dlopen(file, 2);
    *(_QWORD *)(a1 + 24) = v6;
    if ( v6 )
    {
      qstrncpy();
      qstrncat();
      qstrncat();
      qstrncat();
      v7 = dlopen(file, 2);
      *(_QWORD *)(a1 + 32) = v7;
      if ( v7 )
        break;
    }
    if ( ++v2 == &off_39430 )
    {
      v8 = 0;
      goto LABEL_14;
    }
  }
  if ( *v5 && (*(_DWORD *)debug & 0x100000) != 0 )
    sub_BC00((__int64)"TLS: loaded \"%s\"\n", file);
  v8 = 1;
LABEL_14:
  if ( v10 )
    qfree();
  return v8;
}

