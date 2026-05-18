void *__fastcall sub_A5A30(unsigned __int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  void *v3; // rbx
  void (__fastcall *v5)(void *); // rax
  void *v6; // rdi
  _QWORD v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v7[1] = __readfsqword(0x28u);
  v2 = (_QWORD *)operator new(0x10u);
  *((_BYTE *)v2 + 8) = 56;
  v3 = v2;
  *v2 = off_2385A8;
  *((_DWORD *)v2 + 3) = 0;
  if ( a1 )
  {
    if ( __CFADD__(a1, a2) )
    {
      if ( !v2 )
        return nullptr;
    }
    else
    {
      v7[0] = a1;
      *((_DWORD *)v2 + 3) = sub_196ED0(v7, a1 + a2);
      if ( a1 < v7[0] )
        return v3;
      if ( !v3 )
        return nullptr;
      v5 = *(void (__fastcall **)(void *))(*(_QWORD *)v3 + 8LL);
      if ( v5 != sub_9CB00 )
      {
        v6 = v3;
        v3 = nullptr;
        v5(v6);
        return v3;
      }
    }
    operator delete(v3, 0x10u);
    return nullptr;
  }
  return v3;
}
