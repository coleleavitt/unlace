_QWORD *__fastcall sub_BAC00(_QWORD *a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx

  if ( (unsigned int)sub_142D90(*(_QWORD *)(*a2 + 16), "BEGIN IMMEDIATE TRANSACTION", 0, 0, 0) )
  {
    if ( a3 )
      sub_BAA10(a3, *a2);
    *a1 = 0;
    return a1;
  }
  else
  {
    v5 = operator new(0x20u);
    v6 = *a2;
    *(_DWORD *)(v5 + 8) = 1;
    *(_QWORD *)v5 = &off_239CB8;
    *(_QWORD *)(v5 + 16) = v6;
    if ( v6 )
      ++*(_DWORD *)(v6 + 8);
    *(_DWORD *)(v5 + 24) = 0;
    *a1 = v5;
    return a1;
  }
}
