__int64 __fastcall sub_1E180(_QWORD *a1, __int64 a2)
{
  unsigned __int8 v3; // cl
  unsigned int v4; // r12d
  __int64 (__fastcall *v6)(_QWORD *, char); // rax
  __int64 v7; // r12
  unsigned __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(_QWORD *, char); // rax
  __int64 v12; // rbp
  unsigned __int64 v13; // r12
  __int64 v14; // r13
  __int64 v15; // rsi
  __int64 ioport; // rax
  void *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax

  v3 = *(_BYTE *)(a2 + 1);
  if ( v3 > 0xAu )
  {
    v4 = 0;
  }
  else if ( ((1LL << v3) & 0x94) != 0 )
  {
    v4 = (*((_WORD *)a1 + 129) & 4) == 0 ? 196 : 212;
  }
  else
  {
    v4 = 4 * (((1LL << v3) & 0x420) != 0);
  }
  switch ( *(_BYTE *)(a2 + 1) )
  {
    case 1:
      v19 = a1[78];
      v20 = *(unsigned __int16 *)(a2 + 6);
      if ( (int)v20 < *(_DWORD *)(v19 + 64) )
      {
        v17 = *(void **)(*(_QWORD *)(v19 + 56) + 8 * v20);
        goto LABEL_43;
      }
      if ( under_debugger )
        BUG();
      interr(10389);
      return sub_1E700();
    case 2:
    case 7:
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, _QWORD, _QWORD))(*a1 + 120LL))(
             a1,
             a2,
             *(_QWORD *)(a2 + 16),
             *(_QWORD *)(a2 + 16)) )
      {
        return 1;
      }
      goto LABEL_6;
    case 3:
      goto LABEL_12;
    case 4:
      (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 24LL))(a1, a2, v4);
LABEL_12:
      v6 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
      if ( v6 == sub_1D5C0 )
      {
        v7 = a1[4];
        if ( v7 )
        {
          v8 = v7 + 1;
          v9 = a1[4];
          --v7;
        }
        else
        {
          v9 = 1;
          v8 = 2;
        }
        v10 = a1[3];
        if ( a1[5] < v8 )
        {
          v22 = qvector_reserve(a1 + 3, v10, v8, 1);
          a1[3] = v22;
          v10 = v22;
        }
        a1[4] = v8;
        *(_BYTE *)(v10 + v7) = 40;
        *(_BYTE *)(a1[3] + v9) = 0;
      }
      else
      {
        v6(a1, 40);
      }
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * *(unsigned __int16 *)(a2 + 6)),
        33);
      v11 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
      if ( v11 == sub_1D5C0 )
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
          v23 = qvector_reserve(a1 + 3, v15, v13, 1);
          a1[3] = v23;
          v15 = v23;
        }
        a1[4] = v13;
        *(_BYTE *)(v15 + v12) = 41;
        *(_BYTE *)(a1[3] + v14) = 0;
      }
      else
      {
        v11(a1, 41);
      }
      return 1;
    case 5:
      goto LABEL_6;
    case 8:
      v18 = *(_QWORD *)(a2 + 8);
      if ( !v18 )
      {
        sub_1D640((__int64)a1, (__int64)"unknown");
        v18 = *(_QWORD *)(a2 + 8);
      }
      if ( (v18 & 8) != 0 )
      {
        sub_1D640((__int64)a1, (__int64)"i");
        v18 = *(_QWORD *)(a2 + 8);
      }
      if ( (v18 & 4) != 0 )
      {
        sub_1D640((__int64)a1, (__int64)"o");
        v18 = *(_QWORD *)(a2 + 8);
      }
      if ( (v18 & 2) != 0 )
      {
        sub_1D640((__int64)a1, (__int64)"r");
        v18 = *(_QWORD *)(a2 + 8);
      }
      if ( (v18 & 1) != 0 )
        sub_1D640((__int64)a1, (__int64)"w");
      return 1;
    case 9:
      switch ( *(_QWORD *)(a2 + 8) )
      {
        case 0LL:
          sub_1D640((__int64)a1, (__int64)"rne");
          break;
        case 1LL:
          sub_1D640((__int64)a1, (__int64)"rtz");
          break;
        case 2LL:
          sub_1D640((__int64)a1, (__int64)"rdn");
          break;
        case 3LL:
          sub_1D640((__int64)a1, (__int64)"rup");
          break;
        case 4LL:
          sub_1D640((__int64)a1, (__int64)"rmm");
          break;
        default:
          return 1;
      }
      return 1;
    case 0xA:
      ioport = find_ioport(a1[77] + 472LL, *(_QWORD *)(a2 + 8));
      if ( !ioport )
        goto LABEL_6;
      v17 = &unk_2B040;
      if ( *(_QWORD *)(ioport + 16) )
        v17 = *(void **)(ioport + 8);
      if ( !v17 )
        goto LABEL_6;
LABEL_43:
      (*(void (__fastcall **)(_QWORD *, void *, __int64))(*a1 + 56LL))(a1, v17, 33);
      break;
    case 0xB:
      if ( (*(_QWORD *)(a2 + 8) & 0xFFFFFF20) != 0 || (*(_QWORD *)(a2 + 8) & 7LL) == 4 )
      {
LABEL_6:
        (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 24LL))(a1, a2, v4);
      }
      else
      {
        sub_1D640(
          (__int64)a1,
          (__int64)"%s%s",
          "e",
          *(const char **)((char *)&off_33D00 + (*(_QWORD *)(a2 + 8) & 0x18LL)));
        v21 = *(_QWORD *)(a2 + 8);
        if ( (v21 & 7) != 0 )
        {
          sub_1D640((__int64)a1, (__int64)", %s", off_33CC0[v21 & 7]);
          v21 = *(_QWORD *)(a2 + 8);
        }
        if ( (v21 & 0x40) != 0 )
          sub_1D640((__int64)a1, (__int64)", %s", "ta");
        else
          sub_1D640((__int64)a1, (__int64)", %s", "tu");
        if ( *(char *)(a2 + 8) >= 0 )
          sub_1D640((__int64)a1, (__int64)", %s", "mu");
        else
          sub_1D640((__int64)a1, (__int64)", %s", "ma");
      }
      break;
    case 0xC:
      sub_1D640((__int64)a1, (__int64)"v0.t");
      break;
    default:
      return 1;
  }
  return 1;
}

