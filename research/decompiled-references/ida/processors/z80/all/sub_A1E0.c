__int64 __fastcall sub_A1E0(__int64 a1, int a2, __int64 (__fastcall *a3)(const char *, __int64), __int64 a4)
{
  int v4; // eax
  int v5; // edi
  int v6; // r8d
  unsigned __int16 v7; // cx
  __int64 result; // rax

  v4 = sub_A140(a1, "F", a3, a4);
  v5 = v4 & 4;
  v6 = v4 & 0x40;
  v7 = v4 & 0x80;
  switch ( a2 )
  {
    case 0:
      LOWORD(v6) = (unsigned __int16)v6 >> 6;
      result = v6 ^ 1u;
      break;
    case 1:
      result = (v4 & 0x40) != 0;
      break;
    case 2:
      result = (v4 & 1) == 0;
      break;
    case 3:
      goto LABEL_3;
    case 4:
      LOWORD(v5) = (unsigned __int16)v5 >> 2;
      result = v5 ^ 1u;
      break;
    case 5:
      LOBYTE(v4) = (unsigned __int8)(v4 & 4) >> 2;
LABEL_3:
      result = v4 & 1;
      break;
    case 6:
      LOWORD(v4) = v7 >> 7;
      result = v4 ^ 1u;
      break;
    case 7:
      result = (v7 >> 7) & 1;
      break;
    case 8:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

