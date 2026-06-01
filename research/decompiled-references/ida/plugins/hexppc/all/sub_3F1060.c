__int64 __fastcall sub_3F1060(__int64 a1, double a2)
{
  char v4; // r15
  char v5; // r14
  _DWORD *v6; // rdi
  __int64 v7; // rsi
  __int64 (__fastcall *v8)(_DWORD *, unsigned int); // rax
  int v9; // eax
  int v10; // eax
  int v11; // r12d
  int v12; // eax
  int v13; // r13d
  __int64 v14; // rdx
  __m128i v15; // xmm0
  __int64 v16; // rax
  __m128i v17; // xmm1
  __int64 v18; // rdx
  __m128i v19; // xmm0
  __int64 v20; // rax
  __m128i v21; // xmm1
  __int64 v22; // r14
  int dtype_size; // eax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r15
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r12
  int v31; // eax
  int v32; // eax
  int v33; // eax
  __int64 (__fastcall *v34)(_DWORD *, unsigned int); // rax
  int v35; // eax
  __int64 (__fastcall *v36)(_DWORD *, unsigned int); // rax
  int v37; // eax
  __int64 (__fastcall *v38)(_DWORD *, unsigned int); // rax
  int v39; // eax
  __int64 v40; // [rsp+8h] [rbp-B8h]
  int v41; // [rsp+24h] [rbp-9Ch]
  int v42; // [rsp+28h] [rbp-98h]
  int v43; // [rsp+2Ch] [rbp-94h]
  _QWORD v44[2]; // [rsp+30h] [rbp-90h] BYREF
  _QWORD v45[2]; // [rsp+40h] [rbp-80h] BYREF
  unsigned __int8 v46[16]; // [rsp+50h] [rbp-70h] BYREF
  _QWORD v47[2]; // [rsp+60h] [rbp-60h] BYREF
  int v48; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v49; // [rsp+74h] [rbp-4Ch]
  unsigned __int64 v50; // [rsp+88h] [rbp-38h]

  v50 = __readfsqword(0x28u);
  switch ( *(_WORD *)(a1 + 48) )
  {
    case '=':
      v41 = 69;
      v4 = 0;
      v5 = 0;
      goto LABEL_4;
    case '>':
      v41 = 69;
      v4 = 1;
      v5 = 0;
      goto LABEL_4;
    case '@':
      v41 = 70;
      v4 = 0;
      v5 = 0;
      goto LABEL_4;
    case 'A':
      v41 = 70;
      v4 = 1;
      v5 = 0;
      goto LABEL_4;
    case 'F':
      v41 = 69;
      v4 = 0;
      v5 = 1;
      goto LABEL_4;
    case 'G':
      v41 = 69;
      v4 = 1;
      v5 = 1;
      goto LABEL_4;
    case 'H':
      v41 = 70;
      v4 = 0;
      v5 = 1;
      goto LABEL_4;
    case 'I':
      v41 = 70;
      v4 = 1;
      v5 = 1;
LABEL_4:
      v6 = *(_DWORD **)(a1 + 832);
      v7 = *(unsigned __int16 *)(a1 + 70);
      v8 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v6 + 168LL);
      if ( v8 == sub_3E59C0 )
      {
        v9 = sub_3E59C0(v6, v7);
        LODWORD(v7) = *(unsigned __int16 *)(a1 + 110);
        v43 = v9;
LABEL_6:
        v10 = sub_3E59C0(v6, v7);
        LODWORD(v7) = *(unsigned __int16 *)(a1 + 150);
        v11 = v10;
LABEL_7:
        v12 = sub_3E59C0(v6, v7);
        LODWORD(v7) = *(char *)(a1 + 176);
        v42 = v12;
LABEL_8:
        v13 = sub_3E59C0(v6, v7);
        goto LABEL_9;
      }
      v33 = v8(v6, v7);
      v6 = *(_DWORD **)(a1 + 832);
      v7 = *(unsigned __int16 *)(a1 + 110);
      v43 = v33;
      v34 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v6 + 168LL);
      if ( v34 == sub_3E59C0 )
        goto LABEL_6;
      v35 = v34(v6, v7);
      v6 = *(_DWORD **)(a1 + 832);
      v7 = *(unsigned __int16 *)(a1 + 150);
      v11 = v35;
      v36 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v6 + 168LL);
      if ( v36 == sub_3E59C0 )
        goto LABEL_7;
      v37 = v36(v6, v7);
      v6 = *(_DWORD **)(a1 + 832);
      v7 = (unsigned int)*(char *)(a1 + 176);
      v42 = v37;
      v38 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v6 + 168LL);
      if ( v38 == sub_3E59C0 )
        goto LABEL_8;
      v13 = v38(v6, v7);
LABEL_9:
      if ( v4 )
      {
        v40 = *(_QWORD *)(a1 + 40);
        v44[0] = 0xFFFFFFFF00000000LL;
        v44[1] = 0;
        sub_3F0D20(a1, (__int64)v44, v11, v40);
        v45[0] = 0xFFFFFFFF00000000LL;
        v45[1] = 0;
        sub_3F0D20(a1, (__int64)v45, v42, v40);
        v14 = *(_QWORD *)(a1 + 832);
        v15 = _mm_cvtsi32_si128(HIDWORD(v44[0]));
        v16 = *(_QWORD *)(v14 + 4464);
        if ( !v16 )
          sub_3E6800(*(double *)v15.m128i_i64);
        v17 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v14 + 4456) + 4 * v16 - 4));
        *(_DWORD *)v46 = 1;
        *(_QWORD *)(v14 + 4464) = v16 - 1;
        *(_QWORD *)&v46[4] = _mm_unpacklo_epi32(v15, v17).m128i_u64[0];
        sub_1D2850(a1, 71, (unsigned __int8 *)v44, (unsigned __int8 *)v45, v46);
        v47[1] = 0;
        v47[0] = 0xFFFFFFFF00000000LL;
        sub_3F0D20(a1, (__int64)v47, v13, v40);
        v18 = *(_QWORD *)(a1 + 832);
        v19 = _mm_cvtsi32_si128(HIDWORD(v44[0]));
        v20 = *(_QWORD *)(v18 + 4464);
        if ( !v20 )
          sub_3E6800(*(double *)v19.m128i_i64);
        v21 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v18 + 4456) + 4 * v20 - 4));
        v48 = 1;
        *(_QWORD *)(v18 + 4464) = v20 - 1;
        v49 = _mm_unpacklo_epi32(v19, v21).m128i_u64[0];
        sub_1D2850(a1, v41, v46, (unsigned __int8 *)v47, (unsigned __int8 *)&v48);
        if ( v5 )
        {
          v22 = SHIDWORD(v49);
          dtype_size = get_dtype_size();
          sub_1D2710(a1, 0x44u, dtype_size, v22, 0x3BEA45E214ADDC55LL, v22, 0);
        }
        sub_3F0E20(a1, SHIDWORD(v49), v43);
        sub_119360((__int64)&v48);
        sub_119360((__int64)v47);
        sub_119360((__int64)v46);
        sub_119360((__int64)v45);
        sub_119360((__int64)v44);
      }
      else
      {
        v24 = *(_QWORD *)(a1 + 832);
        v25 = *(_QWORD *)(v24 + 4464);
        if ( !v25
          || (v26 = *(int *)(*(_QWORD *)(v24 + 4456) + 4 * v25 - 4),
              *(_QWORD *)(v24 + 4464) = v25 - 1,
              v27 = get_dtype_size(),
              sub_1D2710(a1, 0x47u, v27, v11, v42, v26, 0),
              v28 = *(_QWORD *)(a1 + 832),
              (v29 = *(_QWORD *)(v28 + 4464)) == 0) )
        {
          sub_3E6800(a2);
        }
        v30 = *(int *)(*(_QWORD *)(v28 + 4456) + 4 * v29 - 4);
        *(_QWORD *)(v28 + 4464) = v29 - 1;
        v31 = get_dtype_size();
        sub_1D2710(a1, v41, v31, v26, v13, v30, 0);
        if ( v5 )
        {
          v39 = get_dtype_size();
          sub_1D2710(a1, 0x44u, v39, v30, 0x3BEA45E214ADDC55LL, v30, 0);
        }
        v32 = get_dtype_size();
        sub_1D2710(a1, 4u, v32, v30, 0x3BEA45E214ADDC55LL, v43, 0);
      }
      sub_3EC840(a1, v43, 8);
      return 1;
    default:
      return 0;
  }
}

