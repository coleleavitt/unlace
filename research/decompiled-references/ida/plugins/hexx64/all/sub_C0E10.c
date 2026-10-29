unsigned __int64 __fastcall sub_C0E10(__int64 *a1, __int64 a2, char *a3, __int64 *a4, int a5, _QWORD *a6, __int64 a7)
{
  char *v8; // rax
  char *v10; // rbx
  __m128i si128; // xmm1
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rsi
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v25; // [rsp+10h] [rbp-1A0h]
  __int64 v26; // [rsp+10h] [rbp-1A0h]
  _QWORD v28[3]; // [rsp+28h] [rbp-188h] BYREF
  __int64 v29; // [rsp+40h] [rbp-170h]
  __int128 v30; // [rsp+48h] [rbp-168h]
  __int128 v31; // [rsp+60h] [rbp-150h]
  __int64 v32; // [rsp+70h] [rbp-140h]
  int v33; // [rsp+78h] [rbp-138h]
  __int16 v34; // [rsp+7Ch] [rbp-134h]
  char v35[24]; // [rsp+80h] [rbp-130h] BYREF
  __int64 v36; // [rsp+98h] [rbp-118h]
  char v37; // [rsp+D0h] [rbp-E0h]
  int v38; // [rsp+D4h] [rbp-DCh]
  __int64 v39; // [rsp+D8h] [rbp-D8h]
  char v40; // [rsp+120h] [rbp-90h]
  int v41; // [rsp+124h] [rbp-8Ch]
  __int64 v42; // [rsp+128h] [rbp-88h]
  char v43; // [rsp+170h] [rbp-40h] BYREF
  unsigned __int64 v44; // [rsp+178h] [rbp-38h]

  v8 = v35;
  v10 = &v43;
  si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
  v44 = __readfsqword(0x28u);
  do
  {
    *((_DWORD *)v8 + 1) = -1;
    v8 += 80;
    *((_WORD *)v8 - 40) = 0;
    *((_WORD *)v8 - 39) = 0;
    *((_QWORD *)v8 - 9) = 0;
    *((__m128i *)v8 - 4) = si128;
    *((_QWORD *)v8 - 6) = 0;
    *(_OWORD *)(v8 - 40) = 0;
    *((_DWORD *)v8 - 6) = 0;
    *((_QWORD *)v8 - 2) = 0;
    *((_DWORD *)v8 - 2) = 0;
  }
  while ( v8 != &v43 );
  sub_11CA10(v35, a3);
  v13 = *a4;
  v14 = v36;
  v29 = 0;
  v36 = v13;
  *a4 = v14;
  print_tinfo();
  v37 = 11;
  v39 = v29;
  v29 = 0;
  v30 = 0;
  copy_tinfo_t();
  v15 = a6[1];
  v16 = *a6;
  v17 = *(_DWORD *)(*(_QWORD *)(a1[5] + 112) + 84LL);
  v40 = 11;
  v38 = v17;
  if ( v15 < a6[2] )
  {
    if ( v16 )
    {
      if ( v15 )
      {
        v16 = qrealloc();
        if ( !v16 )
          v16 = *a6;
      }
    }
  }
  *a6 = 0;
  *(_OWORD *)(a6 + 1) = 0;
  v42 = v16;
  copy_tinfo_t();
  v18 = a1[5];
  memset(v28, 0, sizeof(v28));
  v31 = 0;
  v41 = *(_DWORD *)(*(_QWORD *)(v18 + 112) + 84LL);
  copy_tinfo_t();
  v32 = 0;
  copy_tinfo_t();
  v33 = 0;
  v34 = 0;
  clear_tinfo_t();
  clear_tinfo_t();
  copy_tinfo_t();
  create_tinfo();
  clear_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  v19 = sub_335B10(a1[1], *(_QWORD *)(a2 + 24), (__int64)"CONTAINING_RECORD", (__int64)v28, 3, (__int64)v35, 0);
  v20 = *(_QWORD *)(v19 + 72);
  v21 = *(_QWORD *)(v20 + 152);
  *(_QWORD *)(v20 + 144) = 0;
  if ( v21 )
  {
    *(_QWORD *)(v20 + 160) = 0;
    v25 = v20;
    qfree(v21);
    v20 = v25;
    *(_QWORD *)(v25 + 152) = 0;
    *(_QWORD *)(v25 + 168) = 0;
  }
  v22 = *(_QWORD *)(v20 + 112);
  *(_QWORD *)(v20 + 104) = 0;
  if ( v22 )
  {
    *(_QWORD *)(v20 + 120) = 0;
    v26 = v20;
    qfree(v22);
    v20 = v26;
    *(_QWORD *)(v26 + 112) = 0;
    *(_QWORD *)(v26 + 128) = 0;
  }
  *(_DWORD *)(v20 + 280) |= 0x10u;
  *(_DWORD *)(v20 + 284) = 14;
  sub_F2530(a1[2], v19, 0);
  sub_11CA10((char *)(v19 + 64), (char *)(a2 + 64));
  sub_11D890(v19, a2);
  if ( v19 )
  {
    sub_11CDA0(v19 + 64);
    sub_11CDA0(v19 + 48);
    sub_11CDA0(v19 + 32);
    j__qfree(v19);
  }
  if ( a7 )
  {
    *(_DWORD *)a2 = 12;
    sub_120A10(
      a2 + 48,
      *(_QWORD *)(a1[5] + 112),
      a7,
      *(_DWORD *)(*(_QWORD *)(a1[5] + 112) + 84LL),
      *(_QWORD *)(a2 + 24),
      0);
  }
  else
  {
    *(_DWORD *)a2 = 4;
  }
  clear_tinfo_t();
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v29);
  }
  do
  {
    v10 -= 80;
    cleanup_argloc();
    v23 = *((_QWORD *)v10 + 4);
    if ( v23 )
    {
      *((_QWORD *)v10 + 5) = 0;
      qfree(v23);
    }
    clear_tinfo_t();
    sub_11CDA0((__int64)v10);
  }
  while ( v10 != v35 );
  return v44 - __readfsqword(0x28u);
}

