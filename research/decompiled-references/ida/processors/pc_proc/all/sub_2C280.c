__int64 __fastcall sub_2C280(__int64 a1, __int64 a2)
{
  unsigned __int64 *v3; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  __int64 v6; // r14
  __int128 v7; // [rsp+0h] [rbp-198h]
  __int64 v8; // [rsp+10h] [rbp-188h]
  __int64 v9; // [rsp+18h] [rbp-180h]
  __int64 v10; // [rsp+20h] [rbp-178h]
  char v11; // [rsp+28h] [rbp-170h] BYREF
  __int64 v12; // [rsp+38h] [rbp-160h]
  unsigned __int64 v13; // [rsp+168h] [rbp-30h] BYREF

  v13 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a2 + 32) == 33
    && *(_WORD *)(a2 + 24) == 27
    && *(_WORD *)(a2 + 46) == 4
    && *(_BYTE *)(a2 + 81) == 2
    && *(_QWORD *)(a2 + 96) == 112 )
  {
    v8 = -1;
    v3 = (unsigned __int64 *)&v11;
    v7 = -1;
    v9 = 0;
    v10 = 0;
    do
    {
      *(_WORD *)v3 = 0;
      v3 += 5;
      *((_WORD *)v3 - 19) = 0;
      *((_WORD *)v3 - 18) = 0;
      *((_DWORD *)v3 - 2) = 0;
      *((_WORD *)v3 - 17) = 0;
      *((_OWORD *)v3 - 2) = 0;
      *(v3 - 2) = 0;
    }
    while ( &v13 != v3 );
    if ( (unsigned int)decode_insn() && (_WORD)v9 == 68 )
    {
      v4 = v12 + 16 * v7;
      v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 144) + 32LL) + 16LL);
      if ( v4 != v5 )
      {
        v5 &= v4;
        if ( v4 == -1 )
          v5 = -1;
      }
      if ( v8 + (unsigned __int64)WORD1(v9) < v5 )
      {
        v6 = 0;
        do
        {
          if ( !(unsigned int)decode_insn() )
            break;
          if ( ++v6 == 8 )
            break;
        }
        while ( v8 + (unsigned __int64)WORD1(v9) < v5 );
      }
    }
  }
  return 0;
}

