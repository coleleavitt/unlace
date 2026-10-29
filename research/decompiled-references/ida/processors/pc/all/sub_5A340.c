unsigned __int64 __fastcall sub_5A340(__int64 a1, __int64 a2, const char *a3)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rsi
  char *v8; // rax
  char *v9; // rbx
  char v10; // r12
  const char *v11; // r13
  char *v12; // rax
  __int16 v13; // bp
  __int64 v14; // rdi
  __int64 v15; // r12
  __int64 v16; // rbp
  _QWORD *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rbp
  _QWORD *v20; // rbx
  __int64 v21; // [rsp+50h] [rbp-E8h]
  __int128 v22; // [rsp+58h] [rbp-E0h]
  __m128i v23[3]; // [rsp+78h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+A8h] [rbp-90h]
  __int64 v25; // [rsp+B0h] [rbp-88h]
  __int64 v26; // [rsp+B8h] [rbp-80h]
  __int128 v27; // [rsp+C0h] [rbp-78h]
  __int64 v28; // [rsp+D0h] [rbp-68h]
  __int128 v29; // [rsp+D8h] [rbp-60h]
  char v30; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v31; // [rsp+F8h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  if ( (getinf() & 0x800) != 0 && get_fchunk() )
  {
    if ( (*(_BYTE *)(a1 + 4456) & 1) == 0 )
    {
      getinf_flag();
      add_til();
      *(_DWORD *)(a1 + 4456) |= 1u;
    }
    v21 = 0;
    v22 = 0;
    if ( *a3 )
    {
      while ( 1 )
      {
        v8 = strchr(a3, 59);
        v9 = v8;
        if ( !v8 )
          break;
        v10 = v8[1];
        v8[1] = 0;
        v11 = v8 + 1;
        v12 = strchr(a3, 58);
        if ( v12 )
        {
          *v12 = 0;
          toupper(*(unsigned __int8 *)a3);
          v13 = str2reg();
          if ( v13 != -1 )
          {
            v23[0] = 0;
            if ( (unsigned __int8)parse_decl() )
            {
              if ( (get_tinfo_property() & 0xF) == 0xB )
              {
                get_tinfo_property();
                *(__m128i *)((char *)&v23[1] + 8) = 0;
                copy_tinfo_t();
                v23[2].m128i_i64[1] = 0;
                copy_tinfo_t();
                LODWORD(v24) = 0;
                WORD2(v24) = 0;
                clear_tinfo_t();
                clear_tinfo_t();
                copy_tinfo_t();
                create_tinfo();
                clear_tinfo_t();
                clear_tinfo_t();
                clear_tinfo_t();
                clear_tinfo_t();
              }
              v5 = v22;
              v6 = v21;
              if ( *((_QWORD *)&v22 + 1) < (unsigned __int64)(v22 + 1) )
              {
                v21 = qvector_reserve();
                v6 = v21;
                v5 = v22;
              }
              v7 = 80 * v5 + v6;
              *(_DWORD *)v7 = 0;
              *(_QWORD *)(v7 + 8) = 0;
              *(_QWORD *)(v7 + 40) = 0;
              *(_DWORD *)(v7 + 72) = 0;
              *(_QWORD *)(v7 + 64) = 0;
              *(_OWORD *)(v7 + 48) = 0;
              *(_QWORD *)&v22 = v22 + 1;
              *(_QWORD *)(v7 + 16) = 0;
              *(__m128i *)(v7 + 24) = _mm_loadu_si128(v23);
              v23[0] = 0;
              *(_DWORD *)v7 = 3;
              *(_DWORD *)(v7 + 8) = v13;
              clear_tinfo_t();
            }
            else
            {
              clear_tinfo_t();
            }
          }
        }
        v9[1] = v10;
        if ( !v10 )
          break;
        a3 = v11;
      }
      if ( (_QWORD)v22 )
      {
        memset(&v23[1].m128i_u64[1], 0, 24);
        v24 = 0;
        v25 = 0;
        v26 = 0;
        v28 = 0;
        v30 = 16;
        v23[0].m128i_i64[0] = 0;
        v23[0].m128i_i64[1] = a1;
        v27 = 0;
        v29 = 0;
        gen_use_arg_tinfos();
        if ( v28 )
        {
          *(_QWORD *)&v29 = 0;
          qfree();
        }
        cleanup_argloc();
        clear_tinfo_t();
        v14 = v23[1].m128i_i64[1];
        if ( v23[1].m128i_i64[1] )
        {
          v15 = v23[2].m128i_i64[0];
          if ( v23[2].m128i_i64[0] )
          {
            v16 = 0;
            do
            {
              v17 = (_QWORD *)(v14 + 80 * v16);
              clear_tinfo_t();
              if ( v17[5] )
              {
                v17[6] = 0;
                qfree();
              }
              if ( v17[2] )
              {
                v17[3] = 0;
                qfree();
              }
              ++v16;
              cleanup_argloc();
              v14 = v23[1].m128i_i64[1];
            }
            while ( v15 != v16 );
          }
          v23[2].m128i_i64[0] = 0;
          qfree();
        }
        v18 = v21;
        if ( !v21 )
          return v31 - __readfsqword(0x28u);
        v19 = 0;
        do
        {
          v20 = (_QWORD *)(v18 + 80 * v19);
          clear_tinfo_t();
          if ( v20[5] )
          {
            v20[6] = 0;
            qfree();
          }
          if ( v20[2] )
          {
            v20[3] = 0;
            qfree();
          }
          ++v19;
          cleanup_argloc();
          v18 = v21;
        }
        while ( (_QWORD)v22 != v19 );
      }
      else if ( !v21 )
      {
        return v31 - __readfsqword(0x28u);
      }
      qfree();
    }
  }
  return v31 - __readfsqword(0x28u);
}
