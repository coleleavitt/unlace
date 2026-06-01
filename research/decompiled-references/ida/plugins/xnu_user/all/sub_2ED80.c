__int64 __fastcall sub_2ED80(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = operator new(0x28u);
  *(_QWORD *)v2 = &off_98228;
  *(_QWORD *)(v2 + 24) = a2;
  *(_QWORD *)(v2 + 32) = a1;
  *(_QWORD *)(v2 + 8) = 0xFFFFFFFFLL;
  *(_DWORD *)(v2 + 16) = 0;
  return create_generic_linput();
}

