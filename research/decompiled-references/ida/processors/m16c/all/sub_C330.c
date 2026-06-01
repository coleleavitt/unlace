__int64 __fastcall sub_C330(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  __int16 v3; // r12
  int v4; // eax
  __int16 v5; // cx
  char v6; // dl
  __int64 v7; // rax

  v1 = *(int *)(a1 + 4360);
  v2 = *(_QWORD *)(a1 + 4352);
  v3 = *(_WORD *)(v2 + 30);
  *(_BYTE *)(v2 + 40 * v1 + 41) = 1;
  v4 = ((unsigned __int16)get_byte() >> 4) & 3;
  if ( (v3 & 1) != 0 )
  {
    v5 = WORD2(qword_1B600[v4]);
    v6 = 1;
  }
  else
  {
    v5 = qword_1B600[v4];
    v6 = 0;
  }
  v7 = v2 + 40 * v1;
  *(_WORD *)(v7 + 46) = v5;
  *(_BYTE *)(v7 + 45) = v6;
  return 1;
}

