__int64 __fastcall sub_54EE0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rbx
  size_t v7; // rbx
  void *v8; // rax
  void *v9; // rsi
  void *src; // [rsp+0h] [rbp-38h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-30h]
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v3 = sub_135E0(a1, a2);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = v3;
  if ( (unsigned __int8)sub_1ADC0(v3, v4) )
  {
    src = nullptr;
    *(_OWORD *)n = 0;
    if ( (unsigned __int8)sub_4F290(v5 + 864, (__int64 *)&src, v4) )
    {
      v7 = n[0];
      *(_BYTE *)a2 = 7;
      *(_QWORD *)(a2 + 8) = 0;
      *(_OWORD *)(a2 + 16) = 0;
      if ( v7 )
      {
        v8 = (void *)qalloc_or_throw();
        *(_QWORD *)(a2 + 8) = v8;
        v9 = src;
        *(_QWORD *)(a2 + 24) = v7;
        memcpy(v8, v9, v7);
        *(_QWORD *)(a2 + 16) = v7;
      }
    }
    if ( src )
    {
      n[0] = 0;
      qfree();
    }
  }
  return 0;
}

