__int64 __fastcall sub_1240C0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // eax
  _QWORD *v10; // r15
  __int64 v11; // rsi
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // edx
  int v21; // esi
  __int64 v22; // r14
  size_t v23; // r8
  void *v24; // r15
  __m128i si128; // xmm0
  __int64 v26; // r14
  int v27; // eax
  __int64 v28; // r14
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r14
  __int64 v36; // rcx
  __int128 v37; // rdi
  unsigned int v38; // r14d
  size_t n[2]; // [rsp+0h] [rbp-C8h] BYREF
  size_t v40; // [rsp+18h] [rbp-B0h]
  _QWORD v41[2]; // [rsp+20h] [rbp-A8h] BYREF
  _QWORD v42[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 (__fastcall **v43)(); // [rsp+40h] [rbp-88h] BYREF
  __int128 v44; // [rsp+48h] [rbp-80h] BYREF
  __int128 v45; // [rsp+58h] [rbp-70h]
  char v46; // [rsp+68h] [rbp-60h]
  __int64 v47; // [rsp+70h] [rbp-58h]
  unsigned int v48; // [rsp+78h] [rbp-50h]
  unsigned __int64 v49; // [rsp+88h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  v8 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 > 0x39u )
  {
    if ( v8 != 59 )
    {
      if ( v8 != 60 )
        goto LABEL_6;
      v10 = *(_QWORD **)(a2 + 64);
      v11 = *(_QWORD *)(a3 + 24);
      n[0] = a1 + 16;
      v12 = *(int *)(a3 + 68);
      v13 = sub_1CF5F0(v10, v11);
      if ( (*(_BYTE *)(a3 + 4) & 0x20) != 0 )
        v13 += *(int *)(v10[188] + 80LL);
      v17 = *(_QWORD *)(v10[187] + 24LL);
      v18 = *(_QWORD *)(v17 + 16) & (v10[180] + v13);
      v42[1] = v12;
      v42[0] = v18;
      sub_316F70(n[0], v42, v14, v17, v15, v16);
    }
    v19 = *(_QWORD *)(*(_QWORD *)(a2 + 480) + 112LL);
    v20 = *(_DWORD *)(v19 + 84);
    v21 = *(_DWORD *)(v19 + 60);
    v43 = nullptr;
    *(_QWORD *)&v44 = 0;
    sub_63880((__int64 *)&v43, v21, v20);
    *((_QWORD *)&v44 + 1) = 0;
    v45 = 0;
    sub_63C80((__int64 *)a1, (__int64 *)&v43);
    sub_317070(a1 + 16, (char *)&v44 + 8);
    if ( *((_QWORD *)&v44 + 1) )
    {
      *(_QWORD *)&v45 = 0;
      qfree();
    }
    qfree();
    goto LABEL_6;
  }
  if ( v8 > 0x37 )
  {
    if ( (a4 & 1) != 0 && !*(_BYTE *)(a3 + 64) )
    {
      v22 = *(_QWORD *)(*(_QWORD *)(a2 + 480) + 112LL);
      sub_642D0((__int64 *)a1, (__int64 *)(v22 + 144));
      v23 = *(_QWORD *)(v22 + 168);
      v24 = nullptr;
      if ( v23 )
      {
        v40 = *(_QWORD *)(v22 + 168);
        n[0] = 16 * v23;
        v24 = (void *)qalloc_or_throw();
        memcpy(v24, *(const void **)(v22 + 160), n[0]);
        v23 = v40;
      }
      si128 = _mm_unpacklo_epi64((__m128i)v23, (__m128i)v23);
      if ( *(_QWORD *)(a1 + 16) )
      {
        *(_QWORD *)(a1 + 24) = 0;
        *(__m128i *)n = si128;
        qfree();
        si128 = _mm_load_si128((const __m128i *)n);
      }
      *(_QWORD *)(a1 + 16) = v24;
      *(__m128i *)(a1 + 24) = si128;
      v26 = *(_QWORD *)(a2 + 64);
      v27 = sub_1CF5F0(v26, *(_QWORD *)(a3 + 24));
      if ( (*(_BYTE *)(a3 + 4) & 0x20) != 0 )
        v27 += *(_DWORD *)(*(_QWORD *)(v26 + 1504) + 80LL);
      v28 = v27;
      v29 = a1 + 16;
      v30 = *(_QWORD *)(sub_1CF740(*(_QWORD *)(a2 + 64), v27) + 24) - v27;
      if ( v30 > 0 )
      {
        v33 = *(_QWORD *)(a2 + 64);
        v29 = a1 + 16;
        v41[1] = v30;
        v34 = *(_QWORD *)(*(_QWORD *)(v33 + 1496) + 24LL);
        v41[0] = *(_QWORD *)(v34 + 16) & (*(_QWORD *)(v33 + 1440) + v28);
        sub_316F70(a1 + 16, v41, v33, v34, v31, v32);
      }
      sub_317070(v29, *(_QWORD *)(a2 + 64) + 232LL);
      if ( (a4 & 0x2000) != 0 )
      {
        v35 = *(_QWORD *)(a2 + 64);
        v43 = nullptr;
        v44 = 0;
        v36 = *(_QWORD *)(v35 + 216);
        if ( v36 )
        {
          n[0] = *(_QWORD *)(v35 + 216);
          v40 = 16 * v36;
          v43 = (__int64 (__fastcall **)())qalloc_or_throw();
          *((_QWORD *)&v44 + 1) = n[0];
          memcpy(v43, *(const void **)(v35 + 208), v40);
          *(_QWORD *)&v44 = n[0];
        }
        sub_317F90(&v43, v35 + 600);
        sub_317070(v29, &v43);
        if ( v43 )
        {
          *(_QWORD *)&v44 = 0;
          qfree();
        }
      }
    }
  }
  else if ( v8 == 2 )
  {
    if ( (a4 & 1) != 0 )
      sub_317070(a1 + 16, *(_QWORD *)(a2 + 64) + 232LL);
  }
  else if ( v8 - 19 <= 1 && (a4 & 0x800) == 0 && (unsigned __int8)sub_11DD00((int **)a3, v42, &v43, 0) )
  {
    *((_QWORD *)&v37 + 1) = a1;
    *(_QWORD *)&v37 = a2;
    v38 = ((_DWORD)v43 << 19) | (unsigned __int16)(8 * LOWORD(v42[0]));
    sub_1238E0(v37, a3 + 32, a4, v38);
    *((_QWORD *)&v37 + 1) = a1;
    *(_QWORD *)&v37 = a2;
    sub_1238E0(v37, a3 + 48, a4, v38);
    return a1;
  }
LABEL_6:
  *(_QWORD *)&v44 = 0;
  *((_QWORD *)&v44 + 1) = a2;
  v45 = 0u;
  v46 = 0;
  v43 = off_4D7CD0;
  v47 = a1;
  v48 = a4;
  sub_11E340((_BYTE *)a3, (__int64)&v43);
  return a1;
}

