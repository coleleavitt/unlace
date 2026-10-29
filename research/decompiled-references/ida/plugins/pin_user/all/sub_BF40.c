__int64 __fastcall sub_BF40(const void *a1)
{
  char v2; // al
  __int64 v3; // rsi
  size_t v4; // rax
  size_t v5; // r15
  size_t v6; // r13
  size_t v7; // r13
  size_t v8; // r9
  __int64 v9; // r8
  size_t v10; // r10
  __int64 v11; // rsi
  char v12; // al
  unsigned __int64 v13; // r12
  size_t v14; // rax
  size_t v15; // r13
  size_t v16; // r12
  size_t v17; // rbx
  size_t v18; // r13
  __int64 v19; // r12
  size_t v20; // r14
  __int64 v21; // rsi
  char v22; // al
  _DWORD *v24; // rsi
  size_t v25; // rax
  size_t v26; // r13
  size_t v27; // r12
  size_t v28; // rbx
  size_t v29; // r13
  size_t v30; // rax
  size_t v31; // rbx
  size_t v32; // r12
  void *v33; // rdi
  __int64 v34; // r12
  size_t v35; // r14
  __int64 v36; // rsi
  __int64 v37; // r13
  __int64 v38; // r9
  __int64 v39; // rsi
  __int64 v40; // [rsp+10h] [rbp-1078h]
  __int64 v41; // [rsp+10h] [rbp-1078h]
  size_t v42; // [rsp+18h] [rbp-1070h]
  void *src; // [rsp+20h] [rbp-1068h]
  char *srca; // [rsp+20h] [rbp-1068h]
  void *srcb; // [rsp+20h] [rbp-1068h]
  void *srcc; // [rsp+20h] [rbp-1068h]
  size_t v47; // [rsp+28h] [rbp-1060h]
  size_t v48; // [rsp+28h] [rbp-1060h]
  char s[4104]; // [rsp+40h] [rbp-1048h] BYREF
  unsigned __int64 v50; // [rsp+1048h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  qmakepath();
  v2 = qfileexist();
  if ( (*((_BYTE *)&debug + 2) & 1) != 0 )
  {
    if ( !v2 )
    {
LABEL_37:
      sub_BDA0((__int64)"PIN: probing %s path: %s ... %s\n", "IDA PIN tool", s, "not found");
      goto LABEL_31;
    }
    sub_BDA0((__int64)"PIN: probing %s path: %s ... %s\n", "IDA PIN tool", s, "FOUND!");
  }
  else if ( !v2 )
  {
    goto LABEL_31;
  }
  v3 = qword_3C3B0;
  if ( *((_QWORD *)&xmmword_3C3B8 + 1) <= 6u )
  {
    qword_3C3B0 = qvector_reserve();
    v3 = qword_3C3B0;
  }
  *(_QWORD *)&xmmword_3C3B8 = 7;
  *(_WORD *)(v3 + 4) = 8244;
  *(_DWORD *)v3 = 913583392;
  *(_BYTE *)(qword_3C3B0 + 6) = 0;
  v4 = strlen(s);
  v5 = v4 + 1;
  v6 = v4;
  src = (void *)qvector_reserve();
  memmove(src, s, v6);
  *((_BYTE *)src + v6) = 0;
  v7 = v5;
  if ( v5 )
  {
    v8 = v5 - 1;
    if ( v5 != 1 )
    {
      v9 = xmmword_3C3B8;
      v10 = v5 - 1;
      if ( (_QWORD)xmmword_3C3B8 )
      {
        v9 = xmmword_3C3B8 - 1;
        v10 = v8 + xmmword_3C3B8 - 1;
        v7 = v5 + xmmword_3C3B8 - 1;
      }
      v11 = qword_3C3B0;
      if ( *((_QWORD *)&xmmword_3C3B8 + 1) < v7 )
      {
        v42 = v10;
        v40 = v9;
        qword_3C3B0 = qvector_reserve();
        v10 = v42;
        v11 = qword_3C3B0;
        v9 = v40;
        v8 = v5 - 1;
      }
      *(_QWORD *)&xmmword_3C3B8 = v7;
      *(_BYTE *)(v11 + v10) = 0;
      memcpy((void *)(v9 + qword_3C3B0), src, v8);
    }
  }
  if ( src )
    qfree();
  qmakepath();
  v12 = qfileexist();
  if ( (*((_BYTE *)&debug + 2) & 1) != 0 )
  {
    if ( v12 )
    {
      sub_BDA0((__int64)"PIN: probing %s path: %s ... %s\n", "IDA PIN tool", s, "FOUND!");
LABEL_18:
      srca = (char *)qvector_reserve();
      strcpy(srca, " -t ");
      v13 = 5;
      v37 = xmmword_3C3B8;
      v38 = 4;
      if ( (_QWORD)xmmword_3C3B8 )
      {
        v37 = xmmword_3C3B8 - 1;
        v38 = xmmword_3C3B8 - 1 + 4;
        v13 = xmmword_3C3B8 - 1 + 5;
      }
      v39 = qword_3C3B0;
      if ( *((_QWORD *)&xmmword_3C3B8 + 1) < v13 )
      {
        v41 = v38;
        qword_3C3B0 = qvector_reserve();
        v38 = v41;
        v39 = qword_3C3B0;
      }
      *(_QWORD *)&xmmword_3C3B8 = v13;
      *(_BYTE *)(v39 + v38) = 0;
      memcpy((void *)(v37 + qword_3C3B0), srca, 4u);
      if ( srca )
        qfree();
      v14 = strlen(s);
      v15 = v14 + 1;
      v16 = v14;
      srcb = (void *)qvector_reserve();
      v47 = v15;
      memmove(srcb, s, v16);
      *((_BYTE *)srcb + v16) = 0;
      v17 = v15;
      if ( v15 )
      {
        v18 = v15 - 1;
        if ( v47 != 1 )
        {
          v19 = xmmword_3C3B8;
          v20 = v47 - 1;
          if ( (_QWORD)xmmword_3C3B8 )
          {
            v19 = xmmword_3C3B8 - 1;
            v20 = v18 + xmmword_3C3B8 - 1;
            v17 = v47 + xmmword_3C3B8 - 1;
          }
          v21 = qword_3C3B0;
          if ( *((_QWORD *)&xmmword_3C3B8 + 1) < v17 )
          {
            qword_3C3B0 = qvector_reserve();
            v21 = qword_3C3B0;
          }
          *(_QWORD *)&xmmword_3C3B8 = v17;
          *(_BYTE *)(v21 + v20) = 0;
          memcpy((void *)(v19 + qword_3C3B0), srcb, v18);
        }
      }
      if ( !srcb )
        goto LABEL_47;
      goto LABEL_46;
    }
    goto LABEL_37;
  }
  if ( v12 )
    goto LABEL_18;
LABEL_31:
  getinf_flag();
  qmakepath();
  v22 = qfileexist();
  if ( (debug & 0x10000) != 0 )
  {
    if ( !v22 )
    {
      sub_BDA0((__int64)"PIN: probing %s path: %s ... %s\n", "IDA PIN tool", s, "not found");
      return 0;
    }
    sub_BDA0((__int64)"PIN: probing %s path: %s ... %s\n", "IDA PIN tool", s, "FOUND!");
  }
  else if ( !v22 )
  {
    return 0;
  }
  v24 = (_DWORD *)qword_3C3B0;
  if ( *((_QWORD *)&xmmword_3C3B8 + 1) <= 4u )
  {
    qword_3C3B0 = qvector_reserve();
    v24 = (_DWORD *)qword_3C3B0;
  }
  *(_QWORD *)&xmmword_3C3B8 = 5;
  *v24 = 544484640;
  *(_BYTE *)(qword_3C3B0 + 4) = 0;
  v25 = strlen(s);
  v26 = v25 + 1;
  v27 = v25;
  srcc = (void *)qvector_reserve();
  v48 = v26;
  memmove(srcc, s, v27);
  *((_BYTE *)srcc + v27) = 0;
  v28 = v26;
  if ( v26 )
  {
    v29 = v26 - 1;
    if ( v48 != 1 )
    {
      v34 = xmmword_3C3B8;
      v35 = v48 - 1;
      if ( (_QWORD)xmmword_3C3B8 )
      {
        v34 = xmmword_3C3B8 - 1;
        v35 = v29 + xmmword_3C3B8 - 1;
        v28 = v48 + xmmword_3C3B8 - 1;
      }
      v36 = qword_3C3B0;
      if ( *((_QWORD *)&xmmword_3C3B8 + 1) < v28 )
      {
        qword_3C3B0 = qvector_reserve();
        v36 = qword_3C3B0;
      }
      *(_QWORD *)&xmmword_3C3B8 = v28;
      *(_BYTE *)(v36 + v35) = 0;
      memcpy((void *)(v34 + qword_3C3B0), srcc, v29);
    }
  }
  if ( !srcc )
    goto LABEL_47;
LABEL_46:
  qfree();
LABEL_47:
  if ( a1 && (v30 = strlen((const char *)a1), (v31 = v30) != 0) )
  {
    v32 = v30 + 1;
    v33 = dest;
    if ( *((_QWORD *)&xmmword_3C418 + 1) < v30 + 1 )
    {
      dest = (void *)qvector_reserve();
      v33 = dest;
    }
    *(_QWORD *)&xmmword_3C418 = v32;
    memmove(v33, a1, v31);
    *((_BYTE *)dest + v31) = 0;
  }
  else
  {
    *(_QWORD *)&xmmword_3C418 = 0;
  }
  return 1;
}

