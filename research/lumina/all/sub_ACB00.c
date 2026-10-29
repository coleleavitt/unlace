_DWORD *__fastcall sub_ACB00(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _DWORD *v3; // rbx
  __int64 v4; // rbp
  void (__fastcall *v6)(void *); // rax
  _DWORD *v7; // rdi
  unsigned __int64 v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v8[1] = __readfsqword(0x28u);
  v2 = operator new(0x18u);
  *(_BYTE *)(v2 + 8) = 95;
  v3 = (_DWORD *)v2;
  *(_QWORD *)v2 = off_238CF8;
  *(_QWORD *)(v2 + 12) = 0;
  if ( a1 )
  {
    v8[0] = a1;
    v4 = a2 + a1;
    if ( __CFADD__(a2, a1) )
    {
      if ( !v2 )
        return nullptr;
LABEL_4:
      operator delete(v3, 0x18u);
      return nullptr;
    }
    if ( !sub_6C650((_DWORD *)(v2 + 12), v8, v4) || !sub_6C650(v3 + 4, v8, v4) )
    {
      if ( !v3 )
        return nullptr;
      v6 = *(void (__fastcall **)(void *))(*(_QWORD *)v3 + 8LL);
      if ( v6 != sub_9CB60 )
      {
        v7 = v3;
        v3 = nullptr;
        v6(v7);
        return v3;
      }
      goto LABEL_4;
    }
  }
  return v3;
}
