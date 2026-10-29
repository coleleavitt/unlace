__int64 __fastcall sub_2D340(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // r15
  __m256i *v4; // rsi
  unsigned __int64 v5; // rdx
  char v6; // r13
  __m128i v7; // xmm0
  _BYTE *v8; // rax
  __m128i *v9; // rdi
  int v10; // eax
  __int64 (*v11)(); // r12
  unsigned __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // r13
  __int64 v16; // rbp
  _QWORD *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // r13
  __int64 v20; // rbp
  _QWORD *v21; // rbx
  __int64 (*v23)(); // rax
  __int64 (*v24)(); // rax
  unsigned __int64 *v25; // rdi
  __m128i v26; // xmm0
  unsigned __int64 *v27; // rdi
  __int64 v28; // r9
  const char *v29; // rdx
  __int64 (*v30)(); // rax
  unsigned __int64 v31; // rcx
  __int64 (*v32)(); // rax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  unsigned int v36; // [rsp+Ch] [rbp-52Ch] BYREF
  __int64 (*v37)(); // [rsp+10h] [rbp-528h] BYREF
  __int128 v38; // [rsp+18h] [rbp-520h]
  _OWORD v39[2]; // [rsp+30h] [rbp-508h] BYREF
  __m256i v40; // [rsp+50h] [rbp-4E8h] BYREF
  __int128 v41; // [rsp+70h] [rbp-4C8h]
  __int64 v42; // [rsp+80h] [rbp-4B8h]
  __int64 v43; // [rsp+88h] [rbp-4B0h]
  _BYTE v44[488]; // [rsp+90h] [rbp-4A8h] BYREF
  __int64 v45; // [rsp+278h] [rbp-2C0h] BYREF
  __m128i v46[2]; // [rsp+280h] [rbp-2B8h] BYREF
  __int64 v47; // [rsp+2A0h] [rbp-298h]
  __int64 v48; // [rsp+2A8h] [rbp-290h]
  __int64 v49; // [rsp+2B8h] [rbp-280h]
  __m128i v50[2]; // [rsp+2D0h] [rbp-268h] BYREF
  __int64 v51; // [rsp+2F0h] [rbp-248h]
  unsigned __int64 v52; // [rsp+2F8h] [rbp-240h]
  unsigned int v53; // [rsp+320h] [rbp-218h]
  unsigned int v54; // [rsp+330h] [rbp-208h]
  unsigned int v55; // [rsp+340h] [rbp-1F8h]
  char v56; // [rsp+378h] [rbp-1C0h]
  __int64 v57; // [rsp+3A0h] [rbp-198h]
  __int64 v58; // [rsp+3A8h] [rbp-190h]
  __m128i si128; // [rsp+3E0h] [rbp-158h] BYREF
  __m128i v60; // [rsp+3F0h] [rbp-148h]
  bool (__fastcall *v61)(__int64, int); // [rsp+470h] [rbp-C8h]
  char v62; // [rsp+47Ch] [rbp-BCh]
  char v63; // [rsp+47Dh] [rbp-BBh]
  __int64 v64; // [rsp+498h] [rbp-A0h]
  __int64 v65; // [rsp+4C0h] [rbp-78h]
  __int64 v66; // [rsp+4C8h] [rbp-70h]
  __int64 v67; // [rsp+4D8h] [rbp-60h]
  unsigned __int64 v68; // [rsp+4F8h] [rbp-40h]

  v68 = __readfsqword(0x28u);
  v4 = (__m256i *)a1;
  sub_2A270((__int64)v46, a1, 0);
  v61 = sub_25D80;
  if ( !(unsigned __int8)sub_26F10((__int64)v46) )
    goto LABEL_73;
  v6 = sub_27470((__int64)v46);
  if ( !v6 || (unsigned __int8)(v62 - 1) > 1u || (unsigned __int8)(v63 - 1) > 1u )
    goto LABEL_73;
  memset(v39, 0, 28);
  if ( !v64 )
    goto LABEL_8;
  if ( !(unsigned __int8)sub_2A4C0((__int64)v46) )
  {
LABEL_73:
    LODWORD(v11) = -1;
    goto LABEL_36;
  }
  qword_48138 = v49;
LABEL_8:
  sub_2B6E0((__int64)v46);
  v39[0] = _mm_load_si128(v50);
  *(__m128i *)((char *)v39 + 12) = _mm_loadu_si128((const __m128i *)((char *)&v50[0].m128i_u64[1] + 4));
  if ( !*(_QWORD *)&v39[0] )
  {
    v39[0] = _mm_load_si128(v46);
    *(__m128i *)((char *)v39 + 12) = _mm_loadu_si128((const __m128i *)((char *)&v46[0].m128i_u64[1] + 4));
  }
  v5 = (unsigned __int64)&v44[480];
  v7.m128i_i64[0] = 0;
  v8 = v44;
  do
  {
    *(_QWORD *)v8 = 0;
    v8 += 32;
    *(_OWORD *)(v8 - 24) = 0;
    *((_WORD *)v8 - 4) = 0;
    *((_DWORD *)v8 - 1) = 0;
  }
  while ( &v44[480] != v8 );
  memset(v44, 0, sizeof(v44));
  v9 = (__m128i *)&v45;
  if ( *(_QWORD *)&v39[0] )
  {
    v38 = 0;
    v37 = nullptr;
    v4 = (__m256i *)&v37;
    v37 = (__int64 (*)())qvector_reserve();
    if ( !(unsigned __int8)sub_2A9A0((__int64)v46, (__int64 *)&v37, (__int64 *)v39) )
      goto LABEL_55;
    v4 = (__m256i *)v44;
    if ( !(unsigned __int8)sub_27C70(v46, (__int64)v44, (unsigned __int64 **)&v37) || (*(_BYTE *)(a2 + 8) & 4) == 0 )
      goto LABEL_55;
    if ( *(__int64 *)v44 > 0 && *(_QWORD *)&v44[16] )
    {
      v4 = (__m256i *)si128.m128i_i64[0];
      if ( si128.m128i_i64[0] <= 0 || !v60.m128i_i64[0] )
        goto LABEL_99;
      if ( *(_QWORD *)v44 != si128.m128i_i64[0] )
      {
        sub_AFE0(
          (__int64)"The dynamic section string table from section header (%08llX) differs from DT_STRTAB's one (%08llX), "
                   "using the latter",
          si128.m128i_i64[0],
          *(_QWORD *)v44);
LABEL_99:
        si128 = _mm_load_si128((const __m128i *)v44);
        v7 = _mm_load_si128((const __m128i *)&v44[16]);
        v60 = v7;
      }
    }
    v28 = v38;
    v5 = (unsigned __int64)v37;
    v2 = (unsigned __int64 *)v37;
    if ( 16LL * (_QWORD)v38 )
    {
      v11 = sub_FC30;
      v12 = 536920066;
      goto LABEL_110;
    }
    v9 = (__m128i *)v37;
    goto LABEL_56;
  }
  while ( 1 )
  {
    v10 = *(_DWORD *)(a2 + 8);
    if ( (v10 & 2) != 0 )
      break;
    while ( 1 )
    {
LABEL_14:
      LODWORD(v11) = v10 & 1;
      if ( (v10 & 1) == 0 )
        goto LABEL_24;
      v5 = v55;
      v12 = v53;
      if ( !(v53 | v55) )
      {
        v5 = *(_QWORD *)&v44[32];
        if ( *(__int64 *)&v44[32] > 0 && *(_QWORD *)&v44[48] )
        {
          v42 = 0;
          v41 = 0;
          v4 = &v40;
          *(_OWORD *)v40.m256i_i8 = 0;
          v26 = _mm_loadl_epi64((const __m128i *)&v44[40]);
          HIDWORD(v41) = *(_DWORD *)&v44[60];
          *(_QWORD *)&v41 = *(_QWORD *)&v44[48];
          v40.m256i_i32[1] = 11;
          v43 = *(unsigned __int16 *)&v44[56];
          *(__m128i *)&v40.m256i_u64[2] = _mm_unpacklo_epi64(v26, (__m128i)*(unsigned __int64 *)&v44[32]);
          goto LABEL_22;
        }
        LODWORD(v11) = 0;
        goto LABEL_24;
      }
      v11 = nullptr;
      if ( !v55 )
        goto LABEL_17;
      if ( v56 )
      {
        if ( v55 >= v52 )
          v4 = nullptr;
        else
          v4 = (__m256i *)(((unsigned __int64)v55 << 6) + v51);
        v9 = v46;
        LODWORD(v11) = sub_2D070((__int64)v46, (__int64)v4, 1, (__int64 (***)())a2);
        v6 = (_DWORD)v11 == 0;
LABEL_17:
        if ( !(_DWORD)v12 || !v6 )
          goto LABEL_23;
        if ( v56 )
        {
          if ( v12 >= v52 )
            v4 = nullptr;
          else
            v4 = (__m256i *)((v12 << 6) + v51);
LABEL_22:
          LODWORD(v11) = sub_2D070((__int64)v46, (__int64)v4, 2, (__int64 (***)())a2);
LABEL_23:
          v10 = *(_DWORD *)(a2 + 8);
LABEL_24:
          *(_OWORD *)v40.m256i_i8 = (unsigned __int64)v46;
          LOBYTE(v41) = 0;
          *(_OWORD *)&v40.m256i_u64[2] = 0;
          if ( (v10 & 0x10) != 0 )
          {
            sub_2C570((__int64)v46, (__int64)&v40);
            v4 = (__m256i *)&v37;
            v37 = nullptr;
            v38 = 0;
            if ( (unsigned __int8)sub_2C920((__int64)&v40, (__int64 *)&v37) )
            {
              v4 = (__m256i *)s;
              v24 = *(__int64 (**)())(*(_QWORD *)a2 + 32LL);
              if ( (_QWORD)v38 )
                v4 = (__m256i *)v37;
              v5 = (unsigned __int64)sub_FC40;
              if ( v24 == sub_FC40 )
              {
                v25 = (unsigned __int64 *)v37;
              }
              else
              {
                v34 = ((__int64 (__fastcall *)(__int64, __m256i *))v24)(a2, v4);
                v25 = (unsigned __int64 *)v37;
                LODWORD(v11) = v34;
                if ( v34 )
                {
                  if ( v37 )
                  {
                    *(_QWORD *)&v38 = 0;
                    qfree();
                  }
                  goto LABEL_27;
                }
              }
              LODWORD(v11) = 0;
            }
            else
            {
              v25 = (unsigned __int64 *)v37;
            }
            if ( v25 )
            {
              *(_QWORD *)&v38 = 0;
              qfree();
            }
            if ( (*(_BYTE *)(a2 + 8) & 0x20) != 0 )
              goto LABEL_26;
LABEL_27:
            v13 = v40.m256i_i64[1];
            if ( v40.m256i_i64[1] )
            {
              v14 = v40.m256i_i64[2];
              if ( v40.m256i_i64[2] )
              {
                v15 = 0;
                v16 = 0;
                do
                {
                  v17 = (_QWORD *)(v13 + v15);
                  if ( *(_QWORD *)(v13 + v15 + 24) )
                  {
                    v17[4] = 0;
                    qfree();
                  }
                  if ( *v17 )
                  {
                    v17[1] = 0;
                    qfree();
                  }
                  ++v16;
                  v13 = v40.m256i_i64[1];
                  v15 += 56;
                }
                while ( v14 != v16 );
              }
              v40.m256i_i64[2] = 0;
              qfree();
            }
            goto LABEL_36;
          }
          if ( (v10 & 0x20) == 0 )
            goto LABEL_36;
LABEL_26:
          v37 = nullptr;
          v38 = 0;
          if ( !v56 )
            goto LABEL_27;
          v4 = (__m256i *)&v37;
          if ( !(unsigned __int8)sub_2C1D0(v50[0].m128i_i64, (__int64 *)&v37, &v36) )
          {
            v27 = (unsigned __int64 *)v37;
LABEL_89:
            if ( !v27 )
              goto LABEL_27;
LABEL_90:
            *(_QWORD *)&v38 = 0;
            qfree();
            goto LABEL_27;
          }
          v4 = (__m256i *)s;
          v32 = *(__int64 (**)())(*(_QWORD *)a2 + 40LL);
          if ( (_QWORD)v38 )
            v4 = (__m256i *)v37;
          v5 = (unsigned __int64)sub_FC50;
          if ( v32 == sub_FC50 )
          {
            v27 = (unsigned __int64 *)v37;
          }
          else
          {
            v35 = ((__int64 (__fastcall *)(__int64, __m256i *, _QWORD))v32)(a2, v4, v36);
            v27 = (unsigned __int64 *)v37;
            LODWORD(v11) = v35;
            if ( v35 )
            {
              if ( !v37 )
                goto LABEL_27;
              goto LABEL_90;
            }
          }
          LODWORD(v11) = 0;
          goto LABEL_89;
        }
LABEL_136:
        sub_25DE0(v9, v4);
      }
      v30 = (__int64 (*)())sub_25DE0(v9, v4);
LABEL_134:
      v4 = (__m256i *)*v2;
      v31 = v2[1];
LABEL_113:
      if ( ((unsigned int (__fastcall *)(__int64, __m256i *, const char *, unsigned __int64, double))v30)(
             a2,
             v4,
             v29,
             v31,
             *(double *)v7.m128i_i64) )
      {
        if ( v40.m256i_i64[0] )
        {
          v40.m256i_i64[1] = 0;
          qfree();
        }
LABEL_55:
        v9 = (__m128i *)v37;
      }
      else
      {
LABEL_106:
        if ( v40.m256i_i64[0] )
        {
          v40.m256i_i64[1] = 0;
          qfree();
        }
        v5 = (unsigned __int64)v37;
        v28 = v38;
        while ( 1 )
        {
          v2 += 2;
          v9 = (__m128i *)v5;
          if ( v2 == (unsigned __int64 *)(v5 + 16 * v28) )
            break;
LABEL_110:
          memset(&v40, 0, 24);
          v4 = (__m256i *)*v2;
          v31 = v2[1];
          if ( *v2 <= 0x1D && _bittest64((const __int64 *)&v12, (unsigned __int64)v4) )
          {
            v4 = &v40;
            sub_2AFC0((__int64)v46, v40.m256i_i64, si128.m128i_i64, v31);
            v29 = s;
            v30 = *(__int64 (**)())(*(_QWORD *)a2 + 24LL);
            if ( v40.m256i_i64[1] )
              v29 = (const char *)v40.m256i_i64[0];
            if ( v30 != v11 )
              goto LABEL_134;
            goto LABEL_106;
          }
          v30 = *(__int64 (**)())(*(_QWORD *)a2 + 24LL);
          if ( v30 != v11 )
          {
            v29 = s;
            goto LABEL_113;
          }
        }
      }
LABEL_56:
      if ( !v9 )
        break;
      *(_QWORD *)&v38 = 0;
      qfree();
      v10 = *(_DWORD *)(a2 + 8);
      if ( (v10 & 2) != 0 )
        goto LABEL_58;
    }
  }
LABEL_58:
  v5 = v54;
  if ( !v54 )
    goto LABEL_14;
  if ( !v56 )
  {
    sub_25DE0(v9, v4);
    goto LABEL_136;
  }
  if ( v54 >= v52 )
    goto LABEL_14;
  v7.m128i_i64[0] = 0;
  memset(&v40, 0, 24);
  sub_2AD80((__int64)v46, v40.m256i_i64);
  v4 = (__m256i *)s;
  v23 = *(__int64 (**)())(*(_QWORD *)a2 + 8LL);
  if ( v40.m256i_i64[1] )
    v4 = (__m256i *)v40.m256i_i64[0];
  v5 = (unsigned __int64)sub_FC10;
  v9 = (__m128i *)v40.m256i_i64[0];
  if ( v23 == sub_FC10
    || (v33 = ((__int64 (__fastcall *)(__int64, __m256i *))v23)(a2, v4),
        v9 = (__m128i *)v40.m256i_i64[0],
        (LODWORD(v11) = v33) == 0) )
  {
    if ( v9 )
    {
      v40.m256i_i64[1] = 0;
      qfree();
    }
    v10 = *(_DWORD *)(a2 + 8);
    goto LABEL_14;
  }
  if ( v40.m256i_i64[0] )
  {
    v40.m256i_i64[1] = 0;
    qfree();
  }
LABEL_36:
  if ( v67 )
    (*(void (__fastcall **)(__int64, __m256i *, unsigned __int64))(*(_QWORD *)v67 + 8LL))(v67, v4, v5);
  if ( v65 )
  {
    v66 = 0;
    qfree();
  }
  v18 = v57;
  if ( v57 )
  {
    v19 = v58;
    if ( v58 )
    {
      v20 = 0;
      do
      {
        v21 = (_QWORD *)(v18 + 96 * v20);
        if ( v21[3] )
        {
          v21[4] = 0;
          qfree();
        }
        if ( *v21 )
        {
          v21[1] = 0;
          qfree();
        }
        ++v20;
        v18 = v57;
      }
      while ( v19 != v20 );
    }
    v58 = 0;
    qfree();
  }
  if ( v51 )
  {
    v52 = 0;
    qfree();
  }
  if ( v47 )
  {
    v48 = 0;
    qfree();
  }
  return (unsigned int)v11;
}

