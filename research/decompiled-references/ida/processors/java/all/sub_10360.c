__int64 __fastcall sub_10360(_QWORD *a1, __int64 a2, unsigned __int8 a3, char a4)
{
  __int64 v5; // rbp
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // r8
  __int64 v19; // r9
  const char *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  char v23; // dl
  __int64 result; // rax
  __int64 v25; // rax
  __int64 v26; // r13
  unsigned __int64 v27; // rdx
  void *v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rax
  const char *v35; // [rsp+0h] [rbp-458h] BYREF
  __int128 v36; // [rsp+8h] [rbp-450h]
  _BYTE v37[1032]; // [rsp+20h] [rbp-438h] BYREF
  unsigned __int64 v38; // [rsp+428h] [rbp-30h]

  v5 = a1[4];
  v38 = __readfsqword(0x28u);
  if ( !v5 )
  {
    v25 = *a1;
    v26 = a1[90];
    a1[90] = 0;
    (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(v25 + 24))(a1, a2, a3);
    v12 = a1[4];
    a1[90] = v26;
    if ( !v12 )
    {
LABEL_26:
      v28 = &unk_2D4F8;
      qstrncpy(v37, &unk_2D4F8, 1, v9, v10, v11);
      v31 = a1[3];
      if ( !v31 )
        goto LABEL_11;
      goto LABEL_24;
    }
LABEL_20:
    v27 = v12 - v5;
    if ( v27 > 0x400 )
      v27 = 1024;
    v28 = (void *)(v5 + a1[3]);
    qstrncpy(v37, v28, v27, v9, v10, v11);
    if ( v5 )
      goto LABEL_7;
    v31 = a1[3];
    if ( !v31 )
      goto LABEL_11;
LABEL_24:
    a1[4] = 0;
    qfree(v31, v28, v29, v30);
    a1[3] = 0;
    a1[5] = 0;
    if ( a4 )
      goto LABEL_12;
LABEL_25:
    v32 = tag_strlen(v37);
    return (unsigned int)sub_FDF0(a1, (__int64)v37, v32) ^ 1;
  }
  v7 = *a1;
  v8 = a1[90];
  --v5;
  a1[90] = 0;
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(v7 + 24))(a1, a2, a3);
  v12 = a1[4];
  a1[90] = v8;
  if ( v12 )
    goto LABEL_20;
  if ( !v5 )
    goto LABEL_26;
  v13 = 1 - v5;
  if ( (unsigned __int64)(1 - v5) > 0x400 )
    v13 = 1024;
  qstrncpy(v37, v5 + a1[3], v13, v9, v10, v11);
LABEL_7:
  v14 = a1[4];
  v15 = v5 + 1;
  if ( v14 < v5 + 1 )
  {
    v33 = a1[3];
    if ( a1[5] < v15 )
    {
      v34 = qvector_reserve(a1 + 3, v33, v5 + 1, 1);
      v14 = a1[4];
      a1[3] = v34;
      v33 = v34;
    }
    memset((void *)(v33 + v14), 0, v15 - v14);
    a1[4] = v15;
  }
  else if ( v15 != v14 )
  {
    a1[4] = v15;
  }
  *(_BYTE *)(a1[3] + v5) = 0;
LABEL_11:
  if ( !a4 )
    goto LABEL_25;
LABEL_12:
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 18);
  v35 = nullptr;
  v36 = 0;
  v17 = tag_remove(&v35, v37, 0);
  v20 = s1;
  if ( (_QWORD)v36 )
    v20 = v35;
  qstrncpy(v37, v20, 1024, v16, v18, v19);
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35, v20, v21, v22);
  }
  v23 = sub_FDF0(a1, (__int64)v37, v17);
  result = 0;
  if ( !v23 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 18);
    return 1;
  }
  return result;
}

