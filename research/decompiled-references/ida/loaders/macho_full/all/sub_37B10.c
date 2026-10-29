__int64 __fastcall sub_37B10(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int32 a6)
{
  unsigned int v7; // ebx
  __int64 flags; // rcx
  __int8 v10; // ch
  const char *v11; // rsi
  unsigned __int64 v12; // r15
  void *v13; // rdx
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  __int64 v16; // rdx
  _BYTE *v17; // rsi
  __int64 v18; // r13
  size_t v19; // r14
  __m128i v20; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+10h] [rbp-B8h]
  __int64 v22; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v23; // [rsp+28h] [rbp-A0h] BYREF
  const char *v24; // [rsp+30h] [rbp-98h] BYREF
  __int128 v25; // [rsp+38h] [rbp-90h]
  __int64 v26; // [rsp+50h] [rbp-78h]
  __m128i v27; // [rsp+58h] [rbp-70h]
  void *src; // [rsp+70h] [rbp-58h] BYREF
  __m128i v29; // [rsp+78h] [rbp-50h] BYREF
  unsigned __int64 v30; // [rsp+88h] [rbp-40h]

  v21 = a4;
  v20.m128i_i32[0] = a6;
  v30 = __readfsqword(0x28u);
  v7 = sub_1D300(a1, (__int64 *)&v23, a2);
  if ( !(_BYTE)v7 )
    return v7;
  if ( v23 == -1 || (*(_BYTE *)(*(_QWORD *)a1 + 12LL) & 8) == 0 )
  {
    flags = get_flags_ex();
    if ( a3 == 5 )
      goto LABEL_18;
    if ( (unsigned int)(a3 - 9) > 1 )
      return v7;
  }
  else
  {
    if ( (unsigned int)(a3 - 9) > 1 )
    {
      LODWORD(flags) = get_flags_ex();
      if ( a3 != 5 )
        return v7;
LABEL_18:
      src = nullptr;
      v29 = 0;
      if ( (flags & 0x600) != 0x400 || (flags & 0xF0000000) != 0x50000000 )
        return v7;
      if ( get_ea_name() <= 0 )
        goto LABEL_21;
      v16 = v29.m128i_i64[0];
      v17 = src;
      if ( v29.m128i_i64[0] )
      {
        v18 = v29.m128i_i64[0] + 1;
        v19 = v29.m128i_i64[0] - 1;
        if ( v29.m128i_i64[1] >= (unsigned __int64)(v29.m128i_i64[0] + 1) )
          goto LABEL_36;
      }
      else
      {
        if ( v29.m128i_i64[1] > 1uLL )
        {
          v29.m128i_i64[0] = 2;
          *((_BYTE *)src + 1) = 0;
LABEL_38:
          *(_BYTE *)src = 112;
          set_name();
LABEL_21:
          if ( src )
          {
            v29.m128i_i64[0] = 0;
            qfree();
          }
          return v7;
        }
        v19 = 0;
        v18 = 2;
      }
      src = (void *)qvector_reserve();
      v17 = src;
      v16 = v19 + 1;
LABEL_36:
      v29.m128i_i64[0] = v18;
      v17[v16] = 0;
      if ( v19 )
        memmove((char *)src + 1, src, v19);
      goto LABEL_38;
    }
    v12 = v23 & 0xFFFFFFFFFFFFFFFELL;
    sub_1A010();
    v23 = v12;
    flags = get_flags_ex();
  }
  v24 = nullptr;
  v25 = 0;
  if ( a3 == 9 )
  {
    v22 = flags;
    sub_35470((__int64 *)&v24);
    v10 = BYTE1(v22);
    if ( v20.m128i_i8[0] )
    {
      v26 = 0;
      v27 = 0;
      if ( (v22 & 0x4000) == 0 || (get_ea_name(), v27.m128i_i64[0] <= 1uLL) )
      {
        sub_18920((__int64 *)&src, v24, v21);
        v13 = src;
        src = nullptr;
        v14 = _mm_loadu_si128(&v29);
        v29 = 0;
        if ( v26 )
        {
          v21 = (__int64)v13;
          v20 = v14;
          v27.m128i_i64[0] = 0;
          qfree();
          v15 = _mm_load_si128(&v20);
          v26 = v21;
          v27 = v15;
          if ( src )
          {
            v29.m128i_i64[0] = 0;
            qfree();
          }
        }
        else
        {
          v26 = (__int64)v13;
          v27 = v14;
        }
      }
      add_entry();
      if ( v26 )
      {
        v27.m128i_i64[0] = 0;
        qfree();
      }
      goto LABEL_16;
    }
  }
  else
  {
    v20.m128i_i64[0] = flags;
    sub_35470((__int64 *)&v24);
    v10 = v20.m128i_i8[1];
  }
  if ( (v10 & 0x40) == 0 )
  {
    v11 = s1;
    if ( (_QWORD)v25 )
      v11 = v24;
    sub_18920((__int64 *)&src, v11, v21);
    set_name();
    if ( src )
    {
      v29.m128i_i64[0] = 0;
      qfree();
    }
  }
LABEL_16:
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree();
  }
  return v7;
}

