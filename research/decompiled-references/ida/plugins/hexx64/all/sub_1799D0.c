__int64 __fastcall sub_1799D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __m128i v9; // xmm0
  __int64 v10; // rax
  __m128 v11; // xmm1
  __m128i v12; // xmm0
  int v13; // eax
  unsigned int **v14; // r15
  unsigned int v15; // ebp
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // r13
  __int64 v19; // r12
  __int64 *v20; // rbx
  __int64 v21; // rdi
  _DWORD v23[2]; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+8h] [rbp-C0h]
  __int64 (__fastcall **v25)(); // [rsp+10h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+18h] [rbp-B0h]
  __int64 v27; // [rsp+20h] [rbp-A8h]
  __int64 v28; // [rsp+28h] [rbp-A0h]
  __int64 v29; // [rsp+30h] [rbp-98h]
  char v30; // [rsp+38h] [rbp-90h]
  unsigned __int64 v31; // [rsp+40h] [rbp-88h]
  unsigned int **v32; // [rsp+48h] [rbp-80h] BYREF
  __int128 v33; // [rsp+50h] [rbp-78h]
  __m128i v34; // [rsp+60h] [rbp-68h]
  __int64 v35; // [rsp+70h] [rbp-58h]
  unsigned int v36; // [rsp+78h] [rbp-50h]
  unsigned __int64 v37; // [rsp+88h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 48);
  v37 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 480);
  v25 = off_4DE0B8;
  v33 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v32 = nullptr;
  v8 = *(_QWORD *)(v7 + 112);
  v9 = (__m128i)v7;
  v31 = v7;
  v10 = *(_QWORD *)(a1 + 64);
  v36 = 0;
  v27 = a1;
  v11 = (__m128)(unsigned __int64)(v8 + 104);
  v26 = v10;
  v35 = 0;
  v12 = _mm_unpacklo_epi64(v9, (__m128i)v11);
  v34 = v12;
  if ( !v6 )
    return 0;
  do
  {
    if ( *(_DWORD *)v6 == 62 )
      goto LABEL_10;
    v13 = *(_DWORD *)(v6 + 68);
    v14 = v32;
    v24 = v6;
    v23[0] = 4;
    v23[1] = v13;
    if ( !((_QWORD)v33 << 6) )
    {
      LOBYTE(v23[0]) = 0;
LABEL_9:
      v28 = v6;
      sub_11E900((_BYTE *)v6, (__int64)&v25);
      sub_11CDA0((__int64)v23);
      goto LABEL_10;
    }
    while ( !sub_1255D0(
               (unsigned __int8 *)v23,
               *(_QWORD *)(v34.m128i_i64[0] + 112),
               (__int64)(v14 + 1),
               0,
               *(double *)v12.m128i_i64) )
    {
      v14 += 8;
      if ( v14 == &v32[8 * (_QWORD)v33] )
      {
        LOBYTE(v23[0]) = 0;
        goto LABEL_9;
      }
    }
    LOBYTE(v23[0]) = 0;
    if ( !v14 || !(unsigned __int8)sub_174DF0((__int64 *)&v25, (char *)(v6 + 32), v14, (__m128)v12, v11) )
      goto LABEL_9;
    sub_172B80(*(unsigned __int64 **)(v26 + 1504), v6, v12);
    ++v36;
    sub_11CDA0((__int64)v23);
LABEL_10:
    sub_1794F0((__int64 *)&v32, a1, (unsigned int *)v6, v8, a5, a6, *(double *)v12.m128i_i64, v11);
    v6 = *(_QWORD *)(v6 + 8);
  }
  while ( v6 );
  v15 = v36;
  if ( v36 )
  {
    v16 = *(_DWORD *)(a1 + 24);
    BYTE1(v16) &= ~2u;
    LOBYTE(v16) = v16 | 0x80;
    *(_DWORD *)(a1 + 24) = v16;
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4LL) &= ~8u;
    sub_A2520(a1, "cse found %d subexpressions\n");
    v15 = v36;
  }
  v17 = (__int64)v32;
  v25 = off_4DE0B8;
  if ( v32 )
  {
    v18 = v33;
    if ( (_QWORD)v33 )
    {
      v19 = 0;
      do
      {
        v20 = (__int64 *)(v17 + (v19 << 6));
        v21 = v20[5];
        if ( v21 )
        {
          v20[6] = 0;
          qfree(v21);
        }
        ++v19;
        qfree(v20[3]);
        sub_11CDA0((__int64)(v20 + 1));
        v17 = (__int64)v32;
      }
      while ( v18 != v19 );
    }
    *(_QWORD *)&v33 = 0;
    qfree(v17);
  }
  return v15;
}

