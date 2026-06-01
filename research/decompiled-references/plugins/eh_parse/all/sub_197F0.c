__int64 __fastcall sub_197F0(__int64 a1, __int64 a2, double a3, double a4)
{
  __int64 v4; // r14
  unsigned __int64 v6; // r12
  __int64 v7; // rdi
  unsigned int v8; // ebp
  __int64 result; // rax
  unsigned int dword; // eax
  __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 (*v13)(); // rax
  _QWORD v14[9]; // [rsp+0h] [rbp-48h] BYREF

  v14[3] = __readfsqword(0x28u);
  if ( a2 != -1 )
  {
    if ( (v4 = *(_QWORD *)(a1 + 8), v6 = 0, (unsigned __int8)sub_17230(v4, a2, 1u))
      && (dword = get_dword(a2), v6 = dword, dword > 1)
      || (unsigned __int8)get_fixups(0, a2, 4) )
    {
      v7 = *(_QWORD *)(a1 + 8);
      if ( (*(_BYTE *)(v7 + 124) & 2) != 0 )
        v6 += *(_QWORD *)(a1 + 24);
      v8 = sub_17230(v7, v6, 1u);
      if ( (_BYTE)v8 )
      {
        if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v4 + 8) + 4LL) - 12) <= 1 )
        {
          if ( v6 != -1 )
          {
            if ( !(unsigned __int8)getinf_flag(3, 4) )
              v6 = (unsigned int)v6 & 0xFFFFFFFE;
            goto LABEL_9;
          }
        }
        else if ( v6 != -1 )
        {
LABEL_9:
          switch ( *(_DWORD *)(a1 + 48) )
          {
            case 1:
              result = sub_192B0(a1, a2, v6, a3, a4);
              break;
            case 2:
            case 5:
              v11 = *(__int64 **)(*(_QWORD *)(a1 + 8) + 624LL);
              v12 = *v11;
              v14[0] = v6;
              v14[1] = 0;
              v13 = *(__int64 (**)())(v12 + 32);
              if ( v13 != sub_15DB0 )
                ((void (__fastcall *)(__int64 *, __int64, _QWORD *, __int64, __int64))v13)(v11, a2, v14, a1, 1);
              if ( !*(_DWORD *)(a1 + 76) )
              {
                if ( !*(_BYTE *)(a1 + 82) || (get_aflags(*(_QWORD *)(a1 + 56)) & 0x20000000) != 0 )
                {
                  if ( !get_fchunk(*(_QWORD *)(a1 + 56)) )
                    auto_apply_tail(*(_QWORD *)(a1 + 56), -1);
                }
                else
                {
                  sub_16AF0(*(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64));
                }
              }
              sub_13520(*(_QWORD *)(a1 + 8), a2, 17, 8, 0);
              return v8;
            case 3:
              result = sub_172D0(a1, a2, v6);
              break;
            case 4:
              result = sub_17530(a1, a2, v6);
              break;
            default:
              return 0;
          }
          return result;
        }
      }
    }
  }
  return 0;
}
