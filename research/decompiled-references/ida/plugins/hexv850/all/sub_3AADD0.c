void __fastcall sub_3AADD0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _BYTE *v4; // rdi
  _BYTE *v5; // rdi
  __int64 v6; // rbp
  _BYTE *v7; // rdi
  _BYTE *v8; // rdi
  unsigned __int64 *v9; // rax
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r12
  _QWORD *v12; // rdi
  _QWORD *v13; // rdi
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // r13
  _QWORD *v17; // rdi
  _QWORD *v18; // rdi
  unsigned __int64 *v19; // rax
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // r13
  _QWORD *v22; // rdi
  _QWORD *v23; // rdi

  if ( (*(_BYTE *)a1 & 2) == 0 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)v2 & 2) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 16);
      if ( (*(_BYTE *)v6 & 2) != 0 )
      {
        v9 = *(unsigned __int64 **)(a1 + 48);
        if ( v9 )
          goto LABEL_16;
        goto LABEL_27;
      }
      goto LABEL_9;
    }
    v4 = *(_BYTE **)(v2 + 8);
    if ( (*v4 & 2) != 0 )
    {
      v5 = *(_BYTE **)(v2 + 16);
      if ( (*v5 & 2) != 0 )
        goto LABEL_54;
    }
    else
    {
      sub_3AAAB0((__int64)v4, a2);
      v5 = *(_BYTE **)(v2 + 16);
      if ( (*v5 & 2) != 0 )
        goto LABEL_5;
    }
    sub_3AAAB0((__int64)v5, a2);
LABEL_5:
    if ( (*(_BYTE *)v2 & 2) != 0 )
      goto LABEL_6;
LABEL_54:
    v19 = *(unsigned __int64 **)(v2 + 48);
    if ( !v19 )
    {
LABEL_66:
      clear_tinfo_t();
      *(_QWORD *)v2 |= 2uLL;
LABEL_6:
      if ( v2 )
        qfree();
      v6 = *(_QWORD *)(a1 + 16);
      if ( (*(_BYTE *)v6 & 2) != 0 )
      {
LABEL_14:
        if ( (*(_BYTE *)a1 & 2) != 0 )
          goto LABEL_28;
        v9 = *(unsigned __int64 **)(a1 + 48);
        if ( v9 )
        {
LABEL_16:
          if ( !*(_QWORD *)(a1 + 56) )
          {
            sub_3AAA70((unsigned __int64 *)(a1 + 48));
LABEL_25:
            if ( *(_QWORD *)(a1 + 48) )
              qfree();
            goto LABEL_27;
          }
          v10 = *v9;
          v11 = *v9 & 0xFFFFFFFFFFFFFFFCLL;
          if ( (*(_BYTE *)v11 & 2) != 0 )
          {
LABEL_24:
            sub_3AAA70((unsigned __int64 *)(a1 + 48));
            *(_QWORD *)(a1 + 56) = 0;
            goto LABEL_25;
          }
          v12 = *(_QWORD **)(v11 + 8);
          if ( (*(_BYTE *)v12 & 2) != 0 )
          {
            v13 = *(_QWORD **)(v11 + 16);
            if ( (*(_BYTE *)v13 & 2) != 0 )
            {
LABEL_70:
              sub_3A6A30(v11 + 32);
              *(_QWORD *)v11 |= 2uLL;
LABEL_22:
              if ( v10 > 3 )
                qfree();
              goto LABEL_24;
            }
          }
          else
          {
            sub_3AA820(v12, a2);
            v13 = *(_QWORD **)(v11 + 16);
            if ( (*(_BYTE *)v13 & 2) != 0 )
              goto LABEL_21;
          }
          sub_3AA820(v13, a2);
LABEL_21:
          if ( (*(_BYTE *)v11 & 2) != 0 )
            goto LABEL_22;
          goto LABEL_70;
        }
LABEL_27:
        clear_tinfo_t();
        *(_QWORD *)a1 |= 2uLL;
LABEL_28:
        if ( a1 )
          qfree();
        return;
      }
LABEL_9:
      v7 = *(_BYTE **)(v6 + 8);
      if ( (*v7 & 2) != 0 )
      {
        v8 = *(_BYTE **)(v6 + 16);
        if ( (*v8 & 2) != 0 )
          goto LABEL_40;
      }
      else
      {
        sub_3AAAB0((__int64)v7, a2);
        v8 = *(_BYTE **)(v6 + 16);
        if ( (*v8 & 2) != 0 )
          goto LABEL_11;
      }
      sub_3AAAB0((__int64)v8, a2);
LABEL_11:
      if ( (*(_BYTE *)v6 & 2) != 0 )
        goto LABEL_12;
LABEL_40:
      v14 = *(unsigned __int64 **)(v6 + 48);
      if ( !v14 )
      {
LABEL_53:
        clear_tinfo_t();
        *(_QWORD *)v6 |= 2uLL;
LABEL_12:
        if ( v6 )
          qfree();
        goto LABEL_14;
      }
      if ( !*(_QWORD *)(v6 + 56) )
      {
        sub_3AAA70((unsigned __int64 *)(v6 + 48));
LABEL_51:
        if ( *(_QWORD *)(v6 + 48) )
          qfree();
        goto LABEL_53;
      }
      v15 = *v14;
      v16 = *v14 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v16 & 2) != 0 )
      {
LABEL_50:
        *v14 = v15 & 3 | (unsigned __int64)v14 & 0xFFFFFFFFFFFFFFFCLL;
        *(__m128i *)(*(_QWORD *)(v6 + 48) + 8LL) = _mm_unpacklo_epi64(
                                                     (__m128i)*(unsigned __int64 *)(v6 + 48),
                                                     (__m128i)*(unsigned __int64 *)(v6 + 48));
        **(_QWORD **)(v6 + 48) &= ~1uLL;
        **(_QWORD **)(v6 + 48) |= 2uLL;
        *(_QWORD *)(v6 + 56) = 0;
        goto LABEL_51;
      }
      v17 = *(_QWORD **)(v16 + 8);
      if ( (*(_BYTE *)v17 & 2) != 0 )
      {
        v18 = *(_QWORD **)(v16 + 16);
        if ( (*(_BYTE *)v18 & 2) != 0 )
          goto LABEL_74;
      }
      else
      {
        sub_3AA820(v17, a2);
        v18 = *(_QWORD **)(v16 + 16);
        if ( (*(_BYTE *)v18 & 2) != 0 )
          goto LABEL_46;
      }
      sub_3AA820(v18, a2);
LABEL_46:
      if ( (*(_BYTE *)v16 & 2) != 0 )
      {
LABEL_47:
        if ( v15 > 3 )
          qfree();
        v14 = *(unsigned __int64 **)(v6 + 48);
        v15 = *v14;
        goto LABEL_50;
      }
LABEL_74:
      sub_3A6A30(v16 + 32);
      *(_QWORD *)v16 |= 2uLL;
      goto LABEL_47;
    }
    if ( !*(_QWORD *)(v2 + 56) )
    {
      sub_3AAA70((unsigned __int64 *)(v2 + 48));
LABEL_64:
      if ( *(_QWORD *)(v2 + 48) )
        qfree();
      goto LABEL_66;
    }
    v20 = *v19;
    v21 = *v19 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v21 & 2) != 0 )
    {
LABEL_63:
      sub_3AAA70((unsigned __int64 *)(v2 + 48));
      *(_QWORD *)(v2 + 56) = 0;
      goto LABEL_64;
    }
    v22 = *(_QWORD **)(v21 + 8);
    if ( (*(_BYTE *)v22 & 2) != 0 )
    {
      v23 = *(_QWORD **)(v21 + 16);
      if ( (*(_BYTE *)v23 & 2) != 0 )
      {
LABEL_72:
        sub_3A6A30(v21 + 32);
        *(_QWORD *)v21 |= 2uLL;
LABEL_61:
        if ( v20 > 3 )
          qfree();
        goto LABEL_63;
      }
    }
    else
    {
      sub_3AA820(v22, a2);
      v23 = *(_QWORD **)(v21 + 16);
      if ( (*(_BYTE *)v23 & 2) != 0 )
        goto LABEL_60;
    }
    sub_3AA820(v23, a2);
LABEL_60:
    if ( (*(_BYTE *)v21 & 2) != 0 )
      goto LABEL_61;
    goto LABEL_72;
  }
}

