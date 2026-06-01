unsigned __int64 __fastcall sub_1098F0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rsi
  __int64 v10; // rdx
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  __int64 v13; // r13
  __int64 v14; // rbx
  __int64 v15; // r12
  __int64 v16; // rbx
  _QWORD v18[17]; // [rsp+10h] [rbp-2A8h] BYREF
  __int64 v19; // [rsp+98h] [rbp-220h]
  __int64 (__fastcall **v20)(); // [rsp+170h] [rbp-148h] BYREF
  __int64 v21; // [rsp+178h] [rbp-140h] BYREF
  __int128 v22; // [rsp+180h] [rbp-138h]
  _QWORD v23[2]; // [rsp+190h] [rbp-128h] BYREF
  int v24; // [rsp+1A0h] [rbp-118h]
  __int64 v25; // [rsp+1A8h] [rbp-110h]
  __int64 v26; // [rsp+1B0h] [rbp-108h]
  int v27; // [rsp+1B8h] [rbp-100h]
  int v28; // [rsp+1C0h] [rbp-F8h]
  _QWORD *v29; // [rsp+1C8h] [rbp-F0h]
  __int64 (__fastcall **v30)(); // [rsp+1D0h] [rbp-E8h]
  __int64 v31; // [rsp+1D8h] [rbp-E0h] BYREF
  __int128 v32; // [rsp+1E0h] [rbp-D8h]
  _QWORD v33[2]; // [rsp+1F0h] [rbp-C8h] BYREF
  int v34; // [rsp+200h] [rbp-B8h]
  __int64 v35; // [rsp+208h] [rbp-B0h]
  __int64 v36; // [rsp+210h] [rbp-A8h]
  int v37; // [rsp+218h] [rbp-A0h]
  int v38; // [rsp+220h] [rbp-98h]
  _QWORD *v39; // [rsp+228h] [rbp-90h]
  __int64 v40; // [rsp+230h] [rbp-88h] BYREF
  __m128i v41; // [rsp+238h] [rbp-80h] BYREF
  int v42; // [rsp+248h] [rbp-70h]
  __int64 v43; // [rsp+250h] [rbp-68h] BYREF
  __int128 v44; // [rsp+258h] [rbp-60h]
  int v45; // [rsp+268h] [rbp-50h]
  unsigned __int64 v46; // [rsp+278h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 40);
  v46 = __readfsqword(0x28u);
  sub_1085B0((__int64)v18, v6, 0xFFFFFFFFLL, a3 & 0xFFFFFFFE, a5, a6);
  v8 = *(int *)(v6 + 64);
  v20 = (__int64 (__fastcall **)())&unk_4B7CE0;
  v24 = v19;
  v27 = v19;
  v21 = 0;
  v23[0] = 0;
  v23[1] = 0;
  v25 = 0;
  v26 = 0;
  v28 = 1;
  v22 = 0;
  sub_FED10(&v21, v8, (unsigned __int64)v23);
  v29 = v18;
  v20 = &off_4A9AD8;
  v9 = *(int *)(v6 + 64);
  v30 = (__int64 (__fastcall **)())&unk_4B7CE0;
  v31 = 0;
  v33[0] = 0;
  v33[1] = 0;
  v34 = v19;
  v35 = 0;
  v36 = 0;
  v37 = v19;
  v38 = 1;
  v32 = 0;
  sub_FED10(&v31, v9, (unsigned __int64)v33);
  v30 = &off_4A9AD8;
  v39 = v18;
  v40 = 0;
  v42 = 0;
  v43 = 0;
  v45 = 0;
  v41 = 0;
  v44 = 0;
  sub_30A3E0(a1, &v20);
  sub_109030((__int64)v18, &v21, (unsigned __int64 *)&v40, nullptr);
  v10 = *(_QWORD *)a2;
  v11 = _mm_loadu_si128(&v41);
  v12 = _mm_loadu_si128((const __m128i *)(a2 + 8));
  *(_QWORD *)a2 = v40;
  v40 = v10;
  LODWORD(v10) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 24) = v42;
  *(__m128i *)(a2 + 8) = v11;
  v42 = v10;
  v41 = v12;
  sub_60700(&v43);
  sub_60700(&v40);
  v30 = (__int64 (__fastcall **)())&unk_4B7CE0;
  qfree();
  qfree();
  if ( v31 )
  {
    v13 = v32;
    if ( (_QWORD)v32 )
    {
      v14 = 0;
      do
      {
        ++v14;
        qfree();
      }
      while ( v13 != v14 );
    }
    *(_QWORD *)&v32 = 0;
    qfree();
  }
  v20 = (__int64 (__fastcall **)())&unk_4B7CE0;
  qfree();
  qfree();
  if ( v21 )
  {
    v15 = v22;
    if ( (_QWORD)v22 )
    {
      v16 = 0;
      do
      {
        ++v16;
        qfree();
      }
      while ( v15 != v16 );
    }
    *(_QWORD *)&v22 = 0;
    qfree();
  }
  sub_FCB30(v18);
  return v46 - __readfsqword(0x28u);
}

