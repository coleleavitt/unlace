__int64 __fastcall sub_3332B0(__int64 a1, double a2)
{
  int v2; // esi
  __int64 result; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // r15
  int v7; // edx
  const char **v8; // rax
  const char *v9; // rbx
  char *v10; // rax
  unsigned __int64 v11; // rbp
  const char *v12; // r13
  char v13; // bl
  size_t v14; // rdx
  char *v15; // rdi
  unsigned __int8 v16; // [rsp+0h] [rbp-D8h]
  __int64 tinfo_property; // [rsp+10h] [rbp-C8h] BYREF
  _QWORD v18[3]; // [rsp+18h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v20; // [rsp+38h] [rbp-A0h]
  char *s1; // [rsp+50h] [rbp-88h]
  __int128 v22; // [rsp+58h] [rbp-80h]
  __int128 v23; // [rsp+70h] [rbp-68h]
  __int64 v24; // [rsp+80h] [rbp-58h]
  int v25; // [rsp+88h] [rbp-50h]
  __int16 v26; // [rsp+8Ch] [rbp-4Ch]
  unsigned __int64 v27; // [rsp+98h] [rbp-40h]

  v2 = *(_DWORD *)(a1 + 464);
  v27 = __readfsqword(0x28u);
  if ( !v2 )
    return 0;
  v5 = sub_13D280((_QWORD *)a1, 0, a2);
  v6 = v5;
  if ( !*(_QWORD *)(v5 + 40) || strcmp(*(const char **)(v5 + 32), "this") || *(_QWORD *)(a1 + 416) <= 1u )
    return 0;
  v20 = 0;
  v19 = 0;
  v7 = demangle_name();
  v8 = (const char **)(a1 + 408);
  if ( v7 >= 0 )
    v8 = (const char **)&v19;
  v9 = *v8;
  v10 = strchr(*v8, 58);
  if ( !v10 || v10[1] != 58 )
    goto LABEL_19;
  v11 = v10 - v9;
  if ( v10[2] == 126 )
  {
    if ( *(_DWORD *)(a1 + 464) != 1 )
      goto LABEL_19;
    v12 = v10 + 3;
    v13 = 0;
  }
  else
  {
    v12 = v10 + 2;
    v13 = 1;
  }
  v14 = strlen(v12);
  if ( v14 - 1 < v11 && !strncmp(&v12[-v11 - 2], v12, v14) )
  {
    if ( !*(_BYTE *)(a1 + 320) )
    {
      if ( *(char *)(v6 + 25) >= 0 )
      {
        s1 = nullptr;
        v22 = 0;
        tinfo_property = get_tinfo_property();
        if ( (tinfo_property & 0x100) == 0 || !get_tinfo_pdata() )
          goto LABEL_25;
        v15 = (char *)::s1;
        if ( (_QWORD)v22 )
          v15 = s1;
        if ( strcmp(v15, v12) )
        {
LABEL_25:
          sub_32ACB0(v18, (__int64)v12, 0.0);
          v18[2] = 0;
          v18[1] = 0;
          v23 = 0;
          copy_tinfo_t();
          v24 = 0;
          copy_tinfo_t();
          v25 = 0;
          v26 = 0;
          clear_tinfo_t();
          clear_tinfo_t();
          copy_tinfo_t();
          create_tinfo();
          clear_tinfo_t();
          clear_tinfo_t();
          clear_tinfo_t();
          clear_tinfo_t();
          sub_1EF8F0(v6, *(_QWORD *)(a1 + 1504), &tinfo_property, 0, 0.0);
          *(_DWORD *)(v6 + 24) = *(_DWORD *)(v6 + 24) & 0xFFFBFFFD | 2;
        }
        clear_tinfo_t();
        if ( s1 )
        {
          *(_QWORD *)&v22 = 0;
          qfree((__int64)s1);
        }
      }
      goto LABEL_17;
    }
    if ( (get_tinfo_property() & 0xF) == 0xA )
    {
LABEL_17:
      *(_DWORD *)(a1 + 4) |= v13 == 0 ? 32 : 16;
      result = 1;
      *(_DWORD *)(v6 + 24) |= 0x8000u;
      goto LABEL_20;
    }
  }
LABEL_19:
  result = 0;
LABEL_20:
  if ( v19 )
  {
    v16 = result;
    *(_QWORD *)&v20 = 0;
    qfree(v19);
    return v16;
  }
  return result;
}

