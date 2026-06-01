__int64 __fastcall sub_3EA610(__int64 a1, double a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // r12d
  int v6; // r14d
  __int64 v7; // rax
  char v8; // dl
  __int64 v9; // r8
  __int64 v10; // rsi
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // r12
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // r15d
  __int64 v20; // r12
  int v21; // eax
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rbx
  int dtype_size; // eax
  int v28; // eax
  int v29; // edx
  __int64 v30; // r15
  __int64 v31; // rcx
  int v32; // eax
  int v33; // [rsp+0h] [rbp-90h]
  __int64 v34; // [rsp+0h] [rbp-90h]
  __int64 v35; // [rsp+8h] [rbp-88h]
  __int64 v36; // [rsp+8h] [rbp-88h]
  __int64 v37; // [rsp+10h] [rbp-80h]
  int v38; // [rsp+1Ch] [rbp-74h]
  __int64 v39; // [rsp+20h] [rbp-70h] BYREF
  int v40; // [rsp+28h] [rbp-68h]
  _QWORD v41[2]; // [rsp+30h] [rbp-60h] BYREF
  unsigned __int8 v42[24]; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v43; // [rsp+58h] [rbp-38h]

  v2 = *(unsigned __int16 *)(a1 + 48);
  v43 = __readfsqword(0x28u);
  if ( (unsigned __int16)v2 > 0x150u )
  {
    if ( (_WORD)v2 == 2082 )
    {
      v3 = *(int *)(*(_QWORD *)(a1 + 832) + 464LL);
      goto LABEL_7;
    }
  }
  else
  {
    if ( (unsigned __int16)v2 > 0x13Fu )
    {
      LOWORD(v2) = v2 - 321;
      switch ( v2 )
      {
        case 0LL:
          v37 = 104;
          v6 = 4;
          v4 = 0;
          v3 = -1;
          v33 = 1;
          v5 = -1;
          LOBYTE(v38) = 12;
          goto LABEL_8;
        case 1LL:
          v37 = 104;
          v6 = 4;
          v4 = 0;
          v3 = -1;
          v33 = 1;
          v5 = -1;
          LOBYTE(v38) = 4;
          goto LABEL_8;
        case 2LL:
          v37 = 104;
          v6 = 0;
          v3 = -1;
          v4 = 0;
          v33 = 1;
          v5 = -1;
          LOBYTE(v38) = 16;
          goto LABEL_8;
        case 3LL:
          v37 = 104;
          v6 = 0;
          v3 = -1;
          v4 = 0;
          v33 = 1;
          v5 = -1;
          LOBYTE(v38) = 8;
          goto LABEL_8;
        case 4LL:
          v37 = 104;
          v6 = 0;
          v3 = -1;
          v4 = 0;
          v33 = 1;
          v5 = -1;
          LOBYTE(v38) = 0;
          goto LABEL_8;
        case 5LL:
          v37 = 104;
          v6 = 0;
          v3 = -1;
          v4 = 0;
          v33 = 1;
          v5 = -1;
          LOBYTE(v38) = 18;
          goto LABEL_8;
        case 6LL:
          v37 = 104;
          v6 = 0;
          v3 = -1;
          v4 = 0;
          v33 = 1;
          v5 = -1;
          LOBYTE(v38) = 10;
          goto LABEL_8;
        case 7LL:
          v37 = 104;
          v6 = 0;
          v3 = -1;
          v4 = 0;
          v33 = 1;
          v5 = -1;
          LOBYTE(v38) = 2;
          goto LABEL_8;
        case 8LL:
          v37 = 104;
          v6 = 4;
          v4 = 0;
          v5 = 0;
          LOBYTE(v38) = 12;
          v3 = -1;
          v33 = 1;
          goto LABEL_8;
        case 9LL:
          v37 = 104;
          v6 = 4;
          v4 = 0;
          v3 = -1;
          v33 = 1;
          v5 = 1;
          LOBYTE(v38) = 4;
          goto LABEL_8;
        case 10LL:
          v37 = 104;
          v6 = 4;
          v4 = 0;
          v3 = -1;
          v33 = 1;
          v5 = 2;
          LOBYTE(v38) = 12;
          goto LABEL_8;
        case 11LL:
          v37 = 104;
          v6 = 4;
          v4 = 0;
          v5 = 0;
          LOBYTE(v38) = 4;
          v3 = -1;
          v33 = 1;
          goto LABEL_8;
        case 12LL:
          v37 = 104;
          v6 = 4;
          v4 = 0;
          v3 = -1;
          v33 = 1;
          v5 = 1;
          LOBYTE(v38) = 12;
          goto LABEL_8;
        case 13LL:
          v37 = 104;
          v6 = 4;
          v4 = 0;
          v3 = -1;
          v33 = 1;
          v5 = 2;
          LOBYTE(v38) = 4;
          goto LABEL_8;
        case 14LL:
          v37 = 104;
          v6 = 4;
          v4 = 0;
          v3 = -1;
          v33 = 1;
          v5 = 3;
          LOBYTE(v38) = 12;
          goto LABEL_8;
        case 15LL:
          v37 = 104;
          v6 = 4;
          v4 = 0;
          v3 = -1;
          v33 = 1;
          v5 = 3;
          LOBYTE(v38) = 4;
          goto LABEL_8;
        default:
          v6 = 4;
          v5 = -1;
          v37 = 64;
          v33 = 0;
          LOBYTE(v38) = 20;
          goto LABEL_40;
      }
    }
    if ( (_WORD)v2 == 15 )
    {
      v3 = *(int *)(*(_QWORD *)(a1 + 832) + 460LL);
      goto LABEL_7;
    }
    if ( (_WORD)v2 == 16 )
    {
      v3 = *(int *)(*(_QWORD *)(a1 + 832) + 452LL);
      goto LABEL_7;
    }
    v3 = -1;
    if ( (_WORD)v2 == 14 )
    {
LABEL_7:
      v4 = 1;
      v37 = 144;
      v5 = -1;
      v33 = 2;
      v38 = *(_QWORD *)(a1 + 72);
      v6 = v38 & 4;
LABEL_8:
      v7 = a1 + 40 * v4;
      v8 = *(_BYTE *)(v7 + 65);
      if ( v8 == 12 )
      {
        if ( (*(_BYTE *)(v7 + 68) & 8) != 0 )
          v5 = *(unsigned __int16 *)(v7 + 70);
      }
      else if ( v8 == 11 )
      {
        v5 += 4 * *(unsigned __int16 *)(v7 + 70);
      }
      if ( (_DWORD)v3 == -1 )
      {
LABEL_40:
        v28 = *(_DWORD *)(a1 + 52);
        v29 = v28 & 8;
        if ( (v28 & 0x100) != 0 )
        {
          v23 = *(_QWORD *)(a1 + 832);
          v3 = *(int *)(v23 + 452);
          if ( !v29 )
            goto LABEL_30;
          goto LABEL_42;
        }
        v3 = -1;
        if ( (v28 & 0x200) != 0 )
          v3 = *(int *)(*(_QWORD *)(a1 + 832) + 460LL);
        if ( (v28 & 8) == 0 )
        {
LABEL_30:
          v24 = a1 + v37;
          v35 = a1 + v37;
          if ( (unsigned __int8)is_call_insn() != 1 && (_DWORD)v3 == -1 )
          {
            if ( v6 )
            {
              if ( (v38 & 0x10) != 0 )
                goto LABEL_47;
              if ( (unsigned __int8)sub_3EA1F0(a1, a1 + 24, v35) )
                return 1;
              if ( v5 != -1 )
              {
                sub_3E9BF0(a1, ((v38 & 8) == 0) + 32, v5 + *(_DWORD *)(*(_QWORD *)(a1 + 832) + 472LL), 0, 1);
                v25 = *(_QWORD *)(a1 + 40LL * v33 + 80) + 16LL * *(_QWORD *)(a1 + 24);
                v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 24LL) + 16LL);
                if ( v25 != v26 )
                {
                  v26 &= v25;
                  if ( v25 == -1 )
                    v26 = -1;
                }
                dtype_size = get_dtype_size();
                sub_1D2710(a1, 0x2Au, dtype_size, 1, 0x3BEA45E214ADDC55LL, v26, 0);
                return 1;
              }
              if ( !under_debugger )
                sub_37EEE0(0xCA42u, a2);
              goto LABEL_73;
            }
            v3 = -1;
            goto LABEL_15;
          }
LABEL_14:
          if ( v6 )
          {
LABEL_18:
            if ( (v38 & 0x10) != 0 )
            {
LABEL_21:
              if ( (unsigned __int8)sub_3EA440(a1, v35, v3) )
                return 1;
              if ( (_DWORD)v3 != -1 )
              {
                v18 = *(_QWORD *)(a1 + 832);
                v19 = *(_DWORD *)(v18 + 84);
                v20 = *(int *)(v18 + 64);
                v21 = get_dtype_size();
                sub_1D2710(a1, 0x36u, v21, 0x3BEA45E214ADDC55LL, v20, v3, v19);
                return 1;
              }
              v24 = v35;
LABEL_47:
              sub_3EA260(a1, v24);
              return 1;
            }
            if ( v5 != -1 )
            {
              sub_3E9BF0(a1, ((v38 & 8) != 0) + 32, v5 + *(_DWORD *)(*(_QWORD *)(a1 + 832) + 472LL), 0, 1);
              v15 = *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50);
              v16 = get_dtype_size();
              sub_1D2710(a1, 0x2Au, v16, 1, 0x3BEA45E214ADDC55LL, v15, 0);
              v17 = sub_64590(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
              *(_BYTE *)(a1 + 864) = 1;
              *(_QWORD *)(a1 + 16) = v17;
              goto LABEL_21;
            }
            if ( !under_debugger )
              sub_37EEE0(0xC8D2u, a2);
LABEL_73:
            BUG();
          }
LABEL_15:
          v9 = *(_QWORD *)(a1 + 40);
          v10 = *(_QWORD *)(a1 + 832);
          v39 = 1;
          v41[1] = 0;
          v11 = *(_DWORD *)(v10 + 80);
          v40 = *(_DWORD *)(v10 + 460);
          v41[0] = 0xFFFFFFFF00000000LL;
          HIDWORD(v39) = v11;
          sub_11CFD0((__int64)v41, v10, 1, v11, v9, 0);
          sub_120000((__int64)v42, (unsigned __int8 *)&v39);
          sub_1D2850(a1, 13, (unsigned __int8 *)&v39, (unsigned __int8 *)v41, v42);
          v12 = *(_QWORD *)(a1 + 832);
          v13 = 2;
          if ( *(_DWORD *)(v12 + 84) == 8 )
            v13 = 7;
          sub_3E9BF0(a1, ((v38 & 2) == 0) + 32, *(_DWORD *)(v12 + 460), v13, 1);
          v34 = *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50);
          v14 = get_dtype_size();
          sub_1D2710(a1, 0x2Au, v14, 1, 0x3BEA45E214ADDC55LL, v34, 0);
          *(_QWORD *)(a1 + 16) = sub_64590(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
          *(_BYTE *)(a1 + 864) = 1;
          sub_119360((__int64)v42);
          sub_119360((__int64)v41);
          sub_119360((__int64)&v39);
          goto LABEL_18;
        }
      }
      else if ( (*(_BYTE *)(a1 + 52) & 8) == 0 )
      {
        v35 = a1 + v37;
        is_call_insn();
        goto LABEL_14;
      }
      v23 = *(_QWORD *)(a1 + 832);
      if ( *(_DWORD *)(v23 + 452) != (_DWORD)v3 )
      {
LABEL_29:
        sub_3EA0C0(a1);
        goto LABEL_30;
      }
LABEL_42:
      v30 = *(int *)(v23 + 456);
      v31 = (int)v3;
      v3 = v30;
      v36 = v31;
      v32 = get_dtype_size();
      sub_1D2710(a1, 4u, v32, v36, 0x3BEA45E214ADDC55LL, v30, 0);
      goto LABEL_29;
    }
  }
  return 0;
}

