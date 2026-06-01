void __fastcall sub_1E470(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // r13
  __int64 sreg; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r13
  char v11; // [rsp+Ch] [rbp-2Ch]

  if ( (*(_BYTE *)(a2 + 28) & 0x10) != 0 )
    *(_QWORD *)(a3 + 16) = -*(_QWORD *)(a3 + 16);
  if ( *(_WORD *)(a3 + 6) == 15 && (*(_BYTE *)(a2 + 28) & 0xA0) == 0 )
  {
    v5 = *(_QWORD *)(a2 + 8);
    if ( !*(_DWORD *)(a1 + 212)
      || (v11 = a4, sreg = get_sreg(), a4 = v11, v7 = 8, (unsigned __int64)(sreg - 1) <= 0xFFFFFFFFFFFFFFFDLL) )
    {
      v7 = 4;
    }
    v8 = v5 + v7;
    v9 = (v5 + v7) & 0xFFFFFFFFFFFFFFFCLL;
    if ( a4 )
      v8 = v9;
    v10 = *(_QWORD *)(a3 + 16) + v8;
    if ( (unsigned __int8)is_mapped() )
    {
      *(_BYTE *)(a3 + 1) = 2;
      *(_QWORD *)(a3 + 16) = v10;
    }
  }
}

