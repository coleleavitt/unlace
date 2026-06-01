__int64 __fastcall sub_A67B0(__int64 a1, __int64 a2)
{
  __int64 v5; // r14
  int v6; // r8d
  bool v7; // zf
  __int64 v8; // rax
  __int64 v9; // rsi
  int v10; // r8d
  __int64 v11; // rdi
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rax
  __m128i v17; // xmm1
  __m128i v18; // xmm1
  __int64 (__fastcall *v19)(__int64, __int64, __int64); // rax
  char v20; // al
  __m128i v21; // [rsp+10h] [rbp-140h] BYREF
  __int64 *v22; // [rsp+20h] [rbp-130h]
  __int64 v23; // [rsp+28h] [rbp-128h]
  __int64 *v24; // [rsp+30h] [rbp-120h]
  __int64 v25; // [rsp+38h] [rbp-118h]
  __int64 v26; // [rsp+40h] [rbp-110h]
  __int64 v27; // [rsp+48h] [rbp-108h]
  __int64 *v28; // [rsp+50h] [rbp-100h]
  __int64 v29; // [rsp+58h] [rbp-F8h]
  __int64 *v30; // [rsp+60h] [rbp-F0h]
  __int64 v31; // [rsp+68h] [rbp-E8h]
  __int64 v32; // [rsp+70h] [rbp-E0h] BYREF
  __int64 v33; // [rsp+78h] [rbp-D8h] BYREF
  _BYTE v34[16]; // [rsp+80h] [rbp-D0h] BYREF
  _QWORD v35[2]; // [rsp+90h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-B0h] BYREF
  __m128i v37; // [rsp+A8h] [rbp-A8h]
  __int64 v38; // [rsp+C0h] [rbp-90h] BYREF
  __int64 v39; // [rsp+C8h] [rbp-88h]
  __int64 v40; // [rsp+D0h] [rbp-80h] BYREF
  __int128 v41; // [rsp+D8h] [rbp-78h]
  _QWORD v42[2]; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v43; // [rsp+100h] [rbp-50h] BYREF
  __m128i v44; // [rsp+108h] [rbp-48h] BYREF
  unsigned __int64 v45; // [rsp+118h] [rbp-38h]

  v45 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 33) & 0x40) != 0 )
  {
    LOBYTE(v31) = 0;
    return (unsigned __int8)v31;
  }
  LOBYTE(v31) = 0;
  if ( (*(_BYTE *)(a2 + 65) & 0x40) == 0 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 480LL) + 112LL);
    v25 = a2 + 64;
    sub_11F840(v34, a2 + 64);
    if ( !(unsigned __int8)sub_128B10(v34, v5, (*(_DWORD *)(a1 + 16) & 1) == 0) )
    {
LABEL_32:
      LOBYTE(v31) = 0;
      goto LABEL_33;
    }
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
    {
      v26 = a2;
      v27 = 0;
    }
    else
    {
      v27 = a2;
      v26 = 0;
    }
    *(_DWORD *)(a1 + 20) = 0;
    v6 = 0;
    v28 = &v38;
    while ( 1 )
    {
      *(_WORD *)(a1 + 24) = 257;
      v12 = *(_QWORD *)(a1 + 8);
      v32 = a2;
      if ( !sub_1263C0(v12, v34, &v32, 0, v6 | 2u) )
        goto LABEL_24;
      if ( (unsigned __int8)sub_11E400(v32) )
        goto LABEL_24;
      v31 = v32;
      if ( (*(_BYTE *)(v32 + 33) & 0x40) != 0 || (*(_BYTE *)(v32 + 65) & 0x40) != 0 )
        goto LABEL_24;
      v13 = *(_DWORD *)(a1 + 16);
      if ( (v13 & 1) != 0 )
        v27 = v32;
      else
        v26 = v31;
      if ( (v13 & 4) != 0
        || *(_DWORD *)v27 != 4
        && (*(_DWORD *)v27 != 67 || *(_DWORD *)(v27 + 36) != *(_DWORD *)(v27 + 68))
        && *(_DWORD *)v26 != 4
        && (*(_DWORD *)v26 != 67 || *(_DWORD *)(v26 + 36) != *(_DWORD *)(v26 + 68)) )
      {
        goto LABEL_14;
      }
      if ( (unsigned __int8)sub_12C9C0(*(_QWORD *)(a1 + 8), v27, v27 + 32, v26, v26 + 32, 0) )
        break;
LABEL_24:
      v6 = *(_DWORD *)(a1 + 20) + 1;
      *(_DWORD *)(a1 + 20) = v6;
      if ( v6 > 1 )
        goto LABEL_32;
    }
    v31 = v32;
LABEL_14:
    v7 = *(_DWORD *)(a1 + 20) == 1;
    v29 = a2;
    if ( !v7 )
    {
      v8 = v31;
      v31 = a2;
      v29 = v8;
    }
    sub_123820(v28, *(_QWORD *)(a1 + 8), v29, 1);
    v9 = *(_QWORD *)(a1 + 8);
    v30 = v42;
    sub_120480(v42, v9, v31, 1);
    if ( (unsigned __int8)sub_60580(v30, v28) || (unsigned __int8)sub_3136F0(&v43, &v40) )
    {
      if ( (*(_DWORD *)(a1 + 16) & 1) == (*(_DWORD *)(a1 + 20) == 0) )
        *(_BYTE *)(a1 + 24) = 0;
      else
        *(_BYTE *)(a1 + 25) = 0;
    }
    if ( v43 )
    {
      v44.m128i_i64[0] = 0;
      qfree();
    }
    qfree();
    if ( v40 )
    {
      *(_QWORD *)&v41 = 0;
      qfree();
    }
    qfree();
    v10 = *(_DWORD *)(a1 + 20);
    v11 = *(_QWORD *)(a1 + 8);
    v33 = a2;
    if ( sub_1263C0(v11, v25, &v33, v32, v10 | 2u) )
      goto LABEL_24;
    v14 = *(_QWORD *)(a1 + 8);
    v24 = v35;
    sub_120480(v35, v14, v26, 1);
    if ( !sub_124F50(*(_QWORD *)(a1 + 8), (_DWORD)v24, *(_QWORD *)(v31 + 16), v29, 0, 0, 257) )
    {
      v15 = *(_QWORD *)(a1 + 8);
      v40 = 0;
      v41 = 0;
      v38 = 0;
      v39 = 0;
      sub_124CE0(v15, v28, v27 + 32, 1);
      sub_124CE0(*(_QWORD *)(a1 + 8), v28, v27 + 48, 1);
      if ( !(unsigned __int8)sub_60580(v28, v24) )
      {
        v22 = &v36;
        if ( !(unsigned __int8)sub_3136F0(&v40, &v36) )
        {
          sub_120480(v30, *(_QWORD *)(a1 + 8), v27, 1);
          sub_606D0(v24, v30);
          v16 = v43;
          v43 = 0;
          v17 = _mm_loadu_si128(&v44);
          v44 = 0;
          if ( v36 )
          {
            v23 = v16;
            v21 = v17;
            v37.m128i_i64[0] = 0;
            qfree();
            v18 = _mm_load_si128(&v21);
            v36 = v23;
            v37 = v18;
            if ( v43 )
            {
              v44.m128i_i64[0] = 0;
              qfree();
            }
          }
          else
          {
            v36 = v16;
            v37 = v17;
          }
          qfree();
          v39 = 0;
          if ( v40 )
          {
            *(_QWORD *)&v41 = 0;
            qfree();
            v40 = 0;
            *((_QWORD *)&v41 + 1) = 0;
          }
          sub_124CE0(*(_QWORD *)(a1 + 8), v28, v26 + 32, 1);
          sub_124CE0(*(_QWORD *)(a1 + 8), v28, v26 + 48, 1);
          if ( !(unsigned __int8)sub_60580(v28, v24) && !(unsigned __int8)sub_3136F0(&v40, v22) )
          {
            sub_123820(v30, *(_QWORD *)(a1 + 8), v26, 1);
            if ( !sub_A5B90(*(_QWORD *)(a1 + 8), v30, *(_QWORD *)(v29 + 8), v31, 0)
              && *(_BYTE *)(v27 + 32) != 10
              && *(_BYTE *)(v27 + 48) != 10
              && (*(_DWORD *)(v27 + 4) & 0x40010) == 0
              && (*(_BYTE *)(v27 + 65) & 2) == 0 )
            {
              v31 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL);
              if ( !sub_9E450(v31, v27)
                && (*(_DWORD *)(v26 + 4) & 0x40010) == 0
                && (*(_BYTE *)(v26 + 65) & 2) == 0
                && !sub_9E450(v31, v26) )
              {
                v19 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 16LL);
                if ( v19 == sub_9C810 )
                  v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD, _QWORD))(a1 + 32))(
                          *(_QWORD *)(a1 + 8),
                          v27,
                          v26,
                          *(unsigned int *)(a1 + 16),
                          *(unsigned __int8 *)(a1 + 24),
                          *(unsigned __int8 *)(a1 + 25));
                else
                  v20 = v19(a1, v27, v26);
                LOBYTE(v31) = v20;
                if ( v20 )
                {
                  sub_8F940((__int64)v30);
                  sub_8F940((__int64)v28);
                  sub_8F940((__int64)v24);
LABEL_33:
                  sub_118BA0(v34);
                  return (unsigned __int8)v31;
                }
                if ( v43 )
                {
                  v44.m128i_i64[0] = 0;
                  qfree();
                }
                qfree();
                if ( v40 )
                {
                  *(_QWORD *)&v41 = 0;
                  qfree();
                }
                qfree();
                if ( v36 )
                {
                  v37.m128i_i64[0] = 0;
                  qfree();
                }
                goto LABEL_43;
              }
            }
            if ( v43 )
            {
              v44.m128i_i64[0] = 0;
              qfree();
            }
            qfree();
          }
        }
      }
      if ( v40 )
      {
        *(_QWORD *)&v41 = 0;
        qfree();
      }
      qfree();
    }
    if ( v36 )
    {
      v37.m128i_i64[0] = 0;
      qfree();
    }
LABEL_43:
    qfree();
    goto LABEL_24;
  }
  return (unsigned __int8)v31;
}

