unsigned __int64 __fastcall sub_34560(__int64 a1, _BYTE *a2)
{
  const char *plugin_options; // rax
  const char *v3; // rbx
  size_t v4; // rax
  size_t v5; // r13
  size_t v6; // rbp
  char *v7; // rbx
  char *v8; // rax
  char *v9; // rbp
  char *s; // [rsp+0h] [rbp-58h] BYREF
  __int128 v12; // [rsp+8h] [rbp-50h]
  unsigned __int64 v13; // [rsp+18h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  *a2 = 0;
  plugin_options = (const char *)get_plugin_options("pdb");
  s = nullptr;
  v12 = 0;
  if ( !plugin_options )
    return v13 - __readfsqword(0x28u);
  v3 = plugin_options;
  v4 = strlen(plugin_options);
  v5 = v4 + 1;
  v6 = v4;
  s = (char *)qvector_reserve(&s, 0, v4 + 1, 1);
  *(_QWORD *)&v12 = v5;
  memmove(s, v3, v6);
  s[v6] = 0;
  v7 = s;
  if ( (unsigned __int64)v12 <= 1 )
  {
    if ( s )
      goto LABEL_13;
    return v13 - __readfsqword(0x28u);
  }
  *(_QWORD *)(a1 + 460) = 0xFFFFFFFF00000000LL;
  while ( 1 )
  {
    v8 = strchr(v7, 58);
    if ( !v8 )
      break;
    *v8 = 0;
    v9 = v8 + 1;
    if ( !strcmp(v7, "off") )
    {
      *a2 = 1;
      goto LABEL_7;
    }
    if ( !strcmp(v7, "msdia") )
    {
      *(_DWORD *)(a1 + 460) = 1;
      goto LABEL_7;
    }
    if ( !strcmp(v7, "pdbida") )
    {
      *(_DWORD *)(a1 + 460) = 2;
      goto LABEL_7;
    }
    if ( !strcmp(v7, "fallback") )
    {
      *(_DWORD *)(a1 + 464) = 1;
      goto LABEL_7;
    }
LABEL_25:
    if ( strcmp(v7, "nofallback") )
      sub_29900((__int64)"AUTOHIDE NONE\n"
                         "Wrong option for the PDB plugin.\n"
                         "\n"
                         "The valid options are:\n"
                         "off     do not load plugin\n"
                         "pdbida  use PDBIDA provider\n"
                         "msdia   use MSDIA provider\n");
    *(_DWORD *)(a1 + 464) = 0;
    if ( !v9 )
      goto LABEL_12;
LABEL_7:
    v7 = v9;
  }
  if ( !strcmp(v7, "off") )
  {
    *a2 = 1;
    goto LABEL_12;
  }
  if ( !strcmp(v7, "msdia") )
  {
    *(_DWORD *)(a1 + 460) = 1;
    goto LABEL_12;
  }
  if ( !strcmp(v7, "pdbida") )
  {
    *(_DWORD *)(a1 + 460) = 2;
    goto LABEL_12;
  }
  if ( strcmp(v7, "fallback") )
  {
    v9 = nullptr;
    goto LABEL_25;
  }
  *(_DWORD *)(a1 + 464) = 1;
LABEL_12:
  if ( s )
  {
LABEL_13:
    *(_QWORD *)&v12 = 0;
    qfree(s);
  }
  return v13 - __readfsqword(0x28u);
}
