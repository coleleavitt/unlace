unsigned __int64 __fastcall sub_1C31B0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, double a6, __m128 a7)
{
  __int64 *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r14
  __m128i v14; // [rsp+0h] [rbp-A8h] BYREF
  int v15; // [rsp+10h] [rbp-98h]
  __int64 v16; // [rsp+18h] [rbp-90h]
  int v17; // [rsp+20h] [rbp-88h]
  __int64 (__fastcall **v18)(); // [rsp+30h] [rbp-78h]
  __int64 v19; // [rsp+38h] [rbp-70h]
  __int64 v20; // [rsp+40h] [rbp-68h]
  __int128 v21; // [rsp+48h] [rbp-60h]
  __int64 v22; // [rsp+58h] [rbp-50h]
  int v23; // [rsp+60h] [rbp-48h]
  __int64 v24; // [rsp+68h] [rbp-40h]
  unsigned __int64 v25; // [rsp+78h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  v18 = off_4DE840;
  v19 = a2;
  v20 = 0;
  v22 = 0;
  v23 = -1;
  v24 = a4;
  v21 = 0;
  if ( a5 )
  {
    calc_tinfo_gaps();
    for_all_arglocs();
    if ( *(_DWORD *)a1 == 2 )
    {
      v9 = *(__int64 **)(a1 + 8);
      v10 = v9[1];
      if ( !v10 )
      {
        if ( !under_debugger )
          sub_383060(0xCA09u, 0.0);
        BUG();
      }
      v11 = 3 * v10;
      v12 = *v9;
      v15 = 0;
      v13 = v12 + 8 * v11 - 24;
      copy_argloc();
      v17 = *(_DWORD *)(v13 + 16);
      if ( (unsigned __int16)v17 + *(unsigned __int16 *)(v13 + 18) < a3 )
      {
        v14.m128i_i64[0] = v24 + v16;
        v14.m128i_i64[1] = a3 - (unsigned __int16)v17;
        sub_316BB0((__int64 *)(v19 + 16), &v14, 0.0, a7);
      }
      cleanup_argloc();
    }
  }
  else
  {
    for_all_arglocs();
  }
  v18 = off_4DE840;
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20);
  }
  return v25 - __readfsqword(0x28u);
}

