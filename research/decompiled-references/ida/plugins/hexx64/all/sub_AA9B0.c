__int64 __fastcall sub_AA9B0(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v7; // r14
  int v8; // r8d
  bool v9; // zf
  unsigned int *v10; // rax
  __int64 v11; // rsi
  int v12; // r8d
  __int128 v13; // rdi
  __int128 v14; // rdi
  int v15; // r8d
  int v16; // r9d
  int v17; // eax
  __int64 v18; // rsi
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rdi
  int v22; // r8d
  int v23; // r9d
  unsigned __int64 *v24; // rax
  __m128i v25; // xmm1
  __m128i v26; // xmm1
  int v27; // r8d
  int v28; // r9d
  int v29; // r8d
  int v30; // r9d
  int v31; // r8d
  int v32; // r9d
  __int64 (__fastcall *v33)(__int64, __int64, __int64); // rax
  char v34; // al
  int v35; // [rsp+0h] [rbp-150h]
  int v36; // [rsp+0h] [rbp-150h]
  int v37; // [rsp+0h] [rbp-150h]
  unsigned __int64 **v38; // [rsp+8h] [rbp-148h]
  int v39; // [rsp+8h] [rbp-148h]
  int v40; // [rsp+8h] [rbp-148h]
  __m128i v41; // [rsp+10h] [rbp-140h] BYREF
  __int64 *v42; // [rsp+20h] [rbp-130h]
  __int64 v43; // [rsp+28h] [rbp-128h]
  __int64 *v44; // [rsp+30h] [rbp-120h]
  unsigned int *v45; // [rsp+38h] [rbp-118h]
  unsigned int *v46; // [rsp+40h] [rbp-110h]
  unsigned int *v47; // [rsp+48h] [rbp-108h]
  __int64 *v48; // [rsp+50h] [rbp-100h]
  unsigned int *v49; // [rsp+58h] [rbp-F8h]
  const void **v50; // [rsp+60h] [rbp-F0h]
  unsigned int *v51; // [rsp+68h] [rbp-E8h]
  unsigned int *v52; // [rsp+70h] [rbp-E0h] BYREF
  unsigned int *v53; // [rsp+78h] [rbp-D8h] BYREF
  __int16 v54[8]; // [rsp+80h] [rbp-D0h] BYREF
  __int64 v55[2]; // [rsp+90h] [rbp-C0h] BYREF
  __int64 v56; // [rsp+A0h] [rbp-B0h] BYREF
  __m128i v57; // [rsp+A8h] [rbp-A8h]
  __int64 v58; // [rsp+C0h] [rbp-90h] BYREF
  __int64 v59; // [rsp+C8h] [rbp-88h]
  unsigned __int64 *v60; // [rsp+D0h] [rbp-80h] BYREF
  __int128 v61; // [rsp+D8h] [rbp-78h]
  __int64 v62[2]; // [rsp+F0h] [rbp-60h] BYREF
  unsigned __int64 *v63; // [rsp+100h] [rbp-50h] BYREF
  __m128i v64; // [rsp+108h] [rbp-48h] BYREF
  unsigned __int64 v65; // [rsp+118h] [rbp-38h]

  v65 = __readfsqword(0x28u);
  if ( (*((_BYTE *)a2 + 33) & 0x40) != 0 )
  {
    LOBYTE(v51) = 0;
    return (unsigned __int8)v51;
  }
  LOBYTE(v51) = 0;
  if ( (*((_BYTE *)a2 + 65) & 0x40) == 0 )
  {
    v7 = *(unsigned __int64 **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 480LL) + 112LL);
    v45 = a2 + 16;
    sub_123A40((__int64)v54, (unsigned __int8 *)a2 + 64, a3, a4);
    if ( !(unsigned __int8)sub_12CD10(v54, v7, (*(_DWORD *)(a1 + 16) & 1) == 0) )
    {
LABEL_32:
      LOBYTE(v51) = 0;
      goto LABEL_33;
    }
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
    {
      v46 = a2;
      v47 = nullptr;
    }
    else
    {
      v47 = a2;
      v46 = nullptr;
    }
    *(_DWORD *)(a1 + 20) = 0;
    LOBYTE(v8) = 0;
    v48 = &v58;
    while ( 1 )
    {
      *(_WORD *)(a1 + 24) = 257;
      *(_QWORD *)&v14 = *(_QWORD *)(a1 + 8);
      *((_QWORD *)&v14 + 1) = v54;
      v52 = a2;
      if ( !sub_12A5C0(v14, (__int64 *)&v52, 0, v8 | 2u) )
        goto LABEL_24;
      if ( sub_122600(v52) )
        goto LABEL_24;
      v51 = v52;
      if ( (*((_BYTE *)v52 + 33) & 0x40) != 0 || (*((_BYTE *)v52 + 65) & 0x40) != 0 )
        goto LABEL_24;
      v17 = *(_DWORD *)(a1 + 16);
      if ( (v17 & 1) != 0 )
        v47 = v52;
      else
        v46 = v51;
      if ( (v17 & 4) != 0
        || *v47 != 4 && (*v47 != 67 || v47[9] != v47[17]) && *v46 != 4 && (*v46 != 67 || v46[9] != v46[17]) )
      {
        goto LABEL_14;
      }
      if ( (unsigned __int8)sub_130BC0(
                              *(const __m128i **)(a1 + 8),
                              (__int64)v47,
                              (__int64)(v47 + 8),
                              (__int64)v46,
                              (__int64)(v46 + 8),
                              0) )
        break;
LABEL_24:
      v8 = *(_DWORD *)(a1 + 20) + 1;
      *(_DWORD *)(a1 + 20) = v8;
      if ( v8 > 1 )
        goto LABEL_32;
    }
    v51 = v52;
LABEL_14:
    v9 = *(_DWORD *)(a1 + 20) == 1;
    v49 = a2;
    if ( !v9 )
    {
      v10 = v51;
      v51 = a2;
      v49 = v10;
    }
    sub_127A20((__int64)v48, *(_QWORD *)(a1 + 8), (__int64)v49, 1, v15, v16);
    v11 = *(_QWORD *)(a1 + 8);
    v50 = (const void **)v62;
    sub_124680((__int64)v62, v11, (__int64)v51, 1u);
    if ( (unsigned __int8)sub_64780(v50, v48) || (unsigned __int8)sub_318470(&v63, (__int64)&v60) )
    {
      if ( (*(_DWORD *)(a1 + 16) & 1) == (*(_DWORD *)(a1 + 20) == 0) )
        *(_BYTE *)(a1 + 24) = 0;
      else
        *(_BYTE *)(a1 + 25) = 0;
    }
    if ( v63 )
    {
      v64.m128i_i64[0] = 0;
      qfree((__int64)v63);
    }
    qfree(v62[0]);
    if ( v60 )
    {
      *(_QWORD *)&v61 = 0;
      qfree((__int64)v60);
    }
    qfree(v58);
    v12 = *(_DWORD *)(a1 + 20);
    *(_QWORD *)&v13 = *(_QWORD *)(a1 + 8);
    *((_QWORD *)&v13 + 1) = v45;
    v53 = a2;
    if ( sub_12A5C0(v13, (__int64 *)&v53, (__int64)v52, v12 | 2u) )
      goto LABEL_24;
    v18 = *(_QWORD *)(a1 + 8);
    v44 = v55;
    sub_124680((__int64)v55, v18, (__int64)v46, 1u);
    if ( !sub_129150(*(_QWORD *)(a1 + 8), v44, *((_QWORD *)v51 + 2), (__int64)v49, 0, 0, 0x101u) )
    {
      v21 = *(_QWORD *)(a1 + 8);
      v60 = nullptr;
      v61 = 0;
      v58 = 0;
      v59 = 0;
      sub_128EE0(
        v21,
        (__int64)v48,
        (unsigned __int8 *)v47 + 32,
        1u,
        v19,
        v20,
        v35,
        (int)v38,
        v41.m128i_i32[0],
        v41.m128i_i32[2],
        (__int64)v42);
      sub_128EE0(
        *(_QWORD *)(a1 + 8),
        (__int64)v48,
        (unsigned __int8 *)v47 + 48,
        1u,
        v22,
        v23,
        v36,
        v39,
        v41.m128i_i32[0],
        v41.m128i_i32[2],
        (__int64)v42);
      if ( !(unsigned __int8)sub_64780(v48, v44) )
      {
        v42 = &v56;
        v38 = &v60;
        if ( !(unsigned __int8)sub_318470(&v60, (__int64)&v56) )
        {
          sub_124680((__int64)v50, *(_QWORD *)(a1 + 8), (__int64)v47, 1u);
          sub_648D0(v44, v50, 0.0);
          v24 = v63;
          v63 = nullptr;
          v25 = _mm_loadu_si128(&v64);
          v64 = 0;
          if ( v56 )
          {
            v43 = (__int64)v24;
            v41 = v25;
            v57.m128i_i64[0] = 0;
            qfree(v56);
            v26 = _mm_load_si128(&v41);
            v56 = v43;
            v57 = v26;
            if ( v63 )
            {
              v64.m128i_i64[0] = 0;
              qfree((__int64)v63);
            }
          }
          else
          {
            v56 = (__int64)v24;
            v57 = v25;
          }
          qfree(v62[0]);
          v59 = 0;
          if ( v60 )
          {
            *(_QWORD *)&v61 = 0;
            qfree((__int64)v60);
            v60 = nullptr;
            *((_QWORD *)&v61 + 1) = 0;
          }
          sub_128EE0(
            *(_QWORD *)(a1 + 8),
            (__int64)v48,
            (unsigned __int8 *)v46 + 32,
            1u,
            v27,
            v28,
            v35,
            (int)&v60,
            v41.m128i_i32[0],
            v41.m128i_i32[2],
            (__int64)v42);
          sub_128EE0(
            *(_QWORD *)(a1 + 8),
            (__int64)v48,
            (unsigned __int8 *)v46 + 48,
            1u,
            v29,
            v30,
            v37,
            v40,
            v41.m128i_i32[0],
            v41.m128i_i32[2],
            (__int64)v42);
          if ( !(unsigned __int8)sub_64780(v48, v44) && !(unsigned __int8)sub_318470(v38, (__int64)v42) )
          {
            sub_127A20((__int64)v50, *(_QWORD *)(a1 + 8), (__int64)v46, 1, v31, v32);
            if ( !sub_A9D90(*(_QWORD *)(a1 + 8), (unsigned __int64 **)v50, *((_QWORD *)v49 + 1), (__int64)v51, 0)
              && *((_BYTE *)v47 + 32) != 10
              && *((_BYTE *)v47 + 48) != 10
              && (v47[1] & 0x40010) == 0
              && (*((_BYTE *)v47 + 65) & 2) == 0 )
            {
              v51 = *(unsigned int **)(*(_QWORD *)(a1 + 8) + 64LL);
              if ( !sub_A2650((__int64)v51, (__int64)v47)
                && (v46[1] & 0x40010) == 0
                && (*((_BYTE *)v46 + 65) & 2) == 0
                && !sub_A2650((__int64)v51, (__int64)v46) )
              {
                v33 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 16LL);
                if ( v33 == sub_A0A10 )
                  v34 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned int *, _QWORD, _QWORD, _QWORD))(a1 + 32))(
                          *(_QWORD *)(a1 + 8),
                          v47,
                          v46,
                          *(unsigned int *)(a1 + 16),
                          *(unsigned __int8 *)(a1 + 24),
                          *(unsigned __int8 *)(a1 + 25));
                else
                  v34 = v33(a1, (__int64)v47, (__int64)v46);
                LOBYTE(v51) = v34;
                if ( v34 )
                {
                  sub_93B40((__int64 *)v50);
                  sub_93B40(v48);
                  sub_93B40(v44);
LABEL_33:
                  sub_11CDA0((__int64)v54);
                  return (unsigned __int8)v51;
                }
                if ( v63 )
                {
                  v64.m128i_i64[0] = 0;
                  qfree((__int64)v63);
                }
                qfree(v62[0]);
                if ( v60 )
                {
                  *(_QWORD *)&v61 = 0;
                  qfree((__int64)v60);
                }
                qfree(v58);
                if ( v56 )
                {
                  v57.m128i_i64[0] = 0;
                  qfree(v56);
                }
                goto LABEL_43;
              }
            }
            if ( v63 )
            {
              v64.m128i_i64[0] = 0;
              qfree((__int64)v63);
            }
            qfree(v62[0]);
          }
        }
      }
      if ( v60 )
      {
        *(_QWORD *)&v61 = 0;
        qfree((__int64)v60);
      }
      qfree(v58);
    }
    if ( v56 )
    {
      v57.m128i_i64[0] = 0;
      qfree(v56);
    }
LABEL_43:
    qfree(v55[0]);
    goto LABEL_24;
  }
  return (unsigned __int8)v51;
}

