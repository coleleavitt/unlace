__int64 __fastcall sub_3D310(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rdx
  char v6; // cl
  unsigned __int8 v7; // [rsp+Fh] [rbp-19h]

  if ( ((*(_WORD *)(a1 + 40) - 231) & 0xFFFB) == 0 )
    goto LABEL_5;
  if ( (*(_QWORD *)(a1 + 40) & 0x20000000FFFFLL) != 0x200000000014LL )
    return 0;
  if ( *(_BYTE *)(a1 + 57) != 11 )
  {
    v3 = a1 + 56;
    v2 = 0;
  }
  else
  {
LABEL_5:
    v2 = *(unsigned __int16 *)(a1 + 62);
    v3 = a1 + 96;
  }
  v4 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v4 + 41) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  if ( *(unsigned __int16 *)(v4 + 46) != v2 )
    return 0;
  v7 = same_value_jpt(a1, v3, 0);
  if ( !v7 )
    return 0;
  v5 = *(_QWORD *)(a1 + 376);
  v6 = *(_BYTE *)(v3 + 5);
  *(_DWORD *)(v5 + 64) = *(unsigned __int16 *)(v3 + 6);
  *(_BYTE *)(v5 + 68) = v6;
  sub_3D210((_QWORD *)a1, v3 + 40);
  return v7;
}

