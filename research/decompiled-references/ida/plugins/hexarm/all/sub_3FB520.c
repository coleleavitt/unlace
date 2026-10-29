__int64 __fastcall sub_3FB520(__int64 a1, int a2, unsigned int a3, double a4)
{
  __int64 v5; // rdx
  unsigned __int8 *v6; // r13
  unsigned __int8 v8; // dl
  __int64 v10; // rdx
  __int64 v11; // rbp
  _DWORD *v12; // rdi
  __int64 v13; // rsi
  __int64 (__fastcall *v14)(__int64, int); // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int16 v17; // ax
  int v18; // edx
  unsigned int v19; // eax

  v5 = 40LL * a2;
  v6 = (unsigned __int8 *)(a1 + v5 + 64);
  switch ( *(_BYTE *)(a1 + v5 + 65) )
  {
    case 1:
      if ( *(char *)(a1 + 54) < 0
        && (v10 = a1 + 40LL * a2, (unsigned __int8)(*(_BYTE *)(v10 + 69) - 16) <= 1u)
        && (*(_QWORD *)(v10 + 64) & 0xFFFF00000000FF00LL) == 0xA2000000000100LL )
      {
        sub_3FB280(a1, a3);
      }
      else
      {
        v11 = a1 + 40LL * a2;
        sub_3F89A0(a1, *(unsigned __int16 *)(v11 + 70));
        v12 = *(_DWORD **)(a1 + 832);
        v13 = *(unsigned __int16 *)(v11 + 70);
        v14 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v12 + 168LL);
        if ( v14 == sub_3EA010 )
        {
          a3 = sub_3EA010((__int64)v12, v13);
        }
        else
        {
          v19 = v14((__int64)v12, v13);
          v12 = *(_DWORD **)(a1 + 832);
          a3 = v19;
        }
        if ( v12[20] == 8 )
          a3 += sub_3EE270(a1, (__int64)v6, a4);
      }
      return a3;
    case 2:
    case 7:
      v8 = 2;
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) == 8 )
        v8 = 7;
      sub_3F8AD0(a1, v6, v8, *(_QWORD *)(a1 + 40LL * a2 + 80), a3);
      return a3;
    case 3:
    case 4:
      sub_3F9D00(a1, v6, a3, !(*(_BYTE *)(a1 + 52) >> 7), 0, a4);
      return a3;
    case 5:
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) != 8 && get_dtype_size() == 8 )
        v15 = *(_QWORD *)(a1 + 40LL * a2 + 72);
      else
        v15 = *(_QWORD *)(a1 + 40LL * a2 + 72);
      v16 = a1 + 40LL * a2;
      if ( !*(_BYTE *)(v16 + 97) )
        v15 <<= *(_QWORD *)(v16 + 88);
      if ( !(unsigned __int8)sub_3F8AD0(a1, v6, *(_BYTE *)(a1 + 40LL * a2 + 69), v15, a3) )
        return (unsigned int)-1;
      v17 = *(_WORD *)(a1 + 48);
      v18 = *(_DWORD *)(a1 + 52);
      if ( v17 > 0x13u )
      {
        if ( v17 > 0x19u )
        {
          if ( v17 != 268 )
            return a3;
        }
        else if ( v17 <= 0x15u )
        {
          return a3;
        }
        goto LABEL_29;
      }
      if ( v17 > 0x11u )
      {
        if ( (v18 & 0x10) == 0 )
          return a3;
        goto LABEL_22;
      }
      if ( (unsigned __int16)(v17 - 10) <= 1u )
      {
LABEL_29:
        if ( (~(_BYTE)v18 & 0x11) == 0 )
LABEL_22:
          sub_3F56D0(a1, 3u, 0, (unsigned int)*(_QWORD *)(a1 + 40LL * a2 + 72) >> 31, 0x3BEA45E214ADDC55LL, 0, 0);
      }
      return a3;
    case 8:
      return sub_3F9740(a1, v6, *(unsigned __int16 *)(a1 + 40LL * a2 + 70), a3, a4);
    case 9:
      return a3;
    default:
      return (unsigned int)-1;
  }
}

