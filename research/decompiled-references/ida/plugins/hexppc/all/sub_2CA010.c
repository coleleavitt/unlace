__int64 __fastcall sub_2CA010(__int64 *a1, int *a2)
{
  unsigned __int64 v4; // rsi
  __int64 result; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rax

  v4 = *a1;
  result = a1[1];
  v6 = a1[2];
  v7 = result + 1;
  if ( (unsigned __int64)a2 >= v4 && (unsigned __int64)a2 < v4 + 4 * v6 )
  {
    v8 = *a2;
    if ( v6 < v7 )
    {
      v10 = qvector_reserve();
      *a1 = v10;
      v4 = v10;
      result = a1[1];
    }
    *(_DWORD *)(v4 + 4 * result) = v8;
    ++a1[1];
  }
  else
  {
    if ( v6 < v7 )
    {
      v9 = qvector_reserve();
      *a1 = v9;
      v4 = v9;
      result = a1[1];
    }
    *(_DWORD *)(v4 + 4 * result) = *a2;
    ++a1[1];
  }
  return result;
}

