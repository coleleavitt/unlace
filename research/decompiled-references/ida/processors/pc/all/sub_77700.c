__int64 __fastcall sub_77700(
        __int64 a1,
        bool *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        __int64 (__fastcall *a6)(const char *, __int64),
        __int64 a7)
{
  __int64 result; // rax
  unsigned __int64 *v12; // rax
  __int64 v13; // rcx
  bool v14; // si
  int v15; // edi
  __int128 v16; // [rsp+10h] [rbp-1A8h] BYREF
  __int64 v17; // [rsp+20h] [rbp-198h]
  __int64 v18; // [rsp+28h] [rbp-190h]
  __int64 v19; // [rsp+30h] [rbp-188h]
  char v20; // [rsp+38h] [rbp-180h] BYREF
  unsigned __int64 v21; // [rsp+178h] [rbp-40h] BYREF

  v21 = __readfsqword(0x28u);
  if ( a4 > 3 )
    return 0;
  v16 = -1;
  v12 = (unsigned __int64 *)&v20;
  v17 = -1;
  v18 = 0;
  v19 = 0;
  do
  {
    *(_WORD *)v12 = 0;
    v12 += 5;
    *((_WORD *)v12 - 19) = 0;
    *((_WORD *)v12 - 18) = 0;
    *((_DWORD *)v12 - 2) = 0;
    *((_WORD *)v12 - 17) = 0;
    *((_OWORD *)v12 - 2) = 0;
    *(v12 - 2) = 0;
  }
  while ( v12 != &v21 );
  if ( !(unsigned int)decode_insn() )
    return 0;
  result = sub_770F0((char *)a1, (__int64)&v16, (__int64)&v16 + 40 * (int)a4 + 40, a5, a6, a7, (__int64)a2);
  if ( !(_BYTE)result )
    return 0;
  v13 = *(_QWORD *)(a1 + 16);
  v14 = 0;
  v15 = *(_DWORD *)(v13 + 104);
  if ( (unsigned __int16)v18 >= v15 && (unsigned __int16)v18 < *(int *)(v13 + 108) )
    v14 = (dword_95840[a4] & *(_DWORD *)(*(_QWORD *)(v13 + 112) + 16LL * ((unsigned __int16)v18 - v15) + 8)) != 0;
  *a2 = v14;
  return result;
}
