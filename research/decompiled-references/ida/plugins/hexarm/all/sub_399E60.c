__int64 __fastcall sub_399E60(
        _QWORD *a1,
        const __m128i *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rdi
  unsigned int v11; // ebx
  __m128 v12; // xmm0
  __int64 v13; // rax
  double v14; // xmm4_8
  double v15; // xmm5_8
  __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // r13
  __int64 v21; // r12
  _QWORD *v22; // r15
  _DWORD *v24; // rax
  __int32 v25; // edx
  __int64 v26; // rax
  int v27; // edx
  void *v28; // rax
  __m128i v29; // xmm0
  unsigned __int64 v30; // r14
  size_t v31; // r8
  __int64 v32; // r15
  __int64 v33; // r9
  __int64 v34; // rsi
  int v35; // eax
  int v36; // r14d
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rax
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
  __m128 v62; // [rsp+50h] [rbp-190h] BYREF
  __int64 v63; // [rsp+60h] [rbp-180h]
  _DWORD *v64; // [rsp+70h] [rbp-170h] BYREF
  __int128 v65; // [rsp+78h] [rbp-168h]
  void *src; // [rsp+90h] [rbp-150h] BYREF
  __m128i v67; // [rsp+98h] [rbp-148h] BYREF
  __int64 v68; // [rsp+B0h] [rbp-130h] BYREF
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

  v10 = a1[4];
  v85 = __readfsqword(0x28u);
  v71 = 0;
  v70 = 0;
  v73 = 0;
  v74 = 1;
  v72 = 0;
  v11 = sub_257880(v10, (__int64)a2, (__int64)&v70);
  if ( !(_BYTE)v11 )
    goto LABEL_11;
  v12 = (__m128)_mm_loadu_si128(a2);
  v13 = a2[1].m128i_i64[0];
  v60[0] = 0;
  v63 = v13;
  v62 = v12;
  if ( !(unsigned __int8)sub_32E8B0((__int64)v60, (__int64)&v70) && sub_32E9F0() )
  {
    v65 = 0;
    v64 = nullptr;
    v24 = (_DWORD *)qvector_reserve();
    v64 = v24;
    *(_QWORD *)&v65 = 8;
    *v24 = 1970435187;
    *(_DWORD *)((char *)v24 + 3) = 1601463157;
    *((_BYTE *)v64 + 7) = 0;
    v25 = a2->m128i_i32[0];
    src = nullptr;
    v26 = a2->m128i_i64[1];
    v67 = 0;
    if ( v25 == 1 )
    {
      v27 = *(_DWORD *)(v26 + 8);
      if ( v27 != 65 )
      {
LABEL_25:
        if ( v27 == 64 )
        {
          sub_263AF0((__int64 *)&src);
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
          if ( (unsigned int)sub_38D910((__int64)a2, &v75, nullptr, nullptr) != -1 )
          {
            v28 = src;
            v29 = _mm_loadu_si128(&v67);
            a4 = (__m128)_mm_loadu_si128(&v77);
            src = v76;
            v76 = v28;
            v67 = (__m128i)a4;
            v77 = v29;
          }
          clear_tinfo_t();
          if ( v78 )
          {
            *(_QWORD *)&v79 = 0;
            qfree();
          }
          if ( v76 )
          {
            v77.m128i_i64[0] = 0;
            qfree();
          }
        }
        goto LABEL_32;
      }
      v41 = *(_QWORD *)(*(_QWORD *)(v26 + 24) + 432LL) + 104LL * *(int *)(v26 + 32);
    }
    else
    {
      if ( v25 != 2 )
      {
LABEL_24:
        v27 = *(_DWORD *)(v26 + 8);
        goto LABEL_25;
      }
      v41 = v26;
    }
    if ( v41 )
    {
      if ( &src == (void **)(v41 + 32) || (v42 = *(_QWORD *)(v41 + 40), v42 < 2) )
      {
LABEL_39:
        v35 = 0;
        if ( (_QWORD)v65 )
          v35 = v65 - 1;
        v36 = 0;
        v56 = (void *)v35;
        v54 = v35 + 1LL;
        while ( (unsigned int)get_named_type() )
        {
          if ( ++v36 )
          {
            v37 = (__int64)v64;
            v38 = (__int64)v64;
            if ( v56 )
            {
              v43 = v65;
              if ( (unsigned __int64)v65 < v54 )
              {
                if ( *((_QWORD *)&v65 + 1) < v54 )
                {
                  v38 = qvector_reserve();
                  v64 = (_DWORD *)v38;
                  v43 = v65;
                }
                memset((void *)(v38 + v43), 0, v54 - v43);
                v37 = (__int64)v64;
                *(_QWORD *)&v65 = v54;
              }
              else if ( v54 != (_QWORD)v65 )
              {
                *(_QWORD *)&v65 = v54;
              }
              *((_BYTE *)v56 + v37) = 0;
            }
            else if ( v64 )
            {
              *(_QWORD *)&v65 = 0;
              qfree();
              v64 = nullptr;
              *((_QWORD *)&v65 + 1) = 0;
            }
            sub_FA510((__int64 *)&v64);
          }
        }
        v68 = 0;
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
          v52 = v68;
          if ( *(_BYTE *)(v68 + v45 - 2) != 10 )
          {
            i = v45;
            goto LABEL_74;
          }
          if ( (__int64)(v45 - 1) > 1 )
          {
            if ( *((_QWORD *)&v69 + 1) < v45 - 1 )
            {
              v68 = qvector_reserve();
              v52 = v68;
            }
            *(_QWORD *)&v69 = v45 - 1;
            *(_BYTE *)(v52 + v45 - 2) = 0;
            v45 = v69;
          }
          else if ( v68 )
          {
            *(_QWORD *)&v69 = 0;
            qfree();
            v68 = 0;
            v45 = v69;
            *((_QWORD *)&v69 + 1) = 0;
          }
        }
        while ( 1 )
        {
LABEL_74:
          v50 = s1;
          if ( i )
            v50 = (const char *)v68;
          if ( !(unsigned __int8)sub_382FA0(
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
                v12 = 0;
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
                  qfree();
                }
                if ( src )
                {
                  v67.m128i_i64[0] = 0;
                  qfree();
                }
                if ( v64 )
                {
                  *(_QWORD *)&v65 = 0;
                  qfree();
                }
                goto LABEL_3;
              }
              clear_tinfo_t();
            }
            v49 = s1;
            if ( (_QWORD)v65 )
              v49 = (const char *)v64;
            sub_2B5230((__int64)"Could not create %s, maybe it already exists?", v49);
          }
          i = v69;
        }
        if ( v68 )
        {
          *(_QWORD *)&v69 = 0;
          qfree();
        }
        if ( src )
        {
          v67.m128i_i64[0] = 0;
          qfree();
        }
        if ( v64 )
        {
          *(_QWORD *)&v65 = 0;
          qfree();
        }
        goto LABEL_50;
      }
      v57 = *(void **)(v41 + 32);
      src = (void *)qvector_reserve();
      v67.m128i_i64[0] = v42;
      memmove(src, v57, v42 - 1);
      *((char *)src + v42 - 1) = 0;
LABEL_32:
      v30 = v67.m128i_i64[0];
      if ( v67.m128i_i64[0] )
      {
        v31 = v67.m128i_i64[0] - 1;
        if ( v67.m128i_i64[0] != 1 )
        {
          v32 = v65;
          v33 = v67.m128i_i64[0] - 1;
          if ( (_QWORD)v65 )
          {
            v32 = v65 - 1;
            v33 = v31 + v65 - 1;
            v30 = v67.m128i_i64[0] + v65 - 1;
          }
          v34 = (__int64)v64;
          if ( *((_QWORD *)&v65 + 1) < v30 )
          {
            v55 = v33;
            v58 = (void *)(v67.m128i_i64[0] - 1);
            v64 = (_DWORD *)qvector_reserve();
            v33 = v55;
            v34 = (__int64)v64;
            v31 = (size_t)v58;
          }
          *(_QWORD *)&v65 = v30;
          *(_BYTE *)(v34 + v33) = 0;
          memcpy((char *)v64 + v32, src, v31);
        }
      }
      goto LABEL_39;
    }
    goto LABEL_24;
  }
LABEL_3:
  v16 = v62.m128_i64[1];
  if ( v62.m128_i32[0] != 1 )
  {
    if ( v62.m128_i32[0] != 2 )
    {
      v17 = *(_DWORD *)(v62.m128_u64[1] + 8);
LABEL_6:
      if ( v17 != 64 )
        goto LABEL_7;
      apply_tinfo();
      v39 = a1[16];
      *(_QWORD *)(v39 + 1344) = a1[3];
      *(_QWORD *)(v39 + 1352) = a1[4];
      sub_390710((__int64)a1);
LABEL_50:
      clear_tinfo_t();
      goto LABEL_11;
    }
    if ( !v62.m128_u64[1] )
    {
      v17 = 0;
      goto LABEL_6;
    }
LABEL_49:
    sub_399360((__int64)a1, v16, v60, 0, v12, a4, a5, a6, v14, v15, a9, a10);
    goto LABEL_50;
  }
  v17 = *(_DWORD *)(v62.m128_u64[1] + 8);
  if ( v17 != 65 )
    goto LABEL_6;
  v16 = *(_QWORD *)(*(_QWORD *)(v62.m128_u64[1] + 24) + 432LL) + 104LL * *(int *)(v62.m128_u64[1] + 32);
  if ( v16 )
    goto LABEL_49;
LABEL_7:
  *(_QWORD *)&v75 = 0;
  if ( (unsigned int)sub_38D910((__int64)&v62, nullptr, &v75, nullptr) == -1 )
  {
    clear_tinfo_t();
    goto LABEL_50;
  }
  if ( (unsigned int)set_tinfo_property4() )
  {
    v40 = (const char *)tinfo_errstr();
    sub_2B5230((__int64)"%s failed: %s", "Setting field type", v40);
    v11 = 0;
  }
  else
  {
    v18 = a1[16];
    *(_QWORD *)(v18 + 1344) = a1[3];
    *(_QWORD *)(v18 + 1352) = a1[4];
    sub_390710((__int64)a1);
  }
  clear_tinfo_t();
  clear_tinfo_t();
LABEL_11:
  v19 = v70;
  if ( v70 )
  {
    v20 = v71;
    if ( (_QWORD)v71 )
    {
      v21 = 0;
      do
      {
        v22 = (_QWORD *)(v19 + 144 * v21);
        clear_tinfo_t();
        if ( v22[5] )
        {
          v22[6] = 0;
          qfree();
        }
        if ( v22[2] )
        {
          v22[3] = 0;
          qfree();
        }
        ++v21;
        v19 = v70;
      }
      while ( v20 != v21 );
    }
    *(_QWORD *)&v71 = 0;
    qfree();
  }
  return v11;
}

