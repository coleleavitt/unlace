unsigned __int64 __fastcall sub_1CD380(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 *v5; // rax
  __int64 *v6; // rsi
  _BYTE *v8; // r13
  int v9; // r12d
  char v10; // al
  __int64 v11; // rax
  char v12; // [rsp+34h] [rbp-1FCh]
  __int128 v13; // [rsp+38h] [rbp-1F8h] BYREF
  __int64 v14; // [rsp+48h] [rbp-1E8h]
  __int64 v15; // [rsp+50h] [rbp-1E0h]
  int v16; // [rsp+58h] [rbp-1D8h]
  __int128 v17; // [rsp+60h] [rbp-1D0h]
  __int64 v18; // [rsp+70h] [rbp-1C0h]
  char v19; // [rsp+78h] [rbp-1B8h]
  __int128 v20; // [rsp+88h] [rbp-1A8h]
  __int64 v21; // [rsp+98h] [rbp-198h]
  __int64 v22; // [rsp+A0h] [rbp-190h]
  __int64 v23; // [rsp+A8h] [rbp-188h]
  _BYTE v24[320]; // [rsp+B0h] [rbp-180h] BYREF
  unsigned __int64 v25; // [rsp+1F0h] [rbp-40h] BYREF

  v25 = __readfsqword(0x28u);
  v5 = (unsigned __int64 *)v24;
  *a2 = 0;
  v21 = -1;
  v22 = 0;
  v23 = 0;
  v20 = -1;
  *a3 = 0;
  do
  {
    *(_WORD *)v5 = 0;
    v5 += 5;
    *((_WORD *)v5 - 19) = 0;
    *((_WORD *)v5 - 18) = 0;
    *((_DWORD *)v5 - 2) = 0;
    *((_WORD *)v5 - 17) = 0;
    *((_OWORD *)v5 - 2) = 0;
    *(v5 - 2) = 0;
  }
  while ( &v25 != v5 );
  v6 = *(__int64 **)(a1 + 8);
  v16 = -1;
  v14 = -1;
  v15 = 0;
  v18 = -1;
  v19 = 1;
  v13 = 0;
  v17 = 0;
  if ( v6 )
  {
    v18 = *v6;
    if ( (unsigned __int8)func_tail_iterator_set() )
    {
      v19 = 0;
      sub_332560(&v13, a1 + 16);
LABEL_6:
      while ( !(unsigned int)decode_insn() )
      {
LABEL_7:
        if ( v19 )
        {
LABEL_10:
          if ( !(unsigned __int8)sub_332580(&v13) )
            goto LABEL_11;
        }
        else if ( !(unsigned __int8)func_item_iterator_next() )
        {
          v19 = 1;
          goto LABEL_10;
        }
      }
      get_flags_ex();
      v8 = v24;
      v9 = 0;
      while ( 1 )
      {
        v10 = v8[1];
        if ( !v10 )
          goto LABEL_7;
        if ( (unsigned __int8)(v10 - 4) <= 1u )
        {
          if ( (unsigned __int8)is_stkvar() || !(unsigned int)sub_CFF70() )
          {
            if ( v8[1] != 5 )
              goto LABEL_20;
LABEL_28:
            v11 = *((_QWORD *)v8 + 1);
LABEL_21:
            if ( *a2 > v11 )
              *a2 = v11;
            if ( *a3 < v11 )
              *a3 = v11;
            goto LABEL_15;
          }
          if ( (v12 & 1) != 0 )
          {
            if ( v8[1] == 5 )
              goto LABEL_28;
LABEL_20:
            v11 = *((_QWORD *)v8 + 2);
            goto LABEL_21;
          }
        }
LABEL_15:
        ++v9;
        v8 += 40;
        if ( v9 == 8 )
          goto LABEL_7;
      }
    }
  }
  if ( (unsigned __int8)sub_332560(&v13, a1 + 16) )
    goto LABEL_6;
LABEL_11:
  if ( v15 )
    lock_func_range();
  return v25 - __readfsqword(0x28u);
}

