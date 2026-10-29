unsigned __int64 __fastcall sub_12D90(_QWORD *a1)
{
  unsigned __int64 v1; // r13
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // rax
  const char *v6; // r12
  __int64 v7; // r14
  char v8; // [rsp+Fh] [rbp-49h] BYREF
  __int64 v9; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-40h]

  v10 = __readfsqword(0x28u);
LABEL_2:
  while ( (unsigned __int8)sub_10B00(a1, &v8) )
  {
    while ( 1 )
    {
      v1 = a1[3];
      v2 = a1[2];
      v3 = v2 + 80 * v1 - 80;
      v4 = *(_QWORD *)(v3 + 8);
      if ( !v8 )
        break;
      if ( !v4 || strcmp(*(const char **)v3, "peripheral") )
        goto LABEL_2;
      sub_12810(a1);
      if ( !(unsigned __int8)sub_10B00(a1, &v8) )
        return v10 - __readfsqword(0x28u);
    }
    if ( v4 )
    {
      v6 = *(const char **)v3;
      if ( !strcmp(*(const char **)v3, "device") )
        return v10 - __readfsqword(0x28u);
    }
    else
    {
      v6 = s1;
    }
    if ( v1 > 1 )
    {
      v7 = 16 * (5 * v1 - 10) + v2;
      if ( v7 )
      {
        if ( *(_QWORD *)(v7 + 8)
          && !strcmp(*(const char **)v7, "device")
          && !strcmp(v6, "size")
          && *(_QWORD *)(v3 + 32) > 1u )
        {
          sub_10460(&v9, *(char **)(v3 + 24));
          *(_QWORD *)(v7 + 72) = (unsigned __int64)(v9 + 7) >> 3;
        }
      }
    }
  }
  return v10 - __readfsqword(0x28u);
}

