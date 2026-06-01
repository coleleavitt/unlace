__int64 __fastcall sub_CF20(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // rbp
  const char *v8; // rsi
  const char *v9; // rdi
  signed __int64 v10; // rdx
  const char *v11; // rsi
  unsigned int v12; // ebx
  __int64 v14; // rax
  int v15; // ebp
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rbp
  __int64 v20; // rdi
  __int64 v21; // r8
  __int64 v22; // r9
  const char *v23; // [rsp+0h] [rbp-A8h]
  __int64 v24; // [rsp+8h] [rbp-A0h]
  __int64 v25; // [rsp+10h] [rbp-98h] BYREF
  __int128 v26; // [rsp+18h] [rbp-90h]
  const char *v27; // [rsp+30h] [rbp-78h] BYREF
  __int128 v28; // [rsp+38h] [rbp-70h]
  __int64 v29; // [rsp+50h] [rbp-58h] BYREF
  __int128 v30; // [rsp+58h] [rbp-50h]
  unsigned __int64 v31; // [rsp+68h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v26 = 0;
  v25 = 0;
  v27 = nullptr;
  v28 = 0;
  if ( netnode_qsupstr(*(_QWORD *)(a1 + 104), &v27, 2, 83) == -1 )
  {
    v16 = 116;
    if ( netnode_supfirst(*(_QWORD *)(a1 + 104), 116) != -1
      || (v16 = (__int64)&v25,
          v30 = 0,
          v29 = 0,
          (unsigned __int8)sub_A880(a1, &v25, (__int64)"choose module(s) to load", (__int64)&v29, v21, v22)) )
    {
      v18 = v26;
      goto LABEL_29;
    }
    goto LABEL_17;
  }
  v4 = *(_QWORD *)(a1 + 112);
  v5 = v28;
  v6 = *(_QWORD *)(v4 + 600);
  v24 = v6;
  v7 = v6 + 24LL * *(_QWORD *)(v4 + 608);
  if ( v6 == v7 )
  {
LABEL_14:
    v11 = byte_190C8;
    if ( v5 )
      v11 = v27;
LABEL_16:
    sub_CA10((__int64)"Invalid module: %s\n", v11);
LABEL_17:
    v12 = 0;
    goto LABEL_18;
  }
  v23 = v27;
  while ( 1 )
  {
    if ( *(_QWORD *)(v6 + 8) )
    {
      v8 = *(const char **)v6;
      v9 = byte_190C8;
      if ( !v5 )
        goto LABEL_5;
    }
    else
    {
      if ( !v5 )
      {
        if ( v6 == v7 || v6 - v24 < 0 )
        {
          v11 = byte_190C8;
          goto LABEL_16;
        }
        v11 = byte_190C8;
        v10 = 0xAAAAAAAAAAAAAAABLL * ((v6 - v24) >> 3);
        if ( *(int *)(v4 + 560) <= v10 )
          goto LABEL_16;
        goto LABEL_26;
      }
      v8 = byte_190C8;
    }
    v9 = v23;
LABEL_5:
    if ( !strcmp(v9, v8) )
      break;
    v6 += 24;
    if ( v7 == v6 )
      goto LABEL_14;
  }
  if ( v6 == v7 )
    goto LABEL_14;
  if ( v6 - v24 < 0 )
    goto LABEL_14;
  v10 = 0xAAAAAAAAAAAAAAABLL * ((v6 - v24) >> 3);
  if ( *(int *)(v4 + 560) <= v10 )
    goto LABEL_14;
LABEL_26:
  v14 = v26;
  v15 = v10;
  v16 = v25;
  LODWORD(v29) = v10;
  v17 = *((_QWORD *)&v26 + 1);
  if ( *((_QWORD *)&v26 + 1) < (unsigned __int64)(v26 + 1) )
  {
    v25 = qvector_reserve(&v25, v25, v26 + 1, 4, v2, v3);
    v16 = v25;
    v14 = v26;
  }
  *(_DWORD *)(v16 + 4 * v14) = v15;
  v18 = v26 + 1;
  *(_QWORD *)&v26 = v26 + 1;
LABEL_29:
  v19 = 0;
  if ( v18 )
  {
    do
    {
      v20 = *(_QWORD *)(a1 + 104);
      v16 = *(int *)(v25 + 4 * v19);
      v29 = 1;
      netnode_supset(v20, v16, &v29, 8, 116);
      ++v19;
    }
    while ( v19 < (unsigned __int64)v26 );
  }
  v12 = sub_AC60(a1, v16, v17);
LABEL_18:
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27);
  }
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25);
  }
  return v12;
}
