unsigned __int64 __fastcall sub_31420(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  void *v4; // rsi
  __int64 v5; // rax

  result = unk_241EA0(a1 + 368);
  if ( HIDWORD(result) )
  {
    v4 = *(void **)a2;
    if ( *(_QWORD *)(a2 + 16) <= 0xBu )
    {
      v5 = sub_1987B0(a2, v4, 12, 1);
      *(_QWORD *)a2 = v5;
      v4 = (void *)v5;
    }
    *(_QWORD *)(a2 + 8) = 12;
    qmemcpy(v4, "ID overflow", 11);
    *(_BYTE *)(*(_QWORD *)a2 + 11LL) = 0;
    *(_DWORD *)(a2 + 24) = -2;
    return 0;
  }
  return result;
}
