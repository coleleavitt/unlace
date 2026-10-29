unsigned __int64 __fastcall sub_2A690(const void *a1, int a2, unsigned int a3)
{
  const char *v3; // r13
  int v6; // r13d
  const char *v7; // r8
  const char *v8; // rax
  const char *v9; // rbx
  const char *v10; // rax
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // r13
  __int64 v15; // r13
  __int64 v16; // r14
  __int64 v17; // r8
  __int64 v18; // r13
  __int64 v19; // r14
  __int64 v20; // r8
  __int64 v21; // r14
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // r14
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rsi
  __m128i si128; // xmm0
  __int64 v30; // r14
  __int64 v31; // r14
  __int64 v32; // rdx
  __int64 v33; // r8
  __m128i v34; // xmm0
  __int64 v35; // r14
  __int64 v36; // rsi
  __int64 v37; // rsi
  __int64 v38; // rsi
  __int64 v39; // [rsp+0h] [rbp-68h]
  __int64 v40; // [rsp+0h] [rbp-68h]
  __int64 v41; // [rsp+0h] [rbp-68h]
  __int64 v42; // [rsp+0h] [rbp-68h]
  __int64 v43; // [rsp+0h] [rbp-68h]
  __int64 v44; // [rsp+8h] [rbp-60h]
  __int64 v45; // [rsp+8h] [rbp-60h]
  __int64 v46; // [rsp+8h] [rbp-60h]
  __int64 v47; // [rsp+10h] [rbp-58h]
  __int128 v48; // [rsp+18h] [rbp-50h]
  unsigned __int64 v49; // [rsp+28h] [rbp-40h]

  v3 = "SSL_connect: ";
  v49 = __readfsqword(0x28u);
  v48 = 0;
  if ( (a2 & 0x1000) == 0 )
  {
    v3 = "SSL_???    : ";
    if ( (a2 & 0x2000) != 0 )
      v3 = "SSL_accept : ";
  }
  v47 = qvector_reserve();
  *(_QWORD *)&v48 = 14;
  *(_QWORD *)v47 = *(_QWORD *)v3;
  *(_QWORD *)(v47 + 5) = *(_QWORD *)(v3 + 5);
  *(_BYTE *)(v47 + 13) = 0;
  if ( (a2 & 1) != 0 )
  {
    v47 = qvector_reserve();
    *(_QWORD *)&v48 = 26;
    strcpy((char *)(v47 + 13), " SSL_CB_LOOP");
    if ( (a2 & 2) == 0 )
    {
LABEL_4:
      if ( (a2 & 4) == 0 )
        goto LABEL_5;
      goto LABEL_22;
    }
  }
  else if ( (a2 & 2) == 0 )
  {
    goto LABEL_4;
  }
  v12 = v48 + 11;
  v13 = v47;
  v14 = v48 - 1;
  if ( *((_QWORD *)&v48 + 1) < (unsigned __int64)(v48 + 12) )
  {
    v47 = qvector_reserve();
    v12 = v48 + 11;
    v13 = v47;
  }
  *(_QWORD *)&v48 = v48 + 12;
  *(_BYTE *)(v13 + v12) = 0;
  qmemcpy((void *)(v47 + v14), " SSL_CB_EXIT", 12);
  if ( (a2 & 4) == 0 )
  {
LABEL_5:
    if ( (a2 & 8) == 0 )
      goto LABEL_6;
    goto LABEL_25;
  }
LABEL_22:
  v15 = v48;
  if ( (_QWORD)v48 )
  {
    v17 = v48 + 11;
    v16 = v48 + 12;
    v37 = v47;
    v15 = v48 - 1;
    if ( *((_QWORD *)&v48 + 1) >= (unsigned __int64)(v48 + 12) )
      goto LABEL_24;
  }
  else
  {
    v16 = 13;
    v17 = 12;
  }
  v40 = v17;
  v47 = qvector_reserve();
  v17 = v40;
  v37 = v47;
LABEL_24:
  *(_QWORD *)&v48 = v16;
  *(_BYTE *)(v37 + v17) = 0;
  qmemcpy((void *)(v47 + v15), " SSL_CB_READ", 12);
  if ( (a2 & 8) == 0 )
  {
LABEL_6:
    v6 = a2 & 0x4000;
    if ( (a2 & 0x4000) == 0 )
      goto LABEL_7;
    goto LABEL_28;
  }
LABEL_25:
  v18 = v48;
  if ( (_QWORD)v48 )
  {
    v20 = v48 + 12;
    v19 = v48 + 13;
    v36 = v47;
    v18 = v48 - 1;
    if ( *((_QWORD *)&v48 + 1) >= (unsigned __int64)(v48 + 13) )
      goto LABEL_27;
  }
  else
  {
    v19 = 14;
    v20 = 13;
  }
  v39 = v20;
  v47 = qvector_reserve();
  v20 = v39;
  v36 = v47;
LABEL_27:
  *(_QWORD *)&v48 = v19;
  *(_BYTE *)(v36 + v20) = 0;
  qmemcpy((void *)(v47 + v18), " SSL_CB_WRITE", 13);
  v6 = a2 & 0x4000;
  if ( (a2 & 0x4000) == 0 )
  {
LABEL_7:
    if ( (a2 & 0x10) == 0 )
      goto LABEL_8;
    goto LABEL_31;
  }
LABEL_28:
  v21 = v48;
  if ( (_QWORD)v48 )
  {
    v22 = v48 + 12;
    v23 = v48 + 13;
    v24 = v47;
    v21 = v48 - 1;
    if ( *((_QWORD *)&v48 + 1) >= (unsigned __int64)(v48 + 13) )
      goto LABEL_30;
  }
  else
  {
    v23 = 14;
    v22 = 13;
  }
  v46 = v22;
  v43 = v23;
  v47 = qvector_reserve();
  v22 = v46;
  v24 = v47;
  v23 = v43;
LABEL_30:
  *(_QWORD *)&v48 = v23;
  *(_BYTE *)(v24 + v22) = 0;
  qmemcpy((void *)(v47 + v21), " SSL_CB_ALERT", 13);
  if ( (a2 & 0x10) == 0 )
  {
LABEL_8:
    if ( (a2 & 0x20) == 0 )
      goto LABEL_9;
    goto LABEL_34;
  }
LABEL_31:
  v25 = v48;
  if ( (_QWORD)v48 )
  {
    v26 = v48 + 22;
    v27 = v48 + 23;
    v28 = v47;
    v25 = v48 - 1;
    if ( *((_QWORD *)&v48 + 1) >= (unsigned __int64)(v48 + 23) )
      goto LABEL_33;
  }
  else
  {
    v27 = 24;
    v26 = 23;
  }
  v45 = v26;
  v42 = v27;
  v47 = qvector_reserve();
  v26 = v45;
  v28 = v47;
  v27 = v42;
LABEL_33:
  si128 = _mm_load_si128((const __m128i *)&xmmword_30600);
  *(_QWORD *)&v48 = v27;
  *(_BYTE *)(v28 + v26) = 0;
  v30 = v47 + v25;
  *(__m128i *)v30 = si128;
  *(_QWORD *)(v30 + 15) = 0x54524154535F454BLL;
  if ( (a2 & 0x20) == 0 )
    goto LABEL_9;
LABEL_34:
  v31 = v48;
  if ( !(_QWORD)v48 )
  {
    v32 = 23;
    v33 = 22;
LABEL_42:
    v44 = v33;
    v41 = v32;
    v47 = qvector_reserve();
    v33 = v44;
    v38 = v47;
    v32 = v41;
    goto LABEL_36;
  }
  v33 = v48 + 21;
  v32 = v48 + 22;
  v38 = v47;
  v31 = v48 - 1;
  if ( *((_QWORD *)&v48 + 1) < (unsigned __int64)(v48 + 22) )
    goto LABEL_42;
LABEL_36:
  v34 = _mm_load_si128((const __m128i *)&xmmword_30600);
  *(_QWORD *)&v48 = v32;
  *(_BYTE *)(v38 + v33) = 0;
  v35 = v47 + v31;
  *(__m128i *)v35 = v34;
  *(_QWORD *)(v35 + 14) = 0x454E4F445F454B41LL;
LABEL_9:
  v7 = s;
  if ( (_QWORD)v48 )
    v7 = (const char *)v47;
  sub_BDA0((__int64)"TLS: info_callback(%p, %08X, %08X): %s\n", a1, a2, a3, v7);
  v8 = (const char *)(*(__int64 (__fastcall **)(const void *))(qword_3C460 + 304))(a1);
  sub_BDA0((__int64)"TLS:  [state] %s\n", v8);
  if ( v6 )
  {
    v9 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(qword_3C460 + 200))(a3);
    v10 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(qword_3C460 + 192))(a3);
    sub_BDA0((__int64)"TLS:  %s: %s\n", v9, v10);
  }
  if ( v47 )
    qfree();
  return v49 - __readfsqword(0x28u);
}

