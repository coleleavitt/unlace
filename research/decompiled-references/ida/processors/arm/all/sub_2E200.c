__int64 __fastcall sub_2E200(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v5; // ebx
  _BYTE *v7; // rbx
  unsigned __int64 *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rsi
  __int64 v14; // r14
  _QWORD *v15; // [rsp+0h] [rbp-1B8h] BYREF
  __int128 v16; // [rsp+8h] [rbp-1B0h]
  char v17; // [rsp+18h] [rbp-1A0h]
  __int128 v18; // [rsp+20h] [rbp-198h]
  __int64 v19; // [rsp+30h] [rbp-188h]
  __int64 v20; // [rsp+38h] [rbp-180h]
  __int64 v21; // [rsp+40h] [rbp-178h]
  _BYTE v22[6]; // [rsp+48h] [rbp-170h] BYREF
  unsigned __int16 v23; // [rsp+4Eh] [rbp-16Ah]
  _BYTE v24[280]; // [rsp+70h] [rbp-148h] BYREF
  unsigned __int64 v25; // [rsp+188h] [rbp-30h] BYREF

  v25 = __readfsqword(0x28u);
  if ( (*(_BYTE *)a5 & 1) == 0 )
    return 0;
  if ( *(_WORD *)(a5 + 16) != 22 )
    return 0;
  v7 = v22;
  v18 = -1;
  v11 = (unsigned __int64 *)v22;
  v19 = -1;
  v20 = 0;
  v21 = 0;
  do
  {
    *(_WORD *)v11 = 0;
    v11 += 5;
    *((_WORD *)v11 - 19) = 0;
    *((_WORD *)v11 - 18) = 0;
    *((_DWORD *)v11 - 2) = 0;
    *((_WORD *)v11 - 17) = 0;
    *((_OWORD *)v11 - 2) = 0;
    *(v11 - 2) = 0;
  }
  while ( v11 != &v25 );
  if ( (int)decode_insn() <= 0 || v22[1] != 1 || a4 != v23 )
    return 0;
  if ( v24[41] )
  {
    if ( v24[1] != 1 )
      return 0;
    v7 = v24;
  }
  if ( v7[41] != 5 || *((_QWORD *)v7 + 6) != 1 )
    return 0;
  v12 = *((unsigned __int16 *)v7 + 3);
  v17 = 0;
  v15 = 0;
  v16 = 0;
  v5 = sub_81F70(a1, &v15, v19, v12, 0, 0);
  if ( !(_BYTE)v5 )
  {
LABEL_22:
    v13 = v15;
    goto LABEL_23;
  }
  if ( (unsigned __int8)(v17 - 10) > 1u || (_QWORD)v16 != 1 )
  {
    v5 = 0;
    goto LABEL_22;
  }
  v13 = v15;
  if ( (*v15 & 1) == 0 )
  {
    v14 = a3 + *v15;
    sub_2A780(a1, (__int64)v15, v14, a3, 0);
    if ( (get_flags_ex(v14, 4) & 0x600) == 0 )
      auto_mark_range();
    insn_add_dref();
    sub_2A0D0(a1, *(_QWORD *)(a2 + 16), v14);
    goto LABEL_22;
  }
  v5 = 0;
LABEL_23:
  if ( v13 )
  {
    *(_QWORD *)&v16 = 0;
    qfree((__int64)v13);
  }
  return v5;
}
