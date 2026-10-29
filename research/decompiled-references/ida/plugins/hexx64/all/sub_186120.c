__int64 __fastcall sub_186120(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        _BYTE *a5,
        unsigned int a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int64 v10; // rbp
  char *v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // ebx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  int v23; // ecx
  int v24; // edx
  __int64 v25; // rsi
  int v26; // ebx
  int v27; // eax
  int v28; // eax
  __int64 v29; // rcx
  int j; // r13d
  __int64 v31; // rdx
  __m128i v32; // xmm0
  __int64 v33; // rbp
  char *v34; // r15
  char v35; // dl
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // ecx
  int v39; // ecx
  __m128i *v40; // r15
  unsigned __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rcx
  unsigned __int64 *v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned __int64 *v49; // rsi
  _DWORD *v50; // rdi
  __int64 v51; // [rsp+8h] [rbp-A0h]
  int v52; // [rsp+14h] [rbp-94h]
  __int64 i; // [rsp+18h] [rbp-90h]
  __int64 v56; // [rsp+38h] [rbp-70h]
  __m128i si128; // [rsp+40h] [rbp-68h] BYREF
  __int64 *v58; // [rsp+50h] [rbp-58h] BYREF
  __int128 v59; // [rsp+58h] [rbp-50h]
  unsigned __int64 v60; // [rsp+68h] [rbp-40h]

  v60 = __readfsqword(0x28u);
  v10 = a6;
  switch ( a6 )
  {
    case 2u:
      v11 = "memset";
      break;
    case 5u:
      v11 = "memcpy";
      break;
    case 6u:
      v11 = "strcpy";
      break;
    case 0x22u:
      v11 = "wmemcpy";
      break;
    case 0x23u:
      v11 = "wmemset";
      break;
    default:
      v11 = "wcscpy";
      break;
  }
  v12 = sub_335B10(*(_QWORD *)(a1 + 64), *(_QWORD *)(a2 + 24), (__int64)v11, (__int64)(a5 + 24), a4, (__int64)a5, 1);
  v13 = *(_QWORD *)(v12 + 72);
  v56 = v13;
  *(_DWORD *)(v13 + 284) = v10;
  if ( (*(_BYTE *)(a3 + 136) & 0x20) != 0 )
  {
    *(_DWORD *)(v13 + 280) |= 0x80u;
    if ( *a5 == 10 )
      goto LABEL_5;
  }
  else if ( *a5 == 10 )
  {
    goto LABEL_5;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
  sub_316BB0((__int64 *)(v13 + 216), &si128, *(double *)si128.m128i_i64, a8);
  si128 = 0u;
  v58 = nullptr;
  v59 = 0;
  v58 = (__int64 *)qvector_reserve((__int64)&v58, 0, 1, 16);
  a7 = (__m128)_mm_load_si128((const __m128i *)&xmmword_424800);
  *(__m128 *)&v58[2 * v59] = a7;
  *(_QWORD *)&v59 = v59 + 1;
  sub_64280((__int64 *)(v56 + 136), si128.m128i_i64, *(double *)a7.m128_u64);
  sub_316CB0((__int64 *)(v56 + 152), &v58, v45, v46);
  if ( v58 )
  {
    *(_QWORD *)&v59 = 0;
    qfree((__int64)v58);
  }
  qfree(si128.m128i_i64[0]);
  sub_F7C10((int *)v56, a1, *(double *)a7.m128_u64, (__m128)0LL);
LABEL_5:
  sub_11D890(v12, a2);
  if ( v12 )
  {
    sub_11CDA0(v12 + 64);
    sub_11CDA0(v12 + 48);
    sub_11CDA0(v12 + 32);
    j__qfree(v12);
  }
  v14 = 0x1000000040LL;
  v15 = *(_QWORD *)(a3 + 48);
  if ( _bittest64(&v14, v10) )
  {
    v23 = *(_DWORD *)(a3 + 128);
    if ( v23 != -1 )
    {
      v24 = *(_DWORD *)(a3 + 124);
      v25 = 1;
      if ( v24 <= 0 )
        v24 = 1;
      v26 = v24 + v23;
      if ( *(_DWORD *)(a3 + 4) > v24 + v23 )
      {
        if ( v15 )
        {
          v16 = *(_QWORD *)(a3 + 40);
          v51 = *(_QWORD *)(v16 + 8 * v15 - 8);
          v27 = *(_DWORD *)v51;
          if ( *(_DWORD *)v51 == 4 || v27 == 1 )
          {
            v28 = *(_DWORD *)(v51 + 36);
LABEL_26:
            v52 = v28 - v26;
            if ( v28 != v26 )
            {
              for ( i = v51; ; i = v33 )
              {
                for ( j = round_down_power2(); ; j /= 2 )
                {
                  v31 = (unsigned int)(v26 >> 31);
                  if ( !(v26 % j) )
                    break;
                }
                v32 = 0;
                LODWORD(v31) = v26 % j;
                v33 = j__qalloc_or_throw(80, v25, v31, v29);
                v34 = (char *)(v33 + 32);
                *(_QWORD *)(v33 + 32) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v33 + 40) = 0;
                *(_QWORD *)(v33 + 48) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v33 + 56) = 0;
                *(_QWORD *)(v33 + 64) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v33 + 72) = 0;
                *(_OWORD *)(v33 + 8) = 0;
                sub_1253A0(v33, v51);
                if ( *(_DWORD *)v33 == 2 )
                {
                  if ( !(unsigned __int8)sub_12CBA0(
                                           v33,
                                           *(unsigned __int64 **)(*(_QWORD *)(a1 + 480) + 112LL),
                                           v26,
                                           (__m128i)0LL) )
                  {
                    if ( !under_debugger )
                      sub_383060(0xCD09u, 0.0);
                    goto LABEL_80;
                  }
                }
                else
                {
                  v35 = sub_11FD80(v34, si128.m128i_i64, 0);
                  v37 = *(_QWORD *)(a1 + 480);
                  if ( v35 )
                  {
                    v38 = v26;
                    if ( *(_BYTE *)(v37 + 145) )
                      v38 = *(_DWORD *)(v33 + 36) - j - v26;
                    v39 = 8 * v38;
                    v40 = *(__m128i **)(v33 + 40);
                    v41 = 0;
                    if ( (unsigned __int64)v39 <= 0x3F )
                      v41 = (unsigned __int64)si128.m128i_i64[0] >> v39;
                    v42 = sub_32ABC0(v41, j, 0);
                    v32 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v42, (__m128i)(unsigned __int64)v42);
                    v40[1] = v32;
                  }
                  else
                  {
                    v49 = *(unsigned __int64 **)(v37 + 112);
                    if ( *(_BYTE *)(v33 + 32) == 4 && (v50 = *(_DWORD **)(v33 + 40), *v50 == 2) )
                    {
                      if ( !(unsigned __int8)sub_12CBA0((__int64)v50, v49, v26, (__m128i)0LL) )
                      {
                        if ( !under_debugger )
                          sub_383060(0xCD15u, 0.0);
                        goto LABEL_80;
                      }
                      *(_DWORD *)(*(_QWORD *)(v33 + 40) + 68LL) = j;
                    }
                    else if ( !(unsigned __int8)sub_126F10((int *)v34, v49, v26, v36, 0.0) )
                    {
                      if ( !under_debugger )
                        sub_383060(0xCD0Au, 0.0);
                      goto LABEL_80;
                    }
                  }
                  *(_DWORD *)(v33 + 36) = j;
                }
                v44 = *(unsigned __int64 **)(*(_QWORD *)(a1 + 480) + 112LL);
                if ( *(_DWORD *)v51 == 1 )
                {
                  sub_A2B00((__int64)&si128, v44, *(_QWORD *)(v51 + 24), v51 + 64, v26, 1, v32);
                  sub_125180((unsigned __int8 *)(v33 + 64), (unsigned __int8 *)&si128);
                  sub_11CDA0((__int64)&si128);
                }
                else
                {
                  if ( !(unsigned __int8)sub_126F10((int *)(v33 + 64), v44, v26, v43, *(double *)v32.m128i_i64) )
                  {
                    if ( !under_debugger )
                      sub_383060(0xCD0Bu, *(double *)v32.m128i_i64);
                    goto LABEL_80;
                  }
                  *(_DWORD *)(v33 + 68) = j;
                }
                v25 = v33;
                v26 += j;
                sub_A3160(a1, (_QWORD *)v33, i, *(double *)v32.m128i_i64);
                v52 -= j;
                if ( !v52 )
                {
                  v15 = *(_QWORD *)(a3 + 48);
                  goto LABEL_8;
                }
              }
            }
            goto LABEL_10;
          }
          if ( v27 == 2 )
          {
            v28 = *(_DWORD *)(v51 + 68);
            goto LABEL_26;
          }
          if ( !under_debugger )
            sub_383060(0xCD08u, *(double *)a7.m128_u64);
        }
        else if ( !under_debugger )
        {
          sub_383060(0xCD0Cu, *(double *)a7.m128_u64);
        }
LABEL_80:
        BUG();
      }
    }
  }
LABEL_8:
  if ( !v15 )
    goto LABEL_13;
  v16 = *(_QWORD *)(a3 + 40);
LABEL_10:
  v17 = 0;
  v18 = 0;
  while ( 1 )
  {
    ++v17;
    sub_11D5A0(*(_QWORD *)(v16 + 8 * v18));
    v18 = v17;
    if ( (unsigned __int64)v17 >= *(_QWORD *)(a3 + 48) )
      break;
    v16 = *(_QWORD *)(a3 + 40);
  }
LABEL_13:
  v19 = *(_DWORD *)(a1 + 24);
  BYTE1(v19) &= ~2u;
  LOBYTE(v19) = v19 | 0x80;
  *(_DWORD *)(a1 + 24) = v19;
  v20 = *(_QWORD *)(v56 + 24);
  if ( *(_BYTE *)v20 == 10 )
  {
    v48 = *(_QWORD *)(v20 + 8);
    if ( *(_BYTE *)v48 == 5 )
      sub_18D890(*(_QWORD *)(a1 + 64), *(_QWORD *)(*(_QWORD *)(v48 + 8) + 8LL));
  }
  if ( *(_BYTE *)(a2 + 64) == 8 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 72) + 284LL) == 2 )
      return v60 - __readfsqword(0x28u);
    v21 = *(_QWORD *)(v56 + 24);
    if ( *(_BYTE *)(v21 + 80) != 10 )
      return v60 - __readfsqword(0x28u);
  }
  else
  {
    v21 = *(_QWORD *)(v56 + 24);
    if ( *(_BYTE *)(v21 + 80) != 10 )
      return v60 - __readfsqword(0x28u);
  }
  v47 = *(_QWORD *)(v21 + 88);
  if ( *(_BYTE *)v47 != 5 )
    return v60 - __readfsqword(0x28u);
  return sub_18D890(*(_QWORD *)(a1 + 64), *(_QWORD *)(*(_QWORD *)(v47 + 8) + 8LL));
}

