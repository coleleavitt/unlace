__int64 __fastcall indexer_match_all_async(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // r9
  __int64 v5; // rax
  _QWORD *v6; // rbx
  volatile signed __int32 *v7; // rdx
  signed __int32 v8; // eax
  __int64 v10; // rax
  __int64 v11; // [rsp+0h] [rbp-28h] BYREF
  _QWORD *v12; // [rsp+8h] [rbp-20h]
  unsigned __int64 v13; // [rsp+18h] [rbp-10h]

  v13 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(qword_2CC85F8 + 1672);
  v11 = *a4;
  v5 = a4[1];
  if ( v5 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v5 + 8), 1u);
    else
      ++*(_DWORD *)(v5 + 8);
  }
  v12 = (_QWORD *)v5;
  sub_437150(v4, a1, a2, a3, &v11);
  v6 = v12;
  if ( !v12 )
    return v13 - __readfsqword(0x28u);
  v7 = (volatile signed __int32 *)(v12 + 1);
  if ( v12[1] == 0x100000001LL )
  {
    v10 = *v12;
    v12[1] = 0;
    (*(void (__fastcall **)(_QWORD *, __int64, volatile signed __int32 *))(v10 + 16))(v6, a1, v7);
    return (*(__int64 (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
  }
  else
  {
    if ( &_pthread_key_create )
    {
      v8 = _InterlockedExchangeAdd(v7, 0xFFFFFFFF);
    }
    else
    {
      v8 = *((_DWORD *)v12 + 2);
      *((_DWORD *)v12 + 2) = v8 - 1;
    }
    if ( v8 != 1 )
      return v13 - __readfsqword(0x28u);
    return sub_433390(v6);
  }
}
