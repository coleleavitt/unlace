__int64 __fastcall sub_14D680(__int64 a1, __int64 a2, __m128i a3)
{
  unsigned __int8 v4; // al
  unsigned __int8 *v6; // rbp
  __int64 v7; // rax
  unsigned __int64 *v8; // rax
  _QWORD *v9; // r13
  int v10; // ebp
  __int64 v11; // r12
  __int64 v12; // rax
  int v13; // r15d
  int v14; // eax
  __int64 v15; // r14
  __int64 v16; // rdi
  __int64 *v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // r9d
  unsigned int v22; // [rsp+14h] [rbp-74h]
  __int64 v23; // [rsp+18h] [rbp-70h] BYREF
  __int64 *v24; // [rsp+20h] [rbp-68h] BYREF
  __int64 v25; // [rsp+28h] [rbp-60h]
  __int64 v26; // [rsp+30h] [rbp-58h] BYREF
  __int128 v27; // [rsp+38h] [rbp-50h]
  unsigned __int64 v28; // [rsp+48h] [rbp-40h]

  v23 = a2;
  v28 = __readfsqword(0x28u);
  v4 = *(_BYTE *)a2;
  if ( *(_BYTE *)a2 == 10 )
    return (unsigned __int8)sub_11EFE0(
                              *(unsigned __int8 **)(a2 + 8),
                              *(unsigned __int8 **)(a1 + 48),
                              2u,
                              *(double *)a3.m128i_i64);
  if ( v4 == 8 )
    return v4 == 15;
  v6 = (unsigned __int8 *)v23;
  if ( !sub_11EFE0((unsigned __int8 *)a2, *(unsigned __int8 **)(a1 + 48), 2u, *(double *)a3.m128i_i64) )
  {
    v4 = *(_BYTE *)v23;
    return v4 == 15;
  }
  v7 = *(_QWORD *)(a1 + 64);
  if ( *(_BYTE *)(v7 + 184) || *(_BYTE *)(v7 + 24) )
  {
    v16 = *(_QWORD *)(a1 + 16);
    a3 = 0;
    v24 = nullptr;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    sub_123EA0(v16, (__int64 *)&v24, v23, 0, 0xFFFF0000, 0.0);
    v17 = *(__int64 **)(*(_QWORD *)(a1 + 64) + 32LL);
    sub_64640((__int64 *)&v24, v17, v18, v19, v20, v21);
    sub_317C60(&v26, (__int64)(v17 + 2));
    if ( !(unsigned __int8)sub_64880(&v24) || (_QWORD)v27 )
    {
      if ( v26 )
      {
        *(_QWORD *)&v27 = 0;
        qfree(v26);
      }
      qfree((__int64)v24);
      return 1;
    }
    if ( v26 )
      qfree(v26);
    qfree((__int64)v24);
    v6 = (unsigned __int8 *)v23;
  }
  v24 = &v23;
  v8 = sub_14D520((__m128i *)(a1 + 120), (unsigned __int64 *)&v23, &v24);
  sub_125180((unsigned __int8 *)v8 + 32, v6);
  if ( *(_BYTE *)v23 != 15 )
    return (unsigned __int8)sub_136AE0(a1, v23, a3) ^ 1u;
  v9 = *(_QWORD **)(*(_QWORD *)(v23 + 8) + 8LL);
  if ( !v9[1] )
    return 1;
  v22 = 1;
  v10 = 0;
  v11 = -1;
  v12 = 0;
  do
  {
    v25 = 0;
    v24 = (__int64 *)0xFFFFFFFF00000000LL;
    v15 = *v9 + 24 * v12;
    if ( v9[1] - 1LL == v12 )
      v13 = *(_DWORD *)(v23 + 4) - *(unsigned __int16 *)(v15 + 16);
    else
      v13 = *(unsigned __int16 *)(v15 + 18);
    sub_126420((__int64)&v24, *(_QWORD *)(a1 + 8), v15, v13, *(double *)a3.m128i_i64);
    if ( (unsigned __int8)sub_136AE0(a1, (__int64)&v24, a3) )
    {
      if ( (_DWORD)v11 != -1
        && ((_DWORD)v11 != v10 - 1
         || *(unsigned __int16 *)(v15 + 16)
          + *(unsigned __int16 *)(*v9 + 24 * v11 + 8)
          - *(unsigned __int16 *)(*v9 + 24 * v11 + 16) != (_DWORD)v25) )
      {
        sub_11CDA0((__int64)&v24);
        return 1;
      }
      if ( (_BYTE)v24 != 1 )
      {
        if ( !under_debugger )
          sub_383060(0xCA12u, *(double *)a3.m128i_i64);
        BUG();
      }
      v14 = v25;
      v22 = 0;
      v11 = v10;
      *(_DWORD *)v15 = 3;
      *(_DWORD *)(v15 + 8) = v14;
      *(_WORD *)(v15 + 18) = v13;
    }
    ++v10;
    sub_11CDA0((__int64)&v24);
    v12 = v10;
  }
  while ( (unsigned __int64)v10 < v9[1] );
  if ( v22 )
    return 1;
  sub_1267B0(v23, (__int64)&v24, *(double *)a3.m128i_i64);
  return v22;
}

