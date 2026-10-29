unsigned __int64 __fastcall sub_34870(__int64 a1, __int64 *a2, __int64 a3)
{
  struct _Unwind_Exception *v3; // rbx
  __int64 v4; // r12
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // eax
  __int64 v9; // rdi
  __int64 first_seg; // rax
  __int64 v11; // rdx
  __int64 v12; // rbp
  __int64 v13; // r14
  __int64 *v14; // rbx
  int v15; // r12d
  __int64 v16; // rdx
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v21; // rbx
  __int64 v22; // rax
  __m128i v23; // xmm0
  int v24; // r15d
  unsigned __int64 i; // rbx
  int v26; // eax
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  __int16 dtype_size; // ax
  __int64 *v30; // rbx
  int v31; // r15d
  __int16 v32; // r12
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // rax
  char v36; // cl
  int v37; // r12d
  __int64 v38; // rax
  char v39; // r15
  __int16 v40; // r9
  __int64 *v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rsi
  __int64 v44; // r12
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // [rsp+8h] [rbp-A0h]
  int v50; // [rsp+1Ch] [rbp-8Ch] BYREF
  __int64 *v51; // [rsp+20h] [rbp-88h] BYREF
  __int64 v52; // [rsp+28h] [rbp-80h]
  int v53; // [rsp+30h] [rbp-78h]
  __int128 v54; // [rsp+40h] [rbp-68h] BYREF
  __m128i v55; // [rsp+50h] [rbp-58h]
  unsigned __int64 v56; // [rsp+68h] [rbp-40h]

  v4 = 0;
  v56 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 16);
  v7 = *(_DWORD *)(v6 + 104);
  v8 = *(unsigned __int16 *)(a3 + 24);
  if ( v7 <= v8 && v8 < *(_DWORD *)(v6 + 108) )
  {
    v9 = *(_QWORD *)(a3 + 16);
    v4 = *(unsigned int *)(*(_QWORD *)(v6 + 112) + 16LL * (v8 - v7) + 8);
    if ( v9 != -1 )
      goto LABEL_4;
  }
  else
  {
    v9 = *(_QWORD *)(a3 + 16);
    if ( v9 != -1 )
    {
LABEL_4:
      first_seg = getseg(v9);
      goto LABEL_5;
    }
  }
  first_seg = get_first_seg(v9, a2, v6);
LABEL_5:
  if ( !first_seg )
  {
    v3 = (struct _Unwind_Exception *)sub_28E10(v9, a2, v11);
    sub_29C90(v4);
    _Unwind_Resume(v3);
  }
  v49 = 32;
  if ( *(_BYTE *)(first_seg + 43) == 2 )
    v49 = 64;
  v53 = v4;
  v51 = a2;
  v12 = 0;
  v52 = a3;
  v13 = a3 + 41;
  while ( 2 )
  {
    switch ( *(_BYTE *)v13 )
    {
      case 0:
        return v56 - __readfsqword(0x28u);
      case 1:
        dtype_size = get_dtype_size(*(unsigned __int8 *)(v13 + 4));
        v30 = v51;
        v31 = *(unsigned __int16 *)(v13 + 5);
        v32 = 8 * dtype_size;
        v33 = v51[1];
        v34 = *v51;
        if ( v51[2] < (unsigned __int64)(v33 + 1) )
        {
          v46 = qvector_reserve(v51, v34, v33 + 1, 12);
          v33 = v30[1];
          *v30 = v46;
          v34 = v46;
        }
        v35 = v34 + 12 * v33;
        *(_QWORD *)v35 = 0;
        *(_WORD *)(v35 + 8) = 0;
        ++v30[1];
        *(_BYTE *)(v35 + 9) = v12;
        *(_DWORD *)v35 = v31;
        *(_WORD *)(v35 + 4) = 0;
        *(_WORD *)(v35 + 6) = v32;
        v36 = 0;
        if ( (dword_598A0[v12] & v53) != 0 )
        {
          v36 = 2;
          if ( *(_WORD *)(v52 + 24) == 14 && *(_BYTE *)(v52 + 81) == 1 )
            v36 = 2 * (*(_WORD *)(v52 + 46) != *(_WORD *)(v52 + 86));
        }
        if ( (dword_598C0[v12] & v53) != 0 )
          v36 |= 1u;
        ++v12;
        v13 += 40;
        *(_BYTE *)(v35 + 8) = v36;
        if ( v12 != 8 )
          continue;
        return v56 - __readfsqword(0x28u);
      case 3:
        v14 = v51;
        v16 = v51[1];
        v27 = v51[2];
        v17 = *v51;
        v18 = v16 + 1;
        if ( *(_BYTE *)(v13 + 31) )
        {
          v15 = *(unsigned __int16 *)(v13 + 5);
          if ( v27 >= v18 )
            goto LABEL_11;
          goto LABEL_26;
        }
        v37 = *(_DWORD *)(v13 + 23) & 0x1F;
        if ( v27 < v18 )
        {
          v47 = qvector_reserve(v51, v17, v16 + 1, 12);
          v16 = v14[1];
          *v14 = v47;
          v17 = v47;
        }
        v38 = v17 + 12 * v16;
        v39 = v12;
        *(_QWORD *)v38 = 0;
        v40 = v49;
        *(_WORD *)(v38 + 8) = 0;
        ++v14[1];
        *(_DWORD *)v38 = v37;
        *(_WORD *)(v38 + 4) = 0;
        *(_WORD *)(v38 + 6) = v49;
        v41 = v51;
        *(_BYTE *)(v38 + 9) = v12;
        *(_BYTE *)(v38 + 8) = 2;
        v42 = v41[1];
        v43 = *v41;
        v44 = (*(_QWORD *)(v13 + 23) >> 5) & 0x1FLL;
        if ( v41[2] < (unsigned __int64)(v42 + 1) )
        {
          v48 = qvector_reserve(v41, v43, v42 + 1, 12);
          v42 = v41[1];
          v40 = v49;
          *v41 = v48;
          v43 = v48;
        }
        ++v12;
        v13 += 40;
        v45 = v43 + 12 * v42;
        *(_QWORD *)v45 = 0;
        *(_WORD *)(v45 + 8) = 0;
        ++v41[1];
        *(_BYTE *)(v45 + 9) = v39;
        *(_DWORD *)v45 = v44;
        *(_WORD *)(v45 + 4) = 0;
        *(_WORD *)(v45 + 6) = v40;
        *(_BYTE *)(v45 + 8) = 2;
        if ( v12 != 8 )
          continue;
        return v56 - __readfsqword(0x28u);
      case 4:
        v14 = v51;
        v15 = *(unsigned __int16 *)(v13 + 5);
        v16 = v51[1];
        v17 = *v51;
        v18 = v16 + 1;
        if ( v51[2] < (unsigned __int64)(v16 + 1) )
        {
LABEL_26:
          v28 = qvector_reserve(v14, v17, v18, 12);
          v16 = v14[1];
          *v14 = v28;
          v17 = v28;
        }
LABEL_11:
        v19 = v17 + 12 * v16;
        *(_QWORD *)v19 = 0;
        *(_WORD *)(v19 + 8) = 0;
        ++v14[1];
        *(_BYTE *)(v19 + 9) = v12;
        *(_DWORD *)v19 = v15;
        *(_WORD *)(v19 + 4) = 0;
        *(_BYTE *)(v19 + 8) = 2;
        *(_WORD *)(v19 + 6) = v49;
        goto LABEL_12;
      case 0xC:
        v55 = 0u;
        v21 = *(_QWORD *)(v13 + 23);
        v54 = 0;
        v22 = operator new(0x18u);
        *(_DWORD *)(v22 + 8) = v12;
        *(_QWORD *)v22 = &v51;
        v23 = _mm_loadl_epi64((const __m128i *)&off_6A100);
        *(_QWORD *)(v22 + 16) = v49;
        *(_QWORD *)&v54 = v22;
        v55 = _mm_unpacklo_epi64(v23, (__m128i)(unsigned __int64)sub_29200);
        v24 = bitcountr_zero(v21);
        for ( i = v21 >> v24; i; i >>= 1 )
        {
          while ( (i & 1) == 0 )
          {
            ++v24;
            i >>= 1;
          }
          if ( v24 > 63 )
            v26 = -1;
          else
            v26 = v24;
          v50 = v26;
          if ( !v55.m128i_i64[0] )
            std::__throw_bad_function_call();
          if ( ((unsigned int (__fastcall *)(__int128 *, int *))v55.m128i_i64[1])(&v54, &v50) )
            break;
          ++v24;
        }
        if ( !v55.m128i_i64[0] )
          goto LABEL_12;
        ++v12;
        v13 += 40;
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v55.m128i_i64[0])(&v54, &v54, 3);
        if ( v12 == 8 )
          return v56 - __readfsqword(0x28u);
        continue;
      default:
LABEL_12:
        ++v12;
        v13 += 40;
        if ( v12 != 8 )
          continue;
        return v56 - __readfsqword(0x28u);
    }
  }
}
