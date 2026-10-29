unsigned __int64 __fastcall sub_9EF0(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // r15
  size_t v8; // r8
  unsigned __int64 v9; // r9
  _QWORD *v10; // r14
  __int64 i; // r13
  __int64 v12; // rsi
  __int64 v13; // rax
  size_t v14; // r8
  unsigned __int64 v15; // r10
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // r11
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // [rsp+0h] [rbp-78h]
  unsigned __int64 v25; // [rsp+0h] [rbp-78h]
  unsigned __int64 v26; // [rsp+0h] [rbp-78h]
  unsigned __int64 v27; // [rsp+8h] [rbp-70h]
  unsigned __int64 v28; // [rsp+8h] [rbp-70h]
  size_t v29; // [rsp+8h] [rbp-70h]
  size_t v30; // [rsp+8h] [rbp-70h]
  size_t n; // [rsp+10h] [rbp-68h]
  size_t na; // [rsp+10h] [rbp-68h]
  unsigned __int64 v33; // [rsp+18h] [rbp-60h]
  unsigned __int64 v34; // [rsp+18h] [rbp-60h]
  _BYTE src[3]; // [rsp+2Eh] [rbp-4Ah] BYREF
  char v36[7]; // [rsp+31h] [rbp-47h] BYREF
  unsigned __int64 v37[8]; // [rsp+38h] [rbp-40h] BYREF

  v4 = a3[1];
  v37[0] = __readfsqword(0x28u);
  v6 = pack_dw(src, v36, (unsigned __int16)v4) - (_QWORD)src;
  if ( v6 )
  {
    v7 = a1[1];
    v8 = v6;
    v9 = v7 + v6;
    if ( __CFADD__(v7, v6) )
    {
      if ( v7 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v7 != 0x7FFFFFFFFFFFFFFFLL )
          a1[1] = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v7 + *a1), src, v8);
        goto LABEL_7;
      }
      v9 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v21 = *a1;
    v22 = a1[1];
    if ( a1[2] < v9 )
    {
      v30 = v8;
      v26 = v9;
      v23 = qvector_reserve(a1, v21, v9, 1);
      v8 = v30;
      v9 = v26;
      *a1 = v23;
      v21 = v23;
      v22 = a1[1];
    }
    v29 = v8;
    v25 = v9;
    memset((void *)(v21 + v22), 0, v9 - v22);
    v8 = v29;
    a1[1] = v25;
    goto LABEL_6;
  }
LABEL_7:
  if ( (int)v4 > 0 )
  {
    v24 = 8LL * (unsigned int)(v4 - 1) + 8;
    v10 = a3;
    for ( i = 0; v24 != i; i += 8 )
    {
      v16 = a2;
      a2 = *(_QWORD *)(*v10 + i);
      v17 = pack_dq(src, v37, a2 - v16) - (_QWORD)src;
      v14 = v17;
      if ( !v17 )
        continue;
      v15 = a1[1];
      v18 = v15 + v17;
      if ( __CFADD__(v15, v17) )
      {
        if ( v15 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( v15 != 0x7FFFFFFFFFFFFFFFLL )
            a1[1] = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_11;
        }
        v12 = *a1;
        v13 = a1[1];
        v18 = 0x7FFFFFFFFFFFFFFFLL;
        if ( (unsigned __int64)a1[2] < 0x7FFFFFFFFFFFFFFFLL )
        {
LABEL_20:
          v34 = a1[1];
          na = v14;
          v28 = v18;
          v20 = qvector_reserve(a1, v12, v18, 1);
          v15 = v34;
          v14 = na;
          *a1 = v20;
          v12 = v20;
          v18 = v28;
          v13 = a1[1];
        }
      }
      else
      {
        v12 = *a1;
        v13 = a1[1];
        if ( a1[2] < v18 )
          goto LABEL_20;
      }
      v33 = v15;
      n = v14;
      v27 = v18;
      memset((void *)(v12 + v13), 0, v18 - v13);
      v14 = n;
      v15 = v33;
      a1[1] = v27;
LABEL_11:
      memcpy((void *)(v15 + *a1), src, v14);
    }
  }
  return v37[0] - __readfsqword(0x28u);
}

