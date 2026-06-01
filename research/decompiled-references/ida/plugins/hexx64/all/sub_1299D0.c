__int64 __fastcall sub_1299D0(__int128 a1, char *a2, int a3, double a4, __m128 a5)
{
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // r12
  int v10; // ebx
  __int64 v11; // r13
  __int64 v12; // [rsp+8h] [rbp-40h] BYREF
  __int64 v13[7]; // [rsp+10h] [rbp-38h] BYREF

  v12 = *((_QWORD *)&a1 + 1);
  v13[1] = __readfsqword(0x28u);
  if ( a3 > 4 )
    return 0;
  if ( (unsigned __int8)sub_11FD80(a2, v13, 1) && v13[0] >= 0 )
    return 1;
  if ( !(_QWORD)a1 )
    return 0;
  if ( !v12 )
    return 0;
  v8 = sub_129440(a1, (__int64)a2, (__int64)&v12, 0, a4, a5);
  v9 = v8;
  if ( !v8 || *a2 != 4 && !sub_1255D0((unsigned __int8 *)a2, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), v8 + 64, 0, a4) )
    return 0;
  v10 = a3 + 1;
  switch ( *(_DWORD *)v9 )
  {
    case 8:
    case 0xB:
    case 0x18:
      *((_QWORD *)&a1 + 1) = v12;
      result = sub_1299D0(a1, (char *)(v9 + 32), v10);
      break;
    case 9:
    case 0x17:
      return 1;
    case 0xF:
    case 0x10:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
      v11 = v12;
      *((_QWORD *)&a1 + 1) = v12;
      result = sub_1299D0(a1, (char *)(v9 + 32), v10);
      if ( (*(_DWORD *)v9 == 20) != (_BYTE)result )
      {
        *((_QWORD *)&a1 + 1) = v11;
        result = sub_1299D0(a1, (char *)(v9 + 48), v10);
      }
      break;
    case 0x11:
      *((_QWORD *)&a1 + 1) = v12;
      result = sub_1299D0(a1, (char *)(v9 + 48), v10);
      break;
    default:
      return 0;
  }
  return result;
}

