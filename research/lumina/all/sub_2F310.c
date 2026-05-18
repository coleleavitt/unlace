unsigned __int64 __fastcall sub_2F310(const char *src, __int64 a2)
{
  size_t v2; // rax
  size_t v3; // r13
  size_t v4; // r12
  char *v5; // r12
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v8; // [rsp+8h] [rbp-40h]
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  *(_BYTE *)(a2 + 176) = 1;
  if ( !src )
  {
    *(_DWORD *)(a2 + 260) = 6;
    goto LABEL_12;
  }
  ptr = nullptr;
  v8 = 0;
  v2 = strlen(src);
  v3 = v2 + 1;
  v4 = v2;
  ptr = (void *)sub_1987B0(&ptr, 0, v2 + 1, 1);
  *(_QWORD *)&v8 = v3;
  memmove(ptr, src, v4);
  *((_BYTE *)ptr + v4) = 0;
  if ( !(_QWORD)v8 )
  {
    v5 = (char *)s1;
    goto LABEL_4;
  }
  v5 = (char *)ptr;
  if ( !strcmp((const char *)ptr, "noauth") )
  {
    *(_DWORD *)(a2 + 260) = 1;
    if ( !v5 )
      goto LABEL_12;
    goto LABEL_9;
  }
  if ( !strcmp(v5, "lumina") )
  {
    *(_DWORD *)(a2 + 260) = 2;
    if ( !v5 )
      return v9 - __readfsqword(0x28u);
LABEL_9:
    *(_QWORD *)&v8 = 0;
    j__free(v5);
    if ( ((*(_DWORD *)(a2 + 260) - 2) & 0xFFFFFFFD) == 0 )
      return v9 - __readfsqword(0x28u);
LABEL_12:
    sub_2F260((__int64)"Cannot re-create schema: unknown auth mode \"%s\"", src);
  }
  if ( strcmp(v5, "vault") )
LABEL_4:
    sub_2F260((__int64)"Invalid authorization mode: \"%s\"\n", v5);
  *(_DWORD *)(a2 + 260) = 4;
  if ( v5 )
    goto LABEL_9;
  return v9 - __readfsqword(0x28u);
}
