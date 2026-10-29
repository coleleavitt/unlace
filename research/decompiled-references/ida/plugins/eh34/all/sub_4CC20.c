__int64 __fastcall sub_4CC20(unsigned __int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax

  v2 = sub_4C640(a1);
  *(_DWORD *)(v2 + 4) = 1;
  v3 = v2;
  v4 = operator new(0x28u);
  *(_QWORD *)(v4 + 8) = 0;
  *(_QWORD *)v4 = a2;
  *(_BYTE *)(v4 + 32) = 0;
  *(_OWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v3 + 16) = v4;
  *(_DWORD *)(v3 + 8) = 2;
  return v3;
}

