__int64 __fastcall sub_186E0(__int64 a1)
{
  unsigned __int8 v1; // r12
  unsigned __int8 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rbp
  unsigned int v7; // r12d
  char v8; // al
  __int64 v9; // rax
  int v10; // edx
  int v11; // edi
  int v12; // r10d
  __m128i v13; // xmm0
  int v14; // r9d
  int v15; // r8d
  int v16; // ecx
  int v17; // esi
  int v18; // eax
  unsigned __int16 v19; // ax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  bool v23; // r13
  __int64 v24; // rax
  char v25; // al
  __int16 v26; // ax
  _QWORD *v27; // rax
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rsi
  __int64 v35; // rcx
  bool v36; // cf
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // r8
  unsigned int v39; // eax
  _DWORD v40[10]; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v41; // [rsp+28h] [rbp-50h]
  unsigned __int64 v42; // [rsp+48h] [rbp-30h]

  v1 = *(_BYTE *)(a1 + 508);
  v42 = __readfsqword(0x28u);
  if ( (unsigned __int8)(v1 - 1) > 1u
    && !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(a1 + 496))(a1, 1, v1) )
  {
    return 0;
  }
  v3 = *(_BYTE *)(a1 + 509);
  if ( (unsigned __int8)(v3 - 1) > 1u
    && !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(a1 + 496))(a1, 3, v3) )
  {
    return 0;
  }
  v4 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
  v5 = *(_QWORD *)(a1 + 480);
  v6 = v4 - v5;
  if ( qlseek(*(_QWORD *)(a1 + 472), v5 + 16, 0) == -1 )
    goto LABEL_42;
  *(_BYTE *)(a1 + 616) = v3 == 2;
  *(_BYTE *)(a1 + 617) = v1 == 2;
  *(_BYTE *)(a1 + 618) = v1 == 2;
  if ( (int)sub_182A0(a1, a1 + 520, 2, 1) < 0 )
    goto LABEL_42;
  if ( (int)sub_182A0(a1, a1 + 522, 2, 1) < 0 )
    goto LABEL_42;
  v7 = sub_184B0(a1);
  if ( !(_BYTE)v7 )
    goto LABEL_42;
  v8 = *(_BYTE *)(a1 + 617);
  if ( !*(_BYTE *)(a1 + 468) )
  {
    if ( v8 )
      goto LABEL_12;
LABEL_47:
    v10 = 8;
    v11 = 12;
    v12 = 52;
    v13 = _mm_cvtsi32_si128(4u);
    v14 = 32;
    v15 = 40;
    v16 = 12;
    v17 = 8;
    v18 = 16;
    goto LABEL_13;
  }
  if ( !v8 )
  {
    v29 = *(_QWORD *)(a1 + 440);
    *(_DWORD *)(a1 + 464) = 4;
    *(_QWORD *)(a1 + 456) = v29;
    goto LABEL_47;
  }
  v9 = *(_QWORD *)(a1 + 448);
  *(_DWORD *)(a1 + 464) = 8;
  *(_QWORD *)(a1 + 456) = v9;
LABEL_12:
  v10 = 16;
  v11 = 24;
  v12 = 64;
  v13 = _mm_cvtsi32_si128(8u);
  v14 = 56;
  v15 = 64;
  v16 = 24;
  v17 = 16;
  v18 = 24;
LABEL_13:
  *(_DWORD *)(a1 + 400) = v10;
  *(_DWORD *)(a1 + 404) = v10;
  *(_DWORD *)(a1 + 408) = v11;
  *(_DWORD *)(a1 + 416) = v17;
  *(_DWORD *)(a1 + 420) = v16;
  *(_DWORD *)(a1 + 384) = v12;
  *(_DWORD *)(a1 + 388) = v14;
  *(_DWORD *)(a1 + 392) = v15;
  *(_DWORD *)(a1 + 396) = v18;
  *(_DWORD *)(a1 + 412) = v18;
  *(__m128i *)(a1 + 424) = _mm_shuffle_epi32(v13, 0);
  if ( (int)sub_182A0(a1, a1 + 524, 4, 1) < 0
    || (int)sub_182A0(a1, a1 + 528, *(int *)(a1 + 424), 1) < 0
    || (int)sub_182A0(a1, a1 + 536, *(int *)(a1 + 428), 1) < 0
    || (int)sub_182A0(a1, a1 + 544, *(int *)(a1 + 428), 1) < 0
    || (int)sub_182A0(a1, a1 + 552, 4, 1) < 0
    || (int)sub_182A0(a1, a1 + 556, 2, 1) < 0
    || (int)sub_182A0(a1, a1 + 558, 2, 1) < 0
    || (int)sub_182A0(a1, a1 + 560, 2, 1) < 0
    || (int)sub_182A0(a1, a1 + 562, 2, 1) < 0
    || (int)sub_182A0(a1, a1 + 564, 2, 1) < 0
    || (int)sub_182A0(a1, a1 + 566, 2, 1) < 0
    || *(unsigned __int16 *)(a1 + 556) != *(_DWORD *)(a1 + 384)
    && !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(a1 + 496))(a1, 2) )
  {
    goto LABEL_42;
  }
  v19 = *(_WORD *)(a1 + 560);
  v20 = *(_QWORD *)(a1 + 536);
  if ( (v19 == 0) == (v20 == 0) )
  {
    if ( v20 && *(unsigned __int16 *)(a1 + 558) != *(_DWORD *)(a1 + 388) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(a1 + 496))(a1, 4) )
        goto LABEL_42;
      v30 = *(_DWORD *)(a1 + 388);
      if ( *(unsigned __int16 *)(a1 + 558) < v30 )
        goto LABEL_42;
      *(_WORD *)(a1 + 558) = v30;
    }
  }
  else
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(a1 + 496))(a1, 5, v19) )
      goto LABEL_42;
    *(_QWORD *)(a1 + 536) = 0;
    *(_WORD *)(a1 + 560) = 0;
  }
  v21 = *(unsigned __int16 *)(a1 + 564);
  v22 = *(_QWORD *)(a1 + 544);
  if ( (_WORD)v21 || !v22 )
    goto LABEL_31;
  if ( qlseek(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 480) + v22, 0) == -1
    || !(v23 = sub_185A0((int *)a1, (__int64)v40))
    || v40[1] )
  {
    v21 = *(unsigned __int16 *)(a1 + 564);
    v22 = *(_QWORD *)(a1 + 544);
LABEL_31:
    v23 = 0;
    goto LABEL_32;
  }
  v21 = v40[8];
  v22 = *(_QWORD *)(a1 + 544);
LABEL_32:
  *(_DWORD *)(a1 + 568) = v21;
  v24 = v22;
  if ( ((_DWORD)v21 == 0) != (v22 == 0) )
  {
    v25 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(a1 + 496))(
            a1,
            7,
            v21,
            v22,
            *(_QWORD *)(a1 + 488) - *(_QWORD *)(a1 + 480));
    goto LABEL_34;
  }
  v33 = *(unsigned __int16 *)(a1 + 562);
  if ( !v22 )
  {
    v38 = *(_QWORD *)(a1 + 488) - *(_QWORD *)(a1 + 480);
    if ( v38 >= v33 * (unsigned __int64)(unsigned int)v21 )
      goto LABEL_36;
LABEL_63:
    v25 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, unsigned __int64))(a1 + 496))(
            a1,
            7,
            v21,
            v24,
            v38);
LABEL_34:
    if ( !v25 )
      goto LABEL_42;
    goto LABEL_35;
  }
  if ( (_DWORD)v33 == *(_DWORD *)(a1 + 392) )
  {
    v34 = (unsigned int)v21;
  }
  else
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(a1 + 496))(
            a1,
            6,
            *(unsigned __int16 *)(a1 + 562))
      || *(unsigned __int16 *)(a1 + 562) < *(int *)(a1 + 392) )
    {
LABEL_35:
      *(_QWORD *)(a1 + 544) = 0;
      *(_WORD *)(a1 + 564) = 0;
      *(_DWORD *)(a1 + 568) = 0;
      goto LABEL_36;
    }
    v34 = *(unsigned int *)(a1 + 568);
    v24 = *(_QWORD *)(a1 + 544);
    v21 = v34;
  }
  v35 = v34 * *(unsigned __int16 *)(a1 + 562);
  v36 = __CFADD__(v24, v35);
  v37 = v24 + v35;
  v38 = *(_QWORD *)(a1 + 488) - *(_QWORD *)(a1 + 480);
  if ( v36 || v38 < v37 )
    goto LABEL_63;
  if ( v24 )
  {
    v39 = *(unsigned __int16 *)(a1 + 566);
    if ( (_WORD)v39 == 0xFFFF && v23 )
    {
      v39 = v41;
      if ( v41 )
      {
        *(_DWORD *)(a1 + 572) = v41;
      }
      else
      {
        *(_DWORD *)(a1 + 572) = 0xFFFF;
        v39 = 0xFFFF;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 572) = v39;
      if ( !v39 )
        goto LABEL_36;
    }
    if ( v39 >= (unsigned int)v21 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(a1 + 496))(
              a1,
              17,
              v39,
              (unsigned int)v21) )
        goto LABEL_42;
      *(_DWORD *)(a1 + 572) = 0;
    }
  }
LABEL_36:
  if ( !*(_QWORD *)(a1 + 536)
    || *(_WORD *)(a1 + 520) != 1
    || (*(unsigned __int8 (__fastcall **)(__int64, __int64))(a1 + 496))(a1, 18) )
  {
    v26 = *(_WORD *)(a1 + 522);
    if ( v26 == 40 || v26 == 183 )
    {
      v31 = *(_QWORD *)(a1 + 600);
      if ( v31 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
      v32 = operator new(0x80u);
      *(_DWORD *)(v32 + 16) = 0;
      *(_QWORD *)(v32 + 32) = v32 + 16;
      *(_QWORD *)(v32 + 40) = v32 + 16;
      *(_QWORD *)(v32 + 80) = v32 + 64;
      *(_QWORD *)(v32 + 88) = v32 + 64;
      *(_QWORD *)v32 = &off_C7270;
      *(_QWORD *)(v32 + 24) = 0;
      *(_QWORD *)(v32 + 48) = 0;
      *(_DWORD *)(v32 + 64) = 0;
      *(_QWORD *)(v32 + 72) = 0;
      *(_QWORD *)(v32 + 96) = 0;
      *(_QWORD *)(v32 + 104) = 0;
      *(_QWORD *)(v32 + 112) = 0;
      *(_WORD *)(v32 + 120) = 0;
      *(_BYTE *)(v32 + 122) = 0;
      *(_QWORD *)(a1 + 600) = v32;
    }
    else
    {
      v27 = (_QWORD *)operator new(8u);
      *(_QWORD *)(a1 + 600) = v27;
      *v27 = off_C7200;
    }
    goto LABEL_43;
  }
LABEL_42:
  v7 = 0;
LABEL_43:
  qlseek(*(_QWORD *)(a1 + 472), v6 + *(_QWORD *)(a1 + 480), 0);
  return v7;
}
