__int64 __fastcall sub_8000(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 *v4; // rax
  __int64 v5; // r14
  int spoiled_reg; // eax
  unsigned int v7; // r13d
  char *v8; // rsi
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // esi
  char *v13; // [rsp+0h] [rbp-1D8h]
  __int64 v14; // [rsp+20h] [rbp-1B8h] BYREF
  __int128 v15; // [rsp+28h] [rbp-1B0h]
  __int128 v16; // [rsp+40h] [rbp-198h] BYREF
  __int64 v17; // [rsp+50h] [rbp-188h]
  __int64 v18; // [rsp+58h] [rbp-180h]
  __int64 v19; // [rsp+60h] [rbp-178h]
  char v20; // [rsp+68h] [rbp-170h] BYREF
  unsigned __int64 v21; // [rsp+1A8h] [rbp-30h] BYREF

  v21 = __readfsqword(0x28u);
  v4 = (unsigned __int64 *)&v20;
  v16 = -1;
  v17 = -1;
  v18 = 0;
  v19 = 0;
  do
  {
    *(_WORD *)v4 = 0;
    v4 += 5;
    *((_WORD *)v4 - 19) = 0;
    *((_WORD *)v4 - 18) = 0;
    *((_DWORD *)v4 - 2) = 0;
    *((_WORD *)v4 - 17) = 0;
    *((_OWORD *)v4 - 2) = 0;
    *(v4 - 2) = 0;
  }
  while ( &v21 != v4 );
  if ( (int)decode_insn() <= 0 )
    return (unsigned int)-1;
  v5 = a3[1];
  v13 = nullptr;
  if ( !(_DWORD)v5 )
  {
    if ( (_WORD)v18 == 22 || (_WORD)v18 == 106 )
      return (unsigned int)-2;
    goto LABEL_7;
  }
  v13 = (char *)qvector_reserve();
  memset(v13, 0, 4LL * (int)v5);
  if ( (int)v5 > 0 )
  {
    v10 = 0;
    v11 = 0;
    do
    {
      v12 = *(unsigned __int16 *)(*a3 + v10 + 8);
      v10 += 80;
      *(_DWORD *)&v13[v11] = v12;
      v11 += 4;
    }
    while ( v11 != 4LL * (unsigned int)(v5 - 1) + 4 );
  }
  v8 = v13;
  if ( (_WORD)v18 != 22 && (_WORD)v18 != 106 )
  {
LABEL_7:
    spoiled_reg = get_spoiled_reg();
    v7 = spoiled_reg;
    if ( spoiled_reg >= 0 )
    {
      v15 = 0;
      v14 = 0;
      sub_7EB0(
        a1,
        &v16,
        *(unsigned __int16 *)(*a3 + 80LL * spoiled_reg + 8),
        *a3 + 80LL * spoiled_reg + 64,
        *(_QWORD *)(*a3 + 80LL * spoiled_reg + 16),
        (__int64)&v14);
      if ( v14 )
      {
        *(_QWORD *)&v15 = 0;
        qfree();
      }
    }
    v8 = v13;
    goto LABEL_9;
  }
  v7 = -2;
LABEL_9:
  if ( v8 )
    qfree();
  return v7;
}

