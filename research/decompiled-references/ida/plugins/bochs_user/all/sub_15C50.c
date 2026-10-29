char __fastcall sub_15C50(__int64 a1, _BYTE *a2)
{
  int v2; // ebx
  int v3; // r12d
  char v4; // r14
  int v5; // r15d
  char *v6; // r13
  char *v8; // rax
  char s1[1032]; // [rsp+20h] [rbp-448h] BYREF
  unsigned __int64 v10; // [rsp+428h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  if ( a2 )
    *a2 = 0;
  v2 = 0;
  v3 = 0;
LABEL_4:
  while ( 1 )
  {
    s1[0] = 0;
    if ( !qlgets() )
      break;
    v4 = s1[0];
    if ( !s1[0] )
      break;
    v5 = s1[0];
    v6 = s1;
    if ( (unsigned int)s1[0] > 0x7F )
      break;
    while ( isspace(v5) )
    {
      v4 = *++v6;
      if ( !v4 )
        goto LABEL_4;
      v5 = v4;
      if ( (unsigned int)v4 > 0x7F )
        return (~(_BYTE)v2 & 0xC) == 0;
    }
    if ( v4 != 35 )
    {
      if ( !isprint(v5) )
        return (~(_BYTE)v2 & 0xC) == 0;
      if ( ++v3 > 20 )
        return (~(_BYTE)v2 & 0xC) == 0;
      if ( !strncmp(s1, "romimage", 8u) )
      {
        v2 |= 1u;
        goto LABEL_13;
      }
      if ( !strncmp(s1, "vgaromimage", 0xBu) )
      {
        v2 |= 2u;
        goto LABEL_13;
      }
      if ( !strncmp(s1, "boot", 4u) )
      {
        v2 |= 4u;
        goto LABEL_13;
      }
      if ( !strncmp(s1, "megs", 4u) || !strncmp(s1, "memory", 6u) )
      {
        v2 |= 8u;
        goto LABEL_13;
      }
      if ( s1[0] != 97 || s1[1] != 116 || s1[2] != 97 )
        goto LABEL_13;
      v8 = strstr(s1, "path=\"");
      if ( v8 && strchr(v8 + 6, 34) )
      {
        if ( a2 )
          qstrncpy();
        if ( (~(_BYTE)v2 & 0xF) == 0 )
          return 1;
        v2 |= 0x10u;
LABEL_13:
        if ( v2 == 31 )
          return 1;
      }
    }
  }
  return (~(_BYTE)v2 & 0xC) == 0;
}

