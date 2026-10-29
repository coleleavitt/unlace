__int64 __fastcall sub_27A80(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 8);
  v2 = v1[10];
  result = v1[9];
  if ( !v2 || *(_BYTE *)(result + v2 - 1) )
  {
    if ( v1[11] < (unsigned __int64)(v2 + 1) )
    {
      result = qvector_reserve();
      v2 = v1[10];
      v1[9] = result;
    }
    *(_BYTE *)(result + v2) = 0;
    result = v1[9];
    ++v1[10];
  }
  return result;
}

