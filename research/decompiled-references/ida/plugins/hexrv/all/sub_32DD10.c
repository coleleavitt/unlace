__int64 __fastcall sub_32DD10(__int64 a1)
{
  int v1; // esi
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // r15
  int v6; // edx
  const char **v7; // rax
  const char *v8; // rbx
  char *v9; // rax
  unsigned __int64 v10; // rbp
  const char *v11; // r13
  char v12; // bl
  size_t v13; // rdx
  char *v14; // rdi
  unsigned __int8 v15; // [rsp+0h] [rbp-D8h]
  __int64 tinfo_property; // [rsp+10h] [rbp-C8h] BYREF
  _QWORD v17[3]; // [rsp+18h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v19; // [rsp+38h] [rbp-A0h]
  char *s1; // [rsp+50h] [rbp-88h]
  __int128 v21; // [rsp+58h] [rbp-80h]
  __int128 v22; // [rsp+70h] [rbp-68h]
  __int64 v23; // [rsp+80h] [rbp-58h]
  int v24; // [rsp+88h] [rbp-50h]
  __int16 v25; // [rsp+8Ch] [rbp-4Ch]
  unsigned __int64 v26; // [rsp+98h] [rbp-40h]

  v1 = *(_DWORD *)(a1 + 464);
  v26 = __readfsqword(0x28u);
  if ( !v1 )
    return 0;
  v4 = sub_138DC0((_QWORD *)a1, 0);
  v5 = v4;
  if ( !*(_QWORD *)(v4 + 40) || strcmp(*(const char **)(v4 + 32), "this") || *(_QWORD *)(a1 + 416) <= 1u )
    return 0;
  v19 = 0;
  v18 = 0;
  v6 = demangle_name();
  v7 = (const char **)(a1 + 408);
  if ( v6 >= 0 )
    v7 = (const char **)&v18;
  v8 = *v7;
  v9 = strchr(*v7, 58);
  if ( !v9 || v9[1] != 58 )
    goto LABEL_19;
  v10 = v9 - v8;
  if ( v9[2] == 126 )
  {
    if ( *(_DWORD *)(a1 + 464) != 1 )
      goto LABEL_19;
    v11 = v9 + 3;
    v12 = 0;
  }
  else
  {
    v11 = v9 + 2;
    v12 = 1;
  }
  v13 = strlen(v11);
  if ( v13 - 1 < v10 && !strncmp(&v11[-v10 - 2], v11, v13) )
  {
    if ( !*(_BYTE *)(a1 + 320) )
    {
      if ( *(char *)(v5 + 25) >= 0 )
      {
        s1 = nullptr;
        v21 = 0;
        tinfo_property = get_tinfo_property();
        if ( (tinfo_property & 0x100) == 0 || !get_tinfo_pdata() )
          goto LABEL_25;
        v14 = (char *)::s1;
        if ( (_QWORD)v21 )
          v14 = s1;
        if ( strcmp(v14, v11) )
        {
LABEL_25:
          sub_325A00(v17, (__int64)v11);
          v17[2] = 0;
          v17[1] = 0;
          v22 = 0;
          copy_tinfo_t();
          v23 = 0;
          copy_tinfo_t();
          v24 = 0;
          v25 = 0;
          clear_tinfo_t();
          clear_tinfo_t();
          copy_tinfo_t();
          create_tinfo();
          clear_tinfo_t();
          clear_tinfo_t();
          clear_tinfo_t();
          clear_tinfo_t();
          sub_1EACF0(v5, *(_QWORD *)(a1 + 1504), &tinfo_property, 0);
          *(_DWORD *)(v5 + 24) = *(_DWORD *)(v5 + 24) & 0xFFFBFFFD | 2;
        }
        clear_tinfo_t();
        if ( s1 )
        {
          *(_QWORD *)&v21 = 0;
          qfree();
        }
      }
      goto LABEL_17;
    }
    if ( (get_tinfo_property() & 0xF) == 0xA )
    {
LABEL_17:
      *(_DWORD *)(a1 + 4) |= v12 == 0 ? 32 : 16;
      result = 1;
      *(_DWORD *)(v5 + 24) |= 0x8000u;
      goto LABEL_20;
    }
  }
LABEL_19:
  result = 0;
LABEL_20:
  if ( v18 )
  {
    v15 = result;
    *(_QWORD *)&v19 = 0;
    qfree();
    return v15;
  }
  return result;
}

