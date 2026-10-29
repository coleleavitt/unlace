__int64 __fastcall sub_8BB70(__int64 a1, __int64 a2, __int64 a3, __m128 a4)
{
  __int64 v5; // r13
  __int64 v6; // rbx
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebp
  _QWORD *v12; // rbx
  unsigned __int8 *v14; // rax
  unsigned __int8 v15; // dl
  int v16; // edi
  int *v17; // rax
  int *v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rdi
  __m128i v22; // [rsp+0h] [rbp-78h] BYREF
  _QWORD *v23; // [rsp+10h] [rbp-68h]
  int v24; // [rsp+1Ch] [rbp-5Ch]
  __int64 v25; // [rsp+20h] [rbp-58h] BYREF
  __m128i v26; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v5 = a2;
  *(_QWORD *)(a1 + 64) = a3;
  *(_QWORD *)(a1 + 416) = a3;
  *(_QWORD *)(a1 + 448) = a3;
  v24 = *(_DWORD *)(a2 + 40);
  if ( v24 == 1 )
  {
    *(_QWORD *)(a1 + 32) = sub_7CEC0((_QWORD *)a2, *(double *)a4.m128_u64) - 1;
  }
  else
  {
    *(_DWORD *)(a1 + 24) = sub_7CD20((_QWORD *)a2, *(double *)a4.m128_u64);
    v6 = *(_QWORD *)(a2 + 32);
    if ( *(_DWORD *)(a2 + 48) <= 3u )
      v7 = sub_7CEC0((_QWORD *)a2, *(double *)a4.m128_u64) + v6;
    else
      v7 = sub_7CF00((_QWORD *)a2, *(double *)a4.m128_u64) + v6;
    *(_QWORD *)(a1 + 32) = v7;
    *(_QWORD *)(a1 + 40) = v7 + sub_7CEC0((_QWORD *)a2, *(double *)a4.m128_u64);
  }
  v8 = sub_7D4F0((_QWORD *)a2, *(double *)a4.m128_u64);
  v11 = v8;
  if ( v8 < 0 )
    return 0;
  if ( v8 )
  {
    while ( 1 )
    {
      v12 = (_QWORD *)j__qalloc_or_throw(80, a2, v9, v10);
      v12[4] = 0xFFFFFFFF00000000LL;
      v12[5] = 0;
      v12[6] = 0xFFFFFFFF00000000LL;
      v12[7] = 0;
      v12[8] = 0xFFFFFFFF00000000LL;
      v12[9] = 0;
      v23 = v12 + 4;
      v22.m128i_i64[0] = (__int64)(v12 + 6);
      sub_330970((__int64)v12, -1);
      if ( !(unsigned __int8)sub_883D0((__int64)v12, v5, (__m128i)a4) )
        break;
      a2 = (__int64)v12;
      sub_330D40(a1, (__int64)v12);
      if ( !--v11 )
        goto LABEL_14;
    }
    if ( v12 )
    {
      sub_11CDA0((__int64)(v12 + 8));
      sub_11CDA0(v22.m128i_i64[0]);
      sub_11CDA0((__int64)v23);
      j__qfree((__int64)v12);
    }
    return 0;
  }
LABEL_14:
  if ( *(_DWORD *)(v5 + 40) == 1 )
    return 1;
  v14 = *(unsigned __int8 **)v5;
  if ( *(_QWORD *)v5 >= *(_QWORD *)(v5 + 8) )
    sub_7A4F0(*(double *)a4.m128_u64);
  v15 = *v14;
  v16 = v24;
  *(_QWORD *)v5 = v14 + 1;
  *(_DWORD *)(a1 + 76) = v15;
  if ( (unsigned __int8)sub_7A640(v16, 1, 0x50u) )
  {
    if ( !(unsigned __int8)sub_7E660((__int64 *)(a1 + 80), (unsigned __int64 *)v5, *(double *)a4.m128_u64)
      || !(unsigned __int8)sub_7E080((__int64 *)(a1 + 96), v5, a4) )
    {
      return 0;
    }
  }
  if ( (unsigned __int8)sub_7A640(v24, 1, 0x78u)
    && !(unsigned __int8)sub_7E8A0((__int64 *)(a1 + 120), (unsigned __int64 *)v5, a4)
    || (unsigned __int8)sub_7A640(v24, 1, 0xA0u)
    && !(unsigned __int8)sub_7E8A0((__int64 *)(a1 + 160), (unsigned __int64 *)v5, a4)
    || (unsigned __int8)sub_7A640(v24, 1, 0xC8u)
    && !(unsigned __int8)sub_7E8A0((__int64 *)(a1 + 200), (unsigned __int64 *)v5, a4)
    || (unsigned __int8)sub_7A640(v24, 1, 0xF0u)
    && !(unsigned __int8)sub_7E8A0((__int64 *)(a1 + 240), (unsigned __int64 *)v5, a4)
    || (unsigned __int8)sub_7A640(v24, 1, 0x118u)
    && !(unsigned __int8)sub_7E8A0((__int64 *)(a1 + 280), (unsigned __int64 *)v5, a4) )
  {
    return 0;
  }
  if ( (unsigned __int8)sub_7A640(v24, 1, 0x140u) )
  {
    *(_QWORD *)(a1 + 320) = sub_7D020(v5, 0, *(double *)a4.m128_u64);
    *(_QWORD *)(a1 + 328) = sub_7D020(v5, 0, *(double *)a4.m128_u64);
    *(_QWORD *)(a1 + 336) = sub_7D020(v5, 0, *(double *)a4.m128_u64);
  }
  if ( *(_DWORD *)(v5 + 48) > 6u )
  {
    *(_QWORD *)(a1 + 512) = (int)sub_7CD20((_QWORD *)v5, *(double *)a4.m128_u64);
    *(_QWORD *)(a1 + 520) = sub_7D020(v5, 0, *(double *)a4.m128_u64);
  }
  if ( !(unsigned __int8)sub_7D530((_QWORD *)v5, (__int64 *)(a1 + 368), *(double *)a4.m128_u64) )
    return 0;
  v17 = *(int **)(a1 + 368);
  v18 = &v17[*(_QWORD *)(a1 + 376)];
  if ( v18 != v17 )
  {
    while ( *v17 > 0 && *(_DWORD *)(*(_QWORD *)(a1 + 64) + 64LL) > *v17 )
    {
      if ( v18 == ++v17 )
        goto LABEL_44;
    }
    return 0;
  }
LABEL_44:
  if ( (unsigned __int8)sub_7A640(v24, 1, 0x188u) )
  {
    sub_7D150((__int64)&v25, (_QWORD *)v5, *(double *)a4.m128_u64);
    v19 = *(_QWORD *)(a1 + 392);
    v20 = v25;
    v25 = 0;
    a4 = (__m128)_mm_loadu_si128(&v26);
    v26 = 0;
    if ( v19 )
    {
      *(_QWORD *)(a1 + 400) = 0;
      v22 = (__m128i)a4;
      qfree(v19);
      a4 = (__m128)_mm_load_si128(&v22);
      v21 = v25;
      *(_QWORD *)(a1 + 392) = v20;
      *(__m128 *)(a1 + 400) = a4;
      if ( v21 )
      {
        v26.m128i_i64[0] = 0;
        qfree(v21);
      }
    }
    else
    {
      *(_QWORD *)(a1 + 392) = v20;
      *(__m128 *)(a1 + 400) = a4;
    }
  }
  if ( (unsigned __int8)sub_7A640(v24, 1, 0x1A0u) && !(unsigned __int8)sub_8B620(a1 + 416, (char **)v5, a4) )
    return 0;
  return sub_8B620(a1 + 448, (char **)v5, a4);
}

