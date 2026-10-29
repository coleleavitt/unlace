__int64 __fastcall sub_51EA0(int a1, int a2, __int64 *a3, __int64 *a4)
{
  __int64 v4; // r13
  __int64 *v5; // r12
  __int64 v7; // r15
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  int v12; // ecx
  unsigned __int64 v13; // r8
  int v14; // r9d
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // [rsp+0h] [rbp-90h]
  size_t v29; // [rsp+8h] [rbp-88h]
  __int64 v30; // [rsp+10h] [rbp-80h]
  __int64 v31; // [rsp+18h] [rbp-78h]
  __int128 v32; // [rsp+20h] [rbp-70h] BYREF
  __m128i v33; // [rsp+30h] [rbp-60h] BYREF
  int v34; // [rsp+40h] [rbp-50h] BYREF
  _BYTE v35[20]; // [rsp+44h] [rbp-4Ch]
  unsigned __int64 v36; // [rsp+58h] [rbp-38h]

  v4 = 0;
  v5 = a3;
  LODWORD(v30) = a1;
  LODWORD(v29) = a2;
  v36 = __readfsqword(0x28u);
  v31 = (__int64)(a3 + 3);
  if ( (unsigned __int8)sub_97630(a4, 8455) )
    goto LABEL_20;
  while ( 1 )
  {
    v7 = sub_5A0C0(v31, a4, 6, 4);
    v32 = 0;
    if ( (unsigned __int8)sub_945B0(a4, &v32, 73) )
      sub_50530(v5, a4, (__int64)&v32, v7 + 392);
    v5 = (__int64 *)(v7 + 416);
    sub_A1200(
      (_DWORD)a4,
      v7 + 416,
      v8,
      v9,
      v10,
      v11,
      v28,
      v29,
      v30,
      v31,
      v32,
      DWORD2(v32),
      v33.m128i_i32[0],
      v33.m128i_i32[2],
      v34,
      *(_DWORD *)&v35[4],
      *(__int64 *)&v35[12]);
    if ( *(_DWORD *)(v7 + 392) )
      break;
    if ( (*(_QWORD *)(v7 + 232) & 0x7FFFFFFFFFFFFFFFLL) != 0 && *(_QWORD *)(v7 + 232) != -1 )
    {
      v22 = sub_5C620(v29, 0, 1, 0, v7 + 232);
      *(_DWORD *)(v7 + 392) = 3;
      *(_QWORD *)(v7 + 400) = v22;
      *(_QWORD *)(v7 + 408) = v23;
      break;
    }
    if ( under_debugger )
      BUG();
    interr(30478);
LABEL_20:
    v4 = sub_5A220(v31, a4, 1, 1);
  }
  if ( *(_QWORD *)(v7 + 424) )
  {
LABEL_11:
    if ( !v4 )
      goto LABEL_13;
    goto LABEL_12;
  }
  v15 = *(_QWORD *)(v7 + 440);
  if ( v15 != -1 )
  {
    if ( v15 )
    {
      v16 = sub_5E020(
              (int)v7 + 392,
              0,
              v29,
              v12,
              v13,
              v14,
              v28,
              v29,
              v30,
              v31,
              v32,
              DWORD2(v32),
              v33.m128i_i32[0],
              v33.m128i_i32[2],
              v34,
              *(_DWORD *)&v35[4],
              *(__int64 *)&v35[12]);
      v13 = *(_QWORD *)(v7 + 440);
      if ( v16 - 1 >= 0xFFFFFFFFFFFFFFFELL )
        v16 = 1;
      if ( v13 >= v16 )
      {
        v24 = *(_QWORD *)(v7 + 424);
        v25 = *(_QWORD *)(v7 + 416);
        if ( *(_QWORD *)(v7 + 432) < (unsigned __int64)(v24 + 1) )
        {
          v28 = *(_QWORD *)(v7 + 440);
          v27 = qvector_reserve(v7 + 416, v25, v24 + 1, 24);
          *(_QWORD *)(v7 + 416) = v27;
          v24 = *(_QWORD *)(v7 + 424);
          v25 = v27;
          v13 = v28;
        }
        v26 = v25 + 24 * v24;
        *(_OWORD *)v26 = 0;
        *(_BYTE *)(v26 + 16) = 0;
        ++*(_QWORD *)(v7 + 424);
        *(_QWORD *)v26 = 0;
        *(_QWORD *)(v26 + 8) = v13 / v16 - 1;
      }
    }
    goto LABEL_11;
  }
  *(_QWORD *)(v7 + 440) = 0;
  if ( v4 )
  {
LABEL_12:
    *(_DWORD *)&v35[16] = 0;
    *(_DWORD *)(v7 + 448) |= 2u;
    *(_OWORD *)v35 = 0;
    *(_QWORD *)&v35[4] = v7;
    v34 = 1;
    v33 = (__m128i)0x8000000000000000LL;
    sub_2FD40(v4, v31, v29, nullptr, "body", &v33, (const __m128i *)&v34, 0, 0, 0);
    v20 = sub_5E020(
            (unsigned int)&v34,
            1,
            v29,
            v17,
            v18,
            v19,
            v28,
            v29,
            v30,
            v31,
            v32,
            DWORD2(v32),
            v33.m128i_i32[0],
            v33.m128i_i32[2],
            v34,
            *(_DWORD *)&v35[4],
            *(__int64 *)&v35[12]);
    v7 = v4;
    *(_QWORD *)(v4 + 376) = 8 * v20;
    *(_QWORD *)(v4 + 368) = v20 & 0x1FFFFFFFFFFFFFFFLL;
  }
LABEL_13:
  if ( unk_CC8D0 )
    sub_66090(v31, v29, (unsigned int)"after_array_type_%p", v7, v13, v14, v28);
  *(_OWORD *)(v30 + 4) = 0;
  *(_DWORD *)(v30 + 20) = 0;
  *(_DWORD *)v30 = 1;
  *(_QWORD *)(v30 + 8) = v7;
  sub_84A10(&v32);
  return v30;
}
