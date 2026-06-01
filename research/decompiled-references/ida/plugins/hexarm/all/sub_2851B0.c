unsigned __int64 __fastcall sub_2851B0(__int64 a1, char a2)
{
  __int64 v3; // r12
  __int64 v4; // rdi
  __m128 v5; // xmm0
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rbp
  int v13; // esi
  __int64 (__fastcall **v15)(); // [rsp+0h] [rbp-F8h] BYREF
  int v16; // [rsp+8h] [rbp-F0h]
  __int64 v17; // [rsp+10h] [rbp-E8h]
  __int128 v18; // [rsp+18h] [rbp-E0h]
  __int64 v19; // [rsp+28h] [rbp-D0h]
  __int128 v20; // [rsp+30h] [rbp-C8h]
  __int64 v21; // [rsp+40h] [rbp-B8h]
  __int64 v22; // [rsp+48h] [rbp-B0h]
  __int64 v23; // [rsp+50h] [rbp-A8h]
  __int64 (__fastcall **v24)(); // [rsp+60h] [rbp-98h] BYREF
  int v25; // [rsp+68h] [rbp-90h]
  __int64 v26; // [rsp+70h] [rbp-88h]
  __int128 v27; // [rsp+78h] [rbp-80h]
  __int64 v28; // [rsp+88h] [rbp-70h]
  __int128 v29; // [rsp+90h] [rbp-68h]
  __m128 v30; // [rsp+A0h] [rbp-58h]
  __int64 v31; // [rsp+B0h] [rbp-48h]
  char v32; // [rsp+B8h] [rbp-40h]
  unsigned __int64 v33; // [rsp+C8h] [rbp-30h]

  v3 = a1 + 16;
  v4 = *(_QWORD *)(a1 + 8);
  v33 = __readfsqword(0x28u);
  sub_137E80(v4);
  v27 = 0;
  v29 = 0;
  v5 = _mm_loadh_ps((const double *)(a1 + 216));
  v25 = 2;
  v26 = 0;
  v28 = 0;
  v31 = 0;
  v24 = (__int64 (__fastcall **)())&off_4DB0B8;
  v32 = a2;
  v30 = v5;
  if ( (unsigned int)sub_256750((__int64)&v24, v3, 0) )
  {
    if ( !under_debugger )
      sub_3835A0(50614);
    BUG();
  }
  sub_325690(a1, 0, 0);
  if ( a2 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 1040LL);
    *(_QWORD *)(v10 + 72) = a1;
    *(_BYTE *)(v10 + 88) = 0;
    sub_255E40((__int64 *)v10, v3, 0);
    clear_tinfo_t();
    v11 = *(_QWORD *)(a1 + 216);
    v12 = *(_QWORD *)(v11 + 1048);
    if ( (*(_BYTE *)(*(_QWORD *)(v12 + 64) + 607LL) & 0x10) != 0 )
    {
      *(_QWORD *)(v12 + 72) = a1;
      *(_BYTE *)(v12 + 88) = 0;
      sub_255E40((__int64 *)v12, v3, 0);
      clear_tinfo_t();
      v11 = *(_QWORD *)(a1 + 216);
    }
    v22 = v11;
    v16 = 2;
    v17 = 0;
    v19 = 0;
    v21 = a1;
    v23 = 0;
    v15 = (__int64 (__fastcall **)())&off_4DB0F8;
    v18 = 0;
    v20 = 0;
    sub_256750((__int64)&v15, v3, 0);
    v15 = off_4D63B8;
    if ( v19 )
    {
      *(_QWORD *)&v20 = 0;
      qfree();
    }
    if ( v17 )
    {
      *(_QWORD *)&v18 = 0;
      qfree();
    }
    v13 = 7;
  }
  else
  {
    v13 = 6;
  }
  sub_240110(a1, v13, v6, v7, v8, v9);
  sub_325690(a1, 0, 0);
  v24 = off_4D63B8;
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree();
  }
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree();
  }
  return v33 - __readfsqword(0x28u);
}

