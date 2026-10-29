unsigned __int64 __fastcall sub_3C4200(
        __int64 a1,
        __int64 a2,
        struct _Unwind_Exception *a3,
        __int64 *a4,
        unsigned __int8 a5)
{
  char *v10; // r8
  size_t v11; // r15
  void *v12; // rax
  void *v13; // rsi
  const char *v14; // rax
  __m128i v15; // xmm0
  _QWORD *v16; // rax
  unsigned int v17; // edx
  __m128i v18; // xmm2
  __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // r15
  __int64 i; // r14
  __int64 v23; // rax
  __m128i v24; // xmm3
  __int64 v25; // rdi
  __m128i v27; // [rsp+0h] [rbp-98h] BYREF
  void *src; // [rsp+18h] [rbp-80h]
  char *v29; // [rsp+20h] [rbp-78h] BYREF
  __int128 v30; // [rsp+28h] [rbp-70h]
  __int64 v31; // [rsp+40h] [rbp-58h]
  __int128 v32; // [rsp+48h] [rbp-50h]
  unsigned __int64 v33; // [rsp+58h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  v30 = 0;
  v29 = nullptr;
  v31 = 0;
  v32 = 0;
  get_ea_name();
  sub_6B2B0((__int64 *)&v29);
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree();
  }
  v10 = (char *)s1;
  if ( (_QWORD)v30 )
    v10 = v29;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &off_4E1C48;
  *(_OWORD *)(a1 + 16) = 0;
  if ( v10
    && (src = v10,
        v11 = strlen(v10),
        v27.m128i_i64[0] = v11 + 1,
        v12 = (void *)qvector_reserve(),
        v13 = src,
        *(_QWORD *)(a1 + 8) = v12,
        *(_QWORD *)(a1 + 16) = v11 + 1,
        memmove(v12, v13, v11),
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + v11) = 0,
        *(_QWORD *)(a1 + 16)) )
  {
    v14 = *(const char **)(a1 + 8);
  }
  else
  {
    v14 = s1;
  }
  *(_QWORD *)(a1 + 72) = v14;
  *(_OWORD *)(a1 + 48) = -1;
  v15 = _mm_loadl_epi64((const __m128i *)&off_4E3160);
  *(_QWORD *)(a1 + 32) = &unk_4E7D28;
  v16 = (_QWORD *)(a1 + 112);
  *(_DWORD *)(a1 + 44) = (2 * a5) | 0x800;
  *(_DWORD *)(a1 + 40) = -16777212;
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 80) = 4;
  *(_DWORD *)(a1 + 104) = -1;
  *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v15, (__m128i)(unsigned __int64)&off_4E2E90);
  do
  {
    *v16 = 0;
    v16 += 3;
    *((_OWORD *)v16 - 1) = 0;
  }
  while ( (_QWORD *)(a1 + 208) != v16 );
  *(_DWORD *)(a1 + 208) = 0;
  v17 = *(_DWORD *)(a1 + 44);
  if ( ((v17 >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 43) != 0xFF )
    {
      if ( !under_debugger )
      {
        interr();
        if ( *(_QWORD *)(a1 + 8) )
        {
          *(_QWORD *)(a1 + 16) = 0;
          qfree();
        }
        if ( v29 )
        {
          *(_QWORD *)&v30 = 0;
          qfree();
        }
        _Unwind_Resume(a3);
      }
      BUG();
    }
    *(_BYTE *)(a1 + 43) = ((v17 >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 44) = v17 & 0xFE07FFFF;
  }
  *(_QWORD *)(a1 + 224) = 0;
  *(_QWORD *)a1 = &unk_4E8520;
  *(_QWORD *)(a1 + 32) = &unk_4E8558;
  *(_QWORD *)(a1 + 216) = &off_4E8618;
  *(_OWORD *)(a1 + 232) = 0;
  v18 = _mm_loadu_si128((const __m128i *)(a4 + 1));
  v19 = *a4;
  *(_OWORD *)(a4 + 1) = 0;
  *a4 = 0;
  v20 = *(_QWORD *)(a1 + 224);
  v27 = v18;
  if ( v20 )
  {
    v21 = *(_QWORD *)(a1 + 232);
    if ( v21 )
    {
      for ( i = 0; i != v21; ++i )
      {
        v23 = v20 + 48 * i;
        if ( *(_QWORD *)(v23 + 16) )
        {
          *(_QWORD *)(v23 + 24) = 0;
          qfree();
          v20 = *(_QWORD *)(a1 + 224);
        }
      }
    }
    *(_QWORD *)(a1 + 232) = 0;
    qfree();
  }
  v24 = _mm_load_si128(&v27);
  v25 = (__int64)v29;
  *(_QWORD *)(a1 + 224) = v19;
  *(__m128i *)(a1 + 232) = v24;
  if ( v25 )
  {
    *(_QWORD *)&v30 = 0;
    qfree();
  }
  *(_QWORD *)(a1 + 248) = a2;
  *(_QWORD *)a1 = off_4E1D88;
  *(_QWORD *)(a1 + 32) = off_4E1DD0;
  *(_QWORD *)(a1 + 216) = &off_4E1E90;
  *(_QWORD *)(a1 + 256) = a3;
  return v33 - __readfsqword(0x28u);
}

