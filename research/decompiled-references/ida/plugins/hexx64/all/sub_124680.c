__int64 __fastcall sub_124680(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5, __m128 a6)
{
  unsigned int v9; // r13d
  unsigned int v10; // eax
  _QWORD *v12; // r15
  unsigned __int64 v13; // rsi
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // edx
  int v19; // esi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r14
  __int64 v23; // rdx
  size_t v24; // r8
  void *v25; // r15
  __int64 v26; // rdi
  __m128i si128; // xmm0
  __int64 v28; // r14
  int v29; // eax
  __int64 v30; // r14
  __int64 *v31; // r15
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 **v36; // rsi
  __int64 v37; // r14
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  unsigned int v41; // r14d
  size_t n[2]; // [rsp+0h] [rbp-C8h] BYREF
  size_t v43; // [rsp+18h] [rbp-B0h]
  __m128i v44; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v45; // [rsp+30h] [rbp-98h] BYREF
  __int64 (__fastcall **v46)(); // [rsp+40h] [rbp-88h] BYREF
  __int128 v47; // [rsp+48h] [rbp-80h] BYREF
  __int128 v48; // [rsp+58h] [rbp-70h]
  char v49; // [rsp+68h] [rbp-60h]
  __int64 v50; // [rsp+70h] [rbp-58h]
  unsigned int v51; // [rsp+78h] [rbp-50h]
  unsigned __int64 v52; // [rsp+88h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  v9 = a4;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  v10 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 > 0x39u )
  {
    if ( v10 != 59 )
    {
      if ( v10 != 60 )
        goto LABEL_6;
      v12 = *(_QWORD **)(a2 + 64);
      v13 = *(_QWORD *)(a3 + 24);
      n[0] = a1 + 16;
      v14 = *(int *)(a3 + 68);
      v15 = sub_1CFBB0((__int64)v12, v13);
      if ( (*(_BYTE *)(a3 + 4) & 0x20) != 0 )
        v15 += *(int *)(v12[188] + 80LL);
      v16 = *(_QWORD *)(*(_QWORD *)(v12[187] + 24LL) + 16LL) & (v12[180] + v15);
      v45.m128i_i64[1] = v14;
      v45.m128i_i64[0] = v16;
      sub_316BB0((__int64 *)n[0], &v45, 0.0, a6);
    }
    v17 = *(_QWORD *)(*(_QWORD *)(a2 + 480) + 112LL);
    v18 = *(_DWORD *)(v17 + 84);
    v19 = *(_DWORD *)(v17 + 60);
    v46 = nullptr;
    *(_QWORD *)&v47 = 0;
    sub_63E80((__int64 *)&v46, v19, v18, 0.0);
    *((_QWORD *)&v47 + 1) = 0;
    v48 = 0;
    sub_64280((__int64 *)a1, (__int64 *)&v46, 0.0);
    sub_316CB0((__int64 *)(a1 + 16), (__int64 **)&v47 + 1, v20, v21);
    if ( *((_QWORD *)&v47 + 1) )
    {
      *(_QWORD *)&v48 = 0;
      qfree(*((__int64 *)&v47 + 1));
    }
    qfree((__int64)v46);
    goto LABEL_6;
  }
  if ( v10 > 0x37 )
  {
    if ( (a4 & 1) != 0 && !*(_BYTE *)(a3 + 64) )
    {
      v22 = *(_QWORD *)(*(_QWORD *)(a2 + 480) + 112LL);
      sub_648D0((__int64 *)a1, (const void **)(v22 + 144), 0.0);
      v24 = *(_QWORD *)(v22 + 168);
      v25 = nullptr;
      if ( v24 )
      {
        v43 = *(_QWORD *)(v22 + 168);
        n[0] = 16 * v24;
        v25 = (void *)qalloc_or_throw(16 * v24, v22 + 144, v23, 16 * v24);
        memcpy(v25, *(const void **)(v22 + 160), n[0]);
        v24 = v43;
      }
      v26 = *(_QWORD *)(a1 + 16);
      si128 = _mm_unpacklo_epi64((__m128i)v24, (__m128i)v24);
      if ( v26 )
      {
        *(_QWORD *)(a1 + 24) = 0;
        *(__m128i *)n = si128;
        qfree(v26);
        si128 = _mm_load_si128((const __m128i *)n);
      }
      *(_QWORD *)(a1 + 16) = v25;
      *(__m128i *)(a1 + 24) = si128;
      v28 = *(_QWORD *)(a2 + 64);
      v29 = sub_1CFBB0(v28, *(_QWORD *)(a3 + 24));
      if ( (*(_BYTE *)(a3 + 4) & 0x20) != 0 )
        v29 += *(_DWORD *)(*(_QWORD *)(v28 + 1504) + 80LL);
      v30 = v29;
      v31 = (__int64 *)(a1 + 16);
      v32 = *(_QWORD *)(sub_1CFD00(*(_QWORD *)(a2 + 64), v29) + 24) - v29;
      if ( v32 > 0 )
      {
        v35 = *(_QWORD *)(a2 + 64);
        v31 = (__int64 *)(a1 + 16);
        v44.m128i_i64[1] = v32;
        v44.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v35 + 1496) + 24LL) + 16LL)
                         & (*(_QWORD *)(v35 + 1440) + v30);
        sub_316BB0((__int64 *)(a1 + 16), &v44, *(double *)si128.m128i_i64, a6);
      }
      v36 = (__int64 **)(*(_QWORD *)(a2 + 64) + 232LL);
      sub_316CB0(v31, v36, v33, v34);
      if ( (v9 & 0x2000) != 0 )
      {
        v37 = *(_QWORD *)(a2 + 64);
        v46 = nullptr;
        v47 = 0;
        v38 = *(_QWORD *)(v37 + 216);
        if ( v38 )
        {
          n[0] = *(_QWORD *)(v37 + 216);
          v43 = 16 * v38;
          v46 = (__int64 (__fastcall **)())qalloc_or_throw(16 * v38, (__int64)v36, 16 * v38, v38);
          *((_QWORD *)&v47 + 1) = n[0];
          memcpy(v46, *(const void **)(v37 + 208), v43);
          *(_QWORD *)&v47 = n[0];
        }
        sub_317BD0((__int64 *)&v46, (__m128i *)(v37 + 600));
        sub_316CB0(v31, (__int64 **)&v46, v39, v40);
        if ( v46 )
        {
          *(_QWORD *)&v47 = 0;
          qfree((__int64)v46);
        }
      }
    }
  }
  else if ( v10 == 2 )
  {
    if ( (a4 & 1) != 0 )
      sub_316CB0((__int64 *)(a1 + 16), (__int64 **)(*(_QWORD *)(a2 + 64) + 232LL), a3, a4);
  }
  else if ( v10 - 19 <= 1 && (a4 & 0x800) == 0 && (unsigned __int8)sub_11E2C0((int **)a3, &v45, &v46, 0) )
  {
    v41 = ((_DWORD)v46 << 19) | (unsigned __int16)(8 * v45.m128i_i16[0]);
    sub_123EA0(a2, (__int64 *)a1, a3 + 32, v9, v41, 0.0);
    sub_123EA0(a2, (__int64 *)a1, a3 + 48, v9, v41, 0.0);
    return a1;
  }
LABEL_6:
  *(_QWORD *)&v47 = 0;
  *((_QWORD *)&v47 + 1) = a2;
  v48 = 0u;
  v49 = 0;
  v46 = &off_4DD610;
  v50 = a1;
  v51 = v9;
  sub_11E900((_BYTE *)a3, (__int64)&v46);
  return a1;
}

