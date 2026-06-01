__int64 __fastcall sub_46080(__int64 a1, __int64 a2, double a3, double a4, double a5, __m128 a6)
{
  int v6; // ebx
  __int64 v7; // rdi
  int v8; // edx
  int v9; // ecx
  unsigned int v10; // ebp
  int v11; // r8d
  int v12; // r9d
  __int64 v14; // [rsp+0h] [rbp-68h] BYREF
  __int128 v15; // [rsp+8h] [rbp-60h]
  __int64 v16; // [rsp+20h] [rbp-48h] BYREF
  __int128 v17; // [rsp+28h] [rbp-40h]
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]

  v6 = a1;
  v7 = *(_QWORD *)(a1 + 864);
  v18 = __readfsqword(0x28u);
  v15 = 0;
  v14 = 0;
  v16 = 0;
  v17 = 0;
  v10 = sub_5B480(v7, &v14, &v16);
  if ( (_BYTE)v10 )
  {
    sub_65BB0(v6, (unsigned int)"GDB: Received %lu bytes of general register values from remote\n", v15, v9, v11, v12);
    sub_42A20((_QWORD *)(a2 + 48), &v14, &v16, 0.0, a4, a5, a6);
  }
  else
  {
    sub_65BB0(v6, (unsigned int)"GDB: Could not fetch general registers from remote.\n", v8, v9, v11, v12);
  }
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree();
  }
  return v10;
}

