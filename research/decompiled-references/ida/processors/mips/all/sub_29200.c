__int64 __fastcall sub_29200(__int64 ****a1, int *a2)
{
  int v2; // r14d
  __int64 **v3; // r12
  __int64 **v4; // r13
  __int64 v5; // rbp
  __int64 *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rax
  char v10; // dl
  char v11; // si
  __int64 *v13; // rcx
  __int64 v14; // rax

  v2 = *a2;
  v3 = **a1;
  v4 = (*a1)[2];
  v5 = *((unsigned int *)*a1 + 2);
  v6 = *v3;
  v7 = (*v3)[1];
  v8 = **v3;
  if ( (*v3)[2] < (unsigned __int64)(v7 + 1) )
  {
    v14 = qvector_reserve(*v3, v8, v7 + 1, 12);
    v7 = v6[1];
    *v6 = v14;
    v8 = v14;
  }
  v9 = v8 + 12 * v7;
  *(_QWORD *)v9 = 0;
  *(_WORD *)(v9 + 8) = 0;
  v10 = 0;
  ++v6[1];
  *(_BYTE *)(v9 + 9) = v5;
  *(_DWORD *)v9 = v2;
  *(_WORD *)(v9 + 4) = 0;
  *(_WORD *)(v9 + 6) = (_WORD)v4;
  if ( (unsigned int)v5 <= 7 )
  {
    v11 = 0;
    if ( (dword_598A0[v5] & (_DWORD)v3[2]) != 0 )
    {
      v13 = v3[1];
      v11 = 2;
      if ( *((_WORD *)v13 + 12) == 14 && *((_BYTE *)v13 + 81) == 1 )
        v11 = 2 * (*((_WORD *)v13 + 23) != *((_WORD *)v13 + 43));
    }
    v10 = v11 | 1;
    if ( (dword_598C0[v5] & (_DWORD)v3[2]) == 0 )
      v10 = v11;
  }
  *(_BYTE *)(v9 + 8) = v10;
  return 0;
}

