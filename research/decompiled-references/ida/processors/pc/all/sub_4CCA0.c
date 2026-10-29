__int64 __fastcall sub_4CCA0(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // r14
  bool v6; // bp
  int v7; // edx
  int v8; // ebx
  int v9; // eax
  int v10; // ebx
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rax
  unsigned int v15; // edx
  __int64 v16; // rax

  v4 = *a3;
  v5 = a3[1];
  v6 = *(_WORD *)(a2 + 24) == 17 || *(_WORD *)(a2 + 24) == 87;
  v7 = 1 << (*(_BYTE *)(getseg() + 43) + 4);
  v8 = v7 + 7;
  if ( v7 >= 0 )
    v8 = v7;
  v9 = nbits();
  v10 = v8 >> 3;
  v11 = v9 + 14;
  v12 = v9 + 7;
  if ( v12 >= 0 )
    v11 = v12;
  v13 = v10 / (v11 >> 3) + 2 * v6;
  v14 = sub_4C0C0(a1, (__int64 *)a2, v4, v4 + v5);
  v15 = v14;
  v16 = v14 * v13;
  if ( v5 != v16 )
    a3[1] = v16;
  LOBYTE(v15) = v5 != v16;
  return v15;
}
