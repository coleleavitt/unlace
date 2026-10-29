__int64 __fastcall sub_113C0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v3; // al
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned __int64 *v7; // rax
  __int128 v8; // [rsp+0h] [rbp-178h] BYREF
  __int64 v9; // [rsp+10h] [rbp-168h]
  __int64 v10; // [rsp+18h] [rbp-160h]
  __int64 v11; // [rsp+20h] [rbp-158h]
  _BYTE v12[6]; // [rsp+28h] [rbp-150h] BYREF
  __int16 v13; // [rsp+2Eh] [rbp-14Ah]
  __int64 v14; // [rsp+50h] [rbp-128h]
  __int64 v15; // [rsp+60h] [rbp-118h]
  unsigned __int64 v16; // [rsp+168h] [rbp-10h] BYREF

  v16 = __readfsqword(0x28u);
  switch ( *(_WORD *)(a2 + 24) )
  {
    case '+':
    case '-':
    case 'O':
      if ( (unsigned __int8)sub_21EF0() )
        goto LABEL_19;
      goto LABEL_3;
    case 'F':
    case 'G':
      if ( *(_BYTE *)(a2 + 41) == 5 && *(_BYTE *)(a2 + 81) == 1 && *(_WORD *)(a2 + 86) == 3 )
      {
        v3 = *(_BYTE *)(a2 + 121);
        if ( !v3 || v3 == 1 && *(_WORD *)(a2 + 126) == 3 )
        {
          v4 = *(_QWORD *)(a2 + 48);
          if ( v4 < 0 )
          {
            v5 = *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26);
            v9 = -1;
            v6 = v5;
            v8 = -1;
            v7 = (unsigned __int64 *)v12;
            v10 = 0;
            v11 = 0;
            do
            {
              *(_WORD *)v7 = 0;
              v7 += 5;
              *((_WORD *)v7 - 19) = 0;
              *((_WORD *)v7 - 18) = 0;
              *((_DWORD *)v7 - 2) = 0;
              *((_WORD *)v7 - 17) = 0;
              *((_OWORD *)v7 - 2) = 0;
              *(v7 - 2) = 0;
            }
            while ( &v16 != v7 );
            if ( (int)decode_insn(&v8, v6, 0.0) > 0
              && (_WORD)v10 == 12
              && v12[1] == 1
              && v13 == 31
              && (v14 & 0xFFFF00000000FF00LL) == 0x3000000000400LL
              && v15 + v4 == -4 )
            {
              goto LABEL_19;
            }
          }
        }
      }
      goto LABEL_3;
    case 'T':
    case 'U':
LABEL_19:
      result = 100;
      break;
    default:
LABEL_3:
      result = 0;
      break;
  }
  return result;
}
