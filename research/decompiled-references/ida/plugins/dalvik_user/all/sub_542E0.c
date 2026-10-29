__int64 __fastcall sub_542E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // rax
  size_t v6; // rbp
  void *v7; // rax
  void *v8; // rsi
  void *src; // [rsp+0h] [rbp-38h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-30h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 8);
  v11 = __readfsqword(0x28u);
  src = nullptr;
  *(_OWORD *)n = 0;
  v4 = sub_135E0(a1, a2);
  if ( (unsigned __int8)sub_4C170(v4 + 864, (__int64 *)&src, v2) )
  {
    v6 = n[0];
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    *(_OWORD *)(a2 + 16) = 0;
    if ( v6 )
    {
      v7 = (void *)qalloc_or_throw();
      *(_QWORD *)(a2 + 8) = v7;
      v8 = src;
      *(_QWORD *)(a2 + 24) = v6;
      memcpy(v7, v8, v6);
      *(_QWORD *)(a2 + 16) = v6;
    }
  }
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  return 0;
}

