__int64 __fastcall sub_158FC0(__int128 a1, __int64 a2, __m128 a3)
{
  unsigned int v3; // r12d
  __int64 v5; // r15
  __int64 v7; // rdi
  int *v8; // r12
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r8
  bool v12; // al
  unsigned int v13; // eax
  unsigned __int8 *v14; // r8
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rax
  char *v20; // [rsp+8h] [rbp-A8h]
  __int64 v21; // [rsp+10h] [rbp-A0h]
  unsigned __int8 *v22; // [rsp+10h] [rbp-A0h]
  unsigned __int8 *v23; // [rsp+18h] [rbp-98h]
  __int64 v24; // [rsp+20h] [rbp-90h]
  unsigned __int64 *v25; // [rsp+28h] [rbp-88h]
  _BYTE *v26; // [rsp+38h] [rbp-78h] BYREF
  unsigned __int64 v27; // [rsp+40h] [rbp-70h] BYREF
  __m128 *v28; // [rsp+48h] [rbp-68h]
  _QWORD v29[2]; // [rsp+50h] [rbp-60h] BYREF
  __int64 v30[10]; // [rsp+60h] [rbp-50h] BYREF

  v30[3] = __readfsqword(0x28u);
  if ( *(_BYTE *)(a2 + 48) != 4 )
    return 0;
  v5 = a1;
  v25 = *(unsigned __int64 **)(*(_QWORD *)(a1 + 480) + 112LL);
  if ( !sub_11CC20((__int64)v25, 0xDu, 2 * *(_DWORD *)(a2 + 68)) )
    return 0;
  v7 = *(_QWORD *)(a2 + 56);
  v26 = nullptr;
  if ( *(_DWORD *)v7 == 12 )
  {
    v7 = sub_11C8E0(v7, &v26, 9);
    if ( !v7 )
      return 0;
  }
  else if ( *(_DWORD *)v7 != 9 )
  {
    return 0;
  }
  if ( *(_BYTE *)(v7 + 32) == 4 )
  {
    v8 = *(int **)(v7 + 40);
    v28 = nullptr;
    v27 = 0xFFFFFFFF00000000LL;
    v9 = *v8;
    if ( *v8 == 35 )
    {
      v10 = (__int64)(v8 + 8);
      v23 = (unsigned __int8 *)(v8 + 12);
    }
    else if ( v9 == 36 )
    {
      v10 = (__int64)(v8 + 12);
      v23 = (unsigned __int8 *)(v8 + 8);
    }
    else
    {
      if ( v9 != 33 || !(unsigned __int8)sub_11FD80((char *)v8 + 48, v30, 0) || v30[0] )
        goto LABEL_11;
      sub_125180((unsigned __int8 *)&v27, (unsigned __int8 *)v8 + 48);
      v23 = (unsigned __int8 *)&v27;
      v10 = (__int64)(v8 + 8);
      a3 = (__m128)_mm_unpacklo_epi64((__m128i)1uLL, (__m128i)1uLL);
      v28[1] = a3;
    }
    if ( *(_DWORD *)(v10 + 4) == *(_DWORD *)(a2 + 36) )
    {
      v20 = (char *)(a2 + 32);
      v24 = a2 + 32;
      if ( !v26 && *(_BYTE *)(a2 + 32) == 4 )
      {
        v19 = *(_QWORD *)(a2 + 40);
        if ( *(_DWORD *)v19 == 13 )
        {
          v26 = (_BYTE *)(v19 + 48);
          v24 = v19 + 32;
        }
      }
      v21 = v10;
      if ( sub_14E500(v10, (_BYTE *)v24, *(double *)a3.m128_u64) )
      {
        v11 = v21;
        if ( !v26 || (v12 = sub_14E500((__int64)v23, v26, *(double *)a3.m128_u64), v11 = v21, v12) )
        {
          v22 = (unsigned __int8 *)v11;
          v13 = sub_157240(v5, v11, v24, a3);
          v14 = v22;
          v3 = v13;
          if ( (_BYTE)v13 )
          {
            if ( !v26 || (v15 = sub_157240(v5, (__int64)v23, (__int64)v26, a3), v14 = v22, v15) )
            {
              v29[1] = 0;
              v29[0] = 0xFFFFFFFF00000000LL;
              *(_QWORD *)&a1 = v5;
              if ( (char *)v24 == v20 )
              {
                sub_B1520(a1, v24, *((_DWORD **)&a1 + 1), v14, *((__int64 *)&a1 + 1), *(double *)a3.m128_u64, v24, 0);
              }
              else
              {
                sub_B1520(
                  a1,
                  (__int64)v29,
                  *((_DWORD **)&a1 + 1),
                  v14,
                  *((__int64 *)&a1 + 1),
                  *(double *)a3.m128_u64,
                  v24,
                  0);
                sub_11CA10(v20, (char *)v29);
              }
              sub_123A40((__int64)v30, v23, v16, v17);
              if ( v26 )
              {
                *(_QWORD *)&a1 = v5;
                sub_B1520(
                  a1,
                  (__int64)v30,
                  *((_DWORD **)&a1 + 1),
                  (unsigned __int8 *)v30,
                  *((__int64 *)&a1 + 1),
                  *(double *)a3.m128_u64,
                  (__int64)v26,
                  0);
              }
              else
              {
                sub_1207E0((char *)v30, v25, 9, *(_QWORD *)(a2 + 24), *(_DWORD *)(v24 + 4), (__m128i)a3);
              }
              sub_11CA10((char *)(a2 + 48), (char *)v30);
              sub_12B6F0(a2, v25, 11, -1, 1, (__m128i)a3);
              v18 = 2 * HIDWORD(v30[0]);
              *(_DWORD *)(*(_QWORD *)(a2 + 40) + 68LL) = 2 * HIDWORD(v30[0]);
              *(_DWORD *)(a2 + 36) = v18;
              sub_11CDA0((__int64)v30);
              sub_11CDA0((__int64)v29);
              goto LABEL_12;
            }
          }
        }
      }
    }
LABEL_11:
    v3 = 0;
LABEL_12:
    sub_11CDA0((__int64)&v27);
    return v3;
  }
  return 0;
}

