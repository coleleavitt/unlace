__int64 __fastcall sub_27030(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebp
  void (__fastcall *v6)(__int64, __int64, __int64, _QWORD, __int64); // r13
  __int64 v7; // rax

  v4 = lreadbytes();
  if ( v4 < 0 )
  {
    v6 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(a1 + 496);
    v7 = qlseek();
    v6(a1, 19, a3, v4, v7);
  }
  return (unsigned int)v4;
}

