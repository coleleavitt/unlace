void __fastcall sub_315E10(__int64 a1, __int64 *a2, double a3)
{
  const char *v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // r13
  unsigned __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rbp
  __int64 v12; // r13
  unsigned __int64 v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // r13
  unsigned __int64 v17; // r12
  __int64 v18; // rsi
  __int64 v19; // rbp
  __int64 v20; // rax
  const __m128i *v21; // rdx
  __m128i v22; // xmm0
  int v23; // ecx
  __int64 v24; // r8
  unsigned __int64 v25; // xmm0_8
  char v26; // cl
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // r12
  unsigned __int64 v31; // r13
  __int64 v32; // r14
  __int64 v33; // rsi
  unsigned __int64 v34; // r12
  __int64 *v35; // rdi
  __int64 v36; // r13
  unsigned __int64 v37; // r14
  __int64 v38; // r15
  __int64 v39; // rsi
  __int64 v40; // r12
  unsigned __int64 v41; // r13
  __int64 v42; // r14
  __int64 v43; // rsi
  __int64 v44; // rbp
  unsigned __int64 v45; // r12
  __int64 v46; // r13
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rdx

  switch ( *(_DWORD *)a1 & 0xF )
  {
    case 0:
      v11 = a2[1];
      if ( v11 )
      {
        v12 = v11 + 3;
        v13 = v11 + 4;
        --v11;
      }
      else
      {
        v13 = 5;
        v12 = 4;
      }
      v14 = *a2;
      if ( a2[2] < v13 )
      {
        v50 = qvector_reserve((__int64)a2, v14, v13, 1);
        *a2 = v50;
        v14 = v50;
      }
      a2[1] = v13;
      *(_BYTE *)(v14 + v12) = 0;
      *(_DWORD *)(*a2 + v11) = 1701736302;
      return;
    case 1:
      v15 = a2[1];
      if ( v15 )
      {
        v16 = v15 + 2;
        v17 = v15 + 3;
        --v15;
      }
      else
      {
        v17 = 4;
        v16 = 3;
      }
      v18 = *a2;
      if ( a2[2] < v17 )
      {
        v49 = qvector_reserve((__int64)a2, v18, v17, 1);
        *a2 = v49;
        v18 = v49;
      }
      a2[1] = v17;
      *(_BYTE *)(v18 + v16) = 0;
      v19 = *a2 + v15;
      *(_WORD *)v19 = 27745;
      *(_BYTE *)(v19 + 2) = 108;
      return;
    case 2:
      v20 = *(_QWORD *)(a1 + 16);
      if ( v20 == 1 )
      {
        sub_315B00(*(__int64 **)(a1 + 8), a2, *(_DWORD *)(a1 + 4), 1);
      }
      else
      {
        if ( v20 == 2 )
        {
          v21 = *(const __m128i **)(a1 + 8);
          if ( !v21->m128i_i64[0] )
          {
            v22 = _mm_loadu_si128(v21 + 1);
            v23 = *(_DWORD *)(a1 + 4);
            v24 = v22.m128i_i64[0];
            v25 = _mm_add_epi64(v22, _mm_srli_si128(v22, 8)).m128i_u64[0];
            if ( v23 == 8 )
            {
              if ( !v25 )
              {
                v55 = v21->m128i_i64[1];
                if ( v24 == v55 + 1 || v24 == 0x8000000000000000LL || v55 == 0x8000000000000000LL )
                  goto LABEL_16;
              }
            }
            else
            {
              v26 = 8 * v23;
              if ( 1LL << v26 == v25 )
              {
                v27 = v21->m128i_i64[1];
                if ( v27 + 1 == v24 || (v28 = 1LL << (v26 - 1), v28 == v24) || v28 == v27 )
                {
LABEL_16:
                  sub_FAAD0(a2);
                  return;
                }
              }
            }
          }
        }
        v30 = a2[1];
        if ( v30 )
        {
          v31 = v30 + 1;
          v32 = a2[1];
          --v30;
        }
        else
        {
          v31 = 2;
          v32 = 1;
        }
        v33 = *a2;
        if ( a2[2] < v31 )
        {
          v52 = qvector_reserve((__int64)a2, v33, v31, 1);
          *a2 = v52;
          v33 = v52;
        }
        a2[1] = v31;
        *(_BYTE *)(v33 + v32) = 0;
        *(_BYTE *)(*a2 + v30) = 40;
        v34 = 0;
        if ( *(_QWORD *)(a1 + 16) )
        {
          while ( 1 )
          {
            v35 = (__int64 *)(*(_QWORD *)(a1 + 8) + 16LL * (int)v34++);
            sub_315B00(v35, a2, *(_DWORD *)(a1 + 4), 0);
            if ( v34 >= *(_QWORD *)(a1 + 16) )
              break;
            v36 = a2[1];
            if ( v36 )
            {
              v37 = v36 + 1;
              v38 = a2[1];
              --v36;
            }
            else
            {
              v37 = 2;
              v38 = 1;
            }
            v39 = *a2;
            if ( a2[2] < v37 )
            {
              v48 = qvector_reserve((__int64)a2, v39, v37, 1);
              *a2 = v48;
              v39 = v48;
            }
            a2[1] = v37;
            *(_BYTE *)(v39 + v38) = 0;
            *(_BYTE *)(*a2 + v36) = 124;
          }
        }
        v44 = a2[1];
        if ( v44 )
        {
          v45 = v44 + 1;
          v46 = a2[1];
          --v44;
        }
        else
        {
          v45 = 2;
          v46 = 1;
        }
        v47 = *a2;
        if ( a2[2] < v45 )
        {
          v53 = qvector_reserve((__int64)a2, v47, v45, 1);
          *a2 = v53;
          v47 = v53;
        }
        a2[1] = v45;
        *(_BYTE *)(v47 + v46) = 0;
        *(_BYTE *)(*a2 + v44) = 41;
      }
      return;
    case 3:
      goto LABEL_15;
    case 4:
      sub_FAAD0(a2);
LABEL_15:
      sub_FAAD0(a2);
      if ( *(_QWORD *)(a1 + 24) != 1 )
        goto LABEL_16;
      return;
    case 5:
      if ( !*(_QWORD *)(a1 + 8) )
        goto LABEL_32;
      sub_FAAD0(a2);
      v29 = *(_QWORD *)(a1 + 16);
      if ( !*(_QWORD *)(a1 + 8) )
        goto LABEL_33;
      if ( v29 )
      {
        v40 = a2[1];
        if ( v40 )
        {
          v41 = v40 + 1;
          v42 = a2[1];
          --v40;
        }
        else
        {
          v42 = 1;
          v41 = 2;
        }
        v43 = *a2;
        if ( a2[2] < v41 )
        {
          v54 = qvector_reserve((__int64)a2, v43, v41, 1);
          *a2 = v54;
          v43 = v54;
        }
        a2[1] = v41;
        *(_BYTE *)(v43 + v40) = 47;
        *(_BYTE *)(*a2 + v42) = 0;
LABEL_32:
        v29 = *(_QWORD *)(a1 + 16);
LABEL_33:
        if ( v29 )
          goto LABEL_16;
      }
      return;
    case 6:
      v5 = " & ";
      goto LABEL_3;
    case 7:
      v5 = " | ";
LABEL_3:
      sub_316470(a1, a2, v5);
      return;
    case 8:
      v6 = a2[1];
      if ( v6 )
      {
        v7 = v6 + 2;
        v8 = v6 + 3;
        --v6;
      }
      else
      {
        v8 = 4;
        v7 = 3;
      }
      v9 = *a2;
      if ( a2[2] < v8 )
      {
        v51 = qvector_reserve((__int64)a2, v9, v8, 1);
        *a2 = v51;
        v9 = v51;
      }
      a2[1] = v8;
      *(_BYTE *)(v9 + v7) = 0;
      v10 = *a2 + v6;
      *(_WORD *)v10 = 28277;
      *(_BYTE *)(v10 + 2) = 107;
      return;
    default:
      if ( !under_debugger )
        sub_383060(0xCA70u, a3);
      BUG();
  }
}

