__int64 __fastcall sub_3E68E0(__int64 a1, __int64 *a2, __int64 a3, _BYTE *a4)
{
  char v4; // al
  int v5; // eax
  int v6; // edx
  unsigned int v7; // r12d
  __int64 v9; // rax
  int v10; // r13d
  unsigned int v11; // r14d
  _BYTE *v12; // [rsp+8h] [rbp-40h]
  _QWORD v13[7]; // [rsp+10h] [rbp-38h] BYREF

  v4 = *a4;
  v13[1] = __readfsqword(0x28u);
  if ( v4 != 4 )
  {
LABEL_2:
    if ( v4 == 1 )
    {
      v5 = *(_DWORD *)(a1 + 468);
      v6 = *((_DWORD *)a4 + 2);
      if ( v5 <= v6 && v6 < v5 + 4 )
        sub_60440(a2, *(_DWORD *)(a1 + 472), 32);
    }
    return 0;
  }
  v9 = *((_QWORD *)a4 + 1);
  if ( *(_DWORD *)v9 != 20
    || *(_BYTE *)(v9 + 32) != 1
    || *(_DWORD *)(a1 + 468) != *(_DWORD *)(v9 + 40)
    || *(_DWORD *)(v9 + 36) != 4 )
  {
    return 0;
  }
  v12 = a4;
  v7 = sub_11C340((char *)(v9 + 48), v13, 0);
  if ( !(_BYTE)v7 )
  {
    a4 = v12;
    v4 = *v12;
    goto LABEL_2;
  }
  v10 = 0;
  v11 = 0x80000000;
  do
  {
    if ( (v11 & v13[0]) != 0 )
      sub_60440(a2, v10 + *(_DWORD *)(a1 + 472), 32);
    ++v10;
    v11 >>= 1;
  }
  while ( v10 != 32 );
  return v7;
}

