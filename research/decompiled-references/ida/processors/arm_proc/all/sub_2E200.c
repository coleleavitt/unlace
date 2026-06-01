__int64 __fastcall sub_2E200(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v5; // ebx
  _BYTE *v7; // rbx
  unsigned __int64 *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rsi
  _QWORD *v13; // [rsp+0h] [rbp-1B8h] BYREF
  __int128 v14; // [rsp+8h] [rbp-1B0h]
  char v15; // [rsp+18h] [rbp-1A0h]
  __int128 v16; // [rsp+20h] [rbp-198h]
  __int64 v17; // [rsp+30h] [rbp-188h]
  __int64 v18; // [rsp+38h] [rbp-180h]
  __int64 v19; // [rsp+40h] [rbp-178h]
  _BYTE v20[6]; // [rsp+48h] [rbp-170h] BYREF
  unsigned __int16 v21; // [rsp+4Eh] [rbp-16Ah]
  _BYTE v22[280]; // [rsp+70h] [rbp-148h] BYREF
  unsigned __int64 v23; // [rsp+188h] [rbp-30h] BYREF

  v23 = __readfsqword(0x28u);
  if ( (*(_BYTE *)a5 & 1) == 0 )
    return 0;
  if ( *(_WORD *)(a5 + 16) != 22 )
    return 0;
  v7 = v20;
  v16 = -1;
  v10 = (unsigned __int64 *)v20;
  v17 = -1;
  v18 = 0;
  v19 = 0;
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
  while ( v10 != &v23 );
  if ( (int)decode_insn() <= 0 || v20[1] != 1 || a4 != v21 )
    return 0;
  if ( v22[41] )
  {
    if ( v22[1] != 1 )
      return 0;
    v7 = v22;
  }
  if ( v7[41] != 5 || *((_QWORD *)v7 + 6) != 1 )
    return 0;
  v11 = *((unsigned __int16 *)v7 + 3);
  v15 = 0;
  v13 = nullptr;
  v14 = 0;
  v5 = sub_81F70(a1, &v13, v17, v11, 0, 0);
  if ( !(_BYTE)v5 )
  {
LABEL_22:
    v12 = v13;
    goto LABEL_23;
  }
  if ( (unsigned __int8)(v15 - 10) > 1u || (_QWORD)v14 != 1 )
  {
    v5 = 0;
    goto LABEL_22;
  }
  v12 = v13;
  if ( (*v13 & 1) == 0 )
  {
    sub_2A780(a1, (__int64)v13, a3 + *v13, a3, 0);
    if ( (get_flags_ex() & 0x600) == 0 )
      auto_mark_range();
    insn_add_dref();
    sub_2A0D0();
    goto LABEL_22;
  }
  v5 = 0;
LABEL_23:
  if ( v12 )
  {
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  return v5;
}

