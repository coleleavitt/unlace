void __fastcall std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,true>::_M_dfs(
        __int64 a1,
        __int32 a2,
        __int64 a3)
{
  __int32 v3; // r10d
  __int8 v5; // r11
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 *v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  char is_line_terminator; // al
  unsigned __int8 *v14; // rax
  unsigned __int8 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rax
  bool v19; // al
  char v20; // r15
  unsigned __int8 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rax
  bool v25; // al
  const __m128i *v26; // rax
  __int64 v27; // rdx
  __m128i v28; // xmm0
  __int8 v29; // cl
  __int8 v30; // cl
  char *v31; // rax
  char v32; // al
  __int64 v33; // rdx
  int v34; // edx
  int v35; // eax
  __int64 *v36; // [rsp+8h] [rbp-60h]
  __int8 v37; // [rsp+8h] [rbp-60h]
  __int64 v38; // [rsp+8h] [rbp-60h]
  __int64 v39; // [rsp+8h] [rbp-60h]
  __int64 v40; // [rsp+8h] [rbp-60h]
  __m128i *v41; // [rsp+8h] [rbp-60h]
  char v42; // [rsp+8h] [rbp-60h]
  __int64 v43; // [rsp+8h] [rbp-60h]
  __m128i v44; // [rsp+10h] [rbp-58h] BYREF
  __int64 v45; // [rsp+20h] [rbp-48h]
  __int32 v46; // [rsp+2Ch] [rbp-3Ch]
  char v47; // [rsp+37h] [rbp-31h] BYREF
  unsigned __int64 v48; // [rsp+38h] [rbp-30h]

  v3 = a2;
  v5 = a2;
  v48 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 56);
  while ( 2 )
  {
    v8 = *(_QWORD *)(v7 + 56) + 48 * a3;
    switch ( *(_DWORD *)v8 )
    {
      case 1:
        if ( (*(_BYTE *)(v7 + 24) & 0x10) != 0 )
        {
          v45 = *(_QWORD *)(v7 + 56) + 48 * a3;
          v37 = v5;
          v44.m128i_i32[0] = v3;
          std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,true>::_M_dfs();
          goto LABEL_42;
        }
        v44.m128i_i64[0] = *(_QWORD *)(v7 + 56) + 48 * a3;
        LOBYTE(v45) = v5;
        std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,true>::_M_dfs();
        v32 = *(_BYTE *)(a1 + 116);
        *(_BYTE *)(a1 + 116) = 0;
        v42 = v32;
        std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,true>::_M_dfs();
        *(_BYTE *)(a1 + 116) |= v42;
        return;
      case 2:
        if ( *(_BYTE *)(v8 + 24) )
        {
          v45 = a3;
          std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,true>::_M_dfs();
          if ( !*(_BYTE *)(a1 + 116) )
            std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,true>::_M_rep_once_more();
        }
        else
        {
          v45 = *(_QWORD *)(v7 + 56) + 48 * a3;
          v37 = v5;
          v44.m128i_i32[0] = v3;
          std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,true>::_M_rep_once_more();
LABEL_42:
          v5 = v37;
          v8 = v45;
          v3 = v44.m128i_i32[0];
          if ( !*(_BYTE *)(a1 + 116) )
            goto LABEL_33;
        }
        return;
      case 3:
        std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,true>::_M_handle_backref();
        return;
      case 4:
        if ( *(_QWORD *)(a1 + 24) != *(_QWORD *)(a1 + 32) )
        {
          if ( (~*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL) + 24LL) & 0x810) != 0 )
            return;
          v44.m128i_i32[0] = v3;
          LOBYTE(v45) = v5;
          v38 = v8;
          is_line_terminator = std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,true>::_M_is_line_terminator();
          v3 = v44.m128i_i32[0];
          v5 = v45;
          v8 = v38;
          goto LABEL_21;
        }
        v35 = *(_DWORD *)(a1 + 112);
        if ( (v35 & 1) == 0 )
        {
          if ( (v35 & 0x80u) == 0 )
            goto LABEL_27;
          if ( (~*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL) + 24LL) & 0x810) == 0 )
          {
            v44.m128i_i32[0] = v3;
            LOBYTE(v45) = v5;
            v43 = v8;
            is_line_terminator = std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,true>::_M_is_line_terminator();
            v8 = v43;
            v5 = v45;
            v3 = v44.m128i_i32[0];
LABEL_21:
            if ( is_line_terminator )
            {
              v7 = *(_QWORD *)(a1 + 56);
              goto LABEL_27;
            }
            return;
          }
        }
        return;
      case 5:
        if ( *(_QWORD *)(a1 + 24) == *(_QWORD *)(a1 + 40) )
        {
          if ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
            goto LABEL_27;
        }
        else if ( (~*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL) + 24LL) & 0x810) == 0 )
        {
          v44.m128i_i32[0] = v3;
          LOBYTE(v45) = v5;
          v39 = v8;
          if ( (unsigned __int8)std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,true>::_M_is_line_terminator() )
          {
            v7 = *(_QWORD *)(a1 + 56);
            v3 = v44.m128i_i32[0];
            v5 = v45;
            v8 = v39;
LABEL_27:
            a3 = *(_QWORD *)(v8 + 8);
            continue;
          }
        }
        return;
      case 6:
        v14 = *(unsigned __int8 **)(a1 + 24);
        if ( v14 == *(unsigned __int8 **)(a1 + 32) )
        {
          v34 = *(_DWORD *)(a1 + 112);
          v20 = 0;
          if ( (v34 & 4) == 0 )
          {
            if ( v14 != *(unsigned __int8 **)(a1 + 40) )
            {
              if ( (v34 & 0x80) != 0 )
              {
LABEL_30:
                v15 = *(v14 - 1);
                v16 = *(_QWORD *)(a1 + 48);
                v46 = v3;
                v44.m128i_i8[0] = v5;
                v17 = *(_QWORD *)(v16 + 16);
                v45 = v8;
                v18 = std::regex_traits<char>::lookup_classname<char const*>();
                v19 = std::regex_traits<char>::isctype(v17 + 80, v15, v18, SBYTE2(v18));
                v8 = v45;
                v5 = v44.m128i_i8[0];
                v20 = v19;
                v14 = *(unsigned __int8 **)(a1 + 24);
                v3 = v46;
                if ( v14 == *(unsigned __int8 **)(a1 + 40) )
                  goto LABEL_32;
              }
              v21 = *v14;
              v22 = *(_QWORD *)(a1 + 48);
              v46 = v3;
              v23 = *(_QWORD *)(v22 + 16);
              v44.m128i_i8[0] = v5;
              v45 = v8;
              v24 = std::regex_traits<char>::lookup_classname<char const*>();
              v25 = std::regex_traits<char>::isctype(v23 + 80, v21, v24, SBYTE2(v24));
              v3 = v46;
              v5 = v44.m128i_i8[0];
              v8 = v45;
              v20 ^= v25;
              goto LABEL_32;
            }
            if ( (v34 & 8) == 0 && (v34 & 0x80) != 0 )
              goto LABEL_30;
          }
        }
        else
        {
          if ( v14 != *(unsigned __int8 **)(a1 + 40) )
            goto LABEL_30;
          v20 = 0;
          if ( (*(_BYTE *)(a1 + 112) & 8) == 0 )
            goto LABEL_30;
        }
LABEL_32:
        if ( *(_BYTE *)(v8 + 24) == v20 )
          return;
LABEL_33:
        a3 = *(_QWORD *)(v8 + 8);
        v7 = *(_QWORD *)(a1 + 56);
        continue;
      case 7:
        v40 = *(_QWORD *)(v7 + 56) + 48 * a3;
        v44.m128i_i32[0] = v3;
        LOBYTE(v45) = v5;
        if ( (unsigned __int8)std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,true>::_M_lookahead() == *(_BYTE *)(v40 + 24) )
          return;
        a3 = *(_QWORD *)(v40 + 8);
        v7 = *(_QWORD *)(a1 + 56);
        v5 = v45;
        v3 = v44.m128i_i32[0];
        continue;
      case 8:
        v9 = (__int64 *)(*(_QWORD *)a1 + 24LL * *(_QWORD *)(v8 + 16));
        v10 = *v9;
        v36 = v9;
        *v9 = *(_QWORD *)(a1 + 24);
        v45 = v10;
        std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,true>::_M_dfs();
        *v36 = v45;
        return;
      case 9:
        v26 = (const __m128i *)(*(_QWORD *)a1 + 24LL * *(_QWORD *)(v8 + 16));
        v27 = *(_QWORD *)(a1 + 24);
        v28 = _mm_loadu_si128(v26);
        v29 = v26[1].m128i_i8[0];
        v26[1].m128i_i8[0] = 1;
        v26->m128i_i64[1] = v27;
        LOBYTE(v45) = v29;
        v41 = (__m128i *)v26;
        v44 = v28;
        std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,true>::_M_dfs();
        v30 = v45;
        *v41 = _mm_load_si128(&v44);
        v41[1].m128i_i8[0] = v30;
        return;
      case 0xB:
        v31 = *(char **)(a1 + 24);
        if ( v31 != *(char **)(a1 + 40) )
        {
          v47 = *v31;
          if ( !*(_QWORD *)(v8 + 32) )
            std::__throw_bad_function_call();
          LOBYTE(v45) = v5;
          if ( (*(unsigned __int8 (__fastcall **)(__int64, char *))(v8 + 40))(v8 + 16, &v47) )
          {
            ++*(_QWORD *)(a1 + 24);
            std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,true>::_M_dfs();
            --*(_QWORD *)(a1 + 24);
          }
        }
        return;
      case 0xC:
        v11 = *(_QWORD *)(a1 + 24);
        if ( (_BYTE)v3 )
        {
          *(_BYTE *)(a1 + 116) = 1;
          if ( *(_QWORD *)(a1 + 32) == v11 && (*(_BYTE *)(a1 + 112) & 0x20) != 0 )
          {
LABEL_61:
            *(_BYTE *)(a1 + 116) = 0;
            return;
          }
        }
        else
        {
          v33 = *(_QWORD *)(a1 + 40);
          *(_BYTE *)(a1 + 116) = v33 == v11;
          if ( *(_QWORD *)(a1 + 32) == v11 && (*(_BYTE *)(a1 + 112) & 0x20) != 0 )
            goto LABEL_61;
          if ( v33 != v11 )
            return;
        }
        if ( (*(_BYTE *)(v7 + 24) & 0x10) != 0 )
        {
LABEL_11:
          std::vector<std::sub_match<char const*>>::operator=(*(__int64 **)(a1 + 64), (const __m128i **)a1);
          return;
        }
        v12 = *(_QWORD *)(a1 + 104);
        if ( !v12 || v12 < v11 )
        {
          *(_QWORD *)(a1 + 104) = v11;
          goto LABEL_11;
        }
        return;
      default:
        return;
    }
  }
}

