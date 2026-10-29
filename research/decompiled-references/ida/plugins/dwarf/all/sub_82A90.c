__int64 (__fastcall **__fastcall sub_82A90(__int64 a1, __int64 a2, __int64 a3, __int64 a4))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdx

  result = &off_C9290;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 48) = 0;
  *(_QWORD *)a1 = &off_C9290;
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 40) = a3;
  *(_OWORD *)(a1 + 16) = 0;
  if ( a4 )
  {
    result = nullptr;
    v6 = a4 + 1;
    if ( a4 != -1 )
    {
      v7 = qvector_reserve(a1 + 8, 0, v6, 1);
      v8 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = v7;
      memset((void *)(v7 + v8), 0, v6 - v8);
      *(_QWORD *)(a1 + 16) = v6;
      result = *(__int64 (__fastcall ***)())(a1 + 8);
    }
    *((_BYTE *)result + a4) = 0;
  }
  return result;
}

