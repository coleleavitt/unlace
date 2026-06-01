__int64 __fastcall sub_5C240(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // rax
  __int64 v6; // [rsp-1C0h] [rbp-1C8h] BYREF
  __int128 v7; // [rsp-1B8h] [rbp-1C0h]
  __int128 v8; // [rsp-1A0h] [rbp-1A8h] BYREF
  __int64 v9; // [rsp-190h] [rbp-198h]
  __int64 v10; // [rsp-188h] [rbp-190h]
  __int64 v11; // [rsp-180h] [rbp-188h]
  _BYTE v12[320]; // [rsp-178h] [rbp-180h] BYREF
  unsigned __int64 v13; // [rsp-38h] [rbp-40h] BYREF

  v3 = (unsigned __int64 *)v12;
  v13 = __readfsqword(0x28u);
  v8 = -1;
  v9 = -1;
  v10 = 0;
  v11 = 0;
  do
  {
    *(_WORD *)v3 = 0;
    v3 += 5;
    *((_WORD *)v3 - 19) = 0;
    *((_WORD *)v3 - 18) = 0;
    *((_DWORD *)v3 - 2) = 0;
    *((_WORD *)v3 - 17) = 0;
    *((_OWORD *)v3 - 2) = 0;
    *(v3 - 2) = 0;
  }
  while ( v3 != &v13 );
  if ( !(unsigned int)decode_insn() || (_WORD)v10 != 143 || (unsigned __int8)netnode_charval() )
    return 1;
  v7 = 0;
  v6 = 0;
  sub_5B980(a1, (__int64)&v8, (__int64)v12, a3 + 64, *(_QWORD *)(a3 + 16), (__int64)&v6, nullptr);
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  return 0;
}

