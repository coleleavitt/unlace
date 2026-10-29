__int64 __fastcall sub_C940(__int64 *a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rdi
  char Number; // dl
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rax
  _QWORD v12[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = *a1;
  v12[2] = __readfsqword(0x28u);
  Number = PyW_GetNumber(v3, v12, 0);
  result = 0xFFFFFFFFLL;
  if ( Number )
  {
    v7 = a3[1];
    v8 = v12[0];
    v9 = a3[2];
    v10 = *a3;
    v12[1] = v12[0];
    if ( v9 < v7 + 1 )
    {
      v11 = qvector_reserve();
      *a3 = v11;
      v10 = v11;
      v7 = a3[1];
    }
    *(_QWORD *)(v10 + 8 * v7) = v8;
    ++a3[1];
    return 1;
  }
  return result;
}

