__int64 __fastcall sub_408FA0(__int64 a1, __int64 a2, double a3, double a4, __m128 a5)
{
  _DWORD *v5; // r9
  __int64 v6; // r10
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  __m128 si128; // xmm1
  __m128i v12; // xmm0
  __m128i *v13; // rax
  unsigned int v14; // ebx
  _BYTE *v15; // r15
  __int64 v16; // rbx
  __int64 v17; // rax
  char *v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // r12
  __int64 v22; // r14
  _QWORD *v23; // rbx
  __int64 v24; // rdi
  __int64 v25; // rdi
  signed int v28; // [rsp+1Ch] [rbp-364h]
  int v29; // [rsp+20h] [rbp-360h]
  _BYTE *v30; // [rsp+28h] [rbp-358h]
  unsigned __int8 tinfo_details; // [rsp+3Bh] [rbp-345h]
  unsigned int v32; // [rsp+3Ch] [rbp-344h]
  unsigned __int64 v33; // [rsp+40h] [rbp-340h] BYREF
  __int64 v34; // [rsp+48h] [rbp-338h]
  unsigned __int8 v35[16]; // [rsp+50h] [rbp-330h] BYREF
  __int64 v36; // [rsp+60h] [rbp-320h]
  __int128 v37; // [rsp+68h] [rbp-318h]
  __int64 v38; // [rsp+78h] [rbp-308h]
  __int64 v39; // [rsp+80h] [rbp-300h]
  __int64 v40; // [rsp+88h] [rbp-2F8h]
  __int128 v41; // [rsp+90h] [rbp-2F0h]
  __int64 v42; // [rsp+A0h] [rbp-2E0h]
  __int128 v43; // [rsp+A8h] [rbp-2D8h]
  char v44; // [rsp+B8h] [rbp-2C8h]
  _BYTE v45[24]; // [rsp+C0h] [rbp-2C0h] BYREF
  _BYTE v46[536]; // [rsp+D8h] [rbp-2A8h] BYREF
  char v47; // [rsp+2F0h] [rbp-90h] BYREF
  char v48; // [rsp+340h] [rbp-40h] BYREF
  unsigned __int64 v49; // [rsp+348h] [rbp-38h]

  v49 = __readfsqword(0x28u);
  *(_DWORD *)(*(_QWORD *)(a1 + 800) + 1416LL) |= 1u;
  if ( *(_QWORD *)(a2 + 8) )
  {
    v36 = 0;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    v42 = 0;
    v44 = 16;
    v37 = 0;
    v41 = 0;
    v43 = 0;
    tinfo_details = get_tinfo_details();
    if ( !tinfo_details )
    {
      if ( !under_debugger )
        sub_383060(0xC556u, 0.0);
      BUG();
    }
    v5 = *(_DWORD **)(a1 + 832);
    v6 = *(_QWORD *)(a1 + 8);
    v7 = *(_QWORD *)(a1 + 40);
    v29 = v37;
    v32 = v5[112];
    v8 = *(_QWORD *)(v6 + 920);
    if ( (*(_BYTE *)(v8 + 176) & 0x20) != 0 )
      v9 = 9;
    else
      v9 = 8 - sub_3E9AE0((__int64 *)(v8 + 104), v7);
    v10 = (unsigned int)(v37 - 1);
    v28 = v10 * v32 + v5[123] + v32 * v9;
    if ( v28 > v5[130] )
    {
      tinfo_details = 0;
    }
    else
    {
      si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_4247F0);
      v12 = 0;
      v13 = (__m128i *)v45;
      do
      {
        v13[1] = (__m128i)si128;
        v13->m128i_i16[0] = 0;
        v13 += 5;
        v13[-5].m128i_i16[1] = 0;
        v13[-5].m128i_i32[1] = -1;
        v13[-5].m128i_i64[1] = 0;
        v13[-3].m128i_i64[0] = 0;
        *(__m128i *)((char *)&v13[-3] + 8) = 0;
        v13[-2].m128i_i32[2] = 0;
        v13[-1].m128i_i64[0] = 0;
        v13[-1].m128i_i32[2] = 0;
      }
      while ( v13 != (__m128i *)&v48 );
      if ( v29 > 0 )
      {
        v14 = v28;
        v15 = v46;
        v30 = &v46[80 * v10 + 80];
        do
        {
          a5 = (__m128)_mm_cvtsi32_si128(v14);
          *(v15 - 24) = 1;
          *(_QWORD *)v35 = 41;
          v12 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v32), (__m128i)a5);
          *(_QWORD *)(v15 - 20) = v12.m128i_i64[0];
          copy_tinfo_t();
          v15 += 80;
          clear_tinfo_t();
          v14 -= v32;
        }
        while ( v15 != v30 );
        v6 = *(_QWORD *)(a1 + 8);
        v7 = *(_QWORD *)(a1 + 40);
      }
      v34 = 0;
      v33 = 0xFFFFFFFF00000000LL;
      *(_QWORD *)v35 = 41;
      v16 = sub_335B10(v6, v7, *(_QWORD *)(a2 + 8), (__int64)v35, v29, (__int64)v45, *(double *)v12.m128i_i64, si128, 1);
      clear_tinfo_t();
      v17 = *(_QWORD *)(v16 + 72);
      v34 = v16;
      *(_DWORD *)(v17 + 280) |= 0x10u;
      *(_DWORD *)v35 = 1;
      LOBYTE(v33) = 4;
      HIDWORD(v33) = v32;
      *(_QWORD *)&v35[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v32), _mm_cvtsi32_si128(v28)).m128i_u64[0];
      sub_1D6450(a1, 67, (unsigned __int8 *)&v33, nullptr, v35, v12, si128, a5);
      if ( ((*(_WORD *)(a1 + 48) - 86) & 0xFFFD) == 0 )
        sub_373590(*(_QWORD *)(a1 + 8), *(double *)v12.m128i_i64, si128);
      sub_11CDA0((__int64)v35);
      v18 = &v47;
      sub_11CDA0((__int64)&v33);
      while ( 1 )
      {
        cleanup_argloc();
        v19 = *((_QWORD *)v18 + 4);
        if ( v19 )
        {
          *((_QWORD *)v18 + 5) = 0;
          qfree(v19);
        }
        clear_tinfo_t();
        sub_11CDA0((__int64)v18);
        if ( v18 == v45 )
          break;
        v18 -= 80;
      }
    }
    if ( v42 )
    {
      *(_QWORD *)&v43 = 0;
      qfree(v42);
    }
    cleanup_argloc();
    clear_tinfo_t();
    v20 = v36;
    if ( v36 )
    {
      v21 = v37;
      if ( (_QWORD)v37 )
      {
        v22 = 0;
        do
        {
          v23 = (_QWORD *)(v20 + 80 * v22);
          clear_tinfo_t();
          v24 = v23[5];
          if ( v24 )
          {
            v23[6] = 0;
            qfree(v24);
          }
          v25 = v23[2];
          if ( v25 )
          {
            v23[3] = 0;
            qfree(v25);
          }
          cleanup_argloc();
          v20 = v36;
          ++v22;
        }
        while ( v21 != v22 );
      }
      *(_QWORD *)&v37 = 0;
      qfree(v20);
    }
  }
  else
  {
    return 0;
  }
  return tinfo_details;
}

