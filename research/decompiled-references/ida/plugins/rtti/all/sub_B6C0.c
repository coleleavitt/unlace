__int64 __fastcall sub_B6C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  char byte; // bl
  __int64 i; // r13
  int v8; // ebp
  int v9; // ebp
  char v10; // al
  int v11; // ebp
  __int64 v12; // rax
  __int64 v13; // r13
  char j; // al
  char v15; // al
  char v16; // cl
  char v17; // al
  int v18; // ebx
  char *v19; // rbp
  size_t v20; // rax
  size_t v21; // r15
  __int64 v22; // rbx
  size_t v23; // r8
  size_t v24; // rdx
  __int64 v25; // rdx
  char *v26; // rcx
  __m128i v27; // xmm1
  __m128 v28; // xmm0
  char *v29; // rax
  int v30; // [rsp+Ch] [rbp-8Ch]
  __int64 v31; // [rsp+10h] [rbp-88h]
  __int64 v32; // [rsp+10h] [rbp-88h]
  size_t v33; // [rsp+10h] [rbp-88h]
  size_t v34; // [rsp+18h] [rbp-80h]
  char *s; // [rsp+20h] [rbp-78h] BYREF
  __m128i v36; // [rsp+28h] [rbp-70h] BYREF
  char *v37; // [rsp+40h] [rbp-58h] BYREF
  __int128 v38; // [rsp+48h] [rbp-50h]
  unsigned __int64 v39; // [rsp+58h] [rbp-40h]

  v3 = 0;
  v39 = __readfsqword(0x28u);
  if ( !(unsigned __int8)is_loaded() )
    return v3;
  s = 0;
  v36 = 0;
  v30 = 0;
  byte = get_byte();
  if ( byte == 42 )
  {
    ++a3;
    v30 = 1;
    byte = get_byte();
  }
  for ( i = a3; byte == 90; byte = get_byte() )
    ++i;
  v8 = i + 10;
  while ( v8 != (_DWORD)i )
  {
    if ( byte != 80 )
      goto LABEL_15;
    ++i;
    byte = get_byte();
    if ( byte <= 32 )
      goto LABEL_11;
  }
  if ( byte == 80 )
    goto LABEL_11;
LABEL_15:
  if ( byte != 82 || (++i, v15 = get_byte(), byte = v15, v15 > 32) && v15 != 82 )
  {
    v9 = 5;
    if ( byte == 83 )
    {
      while ( (unsigned __int8)get_byte() == 116 )
      {
        i += 2;
        --v9;
        byte = get_byte();
        if ( byte != 83 || !v9 )
          goto LABEL_22;
      }
      goto LABEL_11;
    }
LABEL_22:
    if ( byte > 48 && (byte <= 57 || byte == 78) )
    {
      v10 = byte;
      if ( byte != 78 )
        goto LABEL_26;
      v10 = get_byte();
      v16 = v10;
      if ( v10 == 83 )
      {
        if ( (unsigned __int8)get_byte() != 116 )
          goto LABEL_11;
        i += 3;
        v10 = get_byte();
        v16 = v10;
      }
      else if ( v10 == 75 )
      {
        i += 2;
        v10 = get_byte();
        v16 = v10;
      }
      else
      {
        ++i;
      }
      if ( (unsigned __int8)(v16 - 49) <= 8u )
      {
LABEL_26:
        v11 = (char)(v10 - 48);
        v12 = i + 5;
        v13 = i + 1;
        v31 = v12;
        for ( j = get_byte(); j > 47; j = get_byte() )
        {
          if ( j > 57 )
          {
            v32 = v13 + v11;
            v17 = get_byte();
            if ( (byte == 78 || v17 != 0) && v17 <= 32 )
              break;
            v18 = 0;
            if ( v11 > 0 )
            {
              while ( (char)get_byte() > 32 )
              {
                ++v18;
                ++v13;
                if ( v18 == 3 || v11 <= v18 )
                  goto LABEL_47;
              }
              break;
            }
LABEL_47:
            if ( !(unsigned __int8)sub_FF50(a1, &s, a3) )
              break;
            if ( (unsigned __int64)(v36.m128i_i64[0] == 0) + v36.m128i_i64[0] - 1 < v32 - a3 )
              break;
            v19 = s;
            if ( !(unsigned __int8)sub_10140(a1, s) )
              break;
            v37 = 0;
            v38 = 0;
            v37 = (char *)qvector_reserve();
            *(_QWORD *)&v38 = 5;
            strcpy(v37, "_ZTS");
            if ( v19 )
            {
              v20 = strlen(v19);
              v21 = v20;
              v22 = ((_QWORD)v38 == 0) + (_QWORD)v38 - 1LL;
              v23 = v20 + v22;
              v24 = v20 + ((_QWORD)v38 == 0) + (_QWORD)v38;
              if ( *((_QWORD *)&v38 + 1) < v24 )
              {
                v34 = v20 + v22;
                v33 = v20 + ((_QWORD)v38 == 0) + (_QWORD)v38;
                v29 = (char *)qvector_reserve();
                v23 = v34;
                v24 = v33;
                v37 = v29;
              }
              *(_QWORD *)&v38 = v24;
              v37[v23] = 0;
              memmove(&v37[v22], v19, v21);
            }
            if ( (unsigned __int8)sub_101D0(&v37, 1610612736) )
            {
              v25 = 0;
              if ( v36.m128i_i64[0] )
                v25 = v36.m128i_i64[0] - 1;
              if ( a2 )
              {
                v26 = *(char **)a2;
                v27 = _mm_loadu_si128((const __m128i *)(a2 + 8));
                v28 = _mm_loadh_ps((const double *)&v36.m128i_i64[1]);
                *(_QWORD *)a2 = s;
                s = v26;
                *(__m128 *)(a2 + 8) = v28;
                v36 = v27;
              }
              v3 = v25 + v30;
            }
            else
            {
              v3 = 0;
            }
            if ( v37 )
            {
              *(_QWORD *)&v38 = 0;
              qfree();
            }
            goto LABEL_12;
          }
          if ( v13 == v31 )
            break;
          ++v13;
          v11 = (unsigned __int8)j + 10 * v11 - 48;
        }
      }
    }
  }
LABEL_11:
  v3 = 0;
LABEL_12:
  if ( s )
  {
    v36.m128i_i64[0] = 0;
    qfree();
  }
  return v3;
}
