__int64 __fastcall sub_3EB00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // r13
  int v7; // eax
  unsigned __int64 *v8; // rax
  double v9; // xmm0_8
  int v10; // r14d
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int128 v15; // [rsp+10h] [rbp-1A8h] BYREF
  __int64 v16; // [rsp+20h] [rbp-198h]
  __int64 v17; // [rsp+28h] [rbp-190h]
  __int64 v18; // [rsp+30h] [rbp-188h]
  _BYTE v19[16]; // [rsp+38h] [rbp-180h] BYREF
  __int64 v20; // [rsp+48h] [rbp-170h]
  unsigned __int64 v21; // [rsp+178h] [rbp-40h] BYREF

  v21 = __readfsqword(0x28u);
  if ( (*(_DWORD *)a3 & 0x4000) != 0 )
  {
    v3 = *(_QWORD *)(a3 + 8);
    v6 = 2;
    v7 = *(_DWORD *)a3 & 0x404;
    if ( v7 )
    {
      if ( v7 == 4 )
      {
        v6 = 4;
      }
      else
      {
        v6 = 1;
        if ( v7 != 1024 )
          v6 = 8;
      }
    }
    v16 = -1;
    v8 = (unsigned __int64 *)v19;
    v15 = -1;
    v9 = 0.0;
    v17 = 0;
    v18 = 0;
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
    v10 = 0;
    if ( *(_WORD *)(a3 + 4) )
    {
      do
      {
        v9 = add_cref(a2, v3, 19, v9);
        decode_insn(&v15, v3, v14, v9);
        if ( v19[1] == 7 )
        {
          v12 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
          v13 = v20 + 16 * v15;
          if ( v13 != v12 )
          {
            v12 &= v13;
            if ( v13 == -1 )
              v12 = -1;
          }
          v9 = add_cref(a2, v12, 19, v9);
        }
        ++v10;
        v3 += v6;
      }
      while ( *(unsigned __int16 *)(a3 + 4) > v10 );
    }
  }
  return 1;
}

