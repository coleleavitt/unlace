__int64 *__fastcall sub_31A90(__int64 *a1, char a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax

  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  v2 = qvector_reserve();
  v3 = a1[1];
  *a1 = v2;
  memset((void *)(v2 + v3), 0, 5 - v3);
  v4 = *a1;
  a1[1] = 5;
  *(_DWORD *)v4 = 0;
  *(_BYTE *)(v4 + 4) = a2;
  return a1;
}

