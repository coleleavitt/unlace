__int64 __fastcall sub_E410(
        __int64 a1,
        char *a2,
        char **a3,
        int a4,
        int a5,
        int a6,
        char a7,
        int a8,
        char *a9,
        unsigned __int16 a10,
        int a11,
        __int64 a12,
        __int64 a13,
        int a14,
        int a15,
        int a16,
        __int64 a17,
        __int64 a18,
        void *a19,
        int a20,
        int a21,
        __int64 a22)
{
  __int64 v22; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // r14d
  __int64 v28; // rax
  unsigned int v29; // ebp
  _QWORD **v30; // rbx
  void *v31; // rdi
  _QWORD **v32; // rbx
  void *v33; // rdi
  char v35; // al
  __int64 v36; // rax
  __int64 v37; // r15
  _QWORD *v38; // [rsp+0h] [rbp-108h]
  char *v40; // [rsp+10h] [rbp-F8h] BYREF
  __m128i v41; // [rsp+18h] [rbp-F0h]
  char v42; // [rsp+28h] [rbp-E0h]
  int v43; // [rsp+2Ch] [rbp-DCh]
  __int128 v44; // [rsp+30h] [rbp-D8h]
  __int64 v45; // [rsp+40h] [rbp-C8h]
  __int64 v46; // [rsp+48h] [rbp-C0h]
  int v47; // [rsp+50h] [rbp-B8h]
  int v48; // [rsp+60h] [rbp-A8h] BYREF
  void *v49; // [rsp+68h] [rbp-A0h]
  int *v50; // [rsp+70h] [rbp-98h]
  int *v51; // [rsp+78h] [rbp-90h]
  __int64 v52; // [rsp+80h] [rbp-88h]
  int v53; // [rsp+90h] [rbp-78h] BYREF
  void *v54; // [rsp+98h] [rbp-70h]
  int *v55; // [rsp+A0h] [rbp-68h]
  int *v56; // [rsp+A8h] [rbp-60h]
  __int64 v57; // [rsp+B0h] [rbp-58h]
  char v58; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int64 v59; // [rsp+C8h] [rbp-40h]

  v38 = a2;
  v59 = __readfsqword(0x28u);
  v50 = &v48;
  v51 = &v48;
  v41 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v58, (__m128i)(unsigned __int64)&v40);
  v40 = a9;
  v42 = 0;
  v43 = 0;
  v45 = (__int64)a9;
  v46 = -1;
  v47 = 0;
  v48 = 0;
  v49 = nullptr;
  v52 = 0;
  v44 = 0;
  v53 = 0;
  v54 = nullptr;
  v55 = &v53;
  v56 = &v53;
  v57 = 0;
  *(_QWORD *)&v44 = get_func(a9);
  if ( !(_QWORD)v44 )
  {
    *((_QWORD *)&v44 + 1) = getseg(v45);
    if ( !*((_QWORD *)&v44 + 1) )
    {
      if ( under_debugger )
        BUG();
      v36 = interr(10183);
      goto LABEL_52;
    }
  }
  v27 = 0;
  v22 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_3:
          if ( !(unsigned int)sub_DBC0((__int64 *)&v40, a2, v24, v25, v26, 0.0)
            || (a2 = v40, (int)decode_insn(&a7, v40) <= 0) )
          {
LABEL_11:
            v29 = 0;
            goto LABEL_12;
          }
          v28 = a10;
          if ( a10 <= 0xBAu )
            break;
LABEL_10:
          a2 = &a7;
          if ( (unsigned __int8)sub_ABE0(a1, (__int64)&a7, a4, -1) )
            goto LABEL_11;
        }
        if ( a10 <= 0xA2u )
          break;
        LOWORD(v28) = a10 - 163;
        switch ( v28 )
        {
          case 0LL:
            goto LABEL_9;
          case 10LL:
            if ( HIWORD(a17) != a4 || BYTE1(a12) != 5 )
              goto LABEL_10;
            if ( v27 == 2 )
              goto LABEL_11;
            v22 += a13;
            v27 = 1;
            goto LABEL_3;
          case 15LL:
            if ( HIWORD(a17) != a4 || BYTE1(a12) != 5 )
              goto LABEL_10;
            if ( v27 == 1 )
              goto LABEL_11;
            v22 |= a13;
            v27 = 2;
            goto LABEL_3;
          case 18LL:
            if ( HIWORD(a12) != a4 )
              goto LABEL_10;
            v36 = 0;
            goto LABEL_25;
          case 23LL:
            if ( BYTE1(a17) != 1 )
              goto LABEL_9;
            if ( a4 != HIWORD(a17) )
              goto LABEL_10;
            v35 = BYTE1(a12);
            if ( BYTE1(a12) != 1 )
              goto LABEL_18;
            a4 = HIWORD(a12);
            break;
          default:
            goto LABEL_10;
        }
      }
      if ( a10 != 88 )
        break;
      if ( HIWORD(a22) != a4 || BYTE1(a17) != 5 )
        goto LABEL_10;
      if ( v27 == 1 )
        goto LABEL_11;
      a4 = HIWORD(a12);
      v22 |= a18;
      v27 = 2;
    }
    if ( a10 == 106 )
      break;
    if ( a10 != 1 || HIWORD(a22) != a4 || BYTE1(a17) != 5 )
      goto LABEL_10;
    if ( v27 == 2 )
      goto LABEL_11;
    a4 = HIWORD(a12);
    v22 += a18;
    v27 = 1;
  }
LABEL_9:
  if ( HIWORD(a17) != a4 )
    goto LABEL_10;
  v35 = BYTE1(a12);
LABEL_18:
  if ( v35 != 5 )
    goto LABEL_10;
  v36 = a13;
LABEL_25:
  if ( v27 != 1 )
  {
    v37 = v36 | v22;
    if ( v27 == 2 )
      v36 = v37;
    *v38 = v36;
    goto LABEL_29;
  }
LABEL_52:
  *v38 = v22 + v36;
LABEL_29:
  v29 = 1;
  *a3 = a9;
  *v38 &= *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
LABEL_12:
  v30 = (_QWORD **)v54;
  if ( v54 )
  {
    do
    {
      sub_A760(v30[3]);
      v31 = v30;
      v30 = (_QWORD **)v30[2];
      operator delete(v31, 0x30u);
    }
    while ( v30 );
  }
  v32 = (_QWORD **)v49;
  if ( v49 )
  {
    do
    {
      sub_A930(v32[3]);
      v33 = v32;
      v32 = (_QWORD **)v32[2];
      operator delete(v33, 0x30u);
    }
    while ( v32 );
  }
  return v29;
}

