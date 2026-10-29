unsigned __int64 __fastcall sub_CE610(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r9
  int v3; // eax
  __int64 v4; // rdx
  int v5; // edx
  _QWORD *v6; // rdi
  int v7; // ecx
  _DWORD *v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  int v13; // ecx
  int v14; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 16);
  v2 = a1;
  v15 = __readfsqword(0x28u);
  v3 = 0;
  if ( v1 )
    v3 = *(_DWORD *)(v1 + 40);
  v4 = *(_QWORD *)(a1 + 24);
  v14 = v3;
  if ( !v4 || (v5 = *(_DWORD *)(v4 + 40), v5 <= v3) )
  {
    v6 = *(_QWORD **)(a1 + 32);
    if ( (*(_DWORD *)(v2 + 4) & 0x800) == 0 )
      goto LABEL_6;
LABEL_14:
    sub_CE580(v6, &v14);
    goto LABEL_12;
  }
  v13 = *(_DWORD *)(a1 + 4);
  v14 = v5;
  v6 = *(_QWORD **)(a1 + 32);
  if ( (v13 & 0x800) != 0 )
    goto LABEL_14;
LABEL_6:
  if ( v6 )
  {
    sub_CE540(v6, &v14);
    v8 = *(_DWORD **)(v2 + 32);
    if ( (int)*v8 > 0 )
    {
      v9 = (__int64 *)(v8 + 2);
      v10 = (__int64)&v8[6 * (*v8 - 1) + 8];
      do
      {
        v11 = *v9;
        v9 += 3;
        v7 |= *(_DWORD *)(v11 + 4);
      }
      while ( (__int64 *)v10 != v9 );
      v7 &= 0x200104u;
    }
    *(_DWORD *)(v2 + 4) |= v7;
  }
LABEL_12:
  *(_DWORD *)(v2 + 40) = v14 + 1;
  return __readfsqword(0x28u) ^ v15;
}
