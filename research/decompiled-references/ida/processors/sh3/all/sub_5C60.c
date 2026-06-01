unsigned __int64 __fastcall sub_5C60(__int64 a1, __int64 a2, __int64 a3, __int16 a4, int a5, unsigned __int8 a6)
{
  unsigned int v6; // r15d
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 word; // rax
  __int64 v19; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+18h] [rbp-40h]

  v6 = a6;
  v20 = __readfsqword(0x28u);
  if ( get_dtype_size(a6) == 2 )
  {
    a5 *= 2;
  }
  else if ( get_dtype_size(v6) == 4 )
  {
    a5 *= 4;
  }
  else if ( get_dtype_size(v6) == 8 )
  {
    a5 *= 8;
  }
  *(_BYTE *)(a3 + 1) = 4;
  *(_WORD *)(a3 + 6) = a4;
  *(_QWORD *)(a3 + 16) = a5;
  *(_BYTE *)(a3 + 5) = a6;
  if ( a4 == 89 && (*(_BYTE *)(a1 + 256) & 1) == 0 )
  {
    v13 = *(_QWORD *)(a2 + 8) + 4LL;
    if ( a6 == 2 )
      v13 = (*(_QWORD *)(a2 + 8) + 4LL) & 0xFFFFFFFFFFFFFFFCLL;
    v14 = v13 + a5 + 16LL * *(_QWORD *)a2;
    v15 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
    if ( v14 != v15 )
    {
      v15 &= v14;
      if ( v14 == -1 )
        v15 = -1;
    }
    v16 = ea2node(v15);
    v17 = *(_QWORD *)(a2 + 16);
    v19 = v16;
    netnode_supset(*(_QWORD *)(a1 + 248), v17, &v19, 8, 321);
    if ( *(_WORD *)(a2 + 24) == 57 )
    {
      *(_QWORD *)(a3 + 16) = v15;
      *(_BYTE *)(a3 + 1) = 2;
      return v20 - __readfsqword(0x28u);
    }
    if ( get_dtype_size(v6) == 2 )
    {
      word = (__int16)get_word(v15);
      goto LABEL_17;
    }
    if ( get_dtype_size(v6) == 4 )
    {
      word = (int)get_dword(v15);
LABEL_17:
      *(_QWORD *)(a3 + 8) = word;
      *(_BYTE *)(a3 + 1) = 5;
    }
  }
  return v20 - __readfsqword(0x28u);
}

