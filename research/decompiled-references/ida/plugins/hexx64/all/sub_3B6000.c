__int64 __fastcall sub_3B6000(__int64 a1, __m128 a2, __int64 a3, __int64 a4, double a5, __m128i a6, double a7)
{
  __int64 tinfo_property; // rax
  __int64 v10; // rdi
  __m128i v11; // xmm1
  __int64 v12; // rax
  __m128i v13; // xmm1
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // ebx
  __int64 *v19; // [rsp+0h] [rbp-128h] BYREF
  __int64 *v20; // [rsp+8h] [rbp-120h]
  __m128i v21; // [rsp+10h] [rbp-118h] BYREF
  __int64 v22; // [rsp+28h] [rbp-100h] BYREF
  unsigned __int64 *v23[2]; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v24[4]; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v25; // [rsp+60h] [rbp-C8h] BYREF
  __int128 v26; // [rsp+68h] [rbp-C0h]
  __int64 *v27; // [rsp+78h] [rbp-B0h] BYREF
  __int64 (__fastcall **v28)(); // [rsp+80h] [rbp-A8h] BYREF
  int v29; // [rsp+88h] [rbp-A0h]
  __int64 v30; // [rsp+90h] [rbp-98h]
  __int128 v31; // [rsp+98h] [rbp-90h]
  __int64 v32; // [rsp+A8h] [rbp-80h]
  __int128 v33; // [rsp+B0h] [rbp-78h]
  __m128i v34; // [rsp+C0h] [rbp-68h]
  __int64 v35; // [rsp+D0h] [rbp-58h]
  __int64 v36; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v37; // [rsp+E8h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v22 = 0;
  tinfo_property = get_tinfo_property();
  v10 = *(_QWORD *)(a1 + 32);
  v19 = &v25;
  v20 = (__int64 *)v23;
  v22 = tinfo_property;
  v23[0] = nullptr;
  v11 = (__m128i)_mm_loadh_ps((const double *)&v19);
  v23[1] = nullptr;
  v21 = v11;
  sub_38B9C0(v10, v23, a1, a2);
  v12 = *(_QWORD *)(a1 + 32);
  v13 = _mm_load_si128(&v21);
  v25 = 0;
  v26 = 0;
  v27 = (__int64 *)v12;
  if ( v12 )
    ++*(_DWORD *)(v12 + 104);
  v29 = 2;
  v30 = 0;
  v32 = 0;
  v28 = off_4E7268;
  v35 = a4;
  v36 = 0;
  v31 = 0;
  v33 = 0;
  v34 = v13;
  copy_tinfo_t();
  set_tinfo_property();
  sub_255A80((__int64 *)&v28, *(_QWORD *)(a1 + 32) + 16LL, 0, 0.0);
  sub_3AA0B0((__int64)v24, (__int64)&v22, a4);
  v17 = sub_3B56D0(a1, (__int64)v19, v24[0], v14, v15, v16, 0.0, *(double *)v13.m128i_i64, a6, a7);
  if ( v24[0] )
  {
    v24[1] = 0;
    qfree(v24[0]);
  }
  v28 = off_4E7268;
  clear_tinfo_t();
  v28 = (__int64 (__fastcall **)())&off_4DCE40;
  sub_7A480(&v28);
  sub_140140(&v27);
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25);
  }
  sub_391150(v20);
  clear_tinfo_t();
  return v17;
}

