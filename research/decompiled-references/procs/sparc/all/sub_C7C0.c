__int64 __fastcall sub_C7C0(__int64 a1)
{
  unsigned __int64 *v1; // rax
  int v2; // eax
  unsigned int v3; // edx
  __int128 v5; // [rsp+0h] [rbp-178h] BYREF
  __int64 v6; // [rsp+10h] [rbp-168h]
  __int64 v7; // [rsp+18h] [rbp-160h]
  __int64 v8; // [rsp+20h] [rbp-158h]
  char v9; // [rsp+28h] [rbp-150h] BYREF
  __int16 v10; // [rsp+2Eh] [rbp-14Ah]
  __int64 v11; // [rsp+50h] [rbp-128h]
  __int64 v12; // [rsp+78h] [rbp-100h]
  unsigned __int64 v13; // [rsp+168h] [rbp-10h] BYREF

  v13 = __readfsqword(0x28u);
  v1 = (unsigned __int64 *)&v9;
  v5 = -1;
  v6 = -1;
  v7 = 0;
  v8 = 0;
  do
  {
    *(_WORD *)v1 = 0;
    v1 += 5;
    *((_WORD *)v1 - 19) = 0;
    *((_WORD *)v1 - 18) = 0;
    *((_DWORD *)v1 - 2) = 0;
    *((_WORD *)v1 - 17) = 0;
    *((_OWORD *)v1 - 2) = 0;
    *(v1 - 2) = 0;
  }
  while ( &v13 != v1 );
  v2 = decode_insn(&v5, a1);
  v3 = 0;
  if ( v2 > 0 )
  {
    if ( (_WORD)v7 == 87 )
      return WORD1(v7);
    if ( (unsigned __int16)v7 <= 0x57u )
    {
      if ( (_WORD)v7 != 52 && ((_WORD)v7 != 83 || ((v12 ^ v11) & 0xFFFF00000000FF00LL) != 0) )
        return v3;
      return WORD1(v7);
    }
    if ( (_WORD)v7 == 186 && v10 == HIWORD(v11) )
      return WORD1(v7);
  }
  return v3;
}
