unsigned __int64 *__fastcall sub_13CEB0(unsigned __int64 **a1, __int64 a2)
{
  unsigned __int64 *result; // rax
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r12
  __int64 v6; // r13
  _QWORD *v7; // rdi
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  _QWORD *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 i; // r14
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r14
  _QWORD *v18; // rax
  __int64 v19; // [rsp+8h] [rbp-40h]

  result = *a1;
  if ( !*a1 )
    goto LABEL_13;
  v4 = *result;
  if ( !a1[1] )
  {
    *result = (unsigned __int64)result & 0xFFFFFFFFFFFFFFFCLL | *result & 3;
    *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
    **a1 &= ~1uLL;
    result = *a1;
    **a1 |= 2u;
    return result;
  }
  v5 = v4 & 0xFFFFFFFFFFFFFFFCLL;
  v6 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCLL) & 2LL;
  if ( (*(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
  {
    v7 = *(_QWORD **)(v5 + 8);
    if ( (*(_BYTE *)v7 & 2) != 0 )
    {
      v8 = *(_QWORD **)(v5 + 16);
      if ( (*(_BYTE *)v8 & 2) != 0 )
        goto LABEL_15;
    }
    else
    {
      sub_13CBE0(v7, a2);
      v8 = *(_QWORD **)(v5 + 16);
      if ( (*(_BYTE *)v8 & 2) != 0 )
        goto LABEL_8;
    }
    sub_13CBE0(v8, a2);
LABEL_8:
    if ( (*(_BYTE *)v5 & 2) != 0 )
    {
LABEL_9:
      if ( v4 > 3 )
        qfree();
      result = *a1;
      v4 = **a1;
      goto LABEL_12;
    }
LABEL_15:
    if ( *(_QWORD *)(v5 + 56) )
    {
      *(_QWORD *)(v5 + 64) = 0;
      qfree();
    }
    v9 = *(_QWORD *)(v5 + 32);
    if ( v9 )
    {
      if ( (*(_DWORD *)(v9 + 104))-- == 1 )
      {
        v11 = *(_QWORD **)(v5 + 32);
        if ( v11 )
        {
          sub_254CF0(*(_QWORD *)(v5 + 32), a2);
          v12 = v11[23];
          if ( v12 )
          {
            v13 = v11[24];
            if ( v13 )
            {
              for ( i = 0; i != v13; ++i )
              {
                v15 = (_QWORD *)(v12 + 24 * i);
                if ( *v15 )
                {
                  v15[1] = 0;
                  v19 = v13;
                  qfree();
                  v12 = v11[23];
                  v13 = v19;
                }
              }
            }
            v11[24] = 0;
            qfree();
          }
          if ( v11[20] )
          {
            v11[21] = 0;
            qfree();
          }
          v16 = v11[16];
          if ( v16 )
          {
            v17 = v11[17];
            if ( v17 )
            {
              do
              {
                v18 = (_QWORD *)(v16 + 32 * v6);
                if ( *v18 )
                {
                  v18[1] = 0;
                  qfree();
                  v16 = v11[16];
                }
                ++v6;
              }
              while ( v17 != v6 );
            }
            v11[17] = 0;
            qfree();
          }
          sub_2513D0(v11 + 2);
          j__qfree();
        }
      }
    }
    *(_QWORD *)v5 |= 2uLL;
    goto LABEL_9;
  }
LABEL_12:
  *result = (unsigned __int64)result & 0xFFFFFFFFFFFFFFFCLL | v4 & 3;
  *(__m128i *)(*a1 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
  **a1 &= ~1uLL;
  result = *a1;
  **a1 |= 2u;
LABEL_13:
  a1[1] = nullptr;
  return result;
}

