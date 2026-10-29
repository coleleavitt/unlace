unsigned __int64 __fastcall sub_153C0(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4, int a5, __int32 a6)
{
  _QWORD *func; // rsi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbp
  unsigned __int64 that; // r15
  __int128 v13; // xmm0
  unsigned __int64 *v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rsi
  unsigned __int64 *v23; // rdi
  int v24; // eax
  unsigned __int64 *v25; // rax
  int v26; // eax
  __int32 v27; // ebx
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // r10
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rsi
  unsigned __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // r10
  __int64 v45; // rax
  unsigned __int64 v46; // rcx
  __int64 v47; // rsi
  __int64 v48; // rax
  __m128i v49; // xmm1
  __int32 v50; // eax
  __int64 v51; // rax
  __int64 v52; // rax
  unsigned __int64 v53; // [rsp+10h] [rbp-238h]
  _QWORD *v54; // [rsp+18h] [rbp-230h]
  unsigned __int64 v58; // [rsp+30h] [rbp-218h]
  int v59; // [rsp+38h] [rbp-210h]
  char v60; // [rsp+3Fh] [rbp-209h]
  __int64 v61; // [rsp+40h] [rbp-208h]
  __int64 v62; // [rsp+50h] [rbp-1F8h] BYREF
  int v63; // [rsp+58h] [rbp-1F0h]
  __int128 v64; // [rsp+60h] [rbp-1E8h]
  _OWORD v65[2]; // [rsp+70h] [rbp-1D8h] BYREF
  __int64 v66; // [rsp+90h] [rbp-1B8h]
  __int128 v67; // [rsp+A0h] [rbp-1A8h] BYREF
  __int64 v68; // [rsp+B0h] [rbp-198h]
  __int64 v69; // [rsp+B8h] [rbp-190h]
  __int64 v70; // [rsp+C0h] [rbp-188h]
  _BYTE v71[16]; // [rsp+C8h] [rbp-180h] BYREF
  int v72; // [rsp+D8h] [rbp-170h]
  __m128i v73; // [rsp+F0h] [rbp-158h] BYREF
  __m128i v74; // [rsp+100h] [rbp-148h] BYREF
  __int64 v75; // [rsp+110h] [rbp-138h]
  unsigned __int64 v76; // [rsp+208h] [rbp-40h] BYREF

  v76 = __readfsqword(0x28u);
  func = (_QWORD *)get_func(a4);
  v54 = func;
  if ( func == nullptr || a3 == nullptr || a2 == nullptr )
    return v76 - __readfsqword(0x28u);
  v10 = *func;
  v11 = func[1];
  v64 = 0;
  v53 = v10;
  v62 = 0;
  func_tail_iterator_set(&v62, func, -1);
  v60 = 1;
  while ( 2 )
  {
    if ( v53 >= v11 )
      goto LABEL_58;
    that = v53;
    v13 = 0;
    v59 = -1;
    v58 = v53;
    do
    {
      while ( 1 )
      {
        v68 = -1;
        v14 = (unsigned __int64 *)v71;
        v69 = 0;
        v70 = 0;
        v67 = -1;
        do
        {
          *(_WORD *)v14 = 0;
          v14 += 5;
          *((_WORD *)v14 - 19) = 0;
          *((_WORD *)v14 - 18) = 0;
          *((_DWORD *)v14 - 2) = 0;
          *((_WORD *)v14 - 17) = 0;
          *((_OWORD *)v14 - 2) = v13;
          *(v14 - 2) = 0;
        }
        while ( v14 != &v76 );
        if ( (int)decode_insn(&v67, that, 0, *(double *)&v13) <= 0 )
          goto LABEL_12;
        LOBYTE(v15) = (_WORD)v69 == 7 || (_WORD)v69 == 122;
        if ( !(_BYTE)v15 && (_WORD)v69 != 131 )
          goto LABEL_12;
        if ( (unsigned __int8)(v71[1] - 3) > 1u || !sub_13BC0((__int64)&v67, 5, 1u) || a5 != v72 )
          goto LABEL_12;
        if ( (_WORD)v69 == 7 )
        {
          v27 = 0;
          if ( v73.m128i_i8[1] != 5 )
            goto LABEL_47;
        }
        else if ( v73.m128i_i8[1] != 5 )
        {
          if ( (_WORD)v69 == 122 && v73.m128i_i8[1] == 1 )
          {
            v49 = _mm_load_si128(&v73);
            v66 = v75;
            v65[0] = v49;
            v65[1] = _mm_load_si128(&v74);
            v27 = sub_14A40(a1, (__int64)v65, that, a6);
            if ( a6 == v27 && (unsigned __int16)(WORD3(v65[0]) - 16) <= 3u )
            {
              WORD3(v65[0]) -= 16;
              v50 = sub_14A40(a1, (__int64)v65, that, a6);
              v27 = v50;
              if ( v50 != -1 && a6 != v50 )
                v27 = (unsigned __int8)v50;
            }
          }
          else
          {
            v27 = a6;
          }
          goto LABEL_47;
        }
        v27 = v73.m128i_i32[2];
LABEL_47:
        v61 = v68;
        if ( v68 != v58 && v58 == v53 )
        {
          v42 = a2[1];
          v43 = *a2;
          if ( a2[2] < (unsigned __int64)(v42 + 1) )
          {
            v52 = qvector_reserve(a2, v43, v42 + 1, 8);
            *a2 = v52;
            v43 = v52;
            v42 = a2[1];
          }
          v44 = v59;
          *(_QWORD *)(v43 + 8 * v42) = v58;
          ++a2[1];
          v45 = a3[1];
          v46 = a3[2];
          v47 = *a3;
          *(_QWORD *)&v65[0] = v59;
          if ( v46 < v45 + 1 )
          {
            v51 = qvector_reserve(a3, v47, v45 + 1, 8);
            *a3 = v51;
            v47 = v51;
            v44 = v59;
            v45 = a3[1];
          }
          *(_QWORD *)(v47 + 8 * v45) = v44;
          v48 = v68;
          ++a3[1];
          v61 = v48;
        }
        v28 = a2[1];
        v29 = *a2;
        if ( a2[2] < (unsigned __int64)(v28 + 1) )
        {
          v40 = qvector_reserve(a2, v29, v28 + 1, 8);
          *a2 = v40;
          v29 = v40;
          v28 = a2[1];
        }
        v30 = v27;
        *(_QWORD *)(v29 + 8 * v28) = v61;
        ++a2[1];
        v31 = a3[1];
        v32 = a3[2];
        v33 = *a3;
        *(_QWORD *)&v65[0] = v27;
        v15 = v31 + 1;
        if ( v32 < v31 + 1 )
        {
          v39 = qvector_reserve(a3, v33, v15, 8);
          *a3 = v39;
          v33 = v39;
          v30 = v27;
          v31 = a3[1];
        }
        *(_QWORD *)(v33 + 8 * v31) = v30;
        ++a3[1];
        v58 = v61;
        v59 = v27;
LABEL_12:
        v16 = that + WORD1(v69);
        if ( v16 >= v11 || !WORD1(v69) )
          break;
        v13 = 0;
        if ( (get_flags_ex(that + WORD1(v69), 4, v15) & 0x10000) == 0 )
        {
          that = v16 - WORD1(v69);
          break;
        }
        that = v16;
      }
      that = next_that(that, v11, sub_E0F0, 0);
      v13 = 0;
      if ( v68 == that || !WORD1(v69) || (v13 = 0, (int)decode_insn(&v67, v16, v17, 0.0) <= 0) )
      {
        if ( that == -1 )
          break;
      }
      else if ( that >= v68 + (unsigned __int64)WORD1(v69) )
      {
        that = v16;
      }
    }
    while ( that < v11 );
    if ( v58 == v53 )
    {
      if ( v59 == -1 )
      {
LABEL_58:
        v34 = a2[1];
        v35 = *a2;
        if ( a2[2] < (unsigned __int64)(v34 + 1) )
        {
          v41 = qvector_reserve(a2, v35, v34 + 1, 8);
          *a2 = v41;
          v35 = v41;
          v34 = a2[1];
        }
        *(_QWORD *)(v35 + 8 * v34) = v53;
        ++a2[1];
        v20 = a3[1];
        v36 = a3[2];
        v22 = *a3;
        *(_QWORD *)&v65[0] = -1;
        if ( v36 >= v20 + 1 )
          goto LABEL_23;
      }
      else
      {
LABEL_20:
        v18 = a2[1];
        v19 = *a2;
        if ( a2[2] < (unsigned __int64)(v18 + 1) )
        {
          v38 = qvector_reserve(a2, v19, v18 + 1, 8);
          *a2 = v38;
          v19 = v38;
          v18 = a2[1];
        }
        *(_QWORD *)(v19 + 8 * v18) = v11;
        ++a2[1];
        v20 = a3[1];
        v21 = a3[2];
        v22 = *a3;
        *(_QWORD *)&v65[0] = -1;
        if ( v21 >= v20 + 1 )
          goto LABEL_23;
      }
      v37 = qvector_reserve(a3, v22, v20 + 1, 8);
      *a3 = v37;
      v22 = v37;
      v20 = a3[1];
LABEL_23:
      *(_QWORD *)(v22 + 8 * v20) = -1;
      ++a3[1];
      goto LABEL_24;
    }
    if ( v59 != -1 )
      goto LABEL_20;
LABEL_24:
    v23 = (unsigned __int64 *)v62;
    if ( v60 )
    {
      if ( !v62 )
        return v76 - __readfsqword(0x28u);
      v24 = *(_DWORD *)(v62 + 128);
      v63 = 0;
      if ( v24 <= 0 )
        goto LABEL_33;
      v25 = *(unsigned __int64 **)(v62 + 136);
      v53 = *v25;
      if ( *v25 == *v54 )
        goto LABEL_28;
LABEL_65:
      v23 = v25;
LABEL_32:
      v60 = 0;
      v11 = v23[1];
      continue;
    }
    break;
  }
  if ( v62 )
  {
LABEL_28:
    while ( 1 )
    {
      v26 = v63 + 1;
      if ( v63 + 1 >= *(_DWORD *)(v62 + 128) )
        break;
      ++v63;
      if ( v26 < 0 || v26 >= *(_DWORD *)(v62 + 128) )
      {
        if ( *v54 != *(_QWORD *)v62 )
        {
          v53 = *(_QWORD *)v62;
          goto LABEL_32;
        }
      }
      else
      {
        v25 = (unsigned __int64 *)(*(_QWORD *)(v62 + 136) + 16LL * v26);
        if ( *v25 != *v54 )
        {
          v53 = *v25;
          goto LABEL_65;
        }
      }
    }
LABEL_33:
    lock_func_range(v62, 0);
  }
  return v76 - __readfsqword(0x28u);
}

