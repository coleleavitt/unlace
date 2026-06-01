__int64 __fastcall sub_3E3E0(int *a1)
{
  bool v1; // zf
  int v3; // edx
  _DWORD *v4; // rsi
  unsigned __int64 v5; // rbp
  int v6; // edi
  _DWORD *v7; // rax
  _DWORD *v8; // rdx
  _DWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  int v20; // r8d
  _DWORD *v21; // rax
  unsigned __int64 v22; // rcx
  _DWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rax
  unsigned int v27; // r12d
  __int64 v28; // rdx
  __m128i v29; // xmm0
  __int64 *v30; // rbp
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rsi
  int *v34; // rax
  int v35; // r13d
  int v36; // r13d
  int v37; // r12d
  int v38; // r14d
  __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rax
  _DWORD *v45; // rax
  __int64 v46; // rax
  int v47; // eax
  unsigned __int64 v48; // rax
  int v49; // eax
  int v50; // edx
  int v51; // ecx
  char v52; // dl
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rax
  int v57; // [rsp+14h] [rbp-34h] BYREF
  unsigned __int64 v58; // [rsp+18h] [rbp-30h]

  v1 = *((_BYTE *)a1 + 244) == 0;
  v58 = __readfsqword(0x28u);
  if ( v1 )
  {
    v21 = *((_DWORD **)a1 + 1);
    v22 = *((_QWORD *)a1 + 2);
    *((_QWORD *)a1 + 1) = v21 + 1;
    if ( v22 < (unsigned __int64)(v21 + 1) )
      return 0;
    if ( *v21 != 524291 )
      return 0;
    v23 = v21 + 2;
    *((_QWORD *)a1 + 1) = v23;
    if ( v22 < (unsigned __int64)v23 || !(unsigned __int8)sub_3E170(a1 + 6, (unsigned __int64 *)a1 + 1) )
      return 0;
    v24 = *((_QWORD *)a1 + 20);
    v25 = *((_QWORD *)a1 + 19);
    if ( *((_QWORD *)a1 + 21) < (unsigned __int64)(v24 + 1) )
    {
      v44 = qvector_reserve();
      v24 = *((_QWORD *)a1 + 20);
      *((_QWORD *)a1 + 19) = v44;
      v25 = v44;
    }
    v26 = v25 + 24 * v24;
    *(_QWORD *)v26 = 0;
    *(_OWORD *)(v26 + 8) = 0;
    *((_BYTE *)a1 + 244) = 1;
    ++*((_QWORD *)a1 + 20);
  }
  if ( *a1 == 1 )
    return 1;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_3:
        if ( *((_BYTE *)a1 + 245) )
        {
          v14 = *((_QWORD *)a1 + 20);
          *((_BYTE *)a1 + 245) = 0;
          if ( v14 > 1 )
          {
            v15 = *((_QWORD *)a1 + 19);
            v16 = v14 - 1;
            *((_QWORD *)a1 + 20) = v16;
            v17 = (_QWORD *)(v15 + 24 * v16);
            if ( *v17 )
            {
              v17[1] = 0;
              qfree();
            }
          }
        }
        v3 = *a1;
        if ( *a1 == 3 )
        {
          v18 = *((_QWORD *)a1 + 20);
          if ( (_DWORD)v18 == 1 && !*(_DWORD *)(*((_QWORD *)a1 + 19) + 24 * v18 - 16) )
          {
            *a1 = 1;
            return 1;
          }
          v4 = *((_DWORD **)a1 + 1);
          v5 = *((_QWORD *)a1 + 2);
        }
        else
        {
          v4 = *((_DWORD **)a1 + 1);
          v5 = *((_QWORD *)a1 + 2);
          v6 = 1048834;
          v7 = v4;
          if ( !v3 )
            goto LABEL_6;
        }
        v7 = v4 + 1;
        v19 = v5;
        *((_QWORD *)a1 + 1) = v4 + 1;
        if ( v5 < (unsigned __int64)(v4 + 1) )
          return 0;
        v20 = *v4;
        v6 = *v4;
        if ( *v4 != (_DWORD)&qvsnprintf )
          break;
        v34 = v4 + 2;
        *((_QWORD *)a1 + 1) = v4 + 2;
        if ( v5 < (unsigned __int64)(v4 + 2) )
          return 0;
        v35 = v4[1];
        if ( v35 <= 7 || (v35 & 3) != 0 )
          return 0;
        *((_QWORD *)a1 + 23) = 0;
        v36 = (v35 >> 2) - 2;
        if ( v36 )
        {
          v37 = 0;
          while ( 1 )
          {
            *((_QWORD *)a1 + 1) = v34 + 1;
            if ( v19 < (unsigned __int64)(v34 + 1) )
              return 0;
            v38 = *v34;
            v39 = *((_QWORD *)a1 + 23);
            v40 = *((_QWORD *)a1 + 22);
            if ( *((_QWORD *)a1 + 24) < (unsigned __int64)(v39 + 1) )
            {
              v41 = qvector_reserve();
              *((_QWORD *)a1 + 22) = v41;
              v40 = v41;
              v39 = *((_QWORD *)a1 + 23);
            }
            ++v37;
            *(_DWORD *)(v40 + 4 * v39) = v38;
            ++*((_QWORD *)a1 + 23);
            if ( v37 == v36 )
              goto LABEL_3;
            v34 = *((int **)a1 + 1);
            v19 = *((_QWORD *)a1 + 2);
          }
        }
      }
      if ( (unsigned int)(v20 - 1048832) > 4 )
        return 0;
      if ( v20 == 1048834 && v3 == -1 )
      {
        *a1 = 0;
        return 1;
      }
LABEL_6:
      v8 = v7 + 1;
      if ( v5 < (unsigned __int64)(v7 + 1) )
        goto LABEL_58;
      *((_QWORD *)a1 + 1) = v7 + 2;
      if ( v5 < (unsigned __int64)(v7 + 2) )
        return 0;
      a1[1] = v7[1];
      v8 = v7 + 3;
      if ( v5 < (unsigned __int64)(v7 + 3) )
        goto LABEL_58;
      v8 = v7 + 4;
      if ( v6 != 1048832 )
        break;
      *((_QWORD *)a1 + 1) = v8;
      if ( v5 < (unsigned __int64)v8 )
        return 0;
      v27 = v7[3];
      *((_QWORD *)a1 + 1) = v7 + 5;
      if ( v5 < (unsigned __int64)(v7 + 5) )
        return 0;
      v28 = *((_QWORD *)a1 + 20);
      v29 = _mm_cvtsi32_si128(v7[4]);
      if ( !v28 )
      {
        v42 = *((_QWORD *)a1 + 19);
        if ( !*((_QWORD *)a1 + 21) )
        {
          v46 = qvector_reserve();
          v28 = *((_QWORD *)a1 + 20);
          v29 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v29));
          *((_QWORD *)a1 + 19) = v46;
          v42 = v46;
        }
        v43 = v42 + 24 * v28;
        *(_QWORD *)v43 = 0;
        *(_OWORD *)(v43 + 8) = 0;
        v28 = *((_QWORD *)a1 + 20) + 1LL;
        *((_QWORD *)a1 + 20) = v28;
      }
      v30 = (__int64 *)(*((_QWORD *)a1 + 19) + 24 * v28 - 24);
      v31 = v30[1];
      v32 = *v30;
      v33 = v31 + 1;
      if ( v30[2] < (unsigned __int64)(v31 + 1) )
      {
        v32 = qvector_reserve();
        v31 = v30[1];
        v29 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v29));
        *v30 = v32;
        v33 = v31 + 1;
      }
      v30[1] = v33;
      *(_QWORD *)(v32 + 8 * v31) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v27), v29).m128i_u64[0];
    }
    if ( v6 != 1048833 )
      break;
    if ( v5 < (unsigned __int64)v8 )
      goto LABEL_58;
    v10 = v7 + 5;
    *((_QWORD *)a1 + 1) = v10;
    if ( v5 < (unsigned __int64)v10 )
      return 0;
    v11 = *((_QWORD *)a1 + 20);
    if ( v11 )
    {
      v12 = *((_QWORD *)a1 + 19) + 24 * v11 - 24;
      v13 = *(_QWORD *)(v12 + 8);
      if ( v13 )
        *(_QWORD *)(v12 + 8) = v13 - 1;
    }
  }
  *((_QWORD *)a1 + 1) = v8;
  if ( v6 == 1048834 )
  {
    if ( v5 < (unsigned __int64)v8 )
      return 0;
    a1[50] = v7[3];
    if ( !sub_3DD40((unsigned __int64 *)a1 + 1, a1 + 51) )
      return 0;
    v48 = *((_QWORD *)a1 + 1) + 4LL;
    *((_QWORD *)a1 + 1) = v48;
    if ( v5 < v48 )
      return 0;
    if ( !sub_3DD40((unsigned __int64 *)a1 + 1, &v57) )
      return 0;
    if ( !sub_3DD40((unsigned __int64 *)a1 + 1, a1 + 59) )
      return 0;
    v49 = (unsigned __int16)v57;
    v50 = v57 >> 16;
    v57 = (unsigned __int16)v57;
    a1[58] = v50 - 1;
    v51 = a1[59];
    a1[59] = (unsigned __int16)v51 - 1;
    a1[60] = (v51 >> 16) - 1;
    v52 = sub_3DD70((unsigned __int64 *)a1 + 1, (__int64 *)a1 + 26, 5 * v49);
    v53 = 3;
    if ( !v52 )
      return 0;
    while ( 1 )
    {
      v54 = v53;
      if ( (unsigned __int64)v53 >= *((_QWORD *)a1 + 27) )
        break;
      v53 += 5;
      *(int *)(*((_QWORD *)a1 + 26) + 4 * v54) >>= 24;
    }
    v55 = *((_QWORD *)a1 + 20);
    if ( *((_QWORD *)a1 + 21) < (unsigned __int64)(v55 + 1) )
    {
      *((_QWORD *)a1 + 19) = qvector_reserve();
      v55 = *((_QWORD *)a1 + 20);
    }
    v56 = *((_QWORD *)a1 + 19) + 24 * v55;
    *(_QWORD *)v56 = 0;
    *(_OWORD *)(v56 + 8) = 0;
    *a1 = 2;
    ++*((_QWORD *)a1 + 20);
    return 1;
  }
  if ( v6 == 1048835 )
  {
    if ( v5 >= (unsigned __int64)v8 )
    {
      a1[50] = v7[3];
      *((_QWORD *)a1 + 1) = v7 + 5;
      if ( v5 >= (unsigned __int64)(v7 + 5) )
      {
        v47 = v7[4];
        *a1 = 3;
        *((_BYTE *)a1 + 245) = 1;
        a1[51] = v47;
        return 1;
      }
    }
  }
  else if ( v5 >= (unsigned __int64)v8 )
  {
    a1[51] = v7[3];
    v8 = v7 + 5;
    if ( v5 < (unsigned __int64)(v7 + 5) )
    {
LABEL_58:
      *((_QWORD *)a1 + 1) = v8;
      return 0;
    }
    v45 = v7 + 6;
    *((_QWORD *)a1 + 1) = v45;
    if ( v5 >= (unsigned __int64)v45 )
    {
      *a1 = 4;
      return 1;
    }
  }
  return 0;
}

