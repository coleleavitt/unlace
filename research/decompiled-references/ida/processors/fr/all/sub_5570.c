__int64 __fastcall sub_5570(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // kr00_8
  _QWORD *v5; // kr08_8
  _QWORD *v6; // rbx
  __int64 v7; // rbp
  char v9; // al
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(_QWORD *, char); // rax
  __int64 v12; // r12
  unsigned __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 *v18; // rsi
  __int64 (__fastcall *v19)(_QWORD *, char); // rax
  __int64 v20; // r12
  unsigned __int64 v21; // r13
  __int64 v22; // r14
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax

  v4 = v3;
  v5 = v2;
  v6 = a1;
  v7 = a2;
  switch ( *(_BYTE *)(a2 + 1) )
  {
    case 0:
      return 1;
    case 1:
LABEL_3:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33);
      return 1;
    case 2:
    case 7:
      sub_4FA0(a1, a2);
      return 1;
    case 3:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 64);
      switch ( *(_BYTE *)(a2 + 33) )
      {
        case 0:
          goto LABEL_3;
        case 1:
          (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 193);
          return 1;
        case 2:
          goto LABEL_25;
        case 3:
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 45);
          goto LABEL_3;
        case 4:
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
          (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
            a1,
            *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 104LL),
            33);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
          v19 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
          if ( v19 == sub_4D30 )
          {
            v20 = a1[4];
            if ( v20 )
            {
              v21 = v20 + 1;
              v22 = a1[4];
              --v20;
            }
            else
            {
              v22 = 1;
              v21 = 2;
            }
            v23 = a1[3];
            if ( a1[5] < v21 )
            {
              v25 = qvector_reserve();
              a1[3] = v25;
              v23 = v25;
            }
            a1[4] = v21;
            *(_BYTE *)(v23 + v20) = 32;
            *(_BYTE *)(a1[3] + v22) = 0;
          }
          else
          {
            v19(a1, 32);
          }
          (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
            a1,
            *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(v7 + 6)),
            33);
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
          return 1;
        default:
          if ( under_debugger )
            goto LABEL_43;
          interr();
          break;
      }
      goto LABEL_41;
    case 4:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 64);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
      v9 = *(_BYTE *)(a2 + 32);
      if ( (v9 & 1) != 0 )
      {
        v10 = *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 112LL);
        goto LABEL_11;
      }
      if ( (v9 & 2) != 0 )
      {
        v10 = *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 120LL);
LABEL_11:
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v10, 33);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
        v11 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
        if ( v11 == sub_4D30 )
        {
          v12 = a1[4];
          if ( v12 )
          {
            v13 = v12 + 1;
            v14 = a1[4];
            --v12;
          }
          else
          {
            v14 = 1;
            v13 = 2;
          }
          v15 = a1[3];
          if ( a1[5] < v13 )
          {
            v24 = qvector_reserve();
            a1[3] = v24;
            v15 = v24;
          }
          a1[4] = v13;
          *(_BYTE *)(v15 + v12) = 32;
          *(_BYTE *)(a1[3] + v14) = 0;
        }
        else
        {
          v11(a1, 32);
        }
        (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 24LL))(a1, v7, 0);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
        return 1;
      }
LABEL_41:
      if ( under_debugger )
LABEL_43:
        BUG();
      interr();
      return sub_59A0(10020);
    case 5:
      v16 = sub_7470(a1[77], *(_QWORD *)(a2 + 8));
      v17 = *a1;
      if ( v16 )
      {
        v18 = &qword_A8C8;
        if ( *(_QWORD *)(v16 + 16) )
          v18 = *(__int64 **)(v16 + 8);
        (*(void (__fastcall **)(_QWORD *, __int64 *, __int64))(v17 + 56))(a1, v18, 34);
        return 1;
      }
      else
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(v17 + 32))(a1, 35);
        (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 24LL))(a1, a2, 0);
        return 1;
      }
    case 8:
      sub_50F0(a1, a2);
      return 1;
    default:
      v6 = v5;
      v7 = v4;
      if ( under_debugger )
        goto LABEL_43;
      interr();
LABEL_25:
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*v6 + 56LL))(
        v6,
        *(_QWORD *)(*(_QWORD *)(v6[78] + 56LL) + 8LL * *(unsigned __int16 *)(v7 + 6)),
        33);
      (*(void (__fastcall **)(_QWORD *, __int64))(*v6 + 32LL))(v6, 43);
      return 1;
  }
}

