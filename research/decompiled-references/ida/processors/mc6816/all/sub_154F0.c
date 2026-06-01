__int64 __fastcall sub_154F0(__int64 a1, int *a2, _DWORD *a3, __int64 *a4, const void *a5)
{
  __int64 insn; // r12
  __int64 v8; // rax
  __int64 v10; // rax
  _QWORD v11[51]; // [rsp+0h] [rbp-198h] BYREF

  v11[45] = __readfsqword(0x28u);
  qmemcpy(v11, a5, 0x168u);
  if ( a1 == -1 )
    insn = v11[2];
  else
    insn = decode_prev_insn();
  if ( insn != -1 )
  {
    v8 = LOWORD(v11[3]);
    if ( LOWORD(v11[3]) != 2 )
    {
      LOWORD(v8) = LOWORD(v11[3]) - 216;
      switch ( v8 )
      {
        case 0LL:
          *a2 = -2;
          *a3 = 7;
          goto LABEL_7;
        case 2LL:
          *a2 = -2;
          *a3 = 8;
          goto LABEL_7;
        case 3LL:
          *a2 = -2;
          *a3 = 9;
          goto LABEL_7;
        case 4LL:
          *a2 = -2;
          *a3 = 10;
          goto LABEL_7;
        case 5LL:
          *a2 = 7;
          *a3 = -2;
          goto LABEL_7;
        case 7LL:
          *a2 = 8;
          *a3 = -2;
          goto LABEL_7;
        case 8LL:
          *a2 = 9;
          *a3 = -2;
          goto LABEL_7;
        case 9LL:
          *a2 = 10;
          *a3 = -2;
          goto LABEL_7;
        default:
          return -1;
      }
    }
    if ( BYTE1(v11[5]) == 5 )
    {
      v10 = v11[6];
      *a2 = -1;
      *a3 = -2;
      *a4 = v10;
LABEL_7:
      if ( *a2 >= 0 )
        *a4 = get_sreg();
    }
    else
    {
      return -1;
    }
  }
  return insn;
}

