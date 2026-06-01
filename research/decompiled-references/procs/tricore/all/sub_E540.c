__int64 __fastcall sub_E540(__int64 a1)
{
  char *v1; // rax
  __int128 v3; // [rsp+0h] [rbp-178h] BYREF
  __int64 v4; // [rsp+10h] [rbp-168h]
  __int64 v5; // [rsp+18h] [rbp-160h]
  __int64 v6; // [rsp+20h] [rbp-158h]
  char v7; // [rsp+28h] [rbp-150h] BYREF
  _QWORD v8[2]; // [rsp+168h] [rbp-10h] BYREF

  v8[0] = __readfsqword(0x28u);
  v1 = &v7;
  v3 = -1;
  v4 = -1;
  v5 = 0;
  v6 = 0;
  do
  {
    *(_WORD *)v1 = 0;
    v1 += 40;
    *((_WORD *)v1 - 19) = 0;
    *((_WORD *)v1 - 18) = 0;
    *((_DWORD *)v1 - 2) = 0;
    *((_WORD *)v1 - 17) = 0;
    *((_OWORD *)v1 - 2) = 0;
    *((_QWORD *)v1 - 2) = 0;
  }
  while ( v8 != (_QWORD *)v1 );
  if ( a1 != -1 && (int)decode_insn(&v3, a1, v8, 0.0) > 0 && ((unsigned __int8)is_call_insn(&v3) || (_WORD)v5 == 89) )
    return v4 + WORD1(v5);
  else
    return -1;
}
