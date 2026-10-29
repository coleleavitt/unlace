__int64 __fastcall sub_90470(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 *v5; // r12
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  __int64 result; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx

  v5 = (__int64 *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 48) = 0;
  *(_QWORD *)a1 = &off_C92B8;
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 40) = a3;
  *(_OWORD *)(a1 + 16) = 0;
  if ( a4 )
  {
    v7 = 0;
    v5 = (__int64 *)(a1 + 8);
    v8 = a4 + 1;
    if ( a4 != -1 )
    {
      v11 = qvector_reserve(a1 + 8, 0, v8, 1);
      v12 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = v11;
      memset((void *)(v11 + v12), 0, v8 - v12);
      *(_QWORD *)(a1 + 16) = v8;
      v7 = *(_QWORD *)(a1 + 8);
      a3 = *(_QWORD *)(a1 + 40);
      a2 = *(_QWORD *)(a1 + 32);
    }
    *(_BYTE *)(v7 + a4) = 0;
  }
  result = sub_90280(v5, a2, a3, a4, -1, (__int64)"strings table", 1);
  if ( !(_BYTE)result )
  {
    v10 = *(_QWORD *)(a1 + 8);
    if ( v10 )
    {
      *(_QWORD *)(a1 + 16) = 0;
      result = qfree(v10);
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 24) = 0;
    }
  }
  return result;
}

