// Alternative name is '_ZN5boost4asio6detail8op_queueINS1_19scheduler_operationEED2Ev'
unsigned __int64 __fastcall boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::~op_queue(
        __int64 a1)
{
  __int64 *i; // rsi
  void (__fastcall *v2)(_QWORD, __int64 *, __int128 *, _QWORD); // rax
  __int64 v3; // rax
  __int128 v5; // [rsp+0h] [rbp-38h] BYREF
  __int64 v6; // [rsp+10h] [rbp-28h]
  unsigned __int64 v7; // [rsp+18h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  for ( i = *(__int64 **)a1; *(_QWORD *)a1; i = *(__int64 **)a1 )
  {
    v3 = *i;
    *(_QWORD *)a1 = *i;
    if ( v3 )
    {
      *i = 0;
      v2 = (void (__fastcall *)(_QWORD, __int64 *, __int128 *, _QWORD))i[1];
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0;
      v2 = (void (__fastcall *)(_QWORD, __int64 *, __int128 *, _QWORD))i[1];
      *i = 0;
    }
    v5 = 0;
    v6 = 0;
    v2(0, i, &v5, 0);
  }
  return v7 - __readfsqword(0x28u);
}

