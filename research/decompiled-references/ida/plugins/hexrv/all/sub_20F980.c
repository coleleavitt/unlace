unsigned __int64 __fastcall sub_20F980(_QWORD *a1, int a2)
{
  __int64 v3; // rbp
  _QWORD *v5; // r13
  unsigned __int64 v6; // r12
  __int64 v7; // r12
  int v8; // eax
  __int64 v9; // r13
  unsigned int v10; // edi
  char *v11; // r12
  int i; // r13d
  int v13; // r15d
  const char *v14; // rdi
  char *v15; // rdi
  size_t v16; // rax
  size_t v17; // r14
  size_t v18; // r13
  char *v19; // rax
  int v20; // edx
  _DWORD *v21; // rdi
  char *v22; // rax
  char *v23; // rdi
  char v24; // dl
  __int64 v25; // [rsp+10h] [rbp-4F8h] BYREF
  __int128 v26; // [rsp+18h] [rbp-4F0h]
  char *v27; // [rsp+30h] [rbp-4D8h] BYREF
  __int128 v28; // [rsp+38h] [rbp-4D0h]
  __int128 v29; // [rsp+48h] [rbp-4C0h]
  __int64 v30; // [rsp+58h] [rbp-4B0h]
  __int128 v31; // [rsp+60h] [rbp-4A8h]
  __int128 v32; // [rsp+70h] [rbp-498h]
  __int64 v33; // [rsp+A0h] [rbp-468h]
  int v34; // [rsp+A8h] [rbp-460h]
  __int64 v35; // [rsp+B0h] [rbp-458h]
  char v36; // [rsp+B8h] [rbp-450h]
  char s[2]; // [rsp+C0h] [rbp-448h] BYREF
  _BYTE v38[1021]; // [rsp+C2h] [rbp-446h] BYREF
  char v39; // [rsp+4BFh] [rbp-49h] BYREF
  char v40; // [rsp+4C0h] [rbp-48h] BYREF
  unsigned __int64 v41; // [rsp+4C8h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  if ( a2 < 0 || (unsigned __int64)a2 >= a1[55] )
  {
    if ( !under_debugger )
      sub_37DDE0(50320);
    goto LABEL_96;
  }
  v3 = a1[54] + 104LL * a2;
  if ( (*(_BYTE *)(v3 + 26) & 1) != 0 )
    return v41 - __readfsqword(0x28u);
  v5 = (_QWORD *)a1[160];
  if ( v5 )
  {
    v6 = *v5 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v6 )
      return v41 - __readfsqword(0x28u);
    if ( (*(_BYTE *)v6 & 2) == 0 )
    {
      do
      {
        if ( (int)sub_32B410(v3, v6 + 24) >= 0 )
        {
          if ( (int)sub_32B410(v6 + 24, v3) >= 0 )
            goto LABEL_43;
          v6 = *(_QWORD *)(v6 + 16);
        }
        else
        {
          v6 = *(_QWORD *)(v6 + 8);
        }
      }
      while ( (*(_BYTE *)v6 & 2) == 0 );
      v6 = a1[160];
LABEL_43:
      if ( v5 != (_QWORD *)v6 )
        return v41 - __readfsqword(0x28u);
    }
  }
  v7 = a1[157];
  if ( 96LL * a1[158] )
  {
    while ( (unsigned int)sub_32B410(v7, v3) )
    {
      v7 += 96;
      if ( v7 == a1[157] + 96LL * a1[158] )
        goto LABEL_14;
    }
    if ( v7 && *(_QWORD *)(v7 + 32) > 1u )
      return v41 - __readfsqword(0x28u);
  }
LABEL_14:
  s[0] = 0;
  v8 = *(_DWORD *)v3;
  if ( (unsigned int)(*(_DWORD *)v3 - 3) > 1 )
  {
    if ( v8 != 2 )
    {
      if ( v8 == 1 )
      {
        v9 = sub_1CB6D0(a1, *(int *)(v3 + 8));
        sub_1CA360((__int64)a1);
        v25 = 0;
        get_func_frame();
        v28 = 0u;
        v30 = 0;
        v33 = 1;
        v34 = -1;
        v35 = 0;
        v36 = 0;
        v27 = (char *)(8 * v9);
        v29 = 0;
        v31 = 0;
        v32 = 0;
        find_tinfo_udt_member();
        qsnprintf();
        clear_tinfo_t();
        clear_tinfo_t();
        goto LABEL_18;
      }
      if ( !under_debugger )
        sub_37DDE0(51154);
LABEL_96:
      BUG();
    }
    v26 = 0;
    v25 = 0;
    if ( !(unsigned __int8)sub_326540(&v25, v3 + 80, 0, 0) )
    {
      if ( !under_debugger )
        sub_37DDE0(51153);
      goto LABEL_96;
    }
    qstrncpy();
    v27 = nullptr;
    v28 = 0;
    v16 = strlen(s);
    v17 = v16 + 1;
    v18 = v16;
    v27 = (char *)qvector_reserve();
    *(_QWORD *)&v28 = v17;
    memmove(v27, s, v18);
    v27[v18] = 0;
    qstrlwr();
    if ( !(unsigned __int8)validate_name() )
      goto LABEL_51;
    if ( (_QWORD)v28 )
    {
      if ( !strcmp(v27, s) )
      {
LABEL_51:
        v19 = &s[strlen(s)];
        if ( v38 < v19 && *(v19 - 2) == 95 && *(v19 - 1) == 116 )
          *(v19 - 2) = 0;
        else
          qstrncat();
      }
    }
    else if ( !s[0] )
    {
      goto LABEL_51;
    }
    qstrncpy();
    if ( v27 )
    {
      *(_QWORD *)&v28 = 0;
      qfree();
    }
    if ( v25 )
    {
      *(_QWORD *)&v26 = 0;
      qfree();
    }
    goto LABEL_18;
  }
  v20 = *(_DWORD *)(v3 + 8);
  if ( v8 == 4 )
  {
    v20 = (unsigned __int16)v20;
  }
  else if ( v20 == -1 )
  {
    goto LABEL_64;
  }
  v21 = (_DWORD *)a1[188];
  v27 = nullptr;
  v28 = 0;
  sub_12F430(v21, (__int64 *)&v27, v20, *(_DWORD *)(v3 + 88));
  v22 = (char *)s1;
  if ( (_QWORD)v28 )
    v22 = v27;
  v23 = s;
  do
  {
    v24 = *v22++;
    *v23 = v24;
    if ( !v24 )
    {
      if ( (unsigned __int8)(*(v23 - 1) - 48) > 9u )
        goto LABEL_75;
      if ( v23 < &v40 )
      {
LABEL_73:
        *v23 = 95;
        if ( v23 + 1 >= &v40 )
          v39 = 0;
        goto LABEL_75;
      }
      if ( !under_debugger )
        sub_37DDE0(518);
      goto LABEL_96;
    }
    ++v23;
  }
  while ( v23 != &v39 );
  v39 = 0;
  if ( (unsigned __int8)(v38[1020] - 48) <= 9u )
    goto LABEL_73;
LABEL_75:
  qsnprintf();
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree();
  }
LABEL_18:
  v10 = s[0];
  if ( s[0] )
  {
    v11 = s;
    do
    {
      if ( v10 > 0x7F || !isalnum(v10) )
        *v11 = 95;
      v10 = *++v11;
    }
    while ( (_BYTE)v10 );
    goto LABEL_24;
  }
LABEL_64:
  v11 = s;
LABEL_24:
  for ( i = 0; ; ++i )
  {
    v13 = i;
    v14 = s1;
    if ( *(_QWORD *)(v3 + 40) )
      v14 = *(const char **)(v3 + 32);
    if ( !strcmp(v14, s) || !sub_20E540((__int64)a1, s, -9) )
      break;
    v15 = v11;
    if ( i <= 0 )
      goto LABEL_58;
    while ( 1 )
    {
      if ( v15 >= &v40 )
        goto LABEL_80;
      *v15++ = v13 % 0x1Au + 97;
      if ( v15 >= &v40 )
      {
        v39 = 0;
        v15 = &v39;
      }
      if ( v13 <= 25 )
        break;
      v13 /= 0x1Au;
    }
    if ( v11 == v15 )
    {
LABEL_58:
      if ( v11 >= &v40 )
      {
LABEL_80:
        if ( !under_debugger )
          sub_37DDE0(518);
        goto LABEL_96;
      }
      v15 = v11 + 1;
      *v11 = 97;
      if ( v11 + 1 >= &v40 )
      {
        v39 = 0;
        v15 = &v39;
      }
    }
    else if ( v15 >= &v40 )
    {
      if ( !under_debugger )
        sub_37DDE0(519);
      goto LABEL_96;
    }
    *v15 = 0;
    memrev();
  }
  sub_20EF80(a1, (_QWORD *)v3, s);
  return v41 - __readfsqword(0x28u);
}

