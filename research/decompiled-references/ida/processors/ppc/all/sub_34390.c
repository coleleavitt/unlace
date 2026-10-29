__int64 __fastcall sub_34390(const char *a1)
{
  const char *v1; // rsi
  __int64 ea_name; // rax
  __int64 v3; // rdx
  char *v4; // rbp
  unsigned int v5; // r12d
  const char *v7; // rbx
  const char *v8; // rbx
  char *s1; // [rsp+0h] [rbp-48h] BYREF
  __int128 v10; // [rsp+8h] [rbp-40h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  s1 = nullptr;
  v10 = 0;
  v1 = a1;
  ea_name = get_ea_name(&s1, a1, 512, 0);
  v4 = s1;
  v5 = 0;
  if ( ea_name > 0 )
  {
    cleanup_name(&s1, a1, s1, 0);
    v4 = s1;
    if ( (_QWORD)v10 )
    {
      if ( !strncmp(s1, "gnu_", 4u) )
        v7 = v4 + 4;
      else
        v7 = v4;
      v1 = "mcount";
      if ( !strncmp(v7, "mcount", 6u) )
      {
        v5 = 1;
        if ( !v7[6] )
          goto LABEL_2;
        v1 = "_nc";
        if ( !strcmp(v7 + 6, "_nc") )
          goto LABEL_2;
      }
      v8 = v4;
    }
    else
    {
      v8 = ::s1;
    }
    v1 = "security_push_cookie";
    v5 = 2;
    if ( strcmp(v8, "security_push_cookie") )
    {
      v1 = "security_pop_cookie";
      v5 = 3;
      if ( strcmp(v8, "security_pop_cookie") )
      {
        v1 = "alloca_probe";
        v5 = 4 * (strcmp(v8, "alloca_probe") == 0);
      }
    }
  }
LABEL_2:
  if ( v4 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v4, v1, v3, 0.0);
  }
  return v5;
}

