__int64 __fastcall sub_3FAA90(__int64 a1, __int64 a2, double a3)
{
  bool v3; // r12
  unsigned int v4; // ebp
  __int64 result; // rax

  v3 = !(a2 & 1);
  v4 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 624LL);
  switch ( a2 )
  {
    case 0LL:
    case 1LL:
      result = 1;
      goto LABEL_3;
    case 2LL:
    case 3LL:
      result = 0;
      if ( (a2 & 1) == 0 )
        goto LABEL_6;
      return result;
    case 4LL:
    case 5LL:
      result = 2;
      goto LABEL_3;
    case 6LL:
    case 7LL:
      result = 3;
      goto LABEL_3;
    case 8LL:
    case 9LL:
      sub_3F6E70(a1, 6u, 0, 1, 0x3BEA45E214ADDC55LL, (int)v4, a3, 0, 1);
      sub_3F6E70(a1, 0x14u, 0, (int)v4, 0, (int)v4, a3, 0, 1);
      result = v4;
      goto LABEL_3;
    case 10LL:
    case 11LL:
      sub_3F6E70(a1, 0x15u, 0, 2, 3, (int)v4, a3, 0, 1);
      goto LABEL_10;
    case 12LL:
    case 13LL:
      sub_3F6E70(a1, 0x15u, 0, 2, 3, (int)v4, a3, 0, 1);
      sub_3F6E70(a1, 0x13u, 0, (int)v4, 1, (int)v4, a3, 0, 1);
LABEL_10:
      v3 = a2 & 1;
      result = v4;
LABEL_3:
      if ( v3 )
      {
LABEL_6:
        sub_3F6E70(a1, 6u, 0, (int)result, 0x3BEA45E214ADDC55LL, (int)v4, a3, 0, 1);
        return v4;
      }
      return result;
    default:
      if ( !under_debugger )
        sub_3835A0(0xCB92u, a3);
      BUG();
  }
}

