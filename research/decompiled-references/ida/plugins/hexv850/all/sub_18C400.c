__int64 __fastcall sub_18C400(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r12
  __int64 v4; // r13
  unsigned __int64 **v5; // rbx
  unsigned __int64 *v6; // rax
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r15
  __int64 *v9; // rdi
  __int64 *v10; // rdi

  *a1 = off_4B1B38;
  v2 = a1[17];
  if ( v2 )
  {
    v3 = a1[18];
    if ( v3 )
    {
      v4 = 0;
      while ( 1 )
      {
        v5 = (unsigned __int64 **)(v2 + 16 * v4);
        v6 = *v5;
        if ( *v5 )
          break;
LABEL_17:
        if ( v3 == ++v4 )
          goto LABEL_18;
      }
      v7 = *v6;
      if ( !v5[1] )
      {
        *v6 = *v6 & 3 | (unsigned __int64)v6 & 0xFFFFFFFFFFFFFFFCLL;
        *(__m128i *)(*v5 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v5, (__m128i)(unsigned __int64)*v5);
        **v5 &= ~1uLL;
        **v5 |= 2u;
        goto LABEL_14;
      }
      v8 = v7 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)(v7 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
      {
LABEL_13:
        *v6 = v7 & 3 | (unsigned __int64)v6 & 0xFFFFFFFFFFFFFFFCLL;
        *(__m128i *)(*v5 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v5, (__m128i)(unsigned __int64)*v5);
        **v5 &= ~1uLL;
        **v5 |= 2u;
        v5[1] = nullptr;
LABEL_14:
        if ( *v5 )
          qfree();
        v2 = a1[17];
        goto LABEL_17;
      }
      v9 = *(__int64 **)(v8 + 8);
      if ( (*(_BYTE *)v9 & 2) != 0 )
      {
        v10 = *(__int64 **)(v8 + 16);
        if ( (*(_BYTE *)v10 & 2) != 0 )
          goto LABEL_28;
      }
      else
      {
        sub_18C230(v9);
        v10 = *(__int64 **)(v8 + 16);
        if ( (*(_BYTE *)v10 & 2) != 0 )
        {
          if ( (*(_BYTE *)v8 & 2) != 0 )
          {
LABEL_10:
            if ( v7 > 3 )
              qfree();
            v6 = *v5;
            v7 = **v5;
            goto LABEL_13;
          }
LABEL_28:
          if ( *(_QWORD *)(v8 + 40) )
          {
            *(_QWORD *)(v8 + 48) = 0;
            qfree();
          }
          *(_QWORD *)v8 |= 2uLL;
          goto LABEL_10;
        }
      }
      sub_18C230(v10);
      if ( (*(_BYTE *)v8 & 2) != 0 )
        goto LABEL_10;
      goto LABEL_28;
    }
LABEL_18:
    a1[18] = 0;
    qfree();
  }
  if ( a1[14] )
  {
    a1[15] = 0;
    qfree();
  }
  if ( a1[11] )
  {
    a1[12] = 0;
    qfree();
  }
  if ( a1[8] )
  {
    a1[9] = 0;
    qfree();
  }
  return qfree();
}

