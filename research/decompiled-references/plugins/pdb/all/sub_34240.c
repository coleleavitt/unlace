__int64 __fastcall sub_34240(__int64 a1, __int64 a2, const char *a3)
{
  const char *i; // rbx
  const char *v5; // r13
  const char **v6; // r15
  size_t v7; // r14
  char v8; // al
  int v9; // edx
  __int64 result; // rax
  int named_type; // eax
  int v12; // [rsp+Ch] [rbp-4Ch]
  const char ***v13; // [rsp+10h] [rbp-48h]

  for ( i = a3; *i == 95; ++i )
    ;
  if ( !*(_BYTE *)(a1 + 536) )
  {
    if ( !(unsigned int)get_named_type(0, "GUID", 1, 0, 0, 0, 0, 0, 0) )
      h2ti(
        0,
        0,
        "typedef struct _GUID { unsigned long  Data1; unsigned short Data2; unsigned short Data3; unsigned char Data4[8];} GUID;",
        1024,
        0,
        0,
        sub_244A0,
        0,
        0);
    named_type = get_named_type(0, "SID", 1, 0, 0, 0, 0, 0, 0);
    *(_BYTE *)(a1 + 536) = 1;
    *(_BYTE *)(a1 + 537) = named_type != 0;
  }
  v12 = 0;
  v5 = "IID";
  v13 = (const char ***)&off_AA4E0;
  v6 = (const char **)&off_AA520;
  while ( 1 )
  {
    v7 = strlen(v5);
    if ( !strncmp(i, v5, v7) )
    {
      v8 = i[v7];
      if ( v8 == 95 || v8 == 32 )
      {
        apply_cdecl(0, a2, *(&off_AA4E0 + 2 * v12 + 1), 0);
        return 1;
      }
    }
    v5 = v6[1];
    ++v6;
    if ( !v5 )
    {
      if ( v12 == 1 )
        break;
      if ( !*(_BYTE *)(a1 + 537) )
        break;
      v13 += 2;
      v12 = 1;
      v6 = *v13;
      v5 = **v13;
      if ( !v5 )
        break;
    }
  }
  v9 = strncmp(a3, "_guid", 5u);
  result = 0;
  if ( v9 )
    return result;
  apply_cdecl(0, a2, "GUID x;", 0);
  return 1;
}
