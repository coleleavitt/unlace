__int64 __fastcall sub_AE450(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned int v6; // r14d
  int v9; // esi
  int v11; // ecx
  __int64 v12; // r14
  int v13; // r8d
  int v14; // r9d
  char v15; // dl
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r13
  __int64 v20; // rdx
  bool v21; // zf
  __int64 v22; // rsi
  __int64 v23; // rax
  int v24; // ecx
  __int32 v25; // eax
  void *v26; // rax
  const void *v27; // rsi
  int v28; // [rsp+0h] [rbp-130h]
  int v29; // [rsp+0h] [rbp-130h]
  int n; // [rsp+8h] [rbp-128h]
  int na; // [rsp+8h] [rbp-128h]
  __int64 nb; // [rsp+8h] [rbp-128h]
  int v33; // [rsp+10h] [rbp-120h]
  int v34; // [rsp+10h] [rbp-120h]
  int v35; // [rsp+18h] [rbp-118h]
  int v36; // [rsp+18h] [rbp-118h]
  __int64 v37; // [rsp+18h] [rbp-118h]
  __int64 v38; // [rsp+18h] [rbp-118h]
  __int64 v39; // [rsp+20h] [rbp-110h]
  __int64 v40; // [rsp+20h] [rbp-110h]
  __int64 v41; // [rsp+20h] [rbp-110h]
  unsigned __int8 *v42; // [rsp+28h] [rbp-108h]
  __int64 v43; // [rsp+28h] [rbp-108h]
  int v44; // [rsp+40h] [rbp-F0h]
  __int64 v45; // [rsp+40h] [rbp-F0h]
  __int64 v47; // [rsp+58h] [rbp-D8h] BYREF
  __int64 v48; // [rsp+60h] [rbp-D0h] BYREF
  __int64 v49; // [rsp+68h] [rbp-C8h] BYREF
  __int64 v50[2]; // [rsp+70h] [rbp-C0h] BYREF
  __int64 v51; // [rsp+80h] [rbp-B0h] BYREF
  __int128 v52; // [rsp+88h] [rbp-A8h]
  __int64 v53[2]; // [rsp+A0h] [rbp-90h] BYREF
  __int64 v54; // [rsp+B0h] [rbp-80h] BYREF
  __int128 v55; // [rsp+B8h] [rbp-78h]
  unsigned __int64 *v56[2]; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v57; // [rsp+E0h] [rbp-50h]
  __int128 v58; // [rsp+E8h] [rbp-48h]
  unsigned __int64 v59; // [rsp+F8h] [rbp-38h]

  v59 = __readfsqword(0x28u);
  if ( *(_DWORD *)a2 != 4 || *(_DWORD *)a3 != 4 )
    return 0;
  v6 = 0;
  if ( *(char *)(a2 + 4) < 0 )
    return v6;
  v9 = *(_DWORD *)(a2 + 68);
  v11 = *(_DWORD *)(a3 + 68);
  v12 = a3 + 64;
  v50[0] = 0;
  v44 = v11;
  v50[1] = 0;
  v51 = 0;
  v53[0] = 0;
  v53[1] = 0;
  v54 = 0;
  v52 = 0;
  v55 = 0;
  sub_127FE0((__int64)a1, (__int64)v50, a3 + 64, 1u, a5, a6, v28, n, v33, v35, v39);
  v42 = (unsigned __int8 *)(a2 + 64);
  sub_127FE0((__int64)a1, (__int64)v53, a2 + 64, 1u, v13, v14, v29, na, v34, v36, v40);
  if ( v44 >= v9 )
    goto LABEL_8;
  if ( !(unsigned __int8)sub_64820(v50, v53) )
    goto LABEL_8;
  if ( !(unsigned __int8)sub_317F40(&v54, (__int64)&v51) )
    goto LABEL_8;
  v41 = *(_QWORD *)(a1[30].m128i_i64[0] + 112);
  if ( (unsigned __int8)sub_64780((_QWORD *)(v41 + 104), v53)
    || (unsigned __int8)sub_318470((unsigned __int64 **)(v41 + 120), (__int64)&v54)
    || !(unsigned __int8)sub_159410(a3 + 32, &v48, 0)
    || !(unsigned __int8)sub_159410(a2 + 32, &v47, 0) )
  {
    goto LABEL_8;
  }
  v37 = -1;
  if ( (unsigned __int64)(8 * v44) <= 0x3F )
    v37 = (1LL << (8 * (unsigned __int8)v44)) - 1;
  v6 = sub_12FF70(v41, &v49, a1, a2, (__int64)v42, a3, v12);
  if ( !(_BYTE)v6 )
    goto LABEL_8;
  if ( v49 < 0 || v44 + v49 > v9 )
  {
    if ( !under_debugger )
      sub_383060(0xC9D1u, 0.0);
    BUG();
  }
  v15 = sub_11CC50(v42, a1[30].m128i_i64[0]);
  v16 = v49;
  if ( v15 )
    v16 = v9 - (__int64)v44 - v49;
  v49 = 8 * v16;
  v45 = v37 << (8 * (unsigned __int8)v16);
  v17 = v48 << (8 * (unsigned __int8)v16);
  v48 = v17;
  if ( !v49 && *(_BYTE *)(a2 + 32) == 10 && *(_BYTE *)(a3 + 32) == 2 )
    goto LABEL_8;
  if ( v17 == (v47 & v45) )
  {
LABEL_39:
    sub_11D5A0(a3);
    v25 = a1[1].m128i_i32[2];
    BYTE1(v25) &= ~2u;
    LOBYTE(v25) = v25 | 0x80;
    a1[1].m128i_i32[2] = v25;
    goto LABEL_9;
  }
  v43 = *(_QWORD *)(a2 + 8);
  sub_64000((__int64 *)v56, a4, 0.0);
  v18 = *(_QWORD *)(a4 + 24);
  v57 = 0;
  v58 = 0;
  if ( v18 )
  {
    v38 = v18;
    nb = 16 * v18;
    v26 = (void *)qalloc_or_throw(16 * v18, a4, 16 * v18, v18);
    v27 = *(const void **)(a4 + 16);
    v57 = (__int64)v26;
    *((_QWORD *)&v58 + 1) = v38;
    memcpy(v26, v27, nb);
    *(_QWORD *)&v58 = v38;
  }
  v19 = sub_A9D90((__int64)a1, v56, v43, a3, 1u);
  if ( v57 )
  {
    *(_QWORD *)&v58 = 0;
    qfree(v57);
  }
  qfree((__int64)v56[0]);
  if ( !v19 )
  {
    v20 = v48 | v47 & ~v45;
    v21 = *(_BYTE *)(a2 + 32) == 2;
    v47 = v20;
    if ( v21 )
    {
      *(__m128i *)(*(_QWORD *)(a2 + 40) + 16LL) = _mm_unpacklo_epi64(
                                                    (__m128i)(unsigned __int64)v20,
                                                    (__m128i)(unsigned __int64)v20);
    }
    else if ( *(_BYTE *)(a3 + 32) == 2 )
    {
      sub_120A10(a2 + 32, v41, v20, *(_DWORD *)(a2 + 36), *(_QWORD *)(a2 + 24), 0);
    }
    else
    {
      v22 = *(_QWORD *)(a2 + 40);
      *(_BYTE *)v22 = 6;
      v23 = 0;
      v24 = 8 * *(_DWORD *)(v41 + 84);
      if ( (unsigned __int64)v24 <= 0x3F )
        v23 = 1LL << v24;
      *(_QWORD *)(v22 + 8) = v20 & (v23 - 1);
    }
    goto LABEL_39;
  }
LABEL_8:
  v6 = 0;
LABEL_9:
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree(v54);
  }
  qfree(v53[0]);
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(v51);
  }
  qfree(v50[0]);
  return v6;
}

