__int64 __fastcall sub_97C0(int a1, int a2, __int64 a3, int a4, int a5, int a6)
{
  int v6; // r12d
  unsigned int v8; // ebx
  int v9; // edx
  __int64 v10; // rax
  _QWORD v14[5]; // [rsp+10h] [rbp-88h] BYREF
  __int64 v15; // [rsp+38h] [rbp-60h]
  __int128 v16; // [rsp+40h] [rbp-58h]
  unsigned __int64 v17; // [rsp+58h] [rbp-40h]

  v6 = a3;
  v17 = __readfsqword(0x28u);
  v14[0] = off_36EF8;
  v14[3] = a3;
  v16 = 0;
  v14[4] = a3 + 56LL * a4;
  v14[1] = 0;
  v14[2] = 0;
  v15 = 0;
  callui(86, v14, 1);
  v8 = sub_1ABC0(a1 + 272, a2, v6, a4, a5, a6, a6);
  if ( (_QWORD)v16 )
  {
    v9 = 0;
    v10 = 0;
    do
    {
      ++v9;
      --**(_QWORD **)(v15 + 8 * v10);
      v10 = v9;
    }
    while ( v9 < (unsigned __int64)v16 );
  }
  v14[0] = off_36EF8;
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree();
  }
  v14[0] = &off_375E8;
  qsem_free();
  return v8;
}

