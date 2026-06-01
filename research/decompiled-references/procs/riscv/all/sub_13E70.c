__int64 __fastcall sub_13E70(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int8 v7; // al
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD v12[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  result = 0;
  if ( (*(_BYTE *)(a2 + 16) & 1) == 0 )
  {
    if ( (unsigned int)sub_13600(a1, a2) )
    {
      if ( (*(_BYTE *)(a2 + 28) & 0xF) != 1 )
      {
        v7 = getinf_flag(11, 4, v3, v4, v5, v6, off_31578, 0, a1, v13);
        construct_macro(v12, a2, v7);
        if ( (*(_BYTE *)(a1 + 468) & 4) != 0 )
          sub_124F0(a1, a2);
        if ( (unsigned __int8)getinf_flag(11, 4, v8, v9, v10, v11, v12[0], v12[1], v12[2], v13)
          || (*(_BYTE *)(a1 + 468) & 2) != 0 )
        {
          sub_12600(a1, a2);
        }
      }
      return *(unsigned __int16 *)(a2 + 26);
    }
    else
    {
      return sub_123C0(a1, a2);
    }
  }
  return result;
}
