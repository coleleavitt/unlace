__int64 __fastcall sub_AD00(
        __int64 a1,
        char *a2,
        int a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        int a8,
        char *a9,
        unsigned __int16 a10,
        int a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        int a15,
        int a16,
        __int64 a17)
{
  __int64 v17; // r14
  int v18; // r15d
  __int64 *v19; // r13
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r9
  unsigned int v30; // ebp
  _QWORD **v31; // rbx
  void *v32; // rdi
  _QWORD **v33; // rbx
  void *v34; // rdi
  char v36; // al
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // r14
  __int64 v40; // rax
  unsigned __int64 *v41; // rax
  __int64 v42; // [rsp+0h] [rbp-268h]
  void *v43; // [rsp+8h] [rbp-260h]
  char *v44; // [rsp+10h] [rbp-258h] BYREF
  __m128i v45; // [rsp+18h] [rbp-250h]
  char v46; // [rsp+28h] [rbp-240h]
  int v47; // [rsp+2Ch] [rbp-23Ch]
  __int128 v48; // [rsp+30h] [rbp-238h]
  __int64 v49; // [rsp+40h] [rbp-228h]
  __int64 v50; // [rsp+48h] [rbp-220h]
  int v51; // [rsp+50h] [rbp-218h]
  int v52; // [rsp+60h] [rbp-208h] BYREF
  void *v53; // [rsp+68h] [rbp-200h]
  int *v54; // [rsp+70h] [rbp-1F8h]
  int *v55; // [rsp+78h] [rbp-1F0h]
  __int64 v56; // [rsp+80h] [rbp-1E8h]
  int v57; // [rsp+90h] [rbp-1D8h] BYREF
  void *v58; // [rsp+98h] [rbp-1D0h]
  int *v59; // [rsp+A0h] [rbp-1C8h]
  int *v60; // [rsp+A8h] [rbp-1C0h]
  __int64 v61; // [rsp+B0h] [rbp-1B8h]
  char v62; // [rsp+B8h] [rbp-1B0h] BYREF
  _BYTE v63[360]; // [rsp+C0h] [rbp-1A8h] BYREF
  unsigned __int64 v64; // [rsp+228h] [rbp-40h] BYREF

  v19 = (__int64 *)a2;
  v43 = a4;
  v64 = __readfsqword(0x28u);
  v54 = &v52;
  v55 = &v52;
  v45 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v62, (__m128i)(unsigned __int64)&v44);
  v46 = 0;
  v47 = 0;
  v50 = -1;
  v44 = a9;
  v49 = (__int64)a9;
  v51 = 0;
  v52 = 0;
  v53 = nullptr;
  v56 = 0;
  v57 = 0;
  v48 = 0;
  v58 = nullptr;
  v59 = &v57;
  v60 = &v57;
  v61 = 0;
  *(_QWORD *)&v48 = get_func();
  if ( !(_QWORD)v48 )
  {
    *((_QWORD *)&v48 + 1) = getseg(v49);
    if ( !*((_QWORD *)&v48 + 1) )
    {
      if ( under_debugger )
        BUG();
      interr(10183);
LABEL_50:
      *v19 = a13;
      goto LABEL_25;
    }
  }
  v18 = 0;
  v17 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !(unsigned int)sub_A480((__int64 *)&v44, (unsigned __int64)a2, v22, v23, v24) )
        goto LABEL_11;
      a2 = v44;
      if ( (int)decode_insn(&a7, v44, v25, v26, v27, v28, 0.0, v42, v43, v44) <= 0 )
        goto LABEL_11;
      if ( BYTE1(a17) != 1 || a3 != HIWORD(a17) )
        goto LABEL_3;
      if ( a10 > 0x42u )
        break;
      if ( a10 <= 0x24u )
      {
        if ( a10 != 1 || BYTE1(a12) != 5 )
          goto LABEL_3;
        if ( v18 == 2 )
          goto LABEL_11;
        v17 += a13;
        v18 = 1;
      }
      else
      {
        switch ( a10 )
        {
          case '%':
          case ',':
            if ( BYTE1(a12) != 1 )
              goto LABEL_3;
            a3 = HIWORD(a12);
            continue;
          case '0':
            goto LABEL_35;
          case '1':
          case '2':
            v36 = BYTE1(a12);
            goto LABEL_18;
          case '9':
            v36 = BYTE1(a12);
            if ( BYTE1(a12) == 2 )
              goto LABEL_37;
LABEL_18:
            if ( v36 != 5 )
              goto LABEL_19;
            goto LABEL_50;
          case 'B':
            if ( BYTE1(a12) != 5 )
              goto LABEL_3;
            if ( v18 == 1 )
              goto LABEL_11;
            v17 |= a13;
            v18 = 2;
            break;
          default:
            goto LABEL_3;
        }
      }
    }
    if ( (unsigned __int16)(a10 - 159) > 1u )
      goto LABEL_3;
LABEL_35:
    v36 = BYTE1(a12);
    if ( BYTE1(a12) == 5 )
      goto LABEL_50;
    if ( BYTE1(a12) == 2 )
    {
LABEL_37:
      *v19 = a14;
      goto LABEL_25;
    }
LABEL_19:
    if ( v36 == 4 )
      break;
LABEL_3:
    a2 = &a7;
    if ( sub_94B0(a1, (__int64)&a7, a3, -1, v24, v29) )
      goto LABEL_11;
  }
  v37 = netnode_altval(*(_QWORD *)(a1 + 248), a9, 321);
  v38 = node2ea(v37);
  if ( !v38 )
  {
LABEL_11:
    v30 = 0;
    goto LABEL_12;
  }
  switch ( a10 )
  {
    case '2':
      *v19 = (unsigned int)get_dword(v38);
      break;
    case '9':
      *v19 = v38;
      break;
    case '1':
      *v19 = (unsigned __int16)get_word(v38);
      break;
  }
LABEL_25:
  if ( v18 == 1 )
  {
    v39 = *v19 + v17;
    *v19 = v39;
    if ( !v43 )
      goto LABEL_31;
    goto LABEL_52;
  }
  if ( v18 != 2 )
  {
    if ( v43 )
    {
      qmemcpy(v63, &a7, sizeof(v63));
      goto LABEL_29;
    }
    goto LABEL_30;
  }
  v39 = *v19 | v17;
  *v19 = v39;
  if ( v43 )
  {
LABEL_52:
    v41 = (unsigned __int64 *)&v63[40];
    *(_QWORD *)&v63[24] = 0;
    *(_QWORD *)&v63[32] = 0;
    memset(v63, 255, 24);
    do
    {
      *(_WORD *)v41 = 0;
      v41 += 5;
      *((_WORD *)v41 - 19) = 0;
      *((_WORD *)v41 - 18) = 0;
      *((_DWORD *)v41 - 2) = 0;
      *((_WORD *)v41 - 17) = 0;
      *((_OWORD *)v41 - 2) = 0;
      *(v41 - 2) = 0;
    }
    while ( &v64 != v41 );
LABEL_29:
    qmemcpy(v43, v63, 0x168u);
LABEL_30:
    v39 = *v19;
  }
LABEL_31:
  v40 = *(_QWORD *)(a1 + 32);
  v30 = 1;
  *v19 = *(_QWORD *)(v40 + 16) & v39;
LABEL_12:
  v31 = (_QWORD **)v58;
  if ( v58 )
  {
    do
    {
      sub_8B70(v31[3]);
      v32 = v31;
      v31 = (_QWORD **)v31[2];
      operator delete(v32, 0x30u);
    }
    while ( v31 );
  }
  v33 = (_QWORD **)v53;
  if ( v53 )
  {
    do
    {
      sub_8D40(v33[3]);
      v34 = v33;
      v33 = (_QWORD **)v33[2];
      operator delete(v34, 0x30u);
    }
    while ( v33 );
  }
  return v30;
}
