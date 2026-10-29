__int64 __fastcall sub_23540(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned __int64 a5, __int64 a6)
{
  unsigned __int64 *v8; // rax
  int v10; // r14d
  unsigned __int64 i; // r15
  unsigned int v12; // r14d
  unsigned __int8 v15; // [rsp+7h] [rbp-1B1h]
  __int128 v16; // [rsp+10h] [rbp-1A8h] BYREF
  __int64 v17; // [rsp+20h] [rbp-198h]
  __int64 v18; // [rsp+28h] [rbp-190h]
  __int64 v19; // [rsp+30h] [rbp-188h]
  char v20; // [rsp+38h] [rbp-180h] BYREF
  unsigned __int64 v21; // [rsp+178h] [rbp-40h] BYREF

  v8 = (unsigned __int64 *)&v20;
  v21 = __readfsqword(0x28u);
  v16 = -1;
  v17 = -1;
  v18 = 0;
  v19 = 0;
  do
  {
    *(_WORD *)v8 = 0;
    v8 += 5;
    *((_WORD *)v8 - 19) = 0;
    *((_WORD *)v8 - 18) = 0;
    *((_DWORD *)v8 - 2) = 0;
    *((_WORD *)v8 - 17) = 0;
    *((_OWORD *)v8 - 2) = 0;
    *(v8 - 2) = 0;
  }
  while ( &v21 != v8 );
  v10 = decode_insn();
  v15 = sub_669F0(a2, &v16, a3, 0.0);
  if ( v15 )
  {
    for ( i = v10 + a4; i < a5; i += v12 )
    {
      v12 = decode_insn();
      if ( !v12 )
        break;
      if ( a6 != i && (unsigned __int8)sub_669E0(a2, &v16, a3) && !sub_23220(a1, a2, i) )
        return 0;
    }
  }
  else
  {
    return 0;
  }
  return v15;
}
