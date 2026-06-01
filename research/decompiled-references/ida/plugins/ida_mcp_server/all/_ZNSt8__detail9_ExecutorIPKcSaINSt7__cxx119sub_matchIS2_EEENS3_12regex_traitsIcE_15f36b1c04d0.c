void __fastcall std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,false>::_M_dfs(
        const __m128i **a1,
        __int32 a2,
        const __m128i *a3)
{
  const __m128i *v3; // rcx
  __int8 *v4; // rax
  const __m128i **v5; // r9
  const __m128i *v7; // rsi
  const __m128i **v8; // r8
  const __m128i ***v9; // rax
  const __m128i **v10; // rcx
  const __m128i *v11; // rax
  char is_line_terminator; // al
  const __m128i *v13; // rax
  unsigned __int8 v14; // r14
  const __m128i *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  bool v18; // al
  char v19; // r15
  unsigned __int8 v20; // r14
  const __m128i *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rax
  bool v24; // al
  const __m128i *v25; // rax
  const __m128i *v26; // rdx
  __m128i v27; // xmm0
  __int8 v28; // cl
  __int8 v29; // cl
  const __m128i *v30; // rax
  char v31; // al
  int v32; // eax
  int v33; // edx
  const __m128i ***v34; // [rsp+8h] [rbp-60h]
  const __m128i **v35; // [rsp+8h] [rbp-60h]
  const __m128i **v36; // [rsp+8h] [rbp-60h]
  const __m128i **v37; // [rsp+8h] [rbp-60h]
  __int64 v38; // [rsp+8h] [rbp-60h]
  __m128i *v39; // [rsp+8h] [rbp-60h]
  const __m128i **v40; // [rsp+8h] [rbp-60h]
  const __m128i **v41; // [rsp+8h] [rbp-60h]
  const __m128i **v42; // [rsp+8h] [rbp-60h]
  __m128i v43; // [rsp+10h] [rbp-58h] BYREF
  const __m128i **v44; // [rsp+20h] [rbp-48h]
  __int32 v45; // [rsp+2Ch] [rbp-3Ch]
  _QWORD v46[7]; // [rsp+30h] [rbp-38h] BYREF

  v46[1] = __readfsqword(0x28u);
  v3 = a1[15];
  v4 = &a3->m128i_i8[(_QWORD)v3];
  if ( !a3->m128i_i8[(_QWORD)v3] )
  {
    v5 = a1;
    while ( 2 )
    {
      v7 = v5[7];
      *v4 = 1;
      v8 = (const __m128i **)(v7[3].m128i_i64[1] + 48LL * (_QWORD)a3);
      switch ( *(_DWORD *)v8 )
      {
        case 1:
          if ( (v7[1].m128i_i8[8] & 0x10) != 0 )
          {
            v44 = (const __m128i **)(v7[3].m128i_i64[1] + 48LL * (_QWORD)a3);
            v35 = v5;
            v43.m128i_i32[0] = a2;
            std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,false>::_M_dfs();
            v5 = v35;
            v8 = v44;
            a2 = v43.m128i_i32[0];
            if ( !*((_BYTE *)v35 + 140) )
              goto LABEL_31;
          }
          else
          {
            v43.m128i_i64[0] = v7[3].m128i_i64[1] + 48LL * (_QWORD)a3;
            v41 = v5;
            std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,false>::_M_dfs();
            v31 = *((_BYTE *)v41 + 140);
            *((_BYTE *)v41 + 140) = 0;
            LOBYTE(v44) = v31;
            std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,false>::_M_dfs();
            *((_BYTE *)v41 + 140) |= (unsigned __int8)v44;
          }
          return;
        case 2:
          std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,false>::_M_handle_repeat();
          return;
        case 3:
          std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,false>::_M_handle_backref();
          return;
        case 4:
          if ( v5[3] != v5[4] )
          {
            if ( (~*(_DWORD *)(v5[6][1].m128i_i64[0] + 24) & 0x810) != 0 )
              return;
            v43.m128i_i32[0] = a2;
            v44 = v8;
            v36 = v5;
            is_line_terminator = std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,false>::_M_is_line_terminator();
            a2 = v43.m128i_i32[0];
            v8 = v44;
            v5 = v36;
            goto LABEL_19;
          }
          v32 = *((_DWORD *)v5 + 34);
          if ( (v32 & 1) == 0 )
          {
            if ( (v32 & 0x80u) == 0 )
              goto LABEL_25;
            if ( (~*(_DWORD *)(v5[6][1].m128i_i64[0] + 24) & 0x810) == 0 )
            {
              v43.m128i_i32[0] = a2;
              v44 = v8;
              v42 = v5;
              is_line_terminator = std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,false>::_M_is_line_terminator();
              v5 = v42;
              v8 = v44;
              a2 = v43.m128i_i32[0];
LABEL_19:
              if ( is_line_terminator )
              {
                v3 = v5[15];
                goto LABEL_25;
              }
              return;
            }
          }
          return;
        case 5:
          if ( v5[3] == v5[5] )
          {
            if ( ((_BYTE)v5[17] & 2) == 0 )
              goto LABEL_25;
          }
          else if ( (~*(_DWORD *)(v5[6][1].m128i_i64[0] + 24) & 0x810) == 0 )
          {
            v43.m128i_i32[0] = a2;
            v44 = v8;
            v37 = v5;
            if ( (unsigned __int8)std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,false>::_M_is_line_terminator() )
            {
              v5 = v37;
              a2 = v43.m128i_i32[0];
              v8 = v44;
              v3 = v37[15];
LABEL_25:
              a3 = v8[1];
              goto LABEL_32;
            }
          }
          break;
        case 6:
          v13 = v5[3];
          if ( v13 == v5[4] )
          {
            v33 = *((_DWORD *)v5 + 34);
            v19 = 0;
            if ( (v33 & 4) == 0 )
            {
              if ( v13 != v5[5] )
              {
                if ( (v33 & 0x80) != 0 )
                {
LABEL_28:
                  v14 = v13[-1].m128i_u8[15];
                  v15 = v5[6];
                  v45 = a2;
                  v43.m128i_i64[0] = (__int64)v8;
                  v16 = v15[1].m128i_i64[0];
                  v44 = v5;
                  v17 = std::regex_traits<char>::lookup_classname<char const*>();
                  v18 = std::regex_traits<char>::isctype(v16 + 80, v14, v17, SBYTE2(v17));
                  v5 = v44;
                  v8 = (const __m128i **)v43.m128i_i64[0];
                  v19 = v18;
                  a2 = v45;
                  v13 = v44[3];
                  if ( v13 == v44[5] )
                    goto LABEL_30;
                }
                v20 = v13->m128i_i8[0];
                v21 = v5[6];
                v45 = a2;
                v22 = v21[1].m128i_i64[0];
                v43.m128i_i64[0] = (__int64)v8;
                v44 = v5;
                v23 = std::regex_traits<char>::lookup_classname<char const*>();
                v24 = std::regex_traits<char>::isctype(v22 + 80, v20, v23, SBYTE2(v23));
                a2 = v45;
                v8 = (const __m128i **)v43.m128i_i64[0];
                v5 = v44;
                v19 ^= v24;
                goto LABEL_30;
              }
              if ( (v33 & 8) == 0 && (v33 & 0x80) != 0 )
                goto LABEL_28;
            }
          }
          else
          {
            if ( v13 != v5[5] )
              goto LABEL_28;
            v19 = 0;
            if ( ((_BYTE)v5[17] & 8) == 0 )
              goto LABEL_28;
          }
LABEL_30:
          if ( *((_BYTE *)v8 + 24) == v19 )
            return;
LABEL_31:
          a3 = v8[1];
          v3 = v5[15];
LABEL_32:
          v4 = &a3->m128i_i8[(_QWORD)v3];
          if ( a3->m128i_i8[(_QWORD)v3] )
            return;
          continue;
        case 7:
          v38 = v7[3].m128i_i64[1] + 48LL * (_QWORD)a3;
          v43.m128i_i32[0] = a2;
          v44 = v5;
          if ( (unsigned __int8)std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,false>::_M_lookahead() == *(_BYTE *)(v38 + 24) )
            return;
          v5 = v44;
          a3 = *(const __m128i **)(v38 + 8);
          a2 = v43.m128i_i32[0];
          v3 = v44[15];
          goto LABEL_32;
        case 8:
          v9 = (const __m128i ***)*v5 + 3 * (_QWORD)v8[2];
          v10 = *v9;
          v34 = v9;
          *v9 = (const __m128i **)v5[3];
          v44 = v10;
          std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,false>::_M_dfs();
          *v34 = v44;
          return;
        case 9:
          v25 = (const __m128i *)((char *)*v5 + 24 * (_QWORD)v8[2]);
          v26 = v5[3];
          v27 = _mm_loadu_si128(v25);
          v28 = v25[1].m128i_i8[0];
          v25[1].m128i_i8[0] = 1;
          v25->m128i_i64[1] = (__int64)v26;
          LOBYTE(v44) = v28;
          v39 = (__m128i *)v25;
          v43 = v27;
          std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,false>::_M_dfs();
          v29 = (char)v44;
          *v39 = _mm_load_si128(&v43);
          v39[1].m128i_i8[0] = v29;
          return;
        case 0xB:
          v30 = v5[3];
          if ( v30 != v5[5] )
          {
            LOBYTE(v46[0]) = v30->m128i_i8[0];
            if ( !v8[4] )
              std::__throw_bad_function_call();
            v44 = v5;
            v40 = v8;
            if ( ((unsigned __int8 (__fastcall *)(const __m128i **, _QWORD *))v8[5])(v8 + 2, v46) )
            {
              v46[0] = v40[1];
              std::vector<std::pair<long,std::vector<std::sub_match<char const*>>>>::emplace_back<long &,std::vector<std::sub_match<char const*>> const&>(
                (__int64)(v44 + 12),
                v46,
                v44);
            }
          }
          return;
        case 0xC:
          v11 = v5[3];
          if ( (v11 != v5[4] || ((_BYTE)v5[17] & 0x20) == 0)
            && ((_BYTE)a2 == 1 || v11 == v5[5])
            && !*((_BYTE *)v5 + 140) )
          {
            *((_BYTE *)v5 + 140) = 1;
            std::vector<std::sub_match<char const*>>::operator=(v5[8]->m128i_i64, v5);
          }
          return;
        default:
          return;
      }
      break;
    }
  }
}

