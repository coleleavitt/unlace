unsigned __int64 __fastcall sub_30FF0(__int64 a1)
{
  __int64 v1; // rbx
  bool v2; // al
  __int64 v3; // rax
  __int64 v5; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 143) & 4) == 0 && *(_QWORD *)(a1 + 152) )
  {
    v1 = 0;
    while ( 1 )
    {
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v1);
      if ( *(_BYTE *)(v3 + 142) != 5 )
      {
        if ( (unsigned __int8)sub_2C6A0(*(_QWORD *)(a1 + 80), *(_QWORD *)(v3 + 104), 0x32u, &v5) )
        {
          if ( (unsigned __int8)(v5 - 2) <= 1u )
            break;
          v2 = (_BYTE)v5 == 0;
        }
        else
        {
          v2 = 1;
        }
        if ( *(_WORD *)(a1 + 140) == 2 && v2 )
          break;
      }
      if ( (unsigned __int64)++v1 >= *(_QWORD *)(a1 + 152) )
        return v6 - __readfsqword(0x28u);
    }
    *(_BYTE *)(a1 + 143) |= 4u;
  }
  return v6 - __readfsqword(0x28u);
}

