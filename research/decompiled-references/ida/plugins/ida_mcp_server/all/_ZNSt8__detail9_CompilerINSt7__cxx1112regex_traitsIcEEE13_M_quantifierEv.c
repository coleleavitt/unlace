__int64 __fastcall std::__detail::_Compiler<std::regex_traits<char>>::_M_quantifier(int *a1)
{
  __int64 v1; // r12
  int v2; // edx
  int v3; // eax
  int *v4; // rbx
  int v5; // edx
  unsigned int v6; // ecx
  __int64 inserted; // rax
  __int64 v9; // rcx
  __m128i v10; // xmm0
  __int64 v11; // rsi
  _QWORD *v12; // rax
  __m128i *v13; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // r15
  __m128i *v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r8
  unsigned __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rdi
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rax
  int v33; // eax
  int v34; // edx
  __int64 v35; // rcx
  int v36; // eax
  char v37; // r9
  char v38; // r9
  __int64 v39; // rcx
  __int64 v40; // r8
  char v41; // r14
  __int64 v42; // rbx
  __int64 v43; // r15
  __int64 *v44; // r15
  __int64 v45; // r8
  __int64 i; // r14
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // r8
  int v50; // eax
  __int64 *v51; // rdi
  __int64 v52; // rcx
  __int64 v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rdx
  __m128d v56; // xmm0
  __int64 *v57; // rax
  _QWORD *v58; // rax
  __m128d v59; // xmm0
  int v60; // [rsp+8h] [rbp-170h]
  int v61; // [rsp+8h] [rbp-170h]
  int v62; // [rsp+8h] [rbp-170h]
  unsigned __int64 v63; // [rsp+8h] [rbp-170h]
  int v64; // [rsp+8h] [rbp-170h]
  unsigned __int64 v65; // [rsp+8h] [rbp-170h]
  _QWORD *v66; // [rsp+8h] [rbp-170h]
  __int64 v67; // [rsp+8h] [rbp-170h]
  __int64 v68; // [rsp+8h] [rbp-170h]
  __int64 v69; // [rsp+8h] [rbp-170h]
  char v70; // [rsp+10h] [rbp-168h]
  __int64 v71; // [rsp+10h] [rbp-168h]
  __int64 v72; // [rsp+10h] [rbp-168h]
  __int64 v73; // [rsp+18h] [rbp-160h]
  __int64 v74; // [rsp+20h] [rbp-158h]
  __int64 v75; // [rsp+20h] [rbp-158h]
  int v76; // [rsp+20h] [rbp-158h]
  __int64 v77; // [rsp+28h] [rbp-150h]
  int v78; // [rsp+28h] [rbp-150h]
  __int64 v79; // [rsp+30h] [rbp-148h]
  __int64 v80; // [rsp+38h] [rbp-140h]
  __int64 v81; // [rsp+40h] [rbp-138h]
  __int64 v82; // [rsp+48h] [rbp-130h]
  __int64 v83; // [rsp+58h] [rbp-120h]
  __int64 v84; // [rsp+A0h] [rbp-D8h]
  __m128i v85; // [rsp+B0h] [rbp-C8h] BYREF
  __int128 v86; // [rsp+C0h] [rbp-B8h]
  __int128 v87; // [rsp+D0h] [rbp-A8h]
  __int128 v88; // [rsp+E0h] [rbp-98h]
  __int128 v89; // [rsp+F0h] [rbp-88h]
  __m128i v90; // [rsp+100h] [rbp-78h] BYREF
  __m128i v91; // [rsp+110h] [rbp-68h] BYREF
  __m128i v92; // [rsp+120h] [rbp-58h] BYREF
  unsigned __int64 v93; // [rsp+138h] [rbp-40h]

  v2 = *a1;
  v3 = a1[38];
  v93 = __readfsqword(0x28u);
  v4 = a1;
  v5 = v2 & 0x10;
  switch ( v3 )
  {
    case 20:
      v60 = v5;
      std::string::_M_assign();
      std::__detail::_Scanner<char>::_M_advance();
      if ( *((_QWORD *)a1 + 44) != *((_QWORD *)a1 + 40) )
      {
        if ( !v60 || a1[38] != 18 )
        {
LABEL_9:
          std::__detail::_Compiler<std::regex_traits<char>>::_M_pop();
          inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_repeat();
          v9 = *((_QWORD *)a1 + 32);
          v10 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)inserted, (__m128i)(unsigned __int64)inserted);
          v11 = *((_QWORD *)a1 + 46);
          *(_QWORD *)(*(_QWORD *)(v85.m128i_i64[0] + 56) + 48 * v86 + 8) = inserted;
          v12 = *((_QWORD **)a1 + 44);
          if ( v12 != (_QWORD *)(v11 - 24) )
          {
            *v12 = v9;
            v13 = (__m128i *)(v12 + 3);
            v13[-1] = v10;
            *((_QWORD *)a1 + 44) = v13;
            return 1;
          }
          goto LABEL_34;
        }
LABEL_41:
        std::string::_M_assign();
        std::__detail::_Scanner<char>::_M_advance();
        goto LABEL_9;
      }
      goto LABEL_72;
    case 21:
      v61 = v5;
      std::string::_M_assign();
      std::__detail::_Scanner<char>::_M_advance();
      if ( *((_QWORD *)a1 + 44) != *((_QWORD *)a1 + 40) )
      {
        if ( v61 && a1[38] == 18 )
        {
          std::string::_M_assign();
          std::__detail::_Scanner<char>::_M_advance();
        }
        std::__detail::_Compiler<std::regex_traits<char>>::_M_pop();
        v14 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_repeat();
        v15 = v86;
        v16 = v14;
        v17 = *((_QWORD *)a1 + 46);
        *(_QWORD *)&v86 = v14;
        *(_QWORD *)(*(_QWORD *)(v85.m128i_i64[0] + 56) + 48 * v15 + 8) = v14;
        v18 = *((_QWORD *)a1 + 44);
        if ( v18 != v17 - 24 )
        {
          v19 = _mm_load_si128(&v85);
          v20 = v18 + 24;
          *(_QWORD *)(v20 - 8) = v16;
          *(__m128i *)(v20 - 24) = v19;
          *((_QWORD *)a1 + 44) = v20;
          return 1;
        }
LABEL_34:
        std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::_M_push_back_aux<std::__detail::_StateSeq<std::regex_traits<char>> const&>();
        return 1;
      }
      goto LABEL_72;
    case 18:
      v62 = v5;
      std::string::_M_assign();
      std::__detail::_Scanner<char>::_M_advance();
      if ( *((_QWORD *)a1 + 44) != *((_QWORD *)a1 + 40) )
      {
        if ( !v62 )
        {
LABEL_20:
          std::__detail::_Compiler<std::regex_traits<char>>::_M_pop();
          v21 = *((_QWORD **)v4 + 32);
          v90.m128i_i32[0] = 10;
          v90.m128i_i64[1] = -1;
          v22 = v86;
          v23 = (__m128i *)v21[8];
          if ( v23 == (__m128i *)v21[9] )
          {
            v66 = v21;
            std::vector<std::__detail::_State<char>>::_M_realloc_append<std::__detail::_State<char>>();
            v21 = v66;
            v24 = v66[8];
          }
          else
          {
            *v23 = _mm_load_si128(&v90);
            v23[1] = _mm_load_si128(&v91);
            v23[2] = _mm_load_si128(&v92);
            v24 = v21[8] + 48LL;
            v21[8] = v24;
          }
          v25 = v24 - v21[7];
          if ( v25 > 4800000 )
            std::__throw_regex_error();
          v26 = 0xAAAAAAAAAAAAAAABLL * (v25 >> 4) - 1;
          if ( v90.m128i_i32[0] == 11 && v92.m128i_i64[0] )
          {
            v65 = v26;
            ((void (__fastcall *)(__m128i *, __m128i *, __int64))v92.m128i_i64[0])(&v91, &v91, 3);
            v26 = v65;
          }
          v63 = v26;
          v27 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_repeat();
          v28 = *((_QWORD *)v4 + 32);
          v29 = *((_QWORD *)v4 + 46);
          *(_QWORD *)(*(_QWORD *)(v85.m128i_i64[0] + 56) + 48 * v22 + 8) = v63;
          *(_QWORD *)(*(_QWORD *)(v28 + 56) + 48 * v27 + 8) = v63;
          v30 = *((_QWORD **)v4 + 44);
          if ( v30 == (_QWORD *)(v29 - 24) )
          {
            std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::_M_push_back_aux<std::__detail::_StateSeq<std::regex_traits<char>> const&>();
          }
          else
          {
            *v30 = v28;
            v31 = v30 + 3;
            *(v31 - 2) = v27;
            *(v31 - 1) = v63;
            *((_QWORD *)v4 + 44) = v31;
          }
          return 1;
        }
LABEL_29:
        if ( v4[38] == 18 )
        {
          std::string::_M_assign();
          std::__detail::_Scanner<char>::_M_advance();
        }
        goto LABEL_20;
      }
      goto LABEL_72;
  }
  v6 = 0;
  if ( v3 == 12 )
  {
    v64 = v5;
    std::string::_M_assign();
    std::__detail::_Scanner<char>::_M_advance();
    if ( *((_QWORD *)a1 + 44) != *((_QWORD *)a1 + 40) )
    {
      if ( a1[38] != 26 )
      {
LABEL_28:
        std::__throw_regex_error();
        goto LABEL_29;
      }
      std::string::_M_assign();
      std::__detail::_Scanner<char>::_M_advance();
      std::__detail::_Compiler<std::regex_traits<char>>::_M_pop();
      v32 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_dummy();
      v1 = *((_QWORD *)a1 + 32);
      v73 = v32;
      v33 = std::__detail::_Compiler<std::regex_traits<char>>::_M_cur_int_value();
      v34 = v64;
      v35 = v33;
      v36 = a1[38];
      if ( v36 == 25 )
      {
        v76 = v64;
        v72 = v35;
        std::string::_M_assign();
        std::__detail::_Scanner<char>::_M_advance();
        v36 = a1[38];
        v35 = v72;
        v67 = 0;
        v34 = v76;
        v37 = 1;
        if ( v36 == 26 )
        {
          std::string::_M_assign();
          std::__detail::_Scanner<char>::_M_advance();
          v50 = std::__detail::_Compiler<std::regex_traits<char>>::_M_cur_int_value();
          v35 = v72;
          v34 = v76;
          v37 = 0;
          v67 = v50 - v72;
          v36 = a1[38];
        }
      }
      else
      {
        v67 = 0;
        v37 = 0;
      }
      if ( v36 != 13 )
      {
        std::__throw_regex_error();
        goto LABEL_41;
      }
      v78 = v34;
      v74 = v35;
      v70 = v37;
      std::string::_M_assign();
      std::__detail::_Scanner<char>::_M_advance();
      v38 = v70;
      v39 = v74;
      if ( v78 && a1[38] == 18 )
      {
        std::string::_M_assign();
        std::__detail::_Scanner<char>::_M_advance();
        v39 = v74;
        v38 = v70;
      }
      v40 = v73;
      if ( v39 > 0 )
      {
        v41 = v38;
        v42 = 0;
        v43 = v39;
        do
        {
          v71 = v40;
          ++v42;
          std::__detail::_StateSeq<std::regex_traits<char>>::_M_clone();
          v40 = v86;
          *(_QWORD *)(*(_QWORD *)(v1 + 56) + 48 * v71 + 8) = v85.m128i_i64[1];
        }
        while ( v43 != v42 );
        v4 = a1;
        v38 = v41;
      }
      if ( v38 )
      {
        v69 = v40;
        std::__detail::_StateSeq<std::regex_traits<char>>::_M_clone();
        v77 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_repeat();
        *(_QWORD *)(*(_QWORD *)(v85.m128i_i64[0] + 56) + 48 * v86 + 8) = v77;
        *(_QWORD *)(*(_QWORD *)(v1 + 56) + 48 * v69 + 8) = v77;
      }
      else
      {
        if ( v67 < 0 )
          goto LABEL_28;
        v82 = v40;
        v77 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_dummy();
        v85 = 0u;
        v86 = 0;
        v87 = 0;
        v88 = 0;
        v89 = 0;
        std::_Deque_base<long>::_M_initialize_map();
        v44 = nullptr;
        v45 = v82;
        v81 = 0;
        v79 = 0;
        v75 = 0;
        if ( v67 )
        {
          for ( i = 0; i != v67; ++i )
          {
            v80 = v45;
            std::__detail::_StateSeq<std::regex_traits<char>>::_M_clone();
            v48 = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_repeat();
            v49 = v80;
            if ( v44 == (__int64 *)-8LL )
            {
              v83 = v48;
              *(_QWORD *)&v86 = 0;
              v88 = (unsigned __int64)v44;
              v89 = 0u;
              std::deque<long>::_M_push_back_aux<long const&>();
              v48 = v83;
              v49 = v80;
            }
            else
            {
              *v44++ = v48;
            }
            v47 = *(_QWORD *)(v1 + 56);
            *(_QWORD *)(v47 + 48 * v49 + 8) = v48;
            v45 = v84;
          }
        }
        else
        {
          v47 = *(_QWORD *)(v1 + 56);
        }
        v51 = v44;
        *(_QWORD *)(v47 + 48 * v45 + 8) = v77;
        if ( v44 )
        {
          v52 = *((_QWORD *)v4 + 32);
          v53 = 0;
          while ( 1 )
          {
            while ( 1 )
            {
              v54 = *(_QWORD *)(v52 + 56);
              if ( v51 == (__int64 *)v53 )
                break;
              v55 = *--v51;
              v55 *= 48;
              v56 = (__m128d)_mm_loadu_si128((const __m128i *)(v54 + v55 + 8));
              *(__m128d *)(v54 + v55 + 8) = _mm_shuffle_pd(v56, v56, 1);
              if ( !v51 )
              {
                v81 = v53;
                v44 = nullptr;
                goto LABEL_65;
              }
            }
            v68 = 48LL * *(_QWORD *)(*(_QWORD *)(v79 - 8) + 504LL) + v54;
            operator delete(v51, 0x200u);
            v53 = *(_QWORD *)(v79 - 8);
            v51 = (__int64 *)(v53 + 504);
            v75 = v53 + 512;
            v59 = (__m128d)_mm_loadu_si128((const __m128i *)(v68 + 8));
            *(__m128d *)(v68 + 8) = _mm_shuffle_pd(v59, v59, 1);
            if ( v53 == -504 )
              break;
            v52 = *((_QWORD *)v4 + 32);
            v79 -= 8;
          }
          v81 = -504;
          v44 = nullptr;
          v79 -= 8;
        }
LABEL_65:
        *(_QWORD *)&v88 = v44;
        *(_QWORD *)&v86 = 0;
        *((_QWORD *)&v88 + 1) = v81;
        *(_QWORD *)&v89 = v75;
        *((_QWORD *)&v89 + 1) = v79;
        std::_Deque_base<long>::~_Deque_base();
      }
      v57 = *((__int64 **)v4 + 44);
      if ( v57 != (__int64 *)(*((_QWORD *)v4 + 46) - 24LL) )
      {
        *v57 = v1;
        v58 = v57 + 3;
        *(v58 - 2) = v73;
        *(v58 - 1) = v77;
        *((_QWORD *)v4 + 44) = v58;
        return 1;
      }
LABEL_73:
      v85.m128i_i64[0] = v1;
      v85.m128i_i64[1] = v73;
      *(_QWORD *)&v86 = v77;
      std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::_M_push_back_aux<std::__detail::_StateSeq<std::regex_traits<char>> const&>();
      return 1;
    }
LABEL_72:
    std::__throw_regex_error();
    goto LABEL_73;
  }
  return v6;
}

