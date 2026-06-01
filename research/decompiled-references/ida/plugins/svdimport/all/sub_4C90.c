__int64 __fastcall sub_4C90(__int64 a1)
{
  _BYTE *v1; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v1 = (_BYTE *)qvector_reserve();
  *(_QWORD *)a1 = v1;
  *(_QWORD *)(a1 + 8) = 1;
  *v1 = 0;
  return a1;
}

