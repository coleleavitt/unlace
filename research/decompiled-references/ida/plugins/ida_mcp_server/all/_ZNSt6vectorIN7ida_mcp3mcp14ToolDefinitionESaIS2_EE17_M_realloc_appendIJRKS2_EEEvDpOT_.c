__int64 __fastcall std::vector<ida_mcp::mcp::ToolDefinition>::_M_realloc_append<ida_mcp::mcp::ToolDefinition const&>(
        __int64 a1,
        __int64 a2)
{
  const __m128i *v2; // r12
  __m128i *v3; // r13
  __int64 v4; // rbx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  __m128i *v10; // r14
  const __m128i *v11; // r15
  __m128i *v12; // rbx
  char *v13; // rbp
  __m128i *v14; // rdi
  __m128i *v15; // rdi
  __m128i *v16; // rsi
  const __m128i *v17; // rcx
  __int64 v18; // rcx
  __m128i *v19; // rsi
  __m128i *v20; // rcx
  __int64 v21; // rcx
  __m128i v22; // xmm0
  __m128i v23; // xmm0
  __int16 v24; // cx
  char *v25; // rdi
  unsigned int v26; // edi
  unsigned int v27; // edi
  __int32 *v29; // rsi
  char *v30; // rcx
  __int64 v31; // rcx
  unsigned __int64 v32; // rcx
  char *v33; // rsi
  char *v34; // r8
  unsigned int v35; // edi
  unsigned int v36; // edi
  unsigned int v37; // esi
  __int64 v38; // r9
  unsigned __int64 v39; // rcx
  char *v40; // rsi
  char *v41; // r8
  unsigned int v42; // edi
  unsigned int v43; // edi
  unsigned int v44; // esi
  __int64 v45; // r9
  __int16 v46; // ax
  unsigned int v47; // edi
  unsigned __int64 v48; // rcx
  char *v49; // rsi
  char *v50; // r8
  unsigned int v51; // edi
  unsigned int v52; // edi
  unsigned int v53; // esi
  __int64 v54; // r9
  __m128i *v55; // [rsp+0h] [rbp-58h]
  unsigned __int64 v57; // [rsp+10h] [rbp-48h]

  v2 = *(const __m128i **)(a1 + 8);
  v3 = *(__m128i **)a1;
  v4 = (__int64)v2->m128i_i64 - *(_QWORD *)a1;
  v5 = 0xCCCCCCCCCCCCCCCDLL * (v4 >> 5);
  if ( v5 == 0xCCCCCCCCCCCCCCLL )
    std::__throw_length_error("vector::_M_realloc_append");
  v6 = 1;
  if ( v5 )
    v6 = 0xCCCCCCCCCCCCCCCDLL * (((char *)v2 - (char *)v3) >> 5);
  v7 = v5 + v6;
  if ( v7 > 0xCCCCCCCCCCCCCCLL )
    v7 = 0xCCCCCCCCCCCCCCLL;
  v57 = 10 * v7;
  v8 = operator new(160 * v7);
  v9 = v8 + v4;
  v55 = (__m128i *)v8;
  *(_QWORD *)v9 = v9 + 16;
  std::string::_M_construct<true>();
  *(_QWORD *)(v9 + 32) = v9 + 48;
  std::string::_M_construct<true>();
  nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
  *(_BYTE *)(v9 + 96) = 0;
  if ( *(_BYTE *)(a2 + 96) )
  {
    nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::basic_json();
    *(_BYTE *)(v9 + 96) = 1;
  }
  *(_BYTE *)(v9 + 152) = 0;
  if ( *(_BYTE *)(a2 + 152) )
  {
    *(_BYTE *)(v9 + 136) = 0;
    if ( *(_BYTE *)(a2 + 136) )
    {
      *(_QWORD *)(v9 + 104) = v9 + 120;
      std::string::_M_construct<true>();
      *(_BYTE *)(v9 + 136) = 1;
    }
    v46 = *(_WORD *)(a2 + 144);
    *(_BYTE *)(v9 + 152) = 1;
    *(_WORD *)(v9 + 144) = v46;
    *(_WORD *)(v9 + 146) = *(_WORD *)(a2 + 146);
    *(_WORD *)(v9 + 148) = *(_WORD *)(a2 + 148);
    *(_WORD *)(v9 + 150) = *(_WORD *)(a2 + 150);
  }
  v10 = v55;
  if ( v2 != v3 )
  {
    v10 = v55;
    v11 = v3 + 1;
    v12 = v3 + 3;
    v13 = &v3[7].m128i_i8[8];
    while ( 1 )
    {
      v16 = v10 + 1;
      v10->m128i_i64[0] = (__int64)v10[1].m128i_i64;
      v17 = (const __m128i *)v11[-1].m128i_i64[0];
      if ( v17 != v11 )
        break;
      v18 = v11[-1].m128i_i64[1];
      v27 = v18 + 1;
      if ( (unsigned int)(v18 + 1) >= 8 )
      {
        v16->m128i_i64[0] = v11->m128i_i64[0];
        *(__int64 *)((char *)&v16->m128i_i64[-1] + v27) = *(__int64 *)((char *)&v11->m128i_i64[-1] + v27);
        v39 = (unsigned __int64)&v10[1].m128i_u64[1] & 0xFFFFFFFFFFFFFFF8LL;
        v40 = &v16->m128i_i8[-v39];
        v41 = (char *)((char *)v11 - v40);
        v42 = ((_DWORD)v40 + v27) & 0xFFFFFFF8;
        if ( v42 >= 8 )
        {
          v43 = v42 & 0xFFFFFFF8;
          v44 = 0;
          do
          {
            v45 = v44;
            v44 += 8;
            *(_QWORD *)(v39 + v45) = *(_QWORD *)&v41[v45];
          }
          while ( v44 < v43 );
        }
        goto LABEL_20;
      }
      if ( (v27 & 4) != 0 )
      {
        v16->m128i_i32[0] = v11->m128i_i32[0];
        *(__int32 *)((char *)&v16->m128i_i32[-1] + v27) = *(__int32 *)((char *)&v11->m128i_i32[-1] + v27);
        v18 = v11[-1].m128i_i64[1];
      }
      else if ( (_DWORD)v18 != -1 )
      {
        v16->m128i_i8[0] = v11->m128i_i8[0];
        if ( (v27 & 2) == 0 )
          goto LABEL_20;
        *(__int16 *)((char *)&v16->m128i_i16[-1] + v27) = *(__int16 *)((char *)&v11->m128i_i16[-1] + v27);
        v18 = v11[-1].m128i_i64[1];
      }
LABEL_21:
      v19 = v10 + 3;
      v10->m128i_i64[1] = v18;
      v11[-1].m128i_i64[0] = (__int64)v11;
      v11[-1].m128i_i64[1] = 0;
      v11->m128i_i8[0] = 0;
      v10[2].m128i_i64[0] = (__int64)v10[3].m128i_i64;
      v20 = (__m128i *)v11[1].m128i_i64[0];
      if ( v20 != v12 )
      {
        v10[2].m128i_i64[0] = (__int64)v20;
        v10[3].m128i_i64[0] = v11[2].m128i_i64[0];
LABEL_23:
        v21 = v11[1].m128i_i64[1];
        goto LABEL_24;
      }
      v21 = v11[1].m128i_i64[1];
      v26 = v21 + 1;
      if ( (unsigned int)(v21 + 1) >= 8 )
      {
        v19->m128i_i64[0] = v12->m128i_i64[0];
        *(__int64 *)((char *)&v19->m128i_i64[-1] + v26) = *(__int64 *)((char *)&v12->m128i_i64[-1] + v26);
        v32 = (unsigned __int64)&v10[3].m128i_u64[1] & 0xFFFFFFFFFFFFFFF8LL;
        v33 = &v19->m128i_i8[-v32];
        v34 = (char *)((char *)v12 - v33);
        v35 = ((_DWORD)v33 + v26) & 0xFFFFFFF8;
        if ( v35 >= 8 )
        {
          v36 = v35 & 0xFFFFFFF8;
          v37 = 0;
          do
          {
            v38 = v37;
            v37 += 8;
            *(_QWORD *)(v32 + v38) = *(_QWORD *)&v34[v38];
          }
          while ( v37 < v36 );
        }
        goto LABEL_23;
      }
      if ( (v26 & 4) != 0 )
      {
        v19->m128i_i32[0] = v12->m128i_i32[0];
        *(__int32 *)((char *)&v19->m128i_i32[-1] + v26) = *(__int32 *)((char *)&v12->m128i_i32[-1] + v26);
        v21 = v11[1].m128i_i64[1];
      }
      else if ( (_DWORD)v21 != -1 )
      {
        v19->m128i_i8[0] = v12->m128i_i8[0];
        if ( (v26 & 2) == 0 )
          goto LABEL_23;
        *(__int16 *)((char *)&v19->m128i_i16[-1] + v26) = *(__int16 *)((char *)&v12->m128i_i16[-1] + v26);
        v21 = v11[1].m128i_i64[1];
      }
LABEL_24:
      v10[2].m128i_i64[1] = v21;
      v22 = _mm_loadu_si128(v11 + 3);
      v11[1].m128i_i64[0] = (__int64)v12;
      v11[1].m128i_i64[1] = 0;
      v11[2].m128i_i8[0] = 0;
      v11[3].m128i_i8[0] = 0;
      v11[3].m128i_i64[1] = 0;
      v10[4] = v22;
      v10[6].m128i_i8[0] = 0;
      if ( v11[5].m128i_i8[0] )
      {
        v23 = _mm_loadu_si128(v11 + 4);
        v11[4].m128i_i8[0] = 0;
        v11[4].m128i_i64[1] = 0;
        v10[6].m128i_i8[0] = 1;
        v10[5] = v23;
      }
      v10[9].m128i_i8[8] = 0;
      if ( !v11[8].m128i_i8[8] )
        goto LABEL_11;
      v10[8].m128i_i8[8] = 0;
      if ( v11[7].m128i_i8[8] )
      {
        v29 = &v10[7].m128i_i32[2];
        v10[6].m128i_i64[1] = (__int64)&v10[7].m128i_i64[1];
        v30 = (char *)v11[5].m128i_i64[1];
        if ( v30 != v13 )
        {
          v10[6].m128i_i64[1] = (__int64)v30;
          v10[7].m128i_i64[1] = v11[6].m128i_i64[1];
          goto LABEL_48;
        }
        v31 = v11[6].m128i_i64[0];
        v47 = v31 + 1;
        if ( (unsigned int)(v31 + 1) < 8 )
        {
          if ( (v47 & 4) != 0 )
          {
            *v29 = *(_DWORD *)v13;
            *(__int32 *)((char *)v29 + v47 - 4) = *(_DWORD *)&v13[v47 - 4];
            v31 = v11[6].m128i_i64[0];
            goto LABEL_49;
          }
          if ( (_DWORD)v31 != -1 )
          {
            *(_BYTE *)v29 = *v13;
            if ( (v47 & 2) != 0 )
            {
              *(_WORD *)((char *)v29 + v47 - 2) = *(_WORD *)&v13[v47 - 2];
              v31 = v11[6].m128i_i64[0];
              goto LABEL_49;
            }
LABEL_48:
            v31 = v11[6].m128i_i64[0];
          }
LABEL_49:
          v10[7].m128i_i64[0] = v31;
          v11[5].m128i_i64[1] = (__int64)v13;
          v11[6].m128i_i64[0] = 0;
          v11[6].m128i_i8[8] = 0;
          v10[8].m128i_i8[8] = 1;
          goto LABEL_28;
        }
        *(_QWORD *)v29 = *(_QWORD *)v13;
        *(_QWORD *)((char *)v29 + v47 - 8) = *(_QWORD *)&v13[v47 - 8];
        v48 = (unsigned __int64)&v10[8] & 0xFFFFFFFFFFFFFFF8LL;
        v49 = (char *)v29 - v48;
        v50 = (char *)(v13 - v49);
        v51 = ((_DWORD)v49 + v47) & 0xFFFFFFF8;
        if ( v51 >= 8 )
        {
          v52 = v51 & 0xFFFFFFF8;
          v53 = 0;
          do
          {
            v54 = v53;
            v53 += 8;
            *(_QWORD *)(v48 + v54) = *(_QWORD *)&v50[v54];
          }
          while ( v53 < v52 );
        }
        goto LABEL_48;
      }
LABEL_28:
      v10[9].m128i_i16[0] = v11[8].m128i_i16[0];
      v10[9].m128i_i16[1] = v11[8].m128i_i16[1];
      v10[9].m128i_i16[2] = v11[8].m128i_i16[2];
      v24 = v11[8].m128i_i16[3];
      v10[9].m128i_i8[8] = 1;
      v10[9].m128i_i16[3] = v24;
      if ( v11[8].m128i_i8[8] )
      {
        if ( v11[7].m128i_i8[8] )
        {
          v25 = (char *)v11[5].m128i_i64[1];
          if ( v25 != v13 )
          {
            operator delete(v25, v11[6].m128i_i64[1] + 1);
            if ( !v11[5].m128i_i8[0] )
              goto LABEL_12;
            goto LABEL_32;
          }
        }
      }
LABEL_11:
      if ( !v11[5].m128i_i8[0] )
        goto LABEL_12;
LABEL_32:
      v11[5].m128i_i8[0] = 0;
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
LABEL_12:
      nlohmann::json_abi_v3_12_0::basic_json<std::map,std::vector,std::string,bool,long,unsigned long,double,std::allocator,nlohmann::json_abi_v3_12_0::adl_serializer,std::vector<unsigned char>,void>::json_value::destroy();
      v14 = (__m128i *)v11[1].m128i_i64[0];
      if ( v12 != v14 )
        operator delete(v14, v11[2].m128i_i64[0] + 1);
      v15 = (__m128i *)v11[-1].m128i_i64[0];
      if ( v15 != v11 )
        operator delete(v15, v11->m128i_i64[0] + 1);
      v10 += 10;
      v12 += 10;
      v13 += 160;
      if ( v2 == &v11[9] )
        goto LABEL_43;
      v11 += 10;
    }
    v10->m128i_i64[0] = (__int64)v17;
    v10[1].m128i_i64[0] = v11->m128i_i64[0];
LABEL_20:
    v18 = v11[-1].m128i_i64[1];
    goto LABEL_21;
  }
LABEL_43:
  if ( v3 )
    operator delete(v3, *(_QWORD *)(a1 + 16) - (_QWORD)v3);
  *(_QWORD *)a1 = v55;
  *(_QWORD *)(a1 + 8) = v10 + 10;
  *(_QWORD *)(a1 + 16) = &v55[v57];
  return a1;
}

