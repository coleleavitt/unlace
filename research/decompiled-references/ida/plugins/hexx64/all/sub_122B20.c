__int64 __fastcall sub_122B20(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  int v3; // ebp
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebp
  __int64 v8; // r12
  __int64 *v9; // rax
  __int64 v10[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 *v11; // [rsp+10h] [rbp-38h] BYREF
  __int128 v12; // [rsp+18h] [rbp-30h]
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  if ( ~a2 <= a3 )
    a3 = ~a2;
  v10[0] = 0;
  v10[1] = 0;
  v12 = 0;
  v11 = nullptr;
  if ( a3 + a2 - 1 >= a2 )
  {
    v8 = a3;
    v11 = (__int64 *)qvector_reserve((__int64)&v11, 0, 1, 16);
    v9 = &v11[2 * v12];
    *v9 = a2;
    v9[1] = v8;
    *(_QWORD *)&v12 = v12 + 1;
  }
  v3 = sub_64280(a1, v10, 0.0);
  v6 = sub_316CB0(a1 + 2, &v11, v4, v5) | v3;
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree((__int64)v11);
  }
  qfree(v10[0]);
  return v6;
}

