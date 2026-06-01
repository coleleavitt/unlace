unsigned __int64 __fastcall sub_1F6F0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // [rsp+8h] [rbp-20h]

  v3 = a1[10];
  v4 = a1[9];
  v12 = __readfsqword(0x28u);
  if ( a1[11] < (unsigned __int64)(v3 + 1) )
  {
    v10 = qvector_reserve();
    a1[9] = v10;
    v4 = v10;
    v3 = a1[10];
  }
  *(_QWORD *)(v4 + 8 * v3) = a2;
  ++a1[10];
  v5 = qstrdup();
  v6 = a1[12];
  v7 = v5;
  v8 = a1[13];
  if ( a1[14] < (unsigned __int64)(v8 + 1) )
  {
    v11 = qvector_reserve();
    a1[12] = v11;
    v6 = v11;
    v8 = a1[13];
  }
  *(_QWORD *)(v6 + 8 * v8) = v7;
  ++a1[13];
  return v12 - __readfsqword(0x28u);
}

