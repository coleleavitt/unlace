__int64 __fastcall sub_1A490(__int64 a1, unsigned __int16 a2, char a3)
{
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  unsigned int v7; // ebx
  _BYTE v9[2]; // [rsp+Ch] [rbp-3Ch] BYREF
  unsigned __int16 v10; // [rsp+Eh] [rbp-3Ah]
  unsigned __int16 v11; // [rsp+10h] [rbp-38h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( !*(_WORD *)(a1 + 33023) || sub_1A1E0(a1, a2, a3, *(unsigned __int16 *)(a1 + 33021), 1) )
  {
    v5 = *(unsigned __int16 *)(a1 + 33083);
    if ( (_WORD)v5 )
    {
      while ( 1 )
      {
        if ( netnode_supval(*(_QWORD *)(a1 + 33336), v5, v9, 12, 83) != 12 || v9[0] != 7 || (v7 = v10) == 0 )
          sub_E6C0(0);
        if ( !sub_1A1E0(a1, a2, a3, v11, 0) )
          break;
        v6 = (unsigned __int64)netnode_altval(*(_QWORD *)(a1 + 33328), (unsigned __int16)v7, 65) >> 16;
        v5 = (unsigned __int16)v6;
        if ( !(_WORD)v6 )
          return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return v7;
}
