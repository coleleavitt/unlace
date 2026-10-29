unsigned __int64 __fastcall sub_214580(_QWORD *a1, int a2, double a3)
{
  __int64 v4; // rbp
  _QWORD *v6; // r13
  unsigned __int64 v7; // r12
  __int64 v8; // r12
  int v9; // eax
  __int64 v10; // r13
  unsigned int v11; // edi
  char *v12; // r12
  int i; // r13d
  int v14; // r15d
  const char *v15; // rdi
  char *v16; // rdi
  size_t v17; // rax
  size_t v18; // r14
  size_t v19; // r13
  char *v20; // rax
  int v21; // edx
  _DWORD *v22; // rdi
  char *v23; // rax
  char *v24; // rdi
  char v25; // dl
  __int64 v26; // [rsp+10h] [rbp-4F8h] BYREF
  __int128 v27; // [rsp+18h] [rbp-4F0h]
  char *v28; // [rsp+30h] [rbp-4D8h] BYREF
  __int128 v29; // [rsp+38h] [rbp-4D0h]
  __int128 v30; // [rsp+48h] [rbp-4C0h]
  __int64 v31; // [rsp+58h] [rbp-4B0h]
  __int128 v32; // [rsp+60h] [rbp-4A8h]
  __int128 v33; // [rsp+70h] [rbp-498h]
  __int64 v34; // [rsp+A0h] [rbp-468h]
  int v35; // [rsp+A8h] [rbp-460h]
  __int64 v36; // [rsp+B0h] [rbp-458h]
  char v37; // [rsp+B8h] [rbp-450h]
  char s[2]; // [rsp+C0h] [rbp-448h] BYREF
  _BYTE v39[1021]; // [rsp+C2h] [rbp-446h] BYREF
  char v40; // [rsp+4BFh] [rbp-49h] BYREF
  char v41; // [rsp+4C0h] [rbp-48h] BYREF
  unsigned __int64 v42; // [rsp+4C8h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  if ( a2 < 0 || (unsigned __int64)a2 >= a1[55] )
  {
    if ( !under_debugger )
      sub_383060(0xC490u, a3);
    goto LABEL_96;
  }
  v4 = a1[54] + 104LL * a2;
  if ( (*(_BYTE *)(v4 + 26) & 1) != 0 )
    return v42 - __readfsqword(0x28u);
  v6 = (_QWORD *)a1[160];
  if ( v6 )
  {
    v7 = *v6 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v7 )
      return v42 - __readfsqword(0x28u);
    if ( (*(_BYTE *)v7 & 2) == 0 )
    {
      do
      {
        if ( (int)sub_3307E0((int *)v4, (int *)(v7 + 24)) >= 0 )
        {
          if ( (int)sub_3307E0((int *)(v7 + 24), (int *)v4) >= 0 )
            goto LABEL_43;
          v7 = *(_QWORD *)(v7 + 16);
        }
        else
        {
          v7 = *(_QWORD *)(v7 + 8);
        }
      }
      while ( (*(_BYTE *)v7 & 2) == 0 );
      v7 = a1[160];
LABEL_43:
      if ( v6 != (_QWORD *)v7 )
        return v42 - __readfsqword(0x28u);
    }
  }
  v8 = a1[157];
  if ( 96LL * a1[158] )
  {
    while ( (unsigned int)sub_3307E0((int *)v8, (int *)v4) )
    {
      v8 += 96;
      if ( v8 == a1[157] + 96LL * a1[158] )
        goto LABEL_14;
    }
    if ( v8 && *(_QWORD *)(v8 + 32) > 1u )
      return v42 - __readfsqword(0x28u);
  }
LABEL_14:
  s[0] = 0;
  v9 = *(_DWORD *)v4;
  if ( (unsigned int)(*(_DWORD *)v4 - 3) > 1 )
  {
    if ( v9 != 2 )
    {
      if ( v9 == 1 )
      {
        v10 = sub_1CFD50(a1, *(int *)(v4 + 8), a3);
        sub_1CE9E0((__int64)a1);
        v26 = 0;
        get_func_frame();
        a3 = 0.0;
        v29 = 0u;
        v31 = 0;
        v34 = 1;
        v35 = -1;
        v36 = 0;
        v37 = 0;
        v28 = (char *)(8 * v10);
        v30 = 0;
        v32 = 0;
        v33 = 0;
        find_tinfo_udt_member();
        qsnprintf();
        clear_tinfo_t();
        clear_tinfo_t();
        goto LABEL_18;
      }
      if ( !under_debugger )
        sub_383060(0xC7D2u, a3);
LABEL_96:
      BUG();
    }
    v27 = 0;
    v26 = 0;
    if ( !(unsigned __int8)sub_32B7F0(&v26, v4 + 80, nullptr) )
    {
      if ( !under_debugger )
        sub_383060(0xC7D1u, 0.0);
      goto LABEL_96;
    }
    qstrncpy();
    a3 = 0.0;
    v28 = nullptr;
    v29 = 0;
    v17 = strlen(s);
    v18 = v17 + 1;
    v19 = v17;
    v28 = (char *)qvector_reserve((__int64)&v28, 0, v17 + 1, 1);
    *(_QWORD *)&v29 = v18;
    memmove(v28, s, v19);
    v28[v19] = 0;
    qstrlwr();
    if ( !(unsigned __int8)validate_name() )
      goto LABEL_51;
    if ( (_QWORD)v29 )
    {
      if ( !strcmp(v28, s) )
      {
LABEL_51:
        v20 = &s[strlen(s)];
        if ( v39 < v20 && *(v20 - 2) == 95 && *(v20 - 1) == 116 )
          *(v20 - 2) = 0;
        else
          qstrncat();
      }
    }
    else if ( !s[0] )
    {
      goto LABEL_51;
    }
    qstrncpy();
    if ( v28 )
    {
      *(_QWORD *)&v29 = 0;
      qfree((__int64)v28);
    }
    if ( v26 )
    {
      *(_QWORD *)&v27 = 0;
      qfree(v26);
    }
    goto LABEL_18;
  }
  v21 = *(_DWORD *)(v4 + 8);
  if ( v9 == 4 )
  {
    v21 = (unsigned __int16)v21;
  }
  else if ( v21 == -1 )
  {
    goto LABEL_64;
  }
  a3 = 0.0;
  v22 = (_DWORD *)a1[188];
  v28 = nullptr;
  v29 = 0;
  sub_1338F0(v22, (__int64 *)&v28, v21, *(_DWORD *)(v4 + 88));
  v23 = (char *)s1;
  if ( (_QWORD)v29 )
    v23 = v28;
  v24 = s;
  do
  {
    v25 = *v23++;
    *v24 = v25;
    if ( !v25 )
    {
      if ( (unsigned __int8)(*(v24 - 1) - 48) > 9u )
        goto LABEL_75;
      if ( v24 < &v41 )
      {
LABEL_73:
        *v24 = 95;
        if ( v24 + 1 >= &v41 )
          v40 = 0;
        goto LABEL_75;
      }
      if ( !under_debugger )
        sub_383060(0x206u, 0.0);
      goto LABEL_96;
    }
    ++v24;
  }
  while ( v24 != &v40 );
  v40 = 0;
  if ( (unsigned __int8)(v39[1020] - 48) <= 9u )
    goto LABEL_73;
LABEL_75:
  qsnprintf();
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree((__int64)v28);
  }
LABEL_18:
  v11 = s[0];
  if ( s[0] )
  {
    v12 = s;
    do
    {
      if ( v11 > 0x7F || !isalnum(v11) )
        *v12 = 95;
      v11 = *++v12;
    }
    while ( (_BYTE)v11 );
    goto LABEL_24;
  }
LABEL_64:
  v12 = s;
LABEL_24:
  for ( i = 0; ; ++i )
  {
    v14 = i;
    v15 = s1;
    if ( *(_QWORD *)(v4 + 40) )
      v15 = *(const char **)(v4 + 32);
    if ( !strcmp(v15, s) || !sub_213140((__int64)a1, s, -9) )
      break;
    v16 = v12;
    if ( i <= 0 )
      goto LABEL_58;
    while ( 1 )
    {
      if ( v16 >= &v41 )
        goto LABEL_80;
      *v16++ = v14 % 0x1Au + 97;
      if ( v16 >= &v41 )
      {
        v40 = 0;
        v16 = &v40;
      }
      if ( v14 <= 25 )
        break;
      v14 /= 0x1Au;
    }
    if ( v12 == v16 )
    {
LABEL_58:
      if ( v12 >= &v41 )
      {
LABEL_80:
        if ( !under_debugger )
          sub_383060(0x206u, a3);
        goto LABEL_96;
      }
      v16 = v12 + 1;
      *v12 = 97;
      if ( v12 + 1 >= &v41 )
      {
        v40 = 0;
        v16 = &v40;
      }
    }
    else if ( v16 >= &v41 )
    {
      if ( !under_debugger )
        sub_383060(0x207u, a3);
      goto LABEL_96;
    }
    *v16 = 0;
    memrev();
  }
  sub_213B80(a1, (__int64 *)v4, s);
  return v42 - __readfsqword(0x28u);
}

