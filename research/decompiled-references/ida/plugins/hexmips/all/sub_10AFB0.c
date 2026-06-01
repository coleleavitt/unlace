void __fastcall sub_10AFB0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbp
  _QWORD **v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // r15
  __int64 v16; // rdx
  _QWORD *v17; // rdx
  unsigned __int64 *v18; // rdx
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // r8
  __int64 *v21; // rdi
  __int64 *v22; // rdi
  __int64 v23; // rdi
  bool v24; // cf
  __int64 v25; // [rsp+0h] [rbp-58h]
  __int64 v26; // [rsp+8h] [rbp-50h]
  unsigned __int64 v27; // [rsp+10h] [rbp-48h]
  unsigned __int64 v28; // [rsp+10h] [rbp-48h]
  unsigned __int64 v29; // [rsp+18h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 < a2 )
  {
    v10 = qvector_reserve();
    v11 = *(_QWORD *)(a1 + 16);
    v12 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 16) = v6;
    v25 = v10;
    v13 = *(_QWORD ***)a1;
    v26 = v11;
    v14 = v12 - 1;
    if ( v14 < 0 )
    {
LABEL_19:
      qfree();
      *(_QWORD *)a1 = v25;
      *(_QWORD *)(a1 + 16) = v26;
      goto LABEL_2;
    }
    v15 = v10;
    while ( 1 )
    {
      while ( 1 )
      {
        v16 = (__int64)*v13;
        *v13 = nullptr;
        *(_QWORD *)v15 = v16;
        v17 = v13[1];
        v13[1] = nullptr;
        *(_QWORD *)(v15 + 8) = v17;
        *(_DWORD *)(v15 + 16) = *((_DWORD *)v13 + 4);
        v18 = *v13;
        if ( *v13 )
          break;
LABEL_18:
        v13 += 3;
        v15 += 24;
        v24 = v14-- == 0;
        if ( v24 )
          goto LABEL_19;
      }
      v19 = *v18;
      if ( !v13[1] )
      {
        *v18 = (unsigned __int64)v18 & 0xFFFFFFFFFFFFFFFCLL | *v18 & 3;
        *(__m128i *)(*v13 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v13, (__m128i)(unsigned __int64)*v13);
        **v13 &= ~1uLL;
        **v13 |= 2uLL;
        if ( !*v13 )
          goto LABEL_18;
        goto LABEL_21;
      }
      v20 = v19 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)(v19 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
        break;
LABEL_17:
      *v18 = (unsigned __int64)v18 & 0xFFFFFFFFFFFFFFFCLL | v19 & 3;
      *(__m128i *)(*v13 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v13, (__m128i)(unsigned __int64)*v13);
      **v13 &= ~1uLL;
      **v13 |= 2uLL;
      v23 = (__int64)*v13;
      v13[1] = nullptr;
      if ( !v23 )
        goto LABEL_18;
LABEL_21:
      qfree();
      v13 += 3;
      v15 += 24;
      v24 = v14-- == 0;
      if ( v24 )
        goto LABEL_19;
    }
    v21 = *(__int64 **)(v20 + 8);
    if ( (*(_BYTE *)v21 & 2) != 0 )
    {
      v22 = *(__int64 **)(v20 + 16);
      if ( (*(_BYTE *)v22 & 2) != 0 )
        goto LABEL_24;
    }
    else
    {
      v29 = *v18;
      sub_FDF30(v21);
      v20 = v19 & 0xFFFFFFFFFFFFFFFCLL;
      v19 = v29;
      v22 = *(__int64 **)(v20 + 16);
      if ( (*(_BYTE *)v22 & 2) != 0 )
        goto LABEL_13;
    }
    v27 = v20;
    sub_FDF30(v22);
    v20 = v27;
LABEL_13:
    if ( (*(_BYTE *)v20 & 2) != 0 )
    {
LABEL_14:
      if ( v19 > 3 )
        qfree();
      v18 = *v13;
      v19 = **v13;
      goto LABEL_17;
    }
LABEL_24:
    if ( *(_QWORD *)(v20 + 24) )
    {
      *(_QWORD *)(v20 + 32) = 0;
      v28 = v20;
      qfree();
      v20 = v28;
    }
    *(_QWORD *)v20 |= 2uLL;
    goto LABEL_14;
  }
LABEL_2:
  v7 = *(_QWORD *)(a1 + 8);
  if ( v7 < a2 )
  {
    do
    {
      v8 = 3 * v7++;
      v9 = *(_QWORD *)a1 + 8 * v8;
      sub_10ADA0((__int64 *)v9, a3);
      *(_DWORD *)(v9 + 16) = *(_DWORD *)(a3 + 16);
    }
    while ( a2 != v7 );
  }
  *(_QWORD *)(a1 + 8) = a2;
}

