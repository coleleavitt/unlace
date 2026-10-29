unsigned __int64 __fastcall sub_82740(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r12
  unsigned __int64 *v11; // rax
  char v12; // al
  unsigned __int64 *v13; // r12
  Elf64_Rela *v14; // r8
  __int64 v15; // rax
  _QWORD *v16; // rdi
  __int64 (__fastcall *v17)(__int64, __int64); // rax
  __int64 v18; // rsi
  __int64 v19; // rdx
  _QWORD *v20; // rax
  unsigned __int64 v21; // r8
  __int64 v22; // rax
  _QWORD *v23; // rdi
  __int64 (__fastcall *v24)(__int64, __int64); // rax
  __int64 v25; // rsi
  __m128i v26; // xmm1
  __m128i v27; // xmm1
  char v28; // al
  _QWORD *v29; // rax
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // rsi
  __int16 v34; // ax
  __int64 *v35; // r12
  __int64 *v36; // r15
  __int64 v37; // rdx
  __int64 v38; // rbx
  _QWORD *v39; // rcx
  _QWORD *v40; // rax
  unsigned __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  __m128i v44; // [rsp+0h] [rbp-230h] BYREF
  __int64 v45; // [rsp+10h] [rbp-220h]
  __int128 *v46; // [rsp+18h] [rbp-218h]
  unsigned __int64 *v47; // [rsp+20h] [rbp-210h]
  __int64 v48; // [rsp+28h] [rbp-208h]
  __int64 *v49; // [rsp+30h] [rbp-200h] BYREF
  __int128 v50; // [rsp+38h] [rbp-1F8h]
  __int64 v51; // [rsp+50h] [rbp-1E0h]
  __m128i v52; // [rsp+58h] [rbp-1D8h]
  char v53; // [rsp+68h] [rbp-1C8h]
  __int64 v54; // [rsp+70h] [rbp-1C0h]
  __m128i v55; // [rsp+78h] [rbp-1B8h] BYREF
  char v56; // [rsp+88h] [rbp-1A8h]
  __int128 v57; // [rsp+90h] [rbp-1A0h] BYREF
  __int64 v58; // [rsp+A0h] [rbp-190h]
  __int64 v59; // [rsp+A8h] [rbp-188h]
  __int64 v60; // [rsp+B0h] [rbp-180h]
  char v61; // [rsp+B8h] [rbp-178h] BYREF
  _BYTE v62[41]; // [rsp+E0h] [rbp-150h] BYREF
  char v63; // [rsp+109h] [rbp-127h]
  unsigned __int64 v64; // [rsp+1F8h] [rbp-38h] BYREF

  v48 = a1;
  v3 = *a3;
  v64 = __readfsqword(0x28u);
  v4 = a3[1];
  v50 = 0;
  v49 = 0;
  if ( !(24 * v4) )
    return v64 - __readfsqword(0x28u);
  v7 = 0;
  v47 = (unsigned __int64 *)&v61;
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    v10 = *(_QWORD *)(v3 + 8);
    if ( v8 < v9 + 1 )
    {
      v49 = (__int64 *)qvector_reserve((__int64)&v49, v7, v9 + 1, 8);
      v7 = (__int64)v49;
      v9 = v50;
    }
    *(_QWORD *)(v7 + 8 * v9) = v10;
    v9 = v50 + 1;
    *(_QWORD *)&v50 = v50 + 1;
    if ( *(_WORD *)(v3 + 16) == 14 )
    {
      v11 = v47;
      v58 = -1;
      v59 = 0;
      v60 = 0;
      v57 = -1;
      do
      {
        *(_WORD *)v11 = 0;
        v11 += 5;
        *((_WORD *)v11 - 19) = 0;
        *((_WORD *)v11 - 18) = 0;
        *((_DWORD *)v11 - 2) = 0;
        *((_WORD *)v11 - 17) = 0;
        *((_OWORD *)v11 - 2) = 0;
        *(v11 - 2) = 0;
      }
      while ( &v64 != v11 );
      v46 = &v57;
      if ( (int)decode_insn() <= 0 )
        goto LABEL_41;
      v12 = v63;
      v13 = (unsigned __int64 *)v62;
      if ( !v63 )
      {
        v12 = v62[1];
        v13 = v47;
      }
      if ( (v12 & 0xFB) != 1 )
        goto LABEL_41;
      v14 = &stru_10000;
      v15 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(v48 + 32) + 24LL) - 1);
      if ( (unsigned int)v15 <= 7 )
      {
        LODWORD(v14) = dword_90400[v15];
        if ( (_DWORD)v14 != (_DWORD)&stru_10000 )
          LODWORD(v14) = *((unsigned __int16 *)v13 + 3) | (unsigned int)v14;
      }
      v53 = 0;
      v52 = 0;
      v16 = *(_QWORD **)(v48 + 616);
      v51 = 0;
      v17 = *(__int64 (__fastcall **)(__int64, __int64))(*v16 + 16LL);
      v18 = *(_QWORD *)(*(_QWORD *)(v16[1] + 32LL) + 16LL) & v58;
      if ( v17 != sub_80020 )
      {
        v44.m128i_i32[0] = (int)v14;
        v45 = (__int64)v16;
        ((void (__fastcall *)(_QWORD *, __int64, _QWORD, __int64))v17)(v16, v18, 0, -1);
      }
      reg_finder_find();
      if ( (unsigned __int8)(v53 - 10) > 1u )
        goto LABEL_25;
      v19 = v51;
      if ( v52.m128i_i64[0] == 1 || (v20 = (_QWORD *)(v51 + 24), 24 * v52.m128i_i64[0] == 24) )
      {
LABEL_53:
        v34 = *(_WORD *)(v51 + 16);
        if ( *((_BYTE *)v13 + 41) == 5 )
        {
          if ( v34 != 497 )
            goto LABEL_39;
          if ( !v51 )
            goto LABEL_25;
        }
        else if ( v34 != 30 || !v51 )
        {
LABEL_25:
          v21 = (unsigned __int64)&stru_10000;
          v22 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(v48 + 32) + 24LL) - 1);
          if ( (unsigned int)v22 <= 7 )
          {
            v21 = (unsigned int)dword_90400[v22];
            if ( (_DWORD)v21 != (_DWORD)&stru_10000 )
              v21 = *((unsigned __int16 *)v13 + 23) | (unsigned int)v21;
          }
          v56 = 0;
          v55 = 0;
          v23 = *(_QWORD **)(v48 + 616);
          v54 = 0;
          v24 = *(__int64 (__fastcall **)(__int64, __int64))(*v23 + 16LL);
          v25 = *(_QWORD *)(*(_QWORD *)(v23[1] + 32LL) + 16LL) & v58;
          if ( v24 != sub_80020 )
          {
            v44.m128i_i32[0] = v21;
            v45 = (__int64)v23;
            ((void (__fastcall *)(_QWORD *, __int64, _QWORD, __int64, unsigned __int64, __int64, __int64))v24)(
              v23,
              v25,
              0,
              -1,
              v21,
              10,
              v44.m128i_i64[0]);
          }
          reg_finder_find();
          v19 = v54;
          v54 = 0;
          v26 = _mm_loadu_si128(&v55);
          v55 = 0;
          if ( v51 )
          {
            v45 = v19;
            v44 = v26;
            v52.m128i_i64[0] = 0;
            qfree(v51);
            v19 = v45;
            v27 = _mm_load_si128(&v44);
            v28 = v56;
            v51 = v45;
            v53 = v56;
            v52 = v27;
            if ( v54 )
            {
              v55.m128i_i64[0] = 0;
              qfree(v54);
              v28 = v53;
              v19 = v51;
            }
          }
          else
          {
            v28 = v56;
            v51 = v19;
            v52 = v26;
            v53 = v56;
          }
          if ( (unsigned __int8)(v28 - 10) > 1u )
            goto LABEL_39;
          if ( v52.m128i_i64[0] != 1 )
          {
            v29 = (_QWORD *)(v19 + 24);
            if ( 24 * v52.m128i_i64[0] != 24 )
            {
              while ( *(_QWORD *)v19 == *v29 )
              {
                v29 += 3;
                if ( (_QWORD *)(v19 + 24 * v52.m128i_i64[0]) == v29 )
                  goto LABEL_44;
              }
LABEL_39:
              if ( v19 )
              {
                v52.m128i_i64[0] = 0;
                qfree(v19);
              }
LABEL_41:
              if ( v49 )
              {
                *(_QWORD *)&v50 = 0;
                qfree((__int64)v49);
              }
              return v64 - __readfsqword(0x28u);
            }
          }
LABEL_44:
          if ( *(_WORD *)(v19 + 16) != 30 )
            goto LABEL_39;
        }
        v31 = v50;
        v32 = *(_QWORD *)(v19 + 8);
        v33 = (__int64)v49;
        if ( *((_QWORD *)&v50 + 1) < (unsigned __int64)(v50 + 1) )
        {
          v45 = *(_QWORD *)(v19 + 8);
          v49 = (__int64 *)qvector_reserve((__int64)&v49, (__int64)v49, v50 + 1, 8);
          v33 = (__int64)v49;
          v32 = v45;
          v31 = v50;
        }
        *(_QWORD *)(v33 + 8 * v31) = v32;
        *(_QWORD *)&v50 = v50 + 1;
        if ( *((_BYTE *)v13 + 41) == 1 )
          sub_2E450(v48, (__int64)v46, *((unsigned __int16 *)v13 + 3), *((unsigned __int16 *)v13 + 23));
        if ( v51 )
        {
          v52.m128i_i64[0] = 0;
          qfree(v51);
        }
        v9 = v50;
        goto LABEL_4;
      }
      while ( *(_QWORD *)v51 == *v20 )
      {
        v20 += 3;
        if ( (_QWORD *)(v51 + 24 * v52.m128i_i64[0]) == v20 )
          goto LABEL_53;
      }
      goto LABEL_25;
    }
LABEL_4:
    v3 += 24;
    v7 = (__int64)v49;
    if ( v3 == *a3 + 24 * a3[1] )
      break;
    v8 = *((_QWORD *)&v50 + 1);
  }
  v35 = &v49[v9];
  if ( v35 != v49 )
  {
    v36 = v49;
    do
    {
      v37 = a2[1];
      v38 = *v36;
      v39 = (_QWORD *)(*a2 + 8 * v37);
      if ( (_QWORD *)*a2 == v39 )
        goto LABEL_68;
      v40 = (_QWORD *)*a2;
      while ( v38 != *v40 )
      {
        if ( v39 == ++v40 )
          goto LABEL_68;
      }
      if ( v40 == v39 )
      {
LABEL_68:
        v41 = v37 + 1;
        if ( a2[2] < v41 )
        {
          v42 = qvector_reserve((__int64)a2, *a2, v41, 8);
          v43 = a2[1];
          *a2 = v42;
          v39 = (_QWORD *)(v42 + 8 * v43);
        }
        *v39 = v38;
        ++a2[1];
      }
      ++v36;
    }
    while ( v35 != v36 );
    v7 = (__int64)v49;
  }
  if ( v7 )
  {
    *(_QWORD *)&v50 = 0;
    qfree(v7);
  }
  return v64 - __readfsqword(0x28u);
}
