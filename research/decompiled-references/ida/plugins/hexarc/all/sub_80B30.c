__int64 __fastcall sub_80B30(__int64 a1, __int64 a2)
{
  int v4; // eax
  int v5; // r14d
  unsigned __int8 *v6; // rdx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // r13
  int v12; // eax
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  int v18; // eax
  int v19; // ebx
  __int64 v20; // rbx
  __int64 v21; // r13
  char v22; // bl
  int v23; // eax
  int v24; // edx
  int v25; // eax
  __int64 v26; // r14
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // rbx
  __int64 *v29; // rdi
  __int64 v30; // rax
  unsigned __int64 *v31; // r14
  __m128i *v32; // rbx
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // r12
  __int64 v35; // r12
  __m128i v36; // xmm0
  int v37; // eax
  unsigned __int64 v38; // r15
  unsigned __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // r13
  _QWORD *v43; // rbx
  __m128i v44; // [rsp+0h] [rbp-B8h] BYREF
  unsigned __int64 v45; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v46; // [rsp+18h] [rbp-A0h]
  __int64 v47; // [rsp+28h] [rbp-90h]
  __int128 v48; // [rsp+30h] [rbp-88h]
  __int64 v49; // [rsp+40h] [rbp-78h] BYREF
  __m128i v50; // [rsp+48h] [rbp-70h] BYREF
  __int64 v51; // [rsp+58h] [rbp-60h]
  __int128 v52; // [rsp+60h] [rbp-58h]
  unsigned __int64 v53; // [rsp+78h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  v4 = sub_767A0((_QWORD *)a2);
  *(_DWORD *)(a1 + 284) = v4;
  if ( v4 != 13 )
  {
    v5 = *(_DWORD *)(a2 + 40);
    *(_QWORD *)a1 = sub_76A40(a2, 1u);
    *(_DWORD *)(a1 + 8) = sub_767A0((_QWORD *)a2);
    *(_DWORD *)(a1 + 12) = sub_767A0((_QWORD *)a2);
    *(_DWORD *)(a1 + 16) = sub_767A0((_QWORD *)a2);
    if ( *(_DWORD *)(a2 + 48) > 0xAu )
    {
      v7 = sub_767A0((_QWORD *)a2);
    }
    else
    {
      v6 = *(unsigned __int8 **)a2;
      if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
        sub_73F70(a2);
      v7 = *v6;
      *(_QWORD *)a2 = v6 + 1;
    }
    *(_DWORD *)(a1 + 20) = v7;
    v8 = sub_76F70((_QWORD *)a2);
    if ( v8 >= 0 )
    {
      sub_7BD80((__int64 *)(a1 + 24), v8);
      v9 = *(_QWORD *)(a1 + 24);
      v10 = v9 + 80LL * *(_QWORD *)(a1 + 32);
      if ( v10 == v9 )
      {
LABEL_12:
        v12 = sub_76F70((_QWORD *)a2);
        if ( v12 >= 0 )
        {
          v13 = *(_QWORD *)(a1 + 56);
          v14 = v12;
          if ( v12 != v13 )
          {
            v15 = *(_QWORD *)(a1 + 48);
            *(_QWORD *)&v46 = 0;
            v45 = 0xFFFFFFFF00000000LL;
            if ( v12 < v13 )
            {
              v38 = v12;
              while ( 1 )
              {
                v39 = v38++;
                sub_1166E0(16 * v39 + v15);
                if ( v38 >= v13 )
                  break;
                v15 = *(_QWORD *)(a1 + 48);
              }
              *(_QWORD *)(a1 + 56) = v14;
            }
            else
            {
              v16 = *(_QWORD *)(a1 + 64);
              if ( (unsigned __int64)&v45 < v15 || (unsigned __int64)&v45 >= v15 + 16 * v16 )
              {
                if ( v16 < v14 )
                {
                  *(_QWORD *)(a1 + 48) = qvector_reserve();
                  v13 = *(_QWORD *)(a1 + 56);
                }
                while ( v13 < v14 )
                  sub_11D380(*(_QWORD *)(a1 + 48) + 16 * v13++, &v45);
                *(_QWORD *)(a1 + 56) = v14;
              }
              else
              {
                v44.m128i_i64[0] = a1 + 48;
                sub_11D380(&v49, &v45);
                if ( *(_QWORD *)(a1 + 64) < v14 )
                  *(_QWORD *)(a1 + 48) = qvector_reserve();
                v17 = *(_QWORD *)(a1 + 56);
                if ( v17 < v14 )
                {
                  do
                  {
                    v44.m128i_i64[0] = v17;
                    sub_11D380(*(_QWORD *)(a1 + 48) + 16 * v17, &v49);
                    v17 = v44.m128i_i64[0] + 1;
                  }
                  while ( v14 != v44.m128i_i64[0] + 1 );
                }
                *(_QWORD *)(a1 + 56) = v14;
                sub_1166E0(&v49);
              }
            }
            sub_1166E0(&v45);
            v13 = *(_QWORD *)(a1 + 56);
          }
          v20 = *(_QWORD *)(a1 + 48);
          v21 = v20 + 16 * v13;
          if ( v21 == v20 )
          {
LABEL_35:
            sub_76D40((unsigned __int8 **)a2, a1 + 72, -1);
            if ( !(unsigned __int8)extract_argloc() )
              sub_73FB0(a1 + 80, a2);
            if ( (unsigned __int8)sub_78320((__int64 *)(a1 + 96), (unsigned __int64 *)a2) )
            {
              v22 = sub_740C0(v5, 3, 0x88u);
              if ( (!v22 || (v22 = sub_78320((__int64 *)(a1 + 136), (unsigned __int64 *)a2)) != 0)
                && (!(unsigned __int8)sub_740C0(v5, 3, 0xB0u)
                 || (unsigned __int8)sub_78320((__int64 *)(a1 + 176), (unsigned __int64 *)a2))
                && (!(unsigned __int8)sub_740C0(v5, 3, 0xD8u) || (unsigned __int8)sub_77B00((__int64 *)(a1 + 216), a2))
                && (unsigned __int8)sub_78320((__int64 *)(a1 + 240), (unsigned __int64 *)a2) )
              {
                v23 = sub_767A0((_QWORD *)a2);
                v24 = v23;
                if ( !v22 )
                {
                  BYTE1(v24) = BYTE1(v23) | 2;
                  v23 = v24;
                }
                *(_DWORD *)(a1 + 280) = v23;
                v25 = sub_76F70((_QWORD *)a2);
                v26 = v25;
                if ( v25 >= 0 )
                {
                  v27 = *(_QWORD *)(a1 + 296);
                  if ( v25 != v27 )
                  {
                    v28 = *(_QWORD *)(a1 + 288);
                    v45 = 0;
                    v47 = 0;
                    v46 = 0;
                    v48 = 0;
                    if ( v25 < v27 )
                    {
                      v42 = v25;
                      while ( 1 )
                      {
                        v43 = (_QWORD *)(48 * v42 + v28);
                        if ( v43[3] )
                        {
                          v43[4] = 0;
                          qfree();
                        }
                        if ( *v43 )
                        {
                          v43[1] = 0;
                          qfree();
                        }
                        if ( ++v42 >= v27 )
                          break;
                        v28 = *(_QWORD *)(a1 + 288);
                      }
                      *(_QWORD *)(a1 + 296) = v26;
                    }
                    else
                    {
                      v29 = (__int64 *)(a1 + 288);
                      if ( (unsigned __int64)&v45 < v28 || (unsigned __int64)&v45 >= 48LL * *(_QWORD *)(a1 + 304) + v28 )
                      {
                        sub_80A10(v29, v25, (__int64)&v45);
                      }
                      else
                      {
                        v51 = 0;
                        v49 = 0;
                        v50 = 0;
                        v52 = 0;
                        sub_80A10(v29, v25, (__int64)&v49);
                        sub_7D720(&v49);
                      }
                    }
                    sub_7D720(&v45);
                    v27 = *(_QWORD *)(a1 + 296);
                  }
                  v30 = *(_QWORD *)(a1 + 288);
                  v31 = (unsigned __int64 *)(v30 + 48 * v27);
                  v32 = (__m128i *)(v30 + 24);
                  if ( v31 == (unsigned __int64 *)v30 )
                    return 1;
                  while ( 1 )
                  {
                    sub_76BD0((__int64)&v49, (_QWORD *)a2);
                    v35 = v49;
                    v36 = _mm_loadu_si128(&v50);
                    v49 = 0;
                    v50 = 0;
                    if ( v32[-2].m128i_i64[1] )
                    {
                      v32[-1].m128i_i64[0] = 0;
                      v44 = v36;
                      qfree();
                      v36 = _mm_load_si128(&v44);
                    }
                    v32[-2].m128i_i64[1] = v35;
                    v32[-1] = v36;
                    if ( v49 )
                    {
                      v50.m128i_i64[0] = 0;
                      qfree();
                    }
                    v37 = sub_76F70((_QWORD *)a2);
                    if ( v37 < 0 )
                      return 0;
                    v33 = v32->m128i_u64[1];
                    v34 = v37;
                    if ( v33 < v37 )
                    {
                      v40 = v32->m128i_i64[0];
                      if ( v32[1].m128i_i64[0] < (unsigned __int64)v37 )
                      {
                        v41 = qvector_reserve();
                        v33 = v32->m128i_u64[1];
                        v32->m128i_i64[0] = v41;
                        v40 = v41;
                      }
                      memset((void *)(v40 + v33), 0, v34 - v33);
                    }
                    else if ( v37 == v33 )
                    {
                      goto LABEL_58;
                    }
                    v32->m128i_i64[1] = v34;
                    v33 = v34;
LABEL_58:
                    sub_76CC0(a2, v32->m128i_i64[0], v33);
                    if ( v31 == &v32[1].m128i_u64[1] )
                      return 1;
                    v32 += 3;
                  }
                }
              }
            }
          }
          else
          {
            while ( (unsigned __int8)sub_812D0(v20, a2) )
            {
              v20 += 16;
              if ( v21 == v20 )
                goto LABEL_35;
            }
          }
        }
      }
      else
      {
        while ( (unsigned __int8)sub_81BA0(v9, a2) )
        {
          v9 += 80;
          if ( v10 == v9 )
            goto LABEL_12;
        }
      }
    }
    return 0;
  }
  v18 = sub_767A0((_QWORD *)a2);
  *(_DWORD *)(a1 + 280) |= 0x11u;
  *(_DWORD *)(a1 + 20) = 112;
  v19 = v18;
  *(_DWORD *)(a1 + 8) = 2;
  sub_7BD80((__int64 *)(a1 + 24), 2u);
  sub_11A350(*(_QWORD *)(a1 + 24), *(_QWORD *)(a2 + 24), 0, 8, -1, 0);
  v49 = 37;
  copy_tinfo_t();
  clear_tinfo_t();
  sub_11A350(
    *(_QWORD *)(a1 + 24) + 80LL,
    *(_QWORD *)(a2 + 24),
    v19,
    *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 1496LL) + 112LL) + 80LL),
    -1,
    0);
  copy_tinfo_t();
  v49 = 50;
  copy_tinfo_t();
  clear_tinfo_t();
  return 1;
}

