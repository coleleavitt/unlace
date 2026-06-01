__int64 __fastcall sub_258030(__m128i *a1)
{
  __int64 *m128i_i64; // r13
  __int64 v3; // r14
  __int64 i; // rbx
  __int64 *v5; // rax
  __int64 v6; // rdi
  int v7; // edx
  __int64 v8; // rdi
  __int64 v10; // [rsp+10h] [rbp-98h] BYREF
  __int128 v11; // [rsp+18h] [rbp-90h]
  __int64 (__fastcall **v12)(int, int, int, int, int, int, char); // [rsp+30h] [rbp-78h] BYREF
  __int64 v13; // [rsp+38h] [rbp-70h]
  __int128 v14; // [rsp+40h] [rbp-68h]
  int v15; // [rsp+50h] [rbp-58h]
  __int64 v16; // [rsp+58h] [rbp-50h]
  char v17; // [rsp+60h] [rbp-48h]
  char v18; // [rsp+61h] [rbp-47h]
  __int64 *v19; // [rsp+68h] [rbp-40h]
  unsigned __int64 v20; // [rsp+78h] [rbp-30h]

  m128i_i64 = a1[8].m128i_i64;
  v3 = a1[8].m128i_i64[1];
  v20 = __readfsqword(0x28u);
  v11 = 0;
  v10 = 0;
  if ( v3 )
  {
    for ( i = 0; i != v3; ++i )
    {
      v5 = (__int64 *)(a1[8].m128i_i64[0] + 32 * i);
      v6 = *v5;
      if ( *v5 )
      {
        v5[1] = 0;
        qfree(v6);
      }
    }
  }
  a1[8].m128i_i64[1] = 0;
  v17 = 0;
  v13 = 0;
  v15 = 0;
  v16 = 0;
  v12 = &off_4DFFB8;
  v18 = 1;
  v19 = &v10;
  v14 = 0;
  sub_268FA0((__int64)a1, (__int64)&v12);
  v7 = v15;
  a1[9].m128i_i32[2] = v15;
  sub_332C40((__int64)a1, (__int64)&v10, v7, m128i_i64);
  a1[6].m128i_i32[3] |= 2u;
  sub_33E140(a1[13].m128i_i64[1], 0xEu, a1);
  v8 = a1[13].m128i_i64[1];
  if ( (*(_BYTE *)(v8 + 452) & 0xC0) == 0 )
    sub_3B5320(v8, (unsigned __int64 *)a1);
  sub_3A5DF0(a1);
  v12 = &off_4E3638;
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13);
  }
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10);
  }
  return 1;
}

