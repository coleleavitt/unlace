__int64 __fastcall sub_2C90(_DWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  char v8; // r13
  __int64 v9; // rax
  __int64 free_chunk; // rbp
  int v11; // eax
  __int64 v12; // rax
  __int64 *v13; // rbx
  __int64 v14; // rbx
  __int64 v16; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v17[7]; // [rsp+10h] [rbp-38h] BYREF

  v6 = (unsigned int)(4 * a2);
  v17[1] = __readfsqword(0x28u);
  v8 = a4;
  v9 = getinf(20, v6, a3, a4, a5, a6);
  free_chunk = find_free_chunk(v9, (int)v6, 4095);
  v11 = (*a1)++;
  sub_2B80(v11 + 1, free_chunk, (int)v6 + free_chunk, a3, (__int64)"DATA");
  v12 = getseg(free_chunk);
  *(_BYTE *)(v12 + 184) = v8;
  v13 = (__int64 *)v12;
  update_segm(v12);
  v14 = *v13;
  v16 = -1;
  netnode_check(&v16, "$ arm segflags", 0, 1);
  v17[0] = 2048;
  netnode_supset(v16, v14, v17, 8, 321);
  return free_chunk;
}
