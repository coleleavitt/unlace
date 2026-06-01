__int64 __fastcall sub_42E60(__int64 a1, unsigned int a2)
{
  __int64 **v2; // rbx
  int v3; // eax
  int v4; // ebp
  __int64 result; // rax
  void (__fastcall *v6)(void *); // rax

  v2 = (__int64 **)sub_42C40(*(__int64 **)(a1 + 104), a2);
  v3 = sub_2EA20(v2);
  if ( v3 )
  {
    v4 = v3;
    result = operator new(0x48u);
    *(_DWORD *)(result + 8) = 1;
    *(_QWORD *)(result + 16) = a1;
    *(_QWORD *)result = off_AA010;
    *(_QWORD *)(result + 24) = v2;
    *(_QWORD *)(result + 32) = 0;
    *(_BYTE *)(result + 56) = 0;
    *(_DWORD *)(result + 64) = v4;
    *(_BYTE *)(result + 68) = 1;
    *(_OWORD *)(result + 40) = 0;
    return result;
  }
  if ( !v2 )
    return 0;
  v6 = (void (__fastcall *)(void *))(*v2)[37];
  if ( v6 == sub_243F0 )
  {
    operator delete(v2, 0x18u);
    return 0;
  }
  v6(v2);
  return 0;
}

