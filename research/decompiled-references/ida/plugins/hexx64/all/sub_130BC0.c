__int64 __fastcall sub_130BC0(
        const __m128i *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __m128i a7,
        __m128 a8)
{
  unsigned int v8; // r15d
  const __m128i *v11; // r14
  __int64 v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  char v18; // al
  __int64 v19; // r11
  unsigned int v20; // eax
  __int64 v21; // rdi
  unsigned __int64 v22; // r10
  char v23; // al
  char v24; // al
  int v25; // [rsp+8h] [rbp-108h]
  unsigned __int64 v26; // [rsp+8h] [rbp-108h]
  unsigned __int64 v27; // [rsp+8h] [rbp-108h]
  __int64 v28; // [rsp+10h] [rbp-100h]
  __int64 v29; // [rsp+18h] [rbp-F8h]
  const __m128i *v30; // [rsp+20h] [rbp-F0h]
  int *v31; // [rsp+28h] [rbp-E8h]
  unsigned __int64 *v32; // [rsp+30h] [rbp-E0h]
  __int64 v34; // [rsp+40h] [rbp-D0h]
  __int64 v35; // [rsp+40h] [rbp-D0h]
  __int64 v37; // [rsp+48h] [rbp-C8h]
  __int16 v38; // [rsp+50h] [rbp-C0h] BYREF
  int v39; // [rsp+58h] [rbp-B8h]
  __m128 v40; // [rsp+60h] [rbp-B0h] BYREF
  int *v41; // [rsp+70h] [rbp-A0h]
  __int64 v42; // [rsp+78h] [rbp-98h]
  __int64 v43; // [rsp+80h] [rbp-90h]
  __int64 v44; // [rsp+88h] [rbp-88h]
  int v45; // [rsp+90h] [rbp-80h]
  __m128 v46; // [rsp+A0h] [rbp-70h] BYREF
  int *v47; // [rsp+B0h] [rbp-60h]
  __int64 v48; // [rsp+B8h] [rbp-58h]
  __int64 v49; // [rsp+C0h] [rbp-50h]
  __int64 v50; // [rsp+C8h] [rbp-48h]
  int v51; // [rsp+D0h] [rbp-40h]
  unsigned __int64 v52; // [rsp+D8h] [rbp-38h]

  v52 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a5 + 4) == *(_DWORD *)(a3 + 4) )
  {
    v11 = a1;
    v13 = sub_339CA0();
    LOBYTE(v14) = sub_1255D0((unsigned __int8 *)a3, v13, a5, 0, *(double *)a7.m128i_i64);
    v8 = v14;
    if ( !(_BYTE)v14 )
    {
      v32 = *(unsigned __int64 **)(a1[30].m128i_i64[0] + 112);
      sub_123A40((__int64)&v38, (unsigned __int8 *)a5, v15, v16);
      if ( (unsigned __int8)sub_12CD10(&v38, v32, 0, a7)
        && (unsigned __int8)sub_12EA80((__int64)v32, a1, a2, a3, a4, (__int64)&v38, a7, a8, 2) )
      {
        if ( a6 && *(_BYTE *)a3 == 1 && *(_BYTE *)a5 == 1 && (_BYTE)v38 == 1 && *(_DWORD *)(a3 + 8) == v39 )
        {
          v20 = sub_A92A0(a1[4].m128i_i64[0], (unsigned __int8 *)a3, (unsigned __int8 *)a5, *(double *)a7.m128i_i64);
          goto LABEL_23;
        }
      }
      else
      {
        v17 = a1[4].m128i_i64[0];
        v42 = a5;
        v43 = 0;
        v44 = 0;
        v48 = a3;
        v49 = 0;
        v50 = 0;
        v40.m128_u64[0] = (unsigned __int64)v11;
        v40.m128_u64[1] = a4;
        v41 = nullptr;
        v45 = 0;
        v18 = sub_12A160(v17, &v40, 1, *(double *)a7.m128i_i64, a8);
        v29 = a2;
        v19 = 0;
        v28 = v40.m128_i64[1];
        v30 = (const __m128i *)v40.m128_u64[0];
        v31 = v41;
        if ( v18 )
        {
          v21 = v11[4].m128i_i64[0];
          v46.m128_u64[0] = (unsigned __int64)v11;
          v25 = v45;
          v46.m128_u64[1] = a2;
          v47 = nullptr;
          v51 = 0;
          sub_12A160(v21, &v46, 1, *(double *)a7.m128i_i64, a8);
          v22 = v46.m128_u64[0];
          v19 = (__int64)v47;
          v29 = v46.m128_i64[1];
          if ( v31 == v47
            && v31[17] == *(_DWORD *)(a3 + 4) + *(_DWORD *)(a5 + 4)
            && v51 == 2
            && v25 == 3
            && (*(_BYTE *)a3 != 4 || (unsigned int)(**(_DWORD **)(a3 + 8) - 8) > 1) )
          {
            goto LABEL_11;
          }
          if ( a6 )
          {
            if ( *(_BYTE *)a5 == 1 )
            {
              v27 = v46.m128_u64[0];
              v35 = (__int64)v47;
              v24 = sub_A92A0(
                      v11[4].m128i_i64[0],
                      (unsigned __int8 *)&v38,
                      (unsigned __int8 *)a5,
                      *(double *)a7.m128i_i64);
              v19 = v35;
              v22 = v27;
              if ( !v24 )
                goto LABEL_12;
            }
          }
          if ( v11 == v30 )
          {
            v26 = v22;
            v34 = v19;
            v23 = sub_30D8F0((__int64)v32, (__int64)v30, v28, v31, a2, a3);
            v19 = v34;
            v22 = v26;
            if ( v23 )
              goto LABEL_11;
          }
          v11 = (const __m128i *)v22;
        }
        if ( *(_BYTE *)a5 == 4 )
        {
          v28 = a4;
          v31 = *(int **)(a5 + 8);
        }
        if ( *(_BYTE *)a3 == 4 )
        {
          v29 = a2;
          v19 = *(_QWORD *)(a3 + 8);
        }
        if ( !v31 || !v19 || v11 != v30 )
          goto LABEL_12;
        v37 = v19;
        if ( !(unsigned __int8)sub_130320(v30, v29, v19, v28, v31, a7, a8) )
        {
          v20 = sub_1307A0(v30, v29, v37, v28, v31, a7, a8);
LABEL_23:
          v8 = v20;
          goto LABEL_12;
        }
      }
LABEL_11:
      v8 = 1;
LABEL_12:
      sub_11CDA0((__int64)&v38);
      return v8;
    }
  }
  return 0;
}

