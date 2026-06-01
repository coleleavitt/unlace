__int64 __fastcall sub_1125A0(__int64 a1, char a2)
{
  unsigned int v4; // eax
  unsigned int v5; // ebp
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rax

  v4 = sub_1123A0(a1, *(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 104), a2);
  if ( (_BYTE)v4 )
    return 1;
  v5 = v4;
  if ( *(_BYTE *)(a1 + 133) )
  {
    v7 = 8;
    v8 = -*(_QWORD *)(a1 + 96);
    if ( *(int *)(a1 + 36) <= 4 )
      v7 = 4;
    v9 = sub_325C90(v8, v7, 0);
    if ( (unsigned __int8)sub_1123A0(a1, v9, 0, a2) )
    {
      *(_QWORD *)(a1 + 112) = -*(_QWORD *)(a1 + 112);
      *(_BYTE *)(a1 + 132) = 1;
      return 1;
    }
  }
  return v5;
}

