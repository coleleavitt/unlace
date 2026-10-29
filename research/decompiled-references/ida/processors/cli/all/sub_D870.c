__int64 __fastcall sub_D870(_QWORD *a1, __int64 a2, double a3, double a4, __m128 a5)
{
  unsigned __int8 (__fastcall *v8)(_QWORD *, __int64, __int64, __int64); // r12
  __int64 v9; // rax
  int v10; // r12d
  unsigned __int64 v11; // rdx
  __int64 v12; // r14
  __int64 v13; // rsi
  __int64 v14; // r15
  int v15; // edi
  unsigned __int16 word; // ax
  __int64 (__fastcall *v17)(_QWORD *, char); // rax
  __int64 v18; // rax
  int v19; // r13d
  __int64 v20; // r12
  int dword; // eax
  __int64 v22; // r12
  __int64 (__fastcall *v23)(_QWORD *, char); // rax
  __int64 v24; // r12
  unsigned __int64 v25; // r15
  __int64 v26; // r8
  __int64 v27; // rsi
  __int64 v28; // rax
  unsigned __int64 v29; // [rsp+0h] [rbp-48h]
  __int64 v30; // [rsp+0h] [rbp-48h]
  _QWORD *v31; // [rsp+8h] [rbp-40h]

  switch ( *(_BYTE *)(a2 + 1) )
  {
    case 0:
      return 0;
    case 5:
      (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 24LL))(a1, a2, 0);
      return 1;
    case 7:
      v8 = *(unsigned __int8 (__fastcall **)(_QWORD *, __int64, __int64, __int64))(*a1 + 120LL);
      v9 = sub_4620(a1 + 28, *(_QWORD *)(a2 + 16));
      if ( !v8(a1, a2, v9, -1) )
        sub_59F0(a1, a2);
      return 1;
    case 8:
      (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 24LL))(a1, a2, 0);
      if ( !*(_QWORD *)(a2 + 8) )
        return 1;
      v10 = 0;
      v31 = a1 + 3;
      while ( 1 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
        v17 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
        if ( v17 != sub_4B60 )
        {
          v17(a1, 32);
          goto LABEL_10;
        }
        v14 = a1[4];
        if ( v14 )
        {
          v11 = v14 + 1;
          v12 = a1[4];
          v13 = a1[3];
          --v14;
          if ( a1[5] < v11 )
            goto LABEL_14;
        }
        else
        {
          v13 = a1[3];
          v12 = 1;
          v11 = 2;
          if ( a1[5] < 2u )
          {
LABEL_14:
            v29 = v11;
            v18 = qvector_reserve(v31, v13, v11, 1);
            v11 = v29;
            a1[3] = v18;
            v13 = v18;
          }
        }
        a1[4] = v11;
        *(_BYTE *)(v13 + v14) = 32;
        *(_BYTE *)(a1[3] + v12) = 0;
LABEL_10:
        v15 = 2 * v10++;
        word = get_word(*(_QWORD *)(a2 + 16) + v15);
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 112LL))(a1, word, 10);
        if ( (unsigned __int64)v10 >= *(_QWORD *)(a2 + 8) )
          return 1;
      }
    case 9:
      if ( !*(_QWORD *)(a2 + 8) )
        return 1;
      v19 = 0;
      sub_5150(a1, 32);
      while ( 2 )
      {
        v20 = *(_QWORD *)(a2 + 16) + 4 * v19;
        if ( (unsigned __int8)is_loaded(v20) )
        {
          dword = get_dword(v20);
          v22 = sub_4620(a1 + 28, dword + a1[29] + *((unsigned __int16 *)a1 + 125));
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, __int64, __int64))(*a1 + 120LL))(a1, a2, v22, -1)
            && ((unsigned __int8)sub_5150(a1, 512)
             || !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, __int64, __int64))(*a1 + 120LL))(a1, a2, v22, -1)) )
          {
            sub_59F0(a1, a2);
          }
          if ( (unsigned __int64)++v19 < *(_QWORD *)(a2 + 8) )
          {
            sub_5150(a1, 32);
            (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
            v23 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
            if ( v23 != sub_4B60 )
            {
              v23(a1, 32);
              continue;
            }
            v24 = a1[4];
            if ( v24 )
            {
              v25 = v24 + 1;
              v26 = a1[4];
              v27 = a1[3];
              --v24;
              if ( a1[5] >= v25 )
              {
LABEL_23:
                a1[4] = v25;
                *(_BYTE *)(v27 + v24) = 32;
                *(_BYTE *)(a1[3] + v26) = 0;
                continue;
              }
            }
            else
            {
              v27 = a1[3];
              v26 = 1;
              v25 = 2;
              if ( a1[5] >= 2u )
                goto LABEL_23;
            }
            v30 = v26;
            v28 = qvector_reserve(a1 + 3, v27, v25, 1);
            v26 = v30;
            a1[3] = v28;
            v27 = v28;
            goto LABEL_23;
          }
        }
        else
        {
          sub_4C90((__int64)"%a: bad switch case %d", a3, a1[30]);
          sub_5150(a1, 1024);
          (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, "<bad switch, truncated>", 18);
        }
        return 1;
      }
    case 0xA:
      sub_D170(a1, a2, *(_DWORD *)(a2 + 8), a3, a4, a5);
      return 1;
    default:
      if ( under_debugger )
        BUG();
      interr(10368);
      return sub_DC30();
  }
}

