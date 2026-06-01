__int64 __fastcall sub_243C0(__int64 a1)
{
  unsigned __int64 *v1; // rax
  __int128 v3; // [rsp+0h] [rbp-188h] BYREF
  __int64 v4; // [rsp+10h] [rbp-178h]
  __int64 v5; // [rsp+18h] [rbp-170h]
  __int64 v6; // [rsp+20h] [rbp-168h]
  _BYTE v7[320]; // [rsp+28h] [rbp-160h] BYREF
  unsigned __int64 v8; // [rsp+168h] [rbp-20h] BYREF

  v8 = __readfsqword(0x28u);
  v1 = (unsigned __int64 *)v7;
  v3 = -1;
  v4 = -1;
  v5 = 0;
  v6 = 0;
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
  while ( &v8 != v1 );
  if ( (int)decode_insn() > 0 && (_WORD)v5 == 143 && v7[1] == 5 && (unsigned int)decode_insn() && (_BYTE)v6 == 33 )
    return ((__int64 (__fastcall *)(__int64, __int128 *, double))sub_75CD0)(a1, &v3, 0.0);
  else
    return 0;
}
