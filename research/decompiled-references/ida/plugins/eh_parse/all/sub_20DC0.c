__int64 __fastcall sub_20DC0(__int64 a1, __int64 a2)
{
  char *v2; // rax
  __int64 v4; // [rsp+0h] [rbp-180h] BYREF
  __int128 v5; // [rsp+8h] [rbp-178h] BYREF
  __int64 v6; // [rsp+18h] [rbp-168h]
  __int64 v7; // [rsp+20h] [rbp-160h]
  __int64 v8; // [rsp+28h] [rbp-158h]
  char v9; // [rsp+30h] [rbp-150h] BYREF
  _QWORD v10[2]; // [rsp+170h] [rbp-10h] BYREF

  v10[0] = __readfsqword(0x28u);
  v5 = -1;
  v6 = -1;
  v2 = &v9;
  v7 = 0;
  v8 = 0;
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
  while ( v10 != (_QWORD *)v2 );
  if ( (int)decode_insn(&v5, a2, v10, 0.0) > 0 && sub_7FF0(0x54u, &v4, &v5, 0) == 1 )
    return v4;
  else
    return -1;
}

