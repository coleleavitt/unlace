unsigned __int64 __fastcall sub_10FE10(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  unsigned __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // r15
  int v12; // edx
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  __m128i v15; // xmm0
  __m128i v16; // xmm1
  __int64 v17; // r13
  __int64 v18; // rbx
  __int64 v19; // r12
  __int64 v20; // rbx
  __int64 v22; // [rsp+8h] [rbp-2C0h]
  _QWORD v23[17]; // [rsp+20h] [rbp-2A8h] BYREF
  __int64 v24; // [rsp+A8h] [rbp-220h]
  __int64 (__fastcall **v25)(); // [rsp+180h] [rbp-148h]
  __int64 v26; // [rsp+188h] [rbp-140h]
  __int128 v27; // [rsp+190h] [rbp-138h]
  _QWORD v28[2]; // [rsp+1A0h] [rbp-128h] BYREF
  int v29; // [rsp+1B0h] [rbp-118h]
  __int64 v30; // [rsp+1B8h] [rbp-110h]
  __int64 v31; // [rsp+1C0h] [rbp-108h]
  int v32; // [rsp+1C8h] [rbp-100h]
  int v33; // [rsp+1D0h] [rbp-F8h]
  _QWORD *v34; // [rsp+1D8h] [rbp-F0h]
  __int64 (__fastcall **v35)(); // [rsp+1E0h] [rbp-E8h] BYREF
  __int64 v36; // [rsp+1E8h] [rbp-E0h] BYREF
  __int128 v37; // [rsp+1F0h] [rbp-D8h]
  _QWORD v38[2]; // [rsp+200h] [rbp-C8h] BYREF
  int v39; // [rsp+210h] [rbp-B8h]
  __int64 v40; // [rsp+218h] [rbp-B0h]
  __int64 v41; // [rsp+220h] [rbp-A8h]
  int v42; // [rsp+228h] [rbp-A0h]
  int v43; // [rsp+230h] [rbp-98h]
  _QWORD *v44; // [rsp+238h] [rbp-90h]
  __int64 v45; // [rsp+240h] [rbp-88h] BYREF
  __int128 v46; // [rsp+248h] [rbp-80h]
  int v47; // [rsp+258h] [rbp-70h]
  __int64 v48; // [rsp+260h] [rbp-68h] BYREF
  __m128i v49; // [rsp+268h] [rbp-60h] BYREF
  int v50; // [rsp+278h] [rbp-50h]
  unsigned __int64 v51; // [rsp+288h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 40);
  v51 = __readfsqword(0x28u);
  v22 = v6;
  sub_10E6B0((__int64)v23, v6, 0xFFFFFFFFLL, a3 | 1, a5, a6);
  v8 = *(int *)(v6 + 64);
  v25 = (__int64 (__fastcall **)())&unk_4E7D80;
  v26 = 0;
  v28[0] = 0;
  v28[1] = 0;
  v29 = v24;
  v30 = 0;
  v31 = 0;
  v32 = v24;
  v33 = 1;
  v27 = 0;
  if ( v8 )
  {
    v9 = qvector_reserve();
    v10 = v27;
    v26 = v9;
    if ( (unsigned __int64)v27 < v8 )
    {
      while ( 1 )
      {
        v11 = v9 + 24 * v10;
        sub_63A00((__int64 *)v11, (__int64)v28);
        ++v10;
        *(_DWORD *)(v11 + 16) = v29;
        if ( v8 == v10 )
          break;
        v9 = v26;
      }
    }
    *(_QWORD *)&v27 = v8;
    v12 = v24;
  }
  else
  {
    v12 = v24;
  }
  v34 = v23;
  v25 = &off_4D7958;
  v13 = *(int *)(v22 + 64);
  v39 = v12;
  v42 = v12;
  v35 = (__int64 (__fastcall **)())&unk_4E7D80;
  v36 = 0;
  v38[0] = 0;
  v38[1] = 0;
  v40 = 0;
  v41 = 0;
  v43 = 1;
  v37 = 0;
  sub_104E10(&v36, v13, (unsigned __int64)v38);
  v35 = &off_4D7958;
  v44 = v23;
  v45 = 0;
  v47 = 0;
  v48 = 0;
  v50 = 0;
  v46 = 0;
  v49 = 0;
  sub_311EE0(a1, &v35);
  sub_10F130((__int64)v23, &v36, (unsigned __int64 *)&v48, nullptr);
  v14 = *(_QWORD *)a2;
  v15 = _mm_loadu_si128(&v49);
  v16 = _mm_loadu_si128((const __m128i *)(a2 + 8));
  *(_QWORD *)a2 = v48;
  v48 = v14;
  LODWORD(v14) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 24) = v50;
  *(__m128i *)(a2 + 8) = v15;
  v50 = v14;
  v49 = v16;
  sub_66680(&v48);
  sub_66680(&v45);
  v35 = (__int64 (__fastcall **)())&unk_4E7D80;
  qfree();
  qfree();
  if ( v36 )
  {
    v17 = v37;
    if ( (_QWORD)v37 )
    {
      v18 = 0;
      do
      {
        ++v18;
        qfree();
      }
      while ( v17 != v18 );
    }
    *(_QWORD *)&v37 = 0;
    qfree();
  }
  v25 = (__int64 (__fastcall **)())&unk_4E7D80;
  qfree();
  qfree();
  if ( v26 )
  {
    v19 = v27;
    if ( (_QWORD)v27 )
    {
      v20 = 0;
      do
      {
        ++v20;
        qfree();
      }
      while ( v19 != v20 );
    }
    *(_QWORD *)&v27 = 0;
    qfree();
  }
  sub_102C30(v23);
  return v51 - __readfsqword(0x28u);
}

