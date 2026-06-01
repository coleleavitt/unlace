__int64 __fastcall sub_16A3A0(const __m128i *a1, __m128i a2, __m128 a3)
{
  int v3; // r12d
  unsigned int v4; // r12d
  __int64 v6; // r13
  const __m128i *v8; // r14
  __int32 v9; // eax
  const __m128i *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int32 v13; // eax
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rsi
  unsigned __int8 *v22; // rax
  int v23; // edi
  int v24; // eax
  int v25; // edx
  char v26; // al
  __int64 v27; // rax
  __int64 v28; // rax
  _DWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 *v32; // rdi
  _DWORD *v33; // rax
  _DWORD *v34; // rax
  unsigned __int8 *v35; // [rsp+0h] [rbp-110h]
  unsigned __int8 *v36; // [rsp+8h] [rbp-108h]
  int v37; // [rsp+18h] [rbp-F8h]
  int v38; // [rsp+20h] [rbp-F0h]
  char v39; // [rsp+27h] [rbp-E9h]
  __int64 v40; // [rsp+28h] [rbp-E8h]
  __int64 v41; // [rsp+30h] [rbp-E0h]
  unsigned int *v42; // [rsp+30h] [rbp-E0h]
  __int64 v43; // [rsp+30h] [rbp-E0h]
  __int64 v44; // [rsp+38h] [rbp-D8h]
  __int64 v45; // [rsp+48h] [rbp-C8h] BYREF
  unsigned __int64 *v46[2]; // [rsp+50h] [rbp-C0h] BYREF
  __int64 v47; // [rsp+60h] [rbp-B0h]
  __int128 v48; // [rsp+68h] [rbp-A8h]
  unsigned int v49[8]; // [rsp+80h] [rbp-90h] BYREF
  unsigned __int64 v50; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v51; // [rsp+A8h] [rbp-68h]
  _QWORD v52[2]; // [rsp+B0h] [rbp-60h] BYREF
  _QWORD v53[10]; // [rsp+C0h] [rbp-50h] BYREF

  v53[3] = __readfsqword(0x28u);
  if ( a1[4].m128i_i32[3] != 4 )
    return 0;
  v6 = a1[3].m128i_i64[1];
  if ( *(_BYTE *)(v6 + 64) != 7 )
    return 0;
  v8 = (const __m128i *)sub_1120C0(a1->m128i_i64[1], 1);
  v9 = v8[4].m128i_i32[3];
  v44 = (__int64)v8;
  v10 = v8;
  if ( v9 == 3 )
  {
    while ( v10[22].m128i_i32[0] == 1 )
    {
      v11 = a1[4].m128i_i64[0];
      v12 = *(unsigned int *)v10[23].m128i_i64[0];
      if ( (unsigned int)v12 >= *(_DWORD *)(v11 + 64) )
        goto LABEL_59;
      v10 = *(const __m128i **)(*(_QWORD *)(v11 + 528) + 8 * v12);
      v13 = v10[4].m128i_i32[3];
      if ( v13 != 3 )
      {
        v44 = (__int64)v10;
        LOBYTE(v3) = a1 != v10;
        LOBYTE(v13) = v13 == 4;
        v4 = v13 & v3;
        goto LABEL_10;
      }
    }
    return 0;
  }
  LOBYTE(v3) = a1 != v8;
  LOBYTE(v9) = v9 == 4;
  v4 = v9 & v3;
LABEL_10:
  if ( !(_BYTE)v4 )
    return 0;
  v14 = *(_QWORD *)(v44 + 56);
  if ( *(_BYTE *)(v14 + 64) != 7 )
    return 0;
  if ( (*(_BYTE *)(v14 + 6) & 2) != 0 )
    return 0;
  v39 = sub_1205A0(*(_BYTE **)(v44 + 56), *(_QWORD *)(a1[30].m128i_i64[0] + 112), 0);
  if ( v39 )
    return 0;
  v15 = a1[4].m128i_i64[0];
  v16 = *(unsigned int *)(v6 + 72);
  if ( (unsigned int)v16 >= *(_DWORD *)(v15 + 64)
    || (v40 = *(_QWORD *)(*(_QWORD *)(v15 + 528) + 8 * v16),
        v17 = sub_1120C0(v40, 0),
        v18 = a1[4].m128i_i64[0],
        v41 = v17,
        v19 = *(unsigned int *)(v14 + 72),
        (unsigned int)v19 >= *(_DWORD *)(v18 + 64)) )
  {
LABEL_59:
    sub_167AF0(*(double *)a2.m128i_i64);
  }
  if ( v41 == sub_1120C0(*(_QWORD *)(*(_QWORD *)(v18 + 528) + 8 * v19), 0) )
  {
    if ( *(_DWORD *)(v44 + 352) != 1 )
      return 0;
    v38 = 1;
  }
  else
  {
    if ( v44 != sub_1120C0(v40, 1) || *(_DWORD *)(v44 + 352) != 2 || sub_330DE0(v44) != 1 )
      return 0;
    v38 = 2;
  }
  v20 = a1[4].m128i_i64[0];
  v21 = *(_QWORD *)(v14 + 24);
  v51 = 0;
  v52[1] = 0;
  v22 = *(unsigned __int8 **)(v20 + 1504);
  v53[1] = 0;
  v36 = v22;
  v50 = 0xFFFFFFFF00000000LL;
  v52[0] = 0xFFFFFFFF00000000LL;
  v53[0] = 0xFFFFFFFF00000000LL;
  sub_330970((__int64)v49, v21);
  v23 = *(_DWORD *)v6;
  v24 = *(_DWORD *)v14;
  if ( (unsigned int)(*(_DWORD *)v6 - 43) <= 9 )
  {
    v42 = (unsigned int *)v14;
    if ( v24 == 42 )
    {
      if ( *(_DWORD *)(v14 + 36) != 1 )
        goto LABEL_45;
      v43 = v14 + 32;
      if ( *(_BYTE *)(v14 + 32) == 4 )
      {
        v33 = *(_DWORD **)(v14 + 40);
        if ( *v33 == 6 )
          v43 = (__int64)(v33 + 8);
      }
      if ( *(_BYTE *)v43 != 1 || *(_DWORD *)(v43 + 8) > 7u )
        goto LABEL_45;
      a2.m128i_i64[0] = 0;
      v46[0] = nullptr;
      v46[1] = nullptr;
      v47 = 0;
      v48 = 0;
      sub_123EA0(v44, (__int64 *)v46, v43, 1, 0xFFFF0000, 0.0);
      if ( (unsigned __int8)sub_168C60(v46, (__int64)v8, v44, 0.0)
        || (v45 = v6, (v31 = sub_129440((__int64)a1, v43, (__int64)&v45, 1, 0.0, a3)) == 0)
        || (unsigned int)(*(_DWORD *)v31 - 32) > 9
        || (v35 = (unsigned __int8 *)v31, !sub_125B60((unsigned __int8 *)(v31 + 64), v43, 0, 0.0)) )
      {
        if ( v47 )
        {
          *(_QWORD *)&v48 = 0;
          qfree(v47);
        }
LABEL_79:
        qfree((__int64)v46[0]);
        goto LABEL_45;
      }
      sub_93B40((__int64 *)v46);
      sub_1253A0((__int64)v49, v14);
      v32 = &v50;
      if ( (_BYTE)v50 == 4 )
        v32 = (unsigned __int64 *)(v51 + 32);
      sub_1262E0((__int64)v32, v35, 0.0);
      sub_15BC70(v49, v36, 0, 0, nullptr, nullptr, (__m128i)0LL, a3, 0);
      if ( v49[0] - 43 > 9 )
        goto LABEL_45;
      v23 = *(_DWORD *)v6;
      if ( *(_DWORD *)v6 == 42 )
        goto LABEL_45;
      v42 = v49;
    }
    goto LABEL_23;
  }
  if ( v23 != 42 )
  {
    if ( *(_DWORD *)v14 == 42 )
      goto LABEL_45;
    v42 = (unsigned int *)v14;
LABEL_23:
    v25 = sub_32E9E0(v23);
    if ( *(_DWORD *)v6 != *v42 )
    {
      v37 = v25;
      if ( v25 != *v42 )
      {
        if ( (unsigned int)sub_32EA00(*(_DWORD *)v6) != *v42 )
        {
          if ( (unsigned int)sub_32EA00(v37) != *v42 )
            goto LABEL_45;
          v39 = v4;
        }
        if ( !sub_125B60((unsigned __int8 *)(v6 + 32), (__int64)(v42 + 12), 0, *(double *)a2.m128i_i64) )
          goto LABEL_45;
        v26 = sub_125B60((unsigned __int8 *)(v6 + 48), (__int64)(v42 + 8), 0, *(double *)a2.m128i_i64);
LABEL_30:
        if ( v26 )
          goto LABEL_31;
LABEL_45:
        sub_11CDA0((__int64)v53);
        sub_11CDA0((__int64)v52);
        sub_11CDA0((__int64)&v50);
        return 0;
      }
      v39 = v4;
    }
    if ( !sub_125B60((unsigned __int8 *)(v6 + 32), (__int64)(v42 + 8), 0, *(double *)a2.m128i_i64) )
      goto LABEL_45;
    v26 = sub_125B60((unsigned __int8 *)(v6 + 48), (__int64)(v42 + 12), 0, *(double *)a2.m128i_i64);
    goto LABEL_30;
  }
  if ( v24 != 42 )
    goto LABEL_45;
  if ( (unsigned __int8)sub_12EA80((__int64)v36, a1, v6, v6 + 32, v6, v14 + 32, a2, a3, 0) )
  {
    v42 = (unsigned int *)v14;
  }
  else
  {
    if ( *(_BYTE *)(v6 + 32) != 4
      || (v34 = *(_DWORD **)(v6 + 40), *v34 != 6)
      || !(unsigned __int8)sub_12EA80((__int64)v36, a1, v6, (__int64)(v34 + 8), v6, v14 + 32, a2, a3, 0) )
    {
      if ( *(_BYTE *)(v14 + 32) != 4 )
        goto LABEL_45;
      v29 = *(_DWORD **)(v14 + 40);
      if ( *v29 != 6 || !(unsigned __int8)sub_12EA80((__int64)v36, a1, v6, v6 + 32, v6, (__int64)(v29 + 8), a2, a3, 0) )
        goto LABEL_45;
    }
    v42 = (unsigned int *)v14;
    v39 = v4;
  }
LABEL_31:
  if ( v42 != v49 )
  {
    sub_124680((__int64)v46, v44, (__int64)v42, 1, *(double *)a2.m128i_i64, a3);
    if ( !(unsigned __int8)sub_168C60(v46, (__int64)v8, v44, *(double *)a2.m128i_i64) )
    {
      if ( v47 )
      {
        *(_QWORD *)&v48 = 0;
        qfree(v47);
      }
      qfree((__int64)v46[0]);
      goto LABEL_36;
    }
    if ( v47 )
    {
      *(_QWORD *)&v48 = 0;
      qfree(v47);
    }
    goto LABEL_79;
  }
LABEL_36:
  sub_11CDA0((__int64)v53);
  sub_11CDA0((__int64)v52);
  sub_11CDA0((__int64)&v50);
  if ( !v39 )
  {
    if ( v38 != 1 )
    {
      sub_1686A0((__int64)a1, *(_DWORD *)(v14 + 72), *(double *)a2.m128i_i64);
      sub_A2520((__int64)a1, "REMOVE_IDENTICAL_JX (%d->%d)");
    }
    sub_112660(v44, *(double *)a2.m128i_i64);
    *(_DWORD *)a1[4].m128i_i64[0] |= 0x400u;
    v30 = *(_QWORD *)(a1[4].m128i_i64[0] + 784);
    if ( v30 )
      *(_DWORD *)(v30 + 48) = 63;
    goto LABEL_40;
  }
  if ( v38 != 1 )
  {
    v27 = sub_1120C0(*(_QWORD *)(v44 + 8), 0);
    sub_1686A0((__int64)a1, *(_DWORD *)(v27 + 72), *(double *)a2.m128i_i64);
    sub_A2520((__int64)a1, "REMOVE_IDENTICAL_JX (%d->%d)");
    sub_1127B0(v44, *(double *)a2.m128i_i64);
    *(_DWORD *)a1[4].m128i_i64[0] |= 0x400u;
    v28 = *(_QWORD *)(a1[4].m128i_i64[0] + 784);
    if ( v28 )
      *(_DWORD *)(v28 + 48) = 63;
LABEL_40:
    sub_A2520(v44, "REMOVE_IDENTICAL_JX (%s)");
    return v4;
  }
  return 0;
}

