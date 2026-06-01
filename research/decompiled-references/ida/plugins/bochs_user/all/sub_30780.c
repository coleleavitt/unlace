__int64 __fastcall sub_30780(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebp
  size_t v5; // r12
  void *v6; // r14
  _BYTE *v7; // rsi
  __int64 v8; // rax
  void *src; // [rsp+0h] [rbp-48h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-40h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  src = nullptr;
  *(_OWORD *)n = 0;
  v3 = sub_306D0(a1, (__int64 *)&src);
  if ( (_BYTE)v3 )
  {
    v5 = n[0];
    v6 = src;
    *(_QWORD *)(a2 + 8) = 0;
    v7 = *(_BYTE **)a2;
    if ( *(_QWORD *)(a2 + 16) < v5 + 1 )
    {
      v8 = qvector_reserve();
      *(_QWORD *)a2 = v8;
      v7 = (_BYTE *)v8;
    }
    *(_QWORD *)(a2 + 8) = v5 + 1;
    v7[v5] = 0;
    memmove(*(void **)a2, v6, v5);
  }
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  return v3;
}

