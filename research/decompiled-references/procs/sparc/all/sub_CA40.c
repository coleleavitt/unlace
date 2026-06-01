__int64 __fastcall sub_CA40(_QWORD *a1)
{
  unsigned __int64 *v2; // rax
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int128 v6; // [rsp+0h] [rbp-188h] BYREF
  __int64 v7; // [rsp+10h] [rbp-178h]
  __int64 v8; // [rsp+18h] [rbp-170h]
  __int64 v9; // [rsp+20h] [rbp-168h]
  char v10; // [rsp+28h] [rbp-160h] BYREF
  unsigned __int64 v11; // [rsp+168h] [rbp-20h] BYREF

  v11 = __readfsqword(0x28u);
  if ( a1[3] != -1 )
    return 0;
  v7 = -1;
  v2 = (unsigned __int64 *)&v10;
  v6 = -1;
  v8 = 0;
  v9 = 0;
  do
  {
    *(_WORD *)v2 = 0;
    v2 += 5;
    *((_WORD *)v2 - 19) = 0;
    *((_WORD *)v2 - 18) = 0;
    *((_DWORD *)v2 - 2) = 0;
    *((_WORD *)v2 - 17) = 0;
    *((_OWORD *)v2 - 2) = 0;
    *(v2 - 2) = 0;
  }
  while ( &v11 != v2 );
  decode_insn(&v6, *a1);
  v3 = sub_C920(&v6);
  if ( v3 <= 0 )
    return 0;
  a1[2] |= 0x10uLL;
  return add_frame(a1, v3, 0, 0, v4, v5, 0.0, v6, *((_QWORD *)&v6 + 1), v7, v8, v9);
}
