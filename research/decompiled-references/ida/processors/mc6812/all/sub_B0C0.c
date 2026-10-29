__int64 __fastcall sub_B0C0(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rax
  unsigned __int64 v4; // rax
  __int128 v5; // [rsp+0h] [rbp-188h] BYREF
  unsigned __int64 v6; // [rsp+10h] [rbp-178h]
  __int64 v7; // [rsp+18h] [rbp-170h]
  __int64 v8; // [rsp+20h] [rbp-168h]
  char v9; // [rsp+28h] [rbp-160h] BYREF
  __int64 v10; // [rsp+60h] [rbp-128h]
  unsigned __int64 v11; // [rsp+168h] [rbp-20h] BYREF

  v11 = __readfsqword(0x28u);
  v2 = (unsigned __int64 *)&v9;
  v5 = -1;
  v6 = -1;
  v7 = 0;
  v8 = 0;
  do
  {
    *(_WORD *)v2 = 0;
    v2 += 5;
    *((_WORD *)v2 - 19) = 0;
    *((_WORD *)v2 - 18) = 0;
    *((_DWORD *)v2 - 2) = 0;
    *((_WORD *)v2 - 17) = 0;
    *((_OWORD *)v2 - 2) = 0;
    *(v2 - 2) = 0;
  }
  while ( &v11 != v2 );
  if ( a2 == -1 || (int)decode_insn() <= 0 )
    return -1;
  if ( (unsigned __int8)is_call_insn() )
    return v6 + WORD1(v7);
  if ( (_WORD)v7 != 191 )
  {
    if ( (unsigned __int16)v7 > 0xBFu )
    {
      if ( (_WORD)v7 != 193 )
        return -1;
    }
    else if ( (unsigned __int16)v7 > 0x40u )
    {
      if ( (unsigned __int16)(v7 - 85) > 1u )
        return -1;
    }
    else if ( (unsigned __int16)v7 <= 0x3Eu )
    {
      return -1;
    }
  }
  v4 = sub_9AA0(a1, (__int64)&v5, v10);
  if ( v6 < v4 )
    return -1;
  return v6 + WORD1(v7);
}

