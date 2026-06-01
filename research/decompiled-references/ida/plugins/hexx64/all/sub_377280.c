__int64 __fastcall sub_377280(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, char a5, double a6, __m128 a7)
{
  __int64 v9; // rax
  _QWORD *v10; // rbp
  _QWORD *v11; // r13
  _QWORD *v12; // rdx
  _QWORD *i; // rax
  unsigned __int64 v14; // rbx
  char v15; // r14
  unsigned __int64 v16; // rbp
  void *v17; // rdi
  unsigned __int64 v18; // rdx
  unsigned int v19; // ebx
  __int64 v21; // rax
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rdx
  __m128i si128; // xmm0
  const char *v28; // rdx
  char v29; // r14
  __int64 func; // rax
  char v31; // al
  __int64 cmt; // rax
  __int64 v33; // rdi
  char v34; // al
  const char *v35; // r8
  const char *v36; // rcx
  __int64 (*v37)(__int64, __int64, const char *, ...); // r9
  char v38; // al
  __int64 v39; // rcx
  char v40; // al
  __int64 v41; // rdi
  _QWORD *v42; // rax
  __int64 v43; // rdx
  _QWORD *v44; // rcx
  _QWORD *v45; // rax
  __int64 v46; // rdx
  unsigned __int64 v47; // rcx
  char v48; // al
  unsigned __int64 *segm_by_name; // rax
  unsigned __int64 *v50; // rax
  _BYTE *v51; // rsi
  __int64 v52; // rdx
  size_t v53; // r8
  __int64 v54; // r9
  _QWORD *v56; // [rsp+8h] [rbp-150h]
  _BYTE *v57; // [rsp+10h] [rbp-148h]
  _QWORD *v59; // [rsp+20h] [rbp-138h]
  __int64 v60; // [rsp+20h] [rbp-138h]
  char v61; // [rsp+37h] [rbp-121h]
  size_t v63; // [rsp+40h] [rbp-118h]
  __int64 v64; // [rsp+48h] [rbp-110h]
  unsigned __int64 *v65; // [rsp+50h] [rbp-108h] BYREF
  __int128 v66; // [rsp+58h] [rbp-100h]
  void *src; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v68; // [rsp+78h] [rbp-E0h]
  __m128i v69; // [rsp+90h] [rbp-C8h] BYREF
  _BYTE haystack[24]; // [rsp+B0h] [rbp-A8h] BYREF
  int v71; // [rsp+C8h] [rbp-90h]
  __int64 v72[3]; // [rsp+D0h] [rbp-88h] BYREF
  char v73; // [rsp+E8h] [rbp-70h]
  char v74; // [rsp+F0h] [rbp-68h]
  unsigned __int64 v75; // [rsp+F8h] [rbp-60h]
  __int128 v76; // [rsp+100h] [rbp-58h]
  unsigned __int64 v77; // [rsp+118h] [rbp-40h]

  v77 = __readfsqword(0x28u);
  v66 = 0;
  v65 = nullptr;
  if ( a5 )
  {
    if ( sub_32A850(v72) == -1 )
    {
      segm_by_name = (unsigned __int64 *)get_segm_by_name();
      if ( segm_by_name )
      {
        a7 = (__m128)(segm_by_name[1] - *segm_by_name);
        *(__m128i *)haystack = _mm_unpacklo_epi64((__m128i)*segm_by_name, (__m128i)a7);
        sub_316BB0((__int64 *)&v65, (__m128i *)haystack, *(double *)haystack, a7);
      }
      v50 = (unsigned __int64 *)get_segm_by_name();
      if ( v50 )
      {
        *(__m128i *)haystack = _mm_unpacklo_epi64((__m128i)*v50, (__m128i)(v50[1] - *v50));
        sub_316BB0((__int64 *)&v65, (__m128i *)haystack, *(double *)haystack, a7);
      }
    }
    else
    {
      v69 = (__m128i)_mm_loadh_ps((const double *)v72);
      sub_316BB0((__int64 *)&v65, &v69, *(double *)v69.m128i_i64, a7);
    }
    v61 = 0;
    v9 = a1[141];
  }
  else
  {
    v9 = a1[141];
    v10 = *(_QWORD **)(v9 + 8);
    if ( v10 && *(_QWORD *)(v9 + 16) && (v11 = (_QWORD *)v10[1], v10 != v11) )
    {
      while ( (unsigned int)get_tinfo_property() != 128 )
      {
        if ( (*v11 & 2) == 0 )
        {
          v12 = (_QWORD *)v11[2];
          if ( (*(_BYTE *)v12 & 2) != 0 )
          {
            v45 = (_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFFCLL);
            v46 = *v45;
            if ( (*v45 & 2) == 0 )
            {
              while ( (_QWORD *)v45[2] == v11 )
              {
                v11 = v45;
                v47 = v46 & 0xFFFFFFFFFFFFFFFCLL;
                v46 = *(_QWORD *)(v46 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v46 & 2) != 0 )
                {
                  v11 = (_QWORD *)v47;
                  goto LABEL_11;
                }
                v45 = (_QWORD *)v47;
              }
            }
            v11 = v45;
          }
          else
          {
            for ( i = (_QWORD *)v12[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
              v12 = i;
            v11 = v12;
          }
        }
LABEL_11:
        if ( v10 == v11 )
        {
          v61 = 0;
          v9 = a1[141];
          goto LABEL_14;
        }
      }
      v61 = 1;
      v9 = a1[141];
    }
    else
    {
      v61 = 0;
    }
  }
LABEL_14:
  v72[2] = a3;
  v72[0] = (__int64)off_4E6330;
  v73 = 0;
  v72[1] = a2;
  v56 = *(_QWORD **)(v9 + 8);
  if ( !v56 || !*(_QWORD *)(v9 + 16) || (v14 = v56[1], v56 == (_QWORD *)v14) )
  {
LABEL_27:
    v19 = 1;
    goto LABEL_28;
  }
  v15 = 0;
  while ( 1 )
  {
    if ( a5 == ((get_tinfo_property() & 0xF) == 12) )
      goto LABEL_23;
    v16 = *(_QWORD *)(v14 + 24);
    src = nullptr;
    v68 = 0;
    if ( !(unsigned __int8)get_tid_name() || get_udm_by_fullname() == -1 )
    {
      if ( !a5 )
        break;
      v21 = a1[143];
      if ( !v21 )
        break;
      v22 = (_QWORD *)(v21 + 8);
      v23 = *(_QWORD **)(v21 + 16);
      if ( v23 )
      {
        v24 = v22;
        do
        {
          while ( 1 )
          {
            v25 = v23[2];
            v26 = v23[3];
            if ( v23[4] < v16 )
              break;
            v24 = v23;
            v23 = (_QWORD *)v23[2];
            if ( !v25 )
              goto LABEL_38;
          }
          v23 = (_QWORD *)v23[3];
        }
        while ( v26 );
LABEL_38:
        if ( v22 != v24 && v16 >= v24[4] )
          break;
      }
    }
LABEL_21:
    v17 = src;
    if ( src )
      goto LABEL_22;
LABEL_23:
    if ( (*(_QWORD *)v14 & 2) != 0 )
    {
LABEL_26:
      if ( v56 == (_QWORD *)v14 )
        goto LABEL_27;
    }
    else
    {
      v18 = *(_QWORD *)(v14 + 16);
      if ( (*(_BYTE *)v18 & 2) == 0 )
      {
        do
        {
          v14 = v18;
          v18 = *(_QWORD *)(v18 + 8);
        }
        while ( (*(_BYTE *)v18 & 2) == 0 );
        goto LABEL_26;
      }
      v42 = (_QWORD *)(*(_QWORD *)v14 & 0xFFFFFFFFFFFFFFFCLL);
      v43 = *v42;
      if ( (*v42 & 2) == 0 && v42[2] == v14 )
      {
        do
        {
          v14 = v43 & 0xFFFFFFFFFFFFFFFCLL;
          v43 = *(_QWORD *)(v43 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v43 & 2) != 0 )
            goto LABEL_26;
          v44 = v42;
          v42 = (_QWORD *)v14;
        }
        while ( *(_QWORD **)(v14 + 16) == v44 );
      }
      v14 = (unsigned __int64)v42;
      if ( v56 == v42 )
        goto LABEL_27;
    }
  }
  si128.m128i_i64[0] = 0;
  memset(&v69, 0, 24);
  if ( get_ea_name() <= 0 )
  {
LABEL_81:
    if ( v69.m128i_i64[0] )
    {
      v69.m128i_i64[1] = 0;
      qfree(v69.m128i_i64[0]);
    }
    goto LABEL_21;
  }
  if ( v15
    || (*(unsigned __int8 (__fastcall **)(__int64, __int64, void *, __int64, double, double))(*(_QWORD *)a3 + 32LL))(
         a3,
         a2,
         &unk_4190BD,
         a4,
         0.0,
         *(double *)a7.m128_u64)
    && (!v61
     || (*(unsigned __int8 (__fastcall **)(__int64, __int64, const char *))(*(_QWORD *)a3 + 32LL))(
          a3,
          a2,
          "#define __thiscall __cdecl // Test compile in C mode\n\n")) )
  {
    calc_c_cpp_name();
    v28 = (const char *)v69.m128i_i64[0];
    v29 = 1;
    if ( !*(_BYTE *)v69.m128i_i64[0] )
      goto LABEL_58;
    v59 = (_QWORD *)a1[14];
    v29 = is_spec_ea();
    if ( v29 )
      goto LABEL_57;
    v29 = (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, double, double))(*v59 + 144LL))(
            v59,
            v16,
            0.0,
            *(double *)a7.m128_u64);
    if ( v29 )
      goto LABEL_57;
    func = get_func();
    if ( func )
    {
      if ( (*(_BYTE *)(func + 16) & 4) != 0 && (*(_BYTE *)(v59[12] + 607LL) & 1) == 0 )
      {
LABEL_125:
        v28 = (const char *)v69.m128i_i64[0];
        v29 = 1;
        goto LABEL_58;
      }
      v31 = sub_374D90(func);
      if ( v31 )
      {
        v28 = (const char *)v69.m128i_i64[0];
        v29 = v31;
LABEL_58:
        *(_QWORD *)&v68 = 0;
        if ( !(unsigned __int8)sub_32B7F0((__int64 *)&src, v14 + 80, v28) )
        {
          if ( !a5 )
          {
            sub_6B870((__int64 *)&src);
            if ( !v29 )
              goto LABEL_61;
            goto LABEL_91;
          }
          v15 = a5;
          goto LABEL_81;
        }
        if ( !a5 )
        {
          if ( !v29 )
            goto LABEL_61;
LABEL_91:
          v48 = (*(__int64 (**)(__int64, __int64, const char *, ...))(*(_QWORD *)a3 + 32LL))(
                  a3,
                  a2,
                  "// %s%s;",
                  (const char *)&unk_418793,
                  (const char *)src);
LABEL_92:
          if ( !v48 )
            goto LABEL_126;
          v39 = *(_QWORD *)a3;
          v37 = *(__int64 (**)(__int64, __int64, const char *, ...))(*(_QWORD *)a3 + 32LL);
          if ( *(int *)(v14 + 88) <= 1 )
          {
            if ( *(_DWORD *)(v14 + 88) != 1 )
            {
LABEL_68:
              v40 = (*(__int64 (__fastcall **)(__int64, __int64, char *, double, double))(v39 + 32))(
                      a3,
                      a2,
                      "\n",
                      *(double *)si128.m128i_i64,
                      *(double *)a7.m128_u64);
              v41 = v69.m128i_i64[0];
              v15 = v40;
              if ( !v40 )
                goto LABEL_127;
              if ( v69.m128i_i64[0] )
              {
                v69.m128i_i64[1] = 0;
                qfree(v69.m128i_i64[0]);
              }
              v17 = src;
              if ( !src )
                goto LABEL_23;
LABEL_22:
              *(_QWORD *)&v68 = 0;
              qfree((__int64)v17);
              goto LABEL_23;
            }
            v35 = "idb";
          }
          else
          {
            v35 = "weak";
          }
          v36 = (const char *)&unk_418793;
          goto LABEL_65;
        }
        if ( !sub_317040(&v65, v16) )
        {
          if ( !v29 )
          {
LABEL_98:
            if ( (unsigned __int8)is_mapped() && !(unsigned __int8)is_spec_ea() )
            {
              if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, void *, void *, double, double))(*(_QWORD *)a3 + 32LL))(
                      a3,
                      a2,
                      &unk_4190BD,
                      src,
                      0.0,
                      *(double *)a7.m128_u64) )
                goto LABEL_126;
              if ( (unsigned __int8)is_loaded() )
              {
                v76 = 0;
                si128 = _mm_load_si128((const __m128i *)&xmmword_4249B0);
                v74 = 2;
                v75 = v16;
                *(_QWORD *)&haystack[16] = 0x5000000000LL;
                v71 = 2;
                v73 = 0;
                *(__m128i *)haystack = si128;
                print_cdata();
                free_idcv();
              }
              v34 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)a3 + 32LL))(a3, a2, ";");
              goto LABEL_62;
            }
LABEL_61:
            v34 = (*(__int64 (**)(__int64, __int64, char *, ...))(*(_QWORD *)a3 + 32LL))(
                    a3,
                    a2,
                    "%s;",
                    (const char *)src);
LABEL_62:
            if ( !v34 )
              goto LABEL_126;
            if ( *(int *)(v14 + 88) <= 1 )
            {
              if ( *(_DWORD *)(v14 + 88) != 1 )
              {
LABEL_67:
                v39 = *(_QWORD *)a3;
                goto LABEL_68;
              }
              v38 = (*(__int64 (**)(__int64, __int64, char *, ...))(*(_QWORD *)a3 + 32LL))(
                      a3,
                      a2,
                      " %s%s",
                      "// ",
                      "idb");
LABEL_66:
              if ( !v38 )
                goto LABEL_126;
              goto LABEL_67;
            }
            v35 = "weak";
            v36 = "// ";
            v37 = *(__int64 (**)(__int64, __int64, const char *, ...))(*(_QWORD *)a3 + 32LL);
LABEL_65:
            v38 = v37(a3, a2, " %s%s", v36, v35);
            goto LABEL_66;
          }
LABEL_116:
          v48 = (*(__int64 (**)(__int64, __int64, const char *, ...))(*(_QWORD *)a3 + 32LL))(
                  a3,
                  a2,
                  "// %s%s;",
                  "extern ",
                  (const char *)src);
          goto LABEL_92;
        }
        v51 = src;
        if ( (_QWORD)v68 )
        {
          v52 = v68 + 9;
          v53 = v68 - 1;
          v54 = v68 + 8;
          if ( *((_QWORD *)&v68 + 1) >= (unsigned __int64)(v68 + 9) )
            goto LABEL_122;
        }
        else
        {
          if ( *((_QWORD *)&v68 + 1) > 9u )
          {
            *(_QWORD *)&v68 = 10;
            *((_BYTE *)src + 9) = 0;
            goto LABEL_115;
          }
          v53 = 0;
          v52 = 10;
          v54 = 9;
        }
        v64 = v54;
        v63 = v53;
        v60 = v52;
        src = (void *)qvector_reserve((__int64)&src, (__int64)src, v52, 1);
        v54 = v64;
        v51 = src;
        v53 = v63;
        v52 = v60;
LABEL_122:
        *(_QWORD *)&v68 = v52;
        v51[v54] = 0;
        v51 = src;
        if ( v53 )
        {
          v57 = src;
          memmove((char *)src + 9, src, v53);
          v51 = v57;
        }
LABEL_115:
        v51[8] = 32;
        *(_QWORD *)v51 = 0x6461657268745F5FLL;
        if ( !v29 )
          goto LABEL_98;
        goto LABEL_116;
      }
    }
    if ( (unsigned int)get_tinfo_property() - 208 > 0x2F )
    {
      si128.m128i_i64[0] = 0;
      memset(haystack, 0, sizeof(haystack));
      cmt = get_cmt();
      v33 = *(_QWORD *)haystack;
      if ( cmt > 0 )
      {
        v33 = *(_QWORD *)haystack;
        v29 = strstr(*(const char **)haystack, "vd:hide") != nullptr;
      }
      if ( v33 )
      {
        *(_QWORD *)&haystack[8] = 0;
        qfree(v33);
      }
LABEL_57:
      v28 = (const char *)v69.m128i_i64[0];
      goto LABEL_58;
    }
    goto LABEL_125;
  }
LABEL_126:
  v41 = v69.m128i_i64[0];
LABEL_127:
  if ( v41 )
  {
    v69.m128i_i64[1] = 0;
    qfree(v41);
  }
  if ( src )
  {
    *(_QWORD *)&v68 = 0;
    qfree((__int64)src);
  }
  v19 = 0;
LABEL_28:
  if ( v65 )
  {
    *(_QWORD *)&v66 = 0;
    qfree((__int64)v65);
  }
  return v19;
}

