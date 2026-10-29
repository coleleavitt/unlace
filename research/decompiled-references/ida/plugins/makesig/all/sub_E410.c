_QWORD *__fastcall sub_E410(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r15
  unsigned __int64 v4; // r13
  const char *v6; // rsi
  _QWORD *v7; // rbp
  const char *v8; // rdi
  int v9; // eax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  const char *v13; // rsi
  _QWORD *v14; // r12
  const char *v16; // rsi
  void (__fastcall ***v17)(void *); // rbp
  _QWORD **v18; // r14
  const char *v19; // rsi
  unsigned int v20; // eax
  size_t v21; // rdx
  void *v22; // r13
  _QWORD *v23; // rax
  bool v24; // zf
  _QWORD *v25; // r12
  void (__fastcall *v26)(void *); // rdx
  void (__fastcall *v27)(void *); // rax
  void (__fastcall *v28)(void *); // rdx
  void (__fastcall *v29)(void *); // rax
  void *v30; // rax
  const char *v31; // rsi
  void (__fastcall *v32)(void *); // rax
  size_t n; // [rsp+0h] [rbp-98h]
  size_t na; // [rsp+0h] [rbp-98h]
  const char *v36; // [rsp+10h] [rbp-88h] BYREF
  __int128 v37; // [rsp+18h] [rbp-80h]
  void *v38; // [rsp+30h] [rbp-68h] BYREF
  __int128 v39; // [rsp+38h] [rbp-60h]
  void (__fastcall ***v40)(void *); // [rsp+48h] [rbp-50h]
  unsigned __int64 v41; // [rsp+58h] [rbp-40h]

  v2 = a1 + 1;
  v3 = (_QWORD *)a1[2];
  v4 = *(_QWORD *)(a2 + 8);
  v41 = __readfsqword(0x28u);
  n = (size_t)(a1 + 1);
  v36 = nullptr;
  v37 = 0;
  if ( !v3 )
    goto LABEL_24;
  while ( 1 )
  {
    v11 = v3[5];
    if ( !v4 )
      break;
    v6 = *(const char **)a2;
    v7 = v3;
    v8 = s1;
    if ( v11 )
      goto LABEL_4;
LABEL_5:
    v9 = strcmp(v8, v6);
    v10 = (_QWORD *)v3[2];
    v3 = (_QWORD *)v3[3];
    if ( v9 >= 0 )
    {
      v2 = v7;
      v3 = v10;
    }
    if ( !v3 )
      goto LABEL_14;
  }
  if ( v11 )
  {
LABEL_12:
    v6 = s1;
LABEL_4:
    v8 = (const char *)v3[4];
    v7 = v3;
    goto LABEL_5;
  }
  while ( 1 )
  {
    v12 = v3[2];
    if ( !v12 )
      break;
    v2 = v3;
    v3 = (_QWORD *)v3[2];
    if ( *(_QWORD *)(v12 + 40) )
      goto LABEL_12;
  }
  v2 = v3;
LABEL_14:
  if ( (_QWORD *)n == v2 )
    goto LABEL_24;
  if ( v2[5] )
  {
    v13 = (const char *)v2[4];
    if ( v4 )
      goto LABEL_23;
    if ( *v13 )
      goto LABEL_21;
    return v2 + 7;
  }
  v13 = s1;
  if ( !v4 )
    return v2 + 7;
LABEL_23:
  if ( strcmp(*(const char **)a2, v13) >= 0 )
    return v2 + 7;
LABEL_24:
  if ( v4 <= 1 )
    goto LABEL_21;
  v17 = (void (__fastcall ***)(void *))operator new(0x30u);
  *((_DWORD *)v17 + 2) = 1;
  v18 = v17 + 2;
  v19 = *(const char **)a2;
  *v17 = (void (__fastcall **)(void *))&off_1FD30;
  *((_OWORD *)v17 + 1) = 0;
  *((_OWORD *)v17 + 2) = 0;
  v20 = qregcomp(v17 + 2, v19, 0);
  if ( v20 )
  {
    sub_8EC0((__int64)v17, v20, (__int64 *)&v36);
    if ( v17 )
    {
      v32 = (*v17)[2];
      if ( (char *)v32 == (char *)sub_7E60 )
      {
        *v17 = (void (__fastcall **)(void *))&off_1FD30;
        qregfree(v18);
        operator delete(v17, 0x30u);
      }
      else
      {
        v32(v17);
      }
    }
LABEL_44:
    if ( (_QWORD)v37 )
    {
      v16 = v36;
LABEL_22:
      sub_BA80((__int64)"%s", v16);
    }
LABEL_21:
    v16 = s1;
    goto LABEL_22;
  }
  if ( !v17 )
    goto LABEL_44;
  v21 = *(_QWORD *)(a2 + 8);
  v22 = nullptr;
  v39 = 0;
  if ( v21 )
  {
    na = v21;
    v30 = (void *)qalloc_or_throw(v21);
    v31 = *(const char **)a2;
    v22 = v30;
    *((_QWORD *)&v39 + 1) = na;
    memcpy(v30, v31, na);
    *(_QWORD *)&v39 = na;
  }
  ++*((_DWORD *)v17 + 2);
  v40 = v17;
  v38 = v22;
  v23 = sub_E170(a1, (const char *)&v38);
  v24 = (*((_DWORD *)v17 + 2))-- == 1;
  v25 = v23;
  if ( v24 )
  {
    v26 = **v17;
    if ( v26 == sub_85C0 )
    {
      v27 = (*v17)[2];
      if ( (char *)v27 == (char *)sub_7E60 )
      {
        *v17 = (void (__fastcall **)(void *))&off_1FD30;
        qregfree(v18);
        operator delete(v17, 0x30u);
      }
      else
      {
        v27(v17);
      }
    }
    else
    {
      v26(v17);
    }
  }
  if ( v22 )
    qfree(v22);
  v24 = (*((_DWORD *)v17 + 2))-- == 1;
  if ( v24 )
  {
    v28 = **v17;
    if ( v28 == sub_85C0 )
    {
      v29 = (*v17)[2];
      if ( (char *)v29 == (char *)sub_7E60 )
      {
        *v17 = (void (__fastcall **)(void *))&off_1FD30;
        qregfree(v18);
        operator delete(v17, 0x30u);
      }
      else
      {
        v29(v17);
      }
    }
    else
    {
      v28(v17);
    }
  }
  v14 = v25 + 7;
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36);
  }
  return v14;
}

