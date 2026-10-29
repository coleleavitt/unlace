__int64 __fastcall sub_86A40(char *a1, __int64 a2, __int64 (__fastcall *a3)(const char *, __int64), __int64 a4)
{
  unsigned __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v16; // [rsp+28h] [rbp-1B0h] BYREF
  __int128 v17; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v18; // [rsp+40h] [rbp-198h]
  __int64 v19; // [rsp+48h] [rbp-190h]
  __int64 v20; // [rsp+50h] [rbp-188h]
  char v21; // [rsp+58h] [rbp-180h] BYREF
  unsigned __int64 v22; // [rsp+198h] [rbp-40h] BYREF

  v22 = __readfsqword(0x28u);
  v6 = (unsigned __int64 *)&v21;
  v17 = -1;
  v18 = -1;
  v19 = 0;
  v20 = 0;
  do
  {
    *(_WORD *)v6 = 0;
    v6 += 5;
    *((_WORD *)v6 - 19) = 0;
    *((_WORD *)v6 - 18) = 0;
    *((_DWORD *)v6 - 2) = 0;
    *((_WORD *)v6 - 17) = 0;
    *((_OWORD *)v6 - 2) = 0;
    *(v6 - 2) = 0;
  }
  while ( &v22 != v6 );
  if ( !(unsigned int)decode_insn() )
    return 0;
  v11 = callui(1067, a2, v7, v8, v9, v10, v15, v16, v17, *((_QWORD *)&v17 + 1));
  if ( !(unsigned __int8)sub_85E60(a1, (__int64)&v17, 1, &v15, 1, v11, a3, a4, &v16) || (v15 & 1) == 0 )
    return 0;
  v15 ^= 1uLL;
  ((void (__fastcall *)(__int64, __int64, __int64 *, __int64, __int64, __int64))callui)(1111, v16, &v15, 1, v12, v13);
  invalidate_dbgmem_contents();
  return 1;
}
