__int64 __fastcall sub_A5E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int *v7; // rax
  int *v8; // rbx
  __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // r13d
  __int64 v12; // rdi
  const void *v14; // rsi
  __int64 v15; // [rsp+0h] [rbp-140h]
  __int64 n; // [rsp+8h] [rbp-138h]
  const void **v17; // [rsp+10h] [rbp-130h]
  __int64 (__fastcall **v18)(); // [rsp+28h] [rbp-118h] BYREF
  __int64 v19; // [rsp+30h] [rbp-110h]
  __int128 v20; // [rsp+38h] [rbp-108h]
  __int64 v21; // [rsp+48h] [rbp-F8h]
  __int64 v22; // [rsp+50h] [rbp-F0h]
  int v23; // [rsp+58h] [rbp-E8h]
  __m128i v24; // [rsp+60h] [rbp-E0h]
  int v25; // [rsp+70h] [rbp-D0h]
  _BYTE v26[96]; // [rsp+78h] [rbp-C8h] BYREF
  int v27; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v28; // [rsp+E0h] [rbp-60h]
  void *v29; // [rsp+E8h] [rbp-58h] BYREF
  __int128 v30; // [rsp+F0h] [rbp-50h]
  unsigned __int64 v31; // [rsp+100h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v19 = 0x3FF000004LL;
  v20 = -1;
  v18 = (__int64 (__fastcall **)())&unk_1EB20;
  v7 = (int *)v26;
  v8 = &v27;
  v21 = 0;
  v22 = a2;
  v23 = 2;
  v25 = -1;
  v24 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1EAB0), (__m128i)(unsigned __int64)off_1EAA0);
  do
  {
    *(_QWORD *)v7 = 0;
    v7 += 6;
    *((_OWORD *)v7 - 1) = 0;
  }
  while ( &v27 != v7 );
  v27 = 0;
  if ( ((HIDWORD(v19) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v19) != 0xFF )
    {
      if ( !under_debugger )
        interr(3449);
      BUG();
    }
    BYTE3(v19) = ((HIDWORD(v19) >> 19) & 0x3F) - 1;
    HIDWORD(v19) &= 0xFE07FFFF;
  }
  v9 = *(_QWORD *)(a4 + 8);
  v28 = a1;
  v18 = off_1E5D0;
  v29 = nullptr;
  v30 = 0;
  if ( v9 )
  {
    v17 = (const void **)a4;
    v15 = v9;
    n = 4 * v9;
    v29 = (void *)qalloc_or_throw(4 * v9);
    v14 = *v17;
    *((_QWORD *)&v30 + 1) = v15;
    memcpy(v29, v14, n);
    *(_QWORD *)&v30 = v15;
  }
  else
  {
    sub_9FF0(*(_QWORD *)(a1 + 112), (__int64 *)&v29, a4, 0, a5, a6);
  }
  v10 = callui(16, 0, &v18);
  v18 = off_1E5D0;
  v11 = v10;
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v29);
  }
  v18 = (__int64 (__fastcall **)())&unk_1EB20;
  do
  {
    v12 = *((_QWORD *)v8 - 3);
    v8 -= 6;
    if ( v12 )
    {
      *((_QWORD *)v8 + 1) = 0;
      qfree(v12);
    }
  }
  while ( v8 != (int *)v26 );
  return v11;
}
