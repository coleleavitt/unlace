bool __fastcall sub_C280(__int64 a1, __int64 a2)
{
  char *v2; // rax
  int v3; // edx
  bool result; // al
  __int128 v5; // [rsp+0h] [rbp-178h] BYREF
  __int64 v6; // [rsp+10h] [rbp-168h]
  __int64 v7; // [rsp+18h] [rbp-160h]
  __int64 v8; // [rsp+20h] [rbp-158h]
  char v9; // [rsp+28h] [rbp-150h] BYREF
  _QWORD v10[2]; // [rsp+168h] [rbp-10h] BYREF

  v10[0] = __readfsqword(0x28u);
  v2 = &v9;
  v5 = -1;
  v6 = -1;
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
  v3 = decode_insn(&v5, a2, v10, 0.0);
  result = 0;
  if ( v3 )
    return netnode_altval(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 120LL), v6 + WORD1(v7), 371) != 0;
  return result;
}

