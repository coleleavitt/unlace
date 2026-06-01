__int64 __fastcall sub_7A40(__int64 a1)
{
  unsigned __int64 *v1; // rax
  __int128 v3; // [rsp+0h] [rbp-178h] BYREF
  __int64 v4; // [rsp+10h] [rbp-168h]
  __int64 v5; // [rsp+18h] [rbp-160h]
  __int64 v6; // [rsp+20h] [rbp-158h]
  char v7; // [rsp+28h] [rbp-150h] BYREF
  unsigned __int64 v8; // [rsp+168h] [rbp-10h] BYREF

  v8 = __readfsqword(0x28u);
  v1 = (unsigned __int64 *)&v7;
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
  if ( a1 != -1
    && (int)decode_insn(&v3, a1) > 0
    && ((unsigned __int8)is_call_insn(&v3) || (_WORD)v5 == 232 || (unsigned __int16)(v5 - 240) <= 3u || (_WORD)v5 == 29)
    && (get_flags_ex(v4 + WORD1(v5), 4) & 0x10000) != 0 )
  {
    return v4 + WORD1(v5);
  }
  else
  {
    return -1;
  }
}
