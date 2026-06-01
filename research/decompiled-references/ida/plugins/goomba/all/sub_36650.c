unsigned __int64 __fastcall sub_36650(__int128 *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v3; // r15
  __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // rbp
  int v7; // edx
  char v8; // al
  unsigned __int8 (__fastcall *v10)(__int64, __int64, _QWORD, __int64); // rax
  __int64 v11; // rsi
  unsigned int v12; // r12d
  __int64 v13; // r14
  unsigned __int64 v14; // xmm0_8
  __int64 v15; // rdx
  void (__fastcall *v16)(__int64, unsigned __int64 *, __int64, _QWORD, __int64, _QWORD); // rax
  _DWORD *v17; // r14
  void (__fastcall *v18)(__int64, _DWORD *, _DWORD *); // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  unsigned __int8 (__fastcall *hexdsp)(__int64, __int64, unsigned __int64 *, _QWORD); // rax
  __int64 (__fastcall *v23)(__int64, __int64); // rax
  _QWORD *v24; // rax
  __int64 v25; // rsi
  _QWORD *v26; // rdi
  _DWORD *v27; // r13
  void (__fastcall *v28)(__int64, _DWORD *, __int64); // rax
  int v29; // eax
  __int64 (__fastcall *v30)(__int64, __int64); // rax
  _QWORD *v31; // rax
  __int64 v32; // rsi
  _QWORD *v33; // rdi
  __int128 *v34; // r13
  void (__fastcall *v35)(__int64, _DWORD *, unsigned __int64 *); // rax
  __int64 v36; // rdx
  void (__fastcall *v37)(__int64, __int64, __int128 *); // rax
  __int64 v38; // rdx
  __int128 v39; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v40; // [rsp+20h] [rbp-58h] BYREF
  _DWORD *v41; // [rsp+28h] [rbp-50h]
  unsigned __int64 v42; // [rsp+38h] [rbp-40h]

  v3 = (__int64)a1;
  v4 = (__int64)a2;
  v5 = *((_QWORD *)a2 + 3);
  v42 = __readfsqword(0x28u);
  v6 = a3;
  *((_QWORD *)a1 + 8) = v5;
  if ( a3 )
    goto LABEL_2;
LABEL_7:
  if ( *(_BYTE *)(v4 + 32) == 4 )
  {
LABEL_8:
    a2 = *(_DWORD **)(v4 + 40);
    a1 = (__int128 *)v3;
    sub_36650(v3, a2, v4);
    if ( *(_BYTE *)(v4 + 48) == 4 )
      goto LABEL_6;
  }
  else
  {
    while ( *(_BYTE *)(v4 + 48) == 4 )
    {
LABEL_6:
      v6 = (_DWORD *)v4;
      v4 = *(_QWORD *)(v4 + 56);
      *(_QWORD *)(v3 + 64) = *(_QWORD *)(v4 + 24);
      if ( !v6 )
        goto LABEL_7;
LABEL_2:
      v7 = *v6;
      if ( *v6 == 20 )
      {
        if ( *(_DWORD *)v4 != 13 )
          goto LABEL_7;
        hexdsp = (unsigned __int8 (__fastcall *)(__int64, __int64, unsigned __int64 *, _QWORD))get_hexdsp(a1, a2);
        a2 = (_DWORD *)(v4 + 48);
        a1 = (_OWORD *)(&qword_128 + 3);
        if ( hexdsp(299, v4 + 48, &v40, 0) )
        {
          if ( v40 == 1 )
          {
            v23 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(299, a2);
            v24 = (_QWORD *)v23(129, 80);
            v25 = *(_QWORD *)(v3 + 64);
            v26 = v24;
            v27 = v24;
            sub_33DD0(v24, v25);
            *v27 = 5;
            v28 = (void (__fastcall *)(__int64, _DWORD *, __int64))get_hexdsp(v26, v25);
            v28(274, v27 + 8, v4 + 32);
            v29 = *(_DWORD *)(v4 + 36);
            v27[17] = v29;
            LODWORD(v40) = 4;
            v41 = v27;
            HIDWORD(v40) = v29;
            v30 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(274, v27 + 8);
            v31 = (_QWORD *)v30(129, 80);
            v32 = *(_QWORD *)(v3 + 64);
            v33 = v31;
            v34 = (__int128 *)v31;
            sub_33DD0(v31, v32);
            *(_DWORD *)v34 = 7;
            v35 = (void (__fastcall *)(__int64, _DWORD *, unsigned __int64 *))get_hexdsp(v33, v32);
            v35(274, (_DWORD *)v34 + 8, &v40);
            *((_DWORD *)v34 + 17) = HIDWORD(v40);
            sub_C930((__int64)&v40, (__int64)(v34 + 2), v36);
            v37 = (void (__fastcall *)(__int64, __int64, __int128 *))get_hexdsp(&v40, v34 + 2);
            a2 = (_DWORD *)v4;
            a1 = (_OWORD *)&qword_150;
            v37(336, v4, v34);
            if ( v34 )
            {
              sub_34880((__int64)v34, v4);
              a1 = v34;
              sub_19800((__int64)v34, v4, v38);
            }
          }
        }
        v7 = *v6;
      }
      v8 = *(_BYTE *)(v4 + 32);
      if ( v7 == 9 && *(_DWORD *)v4 == 20 && v8 == 1 )
      {
        v10 = (unsigned __int8 (__fastcall *)(__int64, __int64, _QWORD, __int64))get_hexdsp(a1, a2);
        a2 = (_DWORD *)(v4 + 48);
        a1 = (_OWORD *)(&qword_128 + 3);
        if ( v10(299, v4 + 48, 0, 1) )
        {
          v11 = *(unsigned int *)(v4 + 52);
          v12 = v6[17];
          v13 = extend_sign(*(_QWORD *)(*(_QWORD *)(v4 + 56) + 16LL), v11, 0);
          v14 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v12), _mm_cvtsi32_si128(*(_DWORD *)(v4 + 40))).m128i_u64[0];
          v39 = 0xFFFFFFFF00000000LL;
          sub_C930((__int64)&v39, v11, v15);
          *(_QWORD *)((char *)&v39 + 4) = v14;
          LOBYTE(v39) = 1;
          v40 = 0xFFFFFFFF00000000LL;
          v41 = nullptr;
          v16 = (void (__fastcall *)(__int64, unsigned __int64 *, __int64, _QWORD, __int64, _QWORD))get_hexdsp(&v39, v11);
          v16(284, &v40, v13, v12, -1, 0);
          v17 = sub_36550(v3, 20, (__int64)&v39, (__int64)&v40);
          v18 = (void (__fastcall *)(__int64, _DWORD *, _DWORD *))get_hexdsp(v3, 20);
          a2 = v6;
          v18(336, v6, v17);
          if ( v17 )
          {
            sub_34880((__int64)v17, (__int64)v6);
            sub_19800((__int64)v17, (__int64)v6, v20);
          }
          sub_C930((__int64)&v40, (__int64)v6, v19);
          a1 = &v39;
          sub_C930((__int64)&v39, (__int64)v6, v21);
        }
        goto LABEL_7;
      }
      if ( v8 == 4 )
        goto LABEL_8;
    }
  }
  return v42 - __readfsqword(0x28u);
}

