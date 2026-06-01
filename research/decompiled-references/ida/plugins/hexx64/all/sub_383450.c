unsigned __int64 __fastcall sub_383450(__int64 a1, __int64 a2, char a3, __m128i a4)
{
  __int64 v5; // r13
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r13
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 v13; // rsi
  char *v14; // r13
  unsigned __int64 v15; // r15
  const char *v16; // rdi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  char *v20; // rax
  __int64 v22; // r13
  unsigned __int64 v23; // rdx
  __int64 v24; // r8
  const char *v25; // rsi
  const char *v26; // r15
  char *v27; // rax
  char v28; // r15
  char v29; // r15
  char *v30; // rax
  char *v31; // rax
  char *v32; // rdx
  unsigned __int64 v33; // r15
  __int64 v34; // rdi
  size_t v35; // r8
  char *v36; // r9
  void *v37; // rax
  size_t v38; // rax
  size_t v39; // r8
  char *v40; // rdi
  __int64 v41; // rdx
  char *v42; // [rsp+0h] [rbp-10E0h]
  char *v43; // [rsp+8h] [rbp-10D8h]
  __int64 v44; // [rsp+10h] [rbp-10D0h]
  __int16 *v45; // [rsp+18h] [rbp-10C8h]
  __int64 v46; // [rsp+18h] [rbp-10C8h]
  __int64 v47; // [rsp+18h] [rbp-10C8h]
  char *v48; // [rsp+18h] [rbp-10C8h]
  size_t v49; // [rsp+18h] [rbp-10C8h]
  void *src; // [rsp+20h] [rbp-10C0h]
  bool srca; // [rsp+20h] [rbp-10C0h]
  void *srcc; // [rsp+20h] [rbp-10C0h]
  _BYTE *srce; // [rsp+20h] [rbp-10C0h]
  void *srcb; // [rsp+20h] [rbp-10C0h]
  void *srcd; // [rsp+20h] [rbp-10C0h]
  _BYTE *srcg; // [rsp+20h] [rbp-10C0h]
  void *srcf; // [rsp+20h] [rbp-10C0h]
  __int64 v58; // [rsp+28h] [rbp-10B8h]
  __int16 v59; // [rsp+3Eh] [rbp-10A2h] BYREF
  const char *v60; // [rsp+40h] [rbp-10A0h] BYREF
  __int128 v61; // [rsp+48h] [rbp-1098h]
  char *s; // [rsp+60h] [rbp-1080h] BYREF
  __m128i v63; // [rsp+68h] [rbp-1078h] BYREF
  char v64[32]; // [rsp+80h] [rbp-1060h] BYREF
  unsigned __int64 v65; // [rsp+10A8h] [rbp-38h]

  v5 = *(_QWORD *)(a1 + 96);
  v65 = __readfsqword(0x28u);
  v58 = v5;
  v7 = sub_33F070(v5);
  if ( a3 )
  {
LABEL_16:
    qtmpnam();
    if ( *(_DWORD *)a2 )
      sub_6D0A0(
        (__int64)"\n"
                 "\n"
                 "\n"
                 "***************** INTERNAL ERROR HAS OCCURRED *****************\n"
                 "*****************                             *****************\n",
        4096);
    sub_6D0A0(
      (__int64)"*****************   CREATING COMPRESSED IDB   *****************\n"
               "*****************  FOR SENDING TO THE SERVER  *****************\n"
               "\n"
               "\n"
               "\n",
      4096);
    sub_3310F0((__int64)&s, (_DWORD *)a2, *(double *)a4.m128i_i64);
    sub_382FA0(0, *(_QWORD *)(a2 + 8));
    if ( s )
    {
      v63.m128i_i64[0] = 0;
      qfree((__int64)s);
    }
    s = (char *)-1LL;
    netnode_check();
    sub_33DF30();
    netnode_supset();
    netnode_supset();
    callui(52, v64, 32, &callui, v17, v18, v42, v43, v44, v45);
    netnode_supset();
    getinf();
    getinf();
    setinf();
    save_database();
    getinf();
    getinf();
    setinf();
    v19 = qfilesize();
    sub_6D0A0((__int64)"\n\nAll ok, sending the database to the server (%llu bytes)...\n", v19);
    v20 = sub_33DF30();
    strrchr(v20, 46);
    v63 = 0;
    s = nullptr;
    sub_6B870((__int64 *)&s);
    upload_idb();
    if ( s )
    {
      v63.m128i_i64[0] = 0;
      qfree((__int64)s);
    }
    return v65 - __readfsqword(0x28u);
  }
  v61 = 0;
  v60 = nullptr;
  v8 = qvector_reserve((__int64)&v60, 0, 23, 1);
  v60 = (const char *)v8;
  *(_QWORD *)&v61 = 23;
  *(__m128i *)v8 = _mm_load_si128((const __m128i *)&xmmword_4249C0);
  v9 = (__int64)v60;
  *(_QWORD *)(v8 + 14) = 0xA6C65636E614320LL;
  *(_BYTE *)(v9 + 22) = 0;
  if ( *(_QWORD *)(v5 + 936) > 1u )
  {
    sub_FAAD0((__int64 *)&v60);
    v10 = v61;
    if ( (_QWORD)v61 )
      goto LABEL_4;
LABEL_28:
    v13 = (__int64)v60;
    v12 = 387;
    v11 = 386;
    if ( *((_QWORD *)&v61 + 1) >= 0x183u )
      goto LABEL_5;
    goto LABEL_29;
  }
  v22 = v61;
  if ( (_QWORD)v61 )
  {
    v24 = v61 + 12;
    v23 = v61 + 13;
    v22 = v61 - 1;
  }
  else
  {
    v23 = 14;
    v24 = 13;
  }
  if ( *((_QWORD *)&v61 + 1) < v23 )
  {
    v47 = v24;
    srcb = (void *)v23;
    v60 = (const char *)qvector_reserve((__int64)&v60, v9, v23, 1);
    v24 = v47;
    v9 = (__int64)v60;
    v23 = (unsigned __int64)srcb;
  }
  *(_QWORD *)&v61 = v23;
  *(_BYTE *)(v9 + v24) = 0;
  qmemcpy((void *)&v60[v22], "SEND DATABASE", 13);
  v10 = v61;
  if ( !(_QWORD)v61 )
    goto LABEL_28;
LABEL_4:
  v11 = v10 + 385;
  v12 = v10 + 386;
  v13 = (__int64)v60;
  --v10;
  if ( *((_QWORD *)&v61 + 1) >= v12 )
    goto LABEL_5;
LABEL_29:
  v46 = v11;
  srcc = (void *)v12;
  v60 = (const char *)qvector_reserve((__int64)&v60, v13, v12, 1);
  v11 = v46;
  v13 = (__int64)v60;
  v12 = (unsigned __int64)srcc;
LABEL_5:
  *(_QWORD *)&v61 = v12;
  a4.m128i_i64[0] = 0;
  *(_BYTE *)(v13 + v11) = 0;
  v14 = (char *)&v60[v10];
  *(_QWORD *)v14 = 0x756F792066490A0ALL;
  *(_QWORD *)(v14 + 378) = 0xA0A0A21756F7920LL;
  qmemcpy(
    (void *)((unsigned __int64)(v14 + 8) & 0xFFFFFFFFFFFFFFF8LL),
    (const void *)((char *)&qword_422828 - &v14[-((unsigned __int64)(v14 + 8) & 0xFFFFFFFFFFFFFFF8LL)]),
    8LL * (((unsigned int)v14 - (((_DWORD)v14 + 8) & 0xFFFFFFF8) + 386) >> 3));
  v63 = 0;
  s = nullptr;
  v15 = *(_QWORD *)(v58 + 960);
  if ( v15 > 1 )
  {
    if ( &s != (char **)(v58 + 952) )
    {
      src = *(void **)(v58 + 952);
      s = (char *)qvector_reserve((__int64)&s, 0, *(_QWORD *)(v58 + 960), 1);
      v63.m128i_i64[0] = v15;
      memmove(s, src, v15 - 1);
      s[v15 - 1] = 0;
    }
    goto LABEL_8;
  }
  if ( !(unsigned __int8)reg_str_get() || (v33 = v63.m128i_i64[0], v63.m128i_i64[0] <= 1uLL) )
  {
    if ( *(_BYTE *)(v7 + 127) && (v38 = strlen((const char *)(v7 + 127)), (v39 = v38) != 0) )
    {
      v40 = s;
      v41 = v38 + 1;
      if ( v63.m128i_i64[1] < v38 + 1 )
      {
        v49 = v38;
        srcf = (void *)(v38 + 1);
        s = (char *)qvector_reserve((__int64)&s, (__int64)s, v41, 1);
        v39 = v49;
        v40 = s;
        v41 = (__int64)srcf;
      }
      v63.m128i_i64[0] = v41;
      srcg = (_BYTE *)v39;
      memmove(v40, (const void *)(v7 + 127), v39);
      srcg[(_QWORD)s] = 0;
      v34 = v58 + 952;
      if ( (char **)(v58 + 952) == &s )
        goto LABEL_8;
      v33 = v63.m128i_i64[0];
      if ( v63.m128i_i64[0] )
      {
        v35 = v63.m128i_i64[0] - 1;
        if ( v63.m128i_i64[0] != 1 )
          goto LABEL_52;
      }
    }
    else
    {
      v63.m128i_i64[0] = 0;
      if ( &s == (char **)(v58 + 952) )
        goto LABEL_8;
    }
    *(_QWORD *)(v58 + 960) = 0;
    goto LABEL_8;
  }
  v34 = v58 + 952;
  if ( (char **)(v58 + 952) != &s )
  {
    v35 = v63.m128i_i64[0] - 1;
LABEL_52:
    v36 = s;
    v37 = *(void **)(v58 + 952);
    if ( *(_QWORD *)(v58 + 968) < v33 )
    {
      v48 = s;
      srcd = (void *)v35;
      v37 = (void *)qvector_reserve(v34, *(_QWORD *)(v58 + 952), v33, 1);
      v36 = v48;
      v35 = (size_t)srcd;
      *(_QWORD *)(v58 + 952) = v37;
    }
    srce = (_BYTE *)v35;
    *(_QWORD *)(v58 + 960) = v33;
    memmove(v37, v36, v35);
    srce[*(_QWORD *)(v58 + 952)] = 0;
  }
LABEL_8:
  srca = (unsigned int)reg_int_op() != 0;
  v59 = (2 * srca) | ((unsigned int)reg_int_op() != 0);
  v45 = &v59;
  while ( 1 )
  {
    v16 = s1;
    if ( (_QWORD)v61 )
      v16 = v60;
    if ( (int)sub_33CF00((__int64)v16, &s, sub_382B20, &v59, 0.0) <= 0 )
    {
      v29 = 0;
      goto LABEL_34;
    }
    if ( v63.m128i_i64[0] <= 1uLL )
      break;
    v44 = v63.m128i_i64[0];
    if ( s )
    {
      if ( (*s & 0xBF) != 0 )
      {
        v43 = s;
        v30 = strchr(s, 64);
        if ( v30 )
        {
          if ( v30[1] )
          {
            v42 = v30;
            if ( !strchr(v30 + 1, 64) )
            {
              v31 = strchr(v42, 46);
              if ( v31 )
              {
                v32 = v43;
                if ( v31[1] )
                {
                  v25 = (const char *)(v7 + 127);
                  goto LABEL_47;
                }
              }
            }
          }
        }
      }
    }
    sub_2B4E70((__int64)"The enter email address is invalid");
  }
  v25 = (const char *)(v7 + 127);
  v26 = s1;
  if ( !v63.m128i_i64[0] )
    goto LABEL_31;
  v32 = s;
LABEL_47:
  v26 = v32;
LABEL_31:
  if ( strcasecmp(v26, v25) )
    reg_str_set();
  v27 = *(char **)(v58 + 952);
  *(_QWORD *)(v58 + 952) = s;
  a4 = _mm_loadu_si128((const __m128i *)(v58 + 960));
  v28 = v59;
  *(__m128 *)(v58 + 960) = _mm_loadh_ps((const double *)&v63.m128i_i64[1]);
  v29 = v28 & 1;
  s = v27;
  v63 = a4;
  reg_int_op();
  reg_int_op();
LABEL_34:
  if ( s )
  {
    v63.m128i_i64[0] = 0;
    qfree((__int64)s);
  }
  if ( v60 )
  {
    *(_QWORD *)&v61 = 0;
    qfree((__int64)v60);
  }
  if ( v29 )
    goto LABEL_16;
  return v65 - __readfsqword(0x28u);
}

