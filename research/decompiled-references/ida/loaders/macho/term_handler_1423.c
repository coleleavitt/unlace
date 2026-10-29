void __fastcall sub_4FEC0(unsigned __int8 **a1)
{
  unsigned __int8 *v1; // rcx
  unsigned __int8 *v2; // rdx
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r11
  __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r10
  unsigned __int8 *v10; // rcx
  unsigned __int64 j; // rsi
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rax
  unsigned __int8 *v14; // rax
  unsigned __int64 v15; // r8
  unsigned __int8 *v16; // rcx
  unsigned __int64 v17; // r10
  unsigned __int8 v18; // si
  __int64 v19; // rsi
  __int64 k; // rsi
  __int64 v21; // r11
  unsigned __int64 v22; // r8
  __int64 v23; // rax
  unsigned __int8 *v24; // rax
  unsigned __int8 *v25; // rsi
  unsigned __int8 v26; // dl
  __int64 v27; // rsi
  __int64 i; // rsi

  v1 = *a1;
  v2 = a1[2];
  v3 = a1[4] - v2;
  v4 = a1[1] - *a1;
  if ( !v4 || !v3 )
    return;
  v5 = (unsigned __int64)a1[6];
  v6 = (unsigned __int64)a1[7];
  if ( !v5 )
  {
    if ( !v6 )
    {
      v8 = (unsigned __int64)a1[9];
      v12 = *v1;
      switch ( v12 )
      {
        case 0uLL:
        case 1uLL:
        case 2uLL:
        case 3uLL:
        case 4uLL:
        case 5uLL:
        case 8uLL:
        case 9uLL:
        case 0xAuLL:
        case 0xBuLL:
        case 0xCuLL:
        case 0xDuLL:
        case 0x10uLL:
        case 0x11uLL:
        case 0x12uLL:
        case 0x13uLL:
        case 0x14uLL:
        case 0x15uLL:
        case 0x18uLL:
        case 0x19uLL:
        case 0x1AuLL:
        case 0x1BuLL:
        case 0x1CuLL:
        case 0x1DuLL:
        case 0x20uLL:
        case 0x21uLL:
        case 0x22uLL:
        case 0x23uLL:
        case 0x24uLL:
        case 0x25uLL:
        case 0x28uLL:
        case 0x29uLL:
        case 0x2AuLL:
        case 0x2BuLL:
        case 0x2CuLL:
        case 0x2DuLL:
        case 0x30uLL:
        case 0x31uLL:
        case 0x32uLL:
        case 0x33uLL:
        case 0x34uLL:
        case 0x35uLL:
        case 0x38uLL:
        case 0x39uLL:
        case 0x3AuLL:
        case 0x3BuLL:
        case 0x3CuLL:
        case 0x3DuLL:
        case 0x40uLL:
        case 0x41uLL:
        case 0x42uLL:
        case 0x43uLL:
        case 0x44uLL:
        case 0x45uLL:
        case 0x48uLL:
        case 0x49uLL:
        case 0x4AuLL:
        case 0x4BuLL:
        case 0x4CuLL:
        case 0x4DuLL:
        case 0x50uLL:
        case 0x51uLL:
        case 0x52uLL:
        case 0x53uLL:
        case 0x54uLL:
        case 0x55uLL:
        case 0x58uLL:
        case 0x59uLL:
        case 0x5AuLL:
        case 0x5BuLL:
        case 0x5CuLL:
        case 0x5DuLL:
        case 0x60uLL:
        case 0x61uLL:
        case 0x62uLL:
        case 0x63uLL:
        case 0x64uLL:
        case 0x65uLL:
        case 0x68uLL:
        case 0x69uLL:
        case 0x6AuLL:
        case 0x6BuLL:
        case 0x6CuLL:
        case 0x6DuLL:
        case 0x80uLL:
        case 0x81uLL:
        case 0x82uLL:
        case 0x83uLL:
        case 0x84uLL:
        case 0x85uLL:
        case 0x88uLL:
        case 0x89uLL:
        case 0x8AuLL:
        case 0x8BuLL:
        case 0x8CuLL:
        case 0x8DuLL:
        case 0x90uLL:
        case 0x91uLL:
        case 0x92uLL:
        case 0x93uLL:
        case 0x94uLL:
        case 0x95uLL:
        case 0x98uLL:
        case 0x99uLL:
        case 0x9AuLL:
        case 0x9BuLL:
        case 0x9CuLL:
        case 0x9DuLL:
        case 0xC0uLL:
        case 0xC1uLL:
        case 0xC2uLL:
        case 0xC3uLL:
        case 0xC4uLL:
        case 0xC5uLL:
        case 0xC8uLL:
        case 0xC9uLL:
        case 0xCAuLL:
        case 0xCBuLL:
        case 0xCCuLL:
        case 0xCDuLL:
LABEL_46:
          *a1 = v1;
          a1[2] = v2;
          a1[9] = (unsigned __int8 *)v8;
          v5 = (unsigned __int8)v12 >> 6;
          if ( v4 <= v5 + 2 )
            return;
          v6 = (((unsigned __int64)(unsigned __int8)v12 >> 3) & 7) + 3;
          v8 = ((v12 & 7) << 8) | v1[1];
          v7 = 2;
          goto LABEL_25;
        case 6uLL:
LABEL_12:
          if ( v4 > 7 )
          {
            *((_DWORD *)a1 + 20) = 1;
            a1[2] = v2;
            *a1 = v1 + 8;
            a1[9] = (unsigned __int8 *)v8;
          }
          return;
        case 7uLL:
        case 0xFuLL:
        case 0x17uLL:
        case 0x1FuLL:
        case 0x27uLL:
        case 0x2FuLL:
        case 0x37uLL:
        case 0x3FuLL:
        case 0x47uLL:
        case 0x4FuLL:
        case 0x57uLL:
        case 0x5FuLL:
        case 0x67uLL:
        case 0x6FuLL:
        case 0x87uLL:
        case 0x8FuLL:
        case 0x97uLL:
        case 0x9FuLL:
        case 0xC7uLL:
        case 0xCFuLL:
LABEL_50:
          v22 = (unsigned __int8)v12;
          *a1 = v1;
          v5 = (unsigned __int8)v12 >> 6;
          a1[2] = v2;
          a1[9] = (unsigned __int8 *)v8;
          if ( v4 <= v5 + 3 )
            return;
          v8 = *(unsigned __int16 *)(v1 + 1);
          v7 = 3;
          v6 = ((v22 >> 3) & 7) + 3;
          goto LABEL_25;
        case 0xEuLL:
        case 0x16uLL:
LABEL_62:
          while ( 2 )
          {
            *a1 = v1;
            a1[2] = v2;
            a1[9] = (unsigned __int8 *)v8;
            if ( v4 > 1 )
            {
              ++v1;
              --v4;
              v12 = *v1;
              switch ( v12 )
              {
                case 0uLL:
                case 1uLL:
                case 2uLL:
                case 3uLL:
                case 4uLL:
                case 5uLL:
                case 8uLL:
                case 9uLL:
                case 0xAuLL:
                case 0xBuLL:
                case 0xCuLL:
                case 0xDuLL:
                case 0x10uLL:
                case 0x11uLL:
                case 0x12uLL:
                case 0x13uLL:
                case 0x14uLL:
                case 0x15uLL:
                case 0x18uLL:
                case 0x19uLL:
                case 0x1AuLL:
                case 0x1BuLL:
                case 0x1CuLL:
                case 0x1DuLL:
                case 0x20uLL:
                case 0x21uLL:
                case 0x22uLL:
                case 0x23uLL:
                case 0x24uLL:
                case 0x25uLL:
                case 0x28uLL:
                case 0x29uLL:
                case 0x2AuLL:
                case 0x2BuLL:
                case 0x2CuLL:
                case 0x2DuLL:
                case 0x30uLL:
                case 0x31uLL:
                case 0x32uLL:
                case 0x33uLL:
                case 0x34uLL:
                case 0x35uLL:
                case 0x38uLL:
                case 0x39uLL:
                case 0x3AuLL:
                case 0x3BuLL:
                case 0x3CuLL:
                case 0x3DuLL:
                case 0x40uLL:
                case 0x41uLL:
                case 0x42uLL:
                case 0x43uLL:
                case 0x44uLL:
                case 0x45uLL:
                case 0x48uLL:
                case 0x49uLL:
                case 0x4AuLL:
                case 0x4BuLL:
                case 0x4CuLL:
                case 0x4DuLL:
                case 0x50uLL:
                case 0x51uLL:
                case 0x52uLL:
                case 0x53uLL:
                case 0x54uLL:
                case 0x55uLL:
                case 0x58uLL:
                case 0x59uLL:
                case 0x5AuLL:
                case 0x5BuLL:
                case 0x5CuLL:
                case 0x5DuLL:
                case 0x60uLL:
                case 0x61uLL:
                case 0x62uLL:
                case 0x63uLL:
                case 0x64uLL:
                case 0x65uLL:
                case 0x68uLL:
                case 0x69uLL:
                case 0x6AuLL:
                case 0x6BuLL:
                case 0x6CuLL:
                case 0x6DuLL:
                case 0x80uLL:
                case 0x81uLL:
                case 0x82uLL:
                case 0x83uLL:
                case 0x84uLL:
                case 0x85uLL:
                case 0x88uLL:
                case 0x89uLL:
                case 0x8AuLL:
                case 0x8BuLL:
                case 0x8CuLL:
                case 0x8DuLL:
                case 0x90uLL:
                case 0x91uLL:
                case 0x92uLL:
                case 0x93uLL:
                case 0x94uLL:
                case 0x95uLL:
                case 0x98uLL:
                case 0x99uLL:
                case 0x9AuLL:
                case 0x9BuLL:
                case 0x9CuLL:
                case 0x9DuLL:
                case 0xC0uLL:
                case 0xC1uLL:
                case 0xC2uLL:
                case 0xC3uLL:
                case 0xC4uLL:
                case 0xC5uLL:
                case 0xC8uLL:
                case 0xC9uLL:
                case 0xCAuLL:
                case 0xCBuLL:
                case 0xCCuLL:
                case 0xCDuLL:
                  goto LABEL_46;
                case 6uLL:
                  goto LABEL_12;
                case 7uLL:
                case 0xFuLL:
                case 0x17uLL:
                case 0x1FuLL:
                case 0x27uLL:
                case 0x2FuLL:
                case 0x37uLL:
                case 0x3FuLL:
                case 0x47uLL:
                case 0x4FuLL:
                case 0x57uLL:
                case 0x5FuLL:
                case 0x67uLL:
                case 0x6FuLL:
                case 0x87uLL:
                case 0x8FuLL:
                case 0x97uLL:
                case 0x9FuLL:
                case 0xC7uLL:
                case 0xCFuLL:
                  goto LABEL_50;
                case 0xEuLL:
                case 0x16uLL:
                  continue;
                case 0x1EuLL:
                case 0x26uLL:
                case 0x2EuLL:
                case 0x36uLL:
                case 0x3EuLL:
                case 0x70uLL:
                case 0x71uLL:
                case 0x72uLL:
                case 0x73uLL:
                case 0x74uLL:
                case 0x75uLL:
                case 0x76uLL:
                case 0x77uLL:
                case 0x78uLL:
                case 0x79uLL:
                case 0x7AuLL:
                case 0x7BuLL:
                case 0x7CuLL:
                case 0x7DuLL:
                case 0x7EuLL:
                case 0x7FuLL:
                case 0xD0uLL:
                case 0xD1uLL:
                case 0xD2uLL:
                case 0xD3uLL:
                case 0xD4uLL:
                case 0xD5uLL:
                case 0xD6uLL:
                case 0xD7uLL:
                case 0xD8uLL:
                case 0xD9uLL:
                case 0xDAuLL:
                case 0xDBuLL:
                case 0xDCuLL:
                case 0xDDuLL:
                case 0xDEuLL:
                case 0xDFuLL:
                  return;
                case 0x46uLL:
                case 0x4EuLL:
                case 0x56uLL:
                case 0x5EuLL:
                case 0x66uLL:
                case 0x6EuLL:
                case 0x86uLL:
                case 0x8EuLL:
                case 0x96uLL:
                case 0x9EuLL:
                case 0xC6uLL:
                case 0xCEuLL:
                  goto LABEL_23;
                case 0xA0uLL:
                case 0xA1uLL:
                case 0xA2uLL:
                case 0xA3uLL:
                case 0xA4uLL:
                case 0xA5uLL:
                case 0xA6uLL:
                case 0xA7uLL:
                case 0xA8uLL:
                case 0xA9uLL:
                case 0xAAuLL:
                case 0xABuLL:
                case 0xACuLL:
                case 0xADuLL:
                case 0xAEuLL:
                case 0xAFuLL:
                case 0xB0uLL:
                case 0xB1uLL:
                case 0xB2uLL:
                case 0xB3uLL:
                case 0xB4uLL:
                case 0xB5uLL:
                case 0xB6uLL:
                case 0xB7uLL:
                case 0xB8uLL:
                case 0xB9uLL:
                case 0xBAuLL:
                case 0xBBuLL:
                case 0xBCuLL:
                case 0xBDuLL:
                case 0xBEuLL:
                case 0xBFuLL:
                  goto LABEL_48;
                case 0xE0uLL:
                  goto LABEL_60;
                case 0xE1uLL:
                case 0xE2uLL:
                case 0xE3uLL:
                case 0xE4uLL:
                case 0xE5uLL:
                case 0xE6uLL:
                case 0xE7uLL:
                case 0xE8uLL:
                case 0xE9uLL:
                case 0xEAuLL:
                case 0xEBuLL:
                case 0xECuLL:
                case 0xEDuLL:
                case 0xEEuLL:
                case 0xEFuLL:
                  goto LABEL_59;
                case 0xF0uLL:
                  goto LABEL_57;
                case 0xF1uLL:
                case 0xF2uLL:
                case 0xF3uLL:
                case 0xF4uLL:
                case 0xF5uLL:
                case 0xF6uLL:
                case 0xF7uLL:
                case 0xF8uLL:
                case 0xF9uLL:
                case 0xFAuLL:
                case 0xFBuLL:
                case 0xFCuLL:
                case 0xFDuLL:
                case 0xFEuLL:
                case 0xFFuLL:
                  goto LABEL_52;
                case 0x100uLL:
                  goto patch_fixup_value;
              }
            }
            return;
          }
        case 0x1EuLL:
        case 0x26uLL:
        case 0x2EuLL:
        case 0x36uLL:
        case 0x3EuLL:
        case 0x70uLL:
        case 0x71uLL:
        case 0x72uLL:
        case 0x73uLL:
        case 0x74uLL:
        case 0x75uLL:
        case 0x76uLL:
        case 0x77uLL:
        case 0x78uLL:
        case 0x79uLL:
        case 0x7AuLL:
        case 0x7BuLL:
        case 0x7CuLL:
        case 0x7DuLL:
        case 0x7EuLL:
        case 0x7FuLL:
        case 0xD0uLL:
        case 0xD1uLL:
        case 0xD2uLL:
        case 0xD3uLL:
        case 0xD4uLL:
        case 0xD5uLL:
        case 0xD6uLL:
        case 0xD7uLL:
        case 0xD8uLL:
        case 0xD9uLL:
        case 0xDAuLL:
        case 0xDBuLL:
        case 0xDCuLL:
        case 0xDDuLL:
        case 0xDEuLL:
        case 0xDFuLL:
          return;
        case 0x46uLL:
        case 0x4EuLL:
        case 0x56uLL:
        case 0x5EuLL:
        case 0x66uLL:
        case 0x6EuLL:
        case 0x86uLL:
        case 0x8EuLL:
        case 0x96uLL:
        case 0x9EuLL:
        case 0xC6uLL:
        case 0xCEuLL:
LABEL_23:
          v15 = (unsigned __int8)v12;
          *a1 = v1;
          v5 = (unsigned __int8)v12 >> 6;
          a1[2] = v2;
          a1[9] = (unsigned __int8 *)v8;
          if ( v5 + 1 >= v4 )
            return;
          v7 = 1;
          v6 = ((v15 >> 3) & 7) + 3;
          goto LABEL_25;
        case 0xA0uLL:
        case 0xA1uLL:
        case 0xA2uLL:
        case 0xA3uLL:
        case 0xA4uLL:
        case 0xA5uLL:
        case 0xA6uLL:
        case 0xA7uLL:
        case 0xA8uLL:
        case 0xA9uLL:
        case 0xAAuLL:
        case 0xABuLL:
        case 0xACuLL:
        case 0xADuLL:
        case 0xAEuLL:
        case 0xAFuLL:
        case 0xB0uLL:
        case 0xB1uLL:
        case 0xB2uLL:
        case 0xB3uLL:
        case 0xB4uLL:
        case 0xB5uLL:
        case 0xB6uLL:
        case 0xB7uLL:
        case 0xB8uLL:
        case 0xB9uLL:
        case 0xBAuLL:
        case 0xBBuLL:
        case 0xBCuLL:
        case 0xBDuLL:
        case 0xBEuLL:
        case 0xBFuLL:
LABEL_48:
          *a1 = v1;
          a1[2] = v2;
          a1[9] = (unsigned __int8 *)v8;
          v5 = (v12 >> 3) & 3;
          if ( v4 <= v5 + 3 )
            return;
          v8 = *(_WORD *)(v1 + 1) >> 2;
          v21 = *(_WORD *)(v1 + 1) & 3 | (4 * (v12 & 7));
          v7 = 3;
          v6 = v21 + 3;
          goto LABEL_25;
        case 0xE0uLL:
LABEL_60:
          *a1 = v1;
          a1[2] = v2;
          a1[9] = (unsigned __int8 *)v8;
          if ( v4 <= 2 )
            return;
          v6 = 2;
          v5 = v1[1] + 16LL;
          goto LABEL_5;
        case 0xE1uLL:
        case 0xE2uLL:
        case 0xE3uLL:
        case 0xE4uLL:
        case 0xE5uLL:
        case 0xE6uLL:
        case 0xE7uLL:
        case 0xE8uLL:
        case 0xE9uLL:
        case 0xEAuLL:
        case 0xEBuLL:
        case 0xECuLL:
        case 0xEDuLL:
        case 0xEEuLL:
        case 0xEFuLL:
LABEL_59:
          *a1 = v1;
          a1[2] = v2;
          a1[9] = (unsigned __int8 *)v8;
          v5 = v12 & 0xF;
          v6 = 1;
          goto LABEL_5;
        case 0xF0uLL:
LABEL_57:
          *a1 = v1;
          a1[2] = v2;
          a1[9] = (unsigned __int8 *)v8;
          if ( v4 <= 2 )
            return;
          v23 = v1[1];
          v4 -= 2LL;
          v1 += 2;
          v6 = v23 + 16;
          goto LABEL_31;
        case 0xF1uLL:
        case 0xF2uLL:
        case 0xF3uLL:
        case 0xF4uLL:
        case 0xF5uLL:
        case 0xF6uLL:
        case 0xF7uLL:
        case 0xF8uLL:
        case 0xF9uLL:
        case 0xFAuLL:
        case 0xFBuLL:
        case 0xFCuLL:
        case 0xFDuLL:
        case 0xFEuLL:
        case 0xFFuLL:
LABEL_52:
          *a1 = v1;
          a1[2] = v2;
          a1[9] = (unsigned __int8 *)v8;
          if ( v4 <= 1 )
            return;
          ++v1;
          --v4;
          v6 = v12 & 0xF;
          if ( v6 + 7 > v3 || v8 <= 7 )
            goto LABEL_33;
          v14 = v2;
          if ( (v12 & 0xF) != 0 )
            goto LABEL_18;
          goto LABEL_21;
        case 0x100uLL:
patch_fixup_value:
          JUMPOUT(0x66E80);
      }
    }
    v8 = (unsigned __int64)a1[8];
    a1[7] = 0;
    a1[8] = 0;
    a1[6] = 0;
    if ( v3 < v6 + 7 || v8 <= 7 )
    {
      if ( v3 >= v6 )
      {
LABEL_35:
        v14 = &v2[v6];
        do
        {
          v18 = v2[-v8];
          *v2++ = v18;
        }
        while ( v14 != v2 );
        goto LABEL_21;
      }
      goto LABEL_65;
    }
LABEL_18:
    v13 = 0;
    do
    {
      *(_QWORD *)&v2[v13] = *(_QWORD *)&v2[v13 - v8];
      v13 += 8LL;
    }
    while ( v13 < v6 );
    v14 = &v2[v6];
    goto LABEL_21;
  }
  v7 = 0;
  v8 = (unsigned __int64)a1[8];
  a1[7] = 0;
  a1[8] = 0;
  a1[6] = 0;
  if ( v6 )
  {
LABEL_25:
    v16 = &v1[v7];
    v17 = v4 - v7;
    if ( v3 <= 3 || v17 <= 3 )
    {
      if ( v3 < v5 )
      {
        v27 = 0;
        if ( v3 )
        {
          do
          {
            v2[v27] = v16[v27];
            ++v27;
          }
          while ( v3 != v27 );
        }
        a1[8] = (unsigned __int8 *)v8;
        *a1 = &v16[v3];
        a1[2] = &v2[v3];
        a1[6] = (unsigned __int8 *)(v5 - v3);
        a1[7] = (unsigned __int8 *)v6;
        return;
      }
      if ( v5 )
      {
        for ( i = 0; i != v5; ++i )
          v2[i] = v16[i];
      }
    }
    else
    {
      *(_DWORD *)v2 = *(_DWORD *)v16;
    }
    v2 += v5;
    if ( v8 > v2 - a1[3] || !v8 )
      return;
    v3 -= v5;
    v1 = &v16[v5];
    v4 = v17 - v5;
LABEL_31:
    if ( v3 < v6 + 7 || v8 <= 7 )
    {
LABEL_33:
      if ( v6 <= v3 )
      {
        v14 = v2;
        if ( v6 )
          goto LABEL_35;
LABEL_21:
        v2 = v14;
        v3 -= v6;
        v12 = *v1;
        switch ( v12 )
        {
          case 0uLL:
          case 1uLL:
          case 2uLL:
          case 3uLL:
          case 4uLL:
          case 5uLL:
          case 8uLL:
          case 9uLL:
          case 0xAuLL:
          case 0xBuLL:
          case 0xCuLL:
          case 0xDuLL:
          case 0x10uLL:
          case 0x11uLL:
          case 0x12uLL:
          case 0x13uLL:
          case 0x14uLL:
          case 0x15uLL:
          case 0x18uLL:
          case 0x19uLL:
          case 0x1AuLL:
          case 0x1BuLL:
          case 0x1CuLL:
          case 0x1DuLL:
          case 0x20uLL:
          case 0x21uLL:
          case 0x22uLL:
          case 0x23uLL:
          case 0x24uLL:
          case 0x25uLL:
          case 0x28uLL:
          case 0x29uLL:
          case 0x2AuLL:
          case 0x2BuLL:
          case 0x2CuLL:
          case 0x2DuLL:
          case 0x30uLL:
          case 0x31uLL:
          case 0x32uLL:
          case 0x33uLL:
          case 0x34uLL:
          case 0x35uLL:
          case 0x38uLL:
          case 0x39uLL:
          case 0x3AuLL:
          case 0x3BuLL:
          case 0x3CuLL:
          case 0x3DuLL:
          case 0x40uLL:
          case 0x41uLL:
          case 0x42uLL:
          case 0x43uLL:
          case 0x44uLL:
          case 0x45uLL:
          case 0x48uLL:
          case 0x49uLL:
          case 0x4AuLL:
          case 0x4BuLL:
          case 0x4CuLL:
          case 0x4DuLL:
          case 0x50uLL:
          case 0x51uLL:
          case 0x52uLL:
          case 0x53uLL:
          case 0x54uLL:
          case 0x55uLL:
          case 0x58uLL:
          case 0x59uLL:
          case 0x5AuLL:
          case 0x5BuLL:
          case 0x5CuLL:
          case 0x5DuLL:
          case 0x60uLL:
          case 0x61uLL:
          case 0x62uLL:
          case 0x63uLL:
          case 0x64uLL:
          case 0x65uLL:
          case 0x68uLL:
          case 0x69uLL:
          case 0x6AuLL:
          case 0x6BuLL:
          case 0x6CuLL:
          case 0x6DuLL:
          case 0x80uLL:
          case 0x81uLL:
          case 0x82uLL:
          case 0x83uLL:
          case 0x84uLL:
          case 0x85uLL:
          case 0x88uLL:
          case 0x89uLL:
          case 0x8AuLL:
          case 0x8BuLL:
          case 0x8CuLL:
          case 0x8DuLL:
          case 0x90uLL:
          case 0x91uLL:
          case 0x92uLL:
          case 0x93uLL:
          case 0x94uLL:
          case 0x95uLL:
          case 0x98uLL:
          case 0x99uLL:
          case 0x9AuLL:
          case 0x9BuLL:
          case 0x9CuLL:
          case 0x9DuLL:
          case 0xC0uLL:
          case 0xC1uLL:
          case 0xC2uLL:
          case 0xC3uLL:
          case 0xC4uLL:
          case 0xC5uLL:
          case 0xC8uLL:
          case 0xC9uLL:
          case 0xCAuLL:
          case 0xCBuLL:
          case 0xCCuLL:
          case 0xCDuLL:
            goto LABEL_46;
          case 6uLL:
            goto LABEL_12;
          case 7uLL:
          case 0xFuLL:
          case 0x17uLL:
          case 0x1FuLL:
          case 0x27uLL:
          case 0x2FuLL:
          case 0x37uLL:
          case 0x3FuLL:
          case 0x47uLL:
          case 0x4FuLL:
          case 0x57uLL:
          case 0x5FuLL:
          case 0x67uLL:
          case 0x6FuLL:
          case 0x87uLL:
          case 0x8FuLL:
          case 0x97uLL:
          case 0x9FuLL:
          case 0xC7uLL:
          case 0xCFuLL:
            goto LABEL_50;
          case 0xEuLL:
          case 0x16uLL:
            goto LABEL_62;
          case 0x1EuLL:
          case 0x26uLL:
          case 0x2EuLL:
          case 0x36uLL:
          case 0x3EuLL:
          case 0x70uLL:
          case 0x71uLL:
          case 0x72uLL:
          case 0x73uLL:
          case 0x74uLL:
          case 0x75uLL:
          case 0x76uLL:
          case 0x77uLL:
          case 0x78uLL:
          case 0x79uLL:
          case 0x7AuLL:
          case 0x7BuLL:
          case 0x7CuLL:
          case 0x7DuLL:
          case 0x7EuLL:
          case 0x7FuLL:
          case 0xD0uLL:
          case 0xD1uLL:
          case 0xD2uLL:
          case 0xD3uLL:
          case 0xD4uLL:
          case 0xD5uLL:
          case 0xD6uLL:
          case 0xD7uLL:
          case 0xD8uLL:
          case 0xD9uLL:
          case 0xDAuLL:
          case 0xDBuLL:
          case 0xDCuLL:
          case 0xDDuLL:
          case 0xDEuLL:
          case 0xDFuLL:
            return;
          case 0x46uLL:
          case 0x4EuLL:
          case 0x56uLL:
          case 0x5EuLL:
          case 0x66uLL:
          case 0x6EuLL:
          case 0x86uLL:
          case 0x8EuLL:
          case 0x96uLL:
          case 0x9EuLL:
          case 0xC6uLL:
          case 0xCEuLL:
            goto LABEL_23;
          case 0xA0uLL:
          case 0xA1uLL:
          case 0xA2uLL:
          case 0xA3uLL:
          case 0xA4uLL:
          case 0xA5uLL:
          case 0xA6uLL:
          case 0xA7uLL:
          case 0xA8uLL:
          case 0xA9uLL:
          case 0xAAuLL:
          case 0xABuLL:
          case 0xACuLL:
          case 0xADuLL:
          case 0xAEuLL:
          case 0xAFuLL:
          case 0xB0uLL:
          case 0xB1uLL:
          case 0xB2uLL:
          case 0xB3uLL:
          case 0xB4uLL:
          case 0xB5uLL:
          case 0xB6uLL:
          case 0xB7uLL:
          case 0xB8uLL:
          case 0xB9uLL:
          case 0xBAuLL:
          case 0xBBuLL:
          case 0xBCuLL:
          case 0xBDuLL:
          case 0xBEuLL:
          case 0xBFuLL:
            goto LABEL_48;
          case 0xE0uLL:
            goto LABEL_60;
          case 0xE1uLL:
          case 0xE2uLL:
          case 0xE3uLL:
          case 0xE4uLL:
          case 0xE5uLL:
          case 0xE6uLL:
          case 0xE7uLL:
          case 0xE8uLL:
          case 0xE9uLL:
          case 0xEAuLL:
          case 0xEBuLL:
          case 0xECuLL:
          case 0xEDuLL:
          case 0xEEuLL:
          case 0xEFuLL:
            goto LABEL_59;
          case 0xF0uLL:
            goto LABEL_57;
          case 0xF1uLL:
          case 0xF2uLL:
          case 0xF3uLL:
          case 0xF4uLL:
          case 0xF5uLL:
          case 0xF6uLL:
          case 0xF7uLL:
          case 0xF8uLL:
          case 0xF9uLL:
          case 0xFAuLL:
          case 0xFBuLL:
          case 0xFCuLL:
          case 0xFDuLL:
          case 0xFEuLL:
          case 0xFFuLL:
            goto LABEL_52;
          case 0x100uLL:
            goto patch_fixup_value;
        }
      }
LABEL_65:
      v24 = v2;
      v25 = &v2[v3];
      if ( v3 )
      {
        do
        {
          v26 = v24[-v8];
          *v24++ = v26;
        }
        while ( v25 != v24 );
      }
      else
      {
        v25 = v2;
      }
      a1[8] = (unsigned __int8 *)v8;
      *a1 = v1;
      a1[2] = v25;
      a1[6] = 0;
      a1[7] = (unsigned __int8 *)(v6 - v3);
      return;
    }
    goto LABEL_18;
  }
LABEL_5:
  if ( v4 > v5 + v6 )
  {
    v9 = v4 - v6;
    v10 = &v1[v6];
    if ( v9 >= v5 + 7 && v3 >= v5 + 7 )
    {
      if ( v5 )
      {
        for ( j = 0; j < v5; j += 8LL )
          *(_QWORD *)&v2[j] = *(_QWORD *)&v10[j];
      }
      goto LABEL_11;
    }
    if ( v3 >= v5 )
    {
      if ( v5 )
      {
        for ( k = 0; k != v5; ++k )
          v2[k] = v10[k];
      }
LABEL_11:
      v1 = &v10[v5];
      v2 += v5;
      v3 -= v5;
      v4 = v9 - v5;
      v12 = *v1;
      switch ( v12 )
      {
        case 0uLL:
        case 1uLL:
        case 2uLL:
        case 3uLL:
        case 4uLL:
        case 5uLL:
        case 8uLL:
        case 9uLL:
        case 0xAuLL:
        case 0xBuLL:
        case 0xCuLL:
        case 0xDuLL:
        case 0x10uLL:
        case 0x11uLL:
        case 0x12uLL:
        case 0x13uLL:
        case 0x14uLL:
        case 0x15uLL:
        case 0x18uLL:
        case 0x19uLL:
        case 0x1AuLL:
        case 0x1BuLL:
        case 0x1CuLL:
        case 0x1DuLL:
        case 0x20uLL:
        case 0x21uLL:
        case 0x22uLL:
        case 0x23uLL:
        case 0x24uLL:
        case 0x25uLL:
        case 0x28uLL:
        case 0x29uLL:
        case 0x2AuLL:
        case 0x2BuLL:
        case 0x2CuLL:
        case 0x2DuLL:
        case 0x30uLL:
        case 0x31uLL:
        case 0x32uLL:
        case 0x33uLL:
        case 0x34uLL:
        case 0x35uLL:
        case 0x38uLL:
        case 0x39uLL:
        case 0x3AuLL:
        case 0x3BuLL:
        case 0x3CuLL:
        case 0x3DuLL:
        case 0x40uLL:
        case 0x41uLL:
        case 0x42uLL:
        case 0x43uLL:
        case 0x44uLL:
        case 0x45uLL:
        case 0x48uLL:
        case 0x49uLL:
        case 0x4AuLL:
        case 0x4BuLL:
        case 0x4CuLL:
        case 0x4DuLL:
        case 0x50uLL:
        case 0x51uLL:
        case 0x52uLL:
        case 0x53uLL:
        case 0x54uLL:
        case 0x55uLL:
        case 0x58uLL:
        case 0x59uLL:
        case 0x5AuLL:
        case 0x5BuLL:
        case 0x5CuLL:
        case 0x5DuLL:
        case 0x60uLL:
        case 0x61uLL:
        case 0x62uLL:
        case 0x63uLL:
        case 0x64uLL:
        case 0x65uLL:
        case 0x68uLL:
        case 0x69uLL:
        case 0x6AuLL:
        case 0x6BuLL:
        case 0x6CuLL:
        case 0x6DuLL:
        case 0x80uLL:
        case 0x81uLL:
        case 0x82uLL:
        case 0x83uLL:
        case 0x84uLL:
        case 0x85uLL:
        case 0x88uLL:
        case 0x89uLL:
        case 0x8AuLL:
        case 0x8BuLL:
        case 0x8CuLL:
        case 0x8DuLL:
        case 0x90uLL:
        case 0x91uLL:
        case 0x92uLL:
        case 0x93uLL:
        case 0x94uLL:
        case 0x95uLL:
        case 0x98uLL:
        case 0x99uLL:
        case 0x9AuLL:
        case 0x9BuLL:
        case 0x9CuLL:
        case 0x9DuLL:
        case 0xC0uLL:
        case 0xC1uLL:
        case 0xC2uLL:
        case 0xC3uLL:
        case 0xC4uLL:
        case 0xC5uLL:
        case 0xC8uLL:
        case 0xC9uLL:
        case 0xCAuLL:
        case 0xCBuLL:
        case 0xCCuLL:
        case 0xCDuLL:
          goto LABEL_46;
        case 6uLL:
          goto LABEL_12;
        case 7uLL:
        case 0xFuLL:
        case 0x17uLL:
        case 0x1FuLL:
        case 0x27uLL:
        case 0x2FuLL:
        case 0x37uLL:
        case 0x3FuLL:
        case 0x47uLL:
        case 0x4FuLL:
        case 0x57uLL:
        case 0x5FuLL:
        case 0x67uLL:
        case 0x6FuLL:
        case 0x87uLL:
        case 0x8FuLL:
        case 0x97uLL:
        case 0x9FuLL:
        case 0xC7uLL:
        case 0xCFuLL:
          goto LABEL_50;
        case 0xEuLL:
        case 0x16uLL:
          goto LABEL_62;
        case 0x1EuLL:
        case 0x26uLL:
        case 0x2EuLL:
        case 0x36uLL:
        case 0x3EuLL:
        case 0x70uLL:
        case 0x71uLL:
        case 0x72uLL:
        case 0x73uLL:
        case 0x74uLL:
        case 0x75uLL:
        case 0x76uLL:
        case 0x77uLL:
        case 0x78uLL:
        case 0x79uLL:
        case 0x7AuLL:
        case 0x7BuLL:
        case 0x7CuLL:
        case 0x7DuLL:
        case 0x7EuLL:
        case 0x7FuLL:
        case 0xD0uLL:
        case 0xD1uLL:
        case 0xD2uLL:
        case 0xD3uLL:
        case 0xD4uLL:
        case 0xD5uLL:
        case 0xD6uLL:
        case 0xD7uLL:
        case 0xD8uLL:
        case 0xD9uLL:
        case 0xDAuLL:
        case 0xDBuLL:
        case 0xDCuLL:
        case 0xDDuLL:
        case 0xDEuLL:
        case 0xDFuLL:
          return;
        case 0x46uLL:
        case 0x4EuLL:
        case 0x56uLL:
        case 0x5EuLL:
        case 0x66uLL:
        case 0x6EuLL:
        case 0x86uLL:
        case 0x8EuLL:
        case 0x96uLL:
        case 0x9EuLL:
        case 0xC6uLL:
        case 0xCEuLL:
          goto LABEL_23;
        case 0xA0uLL:
        case 0xA1uLL:
        case 0xA2uLL:
        case 0xA3uLL:
        case 0xA4uLL:
        case 0xA5uLL:
        case 0xA6uLL:
        case 0xA7uLL:
        case 0xA8uLL:
        case 0xA9uLL:
        case 0xAAuLL:
        case 0xABuLL:
        case 0xACuLL:
        case 0xADuLL:
        case 0xAEuLL:
        case 0xAFuLL:
        case 0xB0uLL:
        case 0xB1uLL:
        case 0xB2uLL:
        case 0xB3uLL:
        case 0xB4uLL:
        case 0xB5uLL:
        case 0xB6uLL:
        case 0xB7uLL:
        case 0xB8uLL:
        case 0xB9uLL:
        case 0xBAuLL:
        case 0xBBuLL:
        case 0xBCuLL:
        case 0xBDuLL:
        case 0xBEuLL:
        case 0xBFuLL:
          goto LABEL_48;
        case 0xE0uLL:
          goto LABEL_60;
        case 0xE1uLL:
        case 0xE2uLL:
        case 0xE3uLL:
        case 0xE4uLL:
        case 0xE5uLL:
        case 0xE6uLL:
        case 0xE7uLL:
        case 0xE8uLL:
        case 0xE9uLL:
        case 0xEAuLL:
        case 0xEBuLL:
        case 0xECuLL:
        case 0xEDuLL:
        case 0xEEuLL:
        case 0xEFuLL:
          goto LABEL_59;
        case 0xF0uLL:
          goto LABEL_57;
        case 0xF1uLL:
        case 0xF2uLL:
        case 0xF3uLL:
        case 0xF4uLL:
        case 0xF5uLL:
        case 0xF6uLL:
        case 0xF7uLL:
        case 0xF8uLL:
        case 0xF9uLL:
        case 0xFAuLL:
        case 0xFBuLL:
        case 0xFCuLL:
        case 0xFDuLL:
        case 0xFEuLL:
        case 0xFFuLL:
          goto LABEL_52;
        case 0x100uLL:
          goto patch_fixup_value;
      }
    }
    v19 = 0;
    if ( v3 )
    {
      do
      {
        v2[v19] = v10[v19];
        ++v19;
      }
      while ( v3 != v19 );
    }
    a1[8] = (unsigned __int8 *)v8;
    *a1 = &v10[v3];
    a1[2] = &v2[v3];
    a1[6] = (unsigned __int8 *)(v5 - v3);
    a1[7] = 0;
  }
}
