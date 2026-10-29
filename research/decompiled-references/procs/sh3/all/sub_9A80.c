__int64 __fastcall sub_9A80(__int64 a1)
{
  __int16 word; // dx
  __int64 v2; // r9
  __int64 result; // rax
  char *v4; // rax
  __int128 v5; // [rsp+0h] [rbp-178h] BYREF
  __int64 v6; // [rsp+10h] [rbp-168h]
  __int64 v7; // [rsp+18h] [rbp-160h]
  __int64 v8; // [rsp+20h] [rbp-158h]
  char v9; // [rsp+28h] [rbp-150h] BYREF
  __int16 v10; // [rsp+2Eh] [rbp-14Ah]
  __int16 v11; // [rsp+56h] [rbp-122h]
  _QWORD v12[2]; // [rsp+168h] [rbp-10h] BYREF

  v12[0] = __readfsqword(0x28u);
  word = get_word(a1);
  result = 2;
  if ( word )
  {
    v6 = -1;
    v4 = &v9;
    v7 = 0;
    v8 = 0;
    v5 = -1;
    do
    {
      *(_WORD *)v4 = 0;
      v4 += 40;
      *((_WORD *)v4 - 19) = 0;
      *((_WORD *)v4 - 18) = 0;
      *((_DWORD *)v4 - 2) = 0;
      *((_WORD *)v4 - 17) = 0;
      *((_OWORD *)v4 - 2) = 0;
      *((_QWORD *)v4 - 2) = 0;
    }
    while ( v12 != (_QWORD *)v4 );
    ((void (__fastcall *)(__int128 *, __int64, _QWORD *, _QWORD, _QWORD, __int64, double))decode_insn)(
      &v5,
      a1,
      v12,
      0,
      0,
      v2,
      0.0);
    if ( (_WORD)v7 != 44 )
    {
      if ( (_WORD)v7 != 64 )
        return 0;
      return WORD1(v7);
    }
    result = 0;
    if ( v10 == v11 )
      return WORD1(v7);
  }
  return result;
}
