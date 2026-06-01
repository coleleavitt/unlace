__int64 __fastcall sub_78DA0(__int64 a1, int *a2, __int64 a3, unsigned __int8 a4, char a5, double a6, double a7)
{
  int flags; // r12d
  const char *v12; // rdx
  unsigned int v13; // ebp
  unsigned int v15; // eax
  bool v16; // r8
  int insn; // eax
  __int64 v18; // r15
  int dword; // eax
  int v20; // r12d
  unsigned int v21; // r14d
  char v22; // al
  __int64 v23; // r9
  __int64 v24; // rsi
  __int64 v25; // rax
  char v26; // al
  __m128 v27; // xmm0
  char v28; // al
  __int64 func; // rax
  __int64 v30; // rdi
  __int64 v31; // rsi
  __m128i si128; // xmm0
  bool v33; // [rsp+0h] [rbp-F8h]
  bool v34; // [rsp+0h] [rbp-F8h]
  bool v35; // [rsp+0h] [rbp-F8h]
  bool v36; // [rsp+0h] [rbp-F8h]
  bool v37; // [rsp+0h] [rbp-F8h]
  bool v38; // [rsp+0h] [rbp-F8h]
  int v39; // [rsp+10h] [rbp-E8h] BYREF
  int v40; // [rsp+14h] [rbp-E4h] BYREF
  __int64 v41; // [rsp+18h] [rbp-E0h] BYREF
  __m256i v42; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v43; // [rsp+40h] [rbp-B8h]
  __int16 v44; // [rsp+48h] [rbp-B0h]
  __int128 v45; // [rsp+50h] [rbp-A8h]
  __int64 v46; // [rsp+60h] [rbp-98h]
  __int64 v47; // [rsp+68h] [rbp-90h]
  int v48; // [rsp+70h] [rbp-88h]
  __int64 v49; // [rsp+78h] [rbp-80h]
  int v50; // [rsp+80h] [rbp-78h]
  __int64 v51; // [rsp+88h] [rbp-70h]
  int v52; // [rsp+90h] [rbp-68h]
  __int64 v53; // [rsp+98h] [rbp-60h]
  int v54; // [rsp+A0h] [rbp-58h]
  __int64 v55; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v56; // [rsp+B8h] [rbp-40h]

  v56 = __readfsqword(0x28u);
  v39 = -1;
  flags = get_flags_ex();
  if ( (unsigned __int8)segtype() != 1 && (flags & 0x4000) == 0 )
    goto LABEL_68;
  a6 = 0.0;
  memset(&v42, 0, 24);
  if ( get_ea_name() <= 0 || !(unsigned __int8)cleanup_name() )
    goto LABEL_68;
  v12 = s1;
  if ( v42.m256i_i64[1] )
    v12 = (const char *)v42.m256i_i64[0];
  v13 = sub_78CF0(a1, a2, (__int64)v12, a3, a5);
  if ( !v13 )
  {
LABEL_68:
    if ( (unsigned __int8)segtype() == 1 || !(unsigned __int8)is_loaded() )
      return 0;
    v15 = sub_788C0(a3, &v41, &v39, &v40);
    v13 = v15;
    v16 = v15 != 0;
    if ( (a4 & (v15 != 0)) == 0 || a5 )
      goto LABEL_14;
    v33 = v15 != 0;
    if ( (~(_WORD)flags & 0x600) != 0 || (flags & 0x10000000) == 0 )
    {
      insn = create_insn();
      v16 = v33;
      if ( insn )
      {
        v27 = _mm_loadh_ps((const double *)&v41);
        v43 = 0;
        *(__m128 *)v42.m256i_i8 = v27;
        v44 = 0;
        *(__m128i *)&v42.m256i_u64[2] = _mm_load_si128((const __m128i *)&xmmword_95180);
        v46 = 0xFFFFFFFFLL;
        v47 = 0;
        v48 = 0;
        v49 = 0;
        v50 = 0;
        v51 = 0;
        v52 = 0;
        v53 = 0;
        v54 = 0;
        v55 = 0;
        v45 = 0;
        v28 = add_func_ex();
        v16 = v33;
        if ( v28 )
        {
          func = get_func();
          v16 = v33;
          v18 = func;
          if ( func )
            goto LABEL_37;
        }
      }
    }
    else
    {
      v25 = get_func();
      v16 = v33;
      v18 = v25;
      if ( v25 )
      {
        if ( *(_QWORD *)(v25 + 8) != v41 )
        {
          v26 = set_func_end();
          v16 = v33;
          if ( !v26 )
          {
            sub_51730((__int64)"%a: could not movee function end to %a", a6, a7);
            v16 = v33;
          }
        }
LABEL_37:
        *(_QWORD *)(v18 + 16) &= 0xFFFFFFFFFFFFFDFELL;
        if ( (flags & 0x4000) != 0 )
        {
LABEL_31:
          v36 = v16;
          update_func();
          v16 = v36;
LABEL_14:
          if ( a2 && v16 )
            *a2 = v39;
          if ( v13 == 4 )
            return 1;
          return v13;
        }
LABEL_23:
        v34 = v16;
        memset(&v42, 0, 24);
        dword = get_dword();
        v16 = v34;
        if ( dword == -857538744 )
        {
          v31 = v42.m256i_i64[0];
          if ( v42.m256i_i64[2] <= 0x21uLL )
          {
            v42.m256i_i64[0] = qvector_reserve();
            v16 = v34;
            v31 = v42.m256i_i64[0];
          }
          si128 = _mm_load_si128((const __m128i *)&xmmword_95190);
          v42.m256i_i64[1] = 34;
          *(_BYTE *)(v31 + 32) = 90;
          *(__m128i *)v31 = si128;
          *(__m128i *)(v31 + 16) = _mm_load_si128((const __m128i *)&xmmword_951A0);
          v24 = v42.m256i_i64[0];
          *(_BYTE *)(v42.m256i_i64[0] + 33) = 0;
        }
        else if ( v13 == 3 )
        {
          if ( v42.m256i_i64[2] <= 0x10uLL )
          {
            v42.m256i_i64[0] = qvector_reserve();
            v16 = v34;
          }
          v42.m256i_i64[1] = 17;
          *(__m128i *)v42.m256i_i64[0] = _mm_load_si128((const __m128i *)&xmmword_951B0);
          v24 = v42.m256i_i64[0];
          *(_BYTE *)(v42.m256i_i64[0] + 16) = 0;
        }
        else
        {
          v20 = v40;
          v21 = v39;
          v22 = getinf();
          v23 = v42.m256i_i64[0];
          v16 = v34;
          v24 = v42.m256i_i64[0];
          if ( (v22 & 0xF) == 1 && v20 == 8 && !v21 )
          {
            if ( v13 == 1 )
            {
              if ( v42.m256i_i64[2] <= 0x19uLL )
              {
                v42.m256i_i64[0] = qvector_reserve();
                v16 = v34;
                v23 = v42.m256i_i64[0];
              }
              v42.m256i_i64[1] = 26;
              *(__m128i *)v23 = _mm_load_si128((const __m128i *)&xmmword_951C0);
              *(__m128i *)(v23 + 9) = _mm_load_si128((const __m128i *)&xmmword_951D0);
              v24 = v42.m256i_i64[0];
              *(_BYTE *)(v42.m256i_i64[0] + 25) = 0;
            }
          }
          else if ( v13 == 1 )
          {
            if ( v42.m256i_i64[2] <= 0x15uLL )
            {
              v42.m256i_i64[0] = qvector_reserve();
              v16 = v34;
              v23 = v42.m256i_i64[0];
            }
            v38 = v16;
            v42.m256i_i64[1] = 22;
            *(__m128i *)v23 = _mm_load_si128((const __m128i *)&xmmword_951E0);
            *(_QWORD *)(v23 + 13) = 0x5F6B6E7568745F74LL;
            *(_BYTE *)(v42.m256i_i64[0] + 21) = 0;
            if ( !(unsigned __int8)sub_84A20(&v42, v21, v20, v20 == 8) )
            {
              if ( !under_debugger )
                interr();
              BUG();
            }
            v24 = v42.m256i_i64[0];
            v16 = v38;
          }
        }
        if ( v42.m256i_i64[1] > 1uLL )
        {
          v37 = v16;
          set_name();
          v30 = v42.m256i_i64[0];
          v16 = v37;
          if ( !v18 )
          {
            if ( v42.m256i_i64[0] )
            {
              v42.m256i_i64[1] = 0;
              qfree();
              v16 = v37;
            }
            goto LABEL_14;
          }
          *(_QWORD *)(v18 + 16) |= 0x40uLL;
          if ( v30 )
          {
            v42.m256i_i64[1] = 0;
            qfree();
            v16 = v37;
          }
        }
        else
        {
          if ( v24 )
          {
            v35 = v16;
            v42.m256i_i64[1] = 0;
            qfree();
            v16 = v35;
          }
          if ( !v18 )
            goto LABEL_14;
        }
        goto LABEL_31;
      }
    }
    v18 = 0;
    if ( (flags & 0x4000) != 0 )
      goto LABEL_14;
    goto LABEL_23;
  }
  return v13;
}
