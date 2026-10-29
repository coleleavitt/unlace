__int64 __fastcall sub_8380(__int64 *a1, __int64 a2, double a3)
{
  __int64 v3; // r12
  __int64 v6; // rax
  char v7; // al
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // r13
  __int64 v11; // rax
  const char *v12; // rsi
  void (__fastcall *v13)(__int64 *, const char *, __int64); // rcx
  unsigned __int16 v14; // r13
  bool v15; // al
  int v16; // esi
  __int64 v17; // r14
  __int64 (__fastcall *v18)(__int64 *, char); // rax
  __int64 v19; // r12
  unsigned __int64 v20; // r13
  __int64 v21; // r15
  __int64 v22; // rsi
  unsigned __int8 v23; // dl
  __int16 v24; // ax
  char v25; // dl
  double v26; // xmm0_8
  double v27; // xmm0_8
  __int64 v28; // r15
  _QWORD *v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rdx
  const char *v32; // rsi
  __int64 v33; // rax

  v3 = a1[77];
  switch ( *(_BYTE *)(a2 + 1) )
  {
    case 0:
      return 0;
    case 1:
      (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*a1 + 56))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33);
      return 1;
    case 2:
      v6 = sub_73C0(a1[77], a1[30]);
      sub_8000(a1, a2, v6);
      return 1;
    case 3:
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 91);
      if ( *(_BYTE *)(a2 + 32) == 1 )
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 45);
      (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*a1 + 56))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33);
      v7 = *(_BYTE *)(a2 + 32);
      if ( !v7 )
      {
        if ( (unsigned __int8)is_off()
          || (unsigned __int8)is_stkvar()
          || (unsigned __int8)is_enum()
          || (unsigned __int8)is_stroff() )
        {
          (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 24))(a1, a2, 130);
        }
        v7 = *(_BYTE *)(a2 + 32);
      }
      if ( v7 == 2 )
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 43);
      goto LABEL_38;
    case 4:
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 91);
      (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*a1 + 56))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33);
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 43);
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 35);
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 24))(a1, a2, 160);
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 93);
      return 1;
    case 5:
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 35);
      (*(void (__fastcall **)(__int64 *, __int64, _QWORD))(*a1 + 24))(a1, a2, 0);
      return 1;
    case 7:
      v8 = sub_73F0(a1[77], a1 + 28, *(_QWORD *)(a2 + 16));
      sub_8000(a1, a2, v8);
      return 1;
    case 8:
      v9 = (unsigned __int16)sub_7220((__int64)(a1 + 28), *(unsigned __int16 *)(a2 + 6));
      v10 = use_mapping();
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 80))(a1, v10);
      v11 = sub_AC30(v3, v9, (unsigned int)*(char *)(a2 + 5));
      if ( !v11 )
      {
        sub_8000(a1, a2, v10);
        return 1;
      }
      v12 = s1;
      v13 = *(void (__fastcall **)(__int64 *, const char *, __int64))(*a1 + 56);
      if ( *(_QWORD *)(v11 + 16) )
        v12 = *(const char **)(v11 + 8);
      goto LABEL_17;
    case 9:
      v14 = *((_WORD *)a1 + 124) - 12;
      v15 = sub_7210(*(_WORD *)(a2 + 6));
      v16 = *(unsigned __int16 *)(a2 + 6);
      if ( v15 )
      {
        v17 = -1;
        (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*a1 + 56))(
          a1,
          *(_QWORD *)(*(_QWORD *)(a1[78] + 56) + 8LL * (v16 & 0xF)),
          33);
        goto LABEL_20;
      }
      v28 = (unsigned __int16)sub_7250((__int64)(a1 + 28), v16);
      v17 = use_mapping();
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 80))(a1, v17);
      v29 = (_QWORD *)sub_AC30(v3, v28, (unsigned int)*(char *)(a2 + 5));
      if ( !v29 )
      {
        sub_8000(a1, a2, v17);
LABEL_20:
        if ( v14 > 1u )
        {
          v18 = *(__int64 (__fastcall **)(__int64 *, char))(*a1 + 96);
          if ( v18 == sub_7CC0 )
          {
            v19 = a1[4];
            if ( v19 )
            {
              v20 = v19 + 1;
              v21 = a1[4];
              --v19;
            }
            else
            {
              v21 = 1;
              v20 = 2;
            }
            v22 = a1[3];
            if ( a1[5] < v20 )
            {
              v33 = qvector_reserve();
              a1[3] = v33;
              v22 = v33;
            }
            a1[4] = v20;
            *(_BYTE *)(v22 + v19) = 46;
            *(_BYTE *)(a1[3] + v21) = 0;
          }
          else
          {
            v18(a1, 46);
          }
          if ( v17 == -1 || !(unsigned __int8)sub_80E0(a1, v17, (unsigned int)*(char *)(a2 + 32)) )
            (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*a1 + 104))(a1, *(char *)(a2 + 32), 10);
        }
        return 1;
      }
      v13 = *(void (__fastcall **)(__int64 *, const char *, __int64))(*a1 + 56);
      if ( v14 <= 1u
        || (v30 = *(unsigned __int8 *)(a2 + 32), v30 >= v29[8])
        || (v31 = v29[7] + 48 * v30, *(_QWORD *)(v31 + 8) <= 1u) )
      {
        v32 = s1;
        if ( v29[2] )
          v32 = (const char *)v29[1];
        v13(a1, v32, 34);
        goto LABEL_20;
      }
      v12 = *(const char **)v31;
LABEL_17:
      v13(a1, v12, 34);
      return 1;
    case 0xA:
      v23 = *(_BYTE *)(a2 + 32);
      if ( ((*(_DWORD *)(v3 + 272) - 2) & 0xFFFFFFFD) == 0 && ((v24 = *((_WORD *)a1 + 124), v24 == 45) || v24 == 19) )
      {
        v25 = v23 >> 3;
        if ( v25 != 31 )
        {
          (*(void (__fastcall **)(__int64 *, char *, __int64))(*a1 + 56))(a1, off_13380[v25 & 0x1F], 32);
          return 1;
        }
      }
      else if ( v23 <= 0xFu )
      {
        (*(void (__fastcall **)(__int64 *, char *, __int64))(*a1 + 56))(a1, off_13480[v23], 32);
        return 1;
      }
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 64))(a1, 18);
      (*(void (__fastcall **)(__int64 *, const char *, __int64))(*a1 + 56))(a1, "BAD_CC_CODE", 32);
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 72))(a1, 18);
      return 1;
    case 0xB:
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 24))(a1, a2, 144);
      return 1;
    case 0xC:
      v26 = (*(double (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 91);
      sub_7DF0(a1, *(_WORD *)(a2 + 6), v26);
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 93);
      return 1;
    case 0xD:
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 91);
      v27 = (*(double (__fastcall **)(__int64 *, _QWORD, __int64))(*a1 + 56))(
              a1,
              *(_QWORD *)(*(_QWORD *)(a1[78] + 56) + 8LL * *(unsigned __int16 *)(a2 + 6)),
              33);
      sub_7F50(a1, *(char *)(a2 + 32), v27);
LABEL_38:
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 93);
      return 1;
    default:
      sub_7010((__int64)(a1 + 28), a3);
      return 1;
  }
}

