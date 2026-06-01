__int64 __fastcall sub_14A70(__int64 a1, int *a2, __int64 a3, int a4)
{
  int v6; // eax
  int v7; // ebx
  int v8; // r15d
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx

  v6 = sub_191F0(a3, 0);
  if ( v6 == -1 )
    return 4294967293LL;
  v7 = v6;
  v8 = sub_191F0(a3, 1);
  if ( v8 == -1 )
    return 4294967293LL;
  sub_19120(a3, 2);
  *(_WORD *)(a1 + 26) += 2;
  v9 = *a2;
  v10 = a1 + 40 * v9;
  *(_BYTE *)(v10 + 41) = 5;
  *(_BYTE *)(v10 + 45) = 1;
  v11 = v8 | (unsigned int)(v7 << 8);
  if ( a4 )
    v11 = sub_195E0(v8 | (unsigned int)(v7 << 8), 0xFFFF);
  v12 = a1 + 40 * v9;
  *(_QWORD *)(v12 + 48) = v11;
  *(_BYTE *)(v12 + 72) = a4;
  ++*a2;
  return 1;
}

