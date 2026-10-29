__int16 __fastcall sub_1F000(__int64 a1, _BYTE *a2, __int64 a3, __int16 *a4)
{
  bool v6; // zf
  unsigned __int16 word; // ax
  __int16 result; // ax
  unsigned __int16 v9; // r8
  unsigned int dword; // eax
  __int16 *v11; // rdx
  unsigned __int16 *v12; // rdx
  __int16 v13; // [rsp+2h] [rbp-36h] BYREF
  unsigned int v14; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  *a2 = 0;
  v6 = *(_DWORD *)(a1 + 260) == 2;
  v13 = 0;
  if ( v6 )
  {
    v11 = (__int16 *)sub_4BD40(a1, 0, &v13, a3);
    result = 0;
    if ( v11 )
      result = *v11;
  }
  else if ( get_sreg(a3, 67) )
  {
    if ( *(_DWORD *)(a1 + 260) )
    {
      v12 = (unsigned __int16 *)sub_410D0(a1, &v14, &v13, a3);
      result = 0;
      if ( v12 )
        result = sub_41030(a1, 0, v14, *v12);
    }
    else
    {
      *a2 = 1;
      word = get_word(a3);
      result = sub_1ED90(a1, word);
      v13 = ((0x40000008uLL >> (v9 >> 11)) & 1) == 0 ? 2 : 4;
    }
  }
  else
  {
    dword = get_dword(a3);
    result = sub_1D1A0(a1, dword, nullptr, nullptr);
    v13 = 4;
  }
  if ( a4 )
    *a4 = v13;
  return result;
}
