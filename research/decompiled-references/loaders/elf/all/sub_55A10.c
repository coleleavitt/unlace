unsigned __int64 __fastcall sub_55A10(__int64 a1, __int64 a2, _DWORD *a3, double a4, double a5)
{
  unsigned __int64 result; // rax
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r13
  __int64 v8; // r15
  int v9; // r14d
  __int64 v10; // rbp
  __int64 v11; // r15
  unsigned __int16 v12; // dx
  __int64 v13; // r14
  unsigned __int64 v14; // r13
  __int64 *v15; // r12
  __int64 v16; // rdi
  __int64 v17; // rdi
  unsigned int v18; // r15d
  int v19; // eax
  __int64 v20; // rdi
  int v21; // r14d
  unsigned int v22; // r14d
  unsigned __int64 v23; // rcx
  const char *(__fastcall *v24)(__m128, __m128, __m128, __m128, __m128, __m128, __m128, __m128, __int64, unsigned int *, __int64, __int64, __int64, __int64); // rax
  __int64 v25; // r14
  __int64 v26; // r15
  _QWORD *v27; // rax
  __int64 v28; // rdi
  unsigned __int64 *v29; // r15
  int v30; // eax
  int v31; // r14d
  unsigned __int64 *v32; // r12
  unsigned __int64 *v33; // r13
  _QWORD *v35; // [rsp+8h] [rbp-50h]
  unsigned int v36; // [rsp+14h] [rbp-44h]
  const char *(__fastcall *v37)(__m128, __m128, __m128, __m128, __m128, __m128, __m128, __m128, __int64, unsigned int *, __int64, __int64, __int64, __int64); // [rsp+18h] [rbp-40h]

  result = sub_54350(a2, (_QWORD *)(a2 + 624), a2 + 840, *a3 > 0);
  v6 = *(unsigned int *)(a2 + 160);
  v7 = *(unsigned int *)(a2 + 192);
  v8 = *(unsigned int *)(a2 + 232);
  v9 = v7 | *(_DWORD *)(a2 + 160);
  if ( !(_DWORD)v8 || (result = sub_48550(*(unsigned int *)(a2 + 232), a2), !(_BYTE)result) )
  {
    v10 = 0;
    if ( !v9 )
      goto LABEL_3;
    v10 = 0;
    v30 = sub_47B70(a2, v7, (__int64 *)(a2 + 320));
    LODWORD(v20) = a2;
    *(_DWORD *)(a2 + 832) = v30;
    v31 = v30;
    result = sub_47B70(a2, v6, (__int64 *)(a2 + 352));
    v36 = 0;
    *(_DWORD *)(a2 + 836) = result;
    v22 = result + v31;
    goto LABEL_50;
  }
  v10 = *(_QWORD *)(v8 + 568);
  v18 = *(_DWORD *)(v10 + 192);
  v36 = v18;
  if ( !(v18 | v9) )
    goto LABEL_3;
  v19 = sub_47B70(a2, v7, (__int64 *)(a2 + 320));
  LODWORD(v20) = a2;
  *(_DWORD *)(a2 + 832) = v19;
  v21 = v19;
  result = sub_47B70(a2, v6, (__int64 *)(a2 + 352));
  *(_DWORD *)(a2 + 836) = result;
  v22 = result + v21;
  if ( !v18 )
  {
LABEL_50:
    if ( !v22 )
      goto LABEL_3;
    goto LABEL_31;
  }
  LODWORD(v20) = v10;
  result = sub_47B70(v10, v18, (__int64 *)(v10 + 320));
  v22 += result;
  *(_DWORD *)(v10 + 832) = result;
  if ( !v22 )
    goto LABEL_3;
LABEL_31:
  v23 = v22;
  v24 = sub_10000;
  v25 = *(_QWORD *)(a2 + 296);
  if ( v23 <= (unsigned __int64)sub_10000 )
    v24 = (const char *(__fastcall *)(__m128, __m128, __m128, __m128, __m128, __m128, __m128, __m128, __int64, unsigned int *, __int64, __int64, __int64, __int64))v23;
  v26 = 0;
  v37 = v24;
  if ( v25 )
  {
    do
    {
      v27 = (_QWORD *)(*(_QWORD *)(a2 + 288) + 96 * v26);
      v28 = v27[3];
      if ( v28 )
      {
        v27[4] = 0;
        v35 = v27;
        qfree(v28);
        v27 = v35;
      }
      v20 = *v27;
      if ( *v27 )
      {
        v27[1] = 0;
        qfree(v20);
      }
      ++v26;
    }
    while ( v25 != v26 );
  }
  *(_QWORD *)(a2 + 296) = 0;
  result = (unsigned __int64)v37;
  if ( *(_QWORD *)(a2 + 304) < (unsigned __int64)v37 )
  {
    LODWORD(v20) = a2 + 288;
    result = qvector_reserve(a2 + 288, *(_QWORD *)(a2 + 288), v37, 96);
    *(_QWORD *)(a2 + 288) = result;
  }
  if ( *(_DWORD *)(a2 + 832) )
  {
    if ( !*(_BYTE *)(a2 + 248) )
      goto LABEL_63;
    if ( v7 >= *(_QWORD *)(a2 + 120) )
      v33 = nullptr;
    else
      v33 = (unsigned __int64 *)(*(_QWORD *)(a2 + 112) + (v7 << 6));
    LODWORD(v20) = a2;
    result = sub_556E0((_QWORD *)a2, 1, v33[3], v33[4], v33[7]);
    *(_DWORD *)(a2 + 832) = result;
  }
  if ( *(_DWORD *)(a2 + 836) )
  {
    if ( !*(_BYTE *)(a2 + 248) )
      goto LABEL_63;
    if ( v6 >= *(_QWORD *)(a2 + 120) )
      v32 = nullptr;
    else
      v32 = (unsigned __int64 *)(*(_QWORD *)(a2 + 112) + (v6 << 6));
    LODWORD(v20) = a2;
    result = sub_556E0((_QWORD *)a2, 2, v32[3], v32[4], v32[7]);
    *(_DWORD *)(a2 + 836) = result;
  }
  if ( v36 && *(_DWORD *)(v10 + 832) )
  {
    if ( *(_BYTE *)(v10 + 248) )
    {
      if ( (unsigned __int64)v36 >= *(_QWORD *)(v10 + 120) )
        v29 = nullptr;
      else
        v29 = (unsigned __int64 *)(*(_QWORD *)(v10 + 112) + ((unsigned __int64)v36 << 6));
      result = sub_556E0((_QWORD *)v10, 1, v29[3], v29[4], v29[7]);
      *(_DWORD *)(v10 + 832) = result;
      goto LABEL_3;
    }
LABEL_63:
    sub_30AC0();
    return sub_55F40(v20);
  }
LABEL_3:
  v11 = *(_QWORD *)(a2 + 832);
  if ( !v11 )
  {
    result = *(_QWORD *)(a2 + 888);
    if ( result )
    {
      v12 = *(_WORD *)(a2 + 896);
      if ( v12 )
      {
        v13 = *(_QWORD *)(a2 + 296);
        v14 = (unsigned int)(result / v12);
        if ( v14 > (unsigned __int64)sub_10000 )
          v14 = (unsigned __int64)sub_10000;
        if ( v13 )
        {
          do
          {
            v15 = (__int64 *)(*(_QWORD *)(a2 + 288) + 96 * v11);
            v16 = v15[3];
            if ( v16 )
            {
              v15[4] = 0;
              qfree(v16);
            }
            v17 = *v15;
            if ( *v15 )
            {
              v15[1] = 0;
              qfree(v17);
            }
            ++v11;
          }
          while ( v13 != v11 );
        }
        *(_QWORD *)(a2 + 296) = 0;
        if ( *(_QWORD *)(a2 + 304) < v14 )
          *(_QWORD *)(a2 + 288) = qvector_reserve(a2 + 288, *(_QWORD *)(a2 + 288), v14, 96);
        result = sub_556E0(
                   (_QWORD *)a2,
                   2,
                   *(_QWORD *)(a2 + 872),
                   *(_QWORD *)(a2 + 888),
                   *(unsigned __int16 *)(a2 + 896));
        *(_DWORD *)(a2 + 836) = result;
      }
    }
  }
  if ( *(_WORD *)(a2 + 520) != 1 )
    result = sub_413E0(a1, a2, a4, a5);
  if ( *(_DWORD *)(a2 + 832) )
    result = sub_41D00(a1, a2, 1, *(_DWORD *)(a2 + 836) != 0);
  if ( *(_DWORD *)(a2 + 836) )
    result = sub_41D00(a1, a2, 2, 0);
  if ( v10 )
  {
    if ( *(_DWORD *)(v10 + 832) )
      return sub_41D00(a1, a2, 1, *(_DWORD *)(v10 + 836) != 0);
  }
  return result;
}
