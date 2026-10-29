__int64 __fastcall sub_13510(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        int a6,
        char a7,
        int a8,
        __int64 a9,
        unsigned __int16 a10,
        int a11,
        __int64 a12,
        int a13,
        int a14,
        int a15,
        int a16,
        __int64 a17,
        __int64 a18,
        void *a19,
        int a20,
        int a21)
{
  unsigned int v21; // r15d
  __m128i v22; // xmm0
  int v24; // ebx
  unsigned __int8 v27; // al
  __int64 *v28; // rcx
  __int64 v29; // rax
  int v30; // edx
  _QWORD **v31; // rbx
  void *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rdx
  char v35; // si
  __int64 v36; // rdi
  __int64 v37; // rdx
  unsigned __int8 v38; // [rsp+Fh] [rbp-F9h]
  __int64 v39; // [rsp+10h] [rbp-F8h] BYREF
  __m128i v40; // [rsp+18h] [rbp-F0h]
  char v41; // [rsp+28h] [rbp-E0h]
  int v42; // [rsp+2Ch] [rbp-DCh]
  __int128 v43; // [rsp+30h] [rbp-D8h]
  __int64 v44; // [rsp+40h] [rbp-C8h]
  __int64 v45; // [rsp+48h] [rbp-C0h]
  int v46; // [rsp+50h] [rbp-B8h]
  int v47; // [rsp+60h] [rbp-A8h] BYREF
  void *v48; // [rsp+68h] [rbp-A0h]
  int *v49; // [rsp+70h] [rbp-98h]
  int *v50; // [rsp+78h] [rbp-90h]
  __int64 v51; // [rsp+80h] [rbp-88h]
  int v52; // [rsp+90h] [rbp-78h] BYREF
  _QWORD *v53; // [rsp+98h] [rbp-70h]
  int *v54; // [rsp+A0h] [rbp-68h]
  int *v55; // [rsp+A8h] [rbp-60h]
  __int64 v56; // [rsp+B0h] [rbp-58h]
  char v57; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int64 v58; // [rsp+C8h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  v22 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v57, (__m128i)(unsigned __int64)&v39);
  if ( a4 > 0x12 )
    return 0;
  v24 = a4;
  v27 = *((_BYTE *)qword_1B500 + (int)a4);
  v40 = v22;
  v39 = a9;
  v38 = v27;
  v49 = &v47;
  v50 = &v47;
  v41 = 0;
  v42 = 0;
  v44 = a9;
  v45 = -1;
  v46 = 0;
  v47 = 0;
  v48 = nullptr;
  v51 = 0;
  v52 = 0;
  v53 = nullptr;
  v54 = &v52;
  v55 = &v52;
  v56 = 0;
  v43 = 0;
  *(_QWORD *)&v43 = get_func();
  if ( !(_QWORD)v43 )
  {
    v33 = getseg();
    *((_QWORD *)&v43 + 1) = v33;
    if ( !v33 )
    {
      if ( under_debugger )
        BUG();
      v29 = interr();
      goto LABEL_44;
    }
  }
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !(unsigned int)sub_12CA0((__int64)&v39) || (int)decode_insn() <= 0 )
      {
LABEL_30:
        v21 = 0;
        goto LABEL_31;
      }
      if ( BYTE1(a12) != 1 )
        goto LABEL_6;
      v29 = HIWORD(a12);
      if ( HIWORD(a12) )
      {
        if ( (unsigned int)HIWORD(a12) - 3 <= 7 )
        {
LABEL_44:
          if ( v24 == 2 )
            goto LABEL_6;
          LODWORD(v28) = v29;
LABEL_35:
          v30 = v24 - 8;
          if ( (unsigned int)(v24 - 11) >= 8 )
            v30 = v24;
          goto LABEL_14;
        }
        if ( HIWORD(a12) == 2 )
        {
          if ( v24 == 2 )
            goto LABEL_15;
          if ( (unsigned int)(v24 - 11) <= 7 )
            goto LABEL_6;
          v30 = v24;
          LODWORD(v28) = 0;
          goto LABEL_14;
        }
        if ( (unsigned int)HIWORD(a12) - 11 <= 7 )
        {
          LODWORD(v28) = HIWORD(a12) - 8;
          if ( v24 == 2 )
            goto LABEL_6;
          goto LABEL_35;
        }
        if ( HIWORD(a12) != 1 || v24 == 2 || (unsigned int)(v24 - 11) <= 7 )
          goto LABEL_6;
        LODWORD(v28) = 1;
        v30 = v24;
      }
      else
      {
        if ( v24 == 2 )
          goto LABEL_15;
        if ( (unsigned int)(v24 - 11) <= 7 )
          goto LABEL_6;
        LODWORD(v28) = 0;
        v30 = v24;
      }
LABEL_14:
      if ( v30 != (_DWORD)v28 )
        goto LABEL_6;
LABEL_15:
      v28 = qword_1B500;
      if ( *((_BYTE *)qword_1B500 + v29) < *((_BYTE *)qword_1B500 + v24) )
        goto LABEL_6;
      LODWORD(v28) = a10;
      if ( (unsigned __int16)(a10 - 78) > 6u )
        goto LABEL_6;
      v28 = &qword_48 + 1;
      LOBYTE(v21) = _bittest64((const __int64 *)&v28, (unsigned int)a10 - 78);
      if ( !(_BYTE)v21 )
        goto LABEL_6;
      if ( BYTE1(a17) == 5 )
        break;
      if ( BYTE1(a17) != 1 || HIWORD(a17) > 0x12u || HIBYTE(a21) )
        goto LABEL_6;
      v24 = HIWORD(a17);
    }
    v34 = a18;
    v35 = HIBYTE(a21);
    *a2 = a18;
    if ( !v35 )
      goto LABEL_51;
    LODWORD(v28) = (v35 - 48) & 0xEF;
    if ( ((v35 - 48) & 0xEF) != 0 )
      break;
LABEL_6:
    if ( (unsigned __int8)sub_127D0(a1, (__int64)&a7, v24, (unsigned int)v28) )
      goto LABEL_30;
  }
  v36 = v34 << 16;
  v37 = v34 << (v35 & 0xF);
  if ( v35 == 32 )
    v37 = v36;
  *a2 = v37;
LABEL_51:
  if ( v38 < *((_BYTE *)qword_1B500 + v29) )
    *a2 = (unsigned __int16)*a2;
  *a3 = a9;
LABEL_31:
  sub_10560(v53);
  v31 = (_QWORD **)v48;
  if ( v48 )
  {
    do
    {
      sub_10730(v31[3]);
      v32 = v31;
      v31 = (_QWORD **)v31[2];
      operator delete(v32, 0x30u);
    }
    while ( v31 );
  }
  return v21;
}

