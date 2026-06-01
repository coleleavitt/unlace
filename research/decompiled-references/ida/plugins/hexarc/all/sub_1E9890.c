__int64 __fastcall sub_1E9890(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 *v4; // r12
  unsigned __int64 v5; // rbp
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  unsigned __int64 *v11; // rax
  _QWORD v12[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v13; // [rsp+10h] [rbp-38h] BYREF
  __int128 v14; // [rsp+18h] [rbp-30h]
  unsigned __int64 v15; // [rsp+28h] [rbp-20h]

  v3 = 1;
  v15 = __readfsqword(0x28u);
  v4 = *(__int64 **)(a1 + 64);
  if ( !a3 )
    LODWORD(a3) = 1;
  v5 = (int)a3;
  if ( (int)a3 + a2 <= v4[16] )
  {
    v7 = v4[187];
    v8 = v4[180] + a2;
    v12[0] = 0;
    v12[1] = 0;
    v9 = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 16LL);
    v14 = 0;
    v13 = 0;
    v10 = v8 & v9;
    if ( v10 + (int)a3 - 1 >= v10 )
    {
      v13 = qvector_reserve();
      v11 = (unsigned __int64 *)(16 * v14 + v13);
      *v11 = v10;
      v11[1] = v5;
      *(_QWORD *)&v14 = v14 + 1;
    }
    v3 = sub_5E200(v4 + 104, v12);
    if ( !(_BYTE)v3 )
      v3 = sub_3110F0(v4 + 106, &v13);
    if ( v13 )
    {
      *(_QWORD *)&v14 = 0;
      qfree();
    }
    qfree();
  }
  return v3;
}

