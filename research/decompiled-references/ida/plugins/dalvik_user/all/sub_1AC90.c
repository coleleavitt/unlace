__int64 __fastcall sub_1AC90(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  _BYTE *v6; // rax
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v12; // [rsp+0h] [rbp-78h] BYREF
  __int128 v13; // [rsp+8h] [rbp-70h]
  __int64 v14; // [rsp+28h] [rbp-50h]
  unsigned __int64 v15; // [rsp+48h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v13 = 0;
  HIDWORD(v14) = HIDWORD(a3);
  v12 = qvector_reserve();
  LODWORD(v14) = 1;
  v4 = 1;
  v5 = 2;
  v6 = (_BYTE *)v12;
  *(_QWORD *)(v12 + 8) = a3;
  v7 = v14;
  *v6 = 5;
  v8 = v12;
  *(_QWORD *)&v13 = 1;
  if ( *((_QWORD *)&v13 + 1) < 2u )
  {
    v8 = qvector_reserve();
    v4 = v13;
    v12 = v8;
    v5 = v13 + 1;
  }
  v9 = v8 + 40 * v4;
  *(_BYTE *)v9 = 1;
  *(_QWORD *)(v9 + 8) = v7;
  *(_QWORD *)&v13 = v5;
  v10 = sub_50D40(a1 + 864, a2, 8, 2, &v12);
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
  }
  return v10;
}

