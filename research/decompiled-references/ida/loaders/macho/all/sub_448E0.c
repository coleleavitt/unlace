unsigned __int64 __fastcall sub_448E0(__int64 a1, __int64 a2, __int64 (*a3)(), double a4, double a5, double a6)
{
  int v7; // eax
  unsigned __int64 *v9; // rsi
  __int64 (*v10)(); // rcx
  bool v11; // zf
  __int64 (*v12)(); // rdx
  __int64 (*v13)(); // rdx
  unsigned __int64 *v14; // rdi
  __int64 v15; // r12
  __int64 v16; // rbx
  unsigned __int64 *v17; // rbp
  unsigned __int64 v18; // rdi
  bool v20; // [rsp+6h] [rbp-B2h] BYREF
  char v21; // [rsp+7h] [rbp-B1h] BYREF
  __int64 (__fastcall *v22)(__int64 *, __int64, _QWORD *, __m128i, __m128i, double); // [rsp+8h] [rbp-B0h] BYREF
  unsigned __int64 *v23; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v24; // [rsp+18h] [rbp-A0h]
  __m128i v25[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 (*v26)(); // [rsp+50h] [rbp-68h] BYREF
  __int128 v27; // [rsp+58h] [rbp-60h] BYREF
  int v28; // [rsp+68h] [rbp-50h]
  unsigned __int64 v29; // [rsp+78h] [rbp-40h]

  v7 = *(_DWORD *)(a2 + 364);
  v29 = __readfsqword(0x28u);
  if ( (v7 & 0x50) == 0 && (v7 & 1) == 0 )
    sub_19440((__int64)"Loading symbols");
  v24 = 0;
  v23 = (unsigned __int64 *)qvector_reserve();
  v9 = v23;
  *v23 = 0;
  v9[3] = 0;
  *((_BYTE *)v9 + 32) = 0;
  *(_OWORD *)(v9 + 1) = 0;
  *(_QWORD *)&v24 = v24 + 1;
  sub_33800(a3, (__int64)v9, nullptr, v10);
  v11 = *(_DWORD *)(a2 + 340) == 1;
  v20 = 0;
  v21 = 0;
  if ( !v11 )
    sub_41FC0(a1, a2, a3, &v20, &v21);
  if ( (*(_BYTE *)(a2 + 364) & 2) != 0 )
  {
    v12 = *(__int64 (**)())(a2 + 332);
    v27 = 0;
    a5 = COERCE_DOUBLE(&v27);
    v28 = 0;
    v26 = v12;
    v25[1].m128i_i8[0] = 0;
    v25[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_63268, (__m128i)(unsigned __int64)&v27);
    sub_27280((__int64)a3, v25, v12, (__int64 (*)())off_63268);
    sub_35B40(
      (const char *)(a1 + 32),
      &v26,
      (__int64 (__fastcall *)(__m128i *, __int64, const char *, __int64))sub_35110,
      (__int64)&v23);
  }
  v22 = (__int64 (__fastcall *)(__int64 *, __int64, _QWORD *, __m128i, __m128i, double))sub_42E80(
                                                                                          a1,
                                                                                          a2,
                                                                                          &v23,
                                                                                          !v20,
                                                                                          v21 ^ 1u);
  memset(v25, 0, 24);
  sub_3FD00((__int64)a3, v25[0].m128i_i64, v13);
  sub_3A290((_BYTE *)a1, a2, (unsigned __int64)v25, v23, (__int64)&v22, !v20);
  sub_2AEF0(
    (__int64 (__fastcall **)(__int64 *, __int64, _QWORD *, __m128i, __m128i, double))a1,
    a2,
    (__int64)a3,
    (__int64 (__fastcall **)(__int64 *, __int64, _QWORD *, __m128i, __m128i, double))v23,
    &v22,
    0.0,
    a5,
    a6);
  netnode_kill();
  if ( v25[0].m128i_i64[0] )
  {
    v25[0].m128i_i64[1] = 0;
    qfree();
  }
  v14 = v23;
  if ( v23 )
  {
    v15 = v24;
    if ( (_QWORD)v24 )
    {
      v16 = 0;
      do
      {
        v17 = &v14[5 * v16];
        if ( *((_BYTE *)v17 + 32) )
        {
          v18 = v17[3];
          if ( v18 )
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v18 + 8LL))(v18);
        }
        if ( *v17 )
        {
          v17[1] = 0;
          qfree();
        }
        ++v16;
        v14 = v23;
      }
      while ( v15 != v16 );
    }
    *(_QWORD *)&v24 = 0;
    qfree();
  }
  return v29 - __readfsqword(0x28u);
}

