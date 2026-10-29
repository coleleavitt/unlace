unsigned __int64 __fastcall sub_3D59A0(__int64 **a1)
{
  __int64 v1; // rax
  size_t v2; // rbx
  __int64 v3; // r13
  unsigned __int64 v4; // r15
  __int64 *v5; // rbx
  __int64 v6; // rbp
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
  __int64 v20; // rsi
  __int64 v21; // rax
  unsigned __int64 v22; // [rsp+8h] [rbp-D8h]
  unsigned __int64 v23; // [rsp+8h] [rbp-D8h]
  size_t v24; // [rsp+10h] [rbp-D0h]
  size_t v25; // [rsp+10h] [rbp-D0h]
  __int64 v26; // [rsp+18h] [rbp-C8h]
  __int64 v27; // [rsp+18h] [rbp-C8h]
  __int64 v28; // [rsp+38h] [rbp-A8h] BYREF
  __int128 v29; // [rsp+40h] [rbp-A0h]
  char *v30; // [rsp+58h] [rbp-88h] BYREF
  __int128 v31; // [rsp+60h] [rbp-80h]
  __int64 v32[4]; // [rsp+78h] [rbp-68h] BYREF
  _BYTE src[5]; // [rsp+9Bh] [rbp-45h] BYREF
  unsigned __int64 v34; // [rsp+A0h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  v29 = 0;
  v28 = 0;
  v1 = pack_dd() - (_QWORD)src;
  v2 = v1;
  if ( v1 )
  {
    v3 = v29;
    v4 = v29 + v1;
    if ( __CFADD__((_QWORD)v29, v1) )
    {
      if ( (unsigned __int64)v29 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v29 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v29 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v3 + v28), src, v2);
        goto LABEL_7;
      }
      v4 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v20 = v28;
    v21 = v29;
    if ( *((_QWORD *)&v29 + 1) < v4 )
    {
      v28 = qvector_reserve();
      v20 = v28;
      v21 = v29;
    }
    memset((void *)(v20 + v21), 0, v4 - v21);
    *(_QWORD *)&v29 = v4;
    goto LABEL_6;
  }
LABEL_7:
  v5 = *a1;
  v6 = (__int64)&(*a1)[(_QWORD)a1[1]];
  v7 = 0;
  if ( (__int64 *)v6 == *a1 )
  {
LABEL_27:
    if ( v28 )
      goto LABEL_28;
    return v34 - __readfsqword(0x28u);
  }
  do
  {
    v8 = *v5;
    if ( *(_QWORD *)(*v5 + 8) > 1u )
    {
      v9 = v29;
      v10 = *(_BYTE *)(v8 + 48);
      v11 = v28;
      if ( *((_QWORD *)&v29 + 1) < (unsigned __int64)(v29 + 1) )
      {
        v28 = qvector_reserve();
        v11 = v28;
        v9 = v29;
      }
      *(_BYTE *)(v11 + v9) = v10;
      *(_QWORD *)&v29 = v29 + 1;
      sub_7C470(v8 + 24, &v28);
      v12 = s1;
      if ( *(_QWORD *)(v8 + 8) )
        v12 = *(const char **)v8;
      if ( v12 )
      {
        v13 = strlen(v12);
        v14 = v29;
        v15 = v13 + 1;
        v16 = v13 + 1 + v29;
        if ( !__CFADD__(v13 + 1, (_QWORD)v29) )
          goto LABEL_21;
        if ( (unsigned __int64)v29 <= 0x7FFFFFFFFFFFFFFELL )
        {
          v17 = v28;
          v18 = v29;
          v16 = 0x7FFFFFFFFFFFFFFFLL;
          if ( *((_QWORD *)&v29 + 1) >= 0x7FFFFFFFFFFFFFFFuLL )
            goto LABEL_22;
          goto LABEL_31;
        }
        if ( (_QWORD)v29 == 0x7FFFFFFFFFFFFFFFLL )
        {
LABEL_12:
          memcpy((void *)(v14 + v28), v12, v15);
          v7 = 1;
          goto LABEL_13;
        }
      }
      else
      {
        v14 = v29;
        v15 = 1;
        v12 = (const char *)&unk_3F3793;
        v16 = v29 + 1;
        if ( (_QWORD)v29 != -1 )
        {
LABEL_21:
          v17 = v28;
          v18 = v14;
          if ( *((_QWORD *)&v29 + 1) >= v16 )
          {
LABEL_22:
            v26 = v14;
            v24 = v15;
            v22 = v16;
            memset((void *)(v17 + v18), 0, v16 - v18);
            v15 = v24;
            v14 = v26;
            *(_QWORD *)&v29 = v22;
            goto LABEL_12;
          }
LABEL_31:
          v27 = v14;
          v25 = v15;
          v23 = v16;
          v28 = qvector_reserve();
          v17 = v28;
          v14 = v27;
          v18 = v29;
          v15 = v25;
          v16 = v23;
          goto LABEL_22;
        }
        v14 = -1;
        v12 = (const char *)&unk_3F3793;
      }
      *(_QWORD *)&v29 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_12;
    }
LABEL_13:
    ++v5;
  }
  while ( (__int64 *)v6 != v5 );
  if ( !v7 )
    goto LABEL_27;
  v31 = 0;
  v30 = nullptr;
  v30 = (char *)qvector_reserve();
  *(_QWORD *)&v31 = 16;
  strcpy(v30, "$ mbui.comments");
  sub_F6610((__int64 *)&v30);
  netnode_check();
  sub_3CC4F0(v32, &v28);
  netnode_supset();
  if ( v32[0] )
  {
    v32[1] = 0;
    qfree();
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree();
  }
  if ( v28 )
  {
LABEL_28:
    *(_QWORD *)&v29 = 0;
    qfree();
  }
  return v34 - __readfsqword(0x28u);
}

