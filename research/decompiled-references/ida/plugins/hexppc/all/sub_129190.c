__int64 __fastcall sub_129190(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int16 v4; // ax
  int v5; // ecx
  _QWORD v6[2]; // [rsp+0h] [rbp-38h] BYREF
  char v7; // [rsp+10h] [rbp-28h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  switch ( *(_DWORD *)a1 )
  {
    case 2:
      v5 = *(_DWORD *)(a1 + 68);
      if ( a3 == *(_BYTE *)(*(_QWORD *)(a2 + 96) + 145LL) )
        v5 = -v5;
      sub_128D20(a1 + 48, a2, *(_QWORD *)(a1 + 24), v5);
      goto LABEL_5;
    case 4:
    case 7:
      v4 = 257;
      goto LABEL_4;
    case 0xA:
      if ( !a3 || *(_DWORD *)(a1 + 36) != 2 * *(_DWORD *)(a1 + 68) )
        goto LABEL_2;
      *(_DWORD *)a1 = 11;
      goto LABEL_5;
    case 0xB:
      if ( a3 || *(_DWORD *)(a1 + 36) != 2 * *(_DWORD *)(a1 + 68) )
        goto LABEL_2;
      *(_DWORD *)a1 = 10;
      goto LABEL_5;
    case 0x13:
    case 0x14:
    case 0x15:
      v4 = 273;
LABEL_4:
      v7 = a3;
      v6[0] = off_4CAA68;
      v6[1] = a2;
      if ( !(unsigned __int8)sub_11E370(a1, (__int64)v6, v4) )
        goto LABEL_2;
LABEL_5:
      sub_158230(a1, a2, 0, 0, 0, 0, 0);
      result = 1;
      break;
    default:
LABEL_2:
      result = 0;
      break;
  }
  return result;
}

