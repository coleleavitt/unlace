__int64 __fastcall sub_4A80(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  char *v6; // rdx
  __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  __m128i v9; // xmm0
  unsigned __int64 v10; // r9
  __int64 v11; // rbp
  _QWORD *v12; // rax
  __m128i v13; // xmm0
  unsigned int v14; // edx
  __m128i v15; // xmm0
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __m128i v19; // [rsp+0h] [rbp-88h] BYREF
  __int64 v20; // [rsp+18h] [rbp-70h] BYREF
  __int64 v21; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-60h]
  __m128i v23; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v24; // [rsp+40h] [rbp-48h]
  __m128i v25; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  v25 = 0;
  v24 = 0;
  if ( !(unsigned __int8)callui(9, 0, &v20, &v21) )
  {
    v20 = getinf();
    v21 = getinf();
  }
  v22 = 0;
  sub_4830((__int64)"Searching for pictures...");
  while ( 1 )
  {
    v20 = bin_search();
    if ( v20 == -1 )
      break;
    v3 = getseg();
    v4 = v20;
    v2 = v20;
    if ( v3 )
    {
      v5 = v22;
      v6 = off_A8E0[7 * v22 + 4];
      if ( v6 )
      {
        if ( !((unsigned __int8 (__fastcall *)(__int64))v6)(v20) )
        {
          v2 = v20;
          goto LABEL_5;
        }
        v5 = v22;
        v4 = v20;
      }
      v7 = v25.m128i_i64[0];
      v8 = v24;
      v9 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v4, (__m128i)v5);
      v2 = v4;
      v23 = v9;
      v10 = v25.m128i_i64[0] + 1;
      if ( (unsigned __int64)&v23 < v24 || (unsigned __int64)&v23 >= v24 + 16 * v25.m128i_i64[1] )
      {
        if ( v25.m128i_i64[1] < v10 )
        {
          v24 = qvector_reserve();
          v7 = v25.m128i_i64[0];
          v8 = v24;
          v2 = v20;
        }
        *(__m128i *)(v8 + 16 * v7) = _mm_load_si128(&v23);
      }
      else
      {
        if ( v25.m128i_i64[1] < v10 )
        {
          v19 = v9;
          v24 = qvector_reserve();
          v8 = v24;
          v7 = v25.m128i_i64[0];
          v4 = v20;
          v9 = _mm_load_si128(&v19);
        }
        v2 = v4;
        *(__m128i *)(v8 + 16 * v7) = v9;
      }
      ++v25.m128i_i64[0];
    }
LABEL_5:
    v20 = v2 + 1;
  }
  callui(24, 10, 0, &callui);
  if ( v25.m128i_i64[0] )
  {
    v11 = qalloc_or_throw();
    *(_QWORD *)v11 = qword_AC30;
    *(_QWORD *)(v11 + 8) = 0x4FF000004LL;
    *(_QWORD *)(v11 + 40) = "Embedded pictures";
    *(_OWORD *)(v11 + 16) = -1;
    v12 = (_QWORD *)(v11 + 80);
    v13 = _mm_loadl_epi64((const __m128i *)&off_A9F8);
    *(_QWORD *)(v11 + 32) = 0;
    *(_DWORD *)(v11 + 48) = 2;
    *(_DWORD *)(v11 + 72) = -1;
    *(__m128i *)(v11 + 56) = _mm_unpacklo_epi64(v13, (__m128i)(unsigned __int64)off_A8C0);
    do
    {
      *v12 = 0;
      v12 += 3;
      *((_OWORD *)v12 - 1) = 0;
    }
    while ( (_QWORD *)(v11 + 176) != v12 );
    *(_DWORD *)(v11 + 176) = 0;
    v14 = *(_DWORD *)(v11 + 12);
    if ( ((v14 >> 19) & 0x3F) != 0 )
    {
      if ( *(_BYTE *)(v11 + 11) != 0xFF )
      {
        if ( !under_debugger )
          interr();
        BUG();
      }
      *(_BYTE *)(v11 + 11) = ((v14 >> 19) & 0x3F) - 1;
      *(_DWORD *)(v11 + 12) = v14 & 0xFE07FFFF;
    }
    *(_QWORD *)v11 = off_A648;
    v15 = _mm_loadu_si128(&v25);
    v16 = v24;
    v24 = 0;
    *(__m128i *)(v11 + 192) = v15;
    *(_QWORD *)(v11 + 184) = v16;
    v17 = *(_QWORD *)(a1 + 16);
    v25 = 0;
    *(_QWORD *)(v17 + 144) = v11;
    callui(16, 0, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 144LL), 0);
  }
  else
  {
    sub_4900((__int64)"picture_search: no pictures found\n");
  }
  if ( v24 )
  {
    v25.m128i_i64[0] = 0;
    qfree();
  }
  return 1;
}

