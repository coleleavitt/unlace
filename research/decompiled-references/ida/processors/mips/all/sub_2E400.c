__int64 __fastcall sub_2E400(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  char *v3; // rax
  int v4; // edx
  __int64 result; // rax
  __int16 word; // dx
  __int128 v7; // [rsp+0h] [rbp-188h] BYREF
  __int64 v8; // [rsp+10h] [rbp-178h]
  __int64 v9; // [rsp+18h] [rbp-170h]
  __int64 v10; // [rsp+20h] [rbp-168h]
  char v11; // [rsp+28h] [rbp-160h] BYREF
  __int16 v12; // [rsp+2Eh] [rbp-15Ah]
  __int16 v13; // [rsp+56h] [rbp-132h]
  _QWORD v14[4]; // [rsp+168h] [rbp-20h] BYREF

  v14[0] = __readfsqword(0x28u);
  if ( !get_sreg(a2, 67) || (v2 = *(unsigned int *)(a1 + 260), (_DWORD)v2) || (word = get_word(a2), result = 2, word) )
  {
    v8 = -1;
    v3 = &v11;
    v9 = 0;
    v10 = 0;
    v7 = -1;
    do
    {
      *(_WORD *)v3 = 0;
      v3 += 40;
      *((_WORD *)v3 - 19) = 0;
      *((_WORD *)v3 - 18) = 0;
      *((_DWORD *)v3 - 2) = 0;
      *((_WORD *)v3 - 17) = 0;
      *((_OWORD *)v3 - 2) = 0;
      *((_QWORD *)v3 - 2) = 0;
    }
    while ( v14 != (_QWORD *)v3 );
    v4 = decode_insn(&v7, a2, v14, 0, 0, v2, 0.0);
    result = 0;
    if ( v4 > 0 && ((_WORD)v9 == 194 || (_WORD)v9 == 195 && v12 == v13) )
      return WORD1(v9);
  }
  return result;
}

