__int64 __fastcall sub_EFD0(_QWORD *a1, unsigned __int8 *a2, __int64 a3, __int64 a4, __int64 a5, double a6)
{
  unsigned int v7; // eax
  __int64 v8; // rdx
  unsigned int v9; // r12d
  __int64 v10; // rax
  __int64 v12; // rdx
  unsigned __int8 v13; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int8 v17; // al
  __int64 v18; // rsi
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int8 v21; // al
  __int64 (__fastcall *v22)(_QWORD *, char, __int64, __int64, __int64, __int64); // rax
  __int64 v23; // rbp
  unsigned __int64 v24; // r12
  __int64 v25; // r13
  __int64 v26; // rsi
  __int64 v27; // r13
  __int64 (__fastcall *v28)(_QWORD *, char, __int64, __int64, __int64, __int64); // rax
  __int64 v29; // rbp
  unsigned __int64 v30; // r12
  __int64 v31; // r13
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 (__fastcall *v34)(_QWORD *, char, __int64, __int64, __int64, __int64); // rax
  __int64 v35; // r12
  unsigned __int64 v36; // r13
  __int64 v37; // r14
  __int64 v38; // rsi
  __int64 (__fastcall *v39)(_QWORD *, char, __int64, __int64, __int64, __int64); // rax
  __int64 v40; // r12
  unsigned __int64 v41; // r13
  __int64 v42; // r14
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax

  v7 = sub_EF60(a2, a1[90], a3, a4, a5);
  v8 = a2[1];
  v9 = v7;
  switch ( (char)v8 )
  {
    case 1:
      goto LABEL_20;
    case 2:
    case 7:
      v10 = use_mapping(*((_QWORD *)a2 + 2) + 16LL * a1[28]);
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, unsigned __int8 *, __int64, __int64))(*a1 + 120LL))(
              a1,
              a2,
              v10,
              v10) )
      {
        (*(void (__fastcall **)(_QWORD *, unsigned __int8 *, _QWORD))(*a1 + 24LL))(a1, a2, v9);
        remember_problem(2, a1[30], 0);
      }
      return 1;
    case 4:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 91);
      if ( (a2[32] & 2) != 0 )
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 43);
      sub_EE10(a1, (__int64)a2, v12);
      v13 = a2[32];
      if ( (v13 & 4) != 0 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 43);
        v13 = a2[32];
      }
      if ( (v13 & 8) != 0 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 99);
        v13 = a2[32];
      }
      if ( (v13 & 0x10) != 0 )
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 114);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 93);
      v17 = a2[32];
      if ( (v17 & 0x40) == 0 )
        goto LABEL_32;
      v18 = *a2;
      if ( !(unsigned __int8)op_adds_xrefs(a1[90], v18) )
      {
        if ( *((_QWORD *)a2 + 2) )
        {
          if ( under_debugger )
            BUG();
          interr(10151, v18, v14, v15);
LABEL_20:
          sub_EE10(a1, (__int64)a2, v8);
          v21 = a2[33];
          if ( (v21 & 1) != 0 )
          {
            v22 = *(__int64 (__fastcall **)(_QWORD *, char, __int64, __int64, __int64, __int64))(*a1 + 96LL);
            if ( v22 == sub_EB20 )
            {
LABEL_22:
              v23 = a1[4];
              if ( v23 )
              {
                v24 = v23 + 1;
                v25 = a1[4];
                --v23;
              }
              else
              {
                v25 = 1;
                v24 = 2;
              }
              v26 = a1[3];
              if ( a1[5] < v24 )
              {
                v33 = qvector_reserve(a1 + 3, v26, v24, 1, v19, v20);
                a1[3] = v33;
                v26 = v33;
              }
              a1[4] = v24;
              *(_BYTE *)(v26 + v23) = 108;
              *(_BYTE *)(a1[3] + v25) = 0;
              return 1;
            }
            goto LABEL_66;
          }
          if ( (v21 & 2) != 0 )
          {
            v28 = *(__int64 (__fastcall **)(_QWORD *, char, __int64, __int64, __int64, __int64))(*a1 + 96LL);
            if ( v28 == sub_EB20 )
              goto LABEL_40;
LABEL_56:
            ((void (__fastcall *)(_QWORD *, __int64))v28)(a1, 117);
            return 1;
          }
          if ( (v21 & 0x20) == 0 )
          {
            if ( (v21 & 0x10) == 0 )
            {
              if ( (v21 & 8) == 0 )
              {
                if ( (v21 & 4) != 0 )
                  (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 40LL))(a1, 117, 2);
                return 1;
              }
              v39 = *(__int64 (__fastcall **)(_QWORD *, char, __int64, __int64, __int64, __int64))(*a1 + 96LL);
              if ( v39 == sub_EB20 )
              {
                v40 = a1[4];
                if ( v40 )
                {
                  v41 = v40 + 1;
                  v42 = a1[4];
                  --v40;
                }
                else
                {
                  v42 = 1;
                  v41 = 2;
                }
                v43 = a1[3];
                if ( a1[5] < v41 )
                {
                  v46 = qvector_reserve(a1 + 3, v43, v41, 1, v19, v20);
                  a1[3] = v46;
                  v43 = v46;
                }
                a1[4] = v41;
                *(_BYTE *)(v43 + v40) = 117;
                *(_BYTE *)(a1[3] + v42) = 0;
              }
              else
              {
                ((void (__fastcall *)(_QWORD *, __int64))v39)(a1, 117);
              }
              v22 = *(__int64 (__fastcall **)(_QWORD *, char, __int64, __int64, __int64, __int64))(*a1 + 96LL);
              if ( v22 == sub_EB20 )
                goto LABEL_22;
LABEL_66:
              ((void (__fastcall *)(_QWORD *, __int64))v22)(a1, 108);
              return 1;
            }
            v34 = *(__int64 (__fastcall **)(_QWORD *, char, __int64, __int64, __int64, __int64))(*a1 + 96LL);
            if ( v34 == sub_EB20 )
            {
              v35 = a1[4];
              if ( v35 )
              {
                v36 = v35 + 1;
                v37 = a1[4];
                --v35;
              }
              else
              {
                v37 = 1;
                v36 = 2;
              }
              v38 = a1[3];
              if ( a1[5] < v36 )
              {
                v45 = qvector_reserve(a1 + 3, v38, v36, 1, v19, v20);
                a1[3] = v45;
                v38 = v45;
              }
              a1[4] = v36;
              *(_BYTE *)(v38 + v35) = 108;
              *(_BYTE *)(a1[3] + v37) = 0;
            }
            else
            {
              ((void (__fastcall *)(_QWORD *, __int64))v34)(a1, 108);
            }
            v28 = *(__int64 (__fastcall **)(_QWORD *, char, __int64, __int64, __int64, __int64))(*a1 + 96LL);
            if ( v28 == sub_EB20 )
            {
LABEL_40:
              v29 = a1[4];
              if ( v29 )
              {
                v30 = v29 + 1;
                v31 = a1[4];
                --v29;
              }
              else
              {
                v31 = 1;
                v30 = 2;
              }
              v32 = a1[3];
              if ( a1[5] < v30 )
              {
                v44 = qvector_reserve(a1 + 3, v32, v30, 1, v19, v20);
                a1[3] = v44;
                v32 = v44;
              }
              a1[4] = v30;
              *(_BYTE *)(v32 + v29) = 117;
              *(_BYTE *)(a1[3] + v31) = 0;
              return 1;
            }
            goto LABEL_56;
          }
          (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 40LL))(a1, 108, 2);
        }
        return 1;
      }
      v17 = a2[32];
LABEL_32:
      if ( (v17 & 0x20) == 0 )
      {
        v27 = a1[90];
        if ( !(unsigned __int8)is_off(v27, *a2, v14, v15, v16)
          && !(unsigned __int8)is_stkvar(v27, *a2)
          && !(unsigned __int8)is_enum(v27, *a2)
          && !(unsigned __int8)is_stroff(v27, *a2) )
        {
          return 1;
        }
      }
LABEL_29:
      (*(void (__fastcall **)(_QWORD *, unsigned __int8 *, _QWORD))(*a1 + 24LL))(a1, a2, v9);
      return 1;
    case 5:
      if ( (*(_BYTE *)(a1[79] + 4LL) & 1) != 0 )
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 35);
      goto LABEL_29;
    case 9:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 58);
      goto LABEL_29;
    default:
      if ( (debug & 8) != 0 )
        sub_9320((__int64)"out: %a: bad optype = %d\n", a6, a1[30]);
      return 1;
  }
}

