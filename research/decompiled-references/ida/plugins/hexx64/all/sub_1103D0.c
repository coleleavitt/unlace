unsigned __int64 __fastcall sub_1103D0(__int64 *a1, __int64 a2, int a3, double a4, __m128 a5)
{
  __int64 v5; // r14
  unsigned __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // r15
  int v11; // edx
  unsigned __int64 v12; // rsi
  __int64 v13; // rdx
  __m128i v14; // xmm0
  __m128i v15; // xmm1
  __int64 v16; // rdi
  __int64 v17; // r13
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // r12
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v25; // [rsp+8h] [rbp-2C0h]
  _QWORD v26[17]; // [rsp+20h] [rbp-2A8h] BYREF
  __int64 v27; // [rsp+A8h] [rbp-220h]
  __int64 (__fastcall **v28)(); // [rsp+180h] [rbp-148h]
  __int64 v29; // [rsp+188h] [rbp-140h] BYREF
  __int128 v30; // [rsp+190h] [rbp-138h]
  __int64 v31[2]; // [rsp+1A0h] [rbp-128h] BYREF
  int v32; // [rsp+1B0h] [rbp-118h]
  __int64 v33; // [rsp+1B8h] [rbp-110h]
  __int64 v34; // [rsp+1C0h] [rbp-108h]
  int v35; // [rsp+1C8h] [rbp-100h]
  int v36; // [rsp+1D0h] [rbp-F8h]
  _QWORD *v37; // [rsp+1D8h] [rbp-F0h]
  __int64 (__fastcall **v38)(); // [rsp+1E0h] [rbp-E8h] BYREF
  __int64 v39; // [rsp+1E8h] [rbp-E0h] BYREF
  __int128 v40; // [rsp+1F0h] [rbp-D8h]
  __int64 v41[2]; // [rsp+200h] [rbp-C8h] BYREF
  int v42; // [rsp+210h] [rbp-B8h]
  __int64 v43; // [rsp+218h] [rbp-B0h]
  __int64 v44; // [rsp+220h] [rbp-A8h]
  int v45; // [rsp+228h] [rbp-A0h]
  int v46; // [rsp+230h] [rbp-98h]
  _QWORD *v47; // [rsp+238h] [rbp-90h]
  __int64 v48; // [rsp+240h] [rbp-88h] BYREF
  __int128 v49; // [rsp+248h] [rbp-80h]
  int v50; // [rsp+258h] [rbp-70h]
  __int64 v51; // [rsp+260h] [rbp-68h] BYREF
  __m128i v52; // [rsp+268h] [rbp-60h] BYREF
  int v53; // [rsp+278h] [rbp-50h]
  unsigned __int64 v54; // [rsp+288h] [rbp-40h]

  v5 = a1[5];
  v54 = __readfsqword(0x28u);
  v25 = v5;
  sub_10EC70((__int64)v26, v5, -1, a3 | 1, a4, a5);
  v7 = *(int *)(v5 + 64);
  v28 = (__int64 (__fastcall **)())&unk_4EBEA0;
  v29 = 0;
  v31[0] = 0;
  v31[1] = 0;
  v32 = v27;
  v33 = 0;
  v34 = 0;
  v35 = v27;
  v36 = 1;
  v30 = 0;
  if ( v7 )
  {
    v8 = qvector_reserve((__int64)&v29, 0, v7, 24);
    v9 = v30;
    v29 = v8;
    if ( (unsigned __int64)v30 < v7 )
    {
      while ( 1 )
      {
        v10 = v8 + 24 * v9;
        sub_64000((__int64 *)v10, (__int64)v31, 0.0);
        ++v9;
        *(_DWORD *)(v10 + 16) = v32;
        if ( v7 == v9 )
          break;
        v8 = v29;
      }
    }
    *(_QWORD *)&v30 = v7;
    v11 = v27;
  }
  else
  {
    v11 = v27;
  }
  v37 = v26;
  v28 = &off_4DD298;
  v12 = *(int *)(v25 + 64);
  v42 = v11;
  v45 = v11;
  v38 = (__int64 (__fastcall **)())&unk_4EBEA0;
  v39 = 0;
  v41[0] = 0;
  v41[1] = 0;
  v43 = 0;
  v44 = 0;
  v46 = 1;
  v40 = 0;
  sub_1053D0(&v39, v12, (unsigned __int64)v41, 0.0);
  v38 = &off_4DD298;
  v47 = v26;
  v48 = 0;
  v50 = 0;
  v51 = 0;
  v53 = 0;
  v49 = 0;
  v52 = 0;
  sub_311B20(a1, (__int64)&v38);
  sub_10F6F0((__int64)v26, &v39, &v51, nullptr, (__m128i)0LL);
  v13 = *(_QWORD *)a2;
  v14 = _mm_loadu_si128(&v52);
  v15 = _mm_loadu_si128((const __m128i *)(a2 + 8));
  *(_QWORD *)a2 = v51;
  v51 = v13;
  LODWORD(v13) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 24) = v53;
  *(__m128i *)(a2 + 8) = v14;
  v53 = v13;
  v52 = v15;
  sub_66C80((__int64)&v51, *(double *)v14.m128i_i64);
  sub_66C80((__int64)&v48, *(double *)v14.m128i_i64);
  v38 = (__int64 (__fastcall **)())&unk_4EBEA0;
  qfree(v43);
  qfree(v41[0]);
  v16 = v39;
  if ( v39 )
  {
    v17 = v40;
    if ( (_QWORD)v40 )
    {
      v18 = 0;
      do
      {
        v19 = 3 * v18++;
        qfree(*(_QWORD *)(v16 + 8 * v19));
        v16 = v39;
      }
      while ( v17 != v18 );
    }
    *(_QWORD *)&v40 = 0;
    qfree(v16);
  }
  v28 = (__int64 (__fastcall **)())&unk_4EBEA0;
  qfree(v33);
  qfree(v31[0]);
  v20 = v29;
  if ( v29 )
  {
    v21 = v30;
    if ( (_QWORD)v30 )
    {
      v22 = 0;
      do
      {
        v23 = 3 * v22++;
        qfree(*(_QWORD *)(v20 + 8 * v23));
        v20 = v29;
      }
      while ( v21 != v22 );
    }
    *(_QWORD *)&v30 = 0;
    qfree(v20);
  }
  sub_1031F0(v26);
  return v54 - __readfsqword(0x28u);
}

