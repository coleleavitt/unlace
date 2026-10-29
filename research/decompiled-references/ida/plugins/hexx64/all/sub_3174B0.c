__int64 __fastcall sub_3174B0(const __m128i **a1, _DWORD *a2, __int64 *a3, int a4, __int64 a5)
{
  char v7; // cl
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rax
  const __m128i *v10; // rdx
  unsigned __int64 v11; // rcx
  const __m128i *v12; // rdx
  unsigned __int64 v13; // rdi
  const __m128i *v15; // rdx
  unsigned __int64 v16; // rdi
  __int64 v17; // r9
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // r10
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r12
  unsigned __int64 v23; // r13
  __int64 v24; // rdi
  int v25; // r14d
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __m128i v30; // xmm0
  _QWORD *v31; // rdx
  unsigned __int8 (__fastcall *v32)(_QWORD, __int64); // rcx

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
    v15 = *a1;
    v16 = (*a1)->m128i_i64[0];
    v17 = v15->m128i_i64[1];
    if ( v16 >= v11 )
    {
      if ( v17 != 1 )
      {
        v18 = v16 + v17;
        v19 = v16 + v17 - 1;
        if ( v16 == v11 )
        {
          if ( a5 != v19 )
          {
            *a2 = 9;
            v20 = v15->m128i_i64[0] + v15->m128i_i64[1] - 1;
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
      v18 = v16 + v17;
      v19 = v16 + v17 - 1;
      if ( v8 < v19 )
        goto LABEL_66;
      if ( v17 != 1 )
      {
LABEL_17:
        if ( v8 == v19 )
        {
          if ( v16 == 1 )
          {
            *a2 = 0;
            *a3 = 0;
            return 1;
          }
          *a2 = 2;
          v21 = v15->m128i_i64[0];
          *a3 = v15->m128i_i64[0];
          if ( !v21 )
            return 1;
        }
        else
        {
          if ( v9 != v19 )
          {
            if ( v16 )
              return 0;
            if ( v8 != v18 )
            {
              *a2 = 5;
              v20 = v15->m128i_i64[0] + v15->m128i_i64[1] - 1;
              goto LABEL_27;
            }
            *a2 = 0;
            *a3 = v8;
            return 1;
          }
          *a2 = 7;
          v28 = v15->m128i_i64[0];
          *a3 = v15->m128i_i64[0];
          if ( !v28 )
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
            v22 = 1;
            v23 = 8;
LABEL_37:
            v24 = *a3;
            if ( *a3 )
            {
LABEL_38:
              if ( a5 != v24 )
              {
                if ( v24 + v22 == a5
                  || (v25 = bitcount(), v26 = bitcount(), v25 > v26)
                  || v25 == v26 && (v27 = 344, _bittest64(&v27, v23)) )
                {
                  *a2 = v23;
                  *a3 += v22;
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
            v24 = *a3;
            v23 = 4;
            v22 = -1;
            goto LABEL_38;
          case 3:
LABEL_49:
            v22 = -1;
            v23 = 5;
            goto LABEL_37;
          case 4:
LABEL_48:
            v22 = 1;
            v23 = 2;
            goto LABEL_37;
          case 5:
LABEL_47:
            v22 = 1;
            v23 = 3;
            goto LABEL_37;
          case 6:
LABEL_46:
            v22 = 1;
            v23 = 7;
            goto LABEL_37;
          case 7:
LABEL_45:
            v22 = -1;
            v23 = 6;
            goto LABEL_37;
          case 8:
LABEL_44:
            v22 = -1;
            v23 = 9;
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
    *a3 = v15->m128i_i64[0];
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
  v8 = v12->m128i_u64[1];
  if ( v9 + 1 == v11 || v9 >= v8 - 1 && v13 >= v11 )
  {
    if ( v8 + 1 == v13 )
    {
      *a2 = 0;
      v30 = _mm_loadu_si128(v12);
      *a3 = _mm_add_epi64(v30, _mm_srli_si128(v30, 8)).m128i_u64[0];
    }
    else
    {
      --v8;
      if ( v11 != v13 )
      {
        if ( v9 != v8 )
          return 0;
        *a2 = 7;
        v20 = v12[1].m128i_i64[0];
LABEL_27:
        *a3 = v20;
        switch ( *a2 )
        {
          case 0:
          case 1:
            goto LABEL_34;
          case 2:
            v22 = -1;
            v23 = 4;
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
      if ( v9 != v8 )
      {
        *a2 = 9;
        v29 = v12->m128i_i64[0] + v12->m128i_i64[1] - 1;
        *a3 = v29;
        if ( !v29 )
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
  return sub_317900(52801, v8, v31, v32);
}

