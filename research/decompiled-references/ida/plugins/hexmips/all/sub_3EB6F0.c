unsigned int *__fastcall sub_3EB6F0(_QWORD *a1, int a2, unsigned __int8 *a3, unsigned __int8 *a4, unsigned __int8 *a5)
{
  char *v7; // rax
  __int64 v8; // rbx
  unsigned __int8 *v9; // rax
  unsigned int *v10; // rax
  unsigned int *v11; // rbx
  __int64 v13; // rsi
  unsigned __int8 *v14; // [rsp+10h] [rbp-98h]
  unsigned __int8 *v15; // [rsp+18h] [rbp-90h]
  unsigned __int8 *v16; // [rsp+20h] [rbp-88h]
  _BYTE v17[16]; // [rsp+30h] [rbp-78h] BYREF
  char v18[16]; // [rsp+40h] [rbp-68h] BYREF
  char v19[16]; // [rsp+50h] [rbp-58h] BYREF
  char v20; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v21; // [rsp+68h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v7 = v17;
  do
  {
    *((_DWORD *)v7 + 1) = -1;
    v7 += 16;
    *((_WORD *)v7 - 8) = 0;
    *((_WORD *)v7 - 7) = 0;
    *((_QWORD *)v7 - 1) = 0;
  }
  while ( v7 != &v20 );
  v14 = a3;
  v8 = 0;
  v15 = a4;
  v16 = a5;
  do
  {
    v9 = (&v14)[v8];
    if ( v9 )
    {
      if ( *v9 == 1 )
      {
        v13 = a1[104];
        if ( **(_DWORD **)(v13 + 696) == *((_DWORD *)v9 + 2) )
        {
          sub_11C810((__int64)&v17[16 * v8], v13, 0, *((_DWORD *)v9 + 1), a1[5], 0);
          (&v14)[v8] = &v17[16 * v8];
        }
      }
    }
    ++v8;
  }
  while ( v8 != 3 );
  v10 = (unsigned int *)sub_1D2090((__int64)a1, a2, v14, v15, a5);
  v11 = v10;
  if ( v10 && sub_11A6C0(v10) && *((_BYTE *)v11 + 64) == 1 && v11[18] == **(_DWORD **)(a1[104] + 728LL) )
    *(_DWORD *)(*(_QWORD *)(a1[1] + 920LL) + 128LL) |= 2u;
  sub_118BA0((__int64)v19);
  sub_118BA0((__int64)v18);
  sub_118BA0((__int64)v17);
  return v11;
}

