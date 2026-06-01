unsigned __int64 __fastcall sub_3C50B0(__int64 a1)
{
  __int64 i; // rbx
  unsigned __int64 result; // rax

  for ( i = *(_QWORD *)(a1 + 336); i; i = *(_QWORD *)(i + 224) )
    result = sub_3C5000(i, 0, 0);
  return result;
}

