__int64 sub_11690()
{
  const char *v0; // rax
  const char *v1; // rbx
  size_t v2; // rax
  size_t v3; // r12
  size_t v4; // rbp
  void *v6; // [rsp+0h] [rbp-48h] BYREF
  __int128 v7; // [rsp+8h] [rbp-40h]
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  byte_7FAF0 = 0;
  v0 = (const char *)sub_115C0(
                       0,
                       0,
                       (__int64)"FILTER Android application package|*.apk;|Android application manifest|AndroidManifest.x"
                                "ml\n"
                                "Please choose application package or AndroidManifest.xml");
  v6 = nullptr;
  v7 = 0;
  if ( v0 )
  {
    v1 = v0;
    v2 = strlen(v0);
    v3 = v2 + 1;
    v4 = v2;
    v6 = (void *)qvector_reserve();
    *(_QWORD *)&v7 = v3;
    memmove(v6, v1, v4);
    *((_BYTE *)v6 + v4) = 0;
    if ( (unsigned __int64)v7 > 1 )
    {
      *(_QWORD *)&xmmword_7FAA8 = 0;
      *(_QWORD *)&xmmword_7FAC0 = 0;
      if ( (unsigned __int8)sub_426C0(&qword_7FAA0, &v6) )
      {
        if ( ((unsigned __int64)xmmword_7FAC0 | (unsigned __int64)xmmword_7FAA8) <= 1 )
          sub_11270((__int64)"Unfortunattely nothing was found");
        else
          byte_7FAF0 = 1;
      }
    }
    if ( v6 )
    {
      *(_QWORD *)&v7 = 0;
      qfree();
    }
  }
  return 0;
}

