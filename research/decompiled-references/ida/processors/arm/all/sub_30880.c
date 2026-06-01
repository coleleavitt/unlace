__int64 __fastcall sub_30880(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6, __int64 a7)
{
  unsigned __int64 *v10; // rax
  char v11; // dl
  int v12; // eax
  _QWORD v14[2]; // [rsp+10h] [rbp-1B8h] BYREF
  __int128 v15; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v16; // [rsp+30h] [rbp-198h]
  __int64 v17; // [rsp+38h] [rbp-190h]
  __int64 v18; // [rsp+40h] [rbp-188h]
  char v19; // [rsp+48h] [rbp-180h] BYREF
  unsigned __int64 v20; // [rsp+188h] [rbp-40h] BYREF

  v20 = __readfsqword(0x28u);
  if ( a4 > 3 )
    return 0;
  v16 = -1;
  v10 = (unsigned __int64 *)&v19;
  v17 = 0;
  v18 = 0;
  v15 = -1;
  do
  {
    *(_WORD *)v10 = 0;
    v10 += 5;
    *((_WORD *)v10 - 19) = 0;
    *((_WORD *)v10 - 18) = 0;
    *((_DWORD *)v10 - 2) = 0;
    *((_WORD *)v10 - 17) = 0;
    *((_OWORD *)v10 - 2) = 0;
    *(v10 - 2) = 0;
  }
  while ( &v20 != v10 );
  if ( !(unsigned int)decode_insn() )
    return 0;
  v11 = 1;
  v14[0] = off_9FFA0;
  v12 = *(_DWORD *)(a1 + 212);
  v14[1] = a6;
  if ( v12 )
    v11 = (unsigned __int64)(get_sreg(a3, 20) - 1) <= 0xFFFFFFFFFFFFFFFDLL;
  return sub_23140((__int64)&v15, a4, v11, a2, a7, (__int64)v14);
}
