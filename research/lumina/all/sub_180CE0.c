__int64 __fastcall sub_180CE0(__m128i *a1)
{
  __int8 v2; // dl
  char *i; // rax
  char v4; // dl
  unsigned int v5; // edi
  __m128i v6; // xmm0
  __int8 v7; // dl
  char v8; // dl
  __int32 v10; // edx
  char v11; // cl
  int v12; // [rsp+4h] [rbp-24h] BYREF
  void *ptr; // [rsp+8h] [rbp-20h]

  ptr = (void *)__readfsqword(0x28u);
  v2 = a1[9].m128i_i8[0];
  for ( i = (char *)a1->m128i_i64[1]; ; i = (char *)a1->m128i_i64[1] )
  {
    if ( !v2 )
      goto LABEL_3;
LABEL_18:
    while ( 2 )
    {
      v8 = *i;
      do
      {
        ++i;
        if ( v8 != 42 )
        {
          if ( !v8 )
            goto LABEL_9;
          goto LABEL_17;
        }
        a1->m128i_i64[1] = (__int64)i;
        v8 = *i;
        if ( *i == 47 )
        {
          if ( (a1[40].m128i_i8[12] & 1) != 0 )
            goto LABEL_25;
LABEL_23:
          ++i;
LABEL_17:
          a1->m128i_i64[1] = (__int64)i;
          goto LABEL_18;
        }
      }
      while ( v8 != 41 );
      if ( (a1[40].m128i_i8[12] & 2) == 0 )
        goto LABEL_23;
LABEL_25:
      ++i;
      a1[9].m128i_i8[0] = 0;
      a1->m128i_i64[1] = (__int64)i;
LABEL_3:
      while ( 1 )
      {
        v4 = *i;
        if ( (unsigned __int8)(*i - 9) > 4u )
          break;
LABEL_15:
        a1->m128i_i64[1] = (__int64)++i;
      }
LABEL_4:
      if ( v4 == 32 )
        goto LABEL_15;
      if ( v4 == 59 )
      {
        v5 = a1[40].m128i_i32[3] & 8;
        if ( !v5 )
          return v5;
      }
      else
      {
        if ( v4 == 47 )
        {
          v10 = a1[40].m128i_i32[3];
          if ( (v10 & 1) == 0 )
            return 0;
          v11 = i[1];
          if ( v11 == 42 )
            goto LABEL_37;
        }
        else
        {
          if ( v4 != 40 )
          {
            if ( v4 )
              return 0;
            break;
          }
          v10 = a1[40].m128i_i32[3];
          v5 = v10 & 2;
          if ( (v10 & 2) == 0 )
            return v5;
          v11 = i[1];
          if ( v11 == 42 )
          {
LABEL_37:
            a1[9].m128i_i8[0] = 1;
            continue;
          }
        }
        if ( v11 != 47 )
          return 0;
        v5 = v10 & 4;
        if ( (v10 & 4) == 0 )
          return v5;
      }
      break;
    }
LABEL_9:
    if ( !a1[4].m128i_i64[0] )
      break;
    sub_17D2A0((__int64)a1);
    v2 = a1[9].m128i_i8[0];
  }
  a1[21].m128i_i8[0] = 0;
  i = (char *)sub_180020((__int64)a1, &v12);
  v5 = v12;
  v6 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)i, (__m128i)(unsigned __int64)i);
  switch ( v12 )
  {
    case -1:
      return 34;
    case 34:
      return v5;
    case 0:
      v7 = a1[9].m128i_i8[0];
      a1[1].m128i_i64[0] = (__int64)i;
      a1[21].m128i_i8[0] = 1;
      *a1 = v6;
      if ( v7 )
        goto LABEL_18;
      v4 = *i;
      if ( (unsigned __int8)(*i - 9) <= 4u )
        goto LABEL_15;
      goto LABEL_4;
  }
  return sub_18FA40((unsigned int)v12);
}
