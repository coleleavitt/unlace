__int64 __fastcall sub_1772F0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6, int a7)
{
  bool v9; // zf
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v15; // r14
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r9d
  __int64 v19; // r14
  _BYTE *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r12
  __int64 v24; // rax
  _DWORD *v25; // rdx
  __int64 v26; // rax
  bool v27; // dl
  __int64 v28; // rax
  __m128i v29; // xmm1
  __m128i v30; // xmm1
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v37; // [rsp+8h] [rbp-140h]
  __int64 v38; // [rsp+10h] [rbp-138h]
  __int64 v39; // [rsp+10h] [rbp-138h]
  __int64 v40; // [rsp+10h] [rbp-138h]
  __int64 v41; // [rsp+18h] [rbp-130h]
  __m128i v42; // [rsp+20h] [rbp-128h] BYREF
  __m128 v43; // [rsp+30h] [rbp-118h] BYREF
  __m128 v44; // [rsp+40h] [rbp-108h] BYREF
  _QWORD v45[2]; // [rsp+50h] [rbp-F8h] BYREF
  __m128 v46; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v47; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v48; // [rsp+78h] [rbp-D0h]
  void *v49; // [rsp+90h] [rbp-B8h] BYREF
  __int128 v50; // [rsp+98h] [rbp-B0h] BYREF
  __m128i v51; // [rsp+A8h] [rbp-A0h]
  __int64 (__fastcall **v52)(); // [rsp+C0h] [rbp-88h] BYREF
  __int64 v53; // [rsp+C8h] [rbp-80h]
  __int64 v54; // [rsp+D0h] [rbp-78h] BYREF
  __m128i v55; // [rsp+D8h] [rbp-70h] BYREF
  char v56; // [rsp+E8h] [rbp-60h]
  __int64 v57; // [rsp+F0h] [rbp-58h]
  __m128 *v58; // [rsp+F8h] [rbp-50h]
  int v59; // [rsp+100h] [rbp-48h]
  bool v60; // [rsp+104h] [rbp-44h]
  unsigned __int64 v61; // [rsp+108h] [rbp-40h]

  v9 = a2[3] == 0;
  v61 = __readfsqword(0x28u);
  if ( v9 )
    goto LABEL_13;
  v11 = *(_QWORD *)(a1 + 64);
  v49 = nullptr;
  v50 = 0;
  v12 = *(_QWORD *)(v11 + 240);
  if ( v12 )
  {
    v39 = v11;
    *((_QWORD *)&v50 + 1) = *(_QWORD *)(v11 + 240);
    v49 = (void *)qalloc_or_throw();
    memcpy(v49, *(const void **)(v39 + 232), 16 * v12);
    *(_QWORD *)&v50 = v12;
  }
  if ( *(_DWORD *)(a1 + 72) == a7 )
  {
    v38 = *(_QWORD *)(a1 + 64);
    v41 = *(_QWORD *)(v38 + 1440);
    v19 = a3;
    if ( !a3 )
    {
LABEL_44:
      if ( *(_DWORD *)(a1 + 76) == 3 )
      {
        if ( *(_DWORD *)(a1 + 376) != 1 )
        {
          if ( !under_debugger )
            sub_3835A0(51773);
          BUG();
        }
        v25 = *(_DWORD **)(a1 + 368);
        v42.m128i_i32[0] = *(_DWORD *)(v38 + 64);
        if ( *v25 == v42.m128i_i32[0] - 1 )
        {
          v46 = _mm_loadh_ps((const double *)(v38 + 136));
          sub_317F90(&v49, &v46);
        }
      }
LABEL_34:
      v44 = _mm_loadh_ps((const double *)(a1 + 328));
      sub_317F90(&v49, &v44);
      if ( (*(_BYTE *)(a1 + 26) & 4) != 0 )
      {
        v43 = _mm_loadh_ps((const double *)(a1 + 520));
        sub_317F90(&v49, &v43);
      }
      v21 = *(_QWORD *)(a1 + 336);
      v22 = *(_QWORD *)(v38 + 168);
      if ( v21 > v22 )
      {
        v53 = v21 - v22;
        v52 = (__int64 (__fastcall **)())(v22 + v41);
        sub_317F90(&v49, &v52);
      }
      goto LABEL_5;
    }
    while ( 1 )
    {
      v20 = sub_11FDC0((_BYTE *)v19, 0);
      if ( v20 )
      {
        if ( v20[64] != 8 )
          goto LABEL_30;
        v23 = *((_QWORD *)v20 + 9);
        v24 = *(_QWORD *)(sub_1CF740(v38, *(int *)(v23 + 16)) + 8);
        v45[1] = *(int *)(v23 + 16) - v24;
        v45[0] = v41 + v24;
        sub_317F90(&v49, v45);
        v19 = *(_QWORD *)(v19 + 8);
        if ( !v19 )
          goto LABEL_44;
      }
      else
      {
        if ( a5 == v19 )
        {
          if ( *(_DWORD *)a5 == 1 )
            goto LABEL_34;
          v53 = 0;
          v54 = 0;
          v55 = 0u;
          v52 = off_4D8598;
          if ( (unsigned int)sub_11F1A0((_BYTE *)a5, &v52) )
            goto LABEL_34;
        }
        else if ( (unsigned __int8)sub_11E6D0((_BYTE *)v19) )
        {
          goto LABEL_34;
        }
LABEL_30:
        v19 = *(_QWORD *)(v19 + 8);
        if ( !v19 )
          goto LABEL_44;
      }
    }
  }
LABEL_5:
  if ( (unsigned __int8)sub_318830(a2 + 2, &v49) )
  {
    if ( a5 )
    {
      sub_1240C0((__int64)&v52, a1, a5, 0x2001u);
      sub_318480(&v49, &v54);
      if ( !(unsigned __int8)sub_318830(a2 + 2, &v49) )
      {
        if ( v54 )
        {
          v55.m128i_i64[0] = 0;
          qfree();
        }
        qfree();
        goto LABEL_11;
      }
      if ( v54 )
      {
        v55.m128i_i64[0] = 0;
        qfree();
      }
      qfree();
    }
    if ( v49 )
    {
      *(_QWORD *)&v50 = 0;
      qfree();
    }
    return 0;
  }
LABEL_11:
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree();
  }
LABEL_13:
  v13 = sub_A97D0(a1, a2, a3, a4, 0x2001u);
  if ( a5 && a5 != v13 )
    return 0;
  if ( v13 )
  {
    v15 = sub_A97D0(a1, a2, *(_QWORD *)(v13 + 8), a4, 0x2001u);
    if ( v15 )
    {
      if ( !a5 || !*(_BYTE *)(a5 + 64) )
        return 0;
      v37 = *(_QWORD *)(a5 + 8);
      sub_1240C0((__int64)&v46, a1, a5, 1u);
      v49 = nullptr;
      v50 = 0u;
      v51 = 0;
      while ( 1 )
      {
        v42.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
        if ( (unsigned __int8)sub_11FFE0((_BYTE *)a5, v42.m128i_i64[0], 0, v16, v17, v18) )
          goto LABEL_22;
        if ( sub_11D6B0((int *)a5) || (v26 = sub_11DB00(a5), v27 = 0, v26) )
          v27 = sub_11FBE0((_BYTE *)v15, v42.m128i_i64[0]);
        v9 = *(_DWORD *)a5 == 8;
        v53 = 0;
        v52 = off_4D8528;
        v55 = 0u;
        v56 = 0;
        v57 = a5;
        v58 = &v46;
        v59 = 0;
        v60 = v27;
        v54 = a1;
        if ( v9
          || !sub_1255D0((unsigned __int8 *)a5, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL), (unsigned int *)v15, 0)
          || *(_DWORD *)(v57 + 68) != *(_DWORD *)(v15 + 68) )
        {
          v59 = 0;
          if ( (unsigned int)sub_11E340((_BYTE *)v15, (__int64)&v52) || v59 <= 0 )
          {
LABEL_22:
            if ( *((_QWORD *)&v50 + 1) )
            {
              v51.m128i_i64[0] = 0;
              qfree();
            }
            qfree();
            if ( v47 )
            {
              v48 = 0;
              qfree();
            }
            qfree();
            return 0;
          }
        }
        if ( (unsigned __int8)sub_64280(&v49) && !v51.m128i_i64[0] )
        {
          sub_127460((__int64)&v52, a1, a5, 0);
          sub_642D0((__int64 *)&v49, (__int64 *)&v52);
          v28 = v54;
          v54 = 0;
          v29 = _mm_loadu_si128(&v55);
          v55 = 0;
          if ( *((_QWORD *)&v50 + 1) )
          {
            v40 = v28;
            v42 = v29;
            v51.m128i_i64[0] = 0;
            qfree();
            v30 = _mm_load_si128(&v42);
            *((_QWORD *)&v50 + 1) = v40;
            v51 = v30;
            if ( v54 )
            {
              v55.m128i_i64[0] = 0;
              qfree();
            }
          }
          else
          {
            *((_QWORD *)&v50 + 1) = v28;
            v51 = v29;
          }
          qfree();
          if ( (unsigned __int8)sub_64180(&v49, &v46) )
            goto LABEL_22;
          v42.m128i_i64[0] = (__int64)&v47;
          if ( (unsigned __int8)sub_318830((char *)&v50 + 8, &v47) )
            goto LABEL_22;
          sub_63C80((__int64 *)&v49, (__int64 *)&v46);
          sub_317070((char *)&v50 + 8, v42.m128i_i64[0]);
        }
        if ( sub_A94E0(a1, &v49, v37, v15, 0x2001u) )
          goto LABEL_22;
        v31 = a6[1];
        v32 = *a6;
        if ( a6[2] < (unsigned __int64)(v31 + 1) )
        {
          v34 = qvector_reserve();
          *a6 = v34;
          v32 = v34;
          v31 = a6[1];
        }
        *(_QWORD *)(v32 + 8 * v31) = v15;
        ++a6[1];
        v33 = sub_A97D0(a1, a2, *(_QWORD *)(v15 + 8), a4, 0x2001u);
        v37 = v15;
        if ( !v33 )
          break;
        v15 = v33;
      }
      if ( *((_QWORD *)&v50 + 1) )
      {
        v51.m128i_i64[0] = 0;
        qfree();
      }
      qfree();
      if ( v47 )
      {
        v48 = 0;
        qfree();
      }
      qfree();
    }
  }
  return 1;
}

