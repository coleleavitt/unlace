unsigned __int64 __fastcall sub_1D6200(__int64 *a1, __int64 a2)
{
  unsigned int *v2; // rax
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  _QWORD v10[5]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v11; // [rsp+28h] [rbp-40h]
  __int128 v12; // [rsp+30h] [rbp-38h]
  __int64 v13; // [rsp+40h] [rbp-28h]
  unsigned __int64 v14; // [rsp+48h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  v2 = *(unsigned int **)(a1[2] + 56);
  if ( v2 )
  {
    if ( sub_32ED40(*v2, 1) )
    {
      v5 = a1[2];
      v10[1] = 0;
      *(_QWORD *)(v5 + 40) = a2;
      v6 = a1[2];
      memset(&v10[2], 0, 24);
      v10[0] = off_4DE3D8;
      v11 = 0;
      v13 = 0;
      v12 = 0;
      sub_31EDC0(v6, (__int64)v10);
      v8 = sub_67FD0(a1[1], a1[5], 2, v7, 0.0);
      v9 = v11;
      a1[2] = v8;
      v10[0] = off_4DE3D8;
      if ( v9 )
      {
        *(_QWORD *)&v12 = 0;
        qfree(v9);
      }
    }
  }
  return v14 - __readfsqword(0x28u);
}

