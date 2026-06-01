void __fastcall sub_3B0E50(__int64 a1, __int64 a2, __m128 a3)
{
  __int64 v3; // rbp
  _BYTE *v5; // rdi
  _BYTE *v6; // rdi
  __int64 v7; // rbp
  _BYTE *v8; // rdi
  _BYTE *v9; // rdi
  unsigned __int64 *v10; // rax
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r12
  _QWORD *v13; // rdi
  _QWORD *v14; // rdi
  __int64 v15; // rdi
  unsigned __int64 *v16; // rax
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // r13
  _QWORD *v19; // rdi
  _QWORD *v20; // rdi
  unsigned __int64 v21; // rax
  __int64 v22; // rdi
  unsigned __int64 *v23; // rax
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // r13
  _QWORD *v26; // rdi
  _QWORD *v27; // rdi
  __int64 v28; // rdi

  if ( (*(_BYTE *)a1 & 2) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)v3 & 2) != 0 )
    {
      v7 = *(_QWORD *)(a1 + 16);
      if ( (*(_BYTE *)v7 & 2) != 0 )
      {
        v10 = *(unsigned __int64 **)(a1 + 48);
        if ( v10 )
          goto LABEL_16;
        goto LABEL_27;
      }
      goto LABEL_9;
    }
    v5 = *(_BYTE **)(v3 + 8);
    if ( (*v5 & 2) != 0 )
    {
      v6 = *(_BYTE **)(v3 + 16);
      if ( (*v6 & 2) != 0 )
        goto LABEL_54;
    }
    else
    {
      sub_3B0B30((__int64)v5, a2, *(double *)a3.m128_u64);
      v6 = *(_BYTE **)(v3 + 16);
      if ( (*v6 & 2) != 0 )
        goto LABEL_5;
    }
    sub_3B0B30((__int64)v6, a2, *(double *)a3.m128_u64);
LABEL_5:
    if ( (*(_BYTE *)v3 & 2) != 0 )
      goto LABEL_6;
LABEL_54:
    v23 = *(unsigned __int64 **)(v3 + 48);
    if ( !v23 )
    {
LABEL_66:
      clear_tinfo_t();
      *(_QWORD *)v3 |= 2uLL;
LABEL_6:
      if ( v3 )
        qfree(v3);
      v7 = *(_QWORD *)(a1 + 16);
      if ( (*(_BYTE *)v7 & 2) != 0 )
      {
LABEL_14:
        if ( (*(_BYTE *)a1 & 2) != 0 )
          goto LABEL_28;
        v10 = *(unsigned __int64 **)(a1 + 48);
        if ( v10 )
        {
LABEL_16:
          if ( !*(_QWORD *)(a1 + 56) )
          {
            sub_3B0AF0((unsigned __int64 *)(a1 + 48));
LABEL_25:
            v15 = *(_QWORD *)(a1 + 48);
            if ( v15 )
              qfree(v15);
            goto LABEL_27;
          }
          v11 = *v10;
          v12 = *v10 & 0xFFFFFFFFFFFFFFFCLL;
          if ( (*(_BYTE *)v12 & 2) != 0 )
          {
LABEL_24:
            sub_3B0AF0((unsigned __int64 *)(a1 + 48));
            *(_QWORD *)(a1 + 56) = 0;
            goto LABEL_25;
          }
          v13 = *(_QWORD **)(v12 + 8);
          if ( (*(_BYTE *)v13 & 2) != 0 )
          {
            v14 = *(_QWORD **)(v12 + 16);
            if ( (*(_BYTE *)v14 & 2) != 0 )
            {
LABEL_70:
              sub_3ACAB0(v12 + 32, *(double *)a3.m128_u64);
              *(_QWORD *)v12 |= 2uLL;
LABEL_22:
              if ( v11 > 3 )
                qfree(v12);
              goto LABEL_24;
            }
          }
          else
          {
            sub_3B08A0(v13, a2, *(double *)a3.m128_u64);
            v14 = *(_QWORD **)(v12 + 16);
            if ( (*(_BYTE *)v14 & 2) != 0 )
              goto LABEL_21;
          }
          sub_3B08A0(v14, a2, *(double *)a3.m128_u64);
LABEL_21:
          if ( (*(_BYTE *)v12 & 2) != 0 )
            goto LABEL_22;
          goto LABEL_70;
        }
LABEL_27:
        clear_tinfo_t();
        *(_QWORD *)a1 |= 2uLL;
LABEL_28:
        if ( a1 )
          qfree(a1);
        return;
      }
LABEL_9:
      v8 = *(_BYTE **)(v7 + 8);
      if ( (*v8 & 2) != 0 )
      {
        v9 = *(_BYTE **)(v7 + 16);
        if ( (*v9 & 2) != 0 )
          goto LABEL_40;
      }
      else
      {
        sub_3B0B30((__int64)v8, a2, *(double *)a3.m128_u64);
        v9 = *(_BYTE **)(v7 + 16);
        if ( (*v9 & 2) != 0 )
          goto LABEL_11;
      }
      sub_3B0B30((__int64)v9, a2, *(double *)a3.m128_u64);
LABEL_11:
      if ( (*(_BYTE *)v7 & 2) != 0 )
        goto LABEL_12;
LABEL_40:
      v16 = *(unsigned __int64 **)(v7 + 48);
      if ( !v16 )
      {
LABEL_53:
        clear_tinfo_t();
        *(_QWORD *)v7 |= 2uLL;
LABEL_12:
        if ( v7 )
          qfree(v7);
        goto LABEL_14;
      }
      if ( !*(_QWORD *)(v7 + 56) )
      {
        sub_3B0AF0((unsigned __int64 *)(v7 + 48));
LABEL_51:
        v22 = *(_QWORD *)(v7 + 48);
        if ( v22 )
          qfree(v22);
        goto LABEL_53;
      }
      v17 = *v16;
      v18 = *v16 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v18 & 2) != 0 )
      {
LABEL_50:
        *v16 = v17 & 3 | (unsigned __int64)v16 & 0xFFFFFFFFFFFFFFFCLL;
        v21 = *(_QWORD *)(v7 + 48);
        a3 = (__m128)_mm_unpacklo_epi64((__m128i)v21, (__m128i)v21);
        *(__m128 *)(v21 + 8) = a3;
        **(_QWORD **)(v7 + 48) &= ~1uLL;
        **(_QWORD **)(v7 + 48) |= 2uLL;
        *(_QWORD *)(v7 + 56) = 0;
        goto LABEL_51;
      }
      v19 = *(_QWORD **)(v18 + 8);
      if ( (*(_BYTE *)v19 & 2) != 0 )
      {
        v20 = *(_QWORD **)(v18 + 16);
        if ( (*(_BYTE *)v20 & 2) != 0 )
          goto LABEL_74;
      }
      else
      {
        sub_3B08A0(v19, a2, *(double *)a3.m128_u64);
        v20 = *(_QWORD **)(v18 + 16);
        if ( (*(_BYTE *)v20 & 2) != 0 )
          goto LABEL_46;
      }
      sub_3B08A0(v20, a2, *(double *)a3.m128_u64);
LABEL_46:
      if ( (*(_BYTE *)v18 & 2) != 0 )
      {
LABEL_47:
        if ( v17 > 3 )
          qfree(v18);
        v16 = *(unsigned __int64 **)(v7 + 48);
        v17 = *v16;
        goto LABEL_50;
      }
LABEL_74:
      sub_3ACAB0(v18 + 32, *(double *)a3.m128_u64);
      *(_QWORD *)v18 |= 2uLL;
      goto LABEL_47;
    }
    if ( !*(_QWORD *)(v3 + 56) )
    {
      sub_3B0AF0((unsigned __int64 *)(v3 + 48));
LABEL_64:
      v28 = *(_QWORD *)(v3 + 48);
      if ( v28 )
        qfree(v28);
      goto LABEL_66;
    }
    v24 = *v23;
    v25 = *v23 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v25 & 2) != 0 )
    {
LABEL_63:
      sub_3B0AF0((unsigned __int64 *)(v3 + 48));
      *(_QWORD *)(v3 + 56) = 0;
      goto LABEL_64;
    }
    v26 = *(_QWORD **)(v25 + 8);
    if ( (*(_BYTE *)v26 & 2) != 0 )
    {
      v27 = *(_QWORD **)(v25 + 16);
      if ( (*(_BYTE *)v27 & 2) != 0 )
      {
LABEL_72:
        sub_3ACAB0(v25 + 32, *(double *)a3.m128_u64);
        *(_QWORD *)v25 |= 2uLL;
LABEL_61:
        if ( v24 > 3 )
          qfree(v25);
        goto LABEL_63;
      }
    }
    else
    {
      sub_3B08A0(v26, a2, *(double *)a3.m128_u64);
      v27 = *(_QWORD **)(v25 + 16);
      if ( (*(_BYTE *)v27 & 2) != 0 )
        goto LABEL_60;
    }
    sub_3B08A0(v27, a2, *(double *)a3.m128_u64);
LABEL_60:
    if ( (*(_BYTE *)v25 & 2) != 0 )
      goto LABEL_61;
    goto LABEL_72;
  }
}

