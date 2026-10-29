unsigned __int64 __fastcall sub_10FFB0(__int64 *a1, __int64 a2, int a3, double a4, __m128 a5)
{
  __int64 v5; // r13
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  __int64 v12; // rdi
  __int64 v13; // r13
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // r12
  __int64 v18; // rbx
  __int64 v19; // rax
  _QWORD v21[17]; // [rsp+10h] [rbp-2A8h] BYREF
  __int64 v22; // [rsp+98h] [rbp-220h]
  __int64 (__fastcall **v23)(); // [rsp+170h] [rbp-148h] BYREF
  __int64 v24; // [rsp+178h] [rbp-140h] BYREF
  __int128 v25; // [rsp+180h] [rbp-138h]
  __int64 v26[2]; // [rsp+190h] [rbp-128h] BYREF
  int v27; // [rsp+1A0h] [rbp-118h]
  __int64 v28; // [rsp+1A8h] [rbp-110h]
  __int64 v29; // [rsp+1B0h] [rbp-108h]
  int v30; // [rsp+1B8h] [rbp-100h]
  int v31; // [rsp+1C0h] [rbp-F8h]
  _QWORD *v32; // [rsp+1C8h] [rbp-F0h]
  __int64 (__fastcall **v33)(); // [rsp+1D0h] [rbp-E8h]
  __int64 v34; // [rsp+1D8h] [rbp-E0h] BYREF
  __int128 v35; // [rsp+1E0h] [rbp-D8h]
  __int64 v36[2]; // [rsp+1F0h] [rbp-C8h] BYREF
  int v37; // [rsp+200h] [rbp-B8h]
  __int64 v38; // [rsp+208h] [rbp-B0h]
  __int64 v39; // [rsp+210h] [rbp-A8h]
  int v40; // [rsp+218h] [rbp-A0h]
  int v41; // [rsp+220h] [rbp-98h]
  _QWORD *v42; // [rsp+228h] [rbp-90h]
  __int64 v43; // [rsp+230h] [rbp-88h] BYREF
  __m128i v44; // [rsp+238h] [rbp-80h] BYREF
  int v45; // [rsp+248h] [rbp-70h]
  __int64 v46; // [rsp+250h] [rbp-68h] BYREF
  __int128 v47; // [rsp+258h] [rbp-60h]
  int v48; // [rsp+268h] [rbp-50h]
  unsigned __int64 v49; // [rsp+278h] [rbp-40h]

  v5 = a1[5];
  v49 = __readfsqword(0x28u);
  sub_10EC70((__int64)v21, v5, -1, a3 & 0xFFFFFFFE, a4, a5);
  v7 = *(int *)(v5 + 64);
  v23 = (__int64 (__fastcall **)())&unk_4EBEA0;
  v27 = v22;
  v30 = v22;
  v24 = 0;
  v26[0] = 0;
  v26[1] = 0;
  v28 = 0;
  v29 = 0;
  v31 = 1;
  v25 = 0;
  sub_1053D0(&v24, v7, (unsigned __int64)v26, 0.0);
  v32 = v21;
  v23 = &off_4DD298;
  v8 = *(int *)(v5 + 64);
  v33 = (__int64 (__fastcall **)())&unk_4EBEA0;
  v34 = 0;
  v36[0] = 0;
  v36[1] = 0;
  v37 = v22;
  v38 = 0;
  v39 = 0;
  v40 = v22;
  v41 = 1;
  v35 = 0;
  sub_1053D0(&v34, v8, (unsigned __int64)v36, 0.0);
  v33 = &off_4DD298;
  v42 = v21;
  v43 = 0;
  v45 = 0;
  v46 = 0;
  v48 = 0;
  v44 = 0;
  v47 = 0;
  sub_311760(a1, (__int64)&v23);
  sub_10F6F0((__int64)v21, &v24, &v43, nullptr, (__m128i)0LL);
  v9 = *(_QWORD *)a2;
  v10 = _mm_loadu_si128(&v44);
  v11 = _mm_loadu_si128((const __m128i *)(a2 + 8));
  *(_QWORD *)a2 = v43;
  v43 = v9;
  LODWORD(v9) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 24) = v45;
  *(__m128i *)(a2 + 8) = v10;
  v45 = v9;
  v44 = v11;
  sub_66C80((__int64)&v46, *(double *)v10.m128i_i64);
  sub_66C80((__int64)&v43, *(double *)v10.m128i_i64);
  v33 = (__int64 (__fastcall **)())&unk_4EBEA0;
  qfree(v38);
  qfree(v36[0]);
  v12 = v34;
  if ( v34 )
  {
    v13 = v35;
    if ( (_QWORD)v35 )
    {
      v14 = 0;
      do
      {
        v15 = 3 * v14++;
        qfree(*(_QWORD *)(v12 + 8 * v15));
        v12 = v34;
      }
      while ( v13 != v14 );
    }
    *(_QWORD *)&v35 = 0;
    qfree(v12);
  }
  v23 = (__int64 (__fastcall **)())&unk_4EBEA0;
  qfree(v28);
  qfree(v26[0]);
  v16 = v24;
  if ( v24 )
  {
    v17 = v25;
    if ( (_QWORD)v25 )
    {
      v18 = 0;
      do
      {
        v19 = 3 * v18++;
        qfree(*(_QWORD *)(v16 + 8 * v19));
        v16 = v24;
      }
      while ( v17 != v18 );
    }
    *(_QWORD *)&v25 = 0;
    qfree(v16);
  }
  sub_1031F0(v21);
  return v49 - __readfsqword(0x28u);
}

