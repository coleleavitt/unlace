__int64 __fastcall sub_175510(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rax
  __int64 v3; // rcx
  __m128i v4; // xmm0
  __int64 v5; // rax
  int v6; // eax
  int **v7; // r15
  unsigned int v8; // ebp
  int v9; // eax
  int **v10; // rdi
  __int64 v11; // r13
  __int64 v12; // r12
  int **v13; // rbx
  _DWORD v15[2]; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+8h] [rbp-C0h]
  __int64 (__fastcall **v17)(); // [rsp+10h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+18h] [rbp-B0h]
  __int64 v19; // [rsp+20h] [rbp-A8h]
  __int64 v20; // [rsp+28h] [rbp-A0h]
  __int64 v21; // [rsp+30h] [rbp-98h]
  char v22; // [rsp+38h] [rbp-90h]
  unsigned __int64 v23; // [rsp+40h] [rbp-88h]
  int **v24; // [rsp+48h] [rbp-80h] BYREF
  __int128 v25; // [rsp+50h] [rbp-78h]
  __m128i v26; // [rsp+60h] [rbp-68h]
  __int64 v27; // [rsp+70h] [rbp-58h]
  int v28; // [rsp+78h] [rbp-50h]
  unsigned __int64 v29; // [rsp+88h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 48);
  v29 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 480);
  v17 = off_4B0B38;
  v25 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v24 = nullptr;
  v3 = *(_QWORD *)(v2 + 112);
  v4 = (__m128i)v2;
  v23 = v2;
  v5 = *(_QWORD *)(a1 + 64);
  v28 = 0;
  v19 = a1;
  v18 = v5;
  v27 = 0;
  v26 = _mm_unpacklo_epi64(v4, (__m128i)(unsigned __int64)(v3 + 104));
  if ( !v1 )
    return 0;
  do
  {
    if ( *(_DWORD *)v1 == 62 )
      goto LABEL_10;
    v6 = *(_DWORD *)(v1 + 68);
    v7 = v24;
    v16 = v1;
    v15[0] = 4;
    v15[1] = v6;
    if ( !((_QWORD)v25 << 6) )
    {
      LOBYTE(v15[0]) = 0;
LABEL_9:
      v20 = v1;
      sub_11A440((_BYTE *)v1, (__int64)&v17);
      sub_1188E0((__int64)v15);
      goto LABEL_10;
    }
    while ( !sub_121110((unsigned __int8 *)v15, *(_QWORD *)(v26.m128i_i64[0] + 112), (__int64)(v7 + 1), 0) )
    {
      v7 += 8;
      if ( v7 == &v24[8 * (_QWORD)v25] )
      {
        LOBYTE(v15[0]) = 0;
        goto LABEL_9;
      }
    }
    LOBYTE(v15[0]) = 0;
    if ( !v7 || !(unsigned __int8)sub_170930((__int64 *)&v17, (char *)(v1 + 32), v7) )
      goto LABEL_9;
    sub_16E6C0(*(_QWORD *)(v18 + 1504), v1);
    ++v28;
    sub_1188E0((__int64)v15);
LABEL_10:
    sub_175030((__int64)&v24, a1, (unsigned int *)v1);
    v1 = *(_QWORD *)(v1 + 8);
  }
  while ( v1 );
  v8 = v28;
  if ( v28 )
  {
    v9 = *(_DWORD *)(a1 + 24);
    BYTE1(v9) &= ~2u;
    LOBYTE(v9) = v9 | 0x80;
    *(_DWORD *)(a1 + 24) = v9;
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4LL) &= ~8u;
    sub_9E060(a1, (__int64)"cse found %d subexpressions\n", v28);
    v8 = v28;
  }
  v10 = v24;
  v17 = off_4B0B38;
  if ( v24 )
  {
    v11 = v25;
    if ( (_QWORD)v25 )
    {
      v12 = 0;
      do
      {
        v13 = &v10[8 * v12];
        if ( v13[5] )
        {
          v13[6] = nullptr;
          qfree();
        }
        ++v12;
        qfree();
        sub_1188E0((__int64)(v13 + 1));
        v10 = v24;
      }
      while ( v11 != v12 );
    }
    *(_QWORD *)&v25 = 0;
    qfree();
  }
  return v8;
}

