unsigned __int64 __fastcall sub_3DAC20(__int64 **a1)
{
  __int64 v1; // rax
  size_t v2; // rbx
  __int64 v3; // r13
  unsigned __int64 v4; // r15
  __int64 *v5; // rbx
  __int64 *v6; // rbp
  char v7; // al
  __int64 v8; // r12
  __int64 v9; // rax
  char v10; // r15
  __int64 v11; // rsi
  const char *v12; // r15
  size_t v13; // rax
  __int64 v14; // r8
  size_t v15; // r10
  unsigned __int64 v16; // r11
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v21; // rsi
  __int64 v22; // rax
  unsigned __int64 v23; // [rsp+8h] [rbp-D8h]
  unsigned __int64 v24; // [rsp+8h] [rbp-D8h]
  size_t v25; // [rsp+10h] [rbp-D0h]
  size_t v26; // [rsp+10h] [rbp-D0h]
  __int64 v27; // [rsp+18h] [rbp-C8h]
  __int64 v28; // [rsp+18h] [rbp-C8h]
  __int64 v29; // [rsp+38h] [rbp-A8h] BYREF
  __int128 v30; // [rsp+40h] [rbp-A0h]
  char *v31; // [rsp+58h] [rbp-88h] BYREF
  __int128 v32; // [rsp+60h] [rbp-80h]
  __int64 v33[4]; // [rsp+78h] [rbp-68h] BYREF
  _BYTE src[5]; // [rsp+9Bh] [rbp-45h] BYREF
  unsigned __int64 v35; // [rsp+A0h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v30 = 0;
  v29 = 0;
  v1 = pack_dd() - (_QWORD)src;
  v2 = v1;
  if ( v1 )
  {
    v3 = v30;
    v4 = v30 + v1;
    if ( __CFADD__((_QWORD)v30, v1) )
    {
      if ( (unsigned __int64)v30 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v30 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v30 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v3 + v29), src, v2);
        goto LABEL_7;
      }
      v4 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v21 = v29;
    v22 = v30;
    if ( *((_QWORD *)&v30 + 1) < v4 )
    {
      v29 = qvector_reserve((__int64)&v29, v29, v4, 1);
      v21 = v29;
      v22 = v30;
    }
    memset((void *)(v21 + v22), 0, v4 - v22);
    *(_QWORD *)&v30 = v4;
    goto LABEL_6;
  }
LABEL_7:
  v5 = *a1;
  v6 = &(*a1)[(_QWORD)a1[1]];
  v7 = 0;
  if ( v6 == *a1 )
  {
LABEL_27:
    v19 = v29;
    if ( v29 )
      goto LABEL_28;
    return v35 - __readfsqword(0x28u);
  }
  do
  {
    v8 = *v5;
    if ( *(_QWORD *)(*v5 + 8) > 1u )
    {
      v9 = v30;
      v10 = *(_BYTE *)(v8 + 48);
      v11 = v29;
      if ( *((_QWORD *)&v30 + 1) < (unsigned __int64)(v30 + 1) )
      {
        v29 = qvector_reserve((__int64)&v29, v29, v30 + 1, 1);
        v11 = v29;
        v9 = v30;
      }
      *(_BYTE *)(v11 + v9) = v10;
      *(_QWORD *)&v30 = v30 + 1;
      sub_80870(v8 + 24, &v29);
      v12 = s1;
      if ( *(_QWORD *)(v8 + 8) )
        v12 = *(const char **)v8;
      if ( v12 )
      {
        v13 = strlen(v12);
        v14 = v30;
        v15 = v13 + 1;
        v16 = v13 + 1 + v30;
        if ( !__CFADD__(v13 + 1, (_QWORD)v30) )
          goto LABEL_21;
        if ( (unsigned __int64)v30 <= 0x7FFFFFFFFFFFFFFELL )
        {
          v17 = v29;
          v18 = v30;
          v16 = 0x7FFFFFFFFFFFFFFFLL;
          if ( *((_QWORD *)&v30 + 1) >= 0x7FFFFFFFFFFFFFFFuLL )
            goto LABEL_22;
          goto LABEL_31;
        }
        if ( (_QWORD)v30 == 0x7FFFFFFFFFFFFFFFLL )
        {
LABEL_12:
          memcpy((void *)(v14 + v29), v12, v15);
          v7 = 1;
          goto LABEL_13;
        }
      }
      else
      {
        v14 = v30;
        v15 = 1;
        v12 = (const char *)&unk_418793;
        v16 = v30 + 1;
        if ( (_QWORD)v30 != -1 )
        {
LABEL_21:
          v17 = v29;
          v18 = v14;
          if ( *((_QWORD *)&v30 + 1) >= v16 )
          {
LABEL_22:
            v27 = v14;
            v25 = v15;
            v23 = v16;
            memset((void *)(v17 + v18), 0, v16 - v18);
            v15 = v25;
            v14 = v27;
            *(_QWORD *)&v30 = v23;
            goto LABEL_12;
          }
LABEL_31:
          v28 = v14;
          v26 = v15;
          v24 = v16;
          v29 = qvector_reserve((__int64)&v29, v17, v16, 1);
          v17 = v29;
          v14 = v28;
          v18 = v30;
          v15 = v26;
          v16 = v24;
          goto LABEL_22;
        }
        v14 = -1;
        v12 = (const char *)&unk_418793;
      }
      *(_QWORD *)&v30 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_12;
    }
LABEL_13:
    ++v5;
  }
  while ( v6 != v5 );
  if ( !v7 )
    goto LABEL_27;
  v32 = 0;
  v31 = nullptr;
  v31 = (char *)qvector_reserve((__int64)&v31, 0, 16, 1);
  *(_QWORD *)&v32 = 16;
  strcpy(v31, "$ mbui.comments");
  sub_FAAD0((__int64 *)&v31);
  netnode_check();
  sub_3D1770((__int64)v33, &v29);
  netnode_supset();
  if ( v33[0] )
  {
    v33[1] = 0;
    qfree(v33[0]);
  }
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree((__int64)v31);
  }
  v19 = v29;
  if ( v29 )
  {
LABEL_28:
    *(_QWORD *)&v30 = 0;
    qfree(v19);
  }
  return v35 - __readfsqword(0x28u);
}

