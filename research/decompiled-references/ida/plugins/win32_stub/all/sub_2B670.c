unsigned __int64 __fastcall sub_2B670(__int64 a1, __int16 a2, unsigned int a3)
{
  const char *v3; // r13
  int v6; // r13d
  __int64 v7; // rsi
  __int64 v9; // r8
  __int64 v10; // rsi
  __int64 v11; // r13
  __int64 v12; // r13
  __int64 v13; // r14
  __int64 v14; // r8
  __int64 v15; // r13
  __int64 v16; // r14
  __int64 v17; // r8
  __int64 v18; // r14
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // r14
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rsi
  __m128i si128; // xmm0
  __int64 v27; // r14
  __int64 v28; // r14
  __int64 v29; // r8
  __m128i v30; // xmm0
  __int64 v31; // r14
  __int64 v32; // rsi
  __int64 v33; // rsi
  __int64 v34; // rsi
  __int64 v35; // [rsp+0h] [rbp-68h]
  __int64 v36; // [rsp+0h] [rbp-68h]
  __int64 v37; // [rsp+0h] [rbp-68h]
  __int64 v38; // [rsp+0h] [rbp-68h]
  __int64 v39; // [rsp+8h] [rbp-60h]
  __int64 v40; // [rsp+8h] [rbp-60h]
  __int64 v41; // [rsp+8h] [rbp-60h]
  __int64 v42; // [rsp+10h] [rbp-58h]
  __int128 v43; // [rsp+18h] [rbp-50h]
  unsigned __int64 v44; // [rsp+28h] [rbp-40h]

  v3 = "SSL_connect: ";
  v44 = __readfsqword(0x28u);
  v43 = 0;
  if ( (a2 & 0x1000) == 0 )
  {
    v3 = "SSL_???    : ";
    if ( (a2 & 0x2000) != 0 )
      v3 = "SSL_accept : ";
  }
  v42 = qvector_reserve();
  *(_QWORD *)&v43 = 14;
  *(_QWORD *)v42 = *(_QWORD *)v3;
  *(_QWORD *)(v42 + 5) = *(_QWORD *)(v3 + 5);
  *(_BYTE *)(v42 + 13) = 0;
  if ( (a2 & 1) != 0 )
  {
    v42 = qvector_reserve();
    *(_QWORD *)&v43 = 26;
    strcpy((char *)(v42 + 13), " SSL_CB_LOOP");
    if ( (a2 & 2) == 0 )
    {
LABEL_4:
      if ( (a2 & 4) == 0 )
        goto LABEL_5;
      goto LABEL_20;
    }
  }
  else if ( (a2 & 2) == 0 )
  {
    goto LABEL_4;
  }
  v9 = v43 + 11;
  v10 = v42;
  v11 = v43 - 1;
  if ( *((_QWORD *)&v43 + 1) < (unsigned __int64)(v43 + 12) )
  {
    v42 = qvector_reserve();
    v9 = v43 + 11;
    v10 = v42;
  }
  *(_QWORD *)&v43 = v43 + 12;
  *(_BYTE *)(v10 + v9) = 0;
  qmemcpy((void *)(v42 + v11), " SSL_CB_EXIT", 12);
  if ( (a2 & 4) == 0 )
  {
LABEL_5:
    if ( (a2 & 8) == 0 )
      goto LABEL_6;
    goto LABEL_23;
  }
LABEL_20:
  v12 = v43;
  if ( (_QWORD)v43 )
  {
    v14 = v43 + 11;
    v13 = v43 + 12;
    v33 = v42;
    v12 = v43 - 1;
    if ( *((_QWORD *)&v43 + 1) >= (unsigned __int64)(v43 + 12) )
      goto LABEL_22;
  }
  else
  {
    v13 = 13;
    v14 = 12;
  }
  v36 = v14;
  v42 = qvector_reserve();
  v14 = v36;
  v33 = v42;
LABEL_22:
  *(_QWORD *)&v43 = v13;
  *(_BYTE *)(v33 + v14) = 0;
  qmemcpy((void *)(v42 + v12), " SSL_CB_READ", 12);
  if ( (a2 & 8) == 0 )
  {
LABEL_6:
    v6 = a2 & 0x4000;
    if ( (a2 & 0x4000) == 0 )
      goto LABEL_7;
    goto LABEL_26;
  }
LABEL_23:
  v15 = v43;
  if ( (_QWORD)v43 )
  {
    v17 = v43 + 12;
    v16 = v43 + 13;
    v32 = v42;
    v15 = v43 - 1;
    if ( *((_QWORD *)&v43 + 1) >= (unsigned __int64)(v43 + 13) )
      goto LABEL_25;
  }
  else
  {
    v16 = 14;
    v17 = 13;
  }
  v35 = v17;
  v42 = qvector_reserve();
  v17 = v35;
  v32 = v42;
LABEL_25:
  *(_QWORD *)&v43 = v16;
  *(_BYTE *)(v32 + v17) = 0;
  qmemcpy((void *)(v42 + v15), " SSL_CB_WRITE", 13);
  v6 = a2 & 0x4000;
  if ( (a2 & 0x4000) == 0 )
  {
LABEL_7:
    if ( (a2 & 0x10) == 0 )
      goto LABEL_8;
    goto LABEL_29;
  }
LABEL_26:
  v18 = v43;
  if ( (_QWORD)v43 )
  {
    v19 = v43 + 12;
    v20 = v43 + 13;
    v21 = v42;
    v18 = v43 - 1;
    if ( *((_QWORD *)&v43 + 1) >= (unsigned __int64)(v43 + 13) )
      goto LABEL_28;
  }
  else
  {
    v20 = 14;
    v19 = 13;
  }
  v41 = v19;
  v38 = v20;
  v42 = qvector_reserve();
  v19 = v41;
  v21 = v42;
  v20 = v38;
LABEL_28:
  *(_QWORD *)&v43 = v20;
  *(_BYTE *)(v21 + v19) = 0;
  qmemcpy((void *)(v42 + v18), " SSL_CB_ALERT", 13);
  if ( (a2 & 0x10) == 0 )
  {
LABEL_8:
    if ( (a2 & 0x20) == 0 )
      goto LABEL_9;
    goto LABEL_32;
  }
LABEL_29:
  v22 = v43;
  if ( (_QWORD)v43 )
  {
    v23 = v43 + 22;
    v24 = v43 + 23;
    v25 = v42;
    v22 = v43 - 1;
    if ( *((_QWORD *)&v43 + 1) >= (unsigned __int64)(v43 + 23) )
      goto LABEL_31;
  }
  else
  {
    v24 = 24;
    v23 = 23;
  }
  v40 = v23;
  v37 = v24;
  v42 = qvector_reserve();
  v23 = v40;
  v25 = v42;
  v24 = v37;
LABEL_31:
  si128 = _mm_load_si128((const __m128i *)&xmmword_30620);
  *(_QWORD *)&v43 = v24;
  *(_BYTE *)(v25 + v23) = 0;
  v27 = v42 + v22;
  *(__m128i *)v27 = si128;
  *(_QWORD *)(v27 + 15) = 0x54524154535F454BLL;
  if ( (a2 & 0x20) == 0 )
    goto LABEL_9;
LABEL_32:
  v28 = v43;
  if ( !(_QWORD)v43 )
  {
    v29 = 22;
LABEL_40:
    v39 = v29;
    v42 = qvector_reserve();
    v29 = v39;
    v34 = v42;
    goto LABEL_34;
  }
  v29 = v43 + 21;
  v34 = v42;
  v28 = v43 - 1;
  if ( *((_QWORD *)&v43 + 1) < (unsigned __int64)(v43 + 22) )
    goto LABEL_40;
LABEL_34:
  v30 = _mm_load_si128((const __m128i *)&xmmword_30620);
  *(_BYTE *)(v34 + v29) = 0;
  v31 = v42 + v28;
  *(__m128i *)v31 = v30;
  *(_QWORD *)(v31 + 14) = 0x454E4F445F454B41LL;
LABEL_9:
  sub_B690();
  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(qword_3BC20 + 304))(a1, a1);
  sub_B690();
  if ( v6 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(qword_3BC20 + 200))(a3, v7);
    (*(void (__fastcall **)(_QWORD))(qword_3BC20 + 192))(a3);
    sub_B690();
  }
  if ( v42 )
    qfree();
  return v44 - __readfsqword(0x28u);
}

