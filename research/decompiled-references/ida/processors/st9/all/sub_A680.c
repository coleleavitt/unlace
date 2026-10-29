__int64 __fastcall sub_A680(__int64 a1, __int64 a2)
{
  char *v2; // rax
  char *v4; // rax
  char v5; // [rsp+58h] [rbp-300h] BYREF
  char v6; // [rsp+198h] [rbp-1C0h] BYREF
  __int128 v7; // [rsp+1A0h] [rbp-1B8h]
  __int64 v8; // [rsp+1B0h] [rbp-1A8h]
  __int64 v9; // [rsp+1B8h] [rbp-1A0h]
  __int64 v10; // [rsp+1C0h] [rbp-198h]
  char v11; // [rsp+1C8h] [rbp-190h] BYREF
  char v12; // [rsp+308h] [rbp-50h] BYREF
  unsigned __int64 v13; // [rsp+318h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 16) & 2) == 0 )
  {
    v8 = -1;
    v4 = &v11;
    v7 = -1;
    v9 = 0;
    v10 = 0;
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
    while ( &v12 != v4 );
    if ( decode_prev_insn() != -1 && (_WORD)v9 == 71 )
    {
      *(_QWORD *)(a2 + 16) |= 2uLL;
      update_func();
    }
  }
  v2 = &v5;
  do
  {
    *(_WORD *)v2 = 0;
    v2 += 40;
    *((_WORD *)v2 - 19) = 0;
    *((_WORD *)v2 - 18) = 0;
    *((_DWORD *)v2 - 2) = 0;
    *((_WORD *)v2 - 17) = 0;
    *((_OWORD *)v2 - 2) = 0;
    *((_QWORD *)v2 - 2) = 0;
  }
  while ( &v6 != v2 );
  decode_insn();
  return 0;
}

