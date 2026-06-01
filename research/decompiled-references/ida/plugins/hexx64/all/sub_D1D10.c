__int64 __fastcall sub_D1D10(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        double a7,
        int a8,
        unsigned int a9)
{
  __int64 v9; // r12
  int v10; // r13d
  __int64 v11; // r15
  __int64 i; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v23; // rbx
  __m128i si128; // xmm1
  __m128i *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  int tinfo_size; // eax
  char *v37; // r15
  __int64 v38; // rdi
  int v40; // [rsp+14h] [rbp-15Ch]
  __int64 v41; // [rsp+18h] [rbp-158h]
  __int64 v42; // [rsp+28h] [rbp-148h]
  char v43[8]; // [rsp+40h] [rbp-130h] BYREF
  __int64 v44; // [rsp+48h] [rbp-128h]
  _BYTE v45[56]; // [rsp+58h] [rbp-118h] BYREF
  char v46[8]; // [rsp+90h] [rbp-E0h] BYREF
  __int64 v47; // [rsp+98h] [rbp-D8h]
  _BYTE v48[24]; // [rsp+E0h] [rbp-90h] BYREF
  _BYTE v49[8]; // [rsp+130h] [rbp-40h] BYREF
  unsigned __int64 v50; // [rsp+138h] [rbp-38h]

  v9 = a6;
  v42 = a2;
  v10 = a8;
  v41 = a3;
  v40 = a4;
  v50 = __readfsqword(0x28u);
  v11 = *(_QWORD *)(a1 + 64);
  if ( (int)a9 > 16 )
  {
    v23 = *(_QWORD *)(v11 + 1496);
    si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
    v25 = (__m128i *)v43;
    do
    {
      v25[1] = si128;
      v25->m128i_i16[0] = 0;
      v25 += 5;
      v25[-5].m128i_i16[1] = 0;
      v25[-5].m128i_i32[1] = -1;
      v25[-5].m128i_i64[1] = 0;
      v25[-3].m128i_i64[0] = 0;
      *(__m128i *)((char *)&v25[-3] + 8) = 0;
      v25[-2].m128i_i32[2] = 0;
      v25[-1].m128i_i64[0] = 0;
      v25[-1].m128i_i32[2] = 0;
    }
    while ( v25 != (__m128i *)v49 );
    v43[0] = 9;
    v26 = j__qalloc_or_throw(24, (__int64)v49, a3, a4);
    *(_QWORD *)v26 = v11;
    *(_QWORD *)(v26 + 8) = a8;
    *(_DWORD *)(v26 + 16) = a5;
    v27 = *(_QWORD *)(v11 + 1504);
    v44 = v26;
    sub_11C950((unsigned __int8 *)v43, v27, v28, v29);
    copy_tinfo_t();
    v46[0] = 9;
    v32 = j__qalloc_or_throw(24, v23 + 200, v30, v31);
    *(_QWORD *)v32 = v11;
    *(_QWORD *)(v32 + 8) = v9;
    *(_DWORD *)(v32 + 16) = v40;
    v33 = *(_QWORD *)(v11 + 1504);
    v47 = v32;
    sub_11C950((unsigned __int8 *)v46, v33, v34, v35);
    copy_tinfo_t();
    copy_tinfo_t();
    clear_tinfo_t();
    tinfo_size = get_tinfo_size();
    sub_120A10((__int64)v48, *(_QWORD *)(v11 + 1504), (int)a9, tinfo_size, v41, 2);
    i = sub_335B10(v11, v41, (__int64)"memcpy", (__int64)v45, 3, (__int64)v43, 1);
    *(_DWORD *)(*(_QWORD *)(i + 72) + 284LL) = 5;
    sub_A3160(a1, (_QWORD *)i, v42, 0.0);
    v37 = v49;
    do
    {
      v37 -= 80;
      cleanup_argloc();
      v38 = *((_QWORD *)v37 + 4);
      if ( v38 )
      {
        *((_QWORD *)v37 + 5) = 0;
        qfree(v38);
      }
      clear_tinfo_t();
      sub_11CDA0((__int64)v37);
    }
    while ( v37 != v43 );
  }
  else
  {
    for ( i = 0; a9; v42 = (__int64)v21 )
    {
      v13 = (_QWORD *)j__qalloc_or_throw(80, a2, a3, a4);
      v13[4] = 0xFFFFFFFF00000000LL;
      i = (__int64)v13;
      v13[5] = 0;
      v13[6] = 0xFFFFFFFF00000000LL;
      v13[7] = 0;
      v13[8] = 0xFFFFFFFF00000000LL;
      v13[9] = 0;
      sub_330970((__int64)v13, v41);
      *(_DWORD *)i = 4;
      *(_BYTE *)(i + 32) = 9;
      v16 = j__qalloc_or_throw(24, v41, v14, v15);
      *(_QWORD *)(v16 + 8) = (int)v9;
      *(_DWORD *)(v16 + 16) = v40;
      *(_QWORD *)v16 = v11;
      *(_QWORD *)(i + 40) = v16;
      v17 = round_down_power2();
      *(_BYTE *)(i + 64) = 9;
      *(_DWORD *)(i + 36) = v17;
      v20 = j__qalloc_or_throw(24, v41, v18, v19);
      a2 = i;
      *(_QWORD *)(v20 + 8) = v10;
      *(_QWORD *)v20 = v11;
      *(_DWORD *)(v20 + 16) = a5;
      *(_QWORD *)(i + 72) = v20;
      LODWORD(v20) = *(_DWORD *)(i + 36);
      a9 -= v20;
      *(_DWORD *)(i + 68) = v20;
      LODWORD(v9) = v20 + v9;
      v10 += v20;
      v21 = sub_A3160(a1, (_QWORD *)i, v42, a7);
      a3 = a9;
    }
  }
  return i;
}

