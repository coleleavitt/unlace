__int64 __fastcall sub_3D970(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(v2 + 4184);
  *(_QWORD *)(v2 + 4184) = a2;
  return v3;
}

