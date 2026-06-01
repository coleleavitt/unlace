unsigned __int64 __fastcall sub_13170(void *src, __int64 a2)
{
  __int64 v3; // rax
  size_t v4; // r12
  size_t v5; // rax
  __int64 v6; // rbx
  size_t v7; // r8
  unsigned __int64 v8; // rax
  __int64 v9; // r14
  size_t v10; // r9
  unsigned __int64 v11; // rdx
  const char *v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rax
  size_t v15; // rbx
  size_t v16; // rax
  void *v18; // rdi
  __int64 v19; // rbp
  unsigned __int64 v20; // [rsp+8h] [rbp-40C0h]
  size_t v21; // [rsp+10h] [rbp-40B8h]
  size_t v22; // [rsp+18h] [rbp-40B0h]
  __int64 v23; // [rsp+20h] [rbp-40A8h] BYREF
  __int128 v24; // [rsp+28h] [rbp-40A0h]
  char v25[4]; // [rsp+40h] [rbp-4088h] BYREF
  char s[8228]; // [rsp+44h] [rbp-4084h] BYREF
  __int64 v27; // [rsp+2068h] [rbp-2060h]
  int v28; // [rsp+2074h] [rbp-2054h]
  unsigned __int64 v29; // [rsp+4088h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  v27 = 0;
  v28 = 0;
  v23 = 0;
  v3 = qbasename(src) - (_QWORD)src;
  v24 = 0;
  v4 = v3;
  if ( v3 )
  {
    v18 = nullptr;
    v19 = v3 + 1;
    if ( v3 != -1 )
    {
      v23 = qvector_reserve(&v23, 0, v3 + 1, 1);
      v18 = (void *)v23;
    }
    *(_QWORD *)&v24 = v19;
    memmove(v18, src, v4);
    *(_BYTE *)(v23 + v4) = 0;
  }
  if ( (unsigned int)qfindfirst(src, v25, 0) )
    sub_E890((__int64)"No such files found: '%s'\n", (const char *)src);
  do
  {
    v13 = v23;
    v9 = v23;
    if ( v4 )
    {
      v14 = v24;
      v15 = v4 + 1;
      if ( (unsigned __int64)v24 < v4 + 1 )
      {
        if ( *((_QWORD *)&v24 + 1) < v15 )
        {
          v23 = qvector_reserve(&v23, v23, v4 + 1, 1);
          v9 = v23;
          v14 = v24;
        }
        memset((void *)(v9 + v14), 0, v15 - v14);
        *(_QWORD *)&v24 = v4 + 1;
        v13 = v23;
      }
      else if ( v15 != (_QWORD)v24 )
      {
        *(_QWORD *)&v24 = v4 + 1;
      }
      *(_BYTE *)(v13 + v4) = 0;
      v9 = v23;
LABEL_16:
      v16 = strlen(s);
      v6 = v24;
      v7 = v16;
      v8 = *((_QWORD *)&v24 + 1);
      v10 = v7;
      if ( !(_QWORD)v24 )
      {
        v11 = v7 + 1;
        if ( *((_QWORD *)&v24 + 1) >= v7 + 1 )
          goto LABEL_8;
        goto LABEL_18;
      }
LABEL_7:
      v10 = --v6 + v7;
      v11 = v6 + v7 + 1;
      if ( v8 >= v11 )
        goto LABEL_8;
      goto LABEL_18;
    }
    if ( !v23 )
      goto LABEL_16;
    *(_QWORD *)&v24 = 0;
    qfree(v23);
    v23 = 0;
    *((_QWORD *)&v24 + 1) = 0;
    v5 = strlen(s);
    v6 = v24;
    v7 = v5;
    if ( (_QWORD)v24 )
    {
      v8 = 0;
      v9 = 0;
      goto LABEL_7;
    }
    v11 = v5 + 1;
    v10 = v5;
    v9 = 0;
LABEL_18:
    v22 = v7;
    v21 = v10;
    v20 = v11;
    v23 = qvector_reserve(&v23, v9, v11, 1);
    v7 = v22;
    v9 = v23;
    v10 = v21;
    v11 = v20;
LABEL_8:
    *(_QWORD *)&v24 = v11;
    *(_BYTE *)(v9 + v10) = 0;
    memmove((void *)(v23 + v6), s, v7);
    v12 = s1;
    if ( (_QWORD)v24 )
      v12 = (const char *)v23;
    sub_10FA0(v12, a2);
  }
  while ( !(unsigned int)qfindnext(v25) );
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23);
  }
  qfindclose(v25);
  return v29 - __readfsqword(0x28u);
}
