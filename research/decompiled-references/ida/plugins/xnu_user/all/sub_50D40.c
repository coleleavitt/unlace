__int64 __fastcall sub_50D40(__int64 a1, __int64 a2, double a3, double a4, double a5, __m128 a6)
{
  int v6; // ebx
  __int64 v7; // rdi
  int v8; // edx
  int v9; // ecx
  unsigned int v10; // ebp
  int v11; // r8d
  __int64 v13; // [rsp+0h] [rbp-68h] BYREF
  __int128 v14; // [rsp+8h] [rbp-60h]
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF
  __int128 v16; // [rsp+28h] [rbp-40h]
  unsigned __int64 v17; // [rsp+38h] [rbp-30h]

  v6 = a1;
  v7 = *(_QWORD *)(a1 + 864);
  v17 = __readfsqword(0x28u);
  v14 = 0;
  v13 = 0;
  v15 = 0;
  v16 = 0;
  v10 = sub_65FC0(v7, &v13, &v15);
  if ( (_BYTE)v10 )
  {
    sub_70460(v6, (unsigned int)"GDB: Received %lu bytes of general register values from remote\n", v14, v9, v11);
    sub_4D760((_QWORD *)(a2 + 48), &v13, &v15, 0.0, a4, a5, a6);
  }
  else
  {
    sub_70460(v6, (unsigned int)"GDB: Could not fetch general registers from remote.\n", v8, v9, v11);
  }
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree();
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  return v10;
}

