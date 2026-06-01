unsigned __int64 __fastcall sub_107E0(__int64 a1, __int64 *a2, unsigned __int64 *a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rsi
  unsigned __int64 *v6; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rcx
  bool v9; // cc
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int64 v12; // rax

  v3 = a2[1];
  v4 = *a2;
  v5 = *a3;
  v6 = (unsigned __int64 *)(v4 + 48 * v3 - 48);
  result = v6[1];
  if ( result < a3[1] )
    result = a3[1];
  v8 = *v6;
  v9 = *v6 <= v5;
  v6[1] = result;
  if ( !v9 )
    v8 = v5;
  *v6 = v8;
  if ( a3[4] )
  {
    v10 = v6[3];
    v11 = *(_QWORD *)a3[3];
    result = v6[4];
    if ( v6[5] < result + 1 )
    {
      v12 = qvector_reserve();
      v6[3] = v12;
      v10 = v12;
      result = v6[4];
    }
    *(_QWORD *)(v10 + 8 * result) = v11;
    ++v6[4];
  }
  return result;
}

