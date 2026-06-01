__int64 __fastcall sub_399920(_QWORD *a1, const __m128i *a2, double a3, __m128i a4, __m128i a5, double a6)
{
  __int64 v6; // rdi
  unsigned int v7; // ebx
  __m128i v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // r13
  __int64 v17; // r12
  _QWORD *v18; // r15
  __int64 v19; // rdi
  __int64 v20; // rdi
  _DWORD *v22; // rax
  __int32 v23; // edx
  __int64 v24; // rax
  int v25; // edx
  void *v26; // rax
  __m128i v27; // xmm0
  unsigned __int64 v28; // r14
  size_t v29; // r8
  __int64 v30; // r15
  __int64 v31; // r9
  __int64 v32; // rsi
  int v33; // eax
  int v34; // r14d
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  const char *v40; // rax
  __int64 v41; // rdx
  unsigned __int64 v42; // r15
  __int64 v43; // rdx
  const char *v44; // rax
  unsigned __int64 v45; // r14
  const char *v46; // r8
  __int64 v47; // r9
  unsigned __int64 i; // rax
  const char *v49; // rsi
  const char *v50; // rdx
  unsigned int type_ordinal; // eax
  __int64 v52; // rsi
  const char *v53; // [rsp-10h] [rbp-1F0h]
  unsigned __int64 v54; // [rsp+10h] [rbp-1D0h]
  __int64 v55; // [rsp+10h] [rbp-1D0h]
  void *v56; // [rsp+18h] [rbp-1C8h]
  void *v57; // [rsp+18h] [rbp-1C8h]
  void *v58; // [rsp+18h] [rbp-1C8h]
  _QWORD v60[2]; // [rsp+38h] [rbp-1A8h] BYREF
  __int64 v61; // [rsp+48h] [rbp-198h]
  __m128i v62; // [rsp+50h] [rbp-190h] BYREF
  __int64 v63; // [rsp+60h] [rbp-180h]
  _DWORD *v64; // [rsp+70h] [rbp-170h] BYREF
  __int128 v65; // [rsp+78h] [rbp-168h]
  void *src; // [rsp+90h] [rbp-150h] BYREF
  __m128i v67; // [rsp+98h] [rbp-148h] BYREF
  const char *v68; // [rsp+B0h] [rbp-130h] BYREF
  __int128 v69; // [rsp+B8h] [rbp-128h]
  __int64 v70; // [rsp+D0h] [rbp-110h] BYREF
  __int128 v71; // [rsp+D8h] [rbp-108h]
  __int128 v72; // [rsp+E8h] [rbp-F8h]
  __int64 v73; // [rsp+F8h] [rbp-E8h]
  int v74; // [rsp+100h] [rbp-E0h]
  __int128 v75; // [rsp+110h] [rbp-D0h] BYREF
  void *v76; // [rsp+120h] [rbp-C0h]
  __m128i v77; // [rsp+128h] [rbp-B8h] BYREF
  __int64 v78; // [rsp+138h] [rbp-A8h]
  __int128 v79; // [rsp+140h] [rbp-A0h]
  __int128 v80; // [rsp+150h] [rbp-90h]
  __int64 v81; // [rsp+180h] [rbp-60h]
  int v82; // [rsp+188h] [rbp-58h]
  __int64 v83; // [rsp+190h] [rbp-50h]
  char v84; // [rsp+198h] [rbp-48h]
  unsigned __int64 v85; // [rsp+1A8h] [rbp-38h]

  v6 = a1[4];
  v85 = __readfsqword(0x28u);
  v71 = 0;
  v70 = 0;
  v73 = 0;
  v74 = 1;
  v72 = 0;
  v7 = sub_2574C0(v6, (__int64)a2, (__int64)&v70);
  if ( !(_BYTE)v7 )
    goto LABEL_11;
  v8 = _mm_loadu_si128(a2);
  v9 = a2[1].m128i_i64[0];
  v60[0] = 0;
  v63 = v9;
  v62 = v8;
  if ( !(unsigned __int8)sub_32E590((__int64)v60, (__int64)&v70) && sub_32E6D0() )
  {
    v65 = 0;
    v64 = nullptr;
    v22 = (_DWORD *)qvector_reserve((__int64)&v64, 0, 8, 1);
    v64 = v22;
    *(_QWORD *)&v65 = 8;
    *v22 = 1970435187;
    *(_DWORD *)((char *)v22 + 3) = 1601463157;
    *((_BYTE *)v64 + 7) = 0;
    v23 = a2->m128i_i32[0];
    src = nullptr;
    v24 = a2->m128i_i64[1];
    v67 = 0;
    if ( v23 == 1 )
    {
      v25 = *(_DWORD *)(v24 + 8);
      if ( v25 != 65 )
      {
LABEL_25:
        if ( v25 == 64 )
        {
          sub_263730((__int64 *)&src);
        }
        else
        {
          v76 = nullptr;
          v78 = 0;
          v81 = 1;
          v82 = -1;
          v83 = 0;
          v84 = 0;
          v75 = 0;
          v77 = 0;
          v79 = 0;
          v80 = 0;
          if ( (unsigned int)sub_38D3D0((__int64)a2, &v75, nullptr, nullptr, 0.0) != -1 )
          {
            v26 = src;
            v27 = _mm_loadu_si128(&v67);
            a4 = _mm_loadu_si128(&v77);
            src = v76;
            v76 = v26;
            v67 = a4;
            v77 = v27;
          }
          clear_tinfo_t();
          if ( v78 )
          {
            *(_QWORD *)&v79 = 0;
            qfree(v78);
          }
          if ( v76 )
          {
            v77.m128i_i64[0] = 0;
            qfree((__int64)v76);
          }
        }
        goto LABEL_32;
      }
      v41 = *(_QWORD *)(*(_QWORD *)(v24 + 24) + 432LL) + 104LL * *(int *)(v24 + 32);
    }
    else
    {
      if ( v23 != 2 )
      {
LABEL_24:
        v25 = *(_DWORD *)(v24 + 8);
        goto LABEL_25;
      }
      v41 = v24;
    }
    if ( v41 )
    {
      if ( &src == (void **)(v41 + 32) || (v42 = *(_QWORD *)(v41 + 40), v42 < 2) )
      {
LABEL_39:
        v33 = 0;
        if ( (_QWORD)v65 )
          v33 = v65 - 1;
        v34 = 0;
        v56 = (void *)v33;
        v54 = v33 + 1LL;
        while ( (unsigned int)get_named_type() )
        {
          if ( ++v34 )
          {
            v35 = (__int64)v64;
            v36 = (__int64)v64;
            if ( v56 )
            {
              v43 = v65;
              if ( (unsigned __int64)v65 < v54 )
              {
                if ( *((_QWORD *)&v65 + 1) < v54 )
                {
                  v36 = qvector_reserve((__int64)&v64, (__int64)v64, v54, 1);
                  v64 = (_DWORD *)v36;
                  v43 = v65;
                }
                memset((void *)(v36 + v43), 0, v54 - v43);
                v35 = (__int64)v64;
                *(_QWORD *)&v65 = v54;
              }
              else if ( v54 != (_QWORD)v65 )
              {
                *(_QWORD *)&v65 = v54;
              }
              *((_BYTE *)v56 + v35) = 0;
            }
            else if ( v64 )
            {
              *(_QWORD *)&v65 = 0;
              qfree((__int64)v64);
              v64 = nullptr;
              *((_QWORD *)&v65 + 1) = 0;
            }
            sub_FAAD0((__int64 *)&v64);
          }
        }
        v68 = nullptr;
        v44 = s1;
        v69 = 0;
        if ( (_QWORD)v65 )
          v44 = (const char *)v64;
        v53 = v44;
        print_tinfo();
        v45 = v69;
        v46 = v53;
        v47 = 0;
        for ( i = v69; v45 > 1; i = v45 )
        {
          v52 = (__int64)v68;
          if ( v68[v45 - 2] != 10 )
          {
            i = v45;
            goto LABEL_74;
          }
          if ( (__int64)(v45 - 1) > 1 )
          {
            if ( *((_QWORD *)&v69 + 1) < v45 - 1 )
            {
              v68 = (const char *)qvector_reserve((__int64)&v68, (__int64)v68, v45 - 1, 1);
              v52 = (__int64)v68;
            }
            *(_QWORD *)&v69 = v45 - 1;
            *(_BYTE *)(v52 + v45 - 2) = 0;
            v45 = v69;
          }
          else if ( v68 )
          {
            *(_QWORD *)&v69 = 0;
            qfree((__int64)v68);
            v68 = nullptr;
            v45 = v69;
            *((_QWORD *)&v69 + 1) = 0;
          }
        }
        while ( 1 )
        {
LABEL_74:
          v50 = s1;
          if ( i )
            v50 = v68;
          if ( !(unsigned __int8)sub_382A60(
                                   (__int64)&v68,
                                   0,
                                   (__int64)v50,
                                   (__int64)"The following new type will be created",
                                   v46,
                                   v47) )
            break;
          if ( (unsigned __int8)parse_decl() )
          {
            if ( !(unsigned int)save_tinfo() )
              goto LABEL_107;
            type_ordinal = get_type_ordinal();
            if ( type_ordinal )
            {
              *((_QWORD *)&v75 + 1) = type_ordinal;
              v61 = 0;
              LOWORD(v76) = 257;
              *(_QWORD *)&v75 = get_idati();
              if ( (!(unsigned __int8)create_tinfo()
                 || !(unsigned __int8)get_tinfo_property()
                 || get_tinfo_property()
                 || (get_tinfo_property() & 0x3F) == 0x30)
                && !(unsigned int)save_tinfo() )
              {
                clear_tinfo_t();
LABEL_107:
                v8.m128i_i64[0] = 0;
                v60[1] = 0;
                v75 = 0;
                v61 = 0;
                copy_tinfo_t();
                v76 = nullptr;
                copy_tinfo_t();
                v77.m128i_i32[0] = 0;
                v77.m128i_i16[2] = 0;
                clear_tinfo_t();
                clear_tinfo_t();
                copy_tinfo_t();
                create_tinfo();
                clear_tinfo_t();
                clear_tinfo_t();
                clear_tinfo_t();
                if ( v68 )
                {
                  *(_QWORD *)&v69 = 0;
                  qfree((__int64)v68);
                }
                if ( src )
                {
                  v67.m128i_i64[0] = 0;
                  qfree((__int64)src);
                }
                if ( v64 )
                {
                  *(_QWORD *)&v65 = 0;
                  qfree((__int64)v64);
                }
                goto LABEL_3;
              }
              clear_tinfo_t();
            }
            v49 = s1;
            if ( (_QWORD)v65 )
              v49 = (const char *)v64;
            sub_2B4E70((__int64)"Could not create %s, maybe it already exists?", v49);
          }
          i = v69;
        }
        if ( v68 )
        {
          *(_QWORD *)&v69 = 0;
          qfree((__int64)v68);
        }
        if ( src )
        {
          v67.m128i_i64[0] = 0;
          qfree((__int64)src);
        }
        if ( v64 )
        {
          *(_QWORD *)&v65 = 0;
          qfree((__int64)v64);
        }
        goto LABEL_50;
      }
      v57 = *(void **)(v41 + 32);
      src = (void *)qvector_reserve((__int64)&src, 0, *(_QWORD *)(v41 + 40), 1);
      v67.m128i_i64[0] = v42;
      memmove(src, v57, v42 - 1);
      *((char *)src + v42 - 1) = 0;
LABEL_32:
      v28 = v67.m128i_i64[0];
      if ( v67.m128i_i64[0] )
      {
        v29 = v67.m128i_i64[0] - 1;
        if ( v67.m128i_i64[0] != 1 )
        {
          v30 = v65;
          v31 = v67.m128i_i64[0] - 1;
          if ( (_QWORD)v65 )
          {
            v30 = v65 - 1;
            v31 = v29 + v65 - 1;
            v28 = v67.m128i_i64[0] + v65 - 1;
          }
          v32 = (__int64)v64;
          if ( *((_QWORD *)&v65 + 1) < v28 )
          {
            v55 = v31;
            v58 = (void *)(v67.m128i_i64[0] - 1);
            v64 = (_DWORD *)qvector_reserve((__int64)&v64, (__int64)v64, v28, 1);
            v31 = v55;
            v32 = (__int64)v64;
            v29 = (size_t)v58;
          }
          *(_QWORD *)&v65 = v28;
          *(_BYTE *)(v32 + v31) = 0;
          memcpy((char *)v64 + v30, src, v29);
        }
      }
      goto LABEL_39;
    }
    goto LABEL_24;
  }
LABEL_3:
  v10 = v62.m128i_i64[1];
  if ( v62.m128i_i32[0] != 1 )
  {
    if ( v62.m128i_i32[0] != 2 )
    {
      v11 = *(_DWORD *)(v62.m128i_i64[1] + 8);
LABEL_6:
      if ( v11 != 64 )
        goto LABEL_7;
      apply_tinfo();
      v37 = a1[16];
      *(_QWORD *)(v37 + 1344) = a1[3];
      v38 = a1[4];
      *(_QWORD *)(v37 + 1352) = v38;
      sub_3901D0((__int64)a1, (__int64)v60, v38, v39);
LABEL_50:
      clear_tinfo_t();
      goto LABEL_11;
    }
    if ( !v62.m128i_i64[1] )
    {
      v11 = 0;
      goto LABEL_6;
    }
LABEL_49:
    sub_398E20((__int64)a1, v10, v60, 0, *(double *)v8.m128i_i64, *(double *)a4.m128i_i64, a5, a6);
    goto LABEL_50;
  }
  v11 = *(_DWORD *)(v62.m128i_i64[1] + 8);
  if ( v11 != 65 )
    goto LABEL_6;
  v10 = *(_QWORD *)(*(_QWORD *)(v62.m128i_i64[1] + 24) + 432LL) + 104LL * *(int *)(v62.m128i_i64[1] + 32);
  if ( v10 )
    goto LABEL_49;
LABEL_7:
  *(_QWORD *)&v75 = 0;
  if ( (unsigned int)sub_38D3D0((__int64)&v62, nullptr, &v75, nullptr, *(double *)v8.m128i_i64) == -1 )
  {
    clear_tinfo_t();
    goto LABEL_50;
  }
  if ( (unsigned int)set_tinfo_property4() )
  {
    v40 = (const char *)tinfo_errstr();
    sub_2B4E70((__int64)"%s failed: %s", "Setting field type", v40);
    v7 = 0;
  }
  else
  {
    v13 = a1[16];
    *(_QWORD *)(v13 + 1344) = a1[3];
    v14 = a1[4];
    *(_QWORD *)(v13 + 1352) = v14;
    sub_3901D0((__int64)a1, 12, v14, v12);
  }
  clear_tinfo_t();
  clear_tinfo_t();
LABEL_11:
  v15 = v70;
  if ( v70 )
  {
    v16 = v71;
    if ( (_QWORD)v71 )
    {
      v17 = 0;
      do
      {
        v18 = (_QWORD *)(v15 + 144 * v17);
        clear_tinfo_t();
        v19 = v18[5];
        if ( v19 )
        {
          v18[6] = 0;
          qfree(v19);
        }
        v20 = v18[2];
        if ( v20 )
        {
          v18[3] = 0;
          qfree(v20);
        }
        ++v17;
        v15 = v70;
      }
      while ( v16 != v17 );
    }
    *(_QWORD *)&v71 = 0;
    qfree(v15);
  }
  return v7;
}

