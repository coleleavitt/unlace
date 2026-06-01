__int64 __fastcall sub_12C700(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  unsigned int v6; // r15d
  unsigned __int64 v9; // r14
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rdi
  char v14; // al
  __int64 v15; // r11
  unsigned int v16; // eax
  __int64 v17; // rdi
  unsigned __int64 v18; // r10
  char v19; // al
  char v20; // al
  int v21; // [rsp+8h] [rbp-108h]
  unsigned __int64 v22; // [rsp+8h] [rbp-108h]
  unsigned __int64 v23; // [rsp+8h] [rbp-108h]
  __int64 v24; // [rsp+10h] [rbp-100h]
  __int64 v25; // [rsp+18h] [rbp-F8h]
  const __m128i *v26; // [rsp+20h] [rbp-F0h]
  int *v27; // [rsp+28h] [rbp-E8h]
  __int64 v28; // [rsp+30h] [rbp-E0h]
  __int64 v30; // [rsp+40h] [rbp-D0h]
  __int64 v31; // [rsp+40h] [rbp-D0h]
  __int64 v33; // [rsp+48h] [rbp-C8h]
  __int16 v34; // [rsp+50h] [rbp-C0h] BYREF
  int v35; // [rsp+58h] [rbp-B8h]
  __m128 v36; // [rsp+60h] [rbp-B0h] BYREF
  int *v37; // [rsp+70h] [rbp-A0h]
  __int64 v38; // [rsp+78h] [rbp-98h]
  __int64 v39; // [rsp+80h] [rbp-90h]
  __int64 v40; // [rsp+88h] [rbp-88h]
  int v41; // [rsp+90h] [rbp-80h]
  __m128 v42; // [rsp+A0h] [rbp-70h] BYREF
  int *v43; // [rsp+B0h] [rbp-60h]
  __int64 v44; // [rsp+B8h] [rbp-58h]
  __int64 v45; // [rsp+C0h] [rbp-50h]
  __int64 v46; // [rsp+C8h] [rbp-48h]
  int v47; // [rsp+D0h] [rbp-40h]
  unsigned __int64 v48; // [rsp+D8h] [rbp-38h]

  v48 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a5 + 4) == *(_DWORD *)(a3 + 4) )
  {
    v9 = (unsigned __int64)a1;
    v11 = sub_3346E0();
    LOBYTE(v12) = sub_121110((unsigned __int8 *)a3, v11, a5, 0);
    v6 = v12;
    if ( !(_BYTE)v12 )
    {
      v28 = *(_QWORD *)(a1[30].m128i_i64[0] + 112);
      sub_11F580((__int64)&v34, (unsigned __int8 *)a5);
      if ( (unsigned __int8)sub_128850(&v34, v28, 0)
        && (unsigned __int8)sub_12A5C0(v28, a1, a2, a3, a4, (__int64)&v34, 2) )
      {
        if ( a6 && *(_BYTE *)a3 == 1 && *(_BYTE *)a5 == 1 && (_BYTE)v34 == 1 && *(_DWORD *)(a3 + 8) == v35 )
        {
          v16 = sub_A4DE0(a1[4].m128i_i64[0], (_BYTE *)a3, (_BYTE *)a5);
          goto LABEL_23;
        }
      }
      else
      {
        v13 = a1[4].m128i_i64[0];
        v38 = a5;
        v39 = 0;
        v40 = 0;
        v44 = a3;
        v45 = 0;
        v46 = 0;
        v36.m128_u64[0] = v9;
        v36.m128_u64[1] = a4;
        v37 = nullptr;
        v41 = 0;
        v14 = sub_125CA0(v13, &v36, 1);
        v25 = a2;
        v15 = 0;
        v24 = v36.m128_i64[1];
        v26 = (const __m128i *)v36.m128_u64[0];
        v27 = v37;
        if ( v14 )
        {
          v17 = *(_QWORD *)(v9 + 64);
          v42.m128_u64[0] = v9;
          v21 = v41;
          v42.m128_u64[1] = a2;
          v43 = nullptr;
          v47 = 0;
          sub_125CA0(v17, &v42, 1);
          v18 = v42.m128_u64[0];
          v15 = (__int64)v43;
          v25 = v42.m128_i64[1];
          if ( v27 == v43
            && v27[17] == *(_DWORD *)(a3 + 4) + *(_DWORD *)(a5 + 4)
            && v47 == 2
            && v21 == 3
            && (*(_BYTE *)a3 != 4 || (unsigned int)(**(_DWORD **)(a3 + 8) - 8) > 1) )
          {
            goto LABEL_11;
          }
          if ( a6 )
          {
            if ( *(_BYTE *)a5 == 1 )
            {
              v23 = v42.m128_u64[0];
              v31 = (__int64)v43;
              v20 = sub_A4DE0(*(_QWORD *)(v9 + 64), &v34, (_BYTE *)a5);
              v15 = v31;
              v18 = v23;
              if ( !v20 )
                goto LABEL_12;
            }
          }
          if ( (const __m128i *)v9 == v26 )
          {
            v22 = v18;
            v30 = v15;
            v19 = sub_308CF0(v28, v26, v24, v27, a2, a3);
            v15 = v30;
            v18 = v22;
            if ( v19 )
              goto LABEL_11;
          }
          v9 = v18;
        }
        if ( *(_BYTE *)a5 == 4 )
        {
          v24 = a4;
          v27 = *(int **)(a5 + 8);
        }
        if ( *(_BYTE *)a3 == 4 )
        {
          v25 = a2;
          v15 = *(_QWORD *)(a3 + 8);
        }
        if ( !v27 || !v15 || (const __m128i *)v9 != v26 )
          goto LABEL_12;
        v33 = v15;
        if ( !(unsigned __int8)sub_12BE60(v26, v25, v15, v24, v27) )
        {
          v16 = sub_12C2E0(v26, v25, v33, v24, v27);
LABEL_23:
          v6 = v16;
          goto LABEL_12;
        }
      }
LABEL_11:
      v6 = 1;
LABEL_12:
      sub_1188E0((__int64)&v34);
      return v6;
    }
  }
  return 0;
}

