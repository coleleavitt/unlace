__int64 __fastcall sub_45280(
        __int64 a1,
        char a2,
        double a3,
        double a4,
        __m128 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // r12
  unsigned int v16; // esi
  __int64 v17; // rax
  __int64 v18; // rbp
  unsigned __int8 v19; // bl
  __int64 v20; // rdx
  __int64 v21; // rcx
  __m128i *v22; // r13
  __int64 v23; // rbx
  __m128i *v24; // rbp
  unsigned __int64 v25; // rdx
  const __m128i *v26; // rbx
  const __m128i *v27; // rdi
  unsigned int v28; // ebp
  __int64 *v29; // rax
  char *v30; // r13
  __int64 v31; // rbx
  unsigned __int64 *v32; // r12
  unsigned __int64 v33; // rdx
  unsigned __int64 *v34; // rbx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  unsigned __int64 *v37; // rax
  unsigned __int64 *v38; // rsi
  __int64 *v39; // rbx
  __int64 *v40; // r13
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 *v43; // rbx
  __int64 *v44; // r13
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rsi
  int v49; // eax
  int v50; // ebp
  __int64 v51; // rdi
  unsigned __int64 v52; // r14
  unsigned __int16 *v53; // rax
  unsigned __int16 *v54; // rdi
  const void *v55; // rsi
  unsigned __int16 *v56; // rax
  unsigned __int16 *v57; // rdi
  const void *v58; // rsi
  __int64 v59; // r10
  int v60; // eax
  __int64 v61; // rax
  unsigned __int64 *v62; // rsi
  unsigned __int64 v64; // [rsp+18h] [rbp-1B0h] BYREF
  __int128 v65; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v66; // [rsp+30h] [rbp-198h]
  __int64 v67; // [rsp+38h] [rbp-190h]
  __int64 v68; // [rsp+40h] [rbp-188h]
  _BYTE v69[6]; // [rsp+48h] [rbp-180h] BYREF
  __int16 v70; // [rsp+4Eh] [rbp-17Ah]
  __int64 v71; // [rsp+58h] [rbp-170h]
  __int64 v72; // [rsp+80h] [rbp-148h]
  _QWORD v73[8]; // [rsp+188h] [rbp-40h] BYREF

  v10 = (__int64)v73;
  v73[0] = __readfsqword(0x28u);
  v65 = -1;
  v11 = v69;
  v66 = -1;
  v67 = 0;
  v68 = 0;
  do
  {
    v12 = 0;
    v13 = 0;
    *(_WORD *)v11 = 0;
    v11 += 5;
    *((_WORD *)v11 - 19) = 0;
    *((_WORD *)v11 - 18) = 0;
    *((_DWORD *)v11 - 2) = 0;
    *((_WORD *)v11 - 17) = 0;
    *((_OWORD *)v11 - 2) = 0;
    *(v11 - 2) = 0;
  }
  while ( v11 != v73 );
  v14 = *(unsigned __int64 **)(a1 + 8);
  v15 = *v14;
  if ( *v14 < v14[1] )
  {
    while ( (int)decode_insn(&v65, v15, v10, v12, v13, a9, 0.0) > 0 )
    {
      if ( sub_2D360((unsigned __int16)v67) )
      {
        v16 = (unsigned __int16)v67;
        v17 = *((_QWORD *)&v65 + 1) + ((v68 & 0x400) == 0 ? 8LL : 6LL);
        if ( (_WORD)v67 == 203 )
        {
          if ( v17 != v71 )
          {
            v16 = 203;
LABEL_9:
            v18 = *(_QWORD *)a1;
            v19 = (v68 & 0x400) != 0;
            if ( ((unsigned __int8)sub_1E660(*(_QWORD *)a1, v16, v19) || sub_1E5E0(v18, v16, v19))
              && !sub_1E730(*(_QWORD *)a1, (unsigned __int16)v67, (v68 & 0x400) != 0)
              && (int)decode_insn(&v65, v15 + WORD1(v67), v20, v21, v13, a9, 0.0) > 0 )
            {
              sub_44000(a1, (__int64)&v65);
            }
            break;
          }
        }
        else if ( (v67 & 0xFFF7) != 0x63 || v69[1] != 1 || v70 || v17 != v72 )
        {
          goto LABEL_9;
        }
      }
      v49 = sub_44000(a1, (__int64)&v65);
      v50 = v49;
      if ( v49 )
      {
        if ( v49 == 2 )
          break;
        v51 = *(_QWORD *)a1;
        v64 = 0;
        sub_2AAE0(v51, &v64, (__int64)&v65, -1);
        v52 = v64;
        if ( (v64 & 0x20000000) != 0 )
          break;
        v53 = *(unsigned __int16 **)(a1 + 72);
        v54 = v53;
        v10 = (__int64)&v53[8 * *(_QWORD *)(a1 + 80)];
        if ( v53 != (unsigned __int16 *)v10 )
        {
          do
          {
            while ( 1 )
            {
              v12 = v54[4];
              v55 = v54 + 8;
              if ( v54[4] <= 0x3Fu )
              {
                a9 = 1LL << v12;
                v12 = a9;
                if ( (a9 & v52) != 0 )
                  break;
              }
              v54 += 8;
              v10 = (__int64)&v53[8 * *(_QWORD *)(a1 + 80)];
              if ( (const void *)v10 == v55 )
                goto LABEL_46;
            }
            v52 &= ~a9;
            v54 = (unsigned __int16 *)memmove(v54, v55, v10 - (_QWORD)v54 - 16);
            v10 = *(_QWORD *)(a1 + 80) - 1LL;
            *(_QWORD *)(a1 + 80) = v10;
            if ( !v52 )
              break;
            v53 = *(unsigned __int16 **)(a1 + 72);
            v10 = (__int64)&v53[8 * v10];
          }
          while ( (unsigned __int16 *)v10 != v54 );
LABEL_46:
          v52 = v64;
        }
        if ( v50 != 1 )
        {
          v56 = *(unsigned __int16 **)(a1 + 96);
          v57 = v56;
          v10 = (__int64)&v56[8 * *(_QWORD *)(a1 + 104)];
          if ( (unsigned __int16 *)v10 != v56 )
          {
            do
            {
              while ( 1 )
              {
                v12 = v57[4];
                v58 = v57 + 8;
                if ( v57[4] <= 0x3Fu )
                {
                  v59 = 1LL << v12;
                  v12 = v59;
                  if ( (v59 & v52) != 0 )
                    break;
                }
                v57 += 8;
                v10 = (__int64)&v56[8 * *(_QWORD *)(a1 + 104)];
                if ( (const void *)v10 == v58 )
                  goto LABEL_55;
              }
              v52 &= ~v59;
              v57 = (unsigned __int16 *)memmove(v57, v58, v10 - (_QWORD)v57 - 16);
              v10 = *(_QWORD *)(a1 + 104) - 1LL;
              *(_QWORD *)(a1 + 104) = v10;
              if ( !v52 )
                break;
              v56 = *(unsigned __int16 **)(a1 + 96);
              v10 = (__int64)&v56[8 * v10];
            }
            while ( (unsigned __int16 *)v10 != v57 );
LABEL_55:
            v52 = v64;
          }
        }
        v60 = *(_DWORD *)(a1 + 148);
        *(_QWORD *)(a1 + 120) |= v52;
        if ( !v60 && (v52 & 0x2000000) != 0 )
          *(_DWORD *)(a1 + 148) = 1;
      }
      v15 += WORD1(v67);
      if ( v15 >= *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) )
        break;
    }
  }
  v22 = *(__m128i **)(a1 + 24);
  v23 = 2LL * *(_QWORD *)(a1 + 32);
  v24 = &v22[v23];
  if ( v22 != &v22[v23] )
  {
    if ( (v23 * 16) >> 5 )
    {
      _BitScanReverse64(&v25, (v23 * 16) >> 5);
      sub_44F10(
        *(__m128i **)(a1 + 24),
        &v22[v23],
        2LL * (int)v25,
        (__int64 (__fastcall *)(__int64, __int64))sub_43030,
        v13,
        a9);
      if ( v23 > 32 )
      {
        v26 = v22 + 32;
        sub_44AE0(v22, v22 + 32, (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_43030);
        do
        {
          v27 = v26;
          v26 += 2;
          sub_44A50(v27, (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_43030);
        }
        while ( v24 != v26 );
        goto LABEL_16;
      }
    }
    else
    {
      sub_44F10(*(__m128i **)(a1 + 24), &v22[v23], -2, (__int64 (__fastcall *)(__int64, __int64))sub_43030, v13, a9);
    }
    sub_44AE0(v22, &v22[v23], (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_43030);
  }
LABEL_16:
  if ( *(_DWORD *)(a1 + 148) == 2 )
    *(_DWORD *)(a1 + 16) |= 1u;
  v28 = sub_43A10((_QWORD *)a1, a2);
  if ( (_BYTE)v28 )
  {
    v29 = *(__int64 **)(a1 + 8);
    if ( v29[1] - *v29 != 1 )
      sub_438A0((unsigned int *)(a1 + 16), *(_QWORD *)a1, *v29);
    v30 = *(char **)(a1 + 48);
    v31 = 8LL * *(_QWORD *)(a1 + 56);
    v32 = (unsigned __int64 *)&v30[v31];
    if ( v30 != &v30[v31] )
    {
      if ( v31 >> 3 )
      {
        _BitScanReverse64(&v33, v31 >> 3);
        sub_432D0(*(__m128i **)(a1 + 48), v32, 2LL * (int)v33, 0.0, a4, a5);
        if ( v31 > 128 )
        {
          v34 = (unsigned __int64 *)(v30 + 128);
          sub_43200(v30, v30 + 128);
          do
          {
            while ( 1 )
            {
              v35 = *v34;
              v36 = *(v34 - 1);
              v37 = v34 - 1;
              if ( *v34 < v36 )
                break;
              v62 = v34++;
              *v62 = v35;
              if ( v32 == v34 )
                goto LABEL_28;
            }
            do
            {
              v37[1] = v36;
              v38 = v37;
              v36 = *--v37;
            }
            while ( v35 < v36 );
            ++v34;
            *v38 = v35;
          }
          while ( v32 != v34 );
          goto LABEL_28;
        }
      }
      else
      {
        sub_432D0(*(__m128i **)(a1 + 48), v32, -2, 0.0, a4, a5);
      }
      sub_43200(v30, (char *)v32);
    }
LABEL_28:
    v39 = *(__int64 **)(a1 + 24);
    v40 = &v39[4 * *(_QWORD *)(a1 + 32)];
    while ( v40 != v39 )
    {
      v41 = *(_QWORD *)a1;
      v42 = *v39;
      LOBYTE(v64) = 1;
      v39 += 4;
      netnode_supset(*(_QWORD *)(v41 + 104), v42, &v64, 1, 256);
    }
    v43 = *(__int64 **)(a1 + 48);
    v44 = &v43[*(_QWORD *)(a1 + 56)];
    while ( v44 != v43 )
    {
      v45 = *(_QWORD *)a1;
      v46 = *v43;
      LOBYTE(v64) = 1;
      ++v43;
      netnode_supset(*(_QWORD *)(v45 + 104), v46, &v64, 1, 256);
    }
    v47 = *(_QWORD *)(a1 + 136);
    if ( v47 != -1 )
    {
      v61 = *(_QWORD *)a1;
      LOBYTE(v64) = 1;
      netnode_supset(*(_QWORD *)(v61 + 104), v47, &v64, 1, 256);
    }
  }
  return v28;
}
