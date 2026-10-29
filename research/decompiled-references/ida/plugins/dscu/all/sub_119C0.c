__int64 __fastcall sub_119C0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // r12
  __int64 v9; // rax
  unsigned __int64 v10; // r13
  __int64 result; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx

  v7 = (__int64 *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 48) = 0;
  *(_QWORD *)a1 = &off_1E568;
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 40) = a3;
  *(_OWORD *)(a1 + 16) = 0;
  if ( a4 )
  {
    v9 = 0;
    v7 = (__int64 *)(a1 + 8);
    v10 = a4 + 1;
    if ( a4 != -1 )
    {
      v13 = qvector_reserve(a1 + 8, 0, v10, 1, a5, a6);
      v14 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = v13;
      memset((void *)(v13 + v14), 0, v10 - v14);
      *(_QWORD *)(a1 + 16) = v10;
      v9 = *(_QWORD *)(a1 + 8);
      a3 = *(_QWORD *)(a1 + 40);
      a2 = *(_QWORD *)(a1 + 32);
    }
    *(_BYTE *)(v9 + a4) = 0;
  }
  result = sub_117D0(v7, a2, a3, a4, -1, (__int64)"strings table", 1);
  if ( !(_BYTE)result )
  {
    v12 = *(_QWORD *)(a1 + 8);
    if ( v12 )
    {
      *(_QWORD *)(a1 + 16) = 0;
      result = qfree(v12);
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 24) = 0;
    }
  }
  return result;
}

