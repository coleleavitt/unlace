__int64 **__fastcall sub_3A3860(__int64 **a1, __int64 a2)
{
  __int64 *func; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx

  func = (__int64 *)get_func();
  if ( func )
  {
    v3 = operator new(0x60u);
    v4 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(v3 + 32) = func;
    *(_DWORD *)(v3 + 8) = 1;
    *(_QWORD *)(v3 + 16) = v4;
    *(_QWORD *)(v3 + 40) = 0;
    *(_OWORD *)(v3 + 48) = 0;
    v5 = *func;
    func = (__int64 *)v3;
    *(_QWORD *)v3 = &off_4E7098;
    *(_QWORD *)(v3 + 24) = v5;
    *(_BYTE *)(v3 + 64) = 0;
  }
  *a1 = func;
  return a1;
}

