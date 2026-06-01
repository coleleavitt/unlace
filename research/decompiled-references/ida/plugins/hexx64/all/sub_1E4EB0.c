__int64 __fastcall sub_1E4EB0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v10; // rcx
  char v11; // al
  int v12; // esi
  __int64 v13; // rdi
  __int64 v14; // r8
  unsigned int v16; // ebp
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  bool v22; // zf
  __int64 v23; // r8
  unsigned __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // r10
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rax
  int v30; // edx
  __int64 v31; // r8
  unsigned __int64 v32; // r9
  __m128i *v33; // r12
  unsigned __int64 v34; // rdx
  __int64 v35; // r8
  unsigned __int64 v36; // r9
  __int64 v37; // r10
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rsi
  int v42; // edx
  unsigned __int64 v43; // r9
  unsigned __int64 v44; // rdx
  char v45; // al
  __m128i v46; // xmm1
  __m128i v47; // xmm0
  __m128i v48; // xmm2
  char v49; // al
  __m128i v50; // xmm1
  __m128i v51; // xmm0
  __m128i v52; // xmm2
  __int64 v53; // rax
  unsigned __int64 v54; // r13
  unsigned __int64 v55; // rdx
  __int64 *v56; // rax
  __int64 v57; // rdx
  unsigned __int64 v58; // rcx
  _QWORD *v59; // rax
  __int64 v60; // rdx
  _QWORD *v61; // rcx
  unsigned __int64 v62; // rcx
  __int64 v63; // rax
  unsigned __int64 v64; // rdx
  __int64 v65; // [rsp+8h] [rbp-E0h]
  __int64 v67; // [rsp+18h] [rbp-D0h]
  unsigned __int8 v68; // [rsp+18h] [rbp-D0h]
  __int64 v69; // [rsp+20h] [rbp-C8h]
  __int64 v70; // [rsp+20h] [rbp-C8h]
  __int64 v71; // [rsp+20h] [rbp-C8h]
  __int64 v72; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v73; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v74; // [rsp+28h] [rbp-C0h]
  __int64 v75; // [rsp+30h] [rbp-B8h]
  __m128i si128; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v77; // [rsp+50h] [rbp-98h] BYREF
  __m256i v78; // [rsp+60h] [rbp-88h] BYREF
  __m128i v79; // [rsp+80h] [rbp-68h]
  __m128i v80; // [rsp+90h] [rbp-58h]
  unsigned __int64 v81; // [rsp+A8h] [rbp-40h]

  v10 = *(unsigned __int8 *)(a3 + 32);
  v11 = *(_BYTE *)(a4 + 8);
  v12 = *(_DWORD *)(a3 + 44);
  v13 = *(int *)(a5 + 4);
  v14 = (int)a6 + *(_QWORD *)(a3 + 24);
  v81 = __readfsqword(0x28u);
  v65 = _mm_loadu_si128((const __m128i *)(a3 + 24)).m128i_i64[1];
  if ( v11 == (_BYTE)v10 )
  {
    v68 = v10;
    if ( v14 <= *(_QWORD *)a4 && v14 + (int)(v12 - a6) >= *(_QWORD *)a4 + (int)v13 )
    {
      v75 = a2;
      v69 = v14;
      sub_312C40((__int64)&si128, a3 + 40, (int)a6, v10);
      v22 = *(_BYTE *)(a3 + 32) == 5;
      memset(&v78.m256i_u64[1], 0, 24);
      v78.m256i_i64[0] = 0x800000000LL;
      if ( v22 && *(_BYTE *)(*(_QWORD *)(v75 + 96) + 145LL) )
      {
        v45 = sub_314D00(&si128, (__m128i *)&v78, si128.m128i_i32[1] - a6, v68);
        v23 = v69;
        v24 = a3;
        v25 = v68;
        v26 = v75;
        if ( !v45 )
          goto LABEL_15;
        v46 = _mm_load_si128(&si128);
        v47 = _mm_load_si128(&v77);
        si128 = _mm_load_si128((const __m128i *)&v78);
        v48 = _mm_load_si128((const __m128i *)&v78.m256i_u64[2]);
        v79 = v46;
        v80 = v47;
        v77 = v48;
        *(__m128i *)v78.m256i_i8 = v46;
        *(__m128i *)&v78.m256i_u64[2] = v47;
      }
      else
      {
        if ( !(unsigned __int8)sub_314D00(&si128, (__m128i *)&v78, a6, v68) )
          goto LABEL_15;
        v23 = v69;
        v24 = a3;
        v25 = v68;
        v26 = v75;
      }
      v27 = *(_QWORD *)a4;
      if ( v23 <= *(_QWORD *)a4 )
      {
        v28 = v23 + v78.m256i_i32[1];
        v29 = v27 + *(int *)(a5 + 4);
        if ( v28 >= v29 )
        {
          if ( (_BYTE)v25 != 5 || (v25 = *(_QWORD *)(v26 + 96), v30 = v28 - v29, !*(_BYTE *)(v25 + 145)) )
            v30 = v27 - v23;
          v73 = v24;
          v70 = v23;
          v16 = sub_314020((__m128i *)&v78, a5, v30, v25);
          if ( (_BYTE)v16 )
          {
            if ( si128.m128i_i32[0] == 1 )
            {
              v53 = *(_QWORD *)a3;
              v54 = a3;
              v33 = (__m128i *)(a1 + 8);
              if ( (*(_QWORD *)a3 & 2) == 0 )
              {
                v55 = *(_QWORD *)(a3 + 16);
                if ( (*(_BYTE *)v55 & 2) != 0 )
                {
                  v62 = a3;
                  v54 = v53 & 0xFFFFFFFFFFFFFFFCLL;
                  v63 = *(_QWORD *)(v53 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v63 & 2) == 0 )
                  {
                    while ( *(_QWORD *)(v54 + 16) == v62 )
                    {
                      v64 = v63 & 0xFFFFFFFFFFFFFFFCLL;
                      v63 = *(_QWORD *)(v63 & 0xFFFFFFFFFFFFFFFCLL);
                      if ( (v63 & 2) != 0 )
                      {
                        v54 = v64;
                        break;
                      }
                      v62 = v54;
                      v54 = v64;
                    }
                  }
                }
                else
                {
                  do
                  {
                    v54 = v55;
                    v55 = *(_QWORD *)(v55 + 8);
                  }
                  while ( (*(_BYTE *)v55 & 2) == 0 );
                }
              }
              sub_1E3D90((unsigned __int64 **)(a1 + 8), (__int64 *)a3);
              v31 = v70;
              v32 = v54;
              goto LABEL_28;
            }
            sub_312D90(a3 + 40, (__int64)&si128);
            v31 = v70;
            v32 = v73;
            v33 = (__m128i *)(a1 + 8);
            if ( (*(_QWORD *)a3 & 2) == 0 )
            {
              v34 = *(_QWORD *)(a3 + 16);
              if ( (*(_BYTE *)v34 & 2) != 0 )
              {
                v59 = (_QWORD *)(*(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL);
                v60 = *v59;
                if ( (*v59 & 2) != 0 )
                {
                  v32 = *(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL;
                  goto LABEL_28;
                }
                if ( v73 == v59[2] )
                {
                  while ( 1 )
                  {
                    v32 = v60 & 0xFFFFFFFFFFFFFFFCLL;
                    v60 = *(_QWORD *)(v60 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v60 & 2) != 0 )
                      break;
                    v61 = v59;
                    v59 = (_QWORD *)v32;
                    if ( v61 != *(_QWORD **)(v32 + 16) )
                      goto LABEL_65;
                  }
                }
                else
                {
LABEL_65:
                  v32 = (unsigned __int64)v59;
                }
              }
              else
              {
                do
                {
                  v32 = v34;
                  v34 = *(_QWORD *)(v34 + 8);
                }
                while ( (*(_BYTE *)v34 & 2) == 0 );
              }
              v33 = (__m128i *)(a1 + 8);
            }
LABEL_28:
            sub_1E45A0(v33, v32, v31, v65, (__int64)&v78);
            goto LABEL_16;
          }
        }
      }
LABEL_15:
      v16 = 0;
LABEL_16:
      sub_312B80((__int64)&v78);
      sub_312B80((__int64)&si128);
      return v16;
    }
  }
  if ( v11 == *(_BYTE *)(a3 + 32) )
  {
    v18 = *(_QWORD *)a4;
    v19 = *(_QWORD *)(a3 + 24);
    v72 = a2;
    v67 = v14;
    if ( *(_QWORD *)a4 >= v19 )
    {
      v20 = v19 + (int)a6;
      if ( v18 + v13 <= v20 )
      {
        sub_312C40((__int64)&si128, a3 + 40, v20, v18);
        v22 = *(_BYTE *)(a3 + 32) == 5;
        memset(&v78.m256i_u64[1], 0, 24);
        v78.m256i_i64[0] = 0x800000000LL;
        if ( v22 && *(_BYTE *)(*(_QWORD *)(v72 + 96) + 145LL) )
        {
          v49 = sub_314D00(&si128, (__m128i *)&v78, si128.m128i_i32[1] - a6, v21);
          v35 = v67;
          v36 = a3;
          v37 = v72;
          if ( v49 )
          {
            v50 = _mm_load_si128(&si128);
            v51 = _mm_load_si128(&v77);
            si128 = _mm_load_si128((const __m128i *)&v78);
            v52 = _mm_load_si128((const __m128i *)&v78.m256i_u64[2]);
            v79 = v50;
            v80 = v51;
            v77 = v52;
            *(__m128i *)v78.m256i_i8 = v50;
            *(__m128i *)&v78.m256i_u64[2] = v51;
LABEL_30:
            v38 = *(_QWORD *)a4;
            v39 = *(_QWORD *)(a3 + 24);
            if ( *(_QWORD *)a4 >= v39 )
            {
              v40 = v39 + si128.m128i_i32[1];
              v41 = v38 + *(int *)(a5 + 4);
              if ( v40 >= v41 )
              {
                if ( *(_BYTE *)(a3 + 32) != 5 || (v42 = v40 - v41, !*(_BYTE *)(*(_QWORD *)(v37 + 96) + 145LL)) )
                  v42 = v38 - v39;
                v74 = v36;
                v71 = v35;
                v16 = sub_314020(&si128, a5, v42, v38);
                if ( (_BYTE)v16 )
                {
                  sub_312D90(a3 + 40, (__int64)&si128);
                  v43 = v74;
                  if ( (*(_QWORD *)a3 & 2) == 0 )
                  {
                    v44 = *(_QWORD *)(a3 + 16);
                    if ( (*(_BYTE *)v44 & 2) != 0 )
                    {
                      v56 = (__int64 *)(*(_QWORD *)a3 & 0xFFFFFFFFFFFFFFFCLL);
                      v57 = *v56;
                      if ( (*v56 & 2) == 0 )
                      {
                        while ( v43 == v56[2] )
                        {
                          v43 = (unsigned __int64)v56;
                          v58 = v57 & 0xFFFFFFFFFFFFFFFCLL;
                          v57 = *(_QWORD *)(v57 & 0xFFFFFFFFFFFFFFFCLL);
                          if ( (v57 & 2) != 0 )
                          {
                            v43 = v58;
                            goto LABEL_38;
                          }
                          v56 = (__int64 *)v58;
                        }
                      }
                      v43 = (unsigned __int64)v56;
                    }
                    else
                    {
                      do
                      {
                        v43 = v44;
                        v44 = *(_QWORD *)(v44 + 8);
                      }
                      while ( (*(_BYTE *)v44 & 2) == 0 );
                    }
                  }
LABEL_38:
                  if ( v78.m256i_i32[0] != 1 )
                    sub_1E45A0((__m128i *)(a1 + 8), v43, v71, v65, (__int64)&v78);
                  goto LABEL_16;
                }
              }
            }
          }
        }
        else if ( (unsigned __int8)sub_314D00(&si128, (__m128i *)&v78, a6, v21) )
        {
          v35 = v67;
          v36 = a3;
          v37 = v72;
          goto LABEL_30;
        }
        v16 = 0;
        goto LABEL_16;
      }
    }
  }
  return 0;
}

