__int64 __fastcall sub_37C20(_QWORD *a1, const char *a2, const char *a3, char a4)
{
  size_t v5; // rax
  size_t v6; // r12
  size_t v7; // rbp
  unsigned __int64 v8; // rbx
  void *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // r12
  size_t v12; // r14
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rbp
  __int64 v16; // r15
  __int64 v17; // r12
  const char *v18; // rsi
  const char *v19; // rdi
  unsigned __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rax
  const char *v23; // rdx
  __int64 (*v24)(); // rcx
  __int64 v25; // r15
  const char *v27; // rax
  const char **v28; // r12
  const char *v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rbp
  const char *v33; // r14
  __int64 v34; // r13
  const char *v35; // rsi
  const char *v36; // rdi
  size_t v37; // rbp
  void *v38; // r14
  __int64 v39; // rax
  __int64 v40; // r15
  const char **v41; // r14
  __int64 v42; // r15
  __int64 v43; // r15
  __int64 v44; // rax
  __int64 i; // rbx
  _QWORD *v46; // rdx
  void *src; // [rsp+0h] [rbp-2F8h]
  __int64 v48; // [rsp+10h] [rbp-2E8h]
  __int64 v49; // [rsp+10h] [rbp-2E8h]
  void *v50; // [rsp+18h] [rbp-2E0h]
  _QWORD *v52; // [rsp+30h] [rbp-2C8h]
  const char **v53; // [rsp+38h] [rbp-2C0h]
  const char *v55; // [rsp+48h] [rbp-2B0h]
  const char **v56; // [rsp+50h] [rbp-2A8h]
  __int64 v57; // [rsp+60h] [rbp-298h]
  __int64 v58; // [rsp+70h] [rbp-288h]
  __int64 v59; // [rsp+78h] [rbp-280h]
  const char **v60; // [rsp+90h] [rbp-268h] BYREF
  __int64 v61; // [rsp+98h] [rbp-260h]
  void *v62; // [rsp+B0h] [rbp-248h] BYREF
  _BYTE n[24]; // [rsp+B8h] [rbp-240h]
  __int64 v64; // [rsp+D0h] [rbp-228h]
  int v65; // [rsp+D8h] [rbp-220h]
  char v66; // [rsp+DCh] [rbp-21Ch]
  __int64 v67; // [rsp+E0h] [rbp-218h]
  char v68; // [rsp+E8h] [rbp-210h]
  __int64 v69; // [rsp+F8h] [rbp-200h]
  __int128 v70; // [rsp+100h] [rbp-1F8h]
  __m128i si128; // [rsp+110h] [rbp-1E8h]
  char v72; // [rsp+120h] [rbp-1D8h]
  __m128i v73; // [rsp+128h] [rbp-1D0h]
  __int64 v74; // [rsp+138h] [rbp-1C0h]
  __int128 v75; // [rsp+140h] [rbp-1B8h]
  __int16 v76; // [rsp+150h] [rbp-1A8h]
  char v77; // [rsp+16Eh] [rbp-18Ah]
  __int64 v78; // [rsp+178h] [rbp-180h]
  __int128 v79; // [rsp+180h] [rbp-178h]
  __int64 v80; // [rsp+190h] [rbp-168h]
  __int128 v81; // [rsp+198h] [rbp-160h]
  __int64 v82; // [rsp+1A8h] [rbp-150h]
  __int128 v83; // [rsp+1B0h] [rbp-148h]
  __int64 v84; // [rsp+1C0h] [rbp-138h]
  __int128 v85; // [rsp+1C8h] [rbp-130h]
  __int64 v86; // [rsp+1D8h] [rbp-120h]
  __int128 v87; // [rsp+1E0h] [rbp-118h]
  __int64 v88; // [rsp+1F0h] [rbp-108h]
  __int128 v89; // [rsp+1F8h] [rbp-100h]
  __int64 v90; // [rsp+208h] [rbp-F0h]
  __int128 v91; // [rsp+210h] [rbp-E8h]
  __int64 v92; // [rsp+220h] [rbp-D8h]
  __int128 v93; // [rsp+228h] [rbp-D0h]
  __int64 v94; // [rsp+238h] [rbp-C0h]
  __int128 v95; // [rsp+240h] [rbp-B8h]
  __int64 v96; // [rsp+250h] [rbp-A8h]
  __int128 v97; // [rsp+258h] [rbp-A0h]
  __int16 v98; // [rsp+268h] [rbp-90h]
  char v99; // [rsp+26Ah] [rbp-8Eh]
  int v100; // [rsp+26Ch] [rbp-8Ch]
  __int128 v101; // [rsp+270h] [rbp-88h]
  __int64 v102; // [rsp+280h] [rbp-78h]
  __int64 v103; // [rsp+288h] [rbp-70h]
  int v104; // [rsp+290h] [rbp-68h]
  __int64 v105; // [rsp+298h] [rbp-60h]
  __int128 v106; // [rsp+2A0h] [rbp-58h]
  __int64 v107; // [rsp+2B0h] [rbp-48h]
  unsigned __int64 v108; // [rsp+2B8h] [rbp-40h]

  v108 = __readfsqword(0x28u);
  if ( !a2 || !*a2 || !a3 || !*a3 )
    return -1;
  *(_OWORD *)n = 0;
  v5 = strlen(a2);
  v6 = v5 + 1;
  v7 = v5;
  v62 = (void *)qvector_reserve();
  *(_QWORD *)n = v6;
  memmove(v62, a2, v7);
  *((_BYTE *)v62 + v7) = 0;
  v8 = *(_QWORD *)n;
  v9 = nullptr;
  if ( *(_QWORD *)n )
  {
    v9 = (void *)qalloc_or_throw();
    memcpy(v9, v62, *(size_t *)n);
  }
  v58 = qvector_reserve();
  *(_QWORD *)v58 = v9;
  *(__m128i *)(v58 + 8) = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v8);
  v10 = 1;
  v59 = 1;
  if ( v62 )
  {
    *(_QWORD *)n = 0;
    qfree();
    v10 = 1;
  }
  while ( 2 )
  {
    src = nullptr;
    v11 = v58 + 24 * v10 - 24;
    v12 = *(_QWORD *)(v11 + 8);
    if ( v12 )
    {
      src = (void *)qalloc_or_throw();
      memcpy(src, *(const void **)v11, v12);
    }
    v13 = v59--;
    v14 = (_QWORD *)(v58 + 24 * (v13 - 1));
    if ( *v14 )
    {
      v14[1] = 0;
      qfree();
    }
    v15 = a1[75];
    v16 = v15 + 24LL * a1[76];
    if ( v15 == v16 )
      goto LABEL_49;
    v48 = a1[75];
    v17 = v48;
    while ( 1 )
    {
      if ( *(_QWORD *)(v17 + 8) )
      {
        v18 = *(const char **)v17;
        v19 = ::src;
        if ( !v12 )
          goto LABEL_17;
        goto LABEL_22;
      }
      if ( !v12 )
        break;
      v18 = ::src;
LABEL_22:
      v19 = (const char *)src;
LABEL_17:
      if ( !strcmp(v19, v18) )
        break;
      v17 += 24;
      if ( v16 == v17 )
        goto LABEL_49;
    }
    if ( v17 != v16 )
    {
      v20 = 0xAAAAAAAAAAAAAAABLL * ((v17 - v48) >> 3);
      goto LABEL_25;
    }
LABEL_49:
    v20 = -1;
LABEL_25:
    v49 = sub_2EA20((__int64)a1, v20);
    if ( !v49 )
    {
      if ( !under_debugger )
      {
        interr();
        goto LABEL_98;
      }
LABEL_100:
      BUG();
    }
    v50 = nullptr;
    if ( v12 )
    {
      v50 = (void *)qalloc_or_throw();
      memcpy(v50, src, v12);
    }
    v21 = *a1;
    v62 = &off_974D8;
    *(_QWORD *)n = v21;
    v67 = v49;
    v22 = a1[87];
    v64 = -1;
    v65 = 8;
    v66 = 1;
    v68 = 0;
    v69 = 0;
    v72 = 0;
    v74 = 0;
    v76 = 0;
    v78 = 0;
    v80 = 0;
    v82 = 0;
    v84 = 0;
    v86 = 0;
    *(__m128i *)&n[8] = _mm_load_si128((const __m128i *)&xmmword_823B0);
    v70 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_82350);
    v73 = _mm_load_si128((const __m128i *)&xmmword_82340);
    v75 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v87 = 0;
    v88 = 0;
    v90 = 0;
    v92 = 0;
    v94 = 0;
    v96 = 0;
    v98 = 0;
    v99 = 0;
    v100 = 0;
    v102 = 0;
    v103 = v22;
    v104 = 2;
    v105 = 0;
    v107 = 0;
    v89 = 0;
    v91 = 0;
    v93 = 0;
    v95 = 0;
    v97 = 0;
    v101 = -1;
    v106 = 0;
    if ( !sub_31110((__int64)&v62) || !sub_31420((__int64)&v62, 0, 0, 0) )
    {
      sub_2BAE0((__int64)&v62);
      close_linput();
      if ( v50 )
        qfree();
      if ( src )
        goto LABEL_40;
      goto LABEL_41;
    }
    if ( a4 )
    {
      v23 = (const char *)src;
      if ( !v12 )
        v23 = ::src;
      sub_140F0((__int64)"2 searching for symbol %s in %s\n", a3, v23);
    }
    v25 = sub_37A30((__int64)&v62, a3, a4, (__int64)a1);
    if ( v25 == -1 )
    {
      if ( v73.m128i_i64[0] != -1 )
      {
        if ( (v77 & 0x10) != 0 )
          goto LABEL_37;
        sub_345C0((__int64)&v60, &v62, (__int64 (*)())0x8000001FLL, v24);
        v57 = v61;
        v56 = v60;
        v53 = &v60[3 * v61];
        if ( v53 != v60 )
        {
          v27 = (const char *)src;
          v28 = v60;
          if ( !v12 )
            v27 = ::src;
          v55 = v27;
          while ( 1 )
          {
            if ( a4 )
            {
              v29 = ::src;
              if ( v28[1] )
                v29 = *v28;
              sub_140F0((__int64)"2 checking reexported dylib %s for %s\n", v29, v55);
            }
            v30 = v59;
            v31 = v58;
            v32 = v58 + 24 * v59;
            if ( v58 != v32 )
              break;
LABEL_68:
            v37 = (size_t)v28[1];
            v38 = nullptr;
            if ( v37 )
            {
              v38 = (void *)qalloc_or_throw();
              memcpy(v38, *v28, v37);
              v30 = v59;
              v31 = v58;
            }
LABEL_70:
            if ( v30 != -1 )
            {
              v58 = qvector_reserve();
              v30 = v59;
              v31 = v58;
            }
            v39 = v31 + 24 * v30;
            *(_QWORD *)v39 = v38;
            *(__m128i *)(v39 + 8) = _mm_unpacklo_epi64((__m128i)v37, (__m128i)v37);
            ++v59;
LABEL_73:
            v28 += 3;
            if ( v53 == v28 )
              goto LABEL_74;
          }
          v52 = a1;
          v33 = v28[1];
          v34 = v58;
          while ( 2 )
          {
            if ( *(_QWORD *)(v34 + 8) )
            {
              v35 = *(const char **)v34;
              v36 = ::src;
              if ( v33 )
                goto LABEL_66;
            }
            else
            {
              if ( !v33 )
              {
                v31 = v58;
                v42 = v34;
                v30 = v59;
                a1 = v52;
                if ( v32 != v42 )
                  goto LABEL_73;
                v37 = (size_t)v28[1];
                v38 = nullptr;
                goto LABEL_70;
              }
              v35 = ::src;
LABEL_66:
              v36 = *v28;
            }
            if ( !strcmp(v36, v35) )
            {
              v31 = v58;
              v43 = v34;
              v30 = v59;
              a1 = v52;
              if ( v32 != v43 )
                goto LABEL_73;
              goto LABEL_68;
            }
            v34 += 24;
            if ( v32 == v34 )
            {
              v30 = v59;
              a1 = v52;
              v31 = v58;
              goto LABEL_68;
            }
            continue;
          }
        }
LABEL_74:
        if ( v56 )
        {
          v40 = 0;
          v41 = v56;
          if ( v57 )
          {
            do
            {
              if ( *v41 )
              {
                v41[1] = nullptr;
                qfree();
              }
              ++v40;
              v41 += 3;
            }
            while ( v57 != v40 );
          }
          qfree();
        }
LABEL_37:
        sub_2BAE0((__int64)&v62);
        close_linput();
        if ( v50 )
          qfree();
        if ( src )
LABEL_40:
          qfree();
LABEL_41:
        v10 = v59;
        if ( !v59 )
        {
          if ( !v58 )
            return -1;
          v25 = -1;
LABEL_94:
          qfree();
          return v25;
        }
        continue;
      }
LABEL_98:
      if ( !under_debugger )
        interr();
      goto LABEL_100;
    }
    break;
  }
  sub_2BAE0((__int64)&v62);
  close_linput();
  if ( v50 )
    qfree();
  if ( src )
    qfree();
  v44 = v58;
  if ( v58 )
  {
    if ( v59 )
    {
      for ( i = 0; i != v59; ++i )
      {
        v46 = (_QWORD *)(v44 + 24 * i);
        if ( *v46 )
        {
          v46[1] = 0;
          qfree();
          v44 = v58;
        }
      }
    }
    goto LABEL_94;
  }
  return v25;
}

