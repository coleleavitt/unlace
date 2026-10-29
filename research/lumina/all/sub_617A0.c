__int64 __fastcall sub_617A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  void *v3; // rbx
  __int64 v4; // rbp
  void (__fastcall *v6)(void *); // rax
  __int64 v7; // [rsp+8h] [rbp-40h] BYREF
  int v8; // [rsp+12h] [rbp-36h]
  __int16 v9; // [rsp+16h] [rbp-32h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v7 = a1;
  v10 = __readfsqword(0x28u);
  v2 = operator new(0x18u);
  *(_BYTE *)(v2 + 8) = 20;
  v3 = (void *)v2;
  v4 = v2;
  v8 = 0;
  v9 = 0;
  *(_QWORD *)v2 = off_236B00;
  *(_DWORD *)(v2 + 9) = 0;
  *(_WORD *)(v2 + 13) = 0;
  *(_QWORD *)(v2 + 16) = 0;
  if ( a1 && !(unsigned __int8)sub_61710(v2, &v7, a2) )
  {
    if ( v3 )
    {
      v6 = *(void (__fastcall **)(void *))(*(_QWORD *)v3 + 8LL);
      if ( v6 != sub_5F010 )
      {
        v4 = 0;
        v6(v3);
        return v4;
      }
      operator delete(v3, 0x18u);
    }
    return 0;
  }
  return v4;
}
