__int64 __fastcall sub_33990(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 result; // rax
  __int16 word; // bp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  int v11; // edx
  int v12; // eax
  __int64 v13; // [rsp-18h] [rbp-18h]
  __int64 v14; // [rsp-8h] [rbp-8h]

  result = 0;
  if ( *(_WORD *)(a2 + 26) == 2
    && (*(_QWORD *)(a2 + 24) & 0x200000000FFFFLL) == 0x29
    && *(_BYTE *)(a2 + 41) == 1
    && *(_WORD *)(a2 + 46) == 15 )
  {
    v14 = v3;
    word = get_word(*(_QWORD *)(a2 + 16) + 2LL);
    v10 = getinf_flag(3, 32, v6, v7, v8, v9, v13, v2, v14);
    if ( (_BYTE)v10 )
    {
      if ( *(_BYTE *)(a1 + 288) )
        word = __ROL2__(word, 8);
    }
    LOBYTE(v10) = word == 18112;
    LOBYTE(v11) = word == -16640;
    v12 = v11 | v10;
    LOBYTE(v11) = word == 0;
    return v11 | (unsigned int)v12;
  }
  return result;
}
