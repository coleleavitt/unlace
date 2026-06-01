__int64 __fastcall sub_4EC20(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 i; // r12
  _QWORD *v6; // rbp
  __int64 v7; // rbp
  void *v8; // rdi
  __m128i si128; // xmm0
  __int64 v10; // rdi
  __int64 v11; // rdi
  __m128i v12; // xmm2
  __m128i v13; // xmm0
  unsigned __int64 v14; // r12
  void **v15; // rbp
  void *v16; // rdi
  __m128i v17; // xmm4
  __m128i v18; // xmm5
  __int64 v19; // rbp
  _QWORD *v20; // r12
  __int64 v21; // rdi
  __int64 v22; // rax
  void (*v23)(); // rax
  __m128i v25; // [rsp+0h] [rbp-98h] BYREF
  __m128i v26; // [rsp+10h] [rbp-88h] BYREF
  _OWORD v27[2]; // [rsp+20h] [rbp-78h] BYREF
  _OWORD v28[2]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v29; // [rsp+68h] [rbp-30h]

  v29 = __readfsqword(0x28u);
  *((_DWORD *)a1 + 340) = 6;
  v2 = a1[172];
  if ( v2 )
  {
    v3 = a1[173];
    if ( v3 )
    {
      v4 = 0;
      for ( i = 0; i != v3; ++i )
      {
        v6 = (_QWORD *)(v2 + v4);
        if ( *(_QWORD *)(v2 + v4 + 80) )
        {
          v6[11] = 0;
          qfree();
        }
        if ( v6[7] )
        {
          v6[8] = 0;
          qfree();
        }
        if ( *v6 )
        {
          v6[1] = 0;
          qfree();
        }
        v2 = a1[172];
        v4 += 112;
      }
    }
    a1[173] = 0;
    qfree();
    a1[172] = 0;
    a1[174] = 0;
  }
  sub_48DD0((void *)a1[177]);
  v7 = a1[183];
  a1[177] = 0;
  a1[178] = (__int64)(a1 + 176);
  a1[179] = (__int64)(a1 + 176);
  a1[180] = 0;
  while ( v7 )
  {
    sub_4A260(*(_QWORD **)(v7 + 24));
    v8 = (void *)v7;
    v7 = *(_QWORD *)(v7 + 16);
    operator delete(v8, 0x28u);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_82350);
  v10 = a1[189];
  a1[183] = 0;
  a1[184] = (__int64)(a1 + 182);
  a1[185] = (__int64)(a1 + 182);
  a1[188] = 0;
  *((__m128i *)a1 + 93) = si128;
  if ( v10 )
  {
    a1[190] = 0;
    qfree();
    a1[189] = 0;
    a1[191] = 0;
  }
  if ( a1[192] )
  {
    a1[193] = 0;
    qfree();
    a1[192] = 0;
    a1[194] = 0;
  }
  v11 = a1[196];
  a1[195] = 0;
  if ( v11 )
  {
    a1[197] = 0;
    qfree();
    a1[196] = 0;
    a1[198] = 0;
  }
  *((_DWORD *)a1 + 398) = 0;
  v12 = _mm_loadu_si128((const __m128i *)(a1 + 19));
  v13 = _mm_loadu_si128((const __m128i *)(a1 + 23));
  v26 = _mm_loadu_si128((const __m128i *)(a1 + 17));
  v27[0] = _mm_loadu_si128((const __m128i *)(a1 + 21));
  v27[1] = v13;
  v28[0] = v26;
  v25 = v12;
  v28[1] = v12;
  sub_47C40((__int64 *)v28, (__int64 *)v27);
  v14 = a1[24] + 8;
  v15 = (void **)(v12.m128i_i64[1] + 8);
  if ( v12.m128i_i64[1] + 8 < v14 )
  {
    do
    {
      v16 = *v15++;
      operator delete(v16, 0x1F8u);
    }
    while ( (unsigned __int64)v15 < v14 );
  }
  v17 = _mm_load_si128(&v26);
  v18 = _mm_load_si128(&v25);
  *((_BYTE *)a1 + 1368) = 0;
  v19 = a1[206];
  *((_BYTE *)a1 + 1370) = 0;
  *(__m128i *)(a1 + 21) = v17;
  *(__m128i *)(a1 + 23) = v18;
  while ( v19 )
  {
    v20 = (_QWORD *)v19;
    sub_4A600(*(_QWORD **)(v19 + 24));
    v21 = *(_QWORD *)(v19 + 40);
    v19 = *(_QWORD *)(v19 + 16);
    if ( v21 )
    {
      v20[6] = 0;
      qfree();
    }
    operator delete(v20, 0x48u);
  }
  a1[206] = 0;
  a1[207] = (__int64)(a1 + 205);
  a1[208] = (__int64)(a1 + 205);
  v22 = *a1;
  a1[209] = 0;
  *((_DWORD *)a1 + 341) = -1;
  v23 = *(void (**)())(v22 + 672);
  if ( v23 != nullsub_22 )
    ((void (__fastcall *)(__int64 *))v23)(a1);
  return sub_70A30(a1);
}

