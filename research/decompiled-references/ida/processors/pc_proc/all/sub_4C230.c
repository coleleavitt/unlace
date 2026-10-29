__int64 __fastcall sub_4C230(__int64 a1)
{
  __int16 v1; // ax
  unsigned int v2; // ebp
  unsigned int v4; // eax
  unsigned __int64 v5; // rax
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v6[1] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 97) & 0xFB) == 1 )
  {
    v1 = *(_WORD *)(a1 + 40);
    if ( v1 == 27
      || v1 == 209
      && !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(
            a1,
            a1 + 56,
            *(_QWORD *)(a1 + 864)) )
    {
      *(_BYTE *)(a1 + 968) = 1;
      *(_QWORD *)(a1 + 944) = 0;
      *(_BYTE *)(a1 + 793) = 1;
      v4 = same_value_jpt();
      *(_BYTE *)(a1 + 968) = 0;
      v2 = v4;
      if ( (_BYTE)v4 )
      {
        if ( *(_BYTE *)(a1 + 97) == 1 )
        {
          if ( (unsigned __int8)sub_74E00(*(_QWORD *)(a1 + 888), a1 + 16, *(unsigned __int16 *)(a1 + 102), v6, 0) )
          {
            *(_WORD *)(*(_QWORD *)(a1 + 376) + 4LL) = v6[0];
            return v2;
          }
        }
        else
        {
          v5 = *(_QWORD *)(a1 + 104);
          if ( v5 <= 0xFFFF )
          {
            *(_WORD *)(*(_QWORD *)(a1 + 376) + 4LL) = v5;
            return v2;
          }
        }
      }
    }
  }
  return 0;
}

