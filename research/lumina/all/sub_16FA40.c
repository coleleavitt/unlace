unsigned __int64 __fastcall sub_16FA40(const void *a1, int a2, unsigned int a3)
{
  const char *v3; // r13
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _BYTE *v8; // rsi
  int v9; // r13d
  const char *v10; // r8
  const char *v11; // rax
  const char *v12; // rbx
  const char *v13; // rax
  __int64 v15; // r13
  __int64 v16; // r14
  __int64 v17; // r8
  __int64 v18; // r13
  __int64 v19; // r8
  __int64 v20; // r14
  _BYTE *v21; // rsi
  __int64 v22; // r13
  _BYTE *v23; // rsi
  __int64 v24; // r14
  __int64 v25; // r8
  __int64 v26; // r13
  _BYTE *v27; // rsi
  __int64 v28; // r14
  __int64 v29; // r8
  __int64 v30; // r14
  __int64 v31; // r8
  __int64 v32; // rdx
  _BYTE *v33; // rsi
  __int64 v34; // r14
  __int64 v35; // r8
  __int64 v36; // rdx
  _BYTE *v37; // rsi
  __m128i si128; // xmm0
  char *v39; // r14
  __int64 v40; // r14
  _BYTE *v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // r8
  __m128i v44; // xmm0
  char *v45; // r14
  __int64 v46; // [rsp+0h] [rbp-68h]
  __int64 v47; // [rsp+0h] [rbp-68h]
  __int64 v48; // [rsp+0h] [rbp-68h]
  __int64 v49; // [rsp+0h] [rbp-68h]
  __int64 v50; // [rsp+0h] [rbp-68h]
  __int64 v51; // [rsp+0h] [rbp-68h]
  __int64 v52; // [rsp+0h] [rbp-68h]
  __int64 v53; // [rsp+8h] [rbp-60h]
  __int64 v54; // [rsp+8h] [rbp-60h]
  __int64 v55; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v57; // [rsp+18h] [rbp-50h]
  unsigned __int64 v58; // [rsp+28h] [rbp-40h]

  v3 = "SSL_connect: ";
  v58 = __readfsqword(0x28u);
  v57 = 0;
  ptr = nullptr;
  if ( (a2 & 0x1000) == 0 )
  {
    v3 = "SSL_???    : ";
    if ( (a2 & 0x2000) != 0 )
      v3 = "SSL_accept : ";
  }
  v6 = (_QWORD *)sub_1987B0(&ptr, 0, 14, 1);
  v7 = *(_QWORD *)v3;
  ptr = v6;
  *(_QWORD *)&v57 = 14;
  *v6 = v7;
  *(_QWORD *)((char *)v6 + 5) = *(_QWORD *)(v3 + 5);
  v8 = ptr;
  *((_BYTE *)ptr + 13) = 0;
  if ( (a2 & 1) == 0 )
  {
    if ( (a2 & 2) == 0 )
      goto LABEL_4;
    goto LABEL_21;
  }
  v15 = v57;
  if ( (_QWORD)v57 )
  {
    v17 = v57 + 11;
    v16 = v57 + 12;
    v15 = v57 - 1;
    if ( *((_QWORD *)&v57 + 1) >= (unsigned __int64)(v57 + 12) )
      goto LABEL_20;
  }
  else
  {
    v16 = 13;
    v17 = 12;
    if ( *((_QWORD *)&v57 + 1) >= 0xDu )
      goto LABEL_20;
  }
  v48 = v17;
  ptr = (void *)sub_1987B0(&ptr, v8, v16, 1);
  v17 = v48;
  v8 = ptr;
LABEL_20:
  *(_QWORD *)&v57 = v16;
  v8[v17] = 0;
  qmemcpy((char *)ptr + v15, " SSL_CB_LOOP", 12);
  if ( (a2 & 2) == 0 )
  {
LABEL_4:
    if ( (a2 & 4) == 0 )
      goto LABEL_5;
    goto LABEL_24;
  }
LABEL_21:
  v18 = v57;
  if ( (_QWORD)v57 )
  {
    v19 = v57 + 11;
    v20 = v57 + 12;
    v21 = ptr;
    v18 = v57 - 1;
    if ( *((_QWORD *)&v57 + 1) >= (unsigned __int64)(v57 + 12) )
      goto LABEL_23;
  }
  else
  {
    v21 = ptr;
    v20 = 13;
    v19 = 12;
    if ( *((_QWORD *)&v57 + 1) >= 0xDu )
      goto LABEL_23;
  }
  v51 = v19;
  ptr = (void *)sub_1987B0(&ptr, v21, v20, 1);
  v19 = v51;
  v21 = ptr;
LABEL_23:
  *(_QWORD *)&v57 = v20;
  v21[v19] = 0;
  qmemcpy((char *)ptr + v18, " SSL_CB_EXIT", 12);
  if ( (a2 & 4) == 0 )
  {
LABEL_5:
    if ( (a2 & 8) == 0 )
      goto LABEL_6;
    goto LABEL_27;
  }
LABEL_24:
  v22 = v57;
  if ( (_QWORD)v57 )
  {
    v25 = v57 + 11;
    v24 = v57 + 12;
    v23 = ptr;
    v22 = v57 - 1;
    if ( *((_QWORD *)&v57 + 1) >= (unsigned __int64)(v57 + 12) )
      goto LABEL_26;
  }
  else
  {
    v23 = ptr;
    v24 = 13;
    v25 = 12;
    if ( *((_QWORD *)&v57 + 1) >= 0xDu )
      goto LABEL_26;
  }
  v47 = v25;
  ptr = (void *)sub_1987B0(&ptr, v23, v24, 1);
  v25 = v47;
  v23 = ptr;
LABEL_26:
  *(_QWORD *)&v57 = v24;
  v23[v25] = 0;
  qmemcpy((char *)ptr + v22, " SSL_CB_READ", 12);
  if ( (a2 & 8) == 0 )
  {
LABEL_6:
    v9 = a2 & 0x4000;
    if ( (a2 & 0x4000) == 0 )
      goto LABEL_7;
    goto LABEL_30;
  }
LABEL_27:
  v26 = v57;
  if ( (_QWORD)v57 )
  {
    v29 = v57 + 12;
    v28 = v57 + 13;
    v27 = ptr;
    v26 = v57 - 1;
    if ( *((_QWORD *)&v57 + 1) >= (unsigned __int64)(v57 + 13) )
      goto LABEL_29;
  }
  else
  {
    v27 = ptr;
    v28 = 14;
    v29 = 13;
    if ( *((_QWORD *)&v57 + 1) >= 0xEu )
      goto LABEL_29;
  }
  v46 = v29;
  ptr = (void *)sub_1987B0(&ptr, v27, v28, 1);
  v29 = v46;
  v27 = ptr;
LABEL_29:
  *(_QWORD *)&v57 = v28;
  v27[v29] = 0;
  qmemcpy((char *)ptr + v26, " SSL_CB_WRITE", 13);
  v9 = a2 & 0x4000;
  if ( (a2 & 0x4000) == 0 )
  {
LABEL_7:
    if ( (a2 & 0x10) == 0 )
      goto LABEL_8;
    goto LABEL_33;
  }
LABEL_30:
  v30 = v57;
  if ( (_QWORD)v57 )
  {
    v31 = v57 + 12;
    v32 = v57 + 13;
    v33 = ptr;
    v30 = v57 - 1;
    if ( *((_QWORD *)&v57 + 1) >= (unsigned __int64)(v57 + 13) )
      goto LABEL_32;
  }
  else
  {
    v33 = ptr;
    v32 = 14;
    v31 = 13;
    if ( *((_QWORD *)&v57 + 1) >= 0xEu )
      goto LABEL_32;
  }
  v55 = v31;
  v52 = v32;
  ptr = (void *)sub_1987B0(&ptr, v33, v32, 1);
  v31 = v55;
  v33 = ptr;
  v32 = v52;
LABEL_32:
  *(_QWORD *)&v57 = v32;
  v33[v31] = 0;
  qmemcpy((char *)ptr + v30, " SSL_CB_ALERT", 13);
  if ( (a2 & 0x10) == 0 )
  {
LABEL_8:
    if ( (a2 & 0x20) == 0 )
      goto LABEL_9;
    goto LABEL_36;
  }
LABEL_33:
  v34 = v57;
  if ( (_QWORD)v57 )
  {
    v35 = v57 + 22;
    v36 = v57 + 23;
    v37 = ptr;
    v34 = v57 - 1;
    if ( *((_QWORD *)&v57 + 1) >= (unsigned __int64)(v57 + 23) )
      goto LABEL_35;
  }
  else
  {
    v37 = ptr;
    v36 = 24;
    v35 = 23;
    if ( *((_QWORD *)&v57 + 1) >= 0x18u )
      goto LABEL_35;
  }
  v54 = v35;
  v50 = v36;
  ptr = (void *)sub_1987B0(&ptr, v37, v36, 1);
  v35 = v54;
  v37 = ptr;
  v36 = v50;
LABEL_35:
  si128 = _mm_load_si128((const __m128i *)&xmmword_1B7170);
  *(_QWORD *)&v57 = v36;
  v37[v35] = 0;
  v39 = (char *)ptr + v34;
  *(__m128i *)v39 = si128;
  *(_QWORD *)(v39 + 15) = 0x54524154535F454BLL;
  if ( (a2 & 0x20) == 0 )
    goto LABEL_9;
LABEL_36:
  v40 = v57;
  if ( (_QWORD)v57 )
  {
    v43 = v57 + 21;
    v42 = v57 + 22;
    v41 = ptr;
    v40 = v57 - 1;
    if ( *((_QWORD *)&v57 + 1) >= (unsigned __int64)(v57 + 22) )
      goto LABEL_38;
LABEL_46:
    v53 = v43;
    v49 = v42;
    ptr = (void *)sub_1987B0(&ptr, v41, v42, 1);
    v43 = v53;
    v41 = ptr;
    v42 = v49;
    goto LABEL_38;
  }
  v41 = ptr;
  v42 = 23;
  v43 = 22;
  if ( *((_QWORD *)&v57 + 1) < 0x17u )
    goto LABEL_46;
LABEL_38:
  v44 = _mm_load_si128((const __m128i *)&xmmword_1B7170);
  *(_QWORD *)&v57 = v42;
  v41[v43] = 0;
  v45 = (char *)ptr + v40;
  *(__m128i *)v45 = v44;
  *(_QWORD *)(v45 + 14) = 0x454E4F445F454B41LL;
LABEL_9:
  v10 = s1;
  if ( (_QWORD)v57 )
    v10 = (const char *)ptr;
  sub_4BC40((__int64 (__fastcall ***)(_QWORD))"TLS: info_callback(%p, %08X, %08X): %s\n", a1, a2, a3, v10);
  v11 = (const char *)(*(__int64 (__fastcall **)(const void *))(qword_242700 + 304))(a1);
  sub_4BC40((__int64 (__fastcall ***)(_QWORD))"TLS:  [state] %s\n", v11);
  if ( v9 )
  {
    v12 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(qword_242700 + 200))(a3);
    v13 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(qword_242700 + 192))(a3);
    sub_4BC40((__int64 (__fastcall ***)(_QWORD))"TLS:  %s: %s\n", v12, v13);
  }
  if ( ptr )
  {
    *(_QWORD *)&v57 = 0;
    j__free(ptr);
  }
  return v58 - __readfsqword(0x28u);
}
