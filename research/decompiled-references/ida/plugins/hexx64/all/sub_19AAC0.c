int *__fastcall sub_19AAC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __m128 si128; // xmm1
  char *v9; // rbx
  __m128 *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rsi
  _QWORD *v13; // rax
  int *v14; // r13
  int v15; // eax
  __int64 v16; // rdi
  __int64 v20; // [rsp+10h] [rbp-108h] BYREF
  char v21; // [rsp+18h] [rbp-100h]
  __int64 v22; // [rsp+20h] [rbp-F8h] BYREF
  char v23; // [rsp+28h] [rbp-F0h]
  _BYTE v24[80]; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v25[80]; // [rsp+80h] [rbp-98h] BYREF
  char v26; // [rsp+D0h] [rbp-48h] BYREF
  unsigned __int64 v27; // [rsp+D8h] [rbp-40h]

  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_4247F0);
  v9 = &v26;
  v10 = (__m128 *)v24;
  v27 = __readfsqword(0x28u);
  do
  {
    v10->m128_i32[1] = -1;
    v10 += 5;
    v10[-5].m128_i16[0] = 0;
    v10[-5].m128_i16[1] = 0;
    v10[-5].m128_u64[1] = 0;
    v10[-4] = si128;
    v10[-3].m128_u64[0] = 0;
    *(__m128 *)((char *)&v10[-3] + 8) = 0;
    v10[-2].m128_i32[2] = 0;
    v10[-1].m128_u64[0] = 0;
    v10[-1].m128_i32[2] = 0;
  }
  while ( v10 != (__m128 *)&v26 );
  v11 = *(_QWORD *)(a1 + 64);
  v20 = a5;
  v21 = 5;
  sub_195BA0((__int64)v24, v11, &v20, -1, a6, 0.0);
  v12 = *(_QWORD *)(a1 + 64);
  v22 = a4;
  v23 = 5;
  sub_195BA0((__int64)v25, v12, &v22, -1, a6, 0.0);
  v13 = (_QWORD *)sub_196A40(*(_QWORD *)(a1 + 64), a3, (__int64)v24, 0.0, si128);
  v14 = (int *)sub_A3160(a1, v13, a2, 0.0);
  v15 = *(_DWORD *)(a1 + 24);
  BYTE1(v15) &= ~2u;
  LOBYTE(v15) = v15 | 0x80;
  *(_DWORD *)(a1 + 24) = v15;
  sub_1B5B40(v14);
  sub_A2520(a1, "make va_copy: %s");
  do
  {
    v9 -= 80;
    cleanup_argloc();
    v16 = *((_QWORD *)v9 + 4);
    if ( v16 )
    {
      *((_QWORD *)v9 + 5) = 0;
      qfree(v16);
    }
    clear_tinfo_t();
    sub_11CDA0((__int64)v9);
  }
  while ( v9 != v24 );
  return v14;
}

