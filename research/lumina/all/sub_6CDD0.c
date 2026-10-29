__int64 __fastcall sub_6CDD0(const void *a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // r12
  bool v5; // zf
  void (__fastcall *v7)(_QWORD *); // rax
  const void *v8; // [rsp+8h] [rbp-30h] BYREF

  v8 = a1;
  v2 = operator new(0x60u);
  *(_BYTE *)(v2 + 8) = 13;
  v3 = (_QWORD *)v2;
  v4 = v2;
  *(_QWORD *)v2 = &off_236F48;
  v5 = v8 == nullptr;
  *(_DWORD *)(v2 + 12) = 0;
  *(_QWORD *)(v2 + 16) = 0;
  *(_BYTE *)(v2 + 46) = 0;
  *(_QWORD *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 72) = 0;
  *(_DWORD *)(v2 + 40) = 0;
  *(_WORD *)(v2 + 44) = 0;
  *(_OWORD *)(v2 + 24) = 0;
  *(_OWORD *)(v2 + 56) = 0;
  *(_OWORD *)(v2 + 80) = 0;
  if ( v5 || (unsigned __int8)sub_6CCA0(v2, &v8, a2) )
    return v4;
  if ( v3 )
  {
    v7 = *(void (__fastcall **)(_QWORD *))(*v3 + 8LL);
    if ( v7 == sub_67EC0 )
    {
      sub_66090(v3);
      operator delete(v3, 0x60u);
    }
    else
    {
      v7(v3);
    }
  }
  return 0;
}
