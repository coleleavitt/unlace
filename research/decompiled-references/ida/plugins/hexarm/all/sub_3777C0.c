__int64 __fastcall sub_3777C0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, char a5, double a6, __m128 a7)
{
  __int64 v9; // rax
  _QWORD *v10; // rbp
  _QWORD *v11; // r13
  _QWORD *v12; // rdx
  _QWORD *i; // rax
  unsigned __int64 v14; // rbx
  char v15; // r14
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rdx
  unsigned int v18; // ebx
  __int64 v20; // rax
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rdx
  const char *v26; // rdx
  char v27; // r14
  __int64 func; // rax
  char v29; // al
  __int64 cmt; // rax
  __int64 v31; // rdi
  char v32; // al
  const char *v33; // r8
  const char *v34; // rcx
  __int64 (*v35)(__int64, __int64, const char *, ...); // r9
  char v36; // al
  __int64 v37; // rcx
  char v38; // al
  __int64 v39; // rdi
  _QWORD *v40; // rax
  __int64 v41; // rdx
  _QWORD *v42; // rcx
  _QWORD *v43; // rax
  __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  char v46; // al
  unsigned __int64 *segm_by_name; // rax
  unsigned __int64 *v48; // rax
  _BYTE *v49; // rsi
  __int64 v50; // rdx
  size_t v51; // r8
  __int64 v52; // r9
  _QWORD *v54; // [rsp+8h] [rbp-150h]
  _BYTE *v55; // [rsp+10h] [rbp-148h]
  _QWORD *v57; // [rsp+20h] [rbp-138h]
  __int64 v58; // [rsp+20h] [rbp-138h]
  char v59; // [rsp+37h] [rbp-121h]
  size_t v61; // [rsp+40h] [rbp-118h]
  __int64 v62; // [rsp+48h] [rbp-110h]
  unsigned __int64 *v63; // [rsp+50h] [rbp-108h] BYREF
  __int128 v64; // [rsp+58h] [rbp-100h]
  void *src; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v66; // [rsp+78h] [rbp-E0h]
  __m128i v67; // [rsp+90h] [rbp-C8h] BYREF
  _BYTE haystack[24]; // [rsp+B0h] [rbp-A8h] BYREF
  int v69; // [rsp+C8h] [rbp-90h]
  __int64 v70[3]; // [rsp+D0h] [rbp-88h] BYREF
  char v71; // [rsp+E8h] [rbp-70h]
  char v72; // [rsp+F0h] [rbp-68h]
  unsigned __int64 v73; // [rsp+F8h] [rbp-60h]
  __int128 v74; // [rsp+100h] [rbp-58h]
  unsigned __int64 v75; // [rsp+118h] [rbp-40h]

  v75 = __readfsqword(0x28u);
  v64 = 0;
  v63 = nullptr;
  if ( a5 )
  {
    if ( sub_32AB80(v70) == -1 )
    {
      segm_by_name = (unsigned __int64 *)get_segm_by_name();
      if ( segm_by_name )
      {
        a7 = (__m128)(segm_by_name[1] - *segm_by_name);
        *(__m128i *)haystack = _mm_unpacklo_epi64((__m128i)*segm_by_name, (__m128i)a7);
        sub_316F70((__int64 *)&v63, (__m128i *)haystack, *(double *)haystack, a7);
      }
      v48 = (unsigned __int64 *)get_segm_by_name();
      if ( v48 )
      {
        *(__m128i *)haystack = _mm_unpacklo_epi64((__m128i)*v48, (__m128i)(v48[1] - *v48));
        sub_316F70((__int64 *)&v63, (__m128i *)haystack, *(double *)haystack, a7);
      }
    }
    else
    {
      v67 = (__m128i)_mm_loadh_ps((const double *)v70);
      sub_316F70((__int64 *)&v63, &v67, *(double *)v67.m128i_i64, a7);
    }
    v59 = 0;
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
            v43 = (_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFFCLL);
            v44 = *v43;
            if ( (*v43 & 2) == 0 )
            {
              while ( (_QWORD *)v43[2] == v11 )
              {
                v11 = v43;
                v45 = v44 & 0xFFFFFFFFFFFFFFFCLL;
                v44 = *(_QWORD *)(v44 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v44 & 2) != 0 )
                {
                  v11 = (_QWORD *)v45;
                  goto LABEL_11;
                }
                v43 = (_QWORD *)v45;
              }
            }
            v11 = v43;
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
          v59 = 0;
          v9 = a1[141];
          goto LABEL_14;
        }
      }
      v59 = 1;
      v9 = a1[141];
    }
    else
    {
      v59 = 0;
    }
  }
LABEL_14:
  v70[2] = a3;
  v70[0] = (__int64)off_4E09F0;
  v71 = 0;
  v70[1] = a2;
  v54 = *(_QWORD **)(v9 + 8);
  if ( !v54 || !*(_QWORD *)(v9 + 16) || (v14 = v54[1], v54 == (_QWORD *)v14) )
  {
LABEL_27:
    v18 = 1;
    goto LABEL_28;
  }
  v15 = 0;
  while ( 1 )
  {
    if ( a5 == ((get_tinfo_property() & 0xF) == 12) )
      goto LABEL_23;
    v16 = *(_QWORD *)(v14 + 24);
    src = nullptr;
    v66 = 0;
    if ( !(unsigned __int8)get_tid_name() || get_udm_by_fullname() == -1 )
    {
      if ( !a5 )
        break;
      v20 = a1[143];
      if ( !v20 )
        break;
      v21 = (_QWORD *)(v20 + 8);
      v22 = *(_QWORD **)(v20 + 16);
      if ( v22 )
      {
        v23 = v21;
        do
        {
          while ( 1 )
          {
            v24 = v22[2];
            v25 = v22[3];
            if ( v22[4] < v16 )
              break;
            v23 = v22;
            v22 = (_QWORD *)v22[2];
            if ( !v24 )
              goto LABEL_38;
          }
          v22 = (_QWORD *)v22[3];
        }
        while ( v25 );
LABEL_38:
        if ( v21 != v23 && v16 >= v23[4] )
          break;
      }
    }
LABEL_21:
    if ( src )
      goto LABEL_22;
LABEL_23:
    if ( (*(_QWORD *)v14 & 2) != 0 )
    {
LABEL_26:
      if ( v54 == (_QWORD *)v14 )
        goto LABEL_27;
    }
    else
    {
      v17 = *(_QWORD *)(v14 + 16);
      if ( (*(_BYTE *)v17 & 2) == 0 )
      {
        do
        {
          v14 = v17;
          v17 = *(_QWORD *)(v17 + 8);
        }
        while ( (*(_BYTE *)v17 & 2) == 0 );
        goto LABEL_26;
      }
      v40 = (_QWORD *)(*(_QWORD *)v14 & 0xFFFFFFFFFFFFFFFCLL);
      v41 = *v40;
      if ( (*v40 & 2) == 0 && v40[2] == v14 )
      {
        do
        {
          v14 = v41 & 0xFFFFFFFFFFFFFFFCLL;
          v41 = *(_QWORD *)(v41 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v41 & 2) != 0 )
            goto LABEL_26;
          v42 = v40;
          v40 = (_QWORD *)v14;
        }
        while ( *(_QWORD **)(v14 + 16) == v42 );
      }
      v14 = (unsigned __int64)v40;
      if ( v54 == v40 )
        goto LABEL_27;
    }
  }
  memset(&v67, 0, 24);
  if ( get_ea_name() <= 0 )
  {
LABEL_81:
    if ( v67.m128i_i64[0] )
    {
      v67.m128i_i64[1] = 0;
      qfree();
    }
    goto LABEL_21;
  }
  if ( v15
    || (*(unsigned __int8 (__fastcall **)(__int64, __int64, void *, __int64))(*(_QWORD *)a3 + 32LL))(
         a3,
         a2,
         &unk_4130E0,
         a4)
    && (!v59
     || (*(unsigned __int8 (__fastcall **)(__int64, __int64, const char *))(*(_QWORD *)a3 + 32LL))(
          a3,
          a2,
          "#define __thiscall __cdecl // Test compile in C mode\n\n")) )
  {
    calc_c_cpp_name();
    v26 = (const char *)v67.m128i_i64[0];
    v27 = 1;
    if ( !*(_BYTE *)v67.m128i_i64[0] )
      goto LABEL_58;
    v57 = (_QWORD *)a1[14];
    v27 = is_spec_ea();
    if ( v27 )
      goto LABEL_57;
    v27 = (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64))(*v57 + 144LL))(v57, v16);
    if ( v27 )
      goto LABEL_57;
    func = get_func();
    if ( func )
    {
      if ( (*(_BYTE *)(func + 16) & 4) != 0 && (*(_BYTE *)(v57[12] + 607LL) & 1) == 0 )
      {
LABEL_125:
        v26 = (const char *)v67.m128i_i64[0];
        v27 = 1;
        goto LABEL_58;
      }
      v29 = sub_3752D0(func);
      if ( v29 )
      {
        v26 = (const char *)v67.m128i_i64[0];
        v27 = v29;
LABEL_58:
        *(_QWORD *)&v66 = 0;
        if ( !(unsigned __int8)sub_32BB20((__int64 *)&src, v14 + 80, v26) )
        {
          if ( !a5 )
          {
            sub_6B2B0((__int64 *)&src);
            if ( !v27 )
              goto LABEL_61;
            goto LABEL_91;
          }
          v15 = a5;
          goto LABEL_81;
        }
        if ( !a5 )
        {
          if ( !v27 )
            goto LABEL_61;
LABEL_91:
          v46 = (*(__int64 (**)(__int64, __int64, const char *, ...))(*(_QWORD *)a3 + 32LL))(
                  a3,
                  a2,
                  "// %s%s;",
                  (const char *)&unk_412793,
                  (const char *)src);
LABEL_92:
          if ( !v46 )
            goto LABEL_126;
          v37 = *(_QWORD *)a3;
          v35 = *(__int64 (**)(__int64, __int64, const char *, ...))(*(_QWORD *)a3 + 32LL);
          if ( *(int *)(v14 + 88) <= 1 )
          {
            if ( *(_DWORD *)(v14 + 88) != 1 )
            {
LABEL_68:
              v38 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(v37 + 32))(a3, a2, "\n");
              v39 = v67.m128i_i64[0];
              v15 = v38;
              if ( !v38 )
                goto LABEL_127;
              if ( v67.m128i_i64[0] )
              {
                v67.m128i_i64[1] = 0;
                qfree();
              }
              if ( !src )
                goto LABEL_23;
LABEL_22:
              *(_QWORD *)&v66 = 0;
              qfree();
              goto LABEL_23;
            }
            v33 = "idb";
          }
          else
          {
            v33 = "weak";
          }
          v34 = (const char *)&unk_412793;
          goto LABEL_65;
        }
        if ( !sub_317400(&v63, v16) )
        {
          if ( !v27 )
          {
LABEL_98:
            if ( (unsigned __int8)is_mapped() && !(unsigned __int8)is_spec_ea() )
            {
              if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, void *, void *))(*(_QWORD *)a3 + 32LL))(
                      a3,
                      a2,
                      &unk_4130E0,
                      src) )
                goto LABEL_126;
              if ( (unsigned __int8)is_loaded() )
              {
                v74 = 0;
                v72 = 2;
                v73 = v16;
                *(_QWORD *)&haystack[16] = 0x5000000000LL;
                v69 = 2;
                v71 = 0;
                *(__m128i *)haystack = _mm_load_si128((const __m128i *)&xmmword_41FAB0);
                print_cdata();
                free_idcv();
              }
              v32 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)a3 + 32LL))(a3, a2, ";");
              goto LABEL_62;
            }
LABEL_61:
            v32 = (*(__int64 (**)(__int64, __int64, char *, ...))(*(_QWORD *)a3 + 32LL))(
                    a3,
                    a2,
                    "%s;",
                    (const char *)src);
LABEL_62:
            if ( !v32 )
              goto LABEL_126;
            if ( *(int *)(v14 + 88) <= 1 )
            {
              if ( *(_DWORD *)(v14 + 88) != 1 )
              {
LABEL_67:
                v37 = *(_QWORD *)a3;
                goto LABEL_68;
              }
              v36 = (*(__int64 (**)(__int64, __int64, char *, ...))(*(_QWORD *)a3 + 32LL))(
                      a3,
                      a2,
                      " %s%s",
                      "// ",
                      "idb");
LABEL_66:
              if ( !v36 )
                goto LABEL_126;
              goto LABEL_67;
            }
            v33 = "weak";
            v34 = "// ";
            v35 = *(__int64 (**)(__int64, __int64, const char *, ...))(*(_QWORD *)a3 + 32LL);
LABEL_65:
            v36 = v35(a3, a2, " %s%s", v34, v33);
            goto LABEL_66;
          }
LABEL_116:
          v46 = (*(__int64 (**)(__int64, __int64, const char *, ...))(*(_QWORD *)a3 + 32LL))(
                  a3,
                  a2,
                  "// %s%s;",
                  "extern ",
                  (const char *)src);
          goto LABEL_92;
        }
        v49 = src;
        if ( (_QWORD)v66 )
        {
          v50 = v66 + 9;
          v51 = v66 - 1;
          v52 = v66 + 8;
          if ( *((_QWORD *)&v66 + 1) >= (unsigned __int64)(v66 + 9) )
            goto LABEL_122;
        }
        else
        {
          if ( *((_QWORD *)&v66 + 1) > 9u )
          {
            *(_QWORD *)&v66 = 10;
            *((_BYTE *)src + 9) = 0;
            goto LABEL_115;
          }
          v51 = 0;
          v50 = 10;
          v52 = 9;
        }
        v62 = v52;
        v61 = v51;
        v58 = v50;
        src = (void *)qvector_reserve();
        v52 = v62;
        v49 = src;
        v51 = v61;
        v50 = v58;
LABEL_122:
        *(_QWORD *)&v66 = v50;
        v49[v52] = 0;
        v49 = src;
        if ( v51 )
        {
          v55 = src;
          memmove((char *)src + 9, src, v51);
          v49 = v55;
        }
LABEL_115:
        v49[8] = 32;
        *(_QWORD *)v49 = 0x6461657268745F5FLL;
        if ( !v27 )
          goto LABEL_98;
        goto LABEL_116;
      }
    }
    if ( (unsigned int)get_tinfo_property() - 208 > 0x2F )
    {
      memset(haystack, 0, sizeof(haystack));
      cmt = get_cmt();
      v31 = *(_QWORD *)haystack;
      if ( cmt > 0 )
      {
        v31 = *(_QWORD *)haystack;
        v27 = strstr(*(const char **)haystack, "vd:hide") != nullptr;
      }
      if ( v31 )
      {
        *(_QWORD *)&haystack[8] = 0;
        qfree();
      }
LABEL_57:
      v26 = (const char *)v67.m128i_i64[0];
      goto LABEL_58;
    }
    goto LABEL_125;
  }
LABEL_126:
  v39 = v67.m128i_i64[0];
LABEL_127:
  if ( v39 )
  {
    v67.m128i_i64[1] = 0;
    qfree();
  }
  if ( src )
  {
    *(_QWORD *)&v66 = 0;
    qfree();
  }
  v18 = 0;
LABEL_28:
  if ( v63 )
  {
    *(_QWORD *)&v64 = 0;
    qfree();
  }
  return v18;
}

