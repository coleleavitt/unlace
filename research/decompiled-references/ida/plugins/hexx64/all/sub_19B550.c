int *__fastcall sub_19B550(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, double a6)
{
  __m128 si128; // xmm1
  char *v9; // rbx
  __m128 *v10; // rax
  int v11; // eax
  int v12; // r8d
  __int64 v13; // rdi
  __int64 v14; // rcx
  int *v15; // r12
  int v16; // eax
  __int64 v17; // rdi
  int tinfo_size; // eax
  __int64 v20; // rdx
  __int64 v21; // [rsp+0h] [rbp-120h]
  __int64 v23; // [rsp+10h] [rbp-110h]
  _QWORD *v25; // [rsp+20h] [rbp-100h]
  __int64 v26; // [rsp+28h] [rbp-F8h]
  __m128i v27; // [rsp+30h] [rbp-F0h] BYREF
  _BYTE v28[84]; // [rsp+40h] [rbp-E0h] BYREF
  int v29; // [rsp+94h] [rbp-8Ch]
  __int64 v30; // [rsp+98h] [rbp-88h]
  char v31; // [rsp+E0h] [rbp-40h] BYREF
  unsigned __int64 v32; // [rsp+E8h] [rbp-38h]

  v32 = __readfsqword(0x28u);
  v26 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
    sub_195160(a6);
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_4247F0);
  v9 = &v31;
  v23 = *(_QWORD *)(v26 + 480);
  v10 = (__m128 *)v28;
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
  while ( v10 != (__m128 *)&v31 );
  v11 = *(_DWORD *)(a1 + 8) & 0x20;
  v27.m128i_i64[0] = *(_QWORD *)(a1 + 72);
  v27.m128i_i8[8] = v11 == 0 ? 5 : 1;
  sub_195BA0((__int64)v28, *(_QWORD *)(v26 + 64), v27.m128i_i64, -1, 1, 0.0);
  v12 = 1;
  if ( a5 == 25 )
  {
    v28[80] = 11;
    v30 = qstrdup();
    copy_tinfo_t();
    v12 = 2;
    v29 = *(_DWORD *)(*(_QWORD *)(v23 + 112) + 84LL);
  }
  v13 = *(_QWORD *)(v26 + 64);
  v27.m128i_i64[0] = 1;
  v25 = (_QWORD *)sub_335B10(v13, a2, a4, (__int64)&v27, v12, (__int64)v28, 0);
  clear_tinfo_t();
  v14 = v25[9];
  *(_DWORD *)(v14 + 280) |= 4u;
  *(_DWORD *)(v14 + 284) = a5;
  v21 = v14;
  if ( (*(_BYTE *)(a1 + 8) & 0x20) == 0 )
  {
    tinfo_size = get_tinfo_size();
    v20 = *(_QWORD *)(*(_QWORD *)(v26 + 64) + 1440LL) + *(_QWORD *)(a1 + 72);
    v27.m128i_i64[1] = tinfo_size;
    v27.m128i_i64[0] = v20;
    sub_316BB0((__int64 *)(v21 + 152), &v27, 0.0, si128);
  }
  v15 = (int *)sub_A3160(v26, v25, a3, 0.0);
  v16 = *(_DWORD *)(v26 + 24);
  BYTE1(v16) &= ~2u;
  LOBYTE(v16) = v16 | 0x80;
  *(_DWORD *)(v26 + 24) = v16;
  sub_1B5B40(v15);
  sub_A2520(v26, "added %s: %s");
  do
  {
    v9 -= 80;
    cleanup_argloc();
    v17 = *((_QWORD *)v9 + 4);
    if ( v17 )
    {
      *((_QWORD *)v9 + 5) = 0;
      qfree(v17);
    }
    clear_tinfo_t();
    sub_11CDA0((__int64)v9);
  }
  while ( v9 != v28 );
  return v15;
}

