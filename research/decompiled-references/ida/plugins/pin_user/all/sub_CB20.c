unsigned __int64 sub_CB20()
{
  char v0; // al
  size_t v1; // rax
  size_t v2; // r12
  const char *v3; // rdi
  const char *v4; // rdi
  char v6; // al
  size_t v7; // r13
  void *v8; // rdi
  size_t v9; // rax
  const char *v10; // rdi
  const char *v11; // rdi
  size_t v12; // r12
  void *v13; // rdi
  _BYTE _0[4]; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars2028; // [rsp+2028h] [rbp+2028h]
  int vars2034; // [rsp+2034h] [rbp+2034h]
  char s[4104]; // [rsp+4040h] [rbp+4040h] BYREF
  unsigned __int64 vars5048; // [rsp+5048h] [rbp+5048h]

  vars5048 = __readfsqword(0x28u);
  qmakepath();
  vars2028 = 0;
  vars2034 = 0;
  if ( !(unsigned int)qfindfirst() )
  {
    do
    {
      qmakepath();
      v0 = qfileexist();
      if ( (debug & 0x10000) != 0 )
      {
        if ( v0 )
        {
          sub_BDA0((__int64)"PIN: probing %s path: %s ... %s\n", "PIN executable", s, "FOUND!");
LABEL_5:
          v1 = strlen(s);
          v2 = v1;
          if ( v1 )
          {
            v7 = v1 + 1;
            v8 = qword_3C430;
            if ( *((_QWORD *)&xmmword_3C438 + 1) < v1 + 1 )
            {
              qword_3C430 = (void *)qvector_reserve();
              v8 = qword_3C430;
            }
            *(_QWORD *)&xmmword_3C438 = v7;
            memmove(v8, s, v2);
            *((_BYTE *)qword_3C430 + v2) = 0;
          }
          else
          {
            *(_QWORD *)&xmmword_3C438 = 0;
          }
          v3 = ::s;
          if ( (_QWORD)xmmword_3C418 )
            v3 = (const char *)dest;
          if ( !(unsigned __int8)sub_BE70(v3) )
          {
            v4 = ::s;
            if ( (_QWORD)xmmword_3C438 )
              v4 = (const char *)qword_3C430;
            sub_C700(v4);
          }
          qfindclose();
          return vars5048 - __readfsqword(0x28u);
        }
        sub_BDA0((__int64)"PIN: probing %s path: %s ... %s\n", "PIN executable", s, "not found");
      }
      else if ( v0 )
      {
        goto LABEL_5;
      }
    }
    while ( !(unsigned int)qfindnext() );
  }
  qfindclose();
  if ( (unsigned __int8)search_path() )
  {
    v6 = qfileexist();
    if ( (debug & 0x10000) != 0 )
    {
      if ( !v6 )
      {
        sub_BDA0((__int64)"PIN: probing %s path: %s ... %s\n", "PIN executable", s, "not found");
        return vars5048 - __readfsqword(0x28u);
      }
      sub_BDA0((__int64)"PIN: probing %s path: %s ... %s\n", "PIN executable", s, "FOUND!");
    }
    else if ( !v6 )
    {
      return vars5048 - __readfsqword(0x28u);
    }
    v9 = strlen(s);
    if ( v9 )
    {
      v12 = v9 + 1;
      v13 = qword_3C430;
      if ( *((_QWORD *)&xmmword_3C438 + 1) < v9 + 1 )
      {
        qword_3C430 = (void *)qvector_reserve();
        v13 = qword_3C430;
      }
      *(_QWORD *)&xmmword_3C438 = v12;
      memmove(v13, s, (size_t)_0);
      _0[(_QWORD)qword_3C430] = 0;
    }
    else
    {
      *(_QWORD *)&xmmword_3C438 = 0;
    }
    v10 = ::s;
    if ( (_QWORD)xmmword_3C418 )
      v10 = (const char *)dest;
    if ( !(unsigned __int8)sub_BE70(v10) )
    {
      v11 = ::s;
      if ( (_QWORD)xmmword_3C438 )
        v11 = (const char *)qword_3C430;
      sub_C700(v11);
    }
  }
  return vars5048 - __readfsqword(0x28u);
}

