__int64 __fastcall sub_E580(__int64 a1, __int64 *a2)
{
  char *v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // [rsp+8h] [rbp-190h] BYREF
  __int128 v11; // [rsp+10h] [rbp-188h] BYREF
  __int64 v12; // [rsp+20h] [rbp-178h]
  __int64 v13; // [rsp+28h] [rbp-170h]
  __int64 v14; // [rsp+30h] [rbp-168h]
  char v15; // [rsp+38h] [rbp-160h] BYREF
  unsigned __int16 v16; // [rsp+3Eh] [rbp-15Ah]
  __int64 v17; // [rsp+40h] [rbp-158h]
  __int64 v18; // [rsp+68h] [rbp-130h]
  _QWORD v19[4]; // [rsp+178h] [rbp-20h] BYREF

  v19[0] = __readfsqword(0x28u);
  if ( !a2 || a2[3] != -1 )
    return 0;
  v12 = -1;
  v4 = &v15;
  v11 = -1;
  v13 = 0;
  v14 = 0;
  do
  {
    *(_WORD *)v4 = 0;
    v4 += 40;
    *((_WORD *)v4 - 19) = 0;
    *((_WORD *)v4 - 18) = 0;
    *((_DWORD *)v4 - 2) = 0;
    *((_WORD *)v4 - 17) = 0;
    *((_OWORD *)v4 - 2) = 0;
    *((_QWORD *)v4 - 2) = 0;
  }
  while ( v19 != (_QWORD *)v4 );
  decode_insn(&v11, *a2, v19, 0.0);
  if ( (_WORD)v13 != 119 )
  {
    if ( (unsigned __int16)v13 > 0x77u )
    {
      if ( (unsigned __int16)(v13 - 176) <= 1u )
      {
        v5 = v17;
        if ( v17 )
          goto LABEL_15;
      }
    }
    else if ( (unsigned __int16)(v13 - 4) <= 1u && v17 )
    {
      v5 = -v17;
LABEL_15:
      v8 = 0;
      v9 = a2[2] & 0xFFFFFFEF;
      goto LABEL_12;
    }
    return 0;
  }
  v6 = *a2;
  v7 = *(_QWORD *)(a1 + 128);
  v10 = v16 + 1LL;
  netnode_supset(v7, v6, &v10, 8, 321);
  v8 = 4;
  v5 = 4 - v18;
  v9 = *((_DWORD *)a2 + 4) | 0x10;
LABEL_12:
  *((_DWORD *)a2 + 4) = v9;
  return add_frame(a2, v5, v8, 0);
}
