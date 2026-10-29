__int64 __fastcall sub_44E0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(result + 40) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 160LL))(a2);
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a2 + 56LL))(
      a2,
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL),
      27);
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 128LL))(a2, 0xFFFF);
  }
  return result;
}

