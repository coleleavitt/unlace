__int64 __fastcall sub_311BF0(const __m128i **a1, _DWORD *a2, __int64 *a3, int a4, __int64 a5)
{
  char v7; // cl
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rax
  const __m128i *v10; // rdx
  unsigned __int64 v11; // rcx
  const __m128i *v12; // rdx
  unsigned __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rsi
  const __m128i *v17; // rdx
  unsigned __int64 v18; // rdi
  __int64 v19; // r9
  unsigned __int64 v20; // r11
  unsigned __int64 v21; // r10
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r12
  unsigned __int64 v25; // r13
  __int64 v26; // rdi
  int v27; // r14d
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __m128i v32; // xmm0

  if ( a4 == 8 )
  {
    v8 = -1;
    v9 = 0x7FFFFFFFFFFFFFFFLL;
  }
  else
  {
    v7 = 8 * a4;
    v8 = (1LL << v7) - 1;
    v9 = (1LL << (v7 - 1)) - 1;
  }
  v10 = a1[1];
  v11 = a5 - v9;
  if ( v10 == (const __m128i *)&byte_1 )
  {
    v17 = *a1;
    v18 = (*a1)->m128i_i64[0];
    v19 = v17->m128i_i64[1];
    if ( v18 >= v11 )
    {
      if ( v19 != 1 )
      {
        v20 = v18 + v19;
        v21 = v18 + v19 - 1;
        if ( v18 == v11 )
        {
          if ( a5 != v21 )
          {
            *a2 = 9;
            v22 = v17->m128i_i64[0] + v17->m128i_i64[1] - 1;
            goto LABEL_27;
          }
          *a2 = 8;
          *a3 = 0;
          return 1;
        }
        goto LABEL_17;
      }
    }
    else
    {
      v20 = v18 + v19;
      v21 = v18 + v19 - 1;
      if ( v8 < v21 )
        goto LABEL_66;
      if ( v19 != 1 )
      {
LABEL_17:
        if ( v8 == v21 )
        {
          if ( v18 == 1 )
          {
            *a2 = 0;
            *a3 = 0;
            return 1;
          }
          *a2 = 2;
          v23 = v17->m128i_i64[0];
          *a3 = v17->m128i_i64[0];
          if ( !v23 )
            return 1;
        }
        else
        {
          if ( v9 != v21 )
          {
            if ( v18 )
              return 0;
            if ( v8 != v20 )
            {
              *a2 = 5;
              v22 = v17->m128i_i64[0] + v17->m128i_i64[1] - 1;
              goto LABEL_27;
            }
            *a2 = 0;
            *a3 = v8;
            return 1;
          }
          *a2 = 7;
          v30 = v17->m128i_i64[0];
          *a3 = v17->m128i_i64[0];
          if ( !v30 )
            return 1;
        }
LABEL_32:
        switch ( *a2 )
        {
          case 0:
          case 1:
LABEL_34:
            if ( under_debugger )
              goto LABEL_68;
            interr();
LABEL_36:
            v24 = 1;
            v25 = 8;
LABEL_37:
            v26 = *a3;
            if ( *a3 )
            {
LABEL_38:
              if ( a5 != v26 )
              {
                if ( v26 + v24 == a5
                  || (v27 = bitcount(), v28 = bitcount(), v27 > v28)
                  || v27 == v28 && (v29 = 344, _bittest64(&v29, v25)) )
                {
                  *a2 = v25;
                  *a3 += v24;
                }
              }
              return 1;
            }
LABEL_62:
            if ( under_debugger )
              goto LABEL_68;
            interr();
            break;
          case 2:
            v26 = *a3;
            v25 = 4;
            v24 = -1;
            goto LABEL_38;
          case 3:
LABEL_49:
            v24 = -1;
            v25 = 5;
            goto LABEL_37;
          case 4:
LABEL_48:
            v24 = 1;
            v25 = 2;
            goto LABEL_37;
          case 5:
LABEL_47:
            v24 = 1;
            v25 = 3;
            goto LABEL_37;
          case 6:
LABEL_46:
            v24 = 1;
            v25 = 7;
            goto LABEL_37;
          case 7:
LABEL_45:
            v24 = -1;
            v25 = 6;
            goto LABEL_37;
          case 8:
LABEL_44:
            v24 = -1;
            v25 = 9;
            goto LABEL_37;
          case 9:
            goto LABEL_36;
          default:
            goto LABEL_62;
        }
        goto LABEL_64;
      }
    }
    *a2 = 1;
    *a3 = v17->m128i_i64[0];
    return 1;
  }
  if ( v10 != (const __m128i *)&word_2 )
    return 0;
  v12 = *a1;
  if ( (*a1)->m128i_i64[0] )
    return 0;
  v13 = v12[1].m128i_u64[0];
  if ( a5 != v13 + v12[1].m128i_i64[1] - 1 )
    return 0;
  v14 = v12->m128i_i64[1];
  if ( v9 + 1 == v11 || v9 >= v14 - 1 && v13 >= v11 )
  {
    if ( v14 + 1 == v13 )
    {
      *a2 = 0;
      v32 = _mm_loadu_si128(v12);
      *a3 = _mm_add_epi64(v32, _mm_srli_si128(v32, 8)).m128i_u64[0];
    }
    else
    {
      v15 = v14 - 1;
      if ( v11 != v13 )
      {
        if ( v9 != v15 )
          return 0;
        *a2 = 7;
        v22 = v12[1].m128i_i64[0];
LABEL_27:
        *a3 = v22;
        switch ( *a2 )
        {
          case 0:
          case 1:
            goto LABEL_34;
          case 2:
            v24 = -1;
            v25 = 4;
            goto LABEL_37;
          case 3:
            goto LABEL_49;
          case 4:
            goto LABEL_48;
          case 5:
            goto LABEL_47;
          case 6:
            goto LABEL_46;
          case 7:
            goto LABEL_45;
          case 8:
            goto LABEL_44;
          case 9:
            goto LABEL_36;
          default:
            goto LABEL_62;
        }
      }
      if ( v9 != v15 )
      {
        *a2 = 9;
        v31 = v12->m128i_i64[0] + v12->m128i_i64[1] - 1;
        *a3 = v31;
        if ( !v31 )
          return 1;
        goto LABEL_32;
      }
      *a2 = 2;
      *a3 = 0;
    }
    return 1;
  }
LABEL_64:
  if ( under_debugger )
    goto LABEL_68;
  interr();
LABEL_66:
  if ( under_debugger )
LABEL_68:
    BUG();
  interr();
  return sub_312040(52801);
}

