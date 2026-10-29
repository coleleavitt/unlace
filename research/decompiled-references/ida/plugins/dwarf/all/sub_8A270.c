__int64 __fastcall sub_8A270(__int64 *a1, _QWORD *a2, __int64 a3)
{
  const char *v3; // r14
  size_t v4; // rax
  unsigned __int64 v5; // rbp
  size_t v6; // r13
  unsigned __int64 v7; // r12
  __int64 ph; // rax
  __int64 v9; // rax
  size_t v10; // r14
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int8 v15; // al
  __int64 v16; // rax
  size_t v17; // r13
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // r14
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v23; // rsi
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  _BYTE src[5]; // [rsp+3h] [rbp-45h] BYREF
  _QWORD v29[8]; // [rsp+8h] [rbp-40h] BYREF

  v29[0] = __readfsqword(0x28u);
  if ( a3 && *(_DWORD *)(a3 + 8) == 2 )
  {
    *a2 = a3;
    v3 = ::src;
    if ( *(_QWORD *)(a3 + 24) )
      v3 = *(const char **)(a3 + 16);
    if ( v3 )
    {
      v4 = strlen(v3);
      v5 = a1[1];
      v6 = v4 + 1;
      v7 = v4 + 1 + v5;
      if ( __CFADD__(v4 + 1, v5) )
      {
        if ( v5 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( v5 == 0x7FFFFFFFFFFFFFFFLL )
            goto LABEL_9;
          goto LABEL_31;
        }
        v7 = 0x7FFFFFFFFFFFFFFFLL;
      }
    }
    else
    {
      v5 = a1[1];
      v6 = 1;
      v3 = "";
      v7 = v5 + 1;
      if ( v5 == -1 )
      {
        v5 = -1;
        v3 = "";
LABEL_31:
        a1[1] = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_9;
      }
    }
    v23 = *a1;
    v24 = v5;
    if ( a1[2] < v7 )
    {
      v27 = qvector_reserve(a1, v23, v7, 1);
      *a1 = v27;
      v23 = v27;
      v24 = a1[1];
    }
    memset((void *)(v23 + v24), 0, v7 - v24);
    a1[1] = v7;
LABEL_9:
    memcpy((void *)(v5 + *a1), v3, v6);
    ph = get_ph();
    v9 = pack_dd(src, v29, *(unsigned int *)(ph + 4)) - (_QWORD)src;
    v10 = v9;
    if ( !v9 )
      goto LABEL_15;
    v11 = a1[1];
    v12 = v11 + v9;
    if ( __CFADD__(v11, v9) )
    {
      if ( v11 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v11 != 0x7FFFFFFFFFFFFFFFLL )
          a1[1] = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_14;
      }
      v12 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v13 = *a1;
    v14 = a1[1];
    if ( a1[2] < v12 )
    {
      v26 = qvector_reserve(a1, v13, v12, 1);
      *a1 = v26;
      v13 = v26;
      v14 = a1[1];
    }
    memset((void *)(v13 + v14), 0, v12 - v14);
    a1[1] = v12;
LABEL_14:
    memcpy((void *)(v11 + *a1), src, v10);
LABEL_15:
    v15 = getinf_flag(3, 32);
    v16 = pack_dd(src, v29, v15) - (_QWORD)src;
    v17 = v16;
    if ( !v16 )
      return 1;
    v18 = a1[1];
    v19 = v18 + v16;
    if ( __CFADD__(v18, v16) )
    {
      if ( v18 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v18 != 0x7FFFFFFFFFFFFFFFLL )
          a1[1] = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_20;
      }
      v19 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v20 = *a1;
    v21 = a1[1];
    if ( a1[2] < v19 )
    {
      v25 = qvector_reserve(a1, v20, v19, 1);
      *a1 = v25;
      v20 = v25;
      v21 = a1[1];
    }
    memset((void *)(v20 + v21), 0, v19 - v21);
    a1[1] = v19;
LABEL_20:
    memcpy((void *)(v18 + *a1), src, v17);
    return 1;
  }
  if ( (debug & 0x400000) != 0 )
    sub_88B80((__int64)"Invalid input source.\n");
  return 0;
}

