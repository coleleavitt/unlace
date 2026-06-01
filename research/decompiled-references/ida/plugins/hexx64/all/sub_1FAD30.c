unsigned __int64 __fastcall sub_1FAD30(__m128i *a1, __m128 a2, __m128 a3, double a4, double a5)
{
  __int64 v7; // rbp
  __int64 v8; // rdi
  unsigned int v9; // eax
  __int64 v10; // rbp
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // r9d
  __int64 (__fastcall **v16)(); // [rsp+0h] [rbp-68h] BYREF
  __int64 v17; // [rsp+8h] [rbp-60h]
  __int64 v18; // [rsp+10h] [rbp-58h]
  __int64 v19; // [rsp+18h] [rbp-50h]
  __int64 v20; // [rsp+20h] [rbp-48h]
  __int64 v21; // [rsp+28h] [rbp-40h]
  __int128 v22; // [rsp+30h] [rbp-38h]
  __int64 v23; // [rsp+40h] [rbp-28h]
  unsigned __int64 v24; // [rsp+48h] [rbp-20h]

  v24 = __readfsqword(0x28u);
  if ( (a1->m128i_i8[2] & 8) != 0 || a1[19].m128i_i32[2] > 7 )
    return v24 - __readfsqword(0x28u);
  v7 = a1[58].m128i_i64[1];
  v8 = *(_QWORD *)(v7 + 24);
  if ( v8 )
  {
    *(_QWORD *)(v7 + 32) = 0;
    qfree(v8);
    *(_QWORD *)(v7 + 24) = 0;
    *(_QWORD *)(v7 + 40) = 0;
  }
  *(_DWORD *)(v7 + 48) = -1;
  if ( (unsigned int)sub_1FAB30(a1, *(double *)a2.m128_u64, a3, a4, a5) )
  {
    if ( !under_debugger )
      sub_383060(0xC4B4u, *(double *)a2.m128_u64);
    BUG();
  }
  if ( !a1[20].m128i_i8[0] )
  {
    sub_37E500((__int64)a1);
    sub_372D00((__int64)a1);
    a2 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v16 = off_4DE3D8;
    v21 = 0;
    v23 = 0;
    v22 = 0;
    sub_31B5F0((__int64)a1, (__int64)&v16);
    sub_1F1600((__int64)a1);
    v16 = off_4DE3D8;
    if ( v21 )
    {
      *(_QWORD *)&v22 = 0;
      qfree(v21);
    }
  }
  sub_FF080(a1, (__m128i)a2);
  a1->m128i_i32[0] |= 0x80000u;
  sub_1F3950((__int64)a1, *(double *)a2.m128_u64, a3);
  sub_13C740((__int64)a1, a2);
  sub_213420((__int64)a1);
  sub_213650((__int64)a1);
  sub_213790((__int64)a1);
  sub_219BD0((__int64)a1, *(double *)a2.m128_u64, *(double *)a3.m128_u64);
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v16 = &off_4DEB90;
  sub_11F9E0((__int64)a1, (__int64 *)&v16);
  sub_21A2C0((__int64)a1);
  sub_2139A0(a1);
  LOBYTE(v21) = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v16 = &off_4DEC58;
  sub_11FBB0((__int64)a1, (__int64)&v16);
  sub_1F1240((__int64)a1);
  sub_21B2A0((__int64)a1);
  v9 = a1[4].m128i_u32[2];
  if ( v9 <= 0x10 )
    v9 = getinf();
  if ( v9 != 176 && v9 != 256 )
  {
    v10 = a1[27].m128i_i64[0];
    v11 = v10 + 104 * a1[27].m128i_i64[1];
    if ( v11 != v10 )
    {
      while ( (*(_BYTE *)(v10 + 25) & 1) == 0 || (get_tinfo_property() & 0xF) != 0xB )
      {
        v10 += 104;
        if ( v11 == v10 )
          goto LABEL_20;
      }
      sub_3311F0(a1, 0xFFFFFFFFFFFFFFFFLL, 0x15u);
    }
  }
LABEL_20:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1[58].m128i_i64[1] + 64LL))(a1[58].m128i_i64[1]);
  sub_330F20((__int64)a1, 8, v12, v13, v14, v15);
  sub_66FA0((__int64)a1, 0);
  return sub_321ED0((__int64)a1, 1, *(double *)a2.m128_u64, a3);
}

