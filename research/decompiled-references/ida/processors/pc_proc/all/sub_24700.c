__int64 __fastcall sub_24700(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5, __int64 a6)
{
  __int64 v10; // rbx
  int v12; // edx
  char v13; // r12
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  int v16; // r8d
  __int64 v17; // rax
  __int64 v18; // rsi
  unsigned __int64 *v19; // rax
  int v20; // edx
  int v21; // eax
  __int64 v22; // rax
  unsigned __int64 v24; // [rsp+8h] [rbp-1E0h]
  int v25; // [rsp+8h] [rbp-1E0h]
  int v26; // [rsp+10h] [rbp-1D8h]
  char v27; // [rsp+68h] [rbp-180h] BYREF
  unsigned __int64 v28; // [rsp+1A8h] [rbp-40h] BYREF

  v28 = __readfsqword(0x28u);
  if ( (unsigned __int8)getinf_flag() )
    goto LABEL_2;
  if ( (unsigned int)getinf() != 11 && !(unsigned __int8)sub_6F420(5, 4) || (get_flags_ex() & 0x4000) != 0 )
    goto LABEL_8;
  v14 = (_QWORD *)a1[676];
  v15 = &v14[a1[677]];
  if ( v14 != v15 )
  {
    while ( *v14 != a3 )
    {
      if ( v15 == ++v14 )
        goto LABEL_18;
    }
    if ( v15 != v14 )
    {
LABEL_8:
      if ( a4 )
        goto LABEL_9;
      goto LABEL_22;
    }
  }
LABEL_18:
  v16 = apply_idasgn_to();
  if ( v16 == 2 )
    goto LABEL_8;
  v17 = a1[677];
  v18 = a1[676];
  if ( a1[678] < (unsigned __int64)(v17 + 1) )
  {
    v25 = v16;
    v22 = qvector_reserve();
    v16 = v25;
    a1[676] = v22;
    v18 = v22;
    v17 = a1[677];
  }
  *(_QWORD *)(v18 + 8 * v17) = a3;
  ++a1[677];
  if ( v16 )
    goto LABEL_8;
LABEL_22:
  a4 = 0;
  if ( get_ea_name() <= 0 )
    goto LABEL_2;
LABEL_9:
  v12 = sub_788B0(a3, a4);
  if ( v12 )
  {
    v10 = 0;
    v13 = 1;
  }
  else
  {
    v12 = sub_78890(a3, a4, 0);
    if ( !v12 )
    {
LABEL_2:
      if ( a6 )
      {
        *(_DWORD *)(a6 + 96) = 0;
        *(_QWORD *)(a6 + 104) = -1;
      }
      return 0;
    }
    v13 = 0;
    v10 = 16;
  }
  v19 = (unsigned __int64 *)&v27;
  do
  {
    *(_WORD *)v19 = 0;
    v19 += 5;
    *((_WORD *)v19 - 19) = 0;
    *((_WORD *)v19 - 18) = 0;
    *((_DWORD *)v19 - 2) = 0;
    *((_WORD *)v19 - 17) = 0;
    *((_OWORD *)v19 - 2) = 0;
    *(v19 - 2) = 0;
  }
  while ( &v28 != v19 );
  v26 = v12;
  v24 = *(_QWORD *)(a2 + 16);
  if ( !v13 )
  {
    decode_prev_insn();
    v20 = v26;
    if ( v24 > 4 )
    {
      decode_insn();
      v20 = v26;
    }
    if ( a5 )
    {
      *a5 = 0;
      if ( !a6 )
        return v10;
    }
    else if ( !a6 )
    {
      return v10;
    }
    v21 = 2;
    goto LABEL_34;
  }
  decode_prev_insn();
  v20 = v26;
  if ( v24 > 4 )
  {
    decode_insn();
    v20 = v26;
  }
  if ( a5 )
    *a5 = 1;
  if ( a6 )
  {
    v21 = 1;
LABEL_34:
    *(_QWORD *)(a6 + 104) = -1;
    *(_DWORD *)(a6 + 96) = v21 | (v20 << 16);
  }
  return v10;
}

