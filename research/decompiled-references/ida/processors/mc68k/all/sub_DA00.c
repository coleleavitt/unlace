unsigned __int64 __fastcall sub_DA00(__int64 a1, __int64 a2)
{
  char *v2; // rax
  __int64 v3; // rcx
  __int16 v4; // ax
  __int64 v5; // r13
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int128 v11; // [rsp+0h] [rbp-198h] BYREF
  __int64 v12; // [rsp+10h] [rbp-188h]
  __int64 v13; // [rsp+18h] [rbp-180h]
  __int64 v14; // [rsp+20h] [rbp-178h]
  char v15; // [rsp+28h] [rbp-170h] BYREF
  char v16; // [rsp+29h] [rbp-16Fh]
  __int64 v17; // [rsp+30h] [rbp-168h]
  __int64 v18; // [rsp+38h] [rbp-160h]
  char v19; // [rsp+51h] [rbp-147h]
  __int16 v20; // [rsp+56h] [rbp-142h]
  _QWORD v21[6]; // [rsp+168h] [rbp-30h] BYREF

  v21[0] = __readfsqword(0x28u);
  v2 = &v15;
  v11 = -1;
  v12 = -1;
  v13 = 0;
  v14 = 0;
  do
  {
    *(_WORD *)v2 = 0;
    v2 += 40;
    *((_WORD *)v2 - 19) = 0;
    *((_WORD *)v2 - 18) = 0;
    *((_DWORD *)v2 - 2) = 0;
    *((_WORD *)v2 - 17) = 0;
    *((_OWORD *)v2 - 2) = 0;
    *((_QWORD *)v2 - 2) = 0;
  }
  while ( v21 != (_QWORD *)v2 );
  if ( decode_prev_insn(&v11, *(_QWORD *)(a2 + 16), v21, 0, 0.0) != -1 )
  {
    v4 = v13;
    v5 = 0;
    if ( (_WORD)v13 == 4 )
    {
      if ( v19 != 3 || (((v20 & 0x38) - 24) & 0xFFF0) == 0 || (v20 & 7 | 8) != 0xF )
        return v21[0] - __readfsqword(0x28u);
      v5 = v17;
      decode_prev_insn(&v11, v12, v20 & 7 | 8u, v3, 0.0);
      v4 = v13;
    }
    if ( v4 == 145 && v16 == 2 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
      v8 = (v7 & (v18 + v5)) + 16 * v11;
      if ( v8 != v7 )
      {
        v7 &= v8;
        if ( v8 == -1 )
          v7 = -1;
      }
      add_cref(*(_QWORD *)(a2 + 16), v7, 17);
      if ( decode_prev_insn(&v11, v12, v9, v10, 0.0) != -1
        && (_WORD)v13 == 145
        && v16 == 2
        && v18 == *(_QWORD *)(a2 + 8) + *(unsigned __int16 *)(a2 + 26)
        && (unsigned __int8)func_does_return(v7) )
      {
        *(_BYTE *)(a1 + 208) = 1;
      }
    }
  }
  return v21[0] - __readfsqword(0x28u);
}

