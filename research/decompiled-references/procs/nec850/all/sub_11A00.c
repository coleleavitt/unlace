__int64 __fastcall sub_11A00(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v7; // rdi
  __int64 v8; // [rsp+0h] [rbp-190h] BYREF
  __int128 v9; // [rsp+8h] [rbp-188h] BYREF
  __int64 v10; // [rsp+18h] [rbp-178h]
  __int64 v11; // [rsp+20h] [rbp-170h]
  __int64 v12; // [rsp+28h] [rbp-168h]
  char v13; // [rsp+30h] [rbp-160h] BYREF
  char v14; // [rsp+31h] [rbp-15Fh]
  __int16 v15; // [rsp+36h] [rbp-15Ah]
  __int64 v16; // [rsp+40h] [rbp-150h]
  unsigned __int64 v17; // [rsp+170h] [rbp-20h] BYREF

  v17 = __readfsqword(0x28u);
  v2 = (unsigned __int64 *)&v13;
  v9 = -1;
  v10 = -1;
  v11 = 0;
  v12 = 0;
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
  while ( &v17 != v2 );
  if ( a2 == -1 || (int)decode_insn(&v9, a2, 0.0) <= 0 )
    return -1;
  v3 = v10 + WORD1(v11);
  if ( (_WORD)v11 == 79 )
  {
    v7 = -1;
    if ( v14 == 7 )
      v7 = v16;
    if ( (unsigned __int8)is_mapped(v7) )
      return -1;
    return v3;
  }
  if ( (unsigned __int16)v11 > 0x4Fu )
  {
    if ( (_WORD)v11 == 206 )
      return v3;
    return -1;
  }
  if ( (_WORD)v11 == 44 )
  {
    if ( v14 == 1 && v15 != 31 && (unsigned __int8)sub_10040(a1, &v8, v10, 31, 0, 0) && v8 == v3 )
      return v3;
    return -1;
  }
  if ( (_WORD)v11 != 45 )
    return -1;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
  v5 = v16 + 16 * v9;
  if ( v5 != v4 )
  {
    v4 &= v5;
    if ( v5 == -1 )
      v4 = -1;
  }
  if ( v3 == v4 )
    return -1;
  return v3;
}
