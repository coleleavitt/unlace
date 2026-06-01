__int64 (__fastcall **__fastcall sub_8D00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rdx

  result = &off_1E540;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 48) = 0;
  *(_QWORD *)a1 = &off_1E540;
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 40) = a3;
  *(_OWORD *)(a1 + 16) = 0;
  if ( a4 )
  {
    result = nullptr;
    v8 = a4 + 1;
    if ( a4 != -1 )
    {
      v9 = qvector_reserve(a1 + 8, 0, v8, 1, a5, a6);
      v10 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = v9;
      memset((void *)(v9 + v10), 0, v8 - v10);
      *(_QWORD *)(a1 + 16) = v8;
      result = *(__int64 (__fastcall ***)())(a1 + 8);
    }
    *((_BYTE *)result + a4) = 0;
  }
  return result;
}

