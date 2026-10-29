__int64 __fastcall sub_1FAB30(__m128i *a1, double a2, __m128 a3, double a4, double a5)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebp
  __int64 v10; // r12
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 *v13; // rax
  __m128i v14; // xmm0
  __int64 *v16; // r12
  __int64 v17; // rdx
  __int64 *v18; // rdi
  __int64 *v19; // rdi
  unsigned __int64 *v20; // rax
  __m128i v21; // xmm0
  unsigned __int64 *v22; // [rsp+0h] [rbp-48h] BYREF
  __int64 v23; // [rsp+8h] [rbp-40h]
  unsigned __int64 v24; // [rsp+18h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  sub_321ED0((__int64)a1, 0, a2, a3);
  sub_66FA0((__int64)a1, 0);
  a1[50].m128i_i64[0] = (__int64)&v22;
  v22 = nullptr;
  v23 = 0;
  v9 = sub_1F8DC0(a1, a2, a3, a4, a5, 0, v5, v6);
  if ( a1[19].m128i_i32[2] > 6 )
  {
    v10 = sub_1D5170((__int64)a1, 0, v7, v8, a2);
    if ( (!(unsigned __int8)sub_64880((_QWORD *)(v10 + 160)) || *(_QWORD *)(v10 + 184)) && a1[30].m128i_i32[0] == -1 )
      sub_226AE0(a1);
  }
  v11 = v22;
  a1->m128i_i32[0] &= ~0x200000u;
  a1[50].m128i_i64[0] = 0;
  if ( v11 )
  {
    v12 = *v11;
    if ( !v23 )
    {
      *v11 = *v11 & 3 | (unsigned __int64)v11 & 0xFFFFFFFFFFFFFFFCLL;
      v13 = v22;
      v14 = (__m128i)(unsigned __int64)v22;
      *v22 &= ~1uLL;
      *(__m128i *)(v13 + 1) = _mm_unpacklo_epi64(v14, v14);
      *v22 |= 2u;
      goto LABEL_7;
    }
    v16 = (__int64 *)(v12 & 0xFFFFFFFFFFFFFFFCLL);
    v17 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v17 & 2) != 0 )
    {
LABEL_19:
      *v11 = v12 & 3 | (unsigned __int64)v11 & 0xFFFFFFFFFFFFFFFCLL;
      v20 = v22;
      v21 = (__m128i)(unsigned __int64)v22;
      *v22 &= ~1uLL;
      *(__m128i *)(v20 + 1) = _mm_unpacklo_epi64(v21, v21);
      *v22 |= 2u;
      v23 = 0;
LABEL_7:
      if ( v22 )
        qfree((__int64)v22);
      return v9;
    }
    v18 = (__int64 *)v16[1];
    if ( (*(_BYTE *)v18 & 2) != 0 )
    {
      v19 = (__int64 *)v16[2];
      if ( (*(_BYTE *)v19 & 2) != 0 )
        goto LABEL_22;
    }
    else
    {
      sub_1ECDF0(v18);
      v19 = (__int64 *)v16[2];
      if ( (*(_BYTE *)v19 & 2) != 0 )
        goto LABEL_15;
    }
    sub_1ECDF0(v19);
LABEL_15:
    v17 = *v16;
    if ( (*v16 & 2) != 0 )
    {
LABEL_16:
      if ( v12 > 3 )
        qfree(v12 & 0xFFFFFFFFFFFFFFFCLL);
      v11 = v22;
      v12 = *v22;
      goto LABEL_19;
    }
LABEL_22:
    *v16 = v17 | 2;
    goto LABEL_16;
  }
  return v9;
}

