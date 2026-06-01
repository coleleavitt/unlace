__int64 __fastcall sub_3B1E80(__int64 a1, __m128 a2, __int64 a3, __int64 a4)
{
  __int64 tinfo_property; // rax
  __int64 v7; // rdi
  __m128 v8; // xmm1
  __int64 v9; // rax
  __m128i v10; // xmm1
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ebx
  __int64 *v17; // [rsp+0h] [rbp-128h] BYREF
  __int64 *v18; // [rsp+8h] [rbp-120h]
  __m128i v19; // [rsp+10h] [rbp-118h] BYREF
  __int64 v20; // [rsp+28h] [rbp-100h] BYREF
  unsigned __int64 *v21[2]; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v22[4]; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v23; // [rsp+60h] [rbp-C8h] BYREF
  __int128 v24; // [rsp+68h] [rbp-C0h]
  __int64 v25; // [rsp+78h] [rbp-B0h] BYREF
  __int64 (__fastcall **v26)(); // [rsp+80h] [rbp-A8h] BYREF
  int v27; // [rsp+88h] [rbp-A0h]
  __int64 v28; // [rsp+90h] [rbp-98h]
  __int128 v29; // [rsp+98h] [rbp-90h]
  __int64 v30; // [rsp+A8h] [rbp-80h]
  __int128 v31; // [rsp+B0h] [rbp-78h]
  __m128i v32; // [rsp+C0h] [rbp-68h]
  __int64 v33; // [rsp+D0h] [rbp-58h]
  __int64 v34; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v35; // [rsp+E8h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v20 = 0;
  tinfo_property = get_tinfo_property();
  v7 = *(_QWORD *)(a1 + 32);
  v17 = &v23;
  v18 = (__int64 *)v21;
  v20 = tinfo_property;
  v21[0] = nullptr;
  v8 = _mm_loadh_ps((const double *)&v17);
  v21[1] = nullptr;
  v19 = (__m128i)v8;
  sub_387840(v7, v21, a1, a2);
  v9 = *(_QWORD *)(a1 + 32);
  v10 = _mm_load_si128(&v19);
  v23 = 0;
  v24 = 0;
  v25 = v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 104);
  v27 = 2;
  v28 = 0;
  v30 = 0;
  v26 = off_4D4368;
  v33 = a4;
  v34 = 0;
  v29 = 0;
  v31 = 0;
  v32 = v10;
  copy_tinfo_t();
  set_tinfo_property();
  sub_251E00((__int64 *)&v26, *(_QWORD *)(a1 + 32) + 16LL, 0);
  sub_3A5F30((__int64)v22, (__int64)&v20, a4);
  v11 = (__int64)v17;
  v15 = sub_3B1550(a1, (__int64)v17, v22[0], v12, v13, v14);
  if ( v22[0] )
  {
    v22[1] = 0;
    qfree();
  }
  v26 = off_4D4368;
  clear_tinfo_t();
  v26 = (__int64 (__fastcall **)())&off_4C9FA0;
  sub_76A40(&v26);
  sub_13C700(&v25, v11);
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree();
  }
  sub_38CFD0(v18);
  clear_tinfo_t();
  return v15;
}

