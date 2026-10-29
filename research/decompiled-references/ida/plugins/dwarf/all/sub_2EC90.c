unsigned __int64 __fastcall sub_2EC90(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r12
  unsigned int v5; // ebx
  unsigned __int64 v6; // rax
  unsigned int v7; // edx
  char v8; // dl
  __int64 v9; // rax
  __int64 (__fastcall **v11)(); // [rsp+0h] [rbp-58h] BYREF
  int v12; // [rsp+8h] [rbp-50h]
  __int64 v13; // [rsp+10h] [rbp-48h] BYREF
  __int128 v14; // [rsp+18h] [rbp-40h]
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v3 = 278;
  v15 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 72) = 0x8000000000LL;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  v5 = a3;
  v6 = a3;
  *(_OWORD *)(a1 + 56) = 0;
  while ( (unsigned int)v6 > 8 || !_bittest64(&v3, v6) )
    v6 = (unsigned __int8)getinf(59);
  _BitScanReverse(&v7, v6);
  v8 = v7 + 1;
  if ( !(_DWORD)v6 )
    v8 = 1;
  *(_BYTE *)(a1 + 76) |= v8;
  if ( a3 )
  {
    v9 = *(_QWORD *)(a1 + 80);
    do
    {
      v9 <<= 8;
      LOBYTE(v9) = -1;
      --v5;
    }
    while ( v5 );
    *(_QWORD *)(a1 + 80) = v9;
  }
  v12 = 0;
  v11 = off_C78A0;
  v13 = 0;
  v14 = 0;
  sub_9D820(a1, a2, &v11, &v13);
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13);
  }
  return v15 - __readfsqword(0x28u);
}

