__int64 __fastcall sub_187D0(__int64 a1)
{
  unsigned __int8 v1; // r12
  unsigned __int8 v3; // r13
  unsigned int v4; // r12d
  char v5; // al
  __int64 v6; // rax
  int v7; // edx
  int v8; // edi
  int v9; // r10d
  __m128i v10; // xmm0
  int v11; // r9d
  int v12; // r8d
  int v13; // ecx
  int v14; // esi
  int v15; // eax
  unsigned __int16 v16; // ax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  bool v20; // r13
  __int64 v21; // rax
  char v22; // al
  __int16 v23; // ax
  _QWORD *v24; // rax
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rsi
  __int64 v32; // rcx
  bool v33; // cf
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // r8
  unsigned int v36; // eax
  _DWORD v37[10]; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v38; // [rsp+28h] [rbp-50h]
  unsigned __int64 v39; // [rsp+48h] [rbp-30h]

  v1 = *(_BYTE *)(a1 + 508);
  v39 = __readfsqword(0x28u);
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
  qlseek();
  if ( qlseek() == -1 )
    goto LABEL_42;
  *(_BYTE *)(a1 + 616) = v3 == 2;
  *(_BYTE *)(a1 + 617) = v1 == 2;
  *(_BYTE *)(a1 + 618) = v1 == 2;
  if ( (int)sub_18510(a1, a1 + 520, 2) < 0 )
    goto LABEL_42;
  if ( (int)sub_18510(a1, a1 + 522, 2) < 0 )
    goto LABEL_42;
  v4 = sub_185A0(a1);
  if ( !(_BYTE)v4 )
    goto LABEL_42;
  v5 = *(_BYTE *)(a1 + 617);
  if ( !*(_BYTE *)(a1 + 468) )
  {
    if ( v5 )
      goto LABEL_12;
LABEL_47:
    v7 = 8;
    v8 = 12;
    v9 = 52;
    v10 = _mm_cvtsi32_si128(4u);
    v11 = 32;
    v12 = 40;
    v13 = 12;
    v14 = 8;
    v15 = 16;
    goto LABEL_13;
  }
  if ( !v5 )
  {
    v26 = *(_QWORD *)(a1 + 440);
    *(_DWORD *)(a1 + 464) = 4;
    *(_QWORD *)(a1 + 456) = v26;
    goto LABEL_47;
  }
  v6 = *(_QWORD *)(a1 + 448);
  *(_DWORD *)(a1 + 464) = 8;
  *(_QWORD *)(a1 + 456) = v6;
LABEL_12:
  v7 = 16;
  v8 = 24;
  v9 = 64;
  v10 = _mm_cvtsi32_si128(8u);
  v11 = 56;
  v12 = 64;
  v13 = 24;
  v14 = 16;
  v15 = 24;
LABEL_13:
  *(_DWORD *)(a1 + 400) = v7;
  *(_DWORD *)(a1 + 404) = v7;
  *(_DWORD *)(a1 + 408) = v8;
  *(_DWORD *)(a1 + 416) = v14;
  *(_DWORD *)(a1 + 420) = v13;
  *(_DWORD *)(a1 + 384) = v9;
  *(_DWORD *)(a1 + 388) = v11;
  *(_DWORD *)(a1 + 392) = v12;
  *(_DWORD *)(a1 + 396) = v15;
  *(_DWORD *)(a1 + 412) = v15;
  *(__m128i *)(a1 + 424) = _mm_shuffle_epi32(v10, 0);
  if ( (int)sub_18510(a1, a1 + 524, 4) < 0
    || (int)sub_18510(a1, a1 + 528, *(int *)(a1 + 424)) < 0
    || (int)sub_18510(a1, a1 + 536, *(int *)(a1 + 428)) < 0
    || (int)sub_18510(a1, a1 + 544, *(int *)(a1 + 428)) < 0
    || (int)sub_18510(a1, a1 + 552, 4) < 0
    || (int)sub_18510(a1, a1 + 556, 2) < 0
    || (int)sub_18510(a1, a1 + 558, 2) < 0
    || (int)sub_18510(a1, a1 + 560, 2) < 0
    || (int)sub_18510(a1, a1 + 562, 2) < 0
    || (int)sub_18510(a1, a1 + 564, 2) < 0
    || (int)sub_18510(a1, a1 + 566, 2) < 0
    || *(unsigned __int16 *)(a1 + 556) != *(_DWORD *)(a1 + 384)
    && !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(a1 + 496))(a1, 2) )
  {
    goto LABEL_42;
  }
  v16 = *(_WORD *)(a1 + 560);
  v17 = *(_QWORD *)(a1 + 536);
  if ( (v16 == 0) == (v17 == 0) )
  {
    if ( v17 && *(unsigned __int16 *)(a1 + 558) != *(_DWORD *)(a1 + 388) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(a1 + 496))(a1, 4) )
        goto LABEL_42;
      v27 = *(_DWORD *)(a1 + 388);
      if ( *(unsigned __int16 *)(a1 + 558) < v27 )
        goto LABEL_42;
      *(_WORD *)(a1 + 558) = v27;
    }
  }
  else
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(a1 + 496))(a1, 5, v16) )
      goto LABEL_42;
    *(_QWORD *)(a1 + 536) = 0;
    *(_WORD *)(a1 + 560) = 0;
  }
  v18 = *(unsigned __int16 *)(a1 + 564);
  v19 = *(_QWORD *)(a1 + 544);
  if ( (_WORD)v18 || !v19 )
    goto LABEL_31;
  if ( qlseek() == -1 || !(v20 = sub_18690((int *)a1, (__int64)v37)) || v37[1] )
  {
    v18 = *(unsigned __int16 *)(a1 + 564);
    v19 = *(_QWORD *)(a1 + 544);
LABEL_31:
    v20 = 0;
    goto LABEL_32;
  }
  v18 = v37[8];
  v19 = *(_QWORD *)(a1 + 544);
LABEL_32:
  *(_DWORD *)(a1 + 568) = v18;
  v21 = v19;
  if ( ((_DWORD)v18 == 0) != (v19 == 0) )
  {
    v22 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(a1 + 496))(
            a1,
            7,
            v18,
            v19,
            *(_QWORD *)(a1 + 488) - *(_QWORD *)(a1 + 480));
    goto LABEL_34;
  }
  v30 = *(unsigned __int16 *)(a1 + 562);
  if ( !v19 )
  {
    v35 = *(_QWORD *)(a1 + 488) - *(_QWORD *)(a1 + 480);
    if ( v35 >= v30 * (unsigned __int64)(unsigned int)v18 )
      goto LABEL_36;
LABEL_63:
    v22 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, unsigned __int64))(a1 + 496))(
            a1,
            7,
            v18,
            v21,
            v35);
LABEL_34:
    if ( !v22 )
      goto LABEL_42;
    goto LABEL_35;
  }
  if ( (_DWORD)v30 == *(_DWORD *)(a1 + 392) )
  {
    v31 = (unsigned int)v18;
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
    v31 = *(unsigned int *)(a1 + 568);
    v21 = *(_QWORD *)(a1 + 544);
    v18 = v31;
  }
  v32 = v31 * *(unsigned __int16 *)(a1 + 562);
  v33 = __CFADD__(v21, v32);
  v34 = v21 + v32;
  v35 = *(_QWORD *)(a1 + 488) - *(_QWORD *)(a1 + 480);
  if ( v33 || v35 < v34 )
    goto LABEL_63;
  if ( v21 )
  {
    v36 = *(unsigned __int16 *)(a1 + 566);
    if ( (_WORD)v36 == 0xFFFF && v20 )
    {
      v36 = v38;
      if ( v38 )
      {
        *(_DWORD *)(a1 + 572) = v38;
      }
      else
      {
        *(_DWORD *)(a1 + 572) = 0xFFFF;
        v36 = 0xFFFF;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 572) = v36;
      if ( !v36 )
        goto LABEL_36;
    }
    if ( v36 >= (unsigned int)v18 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(a1 + 496))(
              a1,
              17,
              v36,
              (unsigned int)v18) )
        goto LABEL_42;
      *(_DWORD *)(a1 + 572) = 0;
    }
  }
LABEL_36:
  if ( !*(_QWORD *)(a1 + 536)
    || *(_WORD *)(a1 + 520) != 1
    || (*(unsigned __int8 (__fastcall **)(__int64, __int64))(a1 + 496))(a1, 18) )
  {
    v23 = *(_WORD *)(a1 + 522);
    if ( v23 == 40 || v23 == 183 )
    {
      v28 = *(_QWORD *)(a1 + 600);
      if ( v28 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
      v29 = operator new(0x80u);
      *(_DWORD *)(v29 + 16) = 0;
      *(_QWORD *)(v29 + 32) = v29 + 16;
      *(_QWORD *)(v29 + 40) = v29 + 16;
      *(_QWORD *)(v29 + 80) = v29 + 64;
      *(_QWORD *)(v29 + 88) = v29 + 64;
      *(_QWORD *)v29 = &off_68648;
      *(_QWORD *)(v29 + 24) = 0;
      *(_QWORD *)(v29 + 48) = 0;
      *(_DWORD *)(v29 + 64) = 0;
      *(_QWORD *)(v29 + 72) = 0;
      *(_QWORD *)(v29 + 96) = 0;
      *(_QWORD *)(v29 + 104) = 0;
      *(_QWORD *)(v29 + 112) = 0;
      *(_WORD *)(v29 + 120) = 0;
      *(_BYTE *)(v29 + 122) = 0;
      *(_QWORD *)(a1 + 600) = v29;
    }
    else
    {
      v24 = (_QWORD *)operator new(8u);
      *(_QWORD *)(a1 + 600) = v24;
      *v24 = off_68618;
    }
    goto LABEL_43;
  }
LABEL_42:
  v4 = 0;
LABEL_43:
  qlseek();
  return v4;
}

