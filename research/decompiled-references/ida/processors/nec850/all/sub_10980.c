__int64 __fastcall sub_10980(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  unsigned __int64 *v7; // rax
  __int128 v8; // [rsp+0h] [rbp-188h] BYREF
  __int64 v9; // [rsp+10h] [rbp-178h]
  __int64 v10; // [rsp+18h] [rbp-170h]
  __int64 v11; // [rsp+20h] [rbp-168h]
  _BYTE v12[8]; // [rsp+28h] [rbp-160h] BYREF
  __int64 v13; // [rsp+30h] [rbp-158h]
  unsigned __int16 v14; // [rsp+56h] [rbp-132h]
  unsigned __int64 v15; // [rsp+168h] [rbp-20h] BYREF

  v15 = __readfsqword(0x28u);
  v4 = *a1;
  if ( v4 == -1 )
    return 0;
  if ( (get_flags_ex(v4, 4) & 0xF00000) != 0 )
    return 0;
  v9 = -1;
  v7 = (unsigned __int64 *)v12;
  v10 = 0;
  v11 = 0;
  v8 = -1;
  do
  {
    *(_WORD *)v7 = 0;
    v7 += 5;
    *((_WORD *)v7 - 19) = 0;
    *((_WORD *)v7 - 18) = 0;
    *((_DWORD *)v7 - 2) = 0;
    *((_WORD *)v7 - 17) = 0;
    *((_OWORD *)v7 - 2) = 0;
    *(v7 - 2) = 0;
  }
  while ( &v15 != v7 );
  if ( (int)decode_insn(&v8, *a1, 0.0) <= 0 || v12[1] != 5 )
    return 0;
  if ( (_WORD)v10 == 38 )
    return op_offset(*a1, 0, 2, -1, 0, 0);
  if ( (_WORD)v10 != 71 )
  {
    if ( (_WORD)v10 == 37 )
      return sub_F1C0(a2, *a1, 0, v13, v14, 0);
    return 0;
  }
  return op_offset(*a1, 0, 514, -1, *(_QWORD *)(*(_QWORD *)(a2 + 32) + 16LL) & (a3 - v13), 0);
}

