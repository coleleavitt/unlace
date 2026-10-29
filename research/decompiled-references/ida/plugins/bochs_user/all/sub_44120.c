char __fastcall sub_44120(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v6; // rdi
  char result; // al
  __int64 v9[5]; // [rsp+0h] [rbp-28h] BYREF

  v6 = *(_QWORD *)(a1 + 48);
  v9[1] = __readfsqword(0x28u);
  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v6 + 72LL))(v6, 24, a2, v9);
  if ( result )
    return (unsigned int)sub_26D50(*(_QWORD *)(a1 + 4832), v9[0], a3, a4) == 0;
  return result;
}

