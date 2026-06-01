__int64 __fastcall sub_11DF60(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  int v3; // ebp
  unsigned int v4; // ebp
  unsigned __int64 v6; // r12
  unsigned __int64 *v7; // rax
  __int64 v8[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v9; // [rsp+10h] [rbp-38h] BYREF
  __int128 v10; // [rsp+18h] [rbp-30h]
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  if ( ~a2 <= a3 )
    a3 = ~a2;
  v8[0] = 0;
  v8[1] = 0;
  v10 = 0;
  v9 = 0;
  if ( a3 + a2 - 1 >= a2 )
  {
    v6 = a3;
    v9 = qvector_reserve();
    v7 = (unsigned __int64 *)(16 * v10 + v9);
    *v7 = a2;
    v7[1] = v6;
    *(_QWORD *)&v10 = v10 + 1;
  }
  v3 = sub_5F800(a1, v8);
  v4 = sub_3113F0(a1 + 2, &v9) | v3;
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree();
  }
  qfree();
  return v4;
}

