__int64 __fastcall sub_5D750(int *a1, _BYTE *a2, __int64 a3, _QWORD *a4, __int64 a5, unsigned __int8 a6)
{
  int v8; // edx
  unsigned int v11; // edx
  _QWORD v12[2]; // [rsp+0h] [rbp-38h] BYREF
  __int16 v13; // [rsp+10h] [rbp-28h]
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v8 = *a1;
  v14 = __readfsqword(0x28u);
  switch ( v8 )
  {
    case 2:
      v11 = a1[4];
      if ( !v11 || !*((_QWORD *)a1 + 1) )
        return 0;
      v12[0] = *((_QWORD *)a1 + 1);
      v13 = 1;
      v12[1] = v11;
      create_tinfo(a2, 61, 189, v12);
      break;
    case 3:
      if ( !(unsigned __int8)sub_5D4A0(a4, a2, (const __m128i *)(a1 + 2)) )
        return 0;
      break;
    case 1:
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _BYTE *, __int64))(**((_QWORD **)a1 + 1) + 16LL))(
             *((_QWORD *)a1 + 1),
             a2,
             a3) )
      {
        break;
      }
      return 0;
    default:
      if ( !under_debugger )
        interr(769);
      BUG();
  }
  if ( (unsigned __int8)*(_QWORD *)a2 )
    *(_QWORD *)a2 |= a6 & 0xC0;
  return 1;
}

