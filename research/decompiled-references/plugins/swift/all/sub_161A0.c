__int64 __fastcall sub_161A0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r12
  char *v9; // rax
  const char *v10; // r8
  char v11; // r15
  size_t v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r15
  const char *v15; // r8
  __int64 v16; // r12
  __int128 v17; // kr10_16
  __int64 v18; // rax
  unsigned int *v19; // r14
  size_t v20; // r15
  void *v21; // rax
  const void *v22; // rsi
  __int64 v23; // rsi
  __int64 v24; // rdx
  const char *v25; // rdi
  size_t v26; // rax
  int v27; // r10d
  const char *v28; // rcx
  int v29; // edx
  const char *v30; // rdi
  void *named_type_tid; // rax
  int v32; // esi
  __int64 v33; // rdi
  __int64 v34; // rbp
  _QWORD *v35; // r12
  __int64 v36; // rdi
  __int64 v37; // rdi
  __m128i si128; // xmm0
  __int64 v39; // rdi
  const char *v40; // rbp
  unsigned int v41; // eax
  __int64 v42; // r12
  __int64 v43; // rax
  void *v44; // rdi
  char *v45; // rax
  const char *v46; // rsi
  const char *v47; // rsi
  __int64 v48; // rdi
  __int64 v49; // rbp
  __int64 v50; // r14
  _QWORD *v51; // rbx
  __int64 v52; // rdi
  __int64 v53; // rdi
  _QWORD *v54; // rax
  char *v55; // rdi
  unsigned int *v56; // rbp
  __int64 v57; // rax
  __int64 v58; // rax
  const char *v59; // rcx
  const char *v60; // rcx
  int v61; // eax
  bool v62; // zf
  void *src[2]; // [rsp+0h] [rbp-128h] BYREF
  __int64 v64; // [rsp+18h] [rbp-110h]
  int v65; // [rsp+24h] [rbp-104h]
  char *v66; // [rsp+28h] [rbp-100h]
  char **v67; // [rsp+30h] [rbp-F8h]
  __int64 v68; // [rsp+38h] [rbp-F0h]
  __int64 v69; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v70; // [rsp+50h] [rbp-D8h] BYREF
  __int128 v71; // [rsp+58h] [rbp-D0h]
  __int64 v72; // [rsp+70h] [rbp-B8h] BYREF
  __m128i v73; // [rsp+78h] [rbp-B0h] BYREF
  char *v74; // [rsp+90h] [rbp-98h] BYREF
  __int128 v75; // [rsp+98h] [rbp-90h]
  char *idati; // [rsp+B0h] [rbp-78h] BYREF
  __int128 v77; // [rsp+B8h] [rbp-70h]
  __int128 v78; // [rsp+C8h] [rbp-60h]
  __int64 v79; // [rsp+D8h] [rbp-50h]
  int v80; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v81; // [rsp+E8h] [rbp-40h]

  v81 = __readfsqword(0x28u);
  v71 = 0;
  if ( (_BYTE)byte_286B8 || !__cxa_guard_acquire(&byte_286B8) )
  {
    v6 = *(_QWORD *)(a3 + 8);
    LODWORD(v7) = 0;
    if ( v6 <= 1 )
      return (unsigned int)v7;
  }
  else
  {
    xmmword_286C8 = 0;
    qword_286C0 = nullptr;
    v9 = (char *)qvector_reserve(&qword_286C0, 0, 10, 1);
    qword_286C0 = v9;
    *(_QWORD *)&xmmword_286C8 = 10;
    *(_QWORD *)v9 = 0x6C616E6F6974704FLL;
    v9[8] = 60;
    qword_286C0[9] = 0;
    __cxa_atexit((void (*)(void *))sub_72D0, &qword_286C0, &off_274A0);
    LODWORD(v7) = 0;
    __cxa_guard_release(&byte_286B8);
    v6 = *(_QWORD *)(a3 + 8);
    if ( v6 <= 1 )
      return (unsigned int)v7;
  }
  v10 = *(const char **)a3;
  v7 = v6 - 2;
  v11 = *(_BYTE *)(*(_QWORD *)a3 + v6 - 2);
  if ( v11 == 63 )
  {
    v43 = 0;
    a3 = 0;
    idati = nullptr;
    v77 = 0;
    if ( v6 != 2 )
    {
      src[0] = (void *)v10;
      v45 = (char *)qvector_reserve(&idati, 0, v6 - 1, 1);
      *(_QWORD *)&v77 = v6 - 1;
      idati = v45;
      memmove(v45, src[0], v6 - 2);
      idati[v6 - 2] = 0;
      a3 = (__int64)idati;
      v43 = *((_QWORD *)&v77 + 1);
      v7 = v77;
    }
    *(_QWORD *)&v71 = v7;
    *((_QWORD *)&v71 + 1) = v43;
    goto LABEL_15;
  }
  if ( !(_QWORD)xmmword_286C8
    || (v12 = xmmword_286C8 - 1, LOBYTE(v7) = (_QWORD)xmmword_286C8 == 1 || qword_286C0 == nullptr, (_BYTE)v7)
    || v6 - 1 >= v12 && !strncmp(*(const char **)a3, qword_286C0, v12) )
  {
    LODWORD(v7) = 0;
    if ( v11 == 62 )
    {
      if ( !(_BYTE)byte_286A8 )
        goto LABEL_59;
      while ( 1 )
      {
        v13 = *(_QWORD *)(a3 + 8);
        v14 = qword_286B0;
        idati = nullptr;
        v15 = *(const char **)a3;
        v77 = 0;
        a3 = 0;
        v16 = (v13 == 0) + v13 - 1 - qword_286B0;
        v17 = (unsigned __int64)(v16 - 1);
        if ( v16 != 1 )
        {
          v44 = nullptr;
          if ( v16 )
          {
            src[0] = (void *)v15;
            idati = (char *)qvector_reserve(&idati, 0, v16, 1);
            v15 = (const char *)src[0];
            v44 = idati;
          }
          *(_QWORD *)&v77 = v16;
          memmove(v44, &v15[v14], v16 - 1);
          idati[v16 - 1] = 0;
          a3 = (__int64)idati;
          v17 = v77;
        }
        v71 = v17;
LABEL_15:
        v70 = a3;
        v18 = sub_14470(a1, &v70);
        v19 = (unsigned int *)v18;
        if ( *(_DWORD *)(v18 + 68) != 1 )
          break;
        v20 = *(_QWORD *)(v18 + 40);
        if ( v20 )
        {
          if ( !strcmp(*(const char **)(v18 + 32), "Swift::Void") )
          {
            v65 = (*((_BYTE *)v19 + 72) == 0) + *v19;
            goto LABEL_19;
          }
          if ( *((_QWORD *)v19 + 1) && v20 != 1 )
          {
            v61 = *v19;
            v62 = *((_BYTE *)v19 + 72) == 0;
            v65 = *v19;
            if ( v62 )
            {
              v65 = v61 + 1;
              v72 = 0;
              v73 = 0;
LABEL_20:
              v21 = (void *)qalloc_or_throw(v20);
              v22 = *((const void **)v19 + 4);
              v72 = (__int64)v21;
              v73.m128i_i64[1] = v20;
              memcpy(v21, v22, v20);
              v73.m128i_i64[0] = v20;
              v23 = v72;
              v24 = v20 + 9;
              if ( v73.m128i_i64[1] < v20 + 9 )
              {
                v72 = qvector_reserve(&v72, v72, v24, 1);
                v24 = v20 + 9;
                v23 = v72;
              }
              v73.m128i_i64[0] = v24;
              v25 = s1;
              *(_BYTE *)(v23 + v20 + 8) = 0;
              v26 = v20 - 1 + v72;
              *(_QWORD *)v26 = 0x616E6F6974706F5FLL;
              *(_BYTE *)(v26 + 8) = 108;
              if ( v73.m128i_i64[0] )
                v25 = (const char *)v72;
              src[0] = (void *)get_named_type_tid(v25);
              v69 = 0;
              LODWORD(v7) = get_type_by_tid(&v69, src[0]);
              if ( (_BYTE)v7 )
              {
                if ( (unsigned __int8)sub_E0E0((_DWORD *)a2, &v69, (__int64)&v72)
                  && (unsigned __int8)sub_DE40((_DWORD *)a2, v65, v19[1], (__int64)&v72, 1, 1) )
                {
                  goto LABEL_42;
                }
                goto LABEL_49;
              }
              idati = nullptr;
              v79 = 0;
              v80 = 1;
              v77 = 0;
              v78 = 0;
              if ( *v19 )
              {
                src[0] = &idati;
                if ( !(unsigned __int8)sub_95D0((__int64 *)&idati, "value", 0, v19) )
                {
                  if ( (_QWORD)v77 )
                  {
                    if ( !*(_DWORD *)(a2 + 68) && !*((_BYTE *)v19 + 72) )
                    {
                      v64 = 1;
                      v68 = 0;
                      goto LABEL_88;
                    }
                  }
                  else
                  {
                    *(_DWORD *)(a2 + 68) = 6;
                  }
                  v59 = s1;
                  if ( v73.m128i_i64[0] )
                    v59 = (const char *)v72;
                  goto LABEL_102;
                }
                if ( !*(_DWORD *)(a2 + 68) && !*((_BYTE *)v19 + 72) )
                {
                  v68 = 1;
                  v64 = 0;
                  goto LABEL_88;
                }
              }
              else
              {
                v27 = *(_DWORD *)(a2 + 68);
                src[0] = &idati;
                if ( v27 || *((_BYTE *)v19 + 72) )
                  goto LABEL_28;
                v68 = 0;
                v64 = 0;
LABEL_88:
                v75 = 0;
                v67 = &v74;
                v74 = nullptr;
                v74 = (char *)qvector_reserve(&v74, 0, 11, 1);
                *(_QWORD *)&v75 = 11;
                strcpy(v74, "Swift.Bool");
                v66 = v74;
                v54 = sub_131C0(a1 + 488, (__int64)&v74);
                if ( v66 )
                {
                  v55 = v66;
                  v66 = (char *)v54;
                  *(_QWORD *)&v75 = 0;
                  qfree(v55);
                  v54 = v66;
                }
                if ( v54 == (_QWORD *)(a1 + 496)
                  || (v56 = (unsigned int *)(v54 + 7),
                      v66 = (char *)v54,
                      sub_A3A0((__int64)(v54 + 7)),
                      *((_DWORD *)v66 + 31) != 1) )
                {
                  sub_CB10((__int64)"internal: no 'Swift.Bool' type\n");
                  v57 = v64;
                  *(_DWORD *)(a2 + 68) = 10;
                  v58 = v57 + 1;
LABEL_93:
                  v59 = s1;
                  if ( v73.m128i_i64[0] )
                    v59 = (const char *)v72;
                  if ( v58 != 1 )
                  {
                    sub_CB10(
                      (__int64)"the message%s above refer%s to creating a structure with the name %s\n",
                      "s",
                      "",
                      v59);
                    goto LABEL_28;
                  }
LABEL_102:
                  sub_CB10(
                    (__int64)"the message%s above refer%s to creating a structure with the name %s\n",
                    "",
                    "s",
                    v59);
                  goto LABEL_28;
                }
                if ( !(unsigned __int8)sub_95D0((__int64 *)src[0], "is_nil", *v19, v56) )
                {
                  if ( sub_99B0((__int64)src[0], 8LL * *v19) < 0 )
                    *(_DWORD *)(a2 + 68) = 6;
                  v58 = v64 + 1;
                  goto LABEL_93;
                }
                if ( v64 )
                {
                  v60 = s1;
                  if ( v73.m128i_i64[0] )
                    v60 = (const char *)v72;
                  sub_CB10(
                    (__int64)"the message%s above refer%s to creating a structure with the name %s\n",
                    "",
                    "s",
                    v60);
                }
                if ( v68 == 1 )
                  HIDWORD(v79) |= 0x40u;
              }
LABEL_28:
              create_tinfo(&v69, 13, 13, src[0]);
              set_tinfo_property(&v69, 2, 4);
              v28 = s1;
              if ( v73.m128i_i64[0] )
                v28 = (const char *)v72;
              v29 = save_tinfo(&v69, 0, 0, v28, 5);
              if ( v29 )
              {
                v47 = s1;
                if ( v73.m128i_i64[0] )
                  v47 = (const char *)v72;
                sub_CB10((__int64)"could not add a structure with the name %s retcode %d\n", v47, v29);
                *(_DWORD *)(a2 + 68) = 6;
              }
              else
              {
                v30 = s1;
                if ( v73.m128i_i64[0] )
                  v30 = (const char *)v72;
                named_type_tid = (void *)get_named_type_tid(v30);
                v32 = *(_DWORD *)(a2 + 68);
                src[0] = named_type_tid;
                LODWORD(v7) = 1;
                if ( !v32 )
                {
                  v33 = (__int64)idati;
                  if ( idati )
                  {
                    v34 = 0;
                    v64 = v77;
                    if ( (_QWORD)v77 )
                    {
                      do
                      {
                        v35 = (_QWORD *)(v33 + 144 * v34);
                        clear_tinfo_t();
                        v36 = v35[5];
                        if ( v36 )
                        {
                          v35[6] = 0;
                          qfree(v36);
                        }
                        v37 = v35[2];
                        if ( v37 )
                        {
                          v35[3] = 0;
                          qfree(v37);
                        }
                        v33 = (__int64)idati;
                        ++v34;
                      }
                      while ( v64 != v34 );
                    }
                    *(_QWORD *)&v77 = 0;
                    qfree(v33);
                  }
LABEL_42:
                  si128 = _mm_loadu_si128(&v73);
                  v39 = *(_QWORD *)(a2 + 32);
                  v40 = (const char *)v72;
                  *(_DWORD *)a2 = v65;
                  v41 = v19[1];
                  v42 = si128.m128i_i64[0];
                  *(_QWORD *)(a2 + 8) = 1610613760;
                  *(_DWORD *)(a2 + 4) = v41;
                  v72 = 0;
                  *(void **)(a2 + 16) = src[0];
                  v73 = 0;
                  if ( v39 )
                  {
                    *(_QWORD *)(a2 + 40) = 0;
                    *(__m128i *)src = si128;
                    qfree(v39);
                    si128 = _mm_load_si128((const __m128i *)src);
                  }
                  *(_QWORD *)(a2 + 32) = v40;
                  if ( !v42 )
                    v40 = s1;
                  *(__m128i *)(a2 + 40) = si128;
                  if ( v40 )
                  {
                    *(_QWORD *)&v77 = v40;
                    WORD4(v77) = 256;
                    idati = (char *)get_idati();
                    create_tinfo(a2 + 24, 61, 61, &idati);
                  }
                  *(_DWORD *)(a2 + 68) = 1;
                  *(_BYTE *)(a2 + 72) = 1;
LABEL_49:
                  LODWORD(v7) = 1;
LABEL_50:
                  clear_tinfo_t();
                  if ( v72 )
                  {
                    v73.m128i_i64[0] = 0;
                    qfree(v72);
                  }
                  goto LABEL_52;
                }
              }
              v48 = (__int64)idati;
              if ( idati )
              {
                v49 = v77;
                if ( (_QWORD)v77 )
                {
                  v50 = 0;
                  do
                  {
                    v51 = (_QWORD *)(v48 + 144 * v50);
                    clear_tinfo_t();
                    v52 = v51[5];
                    if ( v52 )
                    {
                      v51[6] = 0;
                      qfree(v52);
                    }
                    v53 = v51[2];
                    if ( v53 )
                    {
                      v51[3] = 0;
                      qfree(v53);
                    }
                    ++v50;
                    v48 = (__int64)idati;
                  }
                  while ( v49 != v50 );
                }
                *(_QWORD *)&v77 = 0;
                qfree(v48);
              }
              goto LABEL_50;
            }
LABEL_19:
            v72 = 0;
            v73 = 0;
            goto LABEL_20;
          }
        }
        if ( under_debugger )
          BUG();
        interr(30730);
LABEL_59:
        if ( __cxa_guard_acquire(&byte_286A8) )
        {
          qword_286B0 = ((_QWORD)xmmword_286C8 == 0) + (_QWORD)xmmword_286C8 - 1LL;
          __cxa_guard_release(&byte_286A8);
        }
      }
      sub_10F10((__int64)&idati, v18, (__int64)&v70);
      v46 = s1;
      if ( (_QWORD)v77 )
        v46 = idati;
      sub_CB10((__int64)"could not import the optional type of %s\n", v46);
      if ( idati )
      {
        *(_QWORD *)&v77 = 0;
        qfree(idati);
      }
      *(_DWORD *)(a2 + 68) = 11;
      LODWORD(v7) = 1;
LABEL_52:
      if ( a3 )
        qfree(a3);
    }
  }
  return (unsigned int)v7;
}
