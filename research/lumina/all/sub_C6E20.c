void __fastcall sub_C6E20(char *a1, int a2, __int64 a3)
{
  __int64 v3; // rax
  int v4; // eax
  int v5; // ecx
  __int16 v6; // cx
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  unsigned __int64 v10; // rax
  __int16 v11; // cx

  switch ( a2 )
  {
    case 0:
    case 11:
      *(_WORD *)(a3 + 20) = 1;
      break;
    case 1:
      v3 = *a1;
      *(_WORD *)(a3 + 20) = 4;
      *(_QWORD *)a3 = v3;
      break;
    case 2:
      v4 = *a1;
      v5 = (unsigned __int8)a1[1];
      *(_WORD *)(a3 + 20) = 4;
      *(_QWORD *)a3 = v5 | (v4 << 8);
      break;
    case 3:
      v6 = *(_WORD *)(a1 + 1);
      v7 = *a1;
      *(_WORD *)(a3 + 20) = 4;
      *(_QWORD *)a3 = (unsigned __int16)__ROL2__(v6, 8) | (v7 << 16);
      break;
    case 4:
      v8 = (unsigned __int8)a1[3] | ((unsigned __int8)a1[2] << 8) | ((unsigned __int8)a1[1] << 16);
      v9 = *a1;
      *(_WORD *)(a3 + 20) = 4;
      *(_QWORD *)a3 = (v9 << 24) | v8;
      break;
    case 5:
      *(_QWORD *)a3 = _byteswap_ulong(*(_DWORD *)(a1 + 2))
                    + ((unsigned __int64)((unsigned __int8)a1[1] | (unsigned int)(*a1 << 8)) << 32);
      *(_WORD *)(a3 + 20) = 4;
      break;
    case 6:
    case 7:
      v10 = _byteswap_ulong(*((_DWORD *)a1 + 1)) + ((unsigned __int64)_byteswap_ulong(*(_DWORD *)a1) << 32);
      *(_QWORD *)a3 = v10;
      if ( a2 == 6 )
        goto LABEL_3;
      v11 = 8;
      if ( (v10 & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
        v11 = (v10 & 0xFFFFFFFFFFFFFLL) == 0 ? 8 : 1;
      *(_WORD *)(a3 + 20) = v11;
      break;
    case 8:
    case 9:
      *(_QWORD *)a3 = (unsigned int)(a2 - 8);
LABEL_3:
      *(_WORD *)(a3 + 20) = 4;
      break;
    case 10:
      *(_DWORD *)(a3 + 16) = 0;
      *(_DWORD *)a3 = 0;
      *(_WORD *)(a3 + 20) = 1025;
      break;
    default:
      *(_QWORD *)(a3 + 8) = a1;
      *(_DWORD *)(a3 + 16) = (unsigned int)(a2 - 12) >> 1;
      *(_WORD *)(a3 + 20) = word_1BAAF2[a2 & 1];
      break;
  }
}
