unsigned __int64 __fastcall sub_37F2D0(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r13
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r13
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  __int64 v12; // rsi
  char *v13; // r13
  unsigned __int64 v14; // r15
  const char *v15; // rdi
  __int64 v16; // rdx
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
  __m128i v28; // xmm0
  char v29; // r15
  char v30; // r15
  char *v31; // rax
  char *v32; // rax
  char *v33; // rdx
  unsigned __int64 v34; // r15
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

  v4 = *(_QWORD *)(a1 + 96);
  v65 = __readfsqword(0x28u);
  v58 = v4;
  v6 = sub_33AED0(v4);
  if ( a3 )
  {
LABEL_16:
    qtmpnam();
    if ( *(_DWORD *)a2 )
      sub_69660(
        (__int64)"\n"
                 "\n"
                 "\n"
                 "***************** INTERNAL ERROR HAS OCCURRED *****************\n"
                 "*****************                             *****************\n",
        4096);
    sub_69660(
      (__int64)"*****************   CREATING COMPRESSED IDB   *****************\n"
               "*****************  FOR SENDING TO THE SERVER  *****************\n"
               "\n"
               "\n"
               "\n",
      4096);
    sub_32CC90((__int64)&s, a2, v16);
    sub_37EE20(0, *(_QWORD *)(a2 + 8));
    if ( s )
    {
      v63.m128i_i64[0] = 0;
      qfree();
    }
    s = (char *)-1LL;
    netnode_check();
    sub_339CB0();
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
    sub_69660((__int64)"\n\nAll ok, sending the database to the server (%llu bytes)...\n", v19);
    v20 = sub_339CB0();
    strrchr(v20, 46);
    v63 = 0;
    s = nullptr;
    sub_67E30((__int64 *)&s);
    upload_idb();
    if ( s )
    {
      v63.m128i_i64[0] = 0;
      qfree();
    }
    return v65 - __readfsqword(0x28u);
  }
  v61 = 0;
  v7 = qvector_reserve();
  v60 = (const char *)v7;
  *(_QWORD *)&v61 = 23;
  *(__m128i *)v7 = _mm_load_si128((const __m128i *)&xmmword_411DC0);
  v8 = (__int64)v60;
  *(_QWORD *)(v7 + 14) = 0xA6C65636E614320LL;
  *(_BYTE *)(v8 + 22) = 0;
  if ( *(_QWORD *)(v4 + 936) > 1u )
  {
    sub_F7090((__int64 *)&v60);
    v9 = v61;
    if ( (_QWORD)v61 )
      goto LABEL_4;
LABEL_28:
    v12 = (__int64)v60;
    v11 = 387;
    v10 = 386;
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
    v60 = (const char *)qvector_reserve();
    v24 = v47;
    v8 = (__int64)v60;
    v23 = (unsigned __int64)srcb;
  }
  *(_QWORD *)&v61 = v23;
  *(_BYTE *)(v8 + v24) = 0;
  qmemcpy((void *)&v60[v22], "SEND DATABASE", 13);
  v9 = v61;
  if ( !(_QWORD)v61 )
    goto LABEL_28;
LABEL_4:
  v10 = v9 + 385;
  v11 = v9 + 386;
  v12 = (__int64)v60;
  --v9;
  if ( *((_QWORD *)&v61 + 1) >= v11 )
    goto LABEL_5;
LABEL_29:
  v46 = v10;
  srcc = (void *)v11;
  v60 = (const char *)qvector_reserve();
  v10 = v46;
  v12 = (__int64)v60;
  v11 = (unsigned __int64)srcc;
LABEL_5:
  *(_QWORD *)&v61 = v11;
  *(_BYTE *)(v12 + v10) = 0;
  v13 = (char *)&v60[v9];
  *(_QWORD *)v13 = 0x756F792066490A0ALL;
  *(_QWORD *)(v13 + 378) = 0xA0A0A21756F7920LL;
  qmemcpy(
    (void *)((unsigned __int64)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL),
    (const void *)((char *)&qword_40E5F8 - &v13[-((unsigned __int64)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL)]),
    8LL * (((unsigned int)v13 - (((_DWORD)v13 + 8) & 0xFFFFFFF8) + 386) >> 3));
  v63 = 0;
  s = nullptr;
  v14 = *(_QWORD *)(v58 + 960);
  if ( v14 > 1 )
  {
    if ( &s != (char **)(v58 + 952) )
    {
      src = *(void **)(v58 + 952);
      s = (char *)qvector_reserve();
      v63.m128i_i64[0] = v14;
      memmove(s, src, v14 - 1);
      s[v14 - 1] = 0;
    }
    goto LABEL_8;
  }
  if ( !(unsigned __int8)reg_str_get() || (v34 = v63.m128i_i64[0], v63.m128i_i64[0] <= 1uLL) )
  {
    if ( *(_BYTE *)(v6 + 127) && (v38 = strlen((const char *)(v6 + 127)), (v39 = v38) != 0) )
    {
      v40 = s;
      v41 = v38 + 1;
      if ( v63.m128i_i64[1] < v38 + 1 )
      {
        v49 = v38;
        srcf = (void *)(v38 + 1);
        s = (char *)qvector_reserve();
        v39 = v49;
        v40 = s;
        v41 = (__int64)srcf;
      }
      v63.m128i_i64[0] = v41;
      srcg = (_BYTE *)v39;
      memmove(v40, (const void *)(v6 + 127), v39);
      srcg[(_QWORD)s] = 0;
      if ( (char **)(v58 + 952) == &s )
        goto LABEL_8;
      v34 = v63.m128i_i64[0];
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
  if ( (char **)(v58 + 952) != &s )
  {
    v35 = v63.m128i_i64[0] - 1;
LABEL_52:
    v36 = s;
    v37 = *(void **)(v58 + 952);
    if ( *(_QWORD *)(v58 + 968) < v34 )
    {
      v48 = s;
      srcd = (void *)v35;
      v37 = (void *)qvector_reserve();
      v36 = v48;
      v35 = (size_t)srcd;
      *(_QWORD *)(v58 + 952) = v37;
    }
    srce = (_BYTE *)v35;
    *(_QWORD *)(v58 + 960) = v34;
    memmove(v37, v36, v35);
    srce[*(_QWORD *)(v58 + 952)] = 0;
  }
LABEL_8:
  srca = (unsigned int)reg_int_op() != 0;
  v59 = (2 * srca) | ((unsigned int)reg_int_op() != 0);
  v45 = &v59;
  while ( 1 )
  {
    v15 = s1;
    if ( (_QWORD)v61 )
      v15 = v60;
    if ( (int)sub_338C80((__int64)v15, &s, sub_37E9A0, &v59, 0.0) <= 0 )
    {
      v30 = 0;
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
        v31 = strchr(s, 64);
        if ( v31 )
        {
          if ( v31[1] )
          {
            v42 = v31;
            if ( !strchr(v31 + 1, 64) )
            {
              v32 = strchr(v42, 46);
              if ( v32 )
              {
                v33 = v43;
                if ( v32[1] )
                {
                  v25 = (const char *)(v6 + 127);
                  goto LABEL_47;
                }
              }
            }
          }
        }
      }
    }
    sub_2B11F0((__int64)"The enter email address is invalid");
  }
  v25 = (const char *)(v6 + 127);
  v26 = s1;
  if ( !v63.m128i_i64[0] )
    goto LABEL_31;
  v33 = s;
LABEL_47:
  v26 = v33;
LABEL_31:
  if ( strcasecmp(v26, v25) )
    reg_str_set();
  v27 = *(char **)(v58 + 952);
  *(_QWORD *)(v58 + 952) = s;
  v28 = _mm_loadu_si128((const __m128i *)(v58 + 960));
  v29 = v59;
  *(__m128 *)(v58 + 960) = _mm_loadh_ps((const double *)&v63.m128i_i64[1]);
  v30 = v29 & 1;
  s = v27;
  v63 = v28;
  reg_int_op();
  reg_int_op();
LABEL_34:
  if ( s )
  {
    v63.m128i_i64[0] = 0;
    qfree();
  }
  if ( v60 )
  {
    *(_QWORD *)&v61 = 0;
    qfree();
  }
  if ( v30 )
    goto LABEL_16;
  return v65 - __readfsqword(0x28u);
}

