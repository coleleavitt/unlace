__int64 __fastcall sub_871F0(__int64 a1, __int64 a2, __m128 a3)
{
  int v5; // eax
  int v6; // r14d
  unsigned __int8 *v7; // rdx
  int v8; // eax
  int v9; // eax
  _QWORD *v10; // rbx
  _QWORD *v11; // r13
  int v13; // eax
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  int v23; // eax
  int v24; // ebx
  __int64 v25; // rbx
  unsigned __int64 v26; // r13
  char v27; // bl
  int v28; // eax
  int v29; // edx
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // r14
  unsigned __int64 v33; // r15
  unsigned __int64 v34; // rbx
  __int64 *v35; // rdi
  __int64 v36; // rax
  __int64 v37; // r14
  __int64 v38; // rbx
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // r12
  __int64 v41; // r12
  __int64 v42; // rdi
  int v43; // eax
  unsigned __int64 v44; // r15
  unsigned __int64 v45; // rax
  char *v46; // rsi
  __int64 v47; // rax
  __int64 v48; // r13
  __int64 *v49; // rbx
  __int64 v50; // rdi
  __int64 v51; // rdi
  __m128i v52; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v53; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v54; // [rsp+18h] [rbp-A0h]
  __int64 v55; // [rsp+28h] [rbp-90h]
  __int128 v56; // [rsp+30h] [rbp-88h]
  __int64 v57; // [rsp+40h] [rbp-78h] BYREF
  __m128i v58; // [rsp+48h] [rbp-70h] BYREF
  __int64 v59; // [rsp+58h] [rbp-60h]
  __int128 v60; // [rsp+60h] [rbp-58h]
  unsigned __int64 v61; // [rsp+78h] [rbp-40h]

  v61 = __readfsqword(0x28u);
  v5 = sub_7CD20((_QWORD *)a2, *(double *)a3.m128_u64);
  *(_DWORD *)(a1 + 284) = v5;
  if ( v5 != 13 )
  {
    v6 = *(_DWORD *)(a2 + 40);
    *(_QWORD *)a1 = sub_7CFC0(a2, 1u, *(double *)a3.m128_u64);
    *(_DWORD *)(a1 + 8) = sub_7CD20((_QWORD *)a2, *(double *)a3.m128_u64);
    *(_DWORD *)(a1 + 12) = sub_7CD20((_QWORD *)a2, *(double *)a3.m128_u64);
    *(_DWORD *)(a1 + 16) = sub_7CD20((_QWORD *)a2, *(double *)a3.m128_u64);
    if ( *(_DWORD *)(a2 + 48) > 0xAu )
    {
      v8 = sub_7CD20((_QWORD *)a2, *(double *)a3.m128_u64);
    }
    else
    {
      v7 = *(unsigned __int8 **)a2;
      if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
        sub_7A4F0(*(double *)a3.m128_u64);
      v8 = *v7;
      *(_QWORD *)a2 = v7 + 1;
    }
    *(_DWORD *)(a1 + 20) = v8;
    v9 = sub_7D4F0((_QWORD *)a2, *(double *)a3.m128_u64);
    if ( v9 >= 0 )
    {
      sub_82440((__int64 *)(a1 + 24), v9);
      v10 = *(_QWORD **)(a1 + 24);
      v11 = &v10[10 * *(_QWORD *)(a1 + 32)];
      if ( v11 == v10 )
      {
LABEL_12:
        v13 = sub_7D4F0((_QWORD *)a2, *(double *)a3.m128_u64);
        if ( v13 >= 0 )
        {
          v16 = *(_QWORD *)(a1 + 56);
          v17 = v13;
          if ( v13 != v16 )
          {
            v18 = *(_QWORD *)(a1 + 48);
            *(_QWORD *)&v54 = 0;
            v53 = 0xFFFFFFFF00000000LL;
            if ( v13 < v16 )
            {
              v44 = v13;
              while ( 1 )
              {
                v45 = v44++;
                sub_11CDA0(16 * v45 + v18);
                if ( v44 >= v16 )
                  break;
                v18 = *(_QWORD *)(a1 + 48);
              }
              *(_QWORD *)(a1 + 56) = v17;
            }
            else
            {
              v19 = *(_QWORD *)(a1 + 64);
              if ( (unsigned __int64)&v53 < v18 || (v14 = v18 + 16 * v19, (unsigned __int64)&v53 >= v14) )
              {
                if ( v19 < v17 )
                {
                  *(_QWORD *)(a1 + 48) = qvector_reserve(a1 + 48, v18, v17, 16);
                  v16 = *(_QWORD *)(a1 + 56);
                }
                while ( v16 < v17 )
                  sub_123A40(*(_QWORD *)(a1 + 48) + 16 * v16++, (unsigned __int8 *)&v53, v14, v15);
                *(_QWORD *)(a1 + 56) = v17;
              }
              else
              {
                v52.m128i_i64[0] = a1 + 48;
                sub_123A40((__int64)&v57, (unsigned __int8 *)&v53, v14, v15);
                if ( *(_QWORD *)(a1 + 64) < v17 )
                  *(_QWORD *)(a1 + 48) = qvector_reserve(v52.m128i_i64[0], *(_QWORD *)(a1 + 48), v17, 16);
                v22 = *(_QWORD *)(a1 + 56);
                if ( v22 < v17 )
                {
                  do
                  {
                    v52.m128i_i64[0] = v22;
                    sub_123A40(*(_QWORD *)(a1 + 48) + 16 * v22, (unsigned __int8 *)&v57, v20, v21);
                    v22 = v52.m128i_i64[0] + 1;
                  }
                  while ( v17 != v52.m128i_i64[0] + 1 );
                }
                *(_QWORD *)(a1 + 56) = v17;
                sub_11CDA0((__int64)&v57);
              }
            }
            sub_11CDA0((__int64)&v53);
            v16 = *(_QWORD *)(a1 + 56);
          }
          v25 = *(_QWORD *)(a1 + 48);
          v26 = v25 + 16 * v16;
          if ( v26 == v25 )
          {
LABEL_35:
            sub_7D2C0((unsigned __int8 **)a2, (_BYTE *)(a1 + 72), *(double *)a3.m128_u64);
            if ( !(unsigned __int8)extract_argloc() )
              sub_7A530(*(double *)a3.m128_u64);
            if ( (unsigned __int8)sub_7E8A0((__int64 *)(a1 + 96), (unsigned __int64 *)a2, a3) )
            {
              v27 = sub_7A640(v6, 3, 0x88u);
              if ( (!v27 || (v27 = sub_7E8A0((__int64 *)(a1 + 136), (unsigned __int64 *)a2, a3)) != 0)
                && (!(unsigned __int8)sub_7A640(v6, 3, 0xB0u)
                 || (unsigned __int8)sub_7E8A0((__int64 *)(a1 + 176), (unsigned __int64 *)a2, a3))
                && (!(unsigned __int8)sub_7A640(v6, 3, 0xD8u)
                 || (unsigned __int8)sub_7E080((__int64 *)(a1 + 216), a2, a3))
                && (unsigned __int8)sub_7E8A0((__int64 *)(a1 + 240), (unsigned __int64 *)a2, a3) )
              {
                v28 = sub_7CD20((_QWORD *)a2, *(double *)a3.m128_u64);
                v29 = v28;
                if ( !v27 )
                {
                  BYTE1(v29) = BYTE1(v28) | 2;
                  v28 = v29;
                }
                *(_DWORD *)(a1 + 280) = v28;
                v30 = sub_7D4F0((_QWORD *)a2, *(double *)a3.m128_u64);
                v32 = v30;
                if ( v30 >= 0 )
                {
                  v33 = *(_QWORD *)(a1 + 296);
                  if ( v30 != v33 )
                  {
                    a3.m128_u64[0] = 0;
                    v34 = *(_QWORD *)(a1 + 288);
                    v53 = 0;
                    v55 = 0;
                    v54 = 0;
                    v56 = 0;
                    if ( v30 < v33 )
                    {
                      v48 = v30;
                      while ( 1 )
                      {
                        v49 = (__int64 *)(48 * v48 + v34);
                        v50 = v49[3];
                        if ( v50 )
                        {
                          v49[4] = 0;
                          qfree(v50);
                        }
                        v51 = *v49;
                        if ( *v49 )
                        {
                          v49[1] = 0;
                          qfree(v51);
                        }
                        if ( ++v48 >= v33 )
                          break;
                        v34 = *(_QWORD *)(a1 + 288);
                      }
                      *(_QWORD *)(a1 + 296) = v32;
                    }
                    else
                    {
                      v35 = (__int64 *)(a1 + 288);
                      if ( (unsigned __int64)&v53 < v34 || (unsigned __int64)&v53 >= 48LL * *(_QWORD *)(a1 + 304) + v34 )
                      {
                        sub_870D0(v35, (const void *)v30, (__int64)&v53, v31);
                      }
                      else
                      {
                        v59 = 0;
                        v57 = 0;
                        v58 = 0;
                        v60 = 0;
                        sub_870D0(v35, (const void *)v30, (__int64)&v57, v31);
                        sub_83DE0(&v57);
                      }
                    }
                    sub_83DE0(&v53);
                    v33 = *(_QWORD *)(a1 + 296);
                  }
                  v36 = *(_QWORD *)(a1 + 288);
                  v37 = v36 + 48 * v33;
                  v38 = v36 + 24;
                  if ( v37 == v36 )
                    return 1;
                  while ( 1 )
                  {
                    sub_7D150((__int64)&v57, (_QWORD *)a2, *(double *)a3.m128_u64);
                    v41 = v57;
                    a3 = (__m128)_mm_loadu_si128(&v58);
                    v57 = 0;
                    v58 = 0;
                    v42 = *(_QWORD *)(v38 - 24);
                    if ( v42 )
                    {
                      *(_QWORD *)(v38 - 16) = 0;
                      v52 = (__m128i)a3;
                      qfree(v42);
                      a3 = (__m128)_mm_load_si128(&v52);
                    }
                    *(_QWORD *)(v38 - 24) = v41;
                    *(__m128 *)(v38 - 16) = a3;
                    if ( v57 )
                    {
                      v58.m128i_i64[0] = 0;
                      qfree(v57);
                    }
                    v43 = sub_7D4F0((_QWORD *)a2, *(double *)a3.m128_u64);
                    if ( v43 < 0 )
                      return 0;
                    v39 = *(_QWORD *)(v38 + 8);
                    v40 = v43;
                    if ( v39 < v43 )
                    {
                      v46 = *(char **)v38;
                      if ( *(_QWORD *)(v38 + 16) < (unsigned __int64)v43 )
                      {
                        v47 = qvector_reserve(v38, (__int64)v46, v43, 1);
                        v39 = *(_QWORD *)(v38 + 8);
                        *(_QWORD *)v38 = v47;
                        v46 = (char *)v47;
                      }
                      memset(&v46[v39], 0, v40 - v39);
                    }
                    else if ( v43 == v39 )
                    {
                      goto LABEL_58;
                    }
                    *(_QWORD *)(v38 + 8) = v40;
                    v39 = v40;
LABEL_58:
                    sub_7D240(a2, *(char **)v38, v39, *(double *)a3.m128_u64);
                    if ( v37 == v38 + 24 )
                      return 1;
                    v38 += 48;
                  }
                }
              }
            }
          }
          else
          {
            while ( (unsigned __int8)sub_87990(v25, a2) )
            {
              v25 += 16;
              if ( v26 == v25 )
                goto LABEL_35;
            }
          }
        }
      }
      else
      {
        while ( (unsigned __int8)sub_88260(v10, (unsigned __int8 **)a2) )
        {
          v10 += 10;
          if ( v11 == v10 )
            goto LABEL_12;
        }
      }
    }
    return 0;
  }
  v23 = sub_7CD20((_QWORD *)a2, *(double *)a3.m128_u64);
  *(_DWORD *)(a1 + 280) |= 0x11u;
  *(_DWORD *)(a1 + 20) = 112;
  v24 = v23;
  *(_DWORD *)(a1 + 8) = 2;
  sub_82440((__int64 *)(a1 + 24), 2u);
  sub_120A10(*(_QWORD *)(a1 + 24), *(_QWORD *)(a2 + 24), 0, 8, -1, 0);
  v57 = 37;
  copy_tinfo_t();
  clear_tinfo_t();
  sub_120A10(
    *(_QWORD *)(a1 + 24) + 80LL,
    *(_QWORD *)(a2 + 24),
    v24,
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 1496LL) + 112LL) + 80LL),
    -1,
    0);
  copy_tinfo_t();
  v57 = 50;
  copy_tinfo_t();
  clear_tinfo_t();
  return 1;
}

