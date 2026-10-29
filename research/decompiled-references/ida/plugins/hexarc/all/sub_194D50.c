_QWORD *__fastcall sub_194D50(__int64 a1, int a2, int a3, int a4, int a5)
{
  __m128i si128; // xmm1
  char *v8; // rbx
  __m128i *v9; // rax
  int v10; // eax
  int v11; // r8d
  __int64 v12; // rdi
  __int64 v13; // rcx
  _QWORD *v14; // r12
  int v15; // eax
  const char *v16; // rax
  int tinfo_size; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // [rsp-8h] [rbp-128h]
  int v23; // [rsp+0h] [rbp-120h]
  __int64 v24; // [rsp+0h] [rbp-120h]
  __int64 v26; // [rsp+8h] [rbp-118h]
  __int64 v27; // [rsp+10h] [rbp-110h]
  const char *v29; // [rsp+18h] [rbp-108h]
  _QWORD *v30; // [rsp+20h] [rbp-100h]
  __int64 v31; // [rsp+28h] [rbp-F8h]
  __int64 v32; // [rsp+30h] [rbp-F0h] BYREF
  __int64 v33; // [rsp+38h] [rbp-E8h]
  _BYTE v34[84]; // [rsp+40h] [rbp-E0h] BYREF
  int v35; // [rsp+94h] [rbp-8Ch]
  __int64 v36; // [rsp+98h] [rbp-88h]
  char v37; // [rsp+E0h] [rbp-40h] BYREF
  unsigned __int64 v38; // [rsp+E8h] [rbp-38h]

  v38 = __readfsqword(0x28u);
  v31 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
    sub_18EAA0();
  si128 = _mm_load_si128((const __m128i *)&xmmword_3FA110);
  v8 = &v37;
  v27 = *(_QWORD *)(v31 + 480);
  v9 = (__m128i *)v34;
  do
  {
    v9->m128i_i32[1] = -1;
    v9 += 5;
    v9[-5].m128i_i16[0] = 0;
    v9[-5].m128i_i16[1] = 0;
    v9[-5].m128i_i64[1] = 0;
    v9[-4] = si128;
    v9[-3].m128i_i64[0] = 0;
    *(__m128i *)((char *)&v9[-3] + 8) = 0;
    v9[-2].m128i_i32[2] = 0;
    v9[-1].m128i_i64[0] = 0;
    v9[-1].m128i_i32[2] = 0;
  }
  while ( v9 != (__m128i *)&v37 );
  v10 = *(_DWORD *)(a1 + 8) & 0x20;
  v32 = *(_QWORD *)(a1 + 72);
  LOBYTE(v33) = v10 == 0 ? 5 : 1;
  sub_18F4E0((__int64)v34, *(_QWORD *)(v31 + 64), &v32, -1, 1);
  v11 = 1;
  if ( a5 == 25 )
  {
    v34[80] = 11;
    v36 = qstrdup();
    copy_tinfo_t();
    v11 = 2;
    v35 = *(_DWORD *)(*(_QWORD *)(v27 + 112) + 84LL);
  }
  v12 = *(_QWORD *)(v31 + 64);
  v32 = 1;
  v30 = (_QWORD *)sub_32E2F0(v12, a2, a4, (unsigned int)&v32, v11, (unsigned int)v34, 0, v22, v23, a3, v27, a4);
  clear_tinfo_t();
  v13 = v30[9];
  *(_DWORD *)(v13 + 280) |= 4u;
  *(_DWORD *)(v13 + 284) = a5;
  v24 = v13;
  if ( (*(_BYTE *)(a1 + 8) & 0x20) == 0 )
  {
    tinfo_size = get_tinfo_size();
    v19 = *(_QWORD *)(*(_QWORD *)(v31 + 64) + 1440LL) + *(_QWORD *)(a1 + 72);
    v33 = tinfo_size;
    v32 = v19;
    sub_30F830(v24 + 152, &v32, v19, v24, v20, v21);
  }
  v14 = sub_9CAA0(v31, v30, v26);
  v15 = *(_DWORD *)(v31 + 24);
  BYTE1(v15) &= ~2u;
  LOBYTE(v15) = v15 | 0x80;
  *(_DWORD *)(v31 + 24) = v15;
  v16 = (const char *)sub_1AF340(v14, v30);
  sub_9BE60(v31, (__int64)"added %s: %s", v29, v16);
  do
  {
    v8 -= 80;
    cleanup_argloc();
    if ( *((_QWORD *)v8 + 4) )
    {
      *((_QWORD *)v8 + 5) = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_1166E0((__int64)v8);
  }
  while ( v8 != v34 );
  return v14;
}

