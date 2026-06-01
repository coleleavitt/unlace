unsigned __int64 __fastcall sub_8980(__int64 a1, double a2, double a3, double a4)
{
  __int64 eah; // r13
  unsigned __int64 result; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // rbp
  __int64 v8; // r15
  unsigned __int64 v9; // r12
  __int64 v10; // r13
  unsigned __int16 *v11; // r14
  unsigned __int64 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // [rsp+8h] [rbp-40h]

  eah = get_eah();
  sub_8820(eah, a1);
  result = qword_14410;
  if ( qword_14410 != -1 && *(_QWORD *)(a1 + 16) != -1 && *(_QWORD *)(a1 + 24) != -1 )
  {
    if ( (*(_BYTE *)(a1 + 4) & 2) != 0 )
    {
      if ( (unsigned __int8)sub_5300(*(_WORD *)(a1 + 56)) )
        *(_DWORD *)(a1 + 4) |= 4u;
      result = qword_14410;
    }
    v6 = *(_QWORD *)(a1 + 40);
    v7 = *(_QWORD *)(eah + 16) & (v6 + result);
    if ( (BYTE2(dword_143F8) & 0xFE) == 0xA2 )
    {
      dword_143AC = 0;
      result = netnode_supset(qword_143B0, v6, a1, 40, 83);
    }
    else
    {
      v6 = a1;
      result = set_fixup(v7, a1);
    }
    if ( (*(_BYTE *)(a1 + 4) & 4) == 0 )
    {
      result = *(_QWORD *)(a1 + 16);
      v8 = 0;
      v9 = *(_QWORD *)(eah + 16) & (*(_QWORD *)(a1 + 24) + *(_QWORD *)(a1 + 32));
      v16 = result;
      if ( *(_BYTE *)(a1 + 66) )
      {
        v8 = 1;
        result = getseg(v7);
        v15 = result;
        if ( result )
        {
          result = *(_QWORD *)(eah + 16) & (v7 - get_segm_base(result, v6, v13, v14));
          v9 -= result;
          v16 -= *(_QWORD *)(v15 + 48);
        }
      }
      if ( qword_14400 == -1 )
        sub_52E0("apply_fixup");
      v10 = *(_QWORD *)(a1 + 40) + qword_14400;
      v11 = (unsigned __int16 *)(v10 + qword_143C0);
      switch ( *(_WORD *)a1 )
      {
        case 1:
          v9 += -v8 & 0xFFFFFFFFFFFFFFFELL;
          goto LABEL_13;
        case 2:
          if ( (_DWORD)v8 )
            goto LABEL_37;
          sub_5890((__int64)&qword_143C0, v10, 2);
          *v11 += v16;
          return (unsigned __int16)v16;
        case 3:
          if ( (_DWORD)v8 )
            goto LABEL_37;
          sub_5890((__int64)&qword_143C0, v10 + 2, 2);
          v11[1] += v16;
LABEL_13:
          sub_5890((__int64)&qword_143C0, v10, 2);
          result = *v11;
          v12 = result + v9;
          if ( v12 > 0xFFFF )
          {
            result = (__int16)v12;
            if ( v12 != (__int16)v12 )
              result = sub_5080((__int64)"Fixup overflow at %08a (target offset %08a, value %08a)", a2, a3, a4);
          }
          *v11 = v12;
          return result;
        case 4:
          LODWORD(v9) = (-(int)v8 & 0xFFFFFFFC) + v9;
          goto LABEL_28;
        case 5:
          if ( (_DWORD)v8 )
            goto LABEL_37;
          sub_5890((__int64)&qword_143C0, v10 + 4, 2);
          v11[2] += v16;
LABEL_28:
          result = sub_5890((__int64)&qword_143C0, v10, 4);
          *(_DWORD *)v11 += v9;
          return result;
        case 6:
          if ( (_DWORD)v8 )
LABEL_37:
            sub_52E0("bad_selfrel");
          sub_5890((__int64)&qword_143C0, v10, 1);
          result = *(unsigned __int8 *)v11;
          v9 = result + (v9 >> 8);
          if ( v9 > 0xFF )
            goto LABEL_33;
          goto LABEL_26;
        case 0xD:
          sub_5890((__int64)&qword_143C0, v10, 1);
          result = v9 + *(unsigned __int8 *)v11 - v8;
          LOBYTE(v9) = v9 + *(_BYTE *)v11 - v8;
          if ( result <= 0xFF )
            goto LABEL_26;
          LOBYTE(v9) = result;
          if ( result == (char)result )
            goto LABEL_26;
          LOBYTE(v9) = result;
LABEL_33:
          result = sub_5080((__int64)"Fixup overflow at %08a (target offset %08a, value %08a)", a2, a3, a4);
LABEL_26:
          *(_BYTE *)v11 = v9;
          break;
        default:
          return result;
      }
    }
  }
  return result;
}
