__int64 __fastcall sub_309F0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 *v5; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rdx

  v5 = (__int64 *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 48) = 0;
  *(_QWORD *)a1 = &off_63650;
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 40) = a3;
  *(_OWORD *)(a1 + 16) = 0;
  if ( a4 )
  {
    v6 = 0;
    v5 = (__int64 *)(a1 + 8);
    v7 = a4 + 1;
    if ( a4 != -1 )
    {
      v9 = qvector_reserve();
      v10 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = v9;
      memset((void *)(v9 + v10), 0, v7 - v10);
      *(_QWORD *)(a1 + 16) = v7;
      v6 = *(_QWORD *)(a1 + 8);
      a3 = *(_QWORD *)(a1 + 40);
      a2 = *(_QWORD *)(a1 + 32);
    }
    *(_BYTE *)(v6 + a4) = 0;
  }
  result = sub_30800(v5, a2, a3, a4, -1, (__int64)"strings table", 1);
  if ( !(_BYTE)result )
  {
    if ( *(_QWORD *)(a1 + 8) )
    {
      *(_QWORD *)(a1 + 16) = 0;
      result = qfree();
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 24) = 0;
    }
  }
  return result;
}

