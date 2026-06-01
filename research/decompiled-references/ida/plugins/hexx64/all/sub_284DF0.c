unsigned __int64 __fastcall sub_284DF0(__int64 a1, char a2)
{
  __int64 v3; // r12
  __int64 v4; // rdi
  __m128 v5; // xmm0
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rbp
  unsigned int v9; // esi
  __int64 (__fastcall **v11)(); // [rsp+0h] [rbp-F8h] BYREF
  int v12; // [rsp+8h] [rbp-F0h]
  __int64 v13; // [rsp+10h] [rbp-E8h]
  __int128 v14; // [rsp+18h] [rbp-E0h]
  __int64 v15; // [rsp+28h] [rbp-D0h]
  __int128 v16; // [rsp+30h] [rbp-C8h]
  __int64 v17; // [rsp+40h] [rbp-B8h]
  __int64 v18; // [rsp+48h] [rbp-B0h]
  __int64 v19; // [rsp+50h] [rbp-A8h]
  __int64 (__fastcall **v20)(); // [rsp+60h] [rbp-98h] BYREF
  int v21; // [rsp+68h] [rbp-90h]
  __int64 v22; // [rsp+70h] [rbp-88h]
  __int128 v23; // [rsp+78h] [rbp-80h]
  __int64 v24; // [rsp+88h] [rbp-70h]
  __int128 v25; // [rsp+90h] [rbp-68h]
  __m128 v26; // [rsp+A0h] [rbp-58h]
  __int64 v27; // [rsp+B0h] [rbp-48h]
  char v28; // [rsp+B8h] [rbp-40h]
  unsigned __int64 v29; // [rsp+C8h] [rbp-30h]

  v3 = a1 + 16;
  v4 = *(_QWORD *)(a1 + 8);
  v29 = __readfsqword(0x28u);
  sub_138440(v4);
  v23 = 0;
  v25 = 0;
  v5 = _mm_loadh_ps((const double *)(a1 + 216));
  v21 = 2;
  v22 = 0;
  v24 = 0;
  v27 = 0;
  v20 = (__int64 (__fastcall **)())&off_4E09F8;
  v28 = a2;
  v26 = v5;
  if ( (unsigned int)sub_256390((__int64)&v20, v3, 0) )
  {
    if ( !under_debugger )
      sub_383060(0xC5B6u, *(double *)v5.m128_u64);
    BUG();
  }
  sub_3252D0(a1, 0, 0);
  if ( a2 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 1040LL);
    *(_QWORD *)(v6 + 72) = a1;
    *(_BYTE *)(v6 + 88) = 0;
    sub_255A80((__int64 *)v6, v3, 0, *(double *)v5.m128_u64);
    clear_tinfo_t();
    v7 = *(_QWORD *)(a1 + 216);
    v8 = *(_QWORD *)(v7 + 1048);
    if ( (*(_BYTE *)(*(_QWORD *)(v8 + 64) + 607LL) & 0x10) != 0 )
    {
      *(_QWORD *)(v8 + 72) = a1;
      *(_BYTE *)(v8 + 88) = 0;
      sub_255A80((__int64 *)v8, v3, 0, *(double *)v5.m128_u64);
      clear_tinfo_t();
      v7 = *(_QWORD *)(a1 + 216);
    }
    v18 = v7;
    v12 = 2;
    v13 = 0;
    v15 = 0;
    v17 = a1;
    v19 = 0;
    v11 = (__int64 (__fastcall **)())&off_4E0A38;
    v14 = 0;
    v16 = 0;
    sub_256390((__int64)&v11, v3, 0);
    v11 = off_4DBCF8;
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree(v15);
    }
    if ( v13 )
    {
      *(_QWORD *)&v14 = 0;
      qfree(v13);
    }
    v9 = 7;
  }
  else
  {
    v9 = 6;
  }
  sub_23FD50(a1, v9);
  sub_3252D0(a1, 0, 0);
  v20 = off_4DBCF8;
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24);
  }
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22);
  }
  return v29 - __readfsqword(0x28u);
}

