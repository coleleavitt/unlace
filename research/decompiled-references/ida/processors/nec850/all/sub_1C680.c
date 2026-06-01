__int64 __fastcall sub_1C680(__int64 a1, char a2, double a3, double a4, __m128 a5)
{
  unsigned __int64 *v6; // rax
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // rbp
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // r12d
  __m128i *v15; // r15
  __int64 v16; // rbp
  __m128i *v17; // r13
  unsigned __int64 v18; // rdx
  const __m128i *v19; // rbp
  const __m128i *v20; // rdi
  char *v21; // r14
  __int64 v22; // rbp
  unsigned __int64 *v23; // r13
  unsigned __int64 v24; // rdx
  unsigned __int64 *v25; // rbp
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  unsigned __int64 *v28; // rax
  unsigned __int64 *v29; // rsi
  __int64 *v30; // rax
  __int64 *v31; // rbp
  __int64 *v32; // r14
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 *v35; // rbp
  __int64 *v36; // r14
  __int64 v37; // rax
  __int64 v38; // rsi
  unsigned __int64 *v39; // rsi
  __int64 v40; // [rsp+0h] [rbp-1B0h] BYREF
  __int128 v41; // [rsp+8h] [rbp-1A8h] BYREF
  __int64 v42; // [rsp+18h] [rbp-198h]
  __int64 v43; // [rsp+20h] [rbp-190h]
  __int64 v44; // [rsp+28h] [rbp-188h]
  char v45; // [rsp+30h] [rbp-180h] BYREF
  unsigned __int64 v46; // [rsp+170h] [rbp-40h] BYREF

  v46 = __readfsqword(0x28u);
  v6 = (unsigned __int64 *)&v45;
  v41 = -1;
  v42 = -1;
  v43 = 0;
  v44 = 0;
  do
  {
    *(_WORD *)v6 = 0;
    v6 += 5;
    *((_WORD *)v6 - 19) = 0;
    *((_WORD *)v6 - 18) = 0;
    *((_DWORD *)v6 - 2) = 0;
    *((_WORD *)v6 - 17) = 0;
    *((_OWORD *)v6 - 2) = 0;
    *(v6 - 2) = 0;
  }
  while ( &v46 != v6 );
  v7 = *(unsigned __int64 **)(a1 + 8);
  v8 = *v7;
  if ( *v7 < v7[1] )
  {
    while ( (int)decode_insn(&v41, v8, 0.0) > 0 )
    {
      v9 = sub_1B400(a1, (__int64)&v41);
      if ( v9 )
      {
        if ( v9 == 1 )
          break;
        v10 = *(_QWORD *)a1;
        v40 = 0;
        sub_10260(v10, &v40, (__int64)&v41);
        if ( (v40 & 8) != 0 )
          break;
        *(_QWORD *)(a1 + 96) |= v40;
      }
      v8 += WORD1(v43);
      if ( v8 >= *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) )
        break;
    }
  }
  v13 = sub_1C430(a1, a2);
  if ( (_BYTE)v13 )
  {
    v15 = *(__m128i **)(a1 + 16);
    v16 = 2LL * *(_QWORD *)(a1 + 24);
    v17 = &v15[v16];
    if ( v15 == &v15[v16] )
      goto LABEL_18;
    if ( (v16 * 16) >> 5 )
    {
      _BitScanReverse64(&v18, (v16 * 16) >> 5);
      sub_1C100(
        *(__m128i **)(a1 + 16),
        &v15[v16],
        2LL * (int)v18,
        (__int64 (__fastcall *)(__int64, __int64))sub_1A580,
        v11,
        v12);
      if ( v16 > 32 )
      {
        v19 = v15 + 32;
        sub_1BCD0(v15, v15 + 32, (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_1A580);
        do
        {
          v20 = v19;
          v19 += 2;
          sub_1BC40(v20, (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_1A580);
        }
        while ( v17 != v19 );
LABEL_18:
        v21 = *(char **)(a1 + 48);
        v22 = 8LL * *(_QWORD *)(a1 + 56);
        v23 = (unsigned __int64 *)&v21[v22];
        if ( v21 != &v21[v22] )
        {
          if ( v22 >> 3 )
          {
            _BitScanReverse64(&v24, v22 >> 3);
            sub_1A950(*(__m128i **)(a1 + 48), v23, 2LL * (int)v24, 0.0, a4, a5);
            if ( v22 > 128 )
            {
              v25 = (unsigned __int64 *)(v21 + 128);
              sub_1A780(v21, v21 + 128);
              do
              {
                while ( 1 )
                {
                  v26 = *v25;
                  v27 = *(v25 - 1);
                  v28 = v25 - 1;
                  if ( *v25 < v27 )
                    break;
                  v39 = v25++;
                  *v39 = v26;
                  if ( v23 == v25 )
                    goto LABEL_25;
                }
                do
                {
                  v28[1] = v27;
                  v29 = v28;
                  v27 = *--v28;
                }
                while ( v26 < v27 );
                ++v25;
                *v29 = v26;
              }
              while ( v23 != v25 );
              goto LABEL_25;
            }
          }
          else
          {
            sub_1A950(*(__m128i **)(a1 + 48), v23, -2, 0.0, a4, a5);
          }
          sub_1A780(v21, (char *)v23);
        }
LABEL_25:
        v30 = *(__int64 **)(a1 + 8);
        if ( v30[1] - *v30 != 1 )
          sub_1AF20((__int64 *)(a1 + 16), *(_QWORD *)a1, *v30);
        v31 = *(__int64 **)(a1 + 16);
        v32 = &v31[4 * *(_QWORD *)(a1 + 24)];
        while ( v32 != v31 )
        {
          v33 = *(_QWORD *)a1;
          v34 = *v31;
          LOBYTE(v40) = 1;
          v31 += 4;
          netnode_supset(*(_QWORD *)(v33 + 104), v34, &v40, 1, 256);
        }
        v35 = *(__int64 **)(a1 + 48);
        v36 = &v35[*(_QWORD *)(a1 + 56)];
        while ( v36 != v35 )
        {
          v37 = *(_QWORD *)a1;
          v38 = *v35;
          LOBYTE(v40) = 1;
          ++v35;
          netnode_supset(*(_QWORD *)(v37 + 104), v38, &v40, 1, 256);
        }
        return v13;
      }
    }
    else
    {
      sub_1C100(*(__m128i **)(a1 + 16), &v15[v16], -2, (__int64 (__fastcall *)(__int64, __int64))sub_1A580, v11, v12);
    }
    sub_1BCD0(v15, &v15[v16], (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_1A580);
    goto LABEL_18;
  }
  return v13;
}

