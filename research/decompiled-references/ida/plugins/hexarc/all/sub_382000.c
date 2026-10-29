void __fastcall sub_382000(_QWORD *a1)
{
  unsigned __int64 *v2; // rax
  unsigned __int64 v3; // rbp
  __int64 *v4; // r12
  __int64 v5; // rdx
  __int64 *v6; // r13
  __int64 v7; // rax
  __int64 *v8; // r13
  __int64 *v9; // rdi
  __int64 *v10; // rdi
  __int64 v11; // rax
  __int64 *v12; // rdi
  __int64 *v13; // rdi

  if ( a1 )
  {
    if ( a1[5] )
    {
      a1[6] = 0;
      qfree();
    }
    v2 = (unsigned __int64 *)a1[3];
    if ( !v2 )
      goto LABEL_9;
    v3 = *v2;
    if ( !a1[4] )
    {
      *v2 = (unsigned __int64)v2 & 0xFFFFFFFFFFFFFFFCLL | *v2 & 3;
      *(__m128i *)(a1[3] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[3], (__m128i)(unsigned __int64)a1[3]);
      *(_QWORD *)a1[3] &= ~1uLL;
      *(_QWORD *)a1[3] |= 2uLL;
      goto LABEL_7;
    }
    v4 = (__int64 *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
    v5 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v5 & 2) != 0 )
    {
LABEL_24:
      *v2 = (unsigned __int64)v2 & 0xFFFFFFFFFFFFFFFCLL | v3 & 3;
      *(__m128i *)(a1[3] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[3], (__m128i)(unsigned __int64)a1[3]);
      *(_QWORD *)a1[3] &= ~1uLL;
      *(_QWORD *)a1[3] |= 2uLL;
      a1[4] = 0;
LABEL_7:
      if ( a1[3] )
        qfree();
LABEL_9:
      operator delete(a1, 0x60u);
      return;
    }
    v6 = (__int64 *)v4[1];
    v7 = *v6;
    if ( (*v6 & 2) != 0 )
    {
      v8 = (__int64 *)v4[2];
      if ( (*(_BYTE *)v8 & 2) != 0 )
        goto LABEL_33;
      goto LABEL_14;
    }
    v12 = (__int64 *)v6[1];
    if ( (*(_BYTE *)v12 & 2) != 0 )
    {
      v13 = (__int64 *)v6[2];
      if ( (*(_BYTE *)v13 & 2) != 0 )
      {
LABEL_35:
        *v6 = v7 | 2;
LABEL_29:
        if ( v6 )
          qfree();
        v8 = (__int64 *)v4[2];
        if ( (*(_BYTE *)v8 & 2) != 0 )
        {
LABEL_20:
          v5 = *v4;
          if ( (*v4 & 2) != 0 )
          {
LABEL_21:
            if ( v3 > 3 )
              qfree();
            v2 = (unsigned __int64 *)a1[3];
            v3 = *v2;
            goto LABEL_24;
          }
LABEL_33:
          *v4 = v5 | 2;
          goto LABEL_21;
        }
LABEL_14:
        v9 = (__int64 *)v8[1];
        if ( (*(_BYTE *)v9 & 2) != 0 )
        {
          v10 = (__int64 *)v8[2];
          if ( (*(_BYTE *)v10 & 2) != 0 )
          {
            v11 = *v8;
LABEL_38:
            *v8 = v11 | 2;
LABEL_18:
            if ( v8 )
              qfree();
            goto LABEL_20;
          }
        }
        else
        {
          sub_37DDD0(v9);
          v10 = (__int64 *)v8[2];
          if ( (*(_BYTE *)v10 & 2) != 0 )
            goto LABEL_17;
        }
        sub_37DDD0(v10);
LABEL_17:
        v11 = *v8;
        if ( (*v8 & 2) != 0 )
          goto LABEL_18;
        goto LABEL_38;
      }
    }
    else
    {
      sub_37DDD0(v12);
      v13 = (__int64 *)v6[2];
      if ( (*(_BYTE *)v13 & 2) != 0 )
        goto LABEL_28;
    }
    sub_37DDD0(v13);
LABEL_28:
    v7 = *v6;
    if ( (*v6 & 2) != 0 )
      goto LABEL_29;
    goto LABEL_35;
  }
}

