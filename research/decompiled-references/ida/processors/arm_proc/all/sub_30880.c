__int64 __fastcall sub_30880(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6, __int64 a7)
{
  unsigned __int64 *v9; // rax
  char v10; // dl
  int v11; // eax
  _QWORD v13[2]; // [rsp+10h] [rbp-1B8h] BYREF
  __int128 v14; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v15; // [rsp+30h] [rbp-198h]
  __int64 v16; // [rsp+38h] [rbp-190h]
  __int64 v17; // [rsp+40h] [rbp-188h]
  char v18; // [rsp+48h] [rbp-180h] BYREF
  unsigned __int64 v19; // [rsp+188h] [rbp-40h] BYREF

  v19 = __readfsqword(0x28u);
  if ( a4 > 3 )
    return 0;
  v15 = -1;
  v9 = (unsigned __int64 *)&v18;
  v16 = 0;
  v17 = 0;
  v14 = -1;
  do
  {
    *(_WORD *)v9 = 0;
    v9 += 5;
    *((_WORD *)v9 - 19) = 0;
    *((_WORD *)v9 - 18) = 0;
    *((_DWORD *)v9 - 2) = 0;
    *((_WORD *)v9 - 17) = 0;
    *((_OWORD *)v9 - 2) = 0;
    *(v9 - 2) = 0;
  }
  while ( &v19 != v9 );
  if ( !(unsigned int)decode_insn() )
    return 0;
  v10 = 1;
  v13[0] = off_9FFA0;
  v11 = *(_DWORD *)(a1 + 212);
  v13[1] = a6;
  if ( v11 )
    v10 = (unsigned __int64)(get_sreg() - 1) <= 0xFFFFFFFFFFFFFFFDLL;
  return sub_23140((__int64)&v14, a4, v10, a2, a7, (__int64)v13);
}

