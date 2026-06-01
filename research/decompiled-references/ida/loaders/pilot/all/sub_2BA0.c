char *__fastcall sub_2BA0(unsigned int *a1, __int64 *a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int v5; // ebx
  __m128i si128; // xmm0
  __int64 v8; // rax
  char *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rbx
  int v12; // r13d
  unsigned __int64 v13; // rax
  char v14; // dl
  __int16 v15; // dx
  unsigned __int64 v16; // rax
  __int64 v17; // r15
  __int64 dword; // rax
  __int64 v19; // rbp
  int v21; // ecx
  __int64 v22; // rdx
  unsigned int v23; // ebx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  int v29; // [rsp+14h] [rbp-84h]
  __int64 v30; // [rsp+20h] [rbp-78h]
  __int64 v32; // [rsp+30h] [rbp-68h] BYREF
  __m128i v33; // [rsp+38h] [rbp-60h]
  __int64 v34; // [rsp+48h] [rbp-50h]
  __int64 v35; // [rsp+50h] [rbp-48h]
  unsigned __int64 v36; // [rsp+58h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  if ( (unsigned __int64)*a2 <= 3 )
  {
LABEL_27:
    v9 = nullptr;
    sub_2670((__int64)"Bad packed data");
    return v9;
  }
  v5 = *a1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_63D0);
  v8 = *a2 - 4;
  v9 = (char *)(a1 + 1);
  v32 = 4;
  *a2 = v8;
  v10 = _byteswap_ulong(v5);
  v33 = si128;
  v29 = v10;
  v34 = 0;
  v35 = 0;
  if ( a5 )
  {
    v25 = getseg(a4);
    v26 = -1;
    if ( v25 )
      v26 = *(_QWORD *)(v25 + 48);
    v33.m128i_i64[1] = v26;
  }
  if ( v5 )
  {
    v11 = a3;
    v12 = 0;
    while ( 1 )
    {
      v13 = *a2;
      if ( !*a2 )
        goto LABEL_27;
      v14 = *v9;
      if ( *v9 < 0 )
      {
        ++v9;
        v16 = v13 - 1;
        v11 += (char)(2 * v14);
      }
      else if ( (*v9 & 0x40) != 0 )
      {
        if ( v13 == 1 )
          goto LABEL_27;
        v15 = *(_WORD *)v9;
        v16 = v13 - 2;
        v9 += 2;
        v11 += (__int16)(4 * __ROL2__(v15, 8)) >> 1;
      }
      else
      {
        if ( v13 <= 3 )
          goto LABEL_27;
        v23 = *(_DWORD *)v9;
        v10 = a3;
        v9 += 4;
        v16 = v13 - 4;
        v11 = a3 + ((int)(4 * _byteswap_ulong(v23)) >> 1);
      }
      *a2 = v16;
      v17 = v11;
      do
      {
        if ( !(unsigned __int8)is_loaded(v17) )
        {
          v10 = 0;
          put_byte(v17, 0);
        }
        ++v17;
      }
      while ( v17 != v11 + 4 );
      dword = (unsigned int)get_dword(v11);
      v34 = (unsigned int)dword;
      if ( a5 )
      {
        set_fixup(v11, &v32);
        v19 = v34 + a4;
        v30 = v34 + a4 + 1;
        auto_mark_range(v34 + a4, v30, 20);
        v10 = v30;
        auto_mark_range(v19, v30, 30);
        if ( (unsigned __int16)get_word(v11 - 2) == 20217 )
        {
          auto_mark_range(v11 - 2, v11 - 1, 20);
          v10 = v11 - 1;
          auto_mark_range(v11 - 2, v11 - 1, 30);
        }
      }
      else
      {
        v21 = HIDWORD(v32);
        if ( (v32 & 0x100000000LL) != 0 )
        {
          v22 = v33.m128i_i64[0];
        }
        else
        {
          v22 = 0;
          if ( v33.m128i_i64[1] != -1 )
          {
            v24 = sel2para(v33.m128i_i64[1], v10, 0);
            v21 = HIDWORD(v32);
            v22 = 16 * v24;
            dword = v34;
          }
        }
        v10 = (__int64)&v32;
        HIDWORD(v32) = v21 | 1;
        v33.m128i_i64[0] = a4;
        v34 = dword + v22 - a4;
        set_fixup(v11, &v32);
      }
      if ( ++v12 == v29 )
        return v9;
    }
  }
  return v9;
}

