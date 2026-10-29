void __fastcall sub_1896A0(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 v5; // rbp
  _QWORD *v6; // rbx
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // r15
  _QWORD *v9; // rdx
  __int64 *v10; // rdi
  __int64 *v11; // rdi
  _BYTE *v12; // [rsp+8h] [rbp-40h]
  _QWORD *v13; // [rsp+8h] [rbp-40h]

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v4 = 0;
      v5 = 0;
      while ( 1 )
      {
        v6 = (_QWORD *)(v2 + v4);
        if ( *(_QWORD *)(v2 + v4 + 128) )
        {
          v6[17] = 0;
          qfree();
        }
        if ( v6[13] )
        {
          v6[14] = 0;
          qfree();
        }
        qfree();
        if ( v6[8] )
        {
          v6[9] = 0;
          qfree();
        }
        qfree();
        if ( v6[3] )
        {
          v6[4] = 0;
          qfree();
        }
        v7 = (unsigned __int64 *)v6[1];
        if ( !v7 )
          goto LABEL_24;
        v8 = *v7;
        if ( v6[2] )
          break;
        *v7 = *v7 & 3 | (unsigned __int64)v7 & 0xFFFFFFFFFFFFFFFCLL;
        *(__m128i *)(v6[1] + 8LL) = _mm_unpacklo_epi64(
                                      (__m128i)(unsigned __int64)v6[1],
                                      (__m128i)(unsigned __int64)v6[1]);
        *(_QWORD *)v6[1] &= ~1uLL;
        *(_QWORD *)v6[1] |= 2uLL;
LABEL_22:
        if ( v6[1] )
          qfree();
LABEL_24:
        ++v5;
        v2 = *a1;
        v4 += 216;
        if ( v3 == v5 )
          goto LABEL_25;
      }
      v9 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (*(_BYTE *)(v8 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
      {
LABEL_21:
        *v7 = v8 & 3 | (unsigned __int64)v7 & 0xFFFFFFFFFFFFFFFCLL;
        *(__m128i *)(v6[1] + 8LL) = _mm_unpacklo_epi64(
                                      (__m128i)(unsigned __int64)v6[1],
                                      (__m128i)(unsigned __int64)v6[1]);
        *(_QWORD *)v6[1] &= ~1uLL;
        *(_QWORD *)v6[1] |= 2uLL;
        v6[2] = 0;
        goto LABEL_22;
      }
      v10 = (__int64 *)v9[1];
      if ( (*(_BYTE *)v10 & 2) != 0 )
      {
        v11 = (__int64 *)v9[2];
        if ( (*(_BYTE *)v11 & 2) != 0 )
          goto LABEL_29;
      }
      else
      {
        sub_187890(v10);
        v9 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
        v11 = *(__int64 **)((v8 & 0xFFFFFFFFFFFFFFFCLL) + 16);
        if ( (*(_BYTE *)v11 & 2) != 0 )
        {
          if ( (*(_BYTE *)(v8 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
          {
LABEL_18:
            if ( v8 > 3 )
              qfree();
            v7 = (unsigned __int64 *)v6[1];
            v8 = *v7;
            goto LABEL_21;
          }
LABEL_29:
          if ( v9[4] )
          {
            v9[5] = 0;
            v13 = v9;
            qfree();
            v9 = v13;
          }
          *v9 |= 2uLL;
          goto LABEL_18;
        }
      }
      v12 = v9;
      sub_187890(v11);
      v9 = v12;
      if ( (*v12 & 2) != 0 )
        goto LABEL_18;
      goto LABEL_29;
    }
LABEL_25:
    a1[1] = 0;
    qfree();
  }
}

