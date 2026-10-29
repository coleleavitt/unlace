__int64 __fastcall sub_1C4AE0(int *a1, unsigned __int64 a2, int *a3, unsigned __int64 a4, double a5)
{
  __int64 v5; // r13
  int v9; // eax
  int v11; // edx
  __m128 v12; // xmm1
  char v14; // r14
  int v15; // r9d
  int v16; // ecx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rcx
  char v19; // di
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // r9
  __int64 *v26; // [rsp+8h] [rbp-110h] BYREF
  __int64 v27; // [rsp+10h] [rbp-108h] BYREF
  __int64 v28; // [rsp+18h] [rbp-100h]
  unsigned __int64 v29; // [rsp+20h] [rbp-F8h] BYREF
  char v30; // [rsp+28h] [rbp-F0h]
  int v31; // [rsp+2Ch] [rbp-ECh]
  __int64 v32[2]; // [rsp+30h] [rbp-E8h] BYREF
  unsigned __int64 *v33; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v34; // [rsp+48h] [rbp-D0h]
  __int64 v35[2]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+70h] [rbp-A8h] BYREF
  __int128 v37; // [rsp+78h] [rbp-A0h]
  __m128i v38; // [rsp+90h] [rbp-88h]
  __int64 v39; // [rsp+A0h] [rbp-78h]
  __int128 v40; // [rsp+A8h] [rbp-70h]
  __int64 v41; // [rsp+B8h] [rbp-60h]
  int v42; // [rsp+C0h] [rbp-58h]
  __int64 v43; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v44; // [rsp+D8h] [rbp-40h]

  v9 = *a1;
  v44 = __readfsqword(0x28u);
  if ( (unsigned int)(v9 - 3) > 1 )
    goto LABEL_3;
  v11 = *a3;
  if ( (unsigned int)(*a3 - 3) > 1 )
    goto LABEL_3;
  v15 = a3[2];
  v16 = a1[2];
  if ( v9 == 4 )
  {
    v17 = (unsigned __int16)v16;
    v18 = HIWORD(v16);
    v19 = a2 & 1 | (a2 <= 1);
    if ( v11 == 4 )
    {
      v21 = (unsigned __int16)v15;
      if ( !v19 )
      {
        a2 >>= 1;
        goto LABEL_42;
      }
    }
    else if ( !v19 )
    {
      a2 >>= 1;
      if ( !a4 )
        goto LABEL_3;
      v20 = a2 - 1;
      v21 = v15;
      v22 = -1;
      v23 = v17 + a2 - 1;
      if ( v23 < v15 )
        goto LABEL_33;
      goto LABEL_31;
    }
    if ( !under_debugger )
      sub_383060(0xC5E3u, a5);
LABEL_64:
    BUG();
  }
  v17 = v16;
  if ( v11 != 4 )
  {
    LOBYTE(v5) = a4 != 0 && a2 != 0;
    if ( (_BYTE)v5 && v16 + a2 - 1 >= v15 && v15 + a4 - 1 >= v16 )
      return (unsigned int)v5;
    goto LABEL_3;
  }
  v21 = (unsigned __int16)v15;
  v18 = -1;
LABEL_42:
  if ( a4 <= 1 || (a4 & 1) != 0 )
  {
    if ( !under_debugger )
      sub_383060(0xC5E4u, a5);
    goto LABEL_64;
  }
  a4 >>= 1;
  if ( !a2 )
    goto LABEL_3;
  v20 = a2 - 1;
  v23 = a2 - 1 + v17;
  v22 = HIWORD(v15);
  if ( v23 < v21 )
  {
    if ( (_DWORD)v18 == -1 )
      goto LABEL_38;
    goto LABEL_33;
  }
LABEL_31:
  if ( v21 + a4 - 1 >= v17 )
    goto LABEL_40;
  if ( (_DWORD)v18 == -1 )
  {
    if ( (_DWORD)v22 == -1 )
      goto LABEL_3;
    goto LABEL_38;
  }
LABEL_33:
  v24 = v18 + v20;
  if ( v24 >= v21 )
  {
    v25 = a4 - 1;
    if ( a4 - 1 + v21 >= v18 )
      goto LABEL_40;
    if ( (_DWORD)v22 == -1 )
      goto LABEL_3;
    if ( v24 < v22 )
      goto LABEL_38;
  }
  else
  {
    if ( (_DWORD)v22 == -1 )
      goto LABEL_3;
    if ( v24 < v22 )
      goto LABEL_38;
    v25 = a4 - 1;
  }
  if ( v22 + v25 >= v18 )
  {
LABEL_40:
    LODWORD(v5) = 1;
    return (unsigned int)v5;
  }
LABEL_38:
  if ( v23 >= v22 && v22 + a4 - 1 >= v17 )
    goto LABEL_40;
LABEL_3:
  v27 = -1;
  v28 = 0;
  if ( (unsigned __int8)sub_1C3110((__int64)a1, (__int64)&v27, a2, a5) )
  {
    v14 = v28;
    v5 = SHIDWORD(v28);
    v30 = 0;
    v26 = (__int64 *)v27;
    v29 = -1;
    v31 = 0;
    if ( (unsigned __int8)sub_1C3110((__int64)a3, (__int64)&v29, a4, a5) )
    {
      if ( v30 == v14 && v5 && v31 && (unsigned __int64)v26 + v5 - 1 >= v29 )
      {
        LOBYTE(v5) = v31 + v29 - 1 >= (unsigned __int64)v26;
        return (unsigned int)v5;
      }
      goto LABEL_20;
    }
  }
  if ( *a1 != 2 && *a3 != 2 )
  {
LABEL_20:
    LODWORD(v5) = 0;
    return (unsigned int)v5;
  }
  v26 = v32;
  v34 = 0;
  v37 = 0;
  v12 = _mm_loadh_ps((const double *)&v26);
  v32[0] = 0;
  v32[1] = 0;
  v33 = nullptr;
  v35[0] = 0;
  v35[1] = 0;
  v36 = 0;
  v39 = 0;
  v41 = 0;
  v42 = -1;
  v43 = 0;
  v38 = (__m128i)v12;
  v40 = 0;
  for_all_arglocs();
  v38.m128i_i64[0] = (__int64)off_4DE840;
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39);
  }
  v39 = 0;
  v41 = 0;
  v38 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_4DE840, (__m128i)(unsigned __int64)v35);
  v42 = -1;
  v43 = 0;
  v40 = 0;
  for_all_arglocs();
  v38.m128i_i64[0] = (__int64)off_4DE840;
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39);
  }
  LODWORD(v5) = sub_64780(v26, v35);
  if ( !(_BYTE)v5 )
    LODWORD(v5) = sub_318470(&v33, (__int64)&v36);
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36);
  }
  qfree(v35[0]);
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree((__int64)v33);
  }
  qfree(v32[0]);
  return (unsigned int)v5;
}

