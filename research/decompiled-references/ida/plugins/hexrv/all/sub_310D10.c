__int64 __fastcall sub_310D10(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
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
  const __m128i *v20; // rdx
  __m128i v21; // xmm0
  int v22; // ecx
  __int64 v23; // r8
  unsigned __int64 v24; // xmm0_8
  char v25; // cl
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // r12
  unsigned __int64 v30; // r13
  __int64 v31; // r14
  __int64 v32; // rsi
  unsigned __int64 v33; // r12
  __int64 *v34; // rdi
  __int64 v35; // r13
  unsigned __int64 v36; // r14
  __int64 v37; // r15
  __int64 v38; // rsi
  __int64 v39; // r12
  unsigned __int64 v40; // r13
  __int64 v41; // r14
  __int64 v42; // rsi
  __int64 v43; // rbp
  unsigned __int64 v44; // r12
  __int64 v45; // r13
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx

  result = *(_DWORD *)a1 & 0xF;
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
        result = qvector_reserve();
        *a2 = result;
        v14 = result;
      }
      a2[1] = v13;
      *(_BYTE *)(v14 + v12) = 0;
      *(_DWORD *)(*a2 + v11) = 1701736302;
      return result;
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
        result = qvector_reserve();
        *a2 = result;
        v18 = result;
      }
      a2[1] = v17;
      *(_BYTE *)(v18 + v16) = 0;
      v19 = *a2 + v15;
      *(_WORD *)v19 = 27745;
      *(_BYTE *)(v19 + 2) = 108;
      return result;
    case 2:
      result = *(_QWORD *)(a1 + 16);
      if ( result == 1 )
        return (__int64)sub_310A00(*(__int64 **)(a1 + 8), a2, *(_DWORD *)(a1 + 4), 1);
      if ( result == 2 )
      {
        v20 = *(const __m128i **)(a1 + 8);
        if ( !v20->m128i_i64[0] )
        {
          v21 = _mm_loadu_si128(v20 + 1);
          v22 = *(_DWORD *)(a1 + 4);
          v23 = v21.m128i_i64[0];
          v24 = _mm_add_epi64(v21, _mm_srli_si128(v21, 8)).m128i_u64[0];
          result = v24;
          if ( v22 == 8 )
          {
            if ( !v24 )
            {
              v50 = v20->m128i_i64[1];
              if ( v23 == v50 + 1 )
                return (__int64)sub_F6610(a2);
              result = 0x8000000000000000LL;
              if ( v23 == 0x8000000000000000LL || v50 == 0x8000000000000000LL )
                return (__int64)sub_F6610(a2);
            }
          }
          else
          {
            v25 = 8 * v22;
            if ( 1LL << v25 == v24 )
            {
              v26 = v20->m128i_i64[1];
              result = v26 + 1;
              if ( v26 + 1 == v23 )
                return (__int64)sub_F6610(a2);
              v27 = 1LL << (v25 - 1);
              if ( v27 == v23 || v27 == v26 )
                return (__int64)sub_F6610(a2);
            }
          }
        }
      }
      v29 = a2[1];
      if ( v29 )
      {
        v30 = v29 + 1;
        v31 = a2[1];
        --v29;
      }
      else
      {
        v30 = 2;
        v31 = 1;
      }
      v32 = *a2;
      if ( a2[2] < v30 )
      {
        result = qvector_reserve();
        *a2 = result;
        v32 = result;
      }
      a2[1] = v30;
      *(_BYTE *)(v32 + v31) = 0;
      *(_BYTE *)(*a2 + v29) = 40;
      v33 = 0;
      if ( *(_QWORD *)(a1 + 16) )
      {
        while ( 1 )
        {
          v34 = (__int64 *)(*(_QWORD *)(a1 + 8) + 16LL * (int)v33++);
          result = (__int64)sub_310A00(v34, a2, *(_DWORD *)(a1 + 4), 0);
          if ( v33 >= *(_QWORD *)(a1 + 16) )
            break;
          v35 = a2[1];
          if ( v35 )
          {
            v36 = v35 + 1;
            v37 = a2[1];
            --v35;
          }
          else
          {
            v36 = 2;
            v37 = 1;
          }
          v38 = *a2;
          if ( a2[2] < v36 )
          {
            v47 = qvector_reserve();
            *a2 = v47;
            v38 = v47;
          }
          a2[1] = v36;
          *(_BYTE *)(v38 + v37) = 0;
          *(_BYTE *)(*a2 + v35) = 124;
        }
      }
      v43 = a2[1];
      if ( v43 )
      {
        v44 = v43 + 1;
        v45 = a2[1];
        --v43;
      }
      else
      {
        v44 = 2;
        v45 = 1;
      }
      v46 = *a2;
      if ( a2[2] < v44 )
      {
        result = qvector_reserve();
        *a2 = result;
        v46 = result;
      }
      a2[1] = v44;
      *(_BYTE *)(v46 + v45) = 0;
      *(_BYTE *)(*a2 + v43) = 41;
      return result;
    case 3:
      goto LABEL_15;
    case 4:
      sub_F6610(a2);
LABEL_15:
      result = (__int64)sub_F6610(a2);
      if ( *(_QWORD *)(a1 + 24) != 1 )
        return (__int64)sub_F6610(a2);
      return result;
    case 5:
      if ( !*(_QWORD *)(a1 + 8) )
        goto LABEL_32;
      result = (__int64)sub_F6610(a2);
      v28 = *(_QWORD *)(a1 + 16);
      if ( !*(_QWORD *)(a1 + 8) )
        goto LABEL_33;
      if ( v28 )
      {
        v39 = a2[1];
        if ( v39 )
        {
          v40 = v39 + 1;
          v41 = a2[1];
          --v39;
        }
        else
        {
          v41 = 1;
          v40 = 2;
        }
        v42 = *a2;
        if ( a2[2] < v40 )
        {
          v49 = qvector_reserve();
          *a2 = v49;
          v42 = v49;
        }
        a2[1] = v40;
        *(_BYTE *)(v42 + v39) = 47;
        result = *a2;
        *(_BYTE *)(*a2 + v41) = 0;
LABEL_32:
        v28 = *(_QWORD *)(a1 + 16);
LABEL_33:
        if ( v28 )
          return (__int64)sub_F6610(a2);
      }
      return result;
    case 6:
      v5 = " & ";
      return sub_311370(a1, a2, v5);
    case 7:
      v5 = " | ";
      return sub_311370(a1, a2, v5);
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
        v48 = qvector_reserve();
        *a2 = v48;
        v9 = v48;
      }
      a2[1] = v8;
      result = 28277;
      *(_BYTE *)(v9 + v7) = 0;
      v10 = *a2 + v6;
      *(_WORD *)v10 = 28277;
      *(_BYTE *)(v10 + 2) = 107;
      return result;
    default:
      if ( !under_debugger )
        sub_37DDE0(51824);
      BUG();
  }
}

