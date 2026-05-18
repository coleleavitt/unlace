unsigned __int64 __fastcall sub_166A90(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rbp
  char v6; // al
  __int64 v7; // rdi
  const char *v8; // rsi
  char *p_ptr; // rdi
  size_t v10; // rax
  size_t v11; // r12
  char *v12; // rbp
  __int64 v13; // r12
  _QWORD *v14; // r13
  unsigned __int64 v15; // rax
  __int64 v16; // rbp
  unsigned __int64 v17; // r12
  __int64 v18; // r13
  __int64 v19; // rax
  int v20; // r9d
  const char *v21; // r8
  const char *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rsi
  _QWORD *v25; // rsi
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  const void *v31; // r13
  const void *v32; // r13
  void *v33; // rdi
  const void *v34; // r13
  void *v35; // rdi
  size_t v36; // r13
  size_t v37; // rbp
  __int64 v38; // r13
  unsigned __int64 v39; // r12
  const char *v40; // rbp
  int v41; // eax
  int v42; // r8d
  int v43; // r9d
  __int64 v44; // [rsp+8h] [rbp-500h] BYREF
  void *ptr; // [rsp+10h] [rbp-4F8h] BYREF
  __int128 v46; // [rsp+18h] [rbp-4F0h]
  char *s1; // [rsp+30h] [rbp-4D8h] BYREF
  __int128 v48; // [rsp+38h] [rbp-4D0h]
  __int64 v49; // [rsp+50h] [rbp-4B8h] BYREF
  void *v50; // [rsp+58h] [rbp-4B0h] BYREF
  __int128 v51; // [rsp+60h] [rbp-4A8h]
  __int64 v52; // [rsp+70h] [rbp-498h]
  void *dest; // [rsp+78h] [rbp-490h] BYREF
  __int128 v54; // [rsp+80h] [rbp-488h]
  void *v55; // [rsp+90h] [rbp-478h] BYREF
  __int128 v56; // [rsp+98h] [rbp-470h]
  char v57[32]; // [rsp+B0h] [rbp-458h] BYREF
  char s[1032]; // [rsp+D0h] [rbp-438h] BYREF
  unsigned __int64 v59; // [rsp+4D8h] [rbp-30h]

  v59 = __readfsqword(0x28u);
  v2 = sub_1671B0(*(unsigned __int8 *)(a1 + 106));
  v49 = 88;
  v50 = nullptr;
  v52 = 0;
  dest = nullptr;
  v3 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 80) = v2;
  v55 = nullptr;
  v51 = 0;
  v54 = 0;
  v56 = 0;
  if ( v3 >= 2 )
  {
    v31 = *(const void **)(a1 + 8);
    v50 = (void *)sub_1987B0(&v50, 0, v3, 1);
    *(_QWORD *)&v51 = v3;
    memmove(v50, v31, v3 - 1);
    *((char *)v50 + v3 - 1) = 0;
  }
  v4 = *(_QWORD *)(a1 + 40);
  LOWORD(v52) = *(_WORD *)(a1 + 104);
  if ( v4 > 1 )
  {
    v32 = *(const void **)(a1 + 32);
    v33 = dest;
    if ( *((_QWORD *)&v54 + 1) < v4 )
    {
      dest = (void *)sub_1987B0(&dest, dest, v4, 1);
      v33 = dest;
    }
    *(_QWORD *)&v54 = v4;
    memmove(v33, v32, v4 - 1);
    *((char *)dest + v4 - 1) = 0;
  }
  else
  {
    *(_QWORD *)&v54 = 0;
  }
  v5 = *(_QWORD *)(a1 + 64);
  if ( v5 > 1 )
  {
    v34 = *(const void **)(a1 + 56);
    v35 = v55;
    if ( *((_QWORD *)&v56 + 1) < v5 )
    {
      v55 = (void *)sub_1987B0(&v55, v55, *(_QWORD *)(a1 + 64), 1);
      v35 = v55;
    }
    *(_QWORD *)&v56 = v5;
    memmove(v35, v34, v5 - 1);
    *((char *)v55 + v5 - 1) = 0;
  }
  else
  {
    *(_QWORD *)&v56 = 0;
  }
  v6 = sub_167230(*(_QWORD *)(a1 + 80), &v49);
  v7 = *(_QWORD *)(a1 + 80);
  if ( !v6 )
  {
    v40 = "0.0.0.0";
    if ( *(_QWORD *)(a1 + 16) > 1u )
      v40 = *(const char **)(a1 + 8);
    v41 = sub_167200(v7);
    sub_16B870((unsigned int)"%s:%u: %s\n", (_DWORD)v40, *(unsigned __int16 *)(a1 + 104), v41, v42, v43);
    sub_1672A0(a1 + 80, 0xFFFFFFFFLL);
    exit(1);
  }
  ptr = nullptr;
  s1 = nullptr;
  v46 = 0;
  v48 = 0;
  sub_167270(v7, &s1, 0);
  v8 = (_BYTE *)(&dword_0 + 2);
  p_ptr = s;
  if ( (unsigned __int8)sub_198A60(s) )
  {
    p_ptr = s;
    v10 = strlen(s);
    v11 = v10;
    if ( v10 )
    {
      p_ptr = (char *)ptr;
      v36 = v10 + 1;
      if ( *((_QWORD *)&v46 + 1) < v10 + 1 )
      {
        ptr = (void *)sub_1987B0(&ptr, ptr, v36, 1);
        p_ptr = (char *)ptr;
      }
      *(_QWORD *)&v46 = v36;
      memmove(p_ptr, s, v11);
      *((_BYTE *)ptr + v11) = 0;
      v12 = (char *)ptr;
      v13 = v46;
      v8 = (const char *)ptr;
      if ( (_QWORD)v46 )
      {
        if ( (_QWORD)v48 )
        {
          p_ptr = s1;
          v14 = ptr;
          if ( strcmp(s1, (const char *)ptr) )
          {
LABEL_13:
            v15 = *((_QWORD *)&v46 + 1);
            if ( !v13 )
            {
              if ( *((_QWORD *)&v46 + 1) > 8u )
              {
                *(_QWORD *)&v46 = 9;
                v12[8] = 0;
LABEL_16:
                *v14 = 0x20706920796D2820LL;
                v16 = v46;
                if ( (_QWORD)v46 )
                {
                  v17 = v46 + 1;
                  v18 = v46;
                  v16 = v46 - 1;
                }
                else
                {
                  v17 = 2;
                  v18 = 1;
                }
                v8 = (const char *)ptr;
                if ( *((_QWORD *)&v46 + 1) < v17 )
                {
                  p_ptr = (char *)&ptr;
                  ptr = (void *)sub_1987B0(&ptr, ptr, v17, 1);
                  v8 = (const char *)ptr;
                }
                *(_QWORD *)&v46 = v17;
                v8[v18] = 0;
                *((_BYTE *)ptr + v16) = 41;
                goto LABEL_21;
              }
              v8 = v12;
              v39 = 9;
              v37 = 0;
              v38 = 8;
LABEL_63:
              p_ptr = (char *)&ptr;
              ptr = (void *)sub_1987B0(&ptr, v8, v39, 1);
              v8 = (const char *)ptr;
LABEL_60:
              *(_QWORD *)&v46 = v39;
              v8[v38] = 0;
              v14 = ptr;
              if ( v37 )
              {
                p_ptr = (char *)ptr + 8;
                memmove((char *)ptr + 8, ptr, v37);
              }
              goto LABEL_16;
            }
            v8 = v12;
LABEL_59:
            v37 = v13 - 1;
            v38 = v13 + 7;
            v39 = v13 + 8;
            if ( v15 >= v39 )
              goto LABEL_60;
            goto LABEL_63;
          }
        }
        else
        {
          v15 = *((_QWORD *)&v46 + 1);
          if ( *(_BYTE *)ptr )
            goto LABEL_59;
        }
        goto LABEL_43;
      }
    }
    else
    {
      *(_QWORD *)&v46 = 0;
      v12 = (char *)ptr;
    }
    v13 = 0;
    v14 = v12;
    v8 = ::s1;
    if ( (_QWORD)v48 )
    {
      p_ptr = s1;
      if ( strcmp(s1, ::s1) )
        goto LABEL_13;
    }
LABEL_43:
    if ( v12 )
    {
      *(_QWORD *)&v46 = 0;
      p_ptr = v12;
      j__free(v12);
      ptr = nullptr;
      *((_QWORD *)&v46 + 1) = 0;
    }
  }
LABEL_21:
  v19 = sub_199140(p_ptr, v8);
  sub_1677A0(v57, 25, v19, 0);
  v21 = ::s1;
  if ( (_QWORD)v46 )
    LODWORD(v21) = (_DWORD)ptr;
  v22 = ::s1;
  if ( (_QWORD)v48 )
    LODWORD(v22) = (_DWORD)s1;
  sub_16B870(
    (unsigned int)"%s Listening on %s:%u%s...\n",
    (unsigned int)v57,
    (_DWORD)v22,
    *(unsigned __int16 *)(a1 + 104),
    (_DWORD)v21,
    v20);
  while ( *(_QWORD *)(a1 + 80) )
  {
    v23 = sub_1671B0(*(unsigned __int8 *)(a1 + 106));
    v24 = *(_QWORD *)(a1 + 80);
    v44 = v23;
    if ( (unsigned __int8)sub_167240(v23, v24)
      && (v25 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, v44)) != nullptr )
    {
      sub_166990(a1, v25);
    }
    else
    {
      sub_1672A0(&v44, 0xFFFFFFFFLL);
      if ( !*(_QWORD *)(a1 + 80) )
        break;
      sub_16B870((unsigned int)"Rejected client\n", -1, v27, v28, v29, v30);
    }
  }
  if ( s1 )
  {
    *(_QWORD *)&v48 = 0;
    j__free(s1);
  }
  if ( ptr )
  {
    *(_QWORD *)&v46 = 0;
    j__free(ptr);
  }
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    j__free(v55);
  }
  if ( dest )
  {
    *(_QWORD *)&v54 = 0;
    j__free(dest);
  }
  if ( v50 )
  {
    *(_QWORD *)&v51 = 0;
    j__free(v50);
  }
  return v59 - __readfsqword(0x28u);
}
