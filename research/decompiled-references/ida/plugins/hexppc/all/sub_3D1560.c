__int64 __fastcall sub_3D1560(volatile signed __int32 *a1)
{
  __int64 result; // rax
  __int64 v2; // rax

  if ( *((_QWORD *)a1 + 1) == 0x100000001LL )
  {
    v2 = *(_QWORD *)a1;
    *((_QWORD *)a1 + 1) = 0;
    (*(void (**)(void))(v2 + 16))();
    return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 24LL))(a1);
  }
  else
  {
    if ( &_pthread_key_create )
    {
      result = (unsigned int)_InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF);
    }
    else
    {
      result = *((unsigned int *)a1 + 2);
      *((_DWORD *)a1 + 2) = result - 1;
    }
    if ( (_DWORD)result == 1 )
      return sub_3D1510(a1);
  }
  return result;
}

