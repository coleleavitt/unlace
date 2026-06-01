__int64 __fastcall sub_B070(_QWORD *a1, const __m128i *a2, double a3)
{
  __int8 v3; // dl
  __int64 flags; // rax
  __int64 v6; // rdx
  __int16 v7; // ax
  __int64 v8; // rdx
  int v9; // r13d
  __int16 v10; // r12
  int v11; // r14d
  int v12; // eax
  int v13; // ebp
  __int64 v14; // r15
  char v15; // al
  char v16; // r14
  __int64 (__fastcall *v17)(_QWORD *, char); // rax
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  __int64 v20; // r10
  __int64 v21; // rsi
  __int64 (__fastcall *v22)(_QWORD *, char); // rax
  __int64 v23; // r9
  unsigned __int64 v24; // rdx
  __int64 v25; // r10
  __int64 v26; // rsi
  __int64 v27; // r14
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned __int64 v33; // rax
  unsigned __int8 v34; // [rsp+0h] [rbp-88h]
  unsigned __int64 v35; // [rsp+0h] [rbp-88h]
  unsigned __int64 v36; // [rsp+0h] [rbp-88h]
  __int64 v37; // [rsp+10h] [rbp-78h]
  __int64 v38; // [rsp+10h] [rbp-78h]
  __int64 v39; // [rsp+18h] [rbp-70h]
  __int64 v40; // [rsp+18h] [rbp-70h]
  __m128i v41; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v42; // [rsp+30h] [rbp-58h]
  __int64 v43; // [rsp+38h] [rbp-50h]
  __int64 v44; // [rsp+40h] [rbp-48h]
  unsigned __int64 v45; // [rsp+48h] [rbp-40h]

  v3 = a2->m128i_i8[1];
  v45 = __readfsqword(0x28u);
  switch ( v3 )
  {
    case 0:
      return 0;
    case 1:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * a2->m128i_u16[3]),
        33);
      return 1;
    case 3:
      sub_ACE0((__int64)a1, a2[2].m128i_i8[1]);
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * a2->m128i_u16[3]),
        33);
      sub_AD70((__int64)a1, a2[2].m128i_i8[1]);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 91);
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * a2[2].m128i_i8[0]),
        33);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 93);
      return 1;
    case 4:
      sub_ACE0((__int64)a1, a2[2].m128i_i8[1]);
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * a2->m128i_u16[3]),
        33);
      sub_AD70((__int64)a1, a2[2].m128i_i8[1]);
      if ( a2[1].m128i_i64[0] )
      {
        flags = get_flags_ex();
        v6 = a1[77];
        a1[90] = flags;
        if ( (*(_BYTE *)(v6 + 154) & 1) != 0 || (unsigned __int8)op_adds_xrefs() )
        {
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
          (*(void (__fastcall **)(_QWORD *, const __m128i *, __int64))(*a1 + 24LL))(a1, a2, 196);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
        }
        else
        {
          v31 = a2[1].m128i_i64[1];
          v32 = *a1;
          v44 = a2[2].m128i_i64[0];
          v33 = a2[1].m128i_u64[0];
          v41 = _mm_loadu_si128(a2);
          v43 = _mm_loadu_si128(a2 + 1).m128i_i64[1];
          v42 = v33 >> v31;
          (*(void (__fastcall **)(_QWORD *, __int64))(v32 + 32))(a1, 91);
          (*(void (__fastcall **)(_QWORD *, __m128i *, __int64))(*a1 + 24LL))(a1, &v41, 196);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 93);
        }
      }
      return 1;
    case 5:
      v7 = *((_WORD *)a1 + 124);
      v8 = 0;
      if ( (unsigned __int16)(v7 - 45) > 1u )
      {
        v8 = 4;
        if ( v7 == 44 )
          v8 = 4 * (unsigned int)((get_dword() & 0x7C) != 40);
      }
      (*(void (__fastcall **)(_QWORD *, const __m128i *, __int64))(*a1 + 24LL))(a1, a2, v8);
      return 1;
    case 7:
      if ( !(unsigned __int8)sub_AFF0(a1, (__int64)a2, a2[1].m128i_i64[0]) )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 18);
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 104LL))(a1, a2[1].m128i_i64[0], 16);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 18);
        remember_problem();
      }
      return 1;
    case 8:
      if ( a2[2].m128i_i8[2] )
      {
        v9 = 4;
        v10 = 4;
      }
      else
      {
        v9 = 2;
        v10 = 2;
      }
      v11 = 0;
      do
      {
        if ( v11 )
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 58);
        v12 = v9 + a2->m128i_u16[3] - 1 - v11++;
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
          a1,
          *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * v12),
          33);
      }
      while ( v10 != (_WORD)v11 );
      return 1;
    case 9:
      v13 = a2->m128i_u8[6];
      v14 = 0;
      v15 = 0;
      break;
    case 10:
      sub_AE00((__int64)a1, a1[30], a2->m128i_i32[2]);
      return 1;
    default:
      sub_AB60((__int64)"out: %a: bad optype %d", a3, a1[30]);
      return 1;
  }
  do
  {
    if ( (v13 & 1) == 0 )
      goto LABEL_40;
    if ( v15 )
    {
      LOBYTE(v28) = v13;
      v27 = v14;
      goto LABEL_43;
    }
    while ( 1 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 32);
      v16 = aLlssddmm[v14];
      v17 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
      if ( v17 == sub_AAE0 )
      {
        v18 = a1[4];
        if ( v18 )
        {
          v19 = v18 + 1;
          v20 = a1[4];
          v21 = a1[3];
          --v18;
          if ( a1[5] >= v19 )
          {
LABEL_30:
            a1[4] = v19;
            *(_BYTE *)(v21 + v18) = v16;
            *(_BYTE *)(a1[3] + v20) = 0;
            goto LABEL_31;
          }
        }
        else
        {
          v21 = a1[3];
          v20 = 1;
          v19 = 2;
          if ( a1[5] >= 2u )
            goto LABEL_30;
        }
        v40 = v20;
        v38 = v18;
        v36 = v19;
        v30 = qvector_reserve();
        v20 = v40;
        v18 = v38;
        a1[3] = v30;
        v19 = v36;
        v21 = v30;
        goto LABEL_30;
      }
      v17(a1, v16);
LABEL_31:
      v22 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
      if ( v22 != sub_AAE0 )
      {
        v22(a1, (v14 & 1) + 49);
        goto LABEL_35;
      }
      v23 = a1[4];
      if ( v23 )
      {
        v24 = v23 + 1;
        v25 = a1[4];
        v26 = a1[3];
        --v23;
        if ( a1[5] < v24 )
          goto LABEL_45;
      }
      else
      {
        v26 = a1[3];
        v25 = 1;
        v24 = 2;
        if ( a1[5] < 2u )
        {
LABEL_45:
          v39 = v25;
          v37 = v23;
          v35 = v24;
          v29 = qvector_reserve();
          v25 = v39;
          v23 = v37;
          a1[3] = v29;
          v24 = v35;
          v26 = v29;
        }
      }
      a1[4] = v24;
      *(_BYTE *)(v26 + v23) = (v14 & 1) + 49;
      *(_BYTE *)(a1[3] + v25) = 0;
LABEL_35:
      v27 = v14 + 1;
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 32);
      LOBYTE(v28) = (unsigned __int8)v13 >> 1;
      if ( v14 == 7 )
        return 1;
      if ( (v13 & 2) == 0 )
      {
        v28 = v13;
        v27 = v14 + 2;
        LOBYTE(v28) = (unsigned __int8)v13 >> 2;
        if ( v14 == 6 )
          return 1;
        if ( (v13 & 4) == 0 )
          break;
      }
LABEL_43:
      v34 = v28;
      v14 = v27;
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
      v13 = v34;
    }
    v13 = v28;
    v14 += 2;
    v15 = 1;
LABEL_40:
    ++v14;
    LOBYTE(v13) = (unsigned __int8)v13 >> 1;
  }
  while ( v14 != 8 );
  return 1;
}

