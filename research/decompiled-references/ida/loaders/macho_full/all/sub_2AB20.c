unsigned __int64 __fastcall sub_2AB20(
        __int64 a1,
        __int64 (__fastcall ***a2)(__int64 *a1, __int64 a2, _QWORD *a3, __m128i a4, __m128i a5, double a6),
        double a3,
        double a4,
        double a5)
{
  int v7; // edi
  char *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rbx
  char *v11; // rsi
  unsigned int v12; // eax
  int v13; // eax
  char *v14; // rax
  __m128i v15; // xmm0
  unsigned __int64 i; // r14
  __int64 v17; // rbx
  unsigned int v18; // r13d
  __int64 v19; // rsi
  __int64 (__fastcall *v20)(__int64 *, __int64, _QWORD *, __m128i, __m128i, double); // rax
  __int64 (__fastcall *v22)(__int64 *, __int64, _QWORD *, __m128i, __m128i, double); // rax
  __int64 (__fastcall *v23)(__int64 *, __int64, _QWORD *, __m128i, __m128i, double); // rax
  __m128i v24; // [rsp+10h] [rbp-118h] BYREF
  __int64 v25; // [rsp+20h] [rbp-108h] BYREF
  __int128 v26; // [rsp+28h] [rbp-100h]
  _DWORD v27[16]; // [rsp+40h] [rbp-E8h] BYREF
  unsigned int v28; // [rsp+80h] [rbp-A8h]
  unsigned int v29; // [rsp+84h] [rbp-A4h]
  unsigned int v30; // [rsp+88h] [rbp-A0h]
  unsigned int v31; // [rsp+8Ch] [rbp-9Ch]
  char v32[88]; // [rsp+90h] [rbp-98h] BYREF
  unsigned __int64 v33; // [rsp+E8h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  if ( (unsigned __int8)qgetenv() )
    return v33 - __readfsqword(0x28u);
  v7 = *(_DWORD *)(a1 + 176);
  v8 = *(char **)(a1 + 224);
  v9 = 72LL * *(_QWORD *)(a1 + 232);
  v10 = v9;
  v11 = &v8[v9];
  v12 = *(_DWORD *)(a1 + 188) & 0x20;
  if ( (unsigned int)(v7 - 7) > 1 && v7 != 2 )
  {
    v13 = (v12 >> 5) & 1;
    goto LABEL_5;
  }
  if ( !v12 )
  {
    LOBYTE(v13) = *(_DWORD *)(a1 + 168) == 16777223;
LABEL_5:
    if ( v8 == v11 )
    {
LABEL_11:
      v10 = 0;
      goto LABEL_12;
    }
    if ( !(_BYTE)v13 )
      goto LABEL_26;
    goto LABEL_7;
  }
  if ( v9 )
  {
LABEL_7:
    if ( (~v8[60] & 3) != 0 )
    {
      v14 = v8 + 72;
      do
      {
        v8 = v14;
        if ( v14 == v11 )
          goto LABEL_11;
        v14 += 72;
        v9 = ~(unsigned __int8)*((_DWORD *)v8 + 15) & 3;
      }
      while ( (~(unsigned __int8)*((_DWORD *)v8 + 15) & 3) != 0 );
    }
LABEL_26:
    v10 = *((_QWORD *)v8 + 3);
  }
LABEL_12:
  v25 = 0;
  v26 = 0;
  v15 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_63678, (__m128i)(unsigned __int64)v27);
  v27[0] = 0;
  v24 = v15;
  if ( (unsigned __int8)sub_27280(a1, &v24, (__int64 (*)())v9, (__int64 (*)())v8) && v27[0] )
  {
    if ( v29
      && v28
      && (unsigned __int8)sub_25590(a1, v28, v29, (__int64)&v25, (__int64)"Number of dynamic external relocs") )
    {
      v23 = **a2;
      if ( v23 == sub_21010 )
        sub_1FAF0(
          (__int64)a2[1],
          (__int64)a2[2],
          v10 & *((_QWORD *)a2[2][1] + 2),
          &v25,
          (__int64)a2[3],
          (__int64)a2[4],
          v15,
          (__m128i)(unsigned __int64)v27,
          a5);
      else
        ((void (__fastcall *)(__int64 (__fastcall ***)(__int64 *, __int64, _QWORD *, __m128i, __m128i, double), __int64, __int64 *, __int64))v23)(
          a2,
          v10,
          &v25,
          4294967294LL);
    }
    if ( v31
      && v30
      && (unsigned __int8)sub_25590(a1, v30, v31, (__int64)&v25, (__int64)"Number of dynamic local relocs") )
    {
      v22 = **a2;
      if ( v22 == sub_21010 )
        sub_1FAF0(
          (__int64)a2[1],
          (__int64)a2[2],
          v10 & *((_QWORD *)a2[2][1] + 2),
          &v25,
          (__int64)a2[3],
          (__int64)a2[4],
          v15,
          (__m128i)(unsigned __int64)v27,
          a5);
      else
        ((void (__fastcall *)(__int64 (__fastcall ***)(__int64 *, __int64, _QWORD *, __m128i, __m128i, double), __int64, __int64 *, __int64))v22)(
          a2,
          v10,
          &v25,
          0xFFFFFFFFLL);
    }
  }
  for ( i = 0; i < *(_QWORD *)(a1 + 256); ++i )
  {
    v17 = *(_QWORD *)(a1 + 248) + 80 * i;
    v18 = *(_DWORD *)(v17 + 60);
    if ( v18 )
    {
      qsnprintf();
      if ( (unsigned __int8)sub_25590(a1, *(_DWORD *)(v17 + 56), v18, (__int64)&v25, (__int64)v32) )
      {
        v19 = *(_QWORD *)(v17 + 32);
        v20 = **a2;
        if ( v20 == sub_21010 )
          sub_1FAF0(
            (__int64)a2[1],
            (__int64)a2[2],
            *((_QWORD *)a2[2][1] + 2) & v19,
            &v25,
            (__int64)a2[3],
            (__int64)a2[4],
            v15,
            (__m128i)(unsigned __int64)v27,
            a5);
        else
          ((void (__fastcall *)(__int64 (__fastcall ***)(__int64 *, __int64, _QWORD *, __m128i, __m128i, double), __int64, __int64 *, _QWORD))v20)(
            a2,
            v19,
            &v25,
            (unsigned int)i);
      }
    }
  }
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree();
  }
  return v33 - __readfsqword(0x28u);
}

