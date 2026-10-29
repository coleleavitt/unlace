__int64 __fastcall sub_510A0(__int64 a1, __int64 **a2, double a3, double a4, double a5)
{
  __int64 *v6; // rax
  __int64 (__fastcall *v8)(__int64, __int64 *); // rax
  const char **v9; // rax
  const char *v10; // r12
  size_t v11; // rax
  size_t v12; // rbp
  __int64 *v13; // rax
  __int64 (__fastcall *v14)(__int64, char **); // rax
  char *v15; // rax
  char v16; // r12
  __int64 (__fastcall *v17)(__int64, unsigned int *); // rax
  unsigned int *v18; // rax
  __int64 *v19; // rax
  __int64 (__fastcall *v20)(__int64, int *); // rax
  int *v21; // rax
  __int64 v22; // rdi
  const char *v23; // rdx
  __int64 v24; // r8
  __int64 *v25; // rdi
  unsigned int v26; // ebx
  __int64 v28; // rax
  __int64 *v29; // r12
  __int64 v30; // r13
  __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // r14
  __int64 (__fastcall *v34)(__int64, int *); // rax
  int *v35; // rax
  int v36; // eax
  __int64 *v37; // rax
  __int64 (__fastcall *v38)(__int64, __int64 *); // rax
  int *v39; // rax
  int v40; // eax
  __int64 (__fastcall *v41)(__int64, __int64 *); // rax
  _DWORD *v42; // rax
  __int64 (__fastcall *v43)(__int64, char **); // rax
  char **v44; // rax
  char *v45; // rdx
  int tinfo_property; // eax
  void *v47; // rdi
  __int64 v48; // r13
  void *v49; // rax
  __m128 v50; // xmm0
  void *v51; // rdx
  __m128i v52; // xmm0
  __m128i v53; // xmm1
  __int64 *v54; // rax
  __int64 (__fastcall *v55)(__int64, char *); // rax
  char *v56; // rax
  char v57; // al
  __int64 v58; // rdi
  const char *v59; // rcx
  __int64 v60; // rbp
  __m128i v61; // xmm0
  __m128i *v62; // rax
  __int64 v63; // rdi
  __int64 v64; // rax
  __int64 *v65; // rdi
  _BYTE *v66; // rsi
  _BYTE *v67; // rax
  __int64 tinfo_size; // rax
  __int64 v69; // rdx
  char *idati; // rdx
  char *v71; // rdi
  char *v72; // rdi
  int v73; // r12d
  int v74; // [rsp+0h] [rbp-110h]
  char *v75; // [rsp+8h] [rbp-108h]
  char *v76; // [rsp+10h] [rbp-100h]
  char v77; // [rsp+27h] [rbp-E9h] BYREF
  unsigned int v78; // [rsp+28h] [rbp-E8h] BYREF
  int v79; // [rsp+2Ch] [rbp-E4h] BYREF
  int v80; // [rsp+30h] [rbp-E0h] BYREF
  unsigned int v81; // [rsp+34h] [rbp-DCh] BYREF
  __int64 v82; // [rsp+38h] [rbp-D8h] BYREF
  __int64 v83; // [rsp+40h] [rbp-D0h] BYREF
  void *dest; // [rsp+48h] [rbp-C8h] BYREF
  __m128i v85; // [rsp+50h] [rbp-C0h] BYREF
  __int64 v86; // [rsp+68h] [rbp-A8h] BYREF
  __int64 v87[3]; // [rsp+70h] [rbp-A0h] BYREF
  __int64 v88; // [rsp+88h] [rbp-88h] BYREF
  __m128i v89; // [rsp+90h] [rbp-80h] BYREF
  char *s1[3]; // [rsp+A8h] [rbp-68h] BYREF
  int v91; // [rsp+C0h] [rbp-50h]
  __int16 v92; // [rsp+C4h] [rbp-4Ch]
  unsigned __int64 v93; // [rsp+D0h] [rbp-40h]

  v6 = *a2;
  v93 = __readfsqword(0x28u);
  v85 = 0;
  dest = nullptr;
  v8 = (__int64 (__fastcall *)(__int64, __int64 *))v6[18];
  if ( v8 == sub_2D280 )
  {
    v9 = (const char **)sub_2CEC0(a2[2], 0x10000000, 0x10000000u, 0x10000000);
    if ( v9 )
    {
      v10 = *v9;
      if ( *v9 && (v11 = strlen(*v9), (v12 = v11) != 0) )
      {
        v47 = dest;
        v48 = v11 + 1;
        if ( v85.m128i_i64[1] < v11 + 1 )
        {
          dest = (void *)qvector_reserve(&dest, dest, v48, 1);
          v47 = dest;
        }
        v85.m128i_i64[0] = v48;
        memmove(v47, v10, v12);
        *((_BYTE *)dest + v12) = 0;
      }
      else
      {
        v85.m128i_i64[0] = 0;
      }
    }
  }
  else
  {
    v8((__int64)a2, (__int64 *)&dest);
  }
  v13 = *a2;
  v78 = -1;
  v14 = (__int64 (__fastcall *)(__int64, char **))v13[26];
  if ( (char *)v14 == (char *)sub_2DA80 )
  {
    v15 = (char *)sub_2CEC0(a2[2], 4, 1u, 512);
    if ( !v15 )
      goto LABEL_15;
    v16 = *v15;
    LOBYTE(s1[0]) = *v15;
  }
  else
  {
    if ( (unsigned int)v14((__int64)a2, s1) )
      goto LABEL_15;
    v16 = (char)s1[0];
  }
  if ( v16 )
  {
    v17 = (__int64 (__fastcall *)(__int64, unsigned int *))(*a2)[28];
    if ( v17 == sub_2DD80 )
    {
      v18 = (unsigned int *)sub_2CEC0(a2[2], 0x400000, 0x400u, 0x4000000);
      if ( v18 )
      {
        v78 = *v18;
LABEL_13:
        v79 = 0;
        goto LABEL_19;
      }
    }
    else if ( !(unsigned int)v17((__int64)a2, &v78) )
    {
      goto LABEL_13;
    }
  }
LABEL_15:
  v19 = *a2;
  v79 = 0;
  v20 = (__int64 (__fastcall *)(__int64, int *))v19[19];
  if ( v20 == sub_2D130 )
  {
    v21 = (int *)sub_2CEC0(a2[2], 0x20000000, 0x20000000u, 0x20000000);
    if ( v21 )
    {
      v79 = *v21;
LABEL_18:
      v16 = 0;
LABEL_19:
      v22 = *(_QWORD *)(a1 + 16);
      v86 = 1;
      v23 = src;
      v87[0] = 0;
      v24 = *(_QWORD *)(a1 + 8);
      v87[1] = 0;
      if ( v85.m128i_i64[0] )
        v23 = (const char *)dest;
      if ( !(unsigned __int8)sub_4E7E0(v22, (__int64)&v86, v23, a2, v24, nullptr, 0.0, a4, a5) )
        goto LABEL_26;
      if ( v16 )
      {
        v25 = *(__int64 **)(a1 + 40);
        if ( v25 )
        {
          if ( v85.m128i_i64[0] )
            sub_32820(v25, (__int64)v87, dest, v78);
          else
            sub_32820(v25, (__int64)v87, src, v78);
        }
        goto LABEL_26;
      }
      v28 = sub_36E10(*(_QWORD *)(a1 + 16), a2);
      v29 = *(__int64 **)(a1 + 24);
      v30 = v28;
      v31 = v29[1];
      v32 = *v29;
      if ( v29[2] < (unsigned __int64)(v31 + 1) )
      {
        v64 = qvector_reserve(*(_QWORD *)(a1 + 24), v32, v31 + 1, 144);
        *v29 = v64;
        v31 = v29[1];
        v32 = v64;
      }
      v80 = 0;
      v33 = v32 + 144 * v31;
      *(_QWORD *)(v33 + 16) = 0;
      *(_QWORD *)(v33 + 40) = 0;
      *(_QWORD *)(v33 + 112) = 1;
      *(_DWORD *)(v33 + 120) = -1;
      *(_QWORD *)(v33 + 128) = 0;
      *(_BYTE *)(v33 + 136) = 0;
      *(_DWORD *)(v33 + 140) = 0;
      *(_OWORD *)v33 = 0;
      *(_OWORD *)(v33 + 24) = 0;
      *(_OWORD *)(v33 + 48) = 0;
      *(_OWORD *)(v33 + 64) = 0;
      ++v29[1];
      v34 = (__int64 (__fastcall *)(__int64, int *))(*a2)[23];
      if ( v34 == sub_2DCC0 )
      {
        v35 = (int *)sub_2CEC0(a2[2], 0x100000, 0x400u, 0x4000000);
        if ( v35 )
        {
          v36 = *v35;
          v80 = v36;
          goto LABEL_41;
        }
      }
      else
      {
        v34((__int64)a2, &v80);
      }
      v36 = v80;
LABEL_41:
      if ( v36 != 18 )
      {
        if ( v36 != 25 )
          goto LABEL_43;
        v88 = 0;
        copy_tinfo_t(&v88, v87);
        memset(s1, 0, sizeof(s1));
        if ( (v88 & 0x100) != 0 )
        {
          if ( get_tinfo_pdata(s1, v88, 2) )
          {
            if ( s1[1] )
            {
              v75 = s1[0];
              v71 = s1[0];
              v74 = strcmp(s1[0], "$vt");
              if ( v71 )
              {
                s1[1] = nullptr;
                qfree(v75);
              }
              clear_tinfo_t(&v88);
              if ( !v74 )
              {
                s1[0] = nullptr;
                get_stock_tinfo(s1, 7);
                copy_tinfo_t(v87, s1);
                clear_tinfo_t(s1);
LABEL_95:
                v66 = dest;
                if ( v85.m128i_i64[1] <= 9uLL )
                {
                  dest = (void *)qvector_reserve(&dest, dest, 10, 1);
                  v66 = dest;
                }
                v85.m128i_i64[0] = 10;
                *(_QWORD *)v66 = 0x6C62617466765F5FLL;
                v67 = dest;
                v66[8] = 101;
                v67[9] = 0;
                tinfo_size = get_tinfo_size(0, v87[0], 0);
                *(_DWORD *)(v33 + 132) |= 0x100u;
                v30 = tinfo_size;
                goto LABEL_43;
              }
LABEL_92:
              v65 = *(__int64 **)(a1 + 40);
              if ( v65 )
                sub_34B90(v65, v87, 1);
              v83 = 0;
              v88 = 0;
              *(_OWORD *)s1 = 0;
              copy_tinfo_t(&s1[1], &v88);
              s1[2] = nullptr;
              copy_tinfo_t(&s1[2], &v83);
              v91 = 0;
              v92 = 0;
              clear_tinfo_t(&v88);
              clear_tinfo_t(&v83);
              copy_tinfo_t(s1, v87);
              create_tinfo(v87, 10, 10, s1);
              clear_tinfo_t(&s1[2]);
              clear_tinfo_t(&s1[1]);
              clear_tinfo_t(s1);
              goto LABEL_95;
            }
            if ( s1[0] )
              qfree(s1[0]);
          }
          else if ( s1[0] )
          {
            s1[1] = nullptr;
            qfree(s1[0]);
            clear_tinfo_t(&v88);
            goto LABEL_92;
          }
        }
        clear_tinfo_t(&v88);
        goto LABEL_92;
      }
      *(_DWORD *)(v33 + 132) |= 0x20u;
      v54 = *a2;
      v77 = 0;
      v55 = (__int64 (__fastcall *)(__int64, char *))v54[6];
      if ( v55 == sub_2DB00 )
      {
        v56 = (char *)sub_2CEC0(a2[2], 512, 1u, 512);
        if ( v56 )
        {
          v57 = *v56;
          v77 = v57;
          goto LABEL_68;
        }
      }
      else
      {
        v55((__int64)a2, &v77);
      }
      v57 = v77;
LABEL_68:
      if ( v57 )
      {
        *(_DWORD *)(v33 + 132) |= 0x80u;
        *(_BYTE *)(a1 + 49) = 1;
      }
      if ( v79 || !*(_QWORD *)(a1 + 40) )
        goto LABEL_78;
      v58 = *(_QWORD *)(a1 + 16);
      v59 = src;
      if ( v85.m128i_i64[0] )
        v59 = (const char *)dest;
      v88 = 0;
      v89 = 0;
      sub_47410(v58, &v88, &v81, v59, 0);
      v60 = v88;
      if ( !v81 )
      {
        v61 = _mm_loadu_si128(&v89);
        v62 = *(__m128i **)(a1 + 40);
        v63 = v62[3].m128i_i64[1];
        v62[3].m128i_i64[1] = v88;
        v62[4] = v61;
        goto LABEL_76;
      }
      v69 = *(_QWORD *)(a1 + 16);
      v82 = 0;
      idati = *(char **)(v69 + 312);
      LOWORD(s1[2]) = 257;
      s1[1] = (char *)v81;
      if ( !idati )
        idati = (char *)get_idati(v58, &v88);
      s1[0] = idati;
      create_tinfo(&v82, 61, 189, s1);
      v83 = 0;
      copy_tinfo_t(&v83, &v82);
      memset(s1, 0, sizeof(s1));
      if ( (v83 & 0x100) != 0 )
      {
        if ( get_tinfo_pdata(s1, v83, 2) )
        {
          if ( s1[1] )
          {
            v76 = s1[0];
            v72 = s1[0];
            v73 = strcmp(s1[0], "$vt");
            if ( v72 )
            {
              s1[1] = nullptr;
              qfree(v76);
            }
            clear_tinfo_t(&v83);
            if ( !v73 )
              goto LABEL_104;
            goto LABEL_103;
          }
          if ( s1[0] )
            qfree(s1[0]);
        }
        else if ( s1[0] )
        {
          s1[1] = nullptr;
          qfree(s1[0]);
          clear_tinfo_t(&v83);
          goto LABEL_103;
        }
      }
      clear_tinfo_t(&v83);
LABEL_103:
      sub_34B90(*(__int64 **)(a1 + 40), &v82, 0);
LABEL_104:
      clear_tinfo_t(&v82);
      v63 = v60;
LABEL_76:
      if ( v63 )
        qfree(v63);
LABEL_78:
      if ( dest )
      {
        v85.m128i_i64[0] = 0;
        qfree(dest);
        dest = nullptr;
        v85.m128i_i64[1] = 0;
      }
LABEL_43:
      if ( *(_BYTE *)(a1 + 48)
        && (get_tinfo_property(v87[0], 2) & 0xF) == 0xA
        && v85.m128i_i64[0]
        && !strcmp((const char *)dest, "lpVtbl") )
      {
        *(_DWORD *)(v33 + 132) |= 0x100u;
      }
      *(_BYTE *)(a1 + 48) = 0;
      v37 = *a2;
      s1[0] = (char *)(8 * v30);
      LODWORD(v82) = 0;
      LODWORD(v83) = 0;
      v38 = (__int64 (__fastcall *)(__int64, __int64 *))v37[16];
      if ( (char *)v38 == (char *)sub_2DD20 )
      {
        v39 = (int *)sub_2CEC0(a2[2], (__int64)&stru_10000, 0x400u, 0x4000000);
        if ( v39 )
        {
          v40 = *v39;
          LODWORD(v83) = v40;
          goto LABEL_47;
        }
      }
      else
      {
        v38((__int64)a2, &v83);
      }
      v40 = v83;
LABEL_47:
      if ( v40 != 6 )
      {
        copy_tinfo_t(v33 + 64, v87);
LABEL_60:
        v49 = *(void **)(v33 + 16);
        v50 = _mm_loadh_ps((const double *)s1);
        *(_DWORD *)(v33 + 140) = v82;
        *(__m128 *)v33 = v50;
        v51 = dest;
        v52 = _mm_loadu_si128((const __m128i *)(v33 + 24));
        dest = v49;
        *(_QWORD *)(v33 + 16) = v51;
        v53 = _mm_loadu_si128(&v85);
        v85 = v52;
        *(__m128i *)(v33 + 24) = v53;
LABEL_26:
        v26 = 0;
LABEL_27:
        clear_tinfo_t(v87);
        goto LABEL_28;
      }
      v41 = (__int64 (__fastcall *)(__int64, __int64 *))(*a2)[2];
      if ( (char *)v41 == (char *)sub_2DDE0 )
      {
        v42 = (_DWORD *)sub_2CEC0(a2[2], 4096, 0x400u, 0x4000000);
        if ( v42 )
          LODWORD(v82) = *v42;
      }
      else
      {
        v41((__int64)a2, &v82);
      }
      v43 = (__int64 (__fastcall *)(__int64, char **))(*a2)[14];
      if ( (char *)v43 == (char *)sub_2D0F0 )
      {
        v44 = (char **)sub_2CEC0(a2[2], 0x8000000, 0x8000000u, 0x8000000);
        if ( v44 )
        {
          v45 = *v44;
          s1[0] = *v44;
LABEL_54:
          v26 = -2147467259;
          if ( 8 * v30 < (unsigned __int64)&v45[(unsigned int)v82] )
            goto LABEL_27;
          tinfo_property = get_tinfo_property(v87[0], 3);
          LOBYTE(v81) = v30;
          BYTE1(v81) = s1[0];
          BYTE2(v81) = tinfo_property == 2;
          create_tinfo(v33 + 64, 14, 14, &v81);
          goto LABEL_60;
        }
      }
      else
      {
        v43((__int64)a2, s1);
      }
      v45 = s1[0];
      goto LABEL_54;
    }
  }
  else if ( !(unsigned int)v20((__int64)a2, &v79) )
  {
    goto LABEL_18;
  }
  v26 = 0;
LABEL_28:
  if ( dest )
  {
    v85.m128i_i64[0] = 0;
    qfree(dest);
  }
  return v26;
}

