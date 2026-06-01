unsigned __int64 __fastcall sub_AB00(__int64 a1)
{
  __m128i v1; // xmm0
  unsigned int v2; // r12d
  unsigned int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned __int64 v7; // r13
  __int64 v8; // r15
  unsigned __int64 v9; // r13
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rax
  unsigned int v13; // ebp
  unsigned int v14; // r12d
  unsigned __int64 v15; // r14
  __int64 v16; // r12
  __int64 v17; // rdi
  __int64 v18; // r14
  __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __m128i v24; // xmm1
  __int64 v25; // rax
  __m128i v26; // xmm2
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // r14
  unsigned int dword; // eax
  __m128i v39; // xmm5
  __m128i si128; // [rsp+0h] [rbp-1B8h] BYREF
  unsigned __int64 v41; // [rsp+18h] [rbp-1A0h]
  __int64 v42; // [rsp+20h] [rbp-198h]
  __int64 v43; // [rsp+28h] [rbp-190h]
  __int64 v44; // [rsp+30h] [rbp-188h]
  __int64 v45; // [rsp+38h] [rbp-180h]
  __int64 v46; // [rsp+40h] [rbp-178h]
  __int64 v47; // [rsp+48h] [rbp-170h]
  __int64 v48; // [rsp+50h] [rbp-168h] BYREF
  __m128i v49; // [rsp+58h] [rbp-160h]
  __int64 v50; // [rsp+68h] [rbp-150h]
  __int64 v51; // [rsp+70h] [rbp-148h]
  __m128i v52; // [rsp+80h] [rbp-138h] BYREF
  __m128i v53; // [rsp+90h] [rbp-128h]
  __m128i v54; // [rsp+A0h] [rbp-118h]
  __m128i v55[2]; // [rsp+B0h] [rbp-108h] BYREF
  __m128i v56; // [rsp+D0h] [rbp-E8h] BYREF
  __m128i v57; // [rsp+E0h] [rbp-D8h]
  __m128i v58; // [rsp+F0h] [rbp-C8h]
  __m128i v59[2]; // [rsp+100h] [rbp-B8h] BYREF
  __m128i v60; // [rsp+120h] [rbp-98h] BYREF
  __m128i v61; // [rsp+130h] [rbp-88h] BYREF
  __m128i v62; // [rsp+140h] [rbp-78h] BYREF
  __m128i v63[2]; // [rsp+150h] [rbp-68h] BYREF
  unsigned __int64 v64; // [rsp+178h] [rbp-40h]

  v1.m128i_i64[0] = 0;
  v2 = 1;
  v64 = __readfsqword(0x28u);
  memset(v55, 0, 28);
  memset(v59, 0, 28);
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v4 = sub_69D0((unsigned __int16 *)(a1 + 57));
  qlseek(*(_QWORD *)(a1 + 8), v4, 0);
  if ( *(_DWORD *)(a1 + 61) )
  {
    do
    {
      while ( 1 )
      {
        sub_8010(*(_QWORD *)(a1 + 8), (unsigned __int16 *)(a1 + 57), (__int64)&v60, *(_BYTE *)(a1 + 382));
        if ( v60.m128i_i64[0] == 0x6D79736E79642ELL )
        {
          v52 = _mm_load_si128(&v60);
          v53 = _mm_load_si128(&v61);
          v54 = _mm_load_si128(&v62);
          v55[0] = _mm_load_si128(v63);
          v1 = _mm_loadu_si128((const __m128i *)((char *)&v63[0].m128i_u64[1] + 4));
          *(__m128i *)((char *)v55 + 12) = v1;
        }
        if ( v60.m128i_i64[0] == 0x6E79642E6C65722ELL && !v60.m128i_i8[8] )
          break;
        if ( *(_DWORD *)(a1 + 61) < ++v2 )
          goto LABEL_9;
      }
      ++v2;
      v56 = _mm_load_si128(&v60);
      v57 = _mm_load_si128(&v61);
      v58 = _mm_load_si128(&v62);
      v59[0] = _mm_load_si128(v63);
      v1 = _mm_loadu_si128((const __m128i *)((char *)&v63[0].m128i_u64[1] + 4));
      *(__m128i *)((char *)v59 + 12) = v1;
    }
    while ( *(_DWORD *)(a1 + 61) >= v2 );
  }
LABEL_9:
  v5 = sub_87D0(*(_QWORD *)(a1 + 8), (__int64)&v52);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = v54.m128i_i64[0];
  v44 = v5;
  v45 = sub_87D0(v6, (__int64)&v56);
  if ( v45 )
  {
    if ( !v44 )
      sub_6000((__int64)"bad input: .rel.dyn without .dynsym");
    if ( (unsigned __int64)v58.m128i_i64[0] >> 4 )
    {
      v8 = v45;
      v41 = 16 * ((unsigned __int64)v58.m128i_i64[0] >> 4) + v45;
      v9 = v7 / 0x18;
      do
      {
        while ( 1 )
        {
          v13 = *(_DWORD *)(v8 + 8);
          v14 = v13 >> 8;
          v15 = v13 >> 8;
          if ( v15 < v9 )
            break;
          v8 += 16;
          sub_59A0((__int64)"Illegal relocation information: symidx #%d", v14);
          if ( v41 == v8 )
            goto LABEL_20;
        }
        if ( (_BYTE)v13 )
        {
          v42 = *(_QWORD *)v8;
          if ( (unsigned __int8)is_loaded(v42) )
          {
            v10 = netnode_altval(*(_QWORD *)(a1 + 32), v15, 65);
            v43 = v10 - 1;
            if ( v10 || (v10 = netnode_altval(*(_QWORD *)(a1 + 109), v15, 65), v43 = v10 - 1, v10) )
            {
              v11 = *(_QWORD *)(a1 + 267);
              si128.m128i_i64[0] = v10;
              v12 = netnode_altval(v11, v15, 65);
              if ( (unsigned int)(unsigned __int8)v13 - 1 <= 1 )
              {
                v47 = v12;
                v46 = si128.m128i_i64[0];
                v50 = v43;
                v48 = 0;
                v51 = 0;
                si128 = _mm_load_si128((const __m128i *)&xmmword_1E280);
                v49 = si128;
                v28 = getseg(v43);
                v31 = v46;
                v32 = v47;
                if ( v28 )
                {
                  v33 = *(_QWORD *)(v28 + 48);
                  HIDWORD(v48) &= ~1u;
                  v49.m128i_i64[0] = 0;
                  v49.m128i_i64[1] = v33;
                  if ( v33 != -1 )
                  {
                    v46 = v47;
                    si128.m128i_i64[0] = v31;
                    v34 = ((__int64 (*)(void))sel2para)();
                    v32 = v46;
                    v31 = si128.m128i_i64[0];
                    v35 = v43 - 16 * v34;
LABEL_34:
                    v50 = v35;
                    if ( (unsigned __int8)v13 == 1 )
                    {
                      v37 = v42;
                      add_dword(v42, v31 - v32);
                      HIDWORD(v48) = 0;
                      LOWORD(v48) = 4;
                      dword = get_dword(v37);
                      v36 = dword - v43;
                    }
                    else
                    {
                      put_qword(v42, v43, v32, v29, v30, v31);
                      HIDWORD(v48) = 0;
                      LOWORD(v48) = 12;
                      v36 = 0;
                    }
                    v51 = v36;
                    set_fixup(v42, &v48);
                    goto LABEL_17;
                  }
                }
                else
                {
                  v39 = _mm_load_si128(&si128);
                  HIDWORD(v48) &= ~1u;
                  v49 = v39;
                }
                v35 = v43;
                goto LABEL_34;
              }
            }
            else
            {
              sub_59A0((__int64)"Illegal relocation information: target address of #%d is unknown", v14);
            }
          }
          else
          {
            sub_59A0((__int64)"Illegal relocation information: source address %a", *(double *)v1.m128i_i64);
          }
        }
LABEL_17:
        v8 += 16;
      }
      while ( v41 != v8 );
    }
  }
LABEL_20:
  v16 = netnode_supfirst(*(_QWORD *)(a1 + 267), 71);
  if ( v16 != -1 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_1E280);
    do
    {
      v19 = netnode_altval(*(_QWORD *)(a1 + 267), v16, 71);
      v18 = netnode_altval(*(_QWORD *)(a1 + 109), v16, 65) - 1;
      put_qword(v19, v18, v20, v21, v22, v23);
      v24 = _mm_load_si128(&si128);
      v48 = 12;
      v51 = 0;
      v50 = v18;
      v49 = v24;
      v25 = getseg(v18);
      if ( v25 )
      {
        v17 = *(_QWORD *)(v25 + 48);
        HIDWORD(v48) &= ~1u;
        v49.m128i_i64[0] = 0;
        v49.m128i_i64[1] = v17;
        if ( v17 != -1 )
          v18 -= 16 * sel2para(v17, v18);
      }
      else
      {
        v26 = _mm_load_si128(&si128);
        HIDWORD(v48) &= ~1u;
        v49 = v26;
      }
      v50 = v18;
      set_fixup(v19, &v48);
      v16 = netnode_supnext(*(_QWORD *)(a1 + 267), v16, 71);
    }
    while ( v16 != -1 );
  }
  netnode_kill(a1 + 267);
  qfree(v45);
  qfree(v44);
  return v64 - __readfsqword(0x28u);
}
