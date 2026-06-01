__int64 __fastcall sub_D300(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  char v3; // bp
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 *v8; // rax
  int v9; // eax
  int v10; // eax
  unsigned __int64 v11; // [rsp+8h] [rbp-190h]
  __int128 v12; // [rsp+10h] [rbp-188h] BYREF
  __int64 v13; // [rsp+20h] [rbp-178h]
  __int64 v14; // [rsp+28h] [rbp-170h]
  __int64 v15; // [rsp+30h] [rbp-168h]
  _BYTE v16[16]; // [rsp+38h] [rbp-160h] BYREF
  __int64 v17; // [rsp+48h] [rbp-150h]
  unsigned __int64 v18; // [rsp+178h] [rbp-20h] BYREF

  v18 = __readfsqword(0x28u);
  if ( a2 > 0xB )
  {
    v3 = 1;
    if ( a2 - 12 > 2 )
      return 0;
  }
  else
  {
    if ( a2 <= 9 )
    {
      if ( a2 > 6 )
      {
        v3 = 1;
        if ( a2 == 9 )
          goto LABEL_12;
      }
      else
      {
        v3 = 0;
        if ( a2 > 4 )
          goto LABEL_5;
      }
      return 0;
    }
    v3 = 0;
  }
LABEL_5:
  if ( ((1LL << a2) & 0x2640) == 0 )
  {
    if ( ((1LL << a2) & 0x5820) == 0 || *(_QWORD *)(a1 + 400) < a3 )
      return 0;
    v7 = *(_QWORD *)(a1 + 32) + *(unsigned __int16 *)(a1 + 42);
    v13 = -1;
    v14 = 0;
    v8 = (unsigned __int64 *)v16;
    v15 = 0;
    v12 = -1;
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
    while ( v8 != &v18 );
    v11 = v7;
    v9 = decode_insn(&v12, v7, v7, 0.0);
    a3 = v11;
    if ( v9 > 0 && (_WORD)v14 == 14 )
    {
      if ( *(_WORD *)(a1 + 40) <= 4u
        || (v10 = *(_DWORD *)(a1 + 44), (v10 & 0x1F) == 0)
        && ((*(_QWORD *)(a1 + 40) & 0x600000FFFFLL) == 0x4000000012LL && *(_BYTE *)(a1 + 57) == 7 || (v10 & 0x60) == 0) )
      {
        if ( v16[1] == 7 )
          a3 = v17 + 16 * v12;
      }
    }
  }
LABEL_12:
  v5 = *(_QWORD *)(a1 + 864);
  v6 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(v5 + 64) = a3;
  *(_QWORD *)(v5 + 40) = 25344;
  *(_QWORD *)(v5 + 48) = 0;
  *(_QWORD *)(v5 + 56) = v6;
  *(_BYTE *)(v5 + 72) = v3;
  *(_WORD *)(v5 + 73) = 0;
  *(_BYTE *)(v5 + 75) = 0;
  return 1;
}
