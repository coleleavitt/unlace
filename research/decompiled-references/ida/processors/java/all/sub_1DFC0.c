unsigned __int64 __fastcall sub_1DFC0(__int64 a1, _DWORD *a2, unsigned __int64 a3)
{
  unsigned __int16 *v3; // rax
  _BYTE *v4; // rcx
  const char *v5; // rsi
  char *v7; // r12
  size_t v8; // rax
  size_t v9; // r14
  size_t v10; // rbp
  char *v11; // rcx
  char *v12; // r13
  __int64 v13; // rbp
  const char *v14; // r15
  char *v15; // r14
  char *v16; // rbx
  const char *v17; // rdi
  int v18; // eax
  __int64 v19; // rax
  const char *v20; // rdi
  char *v21; // [rsp+0h] [rbp-68h]
  char *s2; // [rsp+10h] [rbp-58h] BYREF
  __int128 v24; // [rsp+18h] [rbp-50h]
  unsigned __int64 v25; // [rsp+28h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v3 = *(unsigned __int16 **)(a1 + 33352);
  v4 = v3;
  do
  {
    v5 = (const char *)*v3;
    if ( (unsigned __int16)v5 > 0x7Eu )
      return v25 - __readfsqword(0x28u);
    ++v3;
    *v4++ = (_BYTE)v5;
  }
  while ( (unsigned __int64)v3 < a3 );
  *v4 = 0;
  v7 = *(char **)(a1 + 33352);
  v21 = (char *)&loc_102A0 + a1;
  s2 = nullptr;
  v24 = 0;
  if ( v7 )
  {
    v8 = strlen(v7);
    v9 = v8 + 1;
    v10 = v8;
    v5 = v7;
    s2 = (char *)qvector_reserve(&s2, 0, v8 + 1, 1);
    *(_QWORD *)&v24 = v9;
    memmove(s2, v7, v10);
    s2[v10] = 0;
    v12 = *(char **)(a1 + 66216);
    v7 = s2;
    if ( !v12 )
      goto LABEL_29;
  }
  else
  {
    v12 = *(char **)(a1 + 66216);
    if ( !v12 )
      return v25 - __readfsqword(0x28u);
  }
  v13 = v24;
  v14 = s1;
  v15 = (char *)&loc_102A0 + a1;
  if ( (_QWORD)v24 )
    v14 = v7;
  while ( 1 )
  {
    v19 = *((_QWORD *)v12 + 5);
    if ( !v13 )
      break;
    v16 = v12;
    v5 = v7;
    v17 = s1;
    if ( v19 )
      goto LABEL_11;
LABEL_12:
    v18 = strcmp(v17, v5);
    v11 = *((char **)v12 + 2);
    v12 = *((char **)v12 + 3);
    if ( v18 >= 0 )
    {
      v15 = v16;
      v12 = v11;
    }
    if ( !v12 )
      goto LABEL_21;
  }
  if ( v19 )
  {
LABEL_19:
    v16 = v12;
LABEL_11:
    v17 = *((const char **)v12 + 4);
    v5 = v14;
    goto LABEL_12;
  }
  while ( 1 )
  {
    v11 = *((char **)v12 + 2);
    if ( !v11 )
      break;
    v15 = v12;
    v12 = *((char **)v12 + 2);
    if ( *((_QWORD *)v11 + 5) )
      goto LABEL_19;
  }
  v15 = v12;
LABEL_21:
  if ( v21 != v15 )
  {
    if ( !*((_QWORD *)v15 + 5) )
    {
      v20 = v7;
      v5 = s1;
      if ( v13 )
        goto LABEL_25;
      goto LABEL_26;
    }
    v20 = s1;
    v5 = *((const char **)v15 + 4);
    if ( v13 )
      v20 = v7;
LABEL_25:
    if ( strcmp(v20, v5) >= 0 )
    {
LABEL_26:
      if ( v7 )
      {
        *(_QWORD *)&v24 = 0;
        qfree(v7, v5, a3, v11);
      }
      *a2 |= 0x20u;
      return v25 - __readfsqword(0x28u);
    }
  }
LABEL_29:
  if ( v7 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v7, v5, a3, v11);
  }
  return v25 - __readfsqword(0x28u);
}

