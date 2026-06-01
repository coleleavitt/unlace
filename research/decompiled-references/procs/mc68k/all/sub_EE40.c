__int64 __fastcall sub_EE40(__int64 a1, __int64 a2)
{
  char *v2; // rax
  __int128 v4; // [rsp+0h] [rbp-178h] BYREF
  __int64 v5; // [rsp+10h] [rbp-168h]
  __int64 v6; // [rsp+18h] [rbp-160h]
  __int64 v7; // [rsp+20h] [rbp-158h]
  char v8; // [rsp+28h] [rbp-150h] BYREF
  _QWORD v9[2]; // [rsp+168h] [rbp-10h] BYREF

  v9[0] = __readfsqword(0x28u);
  v4 = -1;
  v2 = &v8;
  v5 = -1;
  v6 = 0;
  v7 = 0;
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
  while ( v9 != (_QWORD *)v2 );
  if ( a2 != -1 && (int)decode_insn(&v4, a2, v9, 0.0) > 0 && ((unsigned __int8)is_call_insn(&v4) || (_WORD)v6 == 41) )
    return v5 + WORD1(v6);
  else
    return -1;
}
